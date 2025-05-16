// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_navlib_H
#define SDK_SCHEMA_navlib_H

#include <cstdint>

namespace sdk {
	namespace schema {
		namespace navlib {
			class NavGravity_t;
			class Extent;
			class CNavVolume;
			class CNavVolumeSphere;
			class CNavVolumeSphericalShell;
			class CNavVolumeVector;
			class CNavVolumeAll;
			class CNavHullPresetVData;
			class CNavHullVData;
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class NavDirType : std::uint32_t {
				NORTH = 0x0,
				EAST = 0x1,
				SOUTH = 0x2,
				WEST = 0x3,
				NUM_NAV_DIR_TYPE_DIRECTIONS = 0x4,
			};
			// Enumerator count: 20
			// Alignment: 
			// Size: 0x4
			enum class NavAttributeEnum : std::uint32_t {
				NAV_MESH_AVOID = 0x80,
				NAV_MESH_STAIRS = 0x1000,
				NAV_MESH_NON_ZUP = 0x8000,
				NAV_MESH_SHORT_HEIGHT = 0x10000,
				NAV_MESH_NON_ZUP_TRANSITION = 0x20000,
				NAV_MESH_CROUCH = 0x10000,
				NAV_MESH_JUMP = 0x2,
				NAV_MESH_PRECISE = 0x4,
				NAV_MESH_NO_JUMP = 0x8,
				NAV_MESH_STOP = 0x10,
				NAV_MESH_RUN = 0x20,
				NAV_MESH_WALK = 0x40,
				NAV_MESH_TRANSIENT = 0x100,
				NAV_MESH_DONT_HIDE = 0x200,
				NAV_MESH_STAND = 0x400,
				NAV_MESH_NO_HOSTAGES = 0x800,
				NAV_MESH_NO_MERGE = 0x2000,
				NAV_MESH_OBSTACLE_TOP = 0x4000,
				NAV_ATTR_FIRST_GAME_INDEX = 0x13,
				NAV_ATTR_LAST_INDEX = 0x1f,
			};
			struct NavGravity_t {
				MEMBER(v_gravity, navlib::NavGravity_t, vector);
				MEMBER(b_default, navlib::NavGravity_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct NavGravity_t

			class Extent {
				MEMBER(lo, navlib::Extent, vector);
				MEMBER(hi, navlib::Extent, vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class Extent

			class CNavVolume {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNavVolume

			class CNavVolumeSphere : public navlib::CNavVolume {
				MEMBER(v_center, navlib::CNavVolumeSphere, vector);
				MEMBER(fl_radius, navlib::CNavVolumeSphere, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNavVolumeSphere

			class CNavVolumeSphericalShell : public navlib::CNavVolumeSphere {
				MEMBER(fl_radius_inner, navlib::CNavVolumeSphericalShell, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNavVolumeSphericalShell

			class CNavVolumeVector : public navlib::CNavVolume {
				MEMBER(b_has_been_pre_filtered, navlib::CNavVolumeVector, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNavVolumeVector

			class CNavVolumeAll : public navlib::CNavVolumeVector {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNavVolumeAll

			class CNavHullPresetVData {
				MEMBER(vec_nav_hulls, navlib::CNavHullPresetVData, cutl_vector<cutl_string>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNavHullPresetVData

			class CNavHullVData {
				MEMBER(b_agent_enabled, navlib::CNavHullVData, bool);
				MEMBER(agent_radius, navlib::CNavHullVData, float);
				MEMBER(agent_height, navlib::CNavHullVData, float);
				MEMBER(agent_short_height_enabled, navlib::CNavHullVData, bool);
				MEMBER(agent_short_height, navlib::CNavHullVData, float);
				MEMBER(agent_max_climb, navlib::CNavHullVData, float);
				MEMBER(agent_max_slope, navlib::CNavHullVData, int32_t);
				MEMBER(agent_max_jump_down_dist, navlib::CNavHullVData, float);
				MEMBER(agent_max_jump_horiz_dist_base, navlib::CNavHullVData, float);
				MEMBER(agent_max_jump_up_dist, navlib::CNavHullVData, float);
				MEMBER(agent_border_erosion, navlib::CNavHullVData, int32_t);
				MEMBER(flow_map_generation_enabled, navlib::CNavHullVData, bool);
				MEMBER(flow_map_node_max_radius, navlib::CNavHullVData, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNavHullVData

		} // namespace navlib
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_navlib_H
