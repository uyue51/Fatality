// generated on: Mon Nov 18 16:22:34 2024
#ifndef SDK_SCHEMA_tier2_H
#define SDK_SCHEMA_tier2_H

#include <cstdint>

namespace sdk {
	namespace schema {
		namespace tier2 {
			class CRangeFloat;
			class CRangeInt;
			class CRangeFloat {
				MEMBER_ARR(p_value, tier2::CRangeFloat, 2, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRangeFloat

			class CRangeInt {
				MEMBER_ARR(p_value, tier2::CRangeInt, 2, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRangeInt

		} // namespace tier2
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_tier2_H
