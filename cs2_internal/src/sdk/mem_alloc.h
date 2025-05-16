#pragma once
#include <game/game.h>

namespace sdk
{
	struct cmem_alloc
	{
		void* Alloc(std::size_t nSize)
		{
			return utils::CallVFunc<void*, 1>(this, nSize);
		}

		void* ReAlloc(const void* pMemory, std::size_t nSize)
		{
			return utils::CallVFunc<void*, 2>(this, pMemory, nSize);
		}

		void Free(const void* pMemory)
		{
			return utils::CallVFunc<void, 3>(this, pMemory);
		}

		std::size_t GetSize(const void* pMemory)
		{
			return utils::CallVFunc<std::size_t, 21>(this, pMemory);
		}
	};
} // namespace sdk
