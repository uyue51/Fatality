#include <intrin.h>
// used: d3d11
#include <d3d11.h>

#include "mem.h"

// used: chartohexint
#include "crt.h"
// used: pe64
#include "pe64.h"

/// <summary>
/// pasted
/// </summary>

namespace utils
{
	struct pattern_token_t
	{
		uint8_t byte;
		bool wc;
	};

	__forceinline uint8_t hex_to_char(const char in)
	{
		return static_cast<char>(isdigit(in) ? (in - '0') : (in - 'A' + 10));
	}

	// Function to solve addresses
	std::uint8_t* solve_address(std::uint8_t* nAddressBytes, std::uint32_t nRVAOffset, std::uint32_t nRIPOffset) {
		// Read the RVA value from the specified offset
		std::uint32_t nRVA = *reinterpret_cast<std::uint32_t*>(nAddressBytes + nRVAOffset);

		// Compute the RIP value
		std::uint64_t nRIP = reinterpret_cast<std::uint64_t>(nAddressBytes) + nRIPOffset;

		// Return the calculated address
		return reinterpret_cast<std::uint8_t*>(nRVA + nRIP);
	}

	void* get_module_base_handle(const wchar_t* wszModuleName)
	{
		const _PEB* pPEB = reinterpret_cast<_PEB*>(__readgsqword(0x60));

		if (wszModuleName == nullptr)
			return pPEB->ImageBaseAddress;

		void* pModuleBase = nullptr;
		for (LIST_ENTRY* pListEntry = pPEB->Ldr->InMemoryOrderModuleList.Flink; pListEntry != &pPEB->Ldr->InMemoryOrderModuleList; pListEntry = pListEntry->Flink)
		{
			const _LDR_DATA_TABLE_ENTRY* pEntry = CONTAINING_RECORD(pListEntry, _LDR_DATA_TABLE_ENTRY, InMemoryOrderLinks);

			if (pEntry->FullDllName.Buffer != nullptr && CRT::StringCompare(wszModuleName, pEntry->BaseDllName.Buffer) == 0)
			{
				pModuleBase = pEntry->DllBase;
				break;
			}
		}


		return pModuleBase;
	}

	void* get_export_address(const void* hModuleBase, const char* szProcedureName)
	{
		const auto pBaseAddress = static_cast<const std::uint8_t*>(hModuleBase);

		const auto pIDH = static_cast<const IMAGE_DOS_HEADER*>(hModuleBase);
		if (pIDH->e_magic != IMAGE_DOS_SIGNATURE)
			return nullptr;

		const auto pINH = reinterpret_cast<const IMAGE_NT_HEADERS64*>(pBaseAddress + pIDH->e_lfanew);
		if (pINH->Signature != IMAGE_NT_SIGNATURE)
			return nullptr;

		const IMAGE_OPTIONAL_HEADER64* pIOH = &pINH->OptionalHeader;
		const std::uintptr_t nExportDirectorySize = pIOH->DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].Size;
		const std::uintptr_t uExportDirectoryAddress = pIOH->DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress;

		if (nExportDirectorySize == 0U || uExportDirectoryAddress == 0U)
		{

			return nullptr;
		}

		const auto pIED = reinterpret_cast<const IMAGE_EXPORT_DIRECTORY*>(pBaseAddress + uExportDirectoryAddress);
		const auto pNamesRVA = reinterpret_cast<const std::uint32_t*>(pBaseAddress + pIED->AddressOfNames);
		const auto pNameOrdinalsRVA = reinterpret_cast<const std::uint16_t*>(pBaseAddress + pIED->AddressOfNameOrdinals);
		const auto pFunctionsRVA = reinterpret_cast<const std::uint32_t*>(pBaseAddress + pIED->AddressOfFunctions);

		// Perform binary search to find the export by name
		std::size_t nRight = pIED->NumberOfNames, nLeft = 0U;
		while (nRight != nLeft)
		{
			// Avoid INT_MAX/2 overflow
			const std::size_t uMiddle = nLeft + ((nRight - nLeft) >> 1U);
			const int iResult = CRT::StringCompare(szProcedureName, reinterpret_cast<const char*>(pBaseAddress + pNamesRVA[uMiddle]));

			if (iResult == 0)
			{
				const std::uint32_t uFunctionRVA = pFunctionsRVA[pNameOrdinalsRVA[uMiddle]];



				// Check if it's a forwarded export
				if (uFunctionRVA >= uExportDirectoryAddress && uFunctionRVA - uExportDirectoryAddress < nExportDirectorySize)
				{
					// Forwarded exports are not supported
					break;
				}

				return const_cast<std::uint8_t*>(pBaseAddress) + uFunctionRVA;
			}

			if (iResult > 0)
				nLeft = uMiddle + 1;
			else
				nRight = uMiddle;
		}


