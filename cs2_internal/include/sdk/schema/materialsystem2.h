// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_materialsystem2_H
#define SDK_SCHEMA_materialsystem2_H

#include <cstdint>

#include <sdk/schema/resourcesystem.h>
namespace sdk {
	namespace schema {
		namespace materialsystem2 {
			class PostProcessingBloomParameters_t;
			class PostProcessingLocalContrastParameters_t;
			class PostProcessingVignetteParameters_t;
			class MaterialResourceData_t;
			class MaterialParam_t;
			class MaterialParamTexture_t;
			class MaterialParamFloat_t;
			class MaterialParamBuffer_t;
			class MaterialParamInt_t;
			class MaterialParamString_t;
			class MaterialParamVector_t;
			class PostProcessingResource_t;
			class PostProcessingTonemapParameters_t;
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class VertJustification_e : std::uint32_t {
				VERT_JUSTIFICATION_TOP = 0x0,
				VERT_JUSTIFICATION_CENTER = 0x1,
				VERT_JUSTIFICATION_BOTTOM = 0x2,
				VERT_JUSTIFICATION_NONE = 0x3,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class HorizJustification_e : std::uint32_t {
				HORIZ_JUSTIFICATION_LEFT = 0x0,
				HORIZ_JUSTIFICATION_CENTER = 0x1,
				HORIZ_JUSTIFICATION_RIGHT = 0x2,
				HORIZ_JUSTIFICATION_NONE = 0x3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class LayoutPositionType_e : std::uint32_t {
				LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0x0,
				LAYOUTPOSITIONTYPE_FRACTIONAL = 0x1,
				LAYOUTPOSITIONTYPE_NONE = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class BloomBlendMode_t : std::uint32_t {
				BLOOM_BLEND_ADD = 0x0,
				BLOOM_BLEND_SCREEN = 0x1,
				BLOOM_BLEND_BLUR = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ViewFadeMode_t : std::uint32_t {
				VIEW_FADE_CONSTANT_COLOR = 0x0,
				VIEW_FADE_MODULATE = 0x1,
				VIEW_FADE_MOD2X = 0x2,
			};
			struct PostProcessingBloomParameters_t {
				MEMBER(blend_mode, materialsystem2::PostProcessingBloomParameters_t, materialsystem2::BloomBlendMode_t);
				MEMBER(fl_bloom_strength, materialsystem2::PostProcessingBloomParameters_t, float);
				MEMBER(fl_screen_bloom_strength, materialsystem2::PostProcessingBloomParameters_t, float);
				MEMBER(fl_blur_bloom_strength, materialsystem2::PostProcessingBloomParameters_t, float);
				MEMBER(fl_bloom_threshold, materialsystem2::PostProcessingBloomParameters_t, float);
				MEMBER(fl_bloom_threshold_width, materialsystem2::PostProcessingBloomParameters_t, float);
				MEMBER(fl_skybox_bloom_strength, materialsystem2::PostProcessingBloomParameters_t, float);
				MEMBER(fl_bloom_start_value, materialsystem2::PostProcessingBloomParameters_t, float);
				MEMBER_ARR(fl_blur_weight, materialsystem2::PostProcessingBloomParameters_t, 5, float);
				MEMBER_ARR(v_blur_tint, materialsystem2::PostProcessingBloomParameters_t, 5, vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PostProcessingBloomParameters_t

			struct PostProcessingLocalContrastParameters_t {
				MEMBER(fl_local_contrast_strength, materialsystem2::PostProcessingLocalContrastParameters_t, float);
				MEMBER(fl_local_contrast_edge_strength, materialsystem2::PostProcessingLocalContrastParameters_t, float);
				MEMBER(fl_local_contrast_vignette_start, materialsystem2::PostProcessingLocalContrastParameters_t, float);
				MEMBER(fl_local_contrast_vignette_end, materialsystem2::PostProcessingLocalContrastParameters_t, float);
				MEMBER(fl_local_contrast_vignette_blur, materialsystem2::PostProcessingLocalContrastParameters_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PostProcessingLocalContrastParameters_t

			struct PostProcessingVignetteParameters_t {
				MEMBER(fl_vignette_strength, materialsystem2::PostProcessingVignetteParameters_t, float);
				MEMBER(v_center, materialsystem2::PostProcessingVignetteParameters_t, vector2d);
				MEMBER(fl_radius, materialsystem2::PostProcessingVignetteParameters_t, float);
				MEMBER(fl_roundness, materialsystem2::PostProcessingVignetteParameters_t, float);
				MEMBER(fl_feather, materialsystem2::PostProcessingVignetteParameters_t, float);
				MEMBER(v_color_tint, materialsystem2::PostProcessingVignetteParameters_t, vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PostProcessingVignetteParameters_t

			struct MaterialResourceData_t {
				MEMBER(material_name, materialsystem2::MaterialResourceData_t, cutl_string);
				MEMBER(shader_name, materialsystem2::MaterialResourceData_t, cutl_string);
				MEMBER(int_params, materialsystem2::MaterialResourceData_t, cutl_vector<materialsystem2::MaterialParamInt_t>);
				MEMBER(float_params, materialsystem2::MaterialResourceData_t, cutl_vector<materialsystem2::MaterialParamFloat_t>);
				MEMBER(vector_params, materialsystem2::MaterialResourceData_t, cutl_vector<materialsystem2::MaterialParamVector_t>);
				MEMBER(texture_params, materialsystem2::MaterialResourceData_t, cutl_vector<materialsystem2::MaterialParamTexture_t>);
				MEMBER(dynamic_params, materialsystem2::MaterialResourceData_t, cutl_vector<materialsystem2::MaterialParamBuffer_t>);
				MEMBER(dynamic_texture_params, materialsystem2::MaterialResourceData_t, cutl_vector<materialsystem2::MaterialParamBuffer_t>);
				MEMBER(int_attributes, materialsystem2::MaterialResourceData_t, cutl_vector<materialsystem2::MaterialParamInt_t>);
				MEMBER(float_attributes, materialsystem2::MaterialResourceData_t, cutl_vector<materialsystem2::MaterialParamFloat_t>);
				MEMBER(vector_attributes, materialsystem2::MaterialResourceData_t, cutl_vector<materialsystem2::MaterialParamVector_t>);
				MEMBER(texture_attributes, materialsystem2::MaterialResourceData_t, cutl_vector<materialsystem2::MaterialParamTexture_t>);
				MEMBER(string_attributes, materialsystem2::MaterialResourceData_t, cutl_vector<materialsystem2::MaterialParamString_t>);
				MEMBER(render_attributes_used, materialsystem2::MaterialResourceData_t, cutl_vector<cutl_string>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct MaterialResourceData_t

			struct MaterialParam_t {
				MEMBER(name, materialsystem2::MaterialParam_t, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct MaterialParam_t

			struct MaterialParamTexture_t : public materialsystem2::MaterialParam_t {
				MEMBER(p_value, materialsystem2::MaterialParamTexture_t, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct MaterialParamTexture_t

			struct MaterialParamFloat_t : public materialsystem2::MaterialParam_t {
				MEMBER(fl_value, materialsystem2::MaterialParamFloat_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct MaterialParamFloat_t

			struct MaterialParamBuffer_t : public materialsystem2::MaterialParam_t {
				MEMBER(value, materialsystem2::MaterialParamBuffer_t, CUtlBinaryBlock);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct MaterialParamBuffer_t

			struct MaterialParamInt_t : public materialsystem2::MaterialParam_t {
				MEMBER(n_value, materialsystem2::MaterialParamInt_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct MaterialParamInt_t

			struct MaterialParamString_t : public materialsystem2::MaterialParam_t {
				MEMBER(value, materialsystem2::MaterialParamString_t, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct MaterialParamString_t

			struct MaterialParamVector_t : public materialsystem2::MaterialParam_t {
				MEMBER(value, materialsystem2::MaterialParamVector_t, vector4d);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct MaterialParamVector_t

			struct PostProcessingResource_t {
				MEMBER(b_has_tonemap_params, materialsystem2::PostProcessingResource_t, bool);
				MEMBER(tone_map_params, materialsystem2::PostProcessingResource_t, materialsystem2::PostProcessingTonemapParameters_t);
				MEMBER(b_has_bloom_params, materialsystem2::PostProcessingResource_t, bool);
				MEMBER(bloom_params, materialsystem2::PostProcessingResource_t, materialsystem2::PostProcessingBloomParameters_t);
				MEMBER(b_has_vignette_params, materialsystem2::PostProcessingResource_t, bool);
				MEMBER(vignette_params, materialsystem2::PostProcessingResource_t, materialsystem2::PostProcessingVignetteParameters_t);
				MEMBER(b_has_local_contrast_params, materialsystem2::PostProcessingResource_t, bool);
				MEMBER(local_constrast_params, materialsystem2::PostProcessingResource_t, materialsystem2::PostProcessingLocalContrastParameters_t);
				MEMBER(n_color_correction_volume_dim, materialsystem2::PostProcessingResource_t, int32_t);
				MEMBER(color_correction_volume_data, materialsystem2::PostProcessingResource_t, CUtlBinaryBlock);
				MEMBER(b_has_color_correction, materialsystem2::PostProcessingResource_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PostProcessingResource_t

			struct PostProcessingTonemapParameters_t {
				MEMBER(fl_exposure_bias, materialsystem2::PostProcessingTonemapParameters_t, float);
				MEMBER(fl_shoulder_strength, materialsystem2::PostProcessingTonemapParameters_t, float);
				MEMBER(fl_linear_strength, materialsystem2::PostProcessingTonemapParameters_t, float);
				MEMBER(fl_linear_angle, materialsystem2::PostProcessingTonemapParameters_t, float);
				MEMBER(fl_toe_strength, materialsystem2::PostProcessingTonemapParameters_t, float);
				MEMBER(fl_toe_num, materialsystem2::PostProcessingTonemapParameters_t, float);
				MEMBER(fl_toe_denom, materialsystem2::PostProcessingTonemapParameters_t, float);
				MEMBER(fl_white_point, materialsystem2::PostProcessingTonemapParameters_t, float);
				MEMBER(fl_luminance_source, materialsystem2::PostProcessingTonemapParameters_t, float);
				MEMBER(fl_exposure_bias_shadows, materialsystem2::PostProcessingTonemapParameters_t, float);
				MEMBER(fl_exposure_bias_highlights, materialsystem2::PostProcessingTonemapParameters_t, float);
				MEMBER(fl_min_shadow_lum, materialsystem2::PostProcessingTonemapParameters_t, float);
				MEMBER(fl_max_shadow_lum, materialsystem2::PostProcessingTonemapParameters_t, float);
				MEMBER(fl_min_highlight_lum, materialsystem2::PostProcessingTonemapParameters_t, float);
				MEMBER(fl_max_highlight_lum, materialsystem2::PostProcessingTonemapParameters_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PostProcessingTonemapParameters_t

		} // namespace materialsystem2
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_materialsystem2_H
