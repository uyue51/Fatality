// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_networksystem_H
#define SDK_SCHEMA_networksystem_H

#include <cstdint>

namespace sdk {
	namespace schema {
		namespace networksystem {
			class ChangeAccessorFieldPathIndex_t;
			struct ChangeAccessorFieldPathIndex_t {
				MEMBER(value, networksystem::ChangeAccessorFieldPathIndex_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ChangeAccessorFieldPathIndex_t

		} // namespace networksystem
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_networksystem_H