		// Export not found
		return nullptr;
	}

	std::uint8_t* find_pattern(const wchar_t* wszModuleName, const char* szPattern)
	{
		// convert pattern string to byte array
		const std::size_t nApproximateBufferSize = (CRT::StringLength(szPattern) >> 1U) + 1U;
		std::uint8_t* arrByteBuffer = static_cast<std::uint8_t*>(MEM_STACKALLOC(nApproximateBufferSize));
		char* szMaskBuffer = static_cast<char*>(MEM_STACKALLOC(nApproximateBufferSize));
		patterns_to_byte(szPattern, arrByteBuffer, szMaskBuffer);

		// @test: use search with straight in-place conversion? do not think it will be faster, cuz of bunch of new checks that gonna be performed for each iteration
		return find_pattern(wszModuleName, reinterpret_cast<const char*>(arrByteBuffer), szMaskBuffer);
	}

	std::uint8_t* find_pattern(const wchar_t* wszModuleName, const char* szBytePattern, const char* szByteMask)
	{
		const void* hModuleBase = get_module_base_handle(wszModuleName);

		if (hModuleBase == nullptr)
		{
			return nullptr;
		}

		const auto pBaseAddress = static_cast<const std::uint8_t*>(hModuleBase);

		const auto pIDH = static_cast<const IMAGE_DOS_HEADER*>(hModuleBase);
		if (pIDH->e_magic != IMAGE_DOS_SIGNATURE)
		{
			return nullptr;
		}

		const auto pINH = reinterpret_cast<const IMAGE_NT_HEADERS*>(pBaseAddress + pIDH->e_lfanew);
		if (pINH->Signature != IMAGE_NT_SIGNATURE)
		{
			return nullptr;
		}

		const std::uint8_t* arrByteBuffer = reinterpret_cast<const std::uint8_t*>(szBytePattern);
		const std::size_t nByteCount = CRT::StringLength(szByteMask);

		std::uint8_t* pFoundAddress = nullptr;

		// perform little overhead to keep all patterns unique
#ifdef CS_PARANOID_PATTERN_UNIQUENESS
		const std::vector<std::uint8_t*> vecFoundOccurrences = FindPatternAllOccurrencesEx(pBaseAddress, pINH->OptionalHeader.SizeOfImage, arrByteBuffer, nByteCount, szByteMask);

		// notify user about non-unique pattern
		if (!vecFoundOccurrences.empty())
		{
			// notify user about non-unique pattern
			if (vecFoundOccurrences.size() > 1U)
			{
				char* szPattern = static_cast<char*>(MEM_STACKALLOC((nByteCount << 1U) + nByteCount));
				const std::size_t nConvertedPatternLength = bytes_to_pattern(arrByteBuffer, nByteCount, szPattern);

				MEM_STACKFREE(szPattern);
			}

			// return first found occurrence
			pFoundAddress = vecFoundOccurrences[0];
		}
#else
	// @todo: we also can go through code sections and skip noexec pages, but will it really improve performance? / or at least for all occurrences search
	// https://docs.microsoft.com/en-us/windows/win32/api/winnt/ns-winnt-image_section_header
#if 0
		IMAGE_SECTION_HEADER* pCurrentSection = IMAGE_FIRST_SECTION(pINH);
		for (WORD i = 0U; i != pINH->FileHeader.NumberOfSections; i++)
		{
			// check does page have executable code
			if (pCurrentSection->Characteristics & IMAGE_SCN_CNT_CODE || pCurrentSection->Characteristics & IMAGE_SCN_MEM_EXECUTE)
			{
				pFoundAddress = FindPatternEx(pBaseAddress + pCurrentSection->VirtualAddress, pCurrentSection->SizeOfRawData, arrByteBuffer, nByteCount, szByteMask);

				if (pFoundAddress != nullptr)
					break;
			}

			++pCurrentSection;
		}
#else
		pFoundAddress = FindPatternEx(pBaseAddress, pINH->OptionalHeader.SizeOfImage, arrByteBuffer, nByteCount, szByteMask);
#endif
#endif

		if (pFoundAddress == nullptr)
		{
			char* szPattern = static_cast<char*>(MEM_STACKALLOC((nByteCount << 1U) + nByteCount));
			const std::size_t nConvertedPatternLength = bytes_to_pattern(arrByteBuffer, nByteCount, szPattern);


			MEM_STACKFREE(szPattern);
		}

		return pFoundAddress;
	}

	// @todo: msvc poorly optimizes this, it looks even better w/o optimization at all
	std::uint8_t* FindPatternEx(const std::uint8_t* pRegionStart, const std::size_t nRegionSize, const std::uint8_t* arrByteBuffer, const std::size_t nByteCount, const char* szByteMask)
	{
		std::uint8_t* pCurrentAddress = const_cast<std::uint8_t*>(pRegionStart);
		const std::uint8_t* pRegionEnd = pRegionStart + nRegionSize - nByteCount;
		const bool bIsMaskUsed = (szByteMask != nullptr);

		while (pCurrentAddress < pRegionEnd)
		{
			// check the first byte before entering the loop, otherwise if there two consecutive bytes of first byte in the buffer, we may skip both and fail the search
			if ((bIsMaskUsed && *szByteMask == '?') || *pCurrentAddress == *arrByteBuffer)
			{
				if (nByteCount == 1)
					return pCurrentAddress;

				// compare the least byte sequence and continue on wildcard or skip forward on first mismatched byte
				std::size_t nComparedBytes = 0U;
				while ((bIsMaskUsed && szByteMask[nComparedBytes + 1U] == '?') || pCurrentAddress[nComparedBytes + 1U] == arrByteBuffer[nComparedBytes + 1U])
				{
					// check does byte sequence match
					if (++nComparedBytes == nByteCount - 1U)
						return pCurrentAddress;
				}

				// skip non suitable bytes
				pCurrentAddress += nComparedBytes;
			}

			++pCurrentAddress;
		}

		return nullptr;
	}

	std::vector<std::uint8_t*> FindPatternAllOccurrencesEx(const std::uint8_t* pRegionStart, const std::size_t nRegionSize, const std::uint8_t* arrByteBuffer, const std::size_t nByteCount, const char* szByteMask)
	{
		const std::uint8_t* pRegionEnd = pRegionStart + nRegionSize - nByteCount;
		const bool bIsMaskUsed = (szByteMask != nullptr);

		// container for addresses of the all found occurrences
		std::vector<std::uint8_t*> vecOccurrences = {};

		for (std::uint8_t* pCurrentByte = const_cast<std::uint8_t*>(pRegionStart); pCurrentByte < pRegionEnd; ++pCurrentByte)
		{
			// do a first byte check before entering the loop, otherwise if there two consecutive bytes of first byte in the buffer, we may skip both and fail the search
			if ((!bIsMaskUsed || *szByteMask != '?') && *pCurrentByte != *arrByteBuffer)
				continue;

			// check for bytes sequence match
			bool bSequenceMatch = true;
			for (std::size_t i = 1U; i < nByteCount; i++)
			{
				// compare sequence and continue on wildcard or skip forward on first mismatched byte
				if ((!bIsMaskUsed || szByteMask[i] != '?') && pCurrentByte[i] != arrByteBuffer[i])
				{
					// skip non suitable bytes
					pCurrentByte += i - 1U;

					bSequenceMatch = false;
					break;
				}
			}

			// check did we found address
			if (bSequenceMatch)
				vecOccurrences.push_back(pCurrentByte);
		}

		return vecOccurrences;
	}


	std::size_t patterns_to_byte(const char* szPattern, std::uint8_t* pOutByteBuffer, char* szOutMaskBuffer)
	{
		std::uint8_t* pCurrentByte = pOutByteBuffer;

		while (*szPattern != '\0')
		{
			// check is a wildcard
			if (*szPattern == '?')
			{
				++szPattern;
				CS_ASSERT(*szPattern == '\0' || *szPattern == ' ' || *szPattern == '?'); // we're expect that next character either terminating null, whitespace or part of double wildcard (note that it's required if your pattern written without whitespaces)

				// ignore that
				* pCurrentByte++ = 0U;
				*szOutMaskBuffer++ = '?';
			}
			// check is not space
			else if (*szPattern != ' ')
			{
				// convert two consistent numbers in a row to byte value
				std::uint8_t uByte = static_cast<std::uint8_t>(CRT::CharToHexInt(*szPattern) << 4);

				++szPattern;

				CS_ASSERT(*szPattern != '\0' && *szPattern != '?' && *szPattern != ' '); // we're expect that byte always represented by two numbers in a row

				uByte |= static_cast<std::uint8_t>(CRT::CharToHexInt(*szPattern));

				*pCurrentByte++ = uByte;
				*szOutMaskBuffer++ = 'x';
			}

			++szPattern;
		}

		// zero terminate both buffers
		*pCurrentByte = 0U;
		*szOutMaskBuffer = '\0';

		return pCurrentByte - pOutByteBuffer;
	}

	std::size_t bytes_to_pattern(const std::uint8_t* pByteBuffer, const std::size_t nByteCount, char* szOutBuffer)
	{
		char* szCurrentPattern = szOutBuffer;

		for (std::size_t i = 0U; i < nByteCount; i++)
		{
			// manually convert byte to chars
			const char* szHexByte = &CRT::_TWO_DIGITS_HEX_LUT[pByteBuffer[i] * 2U];
			*szCurrentPattern++ = szHexByte[0];
			*szCurrentPattern++ = szHexByte[1];
			*szCurrentPattern++ = ' ';
		}
		*--szCurrentPattern = '\0';

		return szCurrentPattern - szOutBuffer;
	}

}