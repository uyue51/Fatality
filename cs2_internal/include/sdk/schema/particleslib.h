// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_particleslib_H
#define SDK_SCHEMA_particleslib_H

#include <cstdint>

#include <sdk/schema/particles.h>
#include <sdk/schema/pulse_runtime_lib.h>
#include <sdk/schema/animationsystem.h>
namespace sdk {
	namespace schema {
		namespace particleslib {
			class PARTICLE_WORLD_HANDLE;
			class PARTICLE_EHANDLE;
			class IParticleEffect;
			class CNewParticleEffect;
			class ParticleNamedValueSource_t;
			class CParticleInput;
			class CParticleFloatInput;
			class CPerParticleFloatInput;
			class CParticleRemapFloatInput;
			class CParticleCollectionFloatInput;
			class CParticleCollectionRendererFloatInput;
			class CParticleTransformInput;
			class CParticleVecInput;
			class CParticleCollectionVecInput;
			class CParticleCollectionRendererVecInput;
			class CPerParticleVecInput;
			class CParticleModelInput;
			class CParticleVariableRef;
			class CParticleProperty;
			class ParticleNamedValueConfiguration_t;
			class CParticleBindingRealPulse;
			class CParticleCollectionBindingInstance;
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class ParticleFloatBiasType_t : std::uint32_t {
				PF_BIAS_TYPE_INVALID = 0xffffffff,
				PF_BIAS_TYPE_STANDARD = 0x0,
				PF_BIAS_TYPE_GAIN = 0x1,
				PF_BIAS_TYPE_EXPONENTIAL = 0x2,
				PF_BIAS_TYPE_COUNT = 0x3,
			};
			// Enumerator count: 24
			// Alignment: 
			// Size: 0x4
			enum class ParticleFloatType_t : std::uint32_t {
				PF_TYPE_INVALID = 0xffffffff,
				PF_TYPE_LITERAL = 0x0,
				PF_TYPE_NAMED_VALUE = 0x1,
				PF_TYPE_RANDOM_UNIFORM = 0x2,
				PF_TYPE_RANDOM_BIASED = 0x3,
				PF_TYPE_COLLECTION_AGE = 0x4,
				PF_TYPE_ENDCAP_AGE = 0x5,
				PF_TYPE_CONTROL_POINT_COMPONENT = 0x6,
				PF_TYPE_CONTROL_POINT_CHANGE_AGE = 0x7,
				PF_TYPE_CONTROL_POINT_SPEED = 0x8,
				PF_TYPE_PARTICLE_DETAIL_LEVEL = 0x9,
				PF_TYPE_CONCURRENT_DEF_COUNT = 0xa,
				PF_TYPE_CLOSEST_CAMERA_DISTANCE = 0xb,
				PF_TYPE_RENDERER_CAMERA_DISTANCE = 0xc,
				PF_TYPE_RENDERER_CAMERA_DOT_PRODUCT = 0xd,
				PF_TYPE_PARTICLE_NOISE = 0xe,
				PF_TYPE_PARTICLE_AGE = 0xf,
				PF_TYPE_PARTICLE_AGE_NORMALIZED = 0x10,
				PF_TYPE_PARTICLE_FLOAT = 0x11,
				PF_TYPE_PARTICLE_VECTOR_COMPONENT = 0x12,
				PF_TYPE_PARTICLE_SPEED = 0x13,
				PF_TYPE_PARTICLE_NUMBER = 0x14,
				PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 0x15,
				PF_TYPE_COUNT = 0x16,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class PFNoiseType_t : std::uint32_t {
				PF_NOISE_TYPE_PERLIN = 0x0,
				PF_NOISE_TYPE_SIMPLEX = 0x1,
				PF_NOISE_TYPE_WORLEY = 0x2,
				PF_NOISE_TYPE_CURL = 0x3,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class PFNoiseTurbulence_t : std::uint32_t {
				PF_NOISE_TURB_NONE = 0x0,
				PF_NOISE_TURB_HIGHLIGHT = 0x1,
				PF_NOISE_TURB_FEEDBACK = 0x2,
				PF_NOISE_TURB_LOOPY = 0x3,
				PF_NOISE_TURB_CONTRAST = 0x4,
				PF_NOISE_TURB_ALTERNATE = 0x5,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class ParticleModelType_t : std::uint32_t {
				PM_TYPE_INVALID = 0x0,
				PM_TYPE_NAMED_VALUE_MODEL = 0x1,
				PM_TYPE_NAMED_VALUE_EHANDLE = 0x2,
				PM_TYPE_CONTROL_POINT = 0x3,
				PM_TYPE_COUNT = 0x4,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class ParticleFloatRoundType_t : std::uint32_t {
				PF_ROUND_TYPE_INVALID = 0xffffffff,
				PF_ROUND_TYPE_NEAREST = 0x0,
				PF_ROUND_TYPE_FLOOR = 0x1,
				PF_ROUND_TYPE_CEIL = 0x2,
				PF_ROUND_TYPE_COUNT = 0x3,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x4
			enum class ParticleFloatMapType_t : std::uint32_t {
				PF_MAP_TYPE_INVALID = 0xffffffff,
				PF_MAP_TYPE_DIRECT = 0x0,
				PF_MAP_TYPE_MULT = 0x1,
				PF_MAP_TYPE_REMAP = 0x2,
				PF_MAP_TYPE_REMAP_BIASED = 0x3,
				PF_MAP_TYPE_CURVE = 0x4,
				PF_MAP_TYPE_NOTCHED = 0x5,
				PF_MAP_TYPE_ROUND = 0x6,
				PF_MAP_TYPE_COUNT = 0x7,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ParticleFloatInputMode_t : std::uint32_t {
				PF_INPUT_MODE_INVALID = 0xffffffff,
				PF_INPUT_MODE_CLAMPED = 0x0,
				PF_INPUT_MODE_LOOPED = 0x1,
				PF_INPUT_MODE_COUNT = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ParticleFloatRandomMode_t : std::uint32_t {
				PF_RANDOM_MODE_INVALID = 0xffffffff,
				PF_RANDOM_MODE_CONSTANT = 0x0,
				PF_RANDOM_MODE_VARYING = 0x1,
				PF_RANDOM_MODE_COUNT = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class PFNoiseModifier_t : std::uint32_t {
				PF_NOISE_MODIFIER_NONE = 0x0,
				PF_NOISE_MODIFIER_LINES = 0x1,
				PF_NOISE_MODIFIER_CLUMPS = 0x2,
				PF_NOISE_MODIFIER_RINGS = 0x3,
			};
			// Enumerator count: 19
			// Alignment: 
			// Size: 0x4
			enum class ParticleVecType_t : std::uint32_t {
				PVEC_TYPE_INVALID = 0xffffffff,
				PVEC_TYPE_LITERAL = 0x0,
				PVEC_TYPE_LITERAL_COLOR = 0x1,
				PVEC_TYPE_NAMED_VALUE = 0x2,
				PVEC_TYPE_PARTICLE_VECTOR = 0x3,
				PVEC_TYPE_PARTICLE_VELOCITY = 0x4,
				PVEC_TYPE_CP_VALUE = 0x5,
				PVEC_TYPE_CP_RELATIVE_POSITION = 0x6,
				PVEC_TYPE_CP_RELATIVE_DIR = 0x7,
				PVEC_TYPE_CP_RELATIVE_RANDOM_DIR = 0x8,
				PVEC_TYPE_FLOAT_COMPONENTS = 0x9,
				PVEC_TYPE_FLOAT_INTERP_CLAMPED = 0xa,
				PVEC_TYPE_FLOAT_INTERP_OPEN = 0xb,
				PVEC_TYPE_FLOAT_INTERP_GRADIENT = 0xc,
				PVEC_TYPE_RANDOM_UNIFORM = 0xd,
				PVEC_TYPE_RANDOM_UNIFORM_OFFSET = 0xe,
				PVEC_TYPE_CP_DELTA = 0xf,
				PVEC_TYPE_CLOSEST_CAMERA_POSITION = 0x10,
				PVEC_TYPE_COUNT = 0x11,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class ParticleTransformType_t : std::uint32_t {
				PT_TYPE_INVALID = 0x0,
				PT_TYPE_NAMED_VALUE = 0x1,
				PT_TYPE_CONTROL_POINT = 0x2,
				PT_TYPE_CONTROL_POINT_RANGE = 0x3,
				PT_TYPE_COUNT = 0x4,
			};
			class PARTICLE_WORLD_HANDLE_ {
				///MEMBER(unused, particleslib::PARTICLE_WORLD_HANDLE_, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class PARTICLE_WORLD_HANDLE_

			class PARTICLE_EHANDLE_ {
				///MEMBER(unused, particleslib::PARTICLE_EHANDLE_, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class PARTICLE_EHANDLE_

			class IParticleEffect {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IParticleEffect

			class CNewParticleEffect : public particleslib::IParticleEffect {
				MEMBER(p_next, particleslib::CNewParticleEffect, particleslib::CNewParticleEffect*);
				MEMBER(p_prev, particleslib::CNewParticleEffect, particleslib::CNewParticleEffect*);
				MEMBER(p_particles, particleslib::CNewParticleEffect, particles::IParticleCollection*);
				MEMBER(p_debug_name, particleslib::CNewParticleEffect, char*);
				MEMBER(b_dont_remove, particleslib::CNewParticleEffect, uint8_t);
				MEMBER(b_remove, particleslib::CNewParticleEffect, uint8_t);
				MEMBER(b_needs_bbox_update, particleslib::CNewParticleEffect, uint8_t);
				MEMBER(b_is_first_frame, particleslib::CNewParticleEffect, uint8_t);
				MEMBER(b_auto_update_bbox, particleslib::CNewParticleEffect, uint8_t);
				MEMBER(b_allocated, particleslib::CNewParticleEffect, uint8_t);
				MEMBER(b_simulate, particleslib::CNewParticleEffect, uint8_t);
				MEMBER(b_should_perform_cull_check, particleslib::CNewParticleEffect, uint8_t);
				MEMBER(b_force_no_draw, particleslib::CNewParticleEffect, uint8_t);
				MEMBER(b_should_save, particleslib::CNewParticleEffect, uint8_t);
				MEMBER(b_disable_aggregation, particleslib::CNewParticleEffect, uint8_t);
				MEMBER(b_should_simulate_during_game_paused, particleslib::CNewParticleEffect, uint8_t);
				MEMBER(b_should_check_fo_w, particleslib::CNewParticleEffect, uint8_t);
				MEMBER(v_sort_origin, particleslib::CNewParticleEffect, Vector);
				MEMBER(fl_scale, particleslib::CNewParticleEffect, float);
				MEMBER(h_owner, particleslib::CNewParticleEffect, particleslib::PARTICLE_EHANDLE_*);
				MEMBER(p_owning_particle_property, particleslib::CNewParticleEffect, particleslib::CParticleProperty*);
				MEMBER(fl_freeze_transition_start, particleslib::CNewParticleEffect, float);
				MEMBER(fl_freeze_transition_duration, particleslib::CNewParticleEffect, float);
				MEMBER(fl_freeze_transition_override, particleslib::CNewParticleEffect, float);
				MEMBER(b_freeze_transition_active, particleslib::CNewParticleEffect, bool);
				MEMBER(b_freeze_target_state, particleslib::CNewParticleEffect, bool);
				MEMBER(b_can_freeze, particleslib::CNewParticleEffect, bool);
				MEMBER(last_min, particleslib::CNewParticleEffect, Vector);
				MEMBER(last_max, particleslib::CNewParticleEffect, Vector);
				MEMBER(n_split_screen_user, particleslib::CNewParticleEffect, CSplitScreenSlot);
				MEMBER(vec_aggregation_center, particleslib::CNewParticleEffect, Vector);
				MEMBER(ref_count, particleslib::CNewParticleEffect, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNewParticleEffect

			struct ParticleNamedValueSource_t {
				MEMBER(name, particleslib::ParticleNamedValueSource_t, CUtlString);
				MEMBER(is_public, particleslib::ParticleNamedValueSource_t, bool);
				MEMBER(value_type, particleslib::ParticleNamedValueSource_t, pulse_runtime_lib::PulseValueType_t);
				MEMBER(default_config, particleslib::ParticleNamedValueSource_t, particleslib::ParticleNamedValueConfiguration_t);
				MEMBER(named_configs, particleslib::ParticleNamedValueSource_t, CUtlVector<particleslib::ParticleNamedValueConfiguration_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ParticleNamedValueSource_t

			class CParticleInput {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleInput

			class CParticleFloatInput : public particleslib::CParticleInput {
				MEMBER(n_type, particleslib::CParticleFloatInput, particleslib::ParticleFloatType_t);
				MEMBER(n_map_type, particleslib::CParticleFloatInput, particleslib::ParticleFloatMapType_t);
				MEMBER(fl_literal_value, particleslib::CParticleFloatInput, float);
				MEMBER(named_value, particleslib::CParticleFloatInput, CParticleNamedValueRef);
				MEMBER(n_control_point, particleslib::CParticleFloatInput, int32_t);
				MEMBER(n_scalar_attribute, particleslib::CParticleFloatInput, particles::ParticleAttributeIndex_t);
				MEMBER(n_vector_attribute, particleslib::CParticleFloatInput, particles::ParticleAttributeIndex_t);
				MEMBER(n_vector_component, particleslib::CParticleFloatInput, int32_t);
				MEMBER(fl_random_min, particleslib::CParticleFloatInput, float);
				MEMBER(fl_random_max, particleslib::CParticleFloatInput, float);
				MEMBER(b_has_random_sign_flip, particleslib::CParticleFloatInput, bool);
				MEMBER(n_random_seed, particleslib::CParticleFloatInput, int32_t);
				MEMBER(n_random_mode, particleslib::CParticleFloatInput, particleslib::ParticleFloatRandomMode_t);
				MEMBER(fl_lod0, particleslib::CParticleFloatInput, float);
				MEMBER(fl_lod1, particleslib::CParticleFloatInput, float);
				MEMBER(fl_lod2, particleslib::CParticleFloatInput, float);
				MEMBER(fl_lod3, particleslib::CParticleFloatInput, float);
				MEMBER(n_noise_input_vector_attribute, particleslib::CParticleFloatInput, particles::ParticleAttributeIndex_t);
				MEMBER(fl_noise_output_min, particleslib::CParticleFloatInput, float);
				MEMBER(fl_noise_output_max, particleslib::CParticleFloatInput, float);
				MEMBER(fl_noise_scale, particleslib::CParticleFloatInput, float);
				MEMBER(vec_noise_offset_rate, particleslib::CParticleFloatInput, Vector);
				MEMBER(fl_noise_offset, particleslib::CParticleFloatInput, float);
				MEMBER(n_noise_octaves, particleslib::CParticleFloatInput, int32_t);
				MEMBER(n_noise_turbulence, particleslib::CParticleFloatInput, particleslib::PFNoiseTurbulence_t);
				MEMBER(n_noise_type, particleslib::CParticleFloatInput, particleslib::PFNoiseType_t);
				MEMBER(n_noise_modifier, particleslib::CParticleFloatInput, particleslib::PFNoiseModifier_t);
				MEMBER(fl_noise_turbulence_scale, particleslib::CParticleFloatInput, float);
				MEMBER(fl_noise_turbulence_mix, particleslib::CParticleFloatInput, float);
				MEMBER(fl_noise_img_preview_scale, particleslib::CParticleFloatInput, float);
				MEMBER(b_noise_img_preview_live, particleslib::CParticleFloatInput, bool);
				MEMBER(fl_no_camera_fallback, particleslib::CParticleFloatInput, float);
				MEMBER(b_use_bounds_center, particleslib::CParticleFloatInput, bool);
				MEMBER(n_input_mode, particleslib::CParticleFloatInput, particleslib::ParticleFloatInputMode_t);
				MEMBER(fl_mult_factor, particleslib::CParticleFloatInput, float);
				MEMBER(fl_input0, particleslib::CParticleFloatInput, float);
				MEMBER(fl_input1, particleslib::CParticleFloatInput, float);
				MEMBER(fl_output0, particleslib::CParticleFloatInput, float);
				MEMBER(fl_output1, particleslib::CParticleFloatInput, float);
				MEMBER(fl_notched_range_min, particleslib::CParticleFloatInput, float);
				MEMBER(fl_notched_range_max, particleslib::CParticleFloatInput, float);
				MEMBER(fl_notched_output_outside, particleslib::CParticleFloatInput, float);
				MEMBER(fl_notched_output_inside, particleslib::CParticleFloatInput, float);
				MEMBER(n_round_type, particleslib::CParticleFloatInput, particleslib::ParticleFloatRoundType_t);
				MEMBER(n_bias_type, particleslib::CParticleFloatInput, particleslib::ParticleFloatBiasType_t);
				MEMBER(fl_bias_parameter, particleslib::CParticleFloatInput, float);
				MEMBER(curve, particleslib::CParticleFloatInput, CPiecewiseCurve);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleFloatInput

			class CPerParticleFloatInput : public particleslib::CParticleFloatInput {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPerParticleFloatInput

			class CParticleRemapFloatInput : public particleslib::CParticleFloatInput {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleRemapFloatInput

			class CParticleCollectionFloatInput : public particleslib::CParticleFloatInput {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleCollectionFloatInput

			class CParticleCollectionRendererFloatInput : public particleslib::CParticleCollectionFloatInput {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleCollectionRendererFloatInput

			class CParticleTransformInput : public particleslib::CParticleInput {
				MEMBER(n_type, particleslib::CParticleTransformInput, particleslib::ParticleTransformType_t);
				MEMBER(named_value, particleslib::CParticleTransformInput, CParticleNamedValueRef);
				MEMBER(b_follow_named_value, particleslib::CParticleTransformInput, bool);
				MEMBER(b_supports_disabled, particleslib::CParticleTransformInput, bool);
				MEMBER(b_use_orientation, particleslib::CParticleTransformInput, bool);
				MEMBER(n_control_point, particleslib::CParticleTransformInput, int32_t);
				MEMBER(n_control_point_range_max, particleslib::CParticleTransformInput, int32_t);
				MEMBER(fl_end_cpgrowth_time, particleslib::CParticleTransformInput, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleTransformInput

			class CParticleVecInput : public particleslib::CParticleInput {
				MEMBER(n_type, particleslib::CParticleVecInput, particleslib::ParticleVecType_t);
				MEMBER(v_literal_value, particleslib::CParticleVecInput, Vector);
				MEMBER(literal_color, particleslib::CParticleVecInput, Color);
				MEMBER(named_value, particleslib::CParticleVecInput, CParticleNamedValueRef);
				MEMBER(b_follow_named_value, particleslib::CParticleVecInput, bool);
				MEMBER(n_vector_attribute, particleslib::CParticleVecInput, particles::ParticleAttributeIndex_t);
				MEMBER(v_vector_attribute_scale, particleslib::CParticleVecInput, Vector);
				MEMBER(n_control_point, particleslib::CParticleVecInput, int32_t);
				MEMBER(n_delta_control_point, particleslib::CParticleVecInput, int32_t);
				MEMBER(v_cpvalue_scale, particleslib::CParticleVecInput, Vector);
				MEMBER(v_cprelative_position, particleslib::CParticleVecInput, Vector);
				MEMBER(v_cprelative_dir, particleslib::CParticleVecInput, Vector);
				MEMBER(float_component_x, particleslib::CParticleVecInput, particleslib::CParticleFloatInput);
				MEMBER(float_component_y, particleslib::CParticleVecInput, particleslib::CParticleFloatInput);
				MEMBER(float_component_z, particleslib::CParticleVecInput, particleslib::CParticleFloatInput);
				MEMBER(float_interp, particleslib::CParticleVecInput, particleslib::CParticleFloatInput);
				MEMBER(fl_interp_input0, particleslib::CParticleVecInput, float);
				MEMBER(fl_interp_input1, particleslib::CParticleVecInput, float);
				MEMBER(v_interp_output0, particleslib::CParticleVecInput, Vector);
				MEMBER(v_interp_output1, particleslib::CParticleVecInput, Vector);
				MEMBER(gradient, particleslib::CParticleVecInput, CColorGradient);
				MEMBER(v_random_min, particleslib::CParticleVecInput, Vector);
				MEMBER(v_random_max, particleslib::CParticleVecInput, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleVecInput

			class CParticleCollectionVecInput : public particleslib::CParticleVecInput {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleCollectionVecInput

			class CParticleCollectionRendererVecInput : public particleslib::CParticleCollectionVecInput {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleCollectionRendererVecInput

			class CPerParticleVecInput : public particleslib::CParticleVecInput {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPerParticleVecInput

			class CParticleModelInput : public particleslib::CParticleInput {
				MEMBER(n_type, particleslib::CParticleModelInput, particleslib::ParticleModelType_t);
				MEMBER(named_value, particleslib::CParticleModelInput, CParticleNamedValueRef);
				MEMBER(n_control_point, particleslib::CParticleModelInput, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleModelInput

			class CParticleVariableRef {
				MEMBER(variable_name, particleslib::CParticleVariableRef, CKV3MemberNameWithStorage);
				MEMBER(variable_type, particleslib::CParticleVariableRef, pulse_runtime_lib::PulseValueType_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleVariableRef

			class CParticleProperty {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleProperty

			struct ParticleNamedValueConfiguration_t {
				MEMBER(config_name, particleslib::ParticleNamedValueConfiguration_t, CUtlString);
				MEMBER(config_value, particleslib::ParticleNamedValueConfiguration_t, KeyValues3);
				MEMBER(i_attach_type, particleslib::ParticleNamedValueConfiguration_t, animationsystem::ParticleAttachment_t);
				MEMBER(bound_entity_path, particleslib::ParticleNamedValueConfiguration_t, CUtlString);
				MEMBER(str_entity_scope, particleslib::ParticleNamedValueConfiguration_t, CUtlString);
				MEMBER(str_attachment_name, particleslib::ParticleNamedValueConfiguration_t, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ParticleNamedValueConfiguration_t

			class CParticleBindingRealPulse : public particleslib::CParticleCollectionBindingInstance {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleBindingRealPulse

			class CParticleCollectionBindingInstance : public pulse_runtime_lib::CBasePulseGraphInstance {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleCollectionBindingInstance

		} // namespace particleslib
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_particleslib_H
