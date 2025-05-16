// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_modellib_H
#define SDK_SCHEMA_modellib_H

#include <cstdint>

#include <sdk/schema/physicslib.h>
#include <sdk/schema/modellib.h>
#include <sdk/schema/resourcesystem.h>
#include <sdk/schema/rendersystemdx11.h>
#include <sdk/schema/mathlib_extended.h>
namespace sdk {
	namespace schema {
		namespace modellib {
			class PhysSoftbodyDesc_t;
			class CPhysSurfacePropertiesAudio;
			class CBoneConstraintBase;
			class CBoneConstraintDotToMorph;
			class CBoneConstraintPoseSpaceMorph;
			class CBaseConstraint;
			class COrientConstraint;
			class CPointConstraint;
			class CBoneConstraintPoseSpaceBone;
			class CTiltTwistConstraint;
			class CTwistConstraint;
			class CParentConstraint;
			class CAimConstraint;
			class CMorphConstraint;
			class SkeletonBoneBounds_t;
			class CAnimAttachment;
			class CPhysSurfacePropertiesPhysics;
			class CRenderSkeleton;
			class CVPhysXSurfacePropertiesList;
			class AnimParamID;
			class CRenderGroom;
			class CFlexRule;
			class RenderSkeletonBone_t;
			class ModelBoneFlexDriverControl_t;
			class VPhysics2ShapeDef_t;
			class CAnimSkeleton;
			class CRenderMesh;
			class CFlexDesc;
			class SkeletonDemoDb_t;
			class CFlexController;
			class CFootTrajectory;
			class CBoneConstraintPoseSpaceBone_Input_t;
			class CFootStride;
			class CFlexOp;
			class SkeletonAnimCapture_t_Frame_t;
			class SkeletonAnimCapture_t_Camera_t;
			class CAnimFoot;
			class CMorphRectData;
			class AnimTagID;
			class CHitBoxSet;
			class AnimScriptHandle;
			class DynamicMeshDeformParams_t;
			class SkeletonAnimCapture_t_FrameStamp_t;
			class PermModelExtPart_t;
			class CFootDefinition;
			class CConstraintTarget;
			class VPhysXConstraint2_t;
			class CPhysSurfaceProperties;
			class SkeletonAnimCapture_t;
			class CMorphSetData;
			class SkeletonAnimCapture_t_Bone_t;
			class ModelSkeletonData_t;
			class CMorphBundleData;
			class CFootTrajectories;
			class CRenderBufferBinding;
			class MaterialGroup_t;
			class VPhysXRange_t;
			class CConstraintSlave;
			class VPhysXAggregateData_t;
			class VPhysXConstraintParams_t;
			class AnimComponentID;
			class CHitBoxSetList;
			class RenderHairStrandInfo_t;
			class CModelConfig;
			class CCycleBase;
			class CAnimCycle;
			class CFootCycle;
			class CModelConfigElement;
			class CModelConfigElement_AttachedModel;
			class CModelConfigElement_RandomColor;
			class CModelConfigElement_SetBodygroup;
			class CModelConfigElement_Command;
			class CModelConfigElement_RandomPick;
			class CModelConfigElement_SetMaterialGroup;
			class CModelConfigElement_SetMaterialGroupOnAttachedModels;
			class CModelConfigElement_SetRenderColor;
			class CModelConfigElement_SetBodygroupOnAttachedModels;
			class CModelConfigElement_UserPick;
			class VPhysXJoint_t;
			class CFootCycleDefinition;
			class VPhysXBodyPart_t;
			class CDrawCullingData;
			class PermModelData_t;
			class CAttachment;
			class CMorphData;
			class CFootMotion;
			class ModelBoneFlexDriver_t;
			class AnimStateID;
			class CHitBox;
			class AnimNodeID;
			class CPhysSurfacePropertiesSoundNames;
			class PermModelInfo_t;
			class VPhysXCollisionAttributes_t;
			class CMaterialDrawDescriptor;
			class CMeshletDescriptor;
			class AnimNodeOutputID;
			class CSceneObjectData;
			class CModelConfigList;
			class CBoneConstraintPoseSpaceMorph_Input_t;
			class AttachmentHandle_t;
			class PermModelDataAnimatedMaterialAttribute_t;
			// Enumerator count: 15
			// Alignment: 
			// Size: 0x4
			enum class PermModelInfo_t_FlagEnum : std::uint32_t {
				FLAG_TRANSLUCENT = 0x1,
				FLAG_TRANSLUCENT_TWO_PASS = 0x2,
				FLAG_MODEL_IS_RUNTIME_COMBINED = 0x4,
				FLAG_SOURCE1_IMPORT = 0x8,
				FLAG_MODEL_PART_CHILD = 0x10,
				FLAG_NAV_GEN_NONE = 0x20,
				FLAG_NAV_GEN_HULL = 0x40,
				FLAG_NO_FORCED_FADE = 0x800,
				FLAG_HAS_SKINNED_MESHES = 0x400,
				FLAG_DO_NOT_CAST_SHADOWS = 0x20000,
				FLAG_FORCE_PHONEME_CROSSFADE = 0x1000,
				FLAG_NO_ANIM_EVENTS = 0x100000,
				FLAG_ANIMATION_DRIVEN_FLEXES = 0x200000,
				FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 0x400000,
				FLAG_MODEL_DOC = 0x800000,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x1
			enum class MovementGait_t : std::uint8_t {
				// MPropertyFriendlyName "None"
				eInvalid = 255,
				// MPropertyFriendlyName "Slow"
				eSlow = 0,
				// MPropertyFriendlyName "Medium"
				eMedium = 1,
				// MPropertyFriendlyName "Fast"
				eFast = 2,
				// MPropertyFriendlyName "VeryFast"
				eVeryFast = 3,
				// MPropertySuppressEnumerator
				eCount = 4,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ModelBoneFlexComponent_t : std::uint32_t {
				MODEL_BONE_FLEX_INVALID = 0xffffffff,
				MODEL_BONE_FLEX_TX = 0x0,
				MODEL_BONE_FLEX_TY = 0x1,
				MODEL_BONE_FLEX_TZ = 0x2,
			};
			// Enumerator count: 26
			// Alignment: 
			// Size: 0x4
			enum class FlexOpCode_t : std::uint32_t {
				FLEX_OP_CONST = 0x1,
				FLEX_OP_FETCH1 = 0x2,
				FLEX_OP_FETCH2 = 0x3,
				FLEX_OP_ADD = 0x4,
				FLEX_OP_SUB = 0x5,
				FLEX_OP_MUL = 0x6,
				FLEX_OP_DIV = 0x7,
				FLEX_OP_NEG = 0x8,
				FLEX_OP_EXP = 0x9,
				FLEX_OP_OPEN = 0xa,
				FLEX_OP_CLOSE = 0xb,
				FLEX_OP_COMMA = 0xc,
				FLEX_OP_MAX = 0xd,
				FLEX_OP_MIN = 0xe,
				FLEX_OP_2WAY_0 = 0xf,
				FLEX_OP_2WAY_1 = 0x10,
				FLEX_OP_NWAY = 0x11,
				FLEX_OP_COMBO = 0x12,
				FLEX_OP_DOMINATE = 0x13,
				FLEX_OP_DME_LOWER_EYELID = 0x14,
				FLEX_OP_DME_UPPER_EYELID = 0x15,
				FLEX_OP_SQRT = 0x16,
				FLEX_OP_REMAPVALCLAMPED = 0x17,
				FLEX_OP_SIN = 0x18,
				FLEX_OP_COS = 0x19,
				FLEX_OP_ABS = 0x1a,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class VPhysXJoint_t_Flags_t : std::uint32_t {
				JOINT_FLAGS_NONE = 0x0,
				JOINT_FLAGS_BODY1_FIXED = 0x1,
				JOINT_FLAGS_USE_BLOCK_SOLVER = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class MorphFlexControllerRemapType_t : std::uint32_t {
				MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
				MORPH_FLEXCONTROLLER_REMAP_2WAY = 0x1,
				MORPH_FLEXCONTROLLER_REMAP_NWAY = 0x2,
				MORPH_FLEXCONTROLLER_REMAP_EYELID = 0x3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class VPhysXAggregateData_t_VPhysXFlagEnum_t : std::uint32_t {
				FLAG_IS_POLYSOUP_GEOMETRY = 0x1,
				FLAG_LEVEL_COLLISION = 0x10,
				FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 0x20,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class VPhysXBodyPart_t_VPhysXFlagEnum_t : std::uint32_t {
				FLAG_STATIC = 0x1,
				FLAG_KINEMATIC = 0x2,
				FLAG_JOINT = 0x4,
				FLAG_MASS = 0x8,
				FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 0x10,
			};
			// Enumerator count: 8
			// Alignment: 
			// Size: 0x4
			enum class MeshDrawPrimitiveFlags_t : std::uint32_t {
				MESH_DRAW_FLAGS_NONE = 0x0,
				MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 0x1,
				MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 0x2,
				MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 0x8,
				MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 0x10,
				MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 0x20,
				MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 0x40,
				MESH_DRAW_FLAGS_DRAW_LAST = 0x80,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class VPhysXConstraintParams_t_EnumFlags0_t : std::uint32_t {
				FLAG0_SHIFT_INTERPENETRATE = 0x0,
				FLAG0_SHIFT_CONSTRAIN = 0x1,
				FLAG0_SHIFT_BREAKABLE_FORCE = 0x2,
				FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3,
			};
			// Enumerator count: 22
			// Alignment: 
			// Size: 0x4
			enum class ModelSkeletonData_t_BoneFlags_t : std::uint32_t {
				FLAG_NO_BONE_FLAGS = 0x0,
				FLAG_BONEFLEXDRIVER = 0x4,
				FLAG_CLOTH = 0x8,
				FLAG_PHYSICS = 0x10,
				FLAG_ATTACHMENT = 0x20,
				FLAG_ANIMATION = 0x40,
				FLAG_MESH = 0x80,
				FLAG_HITBOX = 0x100,
				FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
				FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
				FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
				FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
				FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
				FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
				FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
				FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
				FLAG_BONE_MERGE_READ = 0x40000,
				FLAG_BONE_MERGE_WRITE = 0x80000,
				FLAG_ALL_BONE_FLAGS = 0xfffff,
				BLEND_PREALIGNED = 0x100000,
				FLAG_RIGIDLENGTH = 0x200000,
				FLAG_PROCEDURAL = 0x400000,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class MorphBundleType_t : std::uint32_t {
				MORPH_BUNDLE_TYPE_NONE = 0x0,
				MORPH_BUNDLE_TYPE_POSITION_SPEED = 0x1,
				MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 0x2,
				MORPH_BUNDLE_TYPE_COUNT = 0x3,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class ModelConfigAttachmentType_t : std::uint32_t {
				MODEL_CONFIG_ATTACHMENT_INVALID = 0xffffffff,
				MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0x0,
				MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 0x1,
				MODEL_CONFIG_ATTACHMENT_BONEMERGE = 0x2,
				MODEL_CONFIG_ATTACHMENT_COUNT = 0x3,
			};
			struct PhysSoftbodyDesc_t {
				MEMBER(particle_bone_hash, modellib::PhysSoftbodyDesc_t, cutl_vector<uint32_t>);
				MEMBER(particles, modellib::PhysSoftbodyDesc_t, cutl_vector<physicslib::RnSoftbodyParticle_t>);
				MEMBER(springs, modellib::PhysSoftbodyDesc_t, cutl_vector<physicslib::RnSoftbodySpring_t>);
				MEMBER(capsules, modellib::PhysSoftbodyDesc_t, cutl_vector<physicslib::RnSoftbodyCapsule_t>);
				MEMBER(init_pose, modellib::PhysSoftbodyDesc_t, cutl_vector<CTransform>);
				MEMBER(particle_bone_name, modellib::PhysSoftbodyDesc_t, cutl_vector<cutl_string>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PhysSoftbodyDesc_t

			class CPhysSurfacePropertiesAudio {
				MEMBER(reflectivity, modellib::CPhysSurfacePropertiesAudio, float);
				MEMBER(hardness_factor, modellib::CPhysSurfacePropertiesAudio, float);
				MEMBER(roughness_factor, modellib::CPhysSurfacePropertiesAudio, float);
				MEMBER(rough_threshold, modellib::CPhysSurfacePropertiesAudio, float);
				MEMBER(hard_threshold, modellib::CPhysSurfacePropertiesAudio, float);
				MEMBER(hard_velocity_threshold, modellib::CPhysSurfacePropertiesAudio, float);
				MEMBER(fl_static_impact_volume, modellib::CPhysSurfacePropertiesAudio, float);
				MEMBER(fl_occlusion_factor, modellib::CPhysSurfacePropertiesAudio, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysSurfacePropertiesAudio

			class CBoneConstraintBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBoneConstraintBase

			class CBoneConstraintDotToMorph : public modellib::CBoneConstraintBase {
				MEMBER(s_bone_name, modellib::CBoneConstraintDotToMorph, cutl_string);
				MEMBER(s_target_bone_name, modellib::CBoneConstraintDotToMorph, cutl_string);
				MEMBER(s_morph_channel_name, modellib::CBoneConstraintDotToMorph, cutl_string);
				MEMBER_ARR(fl_remap, modellib::CBoneConstraintDotToMorph, 4, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBoneConstraintDotToMorph

			class CBoneConstraintPoseSpaceMorph : public modellib::CBoneConstraintBase {
				MEMBER(s_bone_name, modellib::CBoneConstraintPoseSpaceMorph, cutl_string);
				MEMBER(s_attachment_name, modellib::CBoneConstraintPoseSpaceMorph, cutl_string);
				MEMBER(output_morph, modellib::CBoneConstraintPoseSpaceMorph, cutl_vector<cutl_string>);
				MEMBER(input_list, modellib::CBoneConstraintPoseSpaceMorph, cutl_vector<modellib::CBoneConstraintPoseSpaceMorph_Input_t>);
				MEMBER(b_clamp, modellib::CBoneConstraintPoseSpaceMorph, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBoneConstraintPoseSpaceMorph

			class CBaseConstraint : public modellib::CBoneConstraintBase {
				MEMBER(name, modellib::CBaseConstraint, cutl_string);
				MEMBER(v_up_vector, modellib::CBaseConstraint, vector);
				MEMBER(slaves, modellib::CBaseConstraint, CUtlLeanVector<modellib::CConstraintSlave>);
				MEMBER(targets, modellib::CBaseConstraint, cutl_vector<modellib::CConstraintTarget>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseConstraint

			class COrientConstraint : public modellib::CBaseConstraint {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class COrientConstraint

			class CPointConstraint : public modellib::CBaseConstraint {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointConstraint

			class CBoneConstraintPoseSpaceBone : public modellib::CBaseConstraint {
				MEMBER(input_list, modellib::CBoneConstraintPoseSpaceBone, cutl_vector<modellib::CBoneConstraintPoseSpaceBone_Input_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBoneConstraintPoseSpaceBone

			class CTiltTwistConstraint : public modellib::CBaseConstraint {
				MEMBER(n_target_axis, modellib::CTiltTwistConstraint, int32_t);
				MEMBER(n_slave_axis, modellib::CTiltTwistConstraint, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTiltTwistConstraint

			class CTwistConstraint : public modellib::CBaseConstraint {
				MEMBER(b_inverse, modellib::CTwistConstraint, bool);
				MEMBER(q_parent_bind_rotation, modellib::CTwistConstraint, quaternion);
				MEMBER(q_child_bind_rotation, modellib::CTwistConstraint, quaternion);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTwistConstraint

			class CParentConstraint : public modellib::CBaseConstraint {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParentConstraint

			class CAimConstraint : public modellib::CBaseConstraint {
				MEMBER(q_aim_offset, modellib::CAimConstraint, quaternion);
				MEMBER(n_up_type, modellib::CAimConstraint, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAimConstraint

			class CMorphConstraint : public modellib::CBaseConstraint {
				MEMBER(s_target_morph, modellib::CMorphConstraint, cutl_string);
				MEMBER(n_slave_channel, modellib::CMorphConstraint, int32_t);
				MEMBER(fl_min, modellib::CMorphConstraint, float);
				MEMBER(fl_max, modellib::CMorphConstraint, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMorphConstraint

			struct SkeletonBoneBounds_t {
				MEMBER(vec_center, modellib::SkeletonBoneBounds_t, vector);
				MEMBER(vec_size, modellib::SkeletonBoneBounds_t, vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SkeletonBoneBounds_t

			class CAnimAttachment {
				MEMBER_ARR(influence_rotations, modellib::CAnimAttachment, 3, quaternion);
				MEMBER_ARR(influence_offsets, modellib::CAnimAttachment, 3, vector_aligned);
				MEMBER_ARR(influence_indices, modellib::CAnimAttachment, 3, int32_t);
				MEMBER_ARR(influence_weights, modellib::CAnimAttachment, 3, float);
				MEMBER(num_influences, modellib::CAnimAttachment, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimAttachment

			class CPhysSurfacePropertiesPhysics {
				MEMBER(friction, modellib::CPhysSurfacePropertiesPhysics, float);
				MEMBER(elasticity, modellib::CPhysSurfacePropertiesPhysics, float);
				MEMBER(density, modellib::CPhysSurfacePropertiesPhysics, float);
				MEMBER(thickness, modellib::CPhysSurfacePropertiesPhysics, float);
				MEMBER(soft_contact_frequency, modellib::CPhysSurfacePropertiesPhysics, float);
				MEMBER(soft_contact_damping_ratio, modellib::CPhysSurfacePropertiesPhysics, float);
				MEMBER(wheel_drag, modellib::CPhysSurfacePropertiesPhysics, float);
				MEMBER(heat_conductivity, modellib::CPhysSurfacePropertiesPhysics, float);
				MEMBER(flashpoint, modellib::CPhysSurfacePropertiesPhysics, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysSurfacePropertiesPhysics

			class CRenderSkeleton {
				MEMBER(bones, modellib::CRenderSkeleton, cutl_vector<modellib::RenderSkeletonBone_t>);
				MEMBER(bone_parents, modellib::CRenderSkeleton, cutl_vector<int32_t>);
				MEMBER(n_bone_weight_count, modellib::CRenderSkeleton, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRenderSkeleton

			class CVPhysXSurfacePropertiesList {
				MEMBER(surface_properties_list, modellib::CVPhysXSurfacePropertiesList, cutl_vector<modellib::CPhysSurfaceProperties*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVPhysXSurfacePropertiesList

			class AnimParamID {
				MEMBER(id, modellib::AnimParamID, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class AnimParamID

			class CRenderGroom {
				MEMBER(hairs, modellib::CRenderGroom, cutl_vector<modellib::RenderHairStrandInfo_t>);
				MEMBER(hair_position_offsets, modellib::CRenderGroom, cutl_vector<uint32_t>);
				MEMBER(h_sim_params_mat, modellib::CRenderGroom, CStrongHandleCopyable<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(n_segments_per_hair_strand, modellib::CRenderGroom, int32_t);
				MEMBER(n_guide_hair_count, modellib::CRenderGroom, int32_t);
				MEMBER(n_hair_count, modellib::CRenderGroom, int32_t);
				MEMBER(n_groom_group_id, modellib::CRenderGroom, int32_t);
				MEMBER(n_attach_bone_idx, modellib::CRenderGroom, int32_t);
				MEMBER(n_attach_mesh_idx, modellib::CRenderGroom, int32_t);
				MEMBER(n_attach_mesh_draw_call_idx, modellib::CRenderGroom, int32_t);
				MEMBER(b_enable_simulation, modellib::CRenderGroom, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRenderGroom

			class CFlexRule {
				MEMBER(n_flex, modellib::CFlexRule, int32_t);
				MEMBER(flex_ops, modellib::CFlexRule, cutl_vector<modellib::CFlexOp>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFlexRule

			struct RenderSkeletonBone_t {
				MEMBER(bone_name, modellib::RenderSkeletonBone_t, cutl_string);
				MEMBER(parent_name, modellib::RenderSkeletonBone_t, cutl_string);
				MEMBER(inv_bind_pose, modellib::RenderSkeletonBone_t, matrix3x4_t);
				MEMBER(bbox, modellib::RenderSkeletonBone_t, modellib::SkeletonBoneBounds_t);
				MEMBER(fl_sphere_radius, modellib::RenderSkeletonBone_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RenderSkeletonBone_t

			struct ModelBoneFlexDriverControl_t {
				MEMBER(n_bone_component, modellib::ModelBoneFlexDriverControl_t, modellib::ModelBoneFlexComponent_t);
				MEMBER(flex_controller, modellib::ModelBoneFlexDriverControl_t, cutl_string);
				MEMBER(flex_controller_token, modellib::ModelBoneFlexDriverControl_t, uint32_t);
				MEMBER(fl_min, modellib::ModelBoneFlexDriverControl_t, float);
				MEMBER(fl_max, modellib::ModelBoneFlexDriverControl_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ModelBoneFlexDriverControl_t

			struct VPhysics2ShapeDef_t {
				MEMBER(spheres, modellib::VPhysics2ShapeDef_t, cutl_vector<physicslib::RnSphereDesc_t>);
				MEMBER(capsules, modellib::VPhysics2ShapeDef_t, cutl_vector<physicslib::RnCapsuleDesc_t>);
				MEMBER(hulls, modellib::VPhysics2ShapeDef_t, cutl_vector<physicslib::RnHullDesc_t>);
				MEMBER(meshes, modellib::VPhysics2ShapeDef_t, cutl_vector<physicslib::RnMeshDesc_t>);
				MEMBER(collision_attribute_indices, modellib::VPhysics2ShapeDef_t, cutl_vector<uint16_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VPhysics2ShapeDef_t

			class CAnimSkeleton {
				MEMBER(local_space_transforms, modellib::CAnimSkeleton, cutl_vector<CTransform>);
				MEMBER(model_space_transforms, modellib::CAnimSkeleton, cutl_vector<CTransform>);
				MEMBER(bone_names, modellib::CAnimSkeleton, cutl_vector<cutl_string>);
				MEMBER(children, modellib::CAnimSkeleton, cutl_vector<cutl_vector<int32_t>>);
				MEMBER(parents, modellib::CAnimSkeleton, cutl_vector<int32_t>);
				MEMBER(feet, modellib::CAnimSkeleton, cutl_vector<modellib::CAnimFoot>);
				MEMBER(morph_names, modellib::CAnimSkeleton, cutl_vector<cutl_string>);
				MEMBER(lod_bone_counts, modellib::CAnimSkeleton, cutl_vector<int32_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimSkeleton

			class CRenderMesh {
				///MEMBER(scene_objects, modellib::CRenderMesh, CUtlLeanVectorFixedGrowable<modellib::CSceneObjectData,1>);
				MEMBER(constraints, modellib::CRenderMesh, CUtlLeanVector<modellib::CBaseConstraint*>);
				MEMBER(skeleton, modellib::CRenderMesh, modellib::CRenderSkeleton);
				MEMBER(mesh_deform_params, modellib::CRenderMesh, modellib::DynamicMeshDeformParams_t);
				MEMBER(p_groom_data, modellib::CRenderMesh, modellib::CRenderGroom*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRenderMesh

			class CFlexDesc {
				MEMBER(sz_facs, modellib::CFlexDesc, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFlexDesc

			struct SkeletonDemoDb_t {
				MEMBER(anim_captures, modellib::SkeletonDemoDb_t, cutl_vector<modellib::SkeletonAnimCapture_t*>);
				MEMBER(camera_track, modellib::SkeletonDemoDb_t, cutl_vector<modellib::SkeletonAnimCapture_t_Camera_t>);
				MEMBER(fl_recording_time, modellib::SkeletonDemoDb_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SkeletonDemoDb_t

			class CFlexController {
				MEMBER(sz_name, modellib::CFlexController, cutl_string);
				MEMBER(sz_type, modellib::CFlexController, cutl_string);
				MEMBER(min, modellib::CFlexController, float);
				MEMBER(max, modellib::CFlexController, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFlexController

			class CFootTrajectory {
				MEMBER(v_offset, modellib::CFootTrajectory, vector);
				MEMBER(fl_rotation_offset, modellib::CFootTrajectory, float);
				MEMBER(fl_progression, modellib::CFootTrajectory, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootTrajectory

			struct CBoneConstraintPoseSpaceBone_Input_t {
				MEMBER(input_value, modellib::CBoneConstraintPoseSpaceBone_Input_t, vector);
				MEMBER(output_transform_list, modellib::CBoneConstraintPoseSpaceBone_Input_t, cutl_vector<CTransform>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CBoneConstraintPoseSpaceBone_Input_t

			class CFootStride {
				MEMBER(definition, modellib::CFootStride, modellib::CFootCycleDefinition);
				MEMBER(trajectories, modellib::CFootStride, modellib::CFootTrajectories);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootStride

			class CFlexOp {
				MEMBER(op_code, modellib::CFlexOp, modellib::FlexOpCode_t);
				MEMBER(data, modellib::CFlexOp, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFlexOp

			struct SkeletonAnimCapture_t_Frame_t {
				MEMBER(fl_time, modellib::SkeletonAnimCapture_t_Frame_t, float);
				MEMBER(stamp, modellib::SkeletonAnimCapture_t_Frame_t, modellib::SkeletonAnimCapture_t_FrameStamp_t);
				MEMBER(transform, modellib::SkeletonAnimCapture_t_Frame_t, CTransform);
				MEMBER(b_teleport, modellib::SkeletonAnimCapture_t_Frame_t, bool);
				MEMBER(composite_bones, modellib::SkeletonAnimCapture_t_Frame_t, cutl_vector<CTransform>);
				MEMBER(sim_state_bones, modellib::SkeletonAnimCapture_t_Frame_t, cutl_vector<CTransform>);
				MEMBER(fe_model_anims, modellib::SkeletonAnimCapture_t_Frame_t, cutl_vector<CTransform>);
				MEMBER(fe_model_pos, modellib::SkeletonAnimCapture_t_Frame_t, cutl_vector<vector_aligned>);
				MEMBER(flex_controller_weights, modellib::SkeletonAnimCapture_t_Frame_t, cutl_vector<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SkeletonAnimCapture_t_Frame_t

			struct SkeletonAnimCapture_t_Camera_t {
				MEMBER(tm_camera, modellib::SkeletonAnimCapture_t_Camera_t, CTransform);
				MEMBER(fl_time, modellib::SkeletonAnimCapture_t_Camera_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SkeletonAnimCapture_t_Camera_t

			class CAnimFoot {
				MEMBER(name, modellib::CAnimFoot, cutl_string);
				MEMBER(v_ball_offset, modellib::CAnimFoot, vector);
				MEMBER(v_heel_offset, modellib::CAnimFoot, vector);
				MEMBER(ankle_bone_index, modellib::CAnimFoot, int32_t);
				MEMBER(toe_bone_index, modellib::CAnimFoot, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimFoot

			class CMorphRectData {
				MEMBER(n_xleft_dst, modellib::CMorphRectData, int16_t);
				MEMBER(n_ytop_dst, modellib::CMorphRectData, int16_t);
				MEMBER(fl_uwidth_src, modellib::CMorphRectData, float);
				MEMBER(fl_vheight_src, modellib::CMorphRectData, float);
				MEMBER(bundle_datas, modellib::CMorphRectData, cutl_vector<modellib::CMorphBundleData>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMorphRectData

			class AnimTagID {
				MEMBER(id, modellib::AnimTagID, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class AnimTagID

			class CHitBoxSet {
				MEMBER(name, modellib::CHitBoxSet, cutl_string);
				MEMBER(n_name_hash, modellib::CHitBoxSet, uint32_t);
				MEMBER(hit_boxes, modellib::CHitBoxSet, cutl_vector<modellib::CHitBox>);
				MEMBER(source_filename, modellib::CHitBoxSet, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHitBoxSet

			class AnimScriptHandle {
				MEMBER(id, modellib::AnimScriptHandle, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class AnimScriptHandle

			struct DynamicMeshDeformParams_t {
				MEMBER(fl_tension_compress_scale, modellib::DynamicMeshDeformParams_t, float);
				MEMBER(fl_tension_stretch_scale, modellib::DynamicMeshDeformParams_t, float);
				MEMBER(b_recompute_smooth_normals_after_animation, modellib::DynamicMeshDeformParams_t, bool);
				MEMBER(b_compute_dynamic_mesh_tension_after_animation, modellib::DynamicMeshDeformParams_t, bool);
				MEMBER(b_smooth_normals_across_uv_seams, modellib::DynamicMeshDeformParams_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct DynamicMeshDeformParams_t

			struct SkeletonAnimCapture_t_FrameStamp_t {
				MEMBER(fl_time, modellib::SkeletonAnimCapture_t_FrameStamp_t, float);
				MEMBER(fl_entity_sim_time, modellib::SkeletonAnimCapture_t_FrameStamp_t, float);
				MEMBER(b_teleport_tick, modellib::SkeletonAnimCapture_t_FrameStamp_t, bool);
				MEMBER(b_predicted, modellib::SkeletonAnimCapture_t_FrameStamp_t, bool);
				MEMBER(fl_cur_time, modellib::SkeletonAnimCapture_t_FrameStamp_t, float);
				MEMBER(fl_real_time, modellib::SkeletonAnimCapture_t_FrameStamp_t, float);
				MEMBER(n_frame_count, modellib::SkeletonAnimCapture_t_FrameStamp_t, int32_t);
				MEMBER(n_tick_count, modellib::SkeletonAnimCapture_t_FrameStamp_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SkeletonAnimCapture_t_FrameStamp_t

			struct PermModelExtPart_t {
				MEMBER(transform, modellib::PermModelExtPart_t, CTransform);
				MEMBER(name, modellib::PermModelExtPart_t, cutl_string);
				MEMBER(n_parent, modellib::PermModelExtPart_t, int32_t);
				MEMBER(ref_model, modellib::PermModelExtPart_t, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PermModelExtPart_t

			class CFootDefinition {
				MEMBER(name, modellib::CFootDefinition, cutl_string);
				MEMBER(ankle_bone_name, modellib::CFootDefinition, cutl_string);
				MEMBER(toe_bone_name, modellib::CFootDefinition, cutl_string);
				MEMBER(v_ball_offset, modellib::CFootDefinition, vector);
				MEMBER(v_heel_offset, modellib::CFootDefinition, vector);
				MEMBER(fl_foot_length, modellib::CFootDefinition, float);
				MEMBER(fl_bind_pose_direction_ms, modellib::CFootDefinition, float);
				MEMBER(fl_trace_height, modellib::CFootDefinition, float);
				MEMBER(fl_trace_radius, modellib::CFootDefinition, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootDefinition

			class CConstraintTarget {
				MEMBER(q_offset, modellib::CConstraintTarget, quaternion);
				MEMBER(v_offset, modellib::CConstraintTarget, vector);
				MEMBER(n_bone_hash, modellib::CConstraintTarget, uint32_t);
				MEMBER(s_name, modellib::CConstraintTarget, cutl_string);
				MEMBER(fl_weight, modellib::CConstraintTarget, float);
				MEMBER(b_is_attachment, modellib::CConstraintTarget, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CConstraintTarget

			struct VPhysXConstraint2_t {
				MEMBER(n_flags, modellib::VPhysXConstraint2_t, uint32_t);
				MEMBER(n_parent, modellib::VPhysXConstraint2_t, uint16_t);
				MEMBER(n_child, modellib::VPhysXConstraint2_t, uint16_t);
				MEMBER(params, modellib::VPhysXConstraint2_t, modellib::VPhysXConstraintParams_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VPhysXConstraint2_t

			class CPhysSurfaceProperties {
				MEMBER(name, modellib::CPhysSurfaceProperties, cutl_string);
				MEMBER(name_hash, modellib::CPhysSurfaceProperties, uint32_t);
				MEMBER(base_name_hash, modellib::CPhysSurfaceProperties, uint32_t);
				MEMBER(b_hidden, modellib::CPhysSurfaceProperties, bool);
				MEMBER(description, modellib::CPhysSurfaceProperties, cutl_string);
				MEMBER(physics, modellib::CPhysSurfaceProperties, modellib::CPhysSurfacePropertiesPhysics);
				MEMBER(audio_sounds, modellib::CPhysSurfaceProperties, modellib::CPhysSurfacePropertiesSoundNames);
				MEMBER(audio_params, modellib::CPhysSurfaceProperties, modellib::CPhysSurfacePropertiesAudio);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysSurfaceProperties

			struct SkeletonAnimCapture_t {
				MEMBER(n_ent_index, modellib::SkeletonAnimCapture_t, CEntityIndex);
				MEMBER(n_ent_parent, modellib::SkeletonAnimCapture_t, CEntityIndex);
				MEMBER(imported_collision, modellib::SkeletonAnimCapture_t, cutl_vector<CEntityIndex>);
				MEMBER(model_name, modellib::SkeletonAnimCapture_t, cutl_string);
				MEMBER(capture_name, modellib::SkeletonAnimCapture_t, cutl_string);
				MEMBER(model_bind_pose, modellib::SkeletonAnimCapture_t, cutl_vector<modellib::SkeletonAnimCapture_t_Bone_t>);
				MEMBER(fe_model_init_pose, modellib::SkeletonAnimCapture_t, cutl_vector<modellib::SkeletonAnimCapture_t_Bone_t>);
				MEMBER(n_flex_controllers, modellib::SkeletonAnimCapture_t, int32_t);
				MEMBER(b_predicted, modellib::SkeletonAnimCapture_t, bool);
				MEMBER(frames, modellib::SkeletonAnimCapture_t, cutl_vector<modellib::SkeletonAnimCapture_t_Frame_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SkeletonAnimCapture_t

			class CMorphSetData {
				MEMBER(n_width, modellib::CMorphSetData, int32_t);
				MEMBER(n_height, modellib::CMorphSetData, int32_t);
				MEMBER(bundle_types, modellib::CMorphSetData, cutl_vector<modellib::MorphBundleType_t>);
				MEMBER(morph_datas, modellib::CMorphSetData, cutl_vector<modellib::CMorphData>);
				MEMBER(p_texture_atlas, modellib::CMorphSetData, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(flex_desc, modellib::CMorphSetData, cutl_vector<modellib::CFlexDesc>);
				MEMBER(flex_controllers, modellib::CMorphSetData, cutl_vector<modellib::CFlexController>);
				MEMBER(flex_rules, modellib::CMorphSetData, cutl_vector<modellib::CFlexRule>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMorphSetData

			struct SkeletonAnimCapture_t_Bone_t {
				MEMBER(name, modellib::SkeletonAnimCapture_t_Bone_t, cutl_string);
				MEMBER(bind_pose, modellib::SkeletonAnimCapture_t_Bone_t, CTransform);
				MEMBER(n_parent, modellib::SkeletonAnimCapture_t_Bone_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SkeletonAnimCapture_t_Bone_t

			struct ModelSkeletonData_t {
				MEMBER(bone_name, modellib::ModelSkeletonData_t, cutl_vector<cutl_string>);
				MEMBER(n_parent, modellib::ModelSkeletonData_t, cutl_vector<int16_t>);
				MEMBER(bone_sphere, modellib::ModelSkeletonData_t, cutl_vector<float>);
				MEMBER(n_flag, modellib::ModelSkeletonData_t, cutl_vector<uint32_t>);
				MEMBER(bone_pos_parent, modellib::ModelSkeletonData_t, cutl_vector<vector>);
				MEMBER(bone_rot_parent, modellib::ModelSkeletonData_t, cutl_vector<quaternion_storage>);
				MEMBER(bone_scale_parent, modellib::ModelSkeletonData_t, cutl_vector<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ModelSkeletonData_t

			class CMorphBundleData {
				MEMBER(fl_uleft_src, modellib::CMorphBundleData, float);
				MEMBER(fl_vtop_src, modellib::CMorphBundleData, float);
				MEMBER(offsets, modellib::CMorphBundleData, cutl_vector<float>);
				MEMBER(ranges, modellib::CMorphBundleData, cutl_vector<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMorphBundleData

			class CFootTrajectories {
				MEMBER(trajectories, modellib::CFootTrajectories, cutl_vector<modellib::CFootTrajectory>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootTrajectories

			class CRenderBufferBinding {
				MEMBER(h_buffer, modellib::CRenderBufferBinding, uint64_t);
				MEMBER(n_bind_offset_bytes, modellib::CRenderBufferBinding, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRenderBufferBinding

			struct MaterialGroup_t {
				MEMBER(name, modellib::MaterialGroup_t, cutl_string);
				MEMBER(materials, modellib::MaterialGroup_t, cutl_vector<CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct MaterialGroup_t

			struct VPhysXRange_t {
				MEMBER(fl_min, modellib::VPhysXRange_t, float);
				MEMBER(fl_max, modellib::VPhysXRange_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VPhysXRange_t

			class CConstraintSlave {
				MEMBER(q_base_orientation, modellib::CConstraintSlave, quaternion);
				MEMBER(v_base_position, modellib::CConstraintSlave, vector);
				MEMBER(n_bone_hash, modellib::CConstraintSlave, uint32_t);
				MEMBER(fl_weight, modellib::CConstraintSlave, float);
				MEMBER(s_name, modellib::CConstraintSlave, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CConstraintSlave

			struct VPhysXAggregateData_t {
				MEMBER(n_flags, modellib::VPhysXAggregateData_t, uint16_t);
				MEMBER(n_ref_counter, modellib::VPhysXAggregateData_t, uint16_t);
				MEMBER(bones_hash, modellib::VPhysXAggregateData_t, cutl_vector<uint32_t>);
				MEMBER(bone_names, modellib::VPhysXAggregateData_t, cutl_vector<cutl_string>);
				MEMBER(index_names, modellib::VPhysXAggregateData_t, cutl_vector<uint16_t>);
				MEMBER(index_hash, modellib::VPhysXAggregateData_t, cutl_vector<uint16_t>);
				MEMBER(bind_pose, modellib::VPhysXAggregateData_t, cutl_vector<matrix3x4a_t>);
				MEMBER(parts, modellib::VPhysXAggregateData_t, cutl_vector<modellib::VPhysXBodyPart_t>);
				MEMBER(constraints2, modellib::VPhysXAggregateData_t, cutl_vector<modellib::VPhysXConstraint2_t>);
				MEMBER(joints, modellib::VPhysXAggregateData_t, cutl_vector<modellib::VPhysXJoint_t>);
				MEMBER(p_fe_model, modellib::VPhysXAggregateData_t, physicslib::PhysFeModelDesc_t*);
				MEMBER(bone_parents, modellib::VPhysXAggregateData_t, cutl_vector<uint16_t>);
				MEMBER(surface_property_hashes, modellib::VPhysXAggregateData_t, cutl_vector<uint32_t>);
				MEMBER(collision_attributes, modellib::VPhysXAggregateData_t, cutl_vector<modellib::VPhysXCollisionAttributes_t>);
				MEMBER(debug_part_names, modellib::VPhysXAggregateData_t, cutl_vector<cutl_string>);
				MEMBER(embedded_keyvalues, modellib::VPhysXAggregateData_t, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VPhysXAggregateData_t

			struct VPhysXConstraintParams_t {
				MEMBER(n_type, modellib::VPhysXConstraintParams_t, int8_t);
				MEMBER(n_translate_motion, modellib::VPhysXConstraintParams_t, int8_t);
				MEMBER(n_rotate_motion, modellib::VPhysXConstraintParams_t, int8_t);
				MEMBER(n_flags, modellib::VPhysXConstraintParams_t, int8_t);
				MEMBER_ARR(anchor, modellib::VPhysXConstraintParams_t, 2, vector);
				MEMBER_ARR(axes, modellib::VPhysXConstraintParams_t, 2, quaternion_storage);
				MEMBER(max_force, modellib::VPhysXConstraintParams_t, float);
				MEMBER(max_torque, modellib::VPhysXConstraintParams_t, float);
				MEMBER(linear_limit_value, modellib::VPhysXConstraintParams_t, float);
				MEMBER(linear_limit_restitution, modellib::VPhysXConstraintParams_t, float);
				MEMBER(linear_limit_spring, modellib::VPhysXConstraintParams_t, float);
				MEMBER(linear_limit_damping, modellib::VPhysXConstraintParams_t, float);
				MEMBER(twist_low_limit_value, modellib::VPhysXConstraintParams_t, float);
				MEMBER(twist_low_limit_restitution, modellib::VPhysXConstraintParams_t, float);
				MEMBER(twist_low_limit_spring, modellib::VPhysXConstraintParams_t, float);
				MEMBER(twist_low_limit_damping, modellib::VPhysXConstraintParams_t, float);
				MEMBER(twist_high_limit_value, modellib::VPhysXConstraintParams_t, float);
				MEMBER(twist_high_limit_restitution, modellib::VPhysXConstraintParams_t, float);
				MEMBER(twist_high_limit_spring, modellib::VPhysXConstraintParams_t, float);
				MEMBER(twist_high_limit_damping, modellib::VPhysXConstraintParams_t, float);
				MEMBER(swing1_limit_value, modellib::VPhysXConstraintParams_t, float);
				MEMBER(swing1_limit_restitution, modellib::VPhysXConstraintParams_t, float);
				MEMBER(swing1_limit_spring, modellib::VPhysXConstraintParams_t, float);
				MEMBER(swing1_limit_damping, modellib::VPhysXConstraintParams_t, float);
				MEMBER(swing2_limit_value, modellib::VPhysXConstraintParams_t, float);
				MEMBER(swing2_limit_restitution, modellib::VPhysXConstraintParams_t, float);
				MEMBER(swing2_limit_spring, modellib::VPhysXConstraintParams_t, float);
				MEMBER(swing2_limit_damping, modellib::VPhysXConstraintParams_t, float);
				MEMBER(goal_position, modellib::VPhysXConstraintParams_t, vector);
				MEMBER(goal_orientation, modellib::VPhysXConstraintParams_t, quaternion_storage);
				MEMBER(goal_angular_velocity, modellib::VPhysXConstraintParams_t, vector);
				MEMBER(drive_spring_x, modellib::VPhysXConstraintParams_t, float);
				MEMBER(drive_spring_y, modellib::VPhysXConstraintParams_t, float);
				MEMBER(drive_spring_z, modellib::VPhysXConstraintParams_t, float);
				MEMBER(drive_damping_x, modellib::VPhysXConstraintParams_t, float);
				MEMBER(drive_damping_y, modellib::VPhysXConstraintParams_t, float);
				MEMBER(drive_damping_z, modellib::VPhysXConstraintParams_t, float);
				MEMBER(drive_spring_twist, modellib::VPhysXConstraintParams_t, float);
				MEMBER(drive_spring_swing, modellib::VPhysXConstraintParams_t, float);
				MEMBER(drive_spring_slerp, modellib::VPhysXConstraintParams_t, float);
				MEMBER(drive_damping_twist, modellib::VPhysXConstraintParams_t, float);
				MEMBER(drive_damping_swing, modellib::VPhysXConstraintParams_t, float);
				MEMBER(drive_damping_slerp, modellib::VPhysXConstraintParams_t, float);
				MEMBER(solver_iteration_count, modellib::VPhysXConstraintParams_t, int32_t);
				MEMBER(projection_linear_tolerance, modellib::VPhysXConstraintParams_t, float);
				MEMBER(projection_angular_tolerance, modellib::VPhysXConstraintParams_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VPhysXConstraintParams_t

			class AnimComponentID {
				MEMBER(id, modellib::AnimComponentID, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class AnimComponentID

			class CHitBoxSetList {
				MEMBER(hit_box_sets, modellib::CHitBoxSetList, cutl_vector<modellib::CHitBoxSet>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHitBoxSetList

			struct RenderHairStrandInfo_t {
				MEMBER_ARR(n_guide_hair_indices_n_surface_tri_index, modellib::RenderHairStrandInfo_t, 2, uint32_t);
				MEMBER_ARR(v_guide_bary_v_base_bary, modellib::RenderHairStrandInfo_t, 4, uint16_t);
				MEMBER_ARR(v_root_offset_fl_length_scale, modellib::RenderHairStrandInfo_t, 4, uint16_t);
				MEMBER_ARR(n_packed_base_uv, modellib::RenderHairStrandInfo_t, 2, uint16_t);
				MEMBER(n_packed_surface_normal_os, modellib::RenderHairStrandInfo_t, uint32_t);
				MEMBER(n_packed_surface_tangent_os, modellib::RenderHairStrandInfo_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RenderHairStrandInfo_t

			class CModelConfig {
				MEMBER(config_name, modellib::CModelConfig, cutl_string);
				MEMBER(elements, modellib::CModelConfig, cutl_vector<modellib::CModelConfigElement*>);
				MEMBER(b_top_level, modellib::CModelConfig, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelConfig

			class CCycleBase {
				MEMBER(fl_cycle, modellib::CCycleBase, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCycleBase

			class CAnimCycle : public modellib::CCycleBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimCycle

			class CFootCycle : public modellib::CCycleBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootCycle

			class CModelConfigElement {
				MEMBER(element_name, modellib::CModelConfigElement, cutl_string);
				MEMBER(nested_elements, modellib::CModelConfigElement, cutl_vector<modellib::CModelConfigElement*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelConfigElement

			class CModelConfigElement_AttachedModel : public modellib::CModelConfigElement {
				MEMBER(instance_name, modellib::CModelConfigElement_AttachedModel, cutl_string);
				MEMBER(entity_class, modellib::CModelConfigElement_AttachedModel, cutl_string);
				MEMBER(h_model, modellib::CModelConfigElement_AttachedModel, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);
				MEMBER(v_offset, modellib::CModelConfigElement_AttachedModel, vector);
				MEMBER(a_ang_offset, modellib::CModelConfigElement_AttachedModel, qangle);
				MEMBER(attachment_name, modellib::CModelConfigElement_AttachedModel, cutl_string);
				MEMBER(local_attachment_offset_name, modellib::CModelConfigElement_AttachedModel, cutl_string);
				MEMBER(attachment_type, modellib::CModelConfigElement_AttachedModel, modellib::ModelConfigAttachmentType_t);
				MEMBER(b_bone_merge_flex, modellib::CModelConfigElement_AttachedModel, bool);
				MEMBER(b_user_specified_color, modellib::CModelConfigElement_AttachedModel, bool);
				MEMBER(b_user_specified_material_group, modellib::CModelConfigElement_AttachedModel, bool);
				MEMBER(b_accept_parent_material_driven_decals, modellib::CModelConfigElement_AttachedModel, bool);
				MEMBER(bodygroup_on_other_models, modellib::CModelConfigElement_AttachedModel, cutl_string);
				MEMBER(material_group_on_other_models, modellib::CModelConfigElement_AttachedModel, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelConfigElement_AttachedModel

			class CModelConfigElement_RandomColor : public modellib::CModelConfigElement {
				MEMBER(gradient, modellib::CModelConfigElement_RandomColor, CColorGradient);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelConfigElement_RandomColor

			class CModelConfigElement_SetBodygroup : public modellib::CModelConfigElement {
				MEMBER(group_name, modellib::CModelConfigElement_SetBodygroup, cutl_string);
				MEMBER(n_choice, modellib::CModelConfigElement_SetBodygroup, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelConfigElement_SetBodygroup

			class CModelConfigElement_Command : public modellib::CModelConfigElement {
				MEMBER(command, modellib::CModelConfigElement_Command, cutl_string);
				MEMBER(args, modellib::CModelConfigElement_Command, KeyValues3);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelConfigElement_Command

			class CModelConfigElement_RandomPick : public modellib::CModelConfigElement {
				MEMBER(choices, modellib::CModelConfigElement_RandomPick, cutl_vector<cutl_string>);
				MEMBER(choice_weights, modellib::CModelConfigElement_RandomPick, cutl_vector<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelConfigElement_RandomPick

			class CModelConfigElement_SetMaterialGroup : public modellib::CModelConfigElement {
				MEMBER(material_group_name, modellib::CModelConfigElement_SetMaterialGroup, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelConfigElement_SetMaterialGroup

			class CModelConfigElement_SetMaterialGroupOnAttachedModels : public modellib::CModelConfigElement {
				MEMBER(material_group_name, modellib::CModelConfigElement_SetMaterialGroupOnAttachedModels, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelConfigElement_SetMaterialGroupOnAttachedModels

			class CModelConfigElement_SetRenderColor : public modellib::CModelConfigElement {
				MEMBER(color, modellib::CModelConfigElement_SetRenderColor, color);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelConfigElement_SetRenderColor

			class CModelConfigElement_SetBodygroupOnAttachedModels : public modellib::CModelConfigElement {
				MEMBER(group_name, modellib::CModelConfigElement_SetBodygroupOnAttachedModels, cutl_string);
				MEMBER(n_choice, modellib::CModelConfigElement_SetBodygroupOnAttachedModels, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelConfigElement_SetBodygroupOnAttachedModels

			class CModelConfigElement_UserPick : public modellib::CModelConfigElement {
				MEMBER(choices, modellib::CModelConfigElement_UserPick, cutl_vector<cutl_string>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelConfigElement_UserPick

			struct VPhysXJoint_t {
				MEMBER(n_type, modellib::VPhysXJoint_t, uint16_t);
				MEMBER(n_body1, modellib::VPhysXJoint_t, uint16_t);
				MEMBER(n_body2, modellib::VPhysXJoint_t, uint16_t);
				MEMBER(n_flags, modellib::VPhysXJoint_t, uint16_t);
				MEMBER(frame1, modellib::VPhysXJoint_t, CTransform);
				MEMBER(frame2, modellib::VPhysXJoint_t, CTransform);
				MEMBER(b_enable_collision, modellib::VPhysXJoint_t, bool);
				MEMBER(b_enable_linear_limit, modellib::VPhysXJoint_t, bool);
				MEMBER(linear_limit, modellib::VPhysXJoint_t, modellib::VPhysXRange_t);
				MEMBER(b_enable_linear_motor, modellib::VPhysXJoint_t, bool);
				MEMBER(v_linear_target_velocity, modellib::VPhysXJoint_t, vector);
				MEMBER(fl_max_force, modellib::VPhysXJoint_t, float);
				MEMBER(b_enable_swing_limit, modellib::VPhysXJoint_t, bool);
				MEMBER(swing_limit, modellib::VPhysXJoint_t, modellib::VPhysXRange_t);
				MEMBER(b_enable_twist_limit, modellib::VPhysXJoint_t, bool);
				MEMBER(twist_limit, modellib::VPhysXJoint_t, modellib::VPhysXRange_t);
				MEMBER(b_enable_angular_motor, modellib::VPhysXJoint_t, bool);
				MEMBER(v_angular_target_velocity, modellib::VPhysXJoint_t, vector);
				MEMBER(fl_max_torque, modellib::VPhysXJoint_t, float);
				MEMBER(fl_linear_frequency, modellib::VPhysXJoint_t, float);
				MEMBER(fl_linear_damping_ratio, modellib::VPhysXJoint_t, float);
				MEMBER(fl_angular_frequency, modellib::VPhysXJoint_t, float);
				MEMBER(fl_angular_damping_ratio, modellib::VPhysXJoint_t, float);
				MEMBER(fl_friction, modellib::VPhysXJoint_t, float);
				MEMBER(fl_elasticity, modellib::VPhysXJoint_t, float);
				MEMBER(fl_elastic_damping, modellib::VPhysXJoint_t, float);
				MEMBER(fl_plasticity, modellib::VPhysXJoint_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VPhysXJoint_t

			class CFootCycleDefinition {
				MEMBER(v_stance_position_ms, modellib::CFootCycleDefinition, vector);
				MEMBER(v_midpoint_position_ms, modellib::CFootCycleDefinition, vector);
				MEMBER(fl_stance_direction_ms, modellib::CFootCycleDefinition, float);
				MEMBER(v_to_stride_start_pos, modellib::CFootCycleDefinition, vector);
				MEMBER(stance_cycle, modellib::CFootCycleDefinition, modellib::CAnimCycle);
				MEMBER(foot_lift_cycle, modellib::CFootCycleDefinition, modellib::CFootCycle);
				MEMBER(foot_off_cycle, modellib::CFootCycleDefinition, modellib::CFootCycle);
				MEMBER(foot_strike_cycle, modellib::CFootCycleDefinition, modellib::CFootCycle);
				MEMBER(foot_land_cycle, modellib::CFootCycleDefinition, modellib::CFootCycle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootCycleDefinition

			struct VPhysXBodyPart_t {
				MEMBER(n_flags, modellib::VPhysXBodyPart_t, uint32_t);
				MEMBER(fl_mass, modellib::VPhysXBodyPart_t, float);
				MEMBER(rn_shape, modellib::VPhysXBodyPart_t, modellib::VPhysics2ShapeDef_t);
				MEMBER(n_collision_attribute_index, modellib::VPhysXBodyPart_t, uint16_t);
				MEMBER(n_reserved, modellib::VPhysXBodyPart_t, uint16_t);
				MEMBER(fl_inertia_scale, modellib::VPhysXBodyPart_t, float);
				MEMBER(fl_linear_damping, modellib::VPhysXBodyPart_t, float);
				MEMBER(fl_angular_damping, modellib::VPhysXBodyPart_t, float);
				MEMBER(b_override_mass_center, modellib::VPhysXBodyPart_t, bool);
				MEMBER(v_mass_center_override, modellib::VPhysXBodyPart_t, vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VPhysXBodyPart_t

			class CDrawCullingData {
				MEMBER(v_cone_apex, modellib::CDrawCullingData, vector);
				MEMBER_ARR(cone_axis, modellib::CDrawCullingData, 3, int8_t);
				MEMBER(cone_cutoff, modellib::CDrawCullingData, int8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDrawCullingData

			struct PermModelData_t {
				MEMBER(name, modellib::PermModelData_t, cutl_string);
				MEMBER(model_info, modellib::PermModelData_t, modellib::PermModelInfo_t);
				MEMBER(ext_parts, modellib::PermModelData_t, cutl_vector<modellib::PermModelExtPart_t>);
				MEMBER(ref_meshes, modellib::PermModelData_t, cutl_vector<CStrongHandle<resourcesystem::InfoForResourceTypeCRenderMesh>>);
				MEMBER(ref_mesh_group_masks, modellib::PermModelData_t, cutl_vector<uint64_t>);
				MEMBER(ref_phys_group_masks, modellib::PermModelData_t, cutl_vector<uint64_t>);
				MEMBER(ref_lodgroup_masks, modellib::PermModelData_t, cutl_vector<uint8_t>);
				MEMBER(lod_group_switch_distances, modellib::PermModelData_t, cutl_vector<float>);
				MEMBER(ref_physics_data, modellib::PermModelData_t, cutl_vector<CStrongHandle<resourcesystem::InfoForResourceTypeCPhysAggregateData>>);
				MEMBER(ref_physics_hitbox_data, modellib::PermModelData_t, cutl_vector<CStrongHandle<resourcesystem::InfoForResourceTypeCPhysAggregateData>>);
				MEMBER(ref_anim_groups, modellib::PermModelData_t, cutl_vector<CStrongHandle<resourcesystem::InfoForResourceTypeCAnimationGroup>>);
				MEMBER(ref_sequence_groups, modellib::PermModelData_t, cutl_vector<CStrongHandle<resourcesystem::InfoForResourceTypeCSequenceGroupData>>);
				MEMBER(mesh_groups, modellib::PermModelData_t, cutl_vector<cutl_string>);
				MEMBER(material_groups, modellib::PermModelData_t, cutl_vector<modellib::MaterialGroup_t>);
				MEMBER(n_default_mesh_group_mask, modellib::PermModelData_t, uint64_t);
				MEMBER(model_skeleton, modellib::PermModelData_t, modellib::ModelSkeletonData_t);
				MEMBER(remapping_table, modellib::PermModelData_t, cutl_vector<int16_t>);
				MEMBER(remapping_table_starts, modellib::PermModelData_t, cutl_vector<uint16_t>);
				MEMBER(bone_flex_drivers, modellib::PermModelData_t, cutl_vector<modellib::ModelBoneFlexDriver_t>);
				MEMBER(p_model_config_list, modellib::PermModelData_t, modellib::CModelConfigList*);
				MEMBER(body_groups_hidden_in_tools, modellib::PermModelData_t, cutl_vector<cutl_string>);
				MEMBER(ref_anim_include_models, modellib::PermModelData_t, cutl_vector<CStrongHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(animated_material_attributes, modellib::PermModelData_t, cutl_vector<modellib::PermModelDataAnimatedMaterialAttribute_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PermModelData_t

			class CAttachment {
				MEMBER(name, modellib::CAttachment, cutl_string);
				MEMBER_ARR(influence_names, modellib::CAttachment, 3, cutl_string);
				MEMBER_ARR(v_influence_rotations, modellib::CAttachment, 3, quaternion);
				MEMBER_ARR(v_influence_offsets, modellib::CAttachment, 3, vector);
				MEMBER_ARR(influence_weights, modellib::CAttachment, 3, float);
				MEMBER_ARR(b_influence_root_transform, modellib::CAttachment, 3, bool);
				MEMBER(n_influences, modellib::CAttachment, uint8_t);
				MEMBER(b_ignore_rotation, modellib::CAttachment, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAttachment

			class CMorphData {
				MEMBER(name, modellib::CMorphData, cutl_string);
				MEMBER(morph_rect_datas, modellib::CMorphData, cutl_vector<modellib::CMorphRectData>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMorphData

			class CFootMotion {
				MEMBER(strides, modellib::CFootMotion, cutl_vector<modellib::CFootStride>);
				MEMBER(name, modellib::CFootMotion, cutl_string);
				MEMBER(b_additive, modellib::CFootMotion, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootMotion

			struct ModelBoneFlexDriver_t {
				MEMBER(bone_name, modellib::ModelBoneFlexDriver_t, cutl_string);
				MEMBER(bone_name_token, modellib::ModelBoneFlexDriver_t, uint32_t);
				MEMBER(controls, modellib::ModelBoneFlexDriver_t, cutl_vector<modellib::ModelBoneFlexDriverControl_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ModelBoneFlexDriver_t

			class AnimStateID {
				MEMBER(id, modellib::AnimStateID, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class AnimStateID

			class CHitBox {
				MEMBER(name, modellib::CHitBox, cutl_string);
				MEMBER(s_surface_property, modellib::CHitBox, cutl_string);
				MEMBER(s_bone_name, modellib::CHitBox, cutl_string);
				MEMBER(v_min_bounds, modellib::CHitBox, vector);
				MEMBER(v_max_bounds, modellib::CHitBox, vector);
				MEMBER(fl_shape_radius, modellib::CHitBox, float);
				MEMBER(n_bone_name_hash, modellib::CHitBox, uint32_t);
				MEMBER(n_group_id, modellib::CHitBox, int32_t);
				MEMBER(n_shape_type, modellib::CHitBox, uint8_t);
				MEMBER(b_translation_only, modellib::CHitBox, bool);
				MEMBER(crc, modellib::CHitBox, uint32_t);
				MEMBER(c_render_color, modellib::CHitBox, color);
				MEMBER(n_hit_box_index, modellib::CHitBox, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHitBox

			class AnimNodeID {
				MEMBER(id, modellib::AnimNodeID, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class AnimNodeID

			class CPhysSurfacePropertiesSoundNames {
				MEMBER(impact_soft, modellib::CPhysSurfacePropertiesSoundNames, cutl_string);
				MEMBER(impact_hard, modellib::CPhysSurfacePropertiesSoundNames, cutl_string);
				MEMBER(scrape_smooth, modellib::CPhysSurfacePropertiesSoundNames, cutl_string);
				MEMBER(scrape_rough, modellib::CPhysSurfacePropertiesSoundNames, cutl_string);
				MEMBER(bullet_impact, modellib::CPhysSurfacePropertiesSoundNames, cutl_string);
				MEMBER(rolling, modellib::CPhysSurfacePropertiesSoundNames, cutl_string);
				MEMBER(_break, modellib::CPhysSurfacePropertiesSoundNames, cutl_string);
				MEMBER(strain, modellib::CPhysSurfacePropertiesSoundNames, cutl_string);
				MEMBER(melee_impact, modellib::CPhysSurfacePropertiesSoundNames, cutl_string);
				MEMBER(push_off, modellib::CPhysSurfacePropertiesSoundNames, cutl_string);
				MEMBER(skid_stop, modellib::CPhysSurfacePropertiesSoundNames, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysSurfacePropertiesSoundNames

			struct PermModelInfo_t {
				MEMBER(n_flags, modellib::PermModelInfo_t, uint32_t);
				MEMBER(v_hull_min, modellib::PermModelInfo_t, vector);
				MEMBER(v_hull_max, modellib::PermModelInfo_t, vector);
				MEMBER(v_view_min, modellib::PermModelInfo_t, vector);
				MEMBER(v_view_max, modellib::PermModelInfo_t, vector);
				MEMBER(fl_mass, modellib::PermModelInfo_t, float);
				MEMBER(v_eye_position, modellib::PermModelInfo_t, vector);
				MEMBER(fl_max_eye_deflection, modellib::PermModelInfo_t, float);
				MEMBER(s_surface_property, modellib::PermModelInfo_t, cutl_string);
				MEMBER(key_value_text, modellib::PermModelInfo_t, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PermModelInfo_t

			struct VPhysXCollisionAttributes_t {
				MEMBER(collision_group, modellib::VPhysXCollisionAttributes_t, uint32_t);
				MEMBER(interact_as, modellib::VPhysXCollisionAttributes_t, cutl_vector<uint32_t>);
				MEMBER(interact_with, modellib::VPhysXCollisionAttributes_t, cutl_vector<uint32_t>);
				MEMBER(interact_exclude, modellib::VPhysXCollisionAttributes_t, cutl_vector<uint32_t>);
				MEMBER(collision_group_string, modellib::VPhysXCollisionAttributes_t, cutl_string);
				MEMBER(interact_as_strings, modellib::VPhysXCollisionAttributes_t, cutl_vector<cutl_string>);
				MEMBER(interact_with_strings, modellib::VPhysXCollisionAttributes_t, cutl_vector<cutl_string>);
				MEMBER(interact_exclude_strings, modellib::VPhysXCollisionAttributes_t, cutl_vector<cutl_string>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VPhysXCollisionAttributes_t

			class CMaterialDrawDescriptor {
				MEMBER(fl_uv_density, modellib::CMaterialDrawDescriptor, float);
				MEMBER(v_tint_color, modellib::CMaterialDrawDescriptor, vector);
				MEMBER(fl_alpha, modellib::CMaterialDrawDescriptor, float);
				MEMBER(n_num_meshlets, modellib::CMaterialDrawDescriptor, uint16_t);
				MEMBER(n_first_meshlet, modellib::CMaterialDrawDescriptor, uint32_t);
				MEMBER(n_primitive_type, modellib::CMaterialDrawDescriptor, rendersystemdx11::RenderPrimitiveType_t);
				MEMBER(n_base_vertex, modellib::CMaterialDrawDescriptor, int32_t);
				MEMBER(n_vertex_count, modellib::CMaterialDrawDescriptor, int32_t);
				MEMBER(n_start_index, modellib::CMaterialDrawDescriptor, int32_t);
				MEMBER(n_index_count, modellib::CMaterialDrawDescriptor, int32_t);
				MEMBER(index_buffer, modellib::CMaterialDrawDescriptor, modellib::CRenderBufferBinding);
				MEMBER(material, modellib::CMaterialDrawDescriptor, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMaterialDrawDescriptor

			class CMeshletDescriptor {
				MEMBER(packed_aabb, modellib::CMeshletDescriptor, mathlib_extended::PackedAABB_t);
				MEMBER(culling_data, modellib::CMeshletDescriptor, modellib::CDrawCullingData);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMeshletDescriptor

			class AnimNodeOutputID {
				MEMBER(id, modellib::AnimNodeOutputID, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class AnimNodeOutputID

			class CSceneObjectData {
				MEMBER(v_min_bounds, modellib::CSceneObjectData, vector);
				MEMBER(v_max_bounds, modellib::CSceneObjectData, vector);
				MEMBER(draw_calls, modellib::CSceneObjectData, CUtlLeanVector<modellib::CMaterialDrawDescriptor>);
				MEMBER(draw_bounds, modellib::CSceneObjectData, CUtlLeanVector<mathlib_extended::AABB_t>);
				MEMBER(meshlets, modellib::CSceneObjectData, CUtlLeanVector<modellib::CMeshletDescriptor>);
				MEMBER(v_tint_color, modellib::CSceneObjectData, vector4d);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSceneObjectData

			class CModelConfigList {
				MEMBER(b_hide_material_group_in_tools, modellib::CModelConfigList, bool);
				MEMBER(b_hide_render_color_in_tools, modellib::CModelConfigList, bool);
				MEMBER(configs, modellib::CModelConfigList, cutl_vector<modellib::CModelConfig*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelConfigList

			struct CBoneConstraintPoseSpaceMorph_Input_t {
				MEMBER(input_value, modellib::CBoneConstraintPoseSpaceMorph_Input_t, vector);
				MEMBER(output_weight_list, modellib::CBoneConstraintPoseSpaceMorph_Input_t, cutl_vector<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CBoneConstraintPoseSpaceMorph_Input_t

			struct AttachmentHandle_t {
				MEMBER(value, modellib::AttachmentHandle_t, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct AttachmentHandle_t

			struct PermModelDataAnimatedMaterialAttribute_t {
				MEMBER(attribute_name, modellib::PermModelDataAnimatedMaterialAttribute_t, cutl_string);
				MEMBER(n_num_channels, modellib::PermModelDataAnimatedMaterialAttribute_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PermModelDataAnimatedMaterialAttribute_t

		} // namespace modellib
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_modellib_H
