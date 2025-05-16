#ifndef UTILS_VALUE_OBFUSCATION_H
#define UTILS_VALUE_OBFUSCATION_H

#include <utils/random.h>

namespace utils
{
	template <typename T, T A, T B>
	class xor_value
	{
	public:
		__forceinline static T get() { return value ^ cipher; }

	private:
		const static volatile inline T value{A ^ B}, cipher{B};
	};
} // namespace utils

#define XOR_16(val)                                                                                                    \
	(decltype(val))(::utils::xor_value<uint16_t, (uint16_t)val,                                                        \
									   ::utils::random::_uint<__COUNTER__, 0xFFFF>::value>::get())
#define XOR_32(val)                                                                                                    \
	(decltype(val))(::utils::xor_value<uint32_t, (uint32_t)val,                                                        \
									   ::utils::random::_uint<__COUNTER__, 0xFFFFFFFF>::value>::get())
#define XOR_64(val)                                                                                                    \
	(decltype(val))(::utils::xor_value<uint64_t, (uint64_t)val,                                                        \
									   ::utils::random::_uint64<__COUNTER__, 0xFFFFFFFFFFFFFFFF>::value>::get())

#endif // UTILS_VALUE_OBFUSCATION_H
