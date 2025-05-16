// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_worldrenderer_H
#define SDK_SCHEMA_worldrenderer_H

#include <cstdint>

#include <sdk/schema/rendersystemdx11.h>
#include <sdk/schema/worldrenderer.h>
#include <sdk/schema/resourcesystem.h>
#include <sdk/schema/modellib.h>
#include <sdk/schema/mathlib_extended.h>
namespace sdk {
	namespace schema {
		namespace worldrenderer {
			class EntityKeyValueData_t;
			class InfoOverlayData_t;
			class World_t;
			class AggregateMeshInfo_t;
			class WorldNodeOnDiskBufferData_t;
			class InfoForResourceTypeVMapResourceData_t;
			class VoxelVisBlockOffset_t;
			class BakedLightingInfo_t;
			class EntityIOConnectionData_t;
			class BaseSceneObjectOverride_t;
			class MaterialOverride_t;
			class ExtraVertexStreamOverride_t;
			class WorldNode_t;
			class PermEntityLumpData_t;
			class WorldBuilderParams_t;
			class ClutterTile_t;
			class CVoxelVisibility;
			class AggregateSceneObject_t;
			class VMapResourceData_t;
			class ClutterSceneObject_t;
			class AggregateLODSetup_t;
			class SceneObject_t;
			class NodeData_t;
			// Enumerator count: 15
			// Alignment: 
			// Size: 0x4
			enum class ObjectTypeFlags_t : std::uint32_t {
				OBJECT_TYPE_NONE = 0x0,
				OBJECT_TYPE_MODEL = 0x8,
				OBJECT_TYPE_BLOCK_LIGHT = 0x10,
				OBJECT_TYPE_NO_SHADOWS = 0x20,
				OBJECT_TYPE_WORLDSPACE_TEXURE_BLEND = 0x40,
				OBJECT_TYPE_DISABLED_IN_LOW_QUALITY = 0x80,
				OBJECT_TYPE_NO_SUN_SHADOWS = 0x100,
				OBJECT_TYPE_RENDER_WITH_DYNAMIC = 0x200,
				OBJECT_TYPE_RENDER_TO_CUBEMAPS = 0x400,
				OBJECT_TYPE_MODEL_HAS_LODS = 0x800,
				OBJECT_TYPE_OVERLAY = 0x2000,
				OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 0x4000,
				OBJECT_TYPE_STATIC_CUBE_MAP = 0x8000,
				OBJECT_TYPE_DISABLE_VIS_CULLING = 0x10000,
				OBJECT_TYPE_BAKED_GEOMETRY = 0x20000,
			};
			struct EntityKeyValueData_t {
				MEMBER(connections, worldrenderer::EntityKeyValueData_t, cutl_vector<worldrenderer::EntityIOConnectionData_t>);
				MEMBER(key_values_data, worldrenderer::EntityKeyValueData_t, CUtlBinaryBlock);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EntityKeyValueData_t

