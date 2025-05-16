#pragma once

namespace sdk
{
	struct clocalize
	{
		const char* find_safe(const char* tok)
		{
			return utils::CallVFunc<const char*, 17>(this, tok);
		}

	};
} // namespace sdk
