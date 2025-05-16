// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_vphysics2_H
#define SDK_SCHEMA_vphysics2_H

#include <cstdint>

#include <sdk/schema/vphysics2.h>
#include <sdk/schema/physicslib.h>
namespace sdk {
	namespace schema {
		namespace vphysics2 {
			class IPhysicsPlayerController;
			class constraint_breakableparams_t;
			class constraint_axislimit_t;
			class constraint_hingeparams_t;
			class vphysics_save_cphysicsbody_t;
			class IPhysicsPlayerController {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IPhysicsPlayerController

			struct constraint_breakableparams_t {
				MEMBER(strength, vphysics2::constraint_breakableparams_t, float);
				MEMBER(force_limit, vphysics2::constraint_breakableparams_t, float);
				MEMBER(torque_limit, vphysics2::constraint_breakableparams_t, float);
				MEMBER_ARR(body_mass_scale, vphysics2::constraint_breakableparams_t, 2, float);
				MEMBER(is_active, vphysics2::constraint_breakableparams_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct constraint_breakableparams_t

			struct constraint_axislimit_t {
				MEMBER(fl_min_rotation, vphysics2::constraint_axislimit_t, float);
				MEMBER(fl_max_rotation, vphysics2::constraint_axislimit_t, float);
				MEMBER(fl_motor_target_ang_speed, vphysics2::constraint_axislimit_t, float);
				MEMBER(fl_motor_max_torque, vphysics2::constraint_axislimit_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct constraint_axislimit_t

			struct constraint_hingeparams_t {
				MEMBER(world_position, vphysics2::constraint_hingeparams_t, vector);
				MEMBER(world_axis_direction, vphysics2::constraint_hingeparams_t, vector);
				MEMBER(hinge_axis, vphysics2::constraint_hingeparams_t, vphysics2::constraint_axislimit_t);
				MEMBER(constraint, vphysics2::constraint_hingeparams_t, vphysics2::constraint_breakableparams_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct constraint_hingeparams_t

			struct vphysics_save_cphysicsbody_t : public physicslib::RnBodyDesc_t {
				MEMBER(n_old_pointer, vphysics2::vphysics_save_cphysicsbody_t, uint64_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct vphysics_save_cphysicsbody_t

		} // namespace vphysics2
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_vphysics2_H