			struct InfoOverlayData_t {
				MEMBER(transform, worldrenderer::InfoOverlayData_t, matrix3x4_t);
				MEMBER(fl_width, worldrenderer::InfoOverlayData_t, float);
				MEMBER(fl_height, worldrenderer::InfoOverlayData_t, float);
				MEMBER(fl_depth, worldrenderer::InfoOverlayData_t, float);
				MEMBER(v_uvstart, worldrenderer::InfoOverlayData_t, vector2d);
				MEMBER(v_uvend, worldrenderer::InfoOverlayData_t, vector2d);
				MEMBER(p_material, worldrenderer::InfoOverlayData_t, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(n_render_order, worldrenderer::InfoOverlayData_t, int32_t);
				MEMBER(v_tint_color, worldrenderer::InfoOverlayData_t, vector4d);
				MEMBER(n_sequence_override, worldrenderer::InfoOverlayData_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct InfoOverlayData_t

			struct World_t {
				MEMBER(builder_params, worldrenderer::World_t, worldrenderer::WorldBuilderParams_t);
				MEMBER(world_nodes, worldrenderer::World_t, cutl_vector<worldrenderer::NodeData_t>);
				MEMBER(world_lighting_info, worldrenderer::World_t, worldrenderer::BakedLightingInfo_t);
				MEMBER(entity_lumps, worldrenderer::World_t, cutl_vector<CStrongHandleCopyable<resourcesystem::InfoForResourceTypeCEntityLump>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct World_t

			struct AggregateMeshInfo_t {
				MEMBER(n_vis_cluster_member_offset, worldrenderer::AggregateMeshInfo_t, uint32_t);
				MEMBER(n_vis_cluster_member_count, worldrenderer::AggregateMeshInfo_t, uint8_t);
				MEMBER(b_has_transform, worldrenderer::AggregateMeshInfo_t, bool);
				MEMBER(n_draw_call_index, worldrenderer::AggregateMeshInfo_t, int16_t);
				MEMBER(n_lodsetup_index, worldrenderer::AggregateMeshInfo_t, int16_t);
				MEMBER(n_lodgroup_mask, worldrenderer::AggregateMeshInfo_t, uint8_t);
				MEMBER(v_tint_color, worldrenderer::AggregateMeshInfo_t, color);
				MEMBER(object_flags, worldrenderer::AggregateMeshInfo_t, worldrenderer::ObjectTypeFlags_t);
				MEMBER(n_light_probe_volume_precomputed_handshake, worldrenderer::AggregateMeshInfo_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct AggregateMeshInfo_t

			struct WorldNodeOnDiskBufferData_t {
				MEMBER(n_element_count, worldrenderer::WorldNodeOnDiskBufferData_t, int32_t);
				MEMBER(n_element_size_in_bytes, worldrenderer::WorldNodeOnDiskBufferData_t, int32_t);
				MEMBER(input_layout_fields, worldrenderer::WorldNodeOnDiskBufferData_t, cutl_vector<rendersystemdx11::RenderInputLayoutField_t>);
				MEMBER(p_data, worldrenderer::WorldNodeOnDiskBufferData_t, cutl_vector<uint8_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct WorldNodeOnDiskBufferData_t

			struct InfoForResourceTypeVMapResourceData_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct InfoForResourceTypeVMapResourceData_t

			struct VoxelVisBlockOffset_t {
				MEMBER(n_offset, worldrenderer::VoxelVisBlockOffset_t, uint32_t);
				MEMBER(n_element_count, worldrenderer::VoxelVisBlockOffset_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VoxelVisBlockOffset_t

			struct BakedLightingInfo_t {
				MEMBER(n_lightmap_version_number, worldrenderer::BakedLightingInfo_t, uint32_t);
				MEMBER(n_lightmap_game_version_number, worldrenderer::BakedLightingInfo_t, uint32_t);
				MEMBER(v_lightmap_uv_scale, worldrenderer::BakedLightingInfo_t, vector2d);
				MEMBER(b_has_lightmaps, worldrenderer::BakedLightingInfo_t, bool);
				MEMBER(b_baked_shadows_gamma20, worldrenderer::BakedLightingInfo_t, bool);
				MEMBER(b_compression_enabled, worldrenderer::BakedLightingInfo_t, bool);
				MEMBER(n_chart_pack_iterations, worldrenderer::BakedLightingInfo_t, uint8_t);
				MEMBER(n_vrad_quality, worldrenderer::BakedLightingInfo_t, uint8_t);
				MEMBER(light_maps, worldrenderer::BakedLightingInfo_t, cutl_vector<CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct BakedLightingInfo_t

			struct EntityIOConnectionData_t {
				MEMBER(output_name, worldrenderer::EntityIOConnectionData_t, cutl_string);
				MEMBER(target_type, worldrenderer::EntityIOConnectionData_t, uint32_t);
				MEMBER(target_name, worldrenderer::EntityIOConnectionData_t, cutl_string);
				MEMBER(input_name, worldrenderer::EntityIOConnectionData_t, cutl_string);
				MEMBER(override_param, worldrenderer::EntityIOConnectionData_t, cutl_string);
				MEMBER(fl_delay, worldrenderer::EntityIOConnectionData_t, float);
				MEMBER(n_times_to_fire, worldrenderer::EntityIOConnectionData_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EntityIOConnectionData_t

			struct BaseSceneObjectOverride_t {
				MEMBER(n_scene_object_index, worldrenderer::BaseSceneObjectOverride_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct BaseSceneObjectOverride_t

			struct MaterialOverride_t : public worldrenderer::BaseSceneObjectOverride_t {
				MEMBER(n_sub_scene_object, worldrenderer::MaterialOverride_t, uint32_t);
				MEMBER(n_draw_call_index, worldrenderer::MaterialOverride_t, uint32_t);
				MEMBER(p_material, worldrenderer::MaterialOverride_t, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct MaterialOverride_t

			struct ExtraVertexStreamOverride_t : public worldrenderer::BaseSceneObjectOverride_t {
				MEMBER(n_sub_scene_object, worldrenderer::ExtraVertexStreamOverride_t, uint32_t);
				MEMBER(n_draw_call_index, worldrenderer::ExtraVertexStreamOverride_t, uint32_t);
				MEMBER(n_additional_mesh_draw_primitive_flags, worldrenderer::ExtraVertexStreamOverride_t, modellib::MeshDrawPrimitiveFlags_t);
				MEMBER(extra_buffer_binding, worldrenderer::ExtraVertexStreamOverride_t, modellib::CRenderBufferBinding);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ExtraVertexStreamOverride_t

			struct WorldNode_t {
				MEMBER(scene_objects, worldrenderer::WorldNode_t, cutl_vector<worldrenderer::SceneObject_t>);
				MEMBER(info_overlays, worldrenderer::WorldNode_t, cutl_vector<worldrenderer::InfoOverlayData_t>);
				MEMBER(vis_cluster_membership, worldrenderer::WorldNode_t, cutl_vector<uint16_t>);
				MEMBER(aggregate_scene_objects, worldrenderer::WorldNode_t, cutl_vector<worldrenderer::AggregateSceneObject_t>);
				MEMBER(clutter_scene_objects, worldrenderer::WorldNode_t, cutl_vector<worldrenderer::ClutterSceneObject_t>);
				MEMBER(extra_vertex_stream_overrides, worldrenderer::WorldNode_t, cutl_vector<worldrenderer::ExtraVertexStreamOverride_t>);
				MEMBER(material_overrides, worldrenderer::WorldNode_t, cutl_vector<worldrenderer::MaterialOverride_t>);
				MEMBER(extra_vertex_streams, worldrenderer::WorldNode_t, cutl_vector<worldrenderer::WorldNodeOnDiskBufferData_t>);
				MEMBER(layer_names, worldrenderer::WorldNode_t, cutl_vector<cutl_string>);
				MEMBER(scene_object_layer_indices, worldrenderer::WorldNode_t, cutl_vector<uint8_t>);
				MEMBER(overlay_layer_indices, worldrenderer::WorldNode_t, cutl_vector<uint8_t>);
				MEMBER(grass_file_name, worldrenderer::WorldNode_t, cutl_string);
				MEMBER(node_lighting_info, worldrenderer::WorldNode_t, worldrenderer::BakedLightingInfo_t);
				MEMBER(b_has_baked_geometry_flag, worldrenderer::WorldNode_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct WorldNode_t

			struct PermEntityLumpData_t {
				MEMBER(name, worldrenderer::PermEntityLumpData_t, cutl_string);
				MEMBER(child_lumps, worldrenderer::PermEntityLumpData_t, cutl_vector<CStrongHandleCopyable<resourcesystem::InfoForResourceTypeCEntityLump>>);
				MEMBER(entity_key_values, worldrenderer::PermEntityLumpData_t, CUtlLeanVector<worldrenderer::EntityKeyValueData_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PermEntityLumpData_t

			struct WorldBuilderParams_t {
				MEMBER(fl_min_draw_volume_size, worldrenderer::WorldBuilderParams_t, float);
				MEMBER(b_build_baked_lighting, worldrenderer::WorldBuilderParams_t, bool);
				MEMBER(baked_lighting_info, worldrenderer::WorldBuilderParams_t, worldrenderer::BakedLightingInfo_t);
				MEMBER(n_compile_timestamp, worldrenderer::WorldBuilderParams_t, uint64_t);
				MEMBER(n_compile_fingerprint, worldrenderer::WorldBuilderParams_t, uint64_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct WorldBuilderParams_t

			struct ClutterTile_t {
				MEMBER(n_first_instance, worldrenderer::ClutterTile_t, uint32_t);
				MEMBER(n_last_instance, worldrenderer::ClutterTile_t, uint32_t);
				MEMBER(bounds_ws, worldrenderer::ClutterTile_t, mathlib_extended::AABB_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ClutterTile_t

			class CVoxelVisibility {
				MEMBER(n_base_cluster_count, worldrenderer::CVoxelVisibility, uint32_t);
				MEMBER(n_pvsbytes_per_cluster, worldrenderer::CVoxelVisibility, uint32_t);
				MEMBER(v_min_bounds, worldrenderer::CVoxelVisibility, vector);
				MEMBER(v_max_bounds, worldrenderer::CVoxelVisibility, vector);
				MEMBER(fl_grid_size, worldrenderer::CVoxelVisibility, float);
				MEMBER(n_sky_visibility_cluster, worldrenderer::CVoxelVisibility, uint32_t);
				MEMBER(n_sun_visibility_cluster, worldrenderer::CVoxelVisibility, uint32_t);
				MEMBER(node_block, worldrenderer::CVoxelVisibility, worldrenderer::VoxelVisBlockOffset_t);
				MEMBER(region_block, worldrenderer::CVoxelVisibility, worldrenderer::VoxelVisBlockOffset_t);
				MEMBER(enclosed_cluster_list_block, worldrenderer::CVoxelVisibility, worldrenderer::VoxelVisBlockOffset_t);
				MEMBER(enclosed_clusters_block, worldrenderer::CVoxelVisibility, worldrenderer::VoxelVisBlockOffset_t);
				MEMBER(masks_block, worldrenderer::CVoxelVisibility, worldrenderer::VoxelVisBlockOffset_t);
				MEMBER(n_vis_blocks, worldrenderer::CVoxelVisibility, worldrenderer::VoxelVisBlockOffset_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoxelVisibility

			struct AggregateSceneObject_t {
				MEMBER(all_flags, worldrenderer::AggregateSceneObject_t, worldrenderer::ObjectTypeFlags_t);
				MEMBER(any_flags, worldrenderer::AggregateSceneObject_t, worldrenderer::ObjectTypeFlags_t);
				MEMBER(n_layer, worldrenderer::AggregateSceneObject_t, int16_t);
				MEMBER(aggregate_meshes, worldrenderer::AggregateSceneObject_t, cutl_vector<worldrenderer::AggregateMeshInfo_t>);
				MEMBER(lod_setups, worldrenderer::AggregateSceneObject_t, cutl_vector<worldrenderer::AggregateLODSetup_t>);
				MEMBER(vis_cluster_membership, worldrenderer::AggregateSceneObject_t, cutl_vector<uint16_t>);
				MEMBER(fragment_transforms, worldrenderer::AggregateSceneObject_t, cutl_vector<matrix3x4_t>);
				MEMBER(renderable_model, worldrenderer::AggregateSceneObject_t, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct AggregateSceneObject_t

			struct VMapResourceData_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMapResourceData_t

			struct ClutterSceneObject_t {
				MEMBER(bounds, worldrenderer::ClutterSceneObject_t, mathlib_extended::AABB_t);
				MEMBER(flags, worldrenderer::ClutterSceneObject_t, worldrenderer::ObjectTypeFlags_t);
				MEMBER(n_layer, worldrenderer::ClutterSceneObject_t, int16_t);
				MEMBER(instance_positions, worldrenderer::ClutterSceneObject_t, cutl_vector<vector>);
				MEMBER(instance_scales, worldrenderer::ClutterSceneObject_t, cutl_vector<float>);
				MEMBER(instance_tint_srgb, worldrenderer::ClutterSceneObject_t, cutl_vector<color>);
				MEMBER(tiles, worldrenderer::ClutterSceneObject_t, cutl_vector<worldrenderer::ClutterTile_t>);
				MEMBER(renderable_model, worldrenderer::ClutterSceneObject_t, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ClutterSceneObject_t

			struct AggregateLODSetup_t {
				MEMBER(v_lodorigin, worldrenderer::AggregateLODSetup_t, vector);
				MEMBER(f_max_object_scale, worldrenderer::AggregateLODSetup_t, float);
				MEMBER(f_switch_distances, worldrenderer::AggregateLODSetup_t, cutl_vector<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct AggregateLODSetup_t

			struct SceneObject_t {
				MEMBER(n_object_id, worldrenderer::SceneObject_t, uint32_t);
				MEMBER_ARR(v_transform, worldrenderer::SceneObject_t, 3, vector4d);
				MEMBER(fl_fade_start_distance, worldrenderer::SceneObject_t, float);
				MEMBER(fl_fade_end_distance, worldrenderer::SceneObject_t, float);
				MEMBER(v_tint_color, worldrenderer::SceneObject_t, vector4d);
				MEMBER(skin, worldrenderer::SceneObject_t, cutl_string);
				MEMBER(n_object_type_flags, worldrenderer::SceneObject_t, worldrenderer::ObjectTypeFlags_t);
				MEMBER(v_lighting_origin, worldrenderer::SceneObject_t, vector);
				MEMBER(n_overlay_render_order, worldrenderer::SceneObject_t, int16_t);
				MEMBER(n_lodoverride, worldrenderer::SceneObject_t, int16_t);
				MEMBER(n_cube_map_precomputed_handshake, worldrenderer::SceneObject_t, int32_t);
				MEMBER(n_light_probe_volume_precomputed_handshake, worldrenderer::SceneObject_t, int32_t);
				MEMBER(renderable_model, worldrenderer::SceneObject_t, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);
				MEMBER(renderable, worldrenderer::SceneObject_t, CStrongHandle<resourcesystem::InfoForResourceTypeCRenderMesh>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SceneObject_t

			struct NodeData_t {
				MEMBER(n_parent, worldrenderer::NodeData_t, int32_t);
				MEMBER(v_origin, worldrenderer::NodeData_t, vector);
				MEMBER(v_min_bounds, worldrenderer::NodeData_t, vector);
				MEMBER(v_max_bounds, worldrenderer::NodeData_t, vector);
				MEMBER(fl_minimum_distance, worldrenderer::NodeData_t, float);
				MEMBER(child_node_indices, worldrenderer::NodeData_t, cutl_vector<int32_t>);
				MEMBER(world_node_prefix, worldrenderer::NodeData_t, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct NodeData_t

		} // namespace worldrenderer
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_worldrenderer_H
