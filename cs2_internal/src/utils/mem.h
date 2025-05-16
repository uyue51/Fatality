#pragma once
// used: memory api
#include <memory>
// used: std::vector
#include <vector>

#include "common.h"

#include "keyvalue3.h"

#pragma region memory_definitions
#pragma warning(push)
#pragma warning(disable: 6255) // '_alloca' indicates failure by raising a stack overflow exception. consider using '_malloca' instead
#define MEM_STACKALLOC(SIZE) _malloca(SIZE)
#pragma warning(pop)
#define MEM_STACKFREE(MEMORY) static_cast<void>(0)

#define MEM_PAD(SIZE)										\
private:												\
	char CS_CONCATENATE(pad_0, __COUNTER__)[SIZE]; \
public:
#pragma endregion

namespace utils
{


	std::uint8_t* solve_address(std::uint8_t* nAddressBytes, std::uint32_t nRVAOffset, std::uint32_t nRIPOffset);

	template <typename T = std::uint8_t>
	T* get_absolute_address(T* pRelativeAddress, int nPreOffset = 0x0, int nPostOffset = 0x0)
	{
		pRelativeAddress += nPreOffset;
		pRelativeAddress += sizeof(std::int32_t) + *reinterpret_cast<std::int32_t*>(pRelativeAddress);
		pRelativeAddress += nPostOffset;
		return pRelativeAddress;
	}

	void* get_module_base_handle(const wchar_t* wszModuleName);
	void* get_export_address(const void* hModuleBase, const char* szProcedureName);

	std::uint8_t* find_pattern(const wchar_t* wszModuleName, const char* szPattern);
	std::uint8_t* find_pattern(const wchar_t* wszModuleName, const char* szBytePattern, const char* szByteMask);
	std::uint8_t* FindPatternEx(const std::uint8_t* pRegionStart, const std::size_t nRegionSize, const std::uint8_t* arrByteBuffer, const std::size_t nByteCount, const char* szByteMask);
	std::vector<std::uint8_t*> FindPatternAllOccurrencesEx(const std::uint8_t* pRegionStart, const std::size_t nRegionSize, const std::uint8_t* arrByteBuffer, const std::size_t nByteCount, const char* szByteMask);
	std::size_t patterns_to_byte(const char* szPattern, std::uint8_t* pOutByteBuffer, char* szOutMaskBuffer);
	std::size_t bytes_to_pattern(const std::uint8_t* pByteBuffer, const std::size_t nByteCount, char* szOutBuffer);

	inline uintptr_t follow_rel32(ptrdiff_t addr, ptrdiff_t offset, ptrdiff_t offset_after = 0)
	{
		const auto rel = *reinterpret_cast<int32_t *>(addr + offset);
		return addr + rel + static_cast<ptrdiff_t>(sizeof(int32_t)) + offset + offset_after;
	}

	//pasted f off
	template <typename T, std::size_t nIndex, class CBaseClass, typename... Args_t>
	static T CallVFunc(CBaseClass* thisptr, Args_t... argList)
	{
		using VirtualFn_t = T(__thiscall*)(const void*, decltype(argList)...);
		return (*reinterpret_cast<VirtualFn_t* const*>(reinterpret_cast<std::uintptr_t>(thisptr)))[nIndex](thisptr, argList...);
	}

	template <typename T = void*>
	T GetVFunc(const void* thisptr, std::size_t nIndex)
	{
		return (*static_cast<T* const*>(thisptr))[nIndex];
	}
}

#define PATTERN(m, x) ::utils::find_pattern(FNV1A(m), xorstr_(x))
