// generated on: Mon Nov 18 16:22:34 2024
#ifndef SDK_SCHEMA_animationsystem_H
#define SDK_SCHEMA_animationsystem_H

#include <cstdint>

#include "sdk/schema/animationsystem.h"
#include <sdk/schema/resourcesystem.h>
#include <sdk/schema/modellib.h>
#include <sdk/schema/mathlib_extended.h>
#include <sdk/schema/tier2.h>
namespace sdk {
	namespace schema {
		namespace animationsystem {
			class CMoodVData;
			class CAnimData;
			class CSeqAutoLayer;
			class CSeqScaleSet;
			class CSeqCmdSeqDesc;
			class CAnimDesc;
			class CSeqIKLock;
			class CAnimKeyData;
			class CAnimSequenceParams;
			class CSeqS1SeqDesc;
			class CAnimationGroup;
			class CAnimMorphDifference;
			class CAnimUserDifference;
			class CSeqMultiFetch;
			class CAnimFrameSegment;
			class CAnimDecoder;
			class CAnimEnum;
			class CAnimBone;
			class CSequenceGroupData;
			class CAnimLocalHierarchy;
			class CAnimDesc_Flag;
			class CAnimDataChannelDesc;
			class CAnimMovement;
			class CAnimEventDefinition;
			class CCompressorGroup;
			class AnimationSnapshotBase_t;
			class AnimationSnapshot_t;
			class MoodAnimationLayer_t;
			class CSeqSynthAnimDesc;
			class CAnimBoneDifference;
			class CSeqMultiFetchFlag;
			class CSeqPoseSetting;
			class CSeqAutoLayerFlag;
			class CAnimEncodeDifference;
			class MoodAnimation_t;
			class CSeqTransition;
			class AnimationDecodeDebugDump_t;
			class AnimationDecodeDebugDumpElement_t;
			class CSeqCmdLayer;
			class CAnimActivity;
			class CAnimUser;
			class CAnimEncodedFrames;
			class CSeqBoneMaskList;
			class CAnimFrameBlockAnim;
			class CSeqSeqDescFlag;
			class CSeqPoseParamDesc;
			class HSequence;
			// Enumerator count: 18
			// Alignment: 
			// Size: 0x4
			enum class ParticleAttachment_t : std::uint32_t {
				PATTACH_INVALID = 0xffffffff,
				PATTACH_ABSORIGIN = 0x0,
				PATTACH_ABSORIGIN_FOLLOW = 0x1,
				PATTACH_CUSTOMORIGIN = 0x2,
				PATTACH_CUSTOMORIGIN_FOLLOW = 0x3,
				PATTACH_POINT = 0x4,
				PATTACH_POINT_FOLLOW = 0x5,
				PATTACH_EYES_FOLLOW = 0x6,
				PATTACH_OVERHEAD_FOLLOW = 0x7,
				PATTACH_WORLDORIGIN = 0x8,
				PATTACH_ROOTBONE_FOLLOW = 0x9,
				PATTACH_RENDERORIGIN_FOLLOW = 0xa,
				PATTACH_MAIN_VIEW = 0xb,
				PATTACH_WATERWAKE = 0xc,
				PATTACH_CENTER_FOLLOW = 0xd,
				PATTACH_CUSTOM_GAME_STATE_1 = 0xe,
				PATTACH_HEALTHBAR = 0xf,
				MAX_PATTACH_TYPES = 0x10,
			};
			// Enumerator count: 17
			// Alignment: 
			// Size: 0x4
			enum class SeqCmd_t : std::uint32_t {
				SeqCmd_Nop = 0x0,
				SeqCmd_LinearDelta = 0x1,
				SeqCmd_FetchFrameRange = 0x2,
				SeqCmd_Slerp = 0x3,
				SeqCmd_Add = 0x4,
				SeqCmd_Subtract = 0x5,
				SeqCmd_Scale = 0x6,
				SeqCmd_Copy = 0x7,
				SeqCmd_Blend = 0x8,
				SeqCmd_Worldspace = 0x9,
				SeqCmd_Sequence = 0xa,
				SeqCmd_FetchCycle = 0xb,
				SeqCmd_FetchFrame = 0xc,
				SeqCmd_IKLockInPlace = 0xd,
				SeqCmd_IKRestoreAll = 0xe,
				SeqCmd_ReverseSequence = 0xf,
				SeqCmd_Transform = 0x10,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class AnimParamNetworkSetting : std::uint32_t {
				// MPropertyFriendlyName "Auto"
				Auto = 0x0,
				// MPropertyFriendlyName "Always Network"
				AlwaysNetwork = 0x1,
				// MPropertyFriendlyName "Never Network"
				NeverNetwork = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class BoneTransformSpace_t : std::uint32_t {
				// MPropertyFriendlyName "Invalid"
				BoneTransformSpace_Invalid = 0xffffffff,
				// MPropertyFriendlyName "Parent Space"
				BoneTransformSpace_Parent = 0x0,
				// MPropertyFriendlyName "Model Space"
				BoneTransformSpace_Model = 0x1,
				// MPropertyFriendlyName "World Space"
				BoneTransformSpace_World = 0x2,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x1
			enum class AnimParamType_t : std::uint8_t {
				ANIMPARAM_UNKNOWN = 0,
				ANIMPARAM_BOOL = 1,
				ANIMPARAM_ENUM = 2,
				ANIMPARAM_INT = 3,
				ANIMPARAM_FLOAT = 4,
				ANIMPARAM_VECTOR = 5,
				ANIMPARAM_QUATERNION = 6,
				ANIMPARAM_GLOBALSYMBOL = 7,
				ANIMPARAM_COUNT = 8,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class AnimPoseControl : std::uint32_t {
				// MPropertyFriendlyName "None"
				NoPoseControl = 0x0,
				// MPropertyFriendlyName "Absolute"
				AbsolutePoseControl = 0x1,
				// MPropertyFriendlyName "Relative"
				RelativePoseControl = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class RagdollPoseControl : std::uint32_t {
				Absolute = 0x0,
				Relative = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class FootstepLandedFootSoundType_t : std::uint32_t {
				FOOTSOUND_Left = 0x0,
				FOOTSOUND_Right = 0x1,
				FOOTSOUND_UseOverrideSound = 0x2,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class AnimationProcessingType_t : std::uint32_t {
				ANIMATION_PROCESSING_SERVER_SIMULATION = 0x0,
				ANIMATION_PROCESSING_CLIENT_SIMULATION = 0x1,
				ANIMATION_PROCESSING_CLIENT_PREDICTION = 0x2,
				ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 0x3,
				ANIMATION_PROCESSING_CLIENT_RENDER = 0x4,
				ANIMATION_PROCESSING_MAX = 0x5,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class SeqPoseSetting_t : std::uint32_t {
				SEQ_POSE_SETTING_CONSTANT = 0x0,
				SEQ_POSE_SETTING_ROTATION = 0x1,
				SEQ_POSE_SETTING_POSITION = 0x2,
				SEQ_POSE_SETTING_VELOCITY = 0x3,
			};
			// Enumerator count: 13
			// Alignment: 
			// Size: 0x4
			enum class AnimParamButton_t : std::uint32_t {
				// MPropertyFriendlyName "None"
				ANIMPARAM_BUTTON_NONE = 0x0,
				// MPropertyFriendlyName "Dpad Up"
				ANIMPARAM_BUTTON_DPAD_UP = 0x1,
				// MPropertyFriendlyName "Dpad Right"
				ANIMPARAM_BUTTON_DPAD_RIGHT = 0x2,
				// MPropertyFriendlyName "Dpad Down"
				ANIMPARAM_BUTTON_DPAD_DOWN = 0x3,
				// MPropertyFriendlyName "Dpad Left"
				ANIMPARAM_BUTTON_DPAD_LEFT = 0x4,
				// MPropertyFriendlyName "A"
				ANIMPARAM_BUTTON_A = 0x5,
				// MPropertyFriendlyName "B"
				ANIMPARAM_BUTTON_B = 0x6,
				// MPropertyFriendlyName "X"
				ANIMPARAM_BUTTON_X = 0x7,
				// MPropertyFriendlyName "Y"
				ANIMPARAM_BUTTON_Y = 0x8,
				// MPropertyFriendlyName "Left Shoulder"
				ANIMPARAM_BUTTON_LEFT_SHOULDER = 0x9,
				// MPropertyFriendlyName "Right Shoulder"
				ANIMPARAM_BUTTON_RIGHT_SHOULDER = 0xa,
				// MPropertyFriendlyName "Left Trigger"
				ANIMPARAM_BUTTON_LTRIGGER = 0xb,
				// MPropertyFriendlyName "Right Trigger"
				ANIMPARAM_BUTTON_RTRIGGER = 0xc,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class AnimationSnapshotType_t : std::uint32_t {
				ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0x0,
				ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 0x1,
				ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 0x2,
				ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 0x3,
				ANIMATION_SNAPSHOT_CLIENT_RENDER = 0x4,
				ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 0x5,
				ANIMATION_SNAPSHOT_MAX = 0x6,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class MoodType_t : std::uint32_t {
				// MPropertyFriendlyName "Head"
				eMoodType_Head = 0x0,
				// MPropertyFriendlyName "Body"
				eMoodType_Body = 0x1,
			};
			class CMoodVData {
				MEMBER(s_model_name, animationsystem::CMoodVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(n_mood_type, animationsystem::CMoodVData, animationsystem::MoodType_t);
				MEMBER(animation_layers, animationsystem::CMoodVData, cutl_vector<animationsystem::MoodAnimationLayer_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMoodVData

			class CAnimData {
				MEMBER(name, animationsystem::CAnimData, CBufferString);
				MEMBER(anim_array, animationsystem::CAnimData, cutl_vector<animationsystem::CAnimDesc>);
				MEMBER(decoder_array, animationsystem::CAnimData, cutl_vector<animationsystem::CAnimDecoder>);
				MEMBER(n_max_unique_frame_index, animationsystem::CAnimData, int32_t);
				MEMBER(segment_array, animationsystem::CAnimData, cutl_vector<animationsystem::CAnimFrameSegment>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimData

			class CSeqAutoLayer {
				MEMBER(n_local_reference, animationsystem::CSeqAutoLayer, int16_t);
				MEMBER(n_local_pose, animationsystem::CSeqAutoLayer, int16_t);
				MEMBER(flags, animationsystem::CSeqAutoLayer, animationsystem::CSeqAutoLayerFlag);
				MEMBER(start, animationsystem::CSeqAutoLayer, float);
				MEMBER(peak, animationsystem::CSeqAutoLayer, float);
				MEMBER(tail, animationsystem::CSeqAutoLayer, float);
				MEMBER(end, animationsystem::CSeqAutoLayer, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSeqAutoLayer

			class CSeqScaleSet {
				MEMBER(s_name, animationsystem::CSeqScaleSet, CBufferString);
				MEMBER(b_root_offset, animationsystem::CSeqScaleSet, bool);
				MEMBER(v_root_offset, animationsystem::CSeqScaleSet, vector);
				MEMBER(n_local_bone_array, animationsystem::CSeqScaleSet, cutl_vector<int16_t>);
				MEMBER(fl_bone_scale_array, animationsystem::CSeqScaleSet, cutl_vector<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSeqScaleSet

			class CSeqCmdSeqDesc {
				MEMBER(s_name, animationsystem::CSeqCmdSeqDesc, CBufferString);
				MEMBER(flags, animationsystem::CSeqCmdSeqDesc, animationsystem::CSeqSeqDescFlag);
				MEMBER(transition, animationsystem::CSeqCmdSeqDesc, animationsystem::CSeqTransition);
				MEMBER(n_frame_range_sequence, animationsystem::CSeqCmdSeqDesc, int16_t);
				MEMBER(n_frame_count, animationsystem::CSeqCmdSeqDesc, int16_t);
				MEMBER(fl_fps, animationsystem::CSeqCmdSeqDesc, float);
				MEMBER(n_sub_cycles, animationsystem::CSeqCmdSeqDesc, int16_t);
				MEMBER(num_local_results, animationsystem::CSeqCmdSeqDesc, int16_t);
				MEMBER(cmd_layer_array, animationsystem::CSeqCmdSeqDesc, cutl_vector<animationsystem::CSeqCmdLayer>);
				MEMBER(event_array, animationsystem::CSeqCmdSeqDesc, cutl_vector<animationsystem::CAnimEventDefinition>);
				MEMBER(activity_array, animationsystem::CSeqCmdSeqDesc, cutl_vector<animationsystem::CAnimActivity>);
				MEMBER(pose_setting_array, animationsystem::CSeqCmdSeqDesc, cutl_vector<animationsystem::CSeqPoseSetting>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSeqCmdSeqDesc

			class CAnimDesc {
				MEMBER(name, animationsystem::CAnimDesc, CBufferString);
				MEMBER(flags, animationsystem::CAnimDesc, animationsystem::CAnimDesc_Flag);
				MEMBER(fps, animationsystem::CAnimDesc, float);
				MEMBER(data, animationsystem::CAnimDesc, animationsystem::CAnimEncodedFrames);
				MEMBER(movement_array, animationsystem::CAnimDesc, cutl_vector<animationsystem::CAnimMovement>);
				MEMBER(x_initial_offset, animationsystem::CAnimDesc, CTransform);
				MEMBER(event_array, animationsystem::CAnimDesc, cutl_vector<animationsystem::CAnimEventDefinition>);
				MEMBER(activity_array, animationsystem::CAnimDesc, cutl_vector<animationsystem::CAnimActivity>);
				MEMBER(hierarchy_array, animationsystem::CAnimDesc, cutl_vector<animationsystem::CAnimLocalHierarchy>);
				MEMBER(framestalltime, animationsystem::CAnimDesc, float);
				MEMBER(vec_root_min, animationsystem::CAnimDesc, vector);
				MEMBER(vec_root_max, animationsystem::CAnimDesc, vector);
				MEMBER(vec_bone_world_min, animationsystem::CAnimDesc, cutl_vector<vector>);
				MEMBER(vec_bone_world_max, animationsystem::CAnimDesc, cutl_vector<vector>);
				MEMBER(sequence_params, animationsystem::CAnimDesc, animationsystem::CAnimSequenceParams);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimDesc

			class CSeqIKLock {
				MEMBER(fl_pos_weight, animationsystem::CSeqIKLock, float);
				MEMBER(fl_angle_weight, animationsystem::CSeqIKLock, float);
				MEMBER(n_local_bone, animationsystem::CSeqIKLock, int16_t);
				MEMBER(b_bones_oriented_along_positive_x, animationsystem::CSeqIKLock, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSeqIKLock

			class CAnimKeyData {
				MEMBER(name, animationsystem::CAnimKeyData, CBufferString);
				MEMBER(bone_array, animationsystem::CAnimKeyData, cutl_vector<animationsystem::CAnimBone>);
				MEMBER(user_array, animationsystem::CAnimKeyData, cutl_vector<animationsystem::CAnimUser>);
				MEMBER(morph_array, animationsystem::CAnimKeyData, cutl_vector<CBufferString>);
				MEMBER(n_channel_elements, animationsystem::CAnimKeyData, int32_t);
				MEMBER(data_channel_array, animationsystem::CAnimKeyData, cutl_vector<animationsystem::CAnimDataChannelDesc>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimKeyData

			class CAnimSequenceParams {
				MEMBER(fl_fade_in_time, animationsystem::CAnimSequenceParams, float);
				MEMBER(fl_fade_out_time, animationsystem::CAnimSequenceParams, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimSequenceParams

			class CSeqS1SeqDesc {
				MEMBER(s_name, animationsystem::CSeqS1SeqDesc, CBufferString);
				MEMBER(flags, animationsystem::CSeqS1SeqDesc, animationsystem::CSeqSeqDescFlag);
				MEMBER(fetch, animationsystem::CSeqS1SeqDesc, animationsystem::CSeqMultiFetch);
				MEMBER(n_local_weightlist, animationsystem::CSeqS1SeqDesc, int32_t);
				MEMBER(auto_layer_array, animationsystem::CSeqS1SeqDesc, cutl_vector<animationsystem::CSeqAutoLayer>);
				MEMBER(iklock_array, animationsystem::CSeqS1SeqDesc, cutl_vector<animationsystem::CSeqIKLock>);
				MEMBER(transition, animationsystem::CSeqS1SeqDesc, animationsystem::CSeqTransition);
				MEMBER(sequence_keys, animationsystem::CSeqS1SeqDesc, KeyValues3);
				MEMBER(legacy_key_value_text, animationsystem::CSeqS1SeqDesc, CBufferString);
				MEMBER(activity_array, animationsystem::CSeqS1SeqDesc, cutl_vector<animationsystem::CAnimActivity>);
				MEMBER(foot_motion, animationsystem::CSeqS1SeqDesc, cutl_vector<modellib::CFootMotion>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSeqS1SeqDesc

			class CAnimationGroup {
				MEMBER(n_flags, animationsystem::CAnimationGroup, uint32_t);
				MEMBER(name, animationsystem::CAnimationGroup, CBufferString);
				MEMBER(local_hanim_array__handle, animationsystem::CAnimationGroup, cutl_vector<CStrongHandle<resourcesystem::InfoForResourceTypeCAnimData>>);
				MEMBER(included_group_array__handle, animationsystem::CAnimationGroup, cutl_vector<CStrongHandle<resourcesystem::InfoForResourceTypeCAnimationGroup>>);
				MEMBER(direct_hseq_group__handle, animationsystem::CAnimationGroup, CStrongHandle<resourcesystem::InfoForResourceTypeCSequenceGroupData>);
				MEMBER(decode_key, animationsystem::CAnimationGroup, animationsystem::CAnimKeyData);
				MEMBER(sz_scripts, animationsystem::CAnimationGroup, cutl_vector<CBufferString>);
				MEMBER(additional_ext_refs, animationsystem::CAnimationGroup, cutl_vector<CStrongHandleVoid>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimationGroup

			class CAnimMorphDifference {
				MEMBER(name, animationsystem::CAnimMorphDifference, CBufferString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimMorphDifference

			class CAnimUserDifference {
				MEMBER(name, animationsystem::CAnimUserDifference, CBufferString);
				MEMBER(n_type, animationsystem::CAnimUserDifference, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimUserDifference

			class CSeqMultiFetch {
				MEMBER(flags, animationsystem::CSeqMultiFetch, animationsystem::CSeqMultiFetchFlag);
				MEMBER(local_reference_array, animationsystem::CSeqMultiFetch, cutl_vector<int16_t>);
				MEMBER_ARR(n_group_size, animationsystem::CSeqMultiFetch, 2, int32_t);
				MEMBER_ARR(n_local_pose, animationsystem::CSeqMultiFetch, 2, int32_t);
				MEMBER(pose_key_array0, animationsystem::CSeqMultiFetch, cutl_vector<float>);
				MEMBER(pose_key_array1, animationsystem::CSeqMultiFetch, cutl_vector<float>);
				MEMBER(n_local_cycle_pose_parameter, animationsystem::CSeqMultiFetch, int32_t);
				MEMBER(b_calculate_pose_parameters, animationsystem::CSeqMultiFetch, bool);
				MEMBER(b_fixed_blend_weight, animationsystem::CSeqMultiFetch, bool);
				MEMBER_ARR(fl_fixed_blend_weight_vals, animationsystem::CSeqMultiFetch, 2, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSeqMultiFetch

			class CAnimFrameSegment {
				MEMBER(n_unique_frame_index, animationsystem::CAnimFrameSegment, int32_t);
				MEMBER(n_local_element_masks, animationsystem::CAnimFrameSegment, uint32_t);
				MEMBER(n_local_channel, animationsystem::CAnimFrameSegment, int32_t);
				MEMBER(container, animationsystem::CAnimFrameSegment, CUtlBinaryBlock);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimFrameSegment

			class CAnimDecoder {
				MEMBER(sz_name, animationsystem::CAnimDecoder, CBufferString);
				MEMBER(n_version, animationsystem::CAnimDecoder, int32_t);
				MEMBER(n_type, animationsystem::CAnimDecoder, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimDecoder

			class CAnimEnum {
				MEMBER(value, animationsystem::CAnimEnum, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimEnum

			class CAnimBone {
				MEMBER(name, animationsystem::CAnimBone, CBufferString);
				MEMBER(parent, animationsystem::CAnimBone, int32_t);
				MEMBER(pos, animationsystem::CAnimBone, vector);
				MEMBER(quat, animationsystem::CAnimBone, quaternion_storage);
				MEMBER(scale, animationsystem::CAnimBone, float);
				MEMBER(q_alignment, animationsystem::CAnimBone, quaternion_storage);
				MEMBER(flags, animationsystem::CAnimBone, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimBone

			class CSequenceGroupData {
				MEMBER(s_name, animationsystem::CSequenceGroupData, CBufferString);
				MEMBER(n_flags, animationsystem::CSequenceGroupData, uint32_t);
				MEMBER(local_sequence_name_array, animationsystem::CSequenceGroupData, cutl_vector<CBufferString>);
				MEMBER(local_s1_seq_desc_array, animationsystem::CSequenceGroupData, cutl_vector<animationsystem::CSeqS1SeqDesc>);
				MEMBER(local_multi_seq_desc_array, animationsystem::CSequenceGroupData, cutl_vector<animationsystem::CSeqS1SeqDesc>);
				MEMBER(local_synth_anim_desc_array, animationsystem::CSequenceGroupData, cutl_vector<animationsystem::CSeqSynthAnimDesc>);
				MEMBER(local_cmd_seq_desc_array, animationsystem::CSequenceGroupData, cutl_vector<animationsystem::CSeqCmdSeqDesc>);
				MEMBER(local_bone_mask_array, animationsystem::CSequenceGroupData, cutl_vector<animationsystem::CSeqBoneMaskList>);
				MEMBER(local_scale_set_array, animationsystem::CSequenceGroupData, cutl_vector<animationsystem::CSeqScaleSet>);
				MEMBER(local_bone_name_array, animationsystem::CSequenceGroupData, cutl_vector<CBufferString>);
				MEMBER(local_node_name, animationsystem::CSequenceGroupData, CBufferString);
				MEMBER(local_pose_param_array, animationsystem::CSequenceGroupData, cutl_vector<animationsystem::CSeqPoseParamDesc>);
				MEMBER(key_values, animationsystem::CSequenceGroupData, KeyValues3);
				MEMBER(local_ikautoplay_lock_array, animationsystem::CSequenceGroupData, cutl_vector<animationsystem::CSeqIKLock>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSequenceGroupData

			class CAnimLocalHierarchy {
				MEMBER(s_bone, animationsystem::CAnimLocalHierarchy, CBufferString);
				MEMBER(s_new_parent, animationsystem::CAnimLocalHierarchy, CBufferString);
				MEMBER(n_start_frame, animationsystem::CAnimLocalHierarchy, int32_t);
				MEMBER(n_peak_frame, animationsystem::CAnimLocalHierarchy, int32_t);
				MEMBER(n_tail_frame, animationsystem::CAnimLocalHierarchy, int32_t);
				MEMBER(n_end_frame, animationsystem::CAnimLocalHierarchy, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimLocalHierarchy

			class CAnimDesc_Flag {
				MEMBER(b_looping, animationsystem::CAnimDesc_Flag, bool);
				MEMBER(b_all_zeros, animationsystem::CAnimDesc_Flag, bool);
				MEMBER(b_hidden, animationsystem::CAnimDesc_Flag, bool);
				MEMBER(b_delta, animationsystem::CAnimDesc_Flag, bool);
				MEMBER(b_legacy_worldspace, animationsystem::CAnimDesc_Flag, bool);
				MEMBER(b_model_doc, animationsystem::CAnimDesc_Flag, bool);
				MEMBER(b_implicit_seq_ignore_delta, animationsystem::CAnimDesc_Flag, bool);
				MEMBER(b_anim_graph_additive, animationsystem::CAnimDesc_Flag, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimDesc_Flag

			class CAnimDataChannelDesc {
				MEMBER(sz_channel_class, animationsystem::CAnimDataChannelDesc, CBufferString);
				MEMBER(sz_variable_name, animationsystem::CAnimDataChannelDesc, CBufferString);
				MEMBER(n_flags, animationsystem::CAnimDataChannelDesc, int32_t);
				MEMBER(n_type, animationsystem::CAnimDataChannelDesc, int32_t);
				MEMBER(sz_grouping, animationsystem::CAnimDataChannelDesc, CBufferString);
				MEMBER(sz_description, animationsystem::CAnimDataChannelDesc, CBufferString);
				MEMBER(sz_element_name_array, animationsystem::CAnimDataChannelDesc, cutl_vector<CBufferString>);
				MEMBER(n_element_index_array, animationsystem::CAnimDataChannelDesc, cutl_vector<int32_t>);
				MEMBER(n_element_mask_array, animationsystem::CAnimDataChannelDesc, cutl_vector<uint32_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimDataChannelDesc

			class CAnimMovement {
				MEMBER(endframe, animationsystem::CAnimMovement, int32_t);
				MEMBER(motionflags, animationsystem::CAnimMovement, int32_t);
				MEMBER(v0, animationsystem::CAnimMovement, float);
				MEMBER(v1, animationsystem::CAnimMovement, float);
				MEMBER(angle, animationsystem::CAnimMovement, float);
				MEMBER(vector, animationsystem::CAnimMovement, vector);
				MEMBER(position, animationsystem::CAnimMovement, vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimMovement

			class CAnimEventDefinition {
				MEMBER(n_frame, animationsystem::CAnimEventDefinition, int32_t);
				MEMBER(n_end_frame, animationsystem::CAnimEventDefinition, int32_t);
				MEMBER(fl_cycle, animationsystem::CAnimEventDefinition, float);
				MEMBER(fl_duration, animationsystem::CAnimEventDefinition, float);
				MEMBER(event_data, animationsystem::CAnimEventDefinition, KeyValues3);
				MEMBER(s_legacy_options, animationsystem::CAnimEventDefinition, CBufferString);
				MEMBER(s_event_name, animationsystem::CAnimEventDefinition, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimEventDefinition

			class CCompressorGroup {
				MEMBER(n_total_element_count, animationsystem::CCompressorGroup, int32_t);
				MEMBER(sz_channel_class, animationsystem::CCompressorGroup, cutl_vector<char*>);
				MEMBER(sz_variable_name, animationsystem::CCompressorGroup, cutl_vector<char*>);
				MEMBER(n_type, animationsystem::CCompressorGroup, cutl_vector<mathlib_extended::fieldtype_t>);
				MEMBER(n_flags, animationsystem::CCompressorGroup, cutl_vector<int32_t>);
				MEMBER(sz_grouping, animationsystem::CCompressorGroup, cutl_vector<cutl_string>);
				MEMBER(n_compressor_index, animationsystem::CCompressorGroup, cutl_vector<int32_t>);
				MEMBER(sz_element_names, animationsystem::CCompressorGroup, cutl_vector<cutl_vector<char*>>);
				MEMBER(n_element_unique_id, animationsystem::CCompressorGroup, cutl_vector<cutl_vector<int32_t>>);
				MEMBER(n_element_mask, animationsystem::CCompressorGroup, cutl_vector<uint32_t>);
				MEMBER(vector_compressor, animationsystem::CCompressorGroup, cutl_vector<CCompressor<vector>*>);
				MEMBER(quaternion_compressor, animationsystem::CCompressorGroup, cutl_vector<CCompressor<quaternion_storage>*>);
				MEMBER(int_compressor, animationsystem::CCompressorGroup, cutl_vector<CCompressor<int32_t>*>);
				MEMBER(bool_compressor, animationsystem::CCompressorGroup, cutl_vector<CCompressor<bool>*>);
				MEMBER(color_compressor, animationsystem::CCompressorGroup, cutl_vector<CCompressor<color>*>);
				MEMBER(vector2_dcompressor, animationsystem::CCompressorGroup, cutl_vector<CCompressor<vector2d>*>);
				MEMBER(vector4_dcompressor, animationsystem::CCompressorGroup, cutl_vector<CCompressor<vector4d>*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCompressorGroup

			struct AnimationSnapshotBase_t {
				MEMBER(fl_real_time, animationsystem::AnimationSnapshotBase_t, float);
				MEMBER(root_to_world, animationsystem::AnimationSnapshotBase_t, matrix3x4a_t);
				MEMBER(b_bones_in_world_space, animationsystem::AnimationSnapshotBase_t, bool);
				MEMBER(bone_setup_mask, animationsystem::AnimationSnapshotBase_t, cutl_vector<uint32_t>);
				MEMBER(bone_transforms, animationsystem::AnimationSnapshotBase_t, cutl_vector<matrix3x4a_t>);
				MEMBER(flex_controllers, animationsystem::AnimationSnapshotBase_t, cutl_vector<float>);
				MEMBER(snapshot_type, animationsystem::AnimationSnapshotBase_t, animationsystem::AnimationSnapshotType_t);
				MEMBER(b_has_decode_dump, animationsystem::AnimationSnapshotBase_t, bool);
				MEMBER(decode_dump, animationsystem::AnimationSnapshotBase_t, animationsystem::AnimationDecodeDebugDumpElement_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct AnimationSnapshotBase_t

			struct AnimationSnapshot_t : public animationsystem::AnimationSnapshotBase_t {
				MEMBER(n_ent_index, animationsystem::AnimationSnapshot_t, int32_t);
				MEMBER(model_name, animationsystem::AnimationSnapshot_t, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct AnimationSnapshot_t

			struct MoodAnimationLayer_t {
				MEMBER(s_name, animationsystem::MoodAnimationLayer_t, cutl_string);
				MEMBER(b_active_listening, animationsystem::MoodAnimationLayer_t, bool);
				MEMBER(b_active_talking, animationsystem::MoodAnimationLayer_t, bool);
				MEMBER(layer_animations, animationsystem::MoodAnimationLayer_t, cutl_vector<animationsystem::MoodAnimation_t>);
				MEMBER(fl_intensity, animationsystem::MoodAnimationLayer_t, tier2::CRangeFloat);
				MEMBER(fl_duration_scale, animationsystem::MoodAnimationLayer_t, tier2::CRangeFloat);
				MEMBER(b_scale_with_ints, animationsystem::MoodAnimationLayer_t, bool);
				MEMBER(fl_next_start, animationsystem::MoodAnimationLayer_t, tier2::CRangeFloat);
				MEMBER(fl_start_offset, animationsystem::MoodAnimationLayer_t, tier2::CRangeFloat);
				MEMBER(fl_end_offset, animationsystem::MoodAnimationLayer_t, tier2::CRangeFloat);
				MEMBER(fl_fade_in, animationsystem::MoodAnimationLayer_t, float);
				MEMBER(fl_fade_out, animationsystem::MoodAnimationLayer_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct MoodAnimationLayer_t

			class CSeqSynthAnimDesc {
				MEMBER(s_name, animationsystem::CSeqSynthAnimDesc, CBufferString);
				MEMBER(flags, animationsystem::CSeqSynthAnimDesc, animationsystem::CSeqSeqDescFlag);
				MEMBER(transition, animationsystem::CSeqSynthAnimDesc, animationsystem::CSeqTransition);
				MEMBER(n_local_base_reference, animationsystem::CSeqSynthAnimDesc, int16_t);
				MEMBER(n_local_bone_mask, animationsystem::CSeqSynthAnimDesc, int16_t);
				MEMBER(activity_array, animationsystem::CSeqSynthAnimDesc, cutl_vector<animationsystem::CAnimActivity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSeqSynthAnimDesc

			class CAnimBoneDifference {
				MEMBER(name, animationsystem::CAnimBoneDifference, CBufferString);
				MEMBER(parent, animationsystem::CAnimBoneDifference, CBufferString);
				MEMBER(pos_error, animationsystem::CAnimBoneDifference, vector);
				MEMBER(b_has_rotation, animationsystem::CAnimBoneDifference, bool);
				MEMBER(b_has_movement, animationsystem::CAnimBoneDifference, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimBoneDifference

			class CSeqMultiFetchFlag {
				MEMBER(b_realtime, animationsystem::CSeqMultiFetchFlag, bool);
				MEMBER(b_cylepose, animationsystem::CSeqMultiFetchFlag, bool);
				MEMBER(b0_d, animationsystem::CSeqMultiFetchFlag, bool);
				MEMBER(b1_d, animationsystem::CSeqMultiFetchFlag, bool);
				MEMBER(b2_d, animationsystem::CSeqMultiFetchFlag, bool);
				MEMBER(b2_d__tri, animationsystem::CSeqMultiFetchFlag, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSeqMultiFetchFlag

			class CSeqPoseSetting {
				MEMBER(s_pose_parameter, animationsystem::CSeqPoseSetting, CBufferString);
				MEMBER(s_attachment, animationsystem::CSeqPoseSetting, CBufferString);
				MEMBER(s_reference_sequence, animationsystem::CSeqPoseSetting, CBufferString);
				MEMBER(fl_value, animationsystem::CSeqPoseSetting, float);
				MEMBER(b_x, animationsystem::CSeqPoseSetting, bool);
				MEMBER(b_y, animationsystem::CSeqPoseSetting, bool);
				MEMBER(b_z, animationsystem::CSeqPoseSetting, bool);
				MEMBER(e_type, animationsystem::CSeqPoseSetting, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSeqPoseSetting

			class CSeqAutoLayerFlag {
				MEMBER(b_post, animationsystem::CSeqAutoLayerFlag, bool);
				MEMBER(b_spline, animationsystem::CSeqAutoLayerFlag, bool);
				MEMBER(b_xfade, animationsystem::CSeqAutoLayerFlag, bool);
				MEMBER(b_no_blend, animationsystem::CSeqAutoLayerFlag, bool);
				MEMBER(b_local, animationsystem::CSeqAutoLayerFlag, bool);
				MEMBER(b_pose, animationsystem::CSeqAutoLayerFlag, bool);
				MEMBER(b_fetch_frame, animationsystem::CSeqAutoLayerFlag, bool);
				MEMBER(b_subtract, animationsystem::CSeqAutoLayerFlag, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSeqAutoLayerFlag

			class CAnimEncodeDifference {
				MEMBER(bone_array, animationsystem::CAnimEncodeDifference, cutl_vector<animationsystem::CAnimBoneDifference>);
				MEMBER(morph_array, animationsystem::CAnimEncodeDifference, cutl_vector<animationsystem::CAnimMorphDifference>);
				MEMBER(user_array, animationsystem::CAnimEncodeDifference, cutl_vector<animationsystem::CAnimUserDifference>);
				MEMBER(b_has_rotation_bit_array, animationsystem::CAnimEncodeDifference, cutl_vector<uint8_t>);
				MEMBER(b_has_movement_bit_array, animationsystem::CAnimEncodeDifference, cutl_vector<uint8_t>);
				MEMBER(b_has_morph_bit_array, animationsystem::CAnimEncodeDifference, cutl_vector<uint8_t>);
				MEMBER(b_has_user_bit_array, animationsystem::CAnimEncodeDifference, cutl_vector<uint8_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimEncodeDifference

			struct MoodAnimation_t {
				MEMBER(s_name, animationsystem::MoodAnimation_t, cutl_string);
				MEMBER(fl_weight, animationsystem::MoodAnimation_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct MoodAnimation_t

			class CSeqTransition {
				MEMBER(fl_fade_in_time, animationsystem::CSeqTransition, float);
				MEMBER(fl_fade_out_time, animationsystem::CSeqTransition, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSeqTransition

			struct AnimationDecodeDebugDump_t {
				MEMBER(processing_type, animationsystem::AnimationDecodeDebugDump_t, animationsystem::AnimationProcessingType_t);
				MEMBER(elems, animationsystem::AnimationDecodeDebugDump_t, cutl_vector<animationsystem::AnimationDecodeDebugDumpElement_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct AnimationDecodeDebugDump_t

			struct AnimationDecodeDebugDumpElement_t {
				MEMBER(n_entity_index, animationsystem::AnimationDecodeDebugDumpElement_t, int32_t);
				MEMBER(model_name, animationsystem::AnimationDecodeDebugDumpElement_t, cutl_string);
				MEMBER(pose_params, animationsystem::AnimationDecodeDebugDumpElement_t, cutl_vector<cutl_string>);
				MEMBER(decode_ops, animationsystem::AnimationDecodeDebugDumpElement_t, cutl_vector<cutl_string>);
				MEMBER(internal_ops, animationsystem::AnimationDecodeDebugDumpElement_t, cutl_vector<cutl_string>);
				MEMBER(decoded_anims, animationsystem::AnimationDecodeDebugDumpElement_t, cutl_vector<cutl_string>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct AnimationDecodeDebugDumpElement_t

			class CSeqCmdLayer {
				MEMBER(cmd, animationsystem::CSeqCmdLayer, int16_t);
				MEMBER(n_local_reference, animationsystem::CSeqCmdLayer, int16_t);
				MEMBER(n_local_bonemask, animationsystem::CSeqCmdLayer, int16_t);
				MEMBER(n_dst_result, animationsystem::CSeqCmdLayer, int16_t);
				MEMBER(n_src_result, animationsystem::CSeqCmdLayer, int16_t);
				MEMBER(b_spline, animationsystem::CSeqCmdLayer, bool);
				MEMBER(fl_var1, animationsystem::CSeqCmdLayer, float);
				MEMBER(fl_var2, animationsystem::CSeqCmdLayer, float);
				MEMBER(n_line_number, animationsystem::CSeqCmdLayer, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSeqCmdLayer

			class CAnimActivity {
				MEMBER(name, animationsystem::CAnimActivity, CBufferString);
				MEMBER(n_activity, animationsystem::CAnimActivity, int32_t);
				MEMBER(n_flags, animationsystem::CAnimActivity, int32_t);
				MEMBER(n_weight, animationsystem::CAnimActivity, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimActivity

			class CAnimUser {
				MEMBER(name, animationsystem::CAnimUser, CBufferString);
				MEMBER(n_type, animationsystem::CAnimUser, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimUser

			class CAnimEncodedFrames {
				MEMBER(file_name, animationsystem::CAnimEncodedFrames, CBufferString);
				MEMBER(n_frames, animationsystem::CAnimEncodedFrames, int32_t);
				MEMBER(n_frames_per_block, animationsystem::CAnimEncodedFrames, int32_t);
				MEMBER(frameblock_array, animationsystem::CAnimEncodedFrames, cutl_vector<animationsystem::CAnimFrameBlockAnim>);
				MEMBER(usage_differences, animationsystem::CAnimEncodedFrames, animationsystem::CAnimEncodeDifference);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimEncodedFrames

			class CSeqBoneMaskList {
				MEMBER(s_name, animationsystem::CSeqBoneMaskList, CBufferString);
				MEMBER(n_local_bone_array, animationsystem::CSeqBoneMaskList, cutl_vector<int16_t>);
				MEMBER(fl_bone_weight_array, animationsystem::CSeqBoneMaskList, cutl_vector<float>);
				MEMBER(fl_default_morph_ctrl_weight, animationsystem::CSeqBoneMaskList, float);
				MEMBER(morph_ctrl_weight_array, animationsystem::CSeqBoneMaskList, cutl_vector<CUtlPair<CBufferString,float>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSeqBoneMaskList

			class CAnimFrameBlockAnim {
				MEMBER(n_start_frame, animationsystem::CAnimFrameBlockAnim, int32_t);
				MEMBER(n_end_frame, animationsystem::CAnimFrameBlockAnim, int32_t);
				MEMBER(segment_index_array, animationsystem::CAnimFrameBlockAnim, cutl_vector<int32_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimFrameBlockAnim

			class CSeqSeqDescFlag {
				MEMBER(b_looping, animationsystem::CSeqSeqDescFlag, bool);
				MEMBER(b_snap, animationsystem::CSeqSeqDescFlag, bool);
				MEMBER(b_autoplay, animationsystem::CSeqSeqDescFlag, bool);
				MEMBER(b_post, animationsystem::CSeqSeqDescFlag, bool);
				MEMBER(b_hidden, animationsystem::CSeqSeqDescFlag, bool);
				MEMBER(b_multi, animationsystem::CSeqSeqDescFlag, bool);
				MEMBER(b_legacy_delta, animationsystem::CSeqSeqDescFlag, bool);
				MEMBER(b_legacy_worldspace, animationsystem::CSeqSeqDescFlag, bool);
				MEMBER(b_legacy_cyclepose, animationsystem::CSeqSeqDescFlag, bool);
				MEMBER(b_legacy_realtime, animationsystem::CSeqSeqDescFlag, bool);
				MEMBER(b_model_doc, animationsystem::CSeqSeqDescFlag, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSeqSeqDescFlag

			class CSeqPoseParamDesc {
				MEMBER(s_name, animationsystem::CSeqPoseParamDesc, CBufferString);
				MEMBER(fl_start, animationsystem::CSeqPoseParamDesc, float);
				MEMBER(fl_end, animationsystem::CSeqPoseParamDesc, float);
				MEMBER(fl_loop, animationsystem::CSeqPoseParamDesc, float);
				MEMBER(b_looping, animationsystem::CSeqPoseParamDesc, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSeqPoseParamDesc

			class HSequence {
				MEMBER(value, animationsystem::HSequence, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class HSequence

		} // namespace animationsystem
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_animationsystem_H
