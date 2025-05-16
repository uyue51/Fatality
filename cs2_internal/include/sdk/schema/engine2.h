// generated on: Mon Nov 18 16:22:34 2024
#ifndef SDK_SCHEMA_engine2_H
#define SDK_SCHEMA_engine2_H

#include <cstdint>

namespace sdk {
	namespace schema {
		namespace engine2 {
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class SpawnDebugRestrictionOverrideState_t : std::uint32_t {
				SPAWN_DEBUG_RESTRICT_NONE = 0x0,
				SPAWN_DEBUG_RESTRICT_IGNORE_MANAGER_DISTANCE_REQS = 0x1,
				SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_DISTANCE_LOS_REQS = 0x2,
				SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_COOLDOWN_LIMITS = 0x4,
				SPAWN_DEBUG_RESTRICT_IGNORE_TARGET_COOLDOWN_LIMITS = 0x8,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class SpawnDebugOverrideState_t : std::uint32_t {
				SPAWN_DEBUG_OVERRIDE_NONE = 0x0,
				SPAWN_DEBUG_OVERRIDE_FORCE_ENABLED = 0x1,
				SPAWN_DEBUG_OVERRIDE_FORCE_DISABLED = 0x2,
			};
		} // namespace engine2
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_engine2_H
