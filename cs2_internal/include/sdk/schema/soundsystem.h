// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_soundsystem_H
#define SDK_SCHEMA_soundsystem_H

#include <cstdint>

#include <sdk/schema/soundsystem.h>
#include <sdk/schema/resourcesystem.h>
#include <sdk/schema/soundsystem_voicecontainers.h>
namespace sdk {
	namespace schema {
		namespace soundsystem {
			class SosEditItemInfo_t;
			class CSoundEventMetaData;
			class CDspPresetModifierList;
			class CDSPMixgroupModifier;
			class CSosGroupBranchPattern;
			class CSosGroupMatchPattern;
			class CSosSoundEventGroupSchema;
			class CSosGroupActionSchema;
			class CSosGroupActionTimeLimitSchema;
			class CSosGroupActionMemberCountEnvelopeSchema;
			class CSosGroupActionLimitSchema;
			class CSosGroupActionTimeBlockLimitSchema;
			class CSosGroupActionSoundeventCountSchema;
			class CSosGroupActionSoundeventMinMaxValuesSchema;
			class CSosGroupActionSetSoundeventParameterSchema;
			class CSosGroupActionSoundeventClusterSchema;
			class CSosGroupActionSoundeventPrioritySchema;
			class CSosSoundEventGroupListSchema;
			class SelectedEditItemInfo_t;
			class CDSPPresetMixgroupModifierTable;
			class CTestBlendContainer;
			// Enumerator count: 30
			// Alignment: 
			// Size: 0x4
			enum class soundlevel_t : std::uint32_t {
				SNDLVL_NONE = 0x0,
				SNDLVL_20dB = 0x14,
				SNDLVL_25dB = 0x19,
				SNDLVL_30dB = 0x1e,
				SNDLVL_35dB = 0x23,
				SNDLVL_40dB = 0x28,
				SNDLVL_45dB = 0x2d,
				SNDLVL_50dB = 0x32,
				SNDLVL_55dB = 0x37,
				SNDLVL_IDLE = 0x3c,
				SNDLVL_60dB = 0x3c,
				SNDLVL_65dB = 0x41,
				SNDLVL_STATIC = 0x42,
				SNDLVL_70dB = 0x46,
				SNDLVL_NORM = 0x4b,
				SNDLVL_75dB = 0x4b,
				SNDLVL_80dB = 0x50,
				SNDLVL_TALKING = 0x50,
				SNDLVL_85dB = 0x55,
				SNDLVL_90dB = 0x5a,
				SNDLVL_95dB = 0x5f,
				SNDLVL_100dB = 0x64,
				SNDLVL_105dB = 0x69,
				SNDLVL_110dB = 0x6e,
				SNDLVL_120dB = 0x78,
				SNDLVL_130dB = 0x82,
				SNDLVL_GUNFIRE = 0x8c,
				SNDLVL_140dB = 0x8c,
				SNDLVL_150dB = 0x96,
				SNDLVL_180dB = 0xb4,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class SosActionSortType_t : std::uint32_t {
				// MPropertyFriendlyName "Highest"
				SOS_SORTTYPE_HIGHEST = 0x0,
				// MPropertyFriendlyName "Lowest"
				SOS_SORTTYPE_LOWEST = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class SosActionStopType_t : std::uint32_t {
				// MPropertyFriendlyName "None"
				SOS_STOPTYPE_NONE = 0x0,
				// MPropertyFriendlyName "Elapsed Time"
				SOS_STOPTYPE_TIME = 0x1,
				// MPropertyFriendlyName "Opvar Float"
				SOS_STOPTYPE_OPVAR = 0x2,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class SosEditItemType_t : std::uint32_t {
				SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0x0,
				SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 0x1,
				SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
				SOS_EDIT_ITEM_TYPE_STACK = 0x3,
				SOS_EDIT_ITEM_TYPE_OPERATOR = 0x4,
				SOS_EDIT_ITEM_TYPE_FIELD = 0x5,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x4
			enum class ActionType_t : std::uint32_t {
				// MPropertyFriendlyName "None"
				SOS_ACTION_NONE = 0x0,
				// MPropertyFriendlyName "Limiter"
				SOS_ACTION_LIMITER = 0x1,
				// MPropertyFriendlyName "Time Limiter"
				SOS_ACTION_TIME_LIMIT = 0x2,
				// MPropertyFriendlyName "Timed Block Limiter"
				SOS_ACTION_TIME_BLOCK_LIMITER = 0x3,
				// MPropertyFriendlyName "Set Sound Event Parameter"
				SOS_ACTION_SET_SOUNDEVENT_PARAM = 0x4,
				// MPropertyFriendlyName "Soundevent Cluster"
				SOS_ACTION_SOUNDEVENT_CLUSTER = 0x5,
				// MPropertyFriendlyName "Soundevent Priority"
				SOS_ACTION_SOUNDEVENT_PRIORITY = 0x6,
				// MPropertyFriendlyName "Count Envelope"
				SOS_ACTION_COUNT_ENVELOPE = 0x7,
				// MPropertyFriendlyName "Soundevent Count"
				SOS_ACTION_SOUNDEVENT_COUNT = 0x8,
				// MPropertyFriendlyName "Soundevent Min/Max Values"
				SOS_ACTION_SOUNDEVENT_MIN_MAX_VALUES = 0x9,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class SosGroupType_t : std::uint32_t {
				// MPropertyFriendlyName "Dynamic"
				SOS_GROUPTYPE_DYNAMIC = 0x0,
				// MPropertyFriendlyName "Static"
				SOS_GROUPTYPE_STATIC = 0x1,
			};
			struct SosEditItemInfo_t {
				MEMBER(item_type, soundsystem::SosEditItemInfo_t, soundsystem::SosEditItemType_t);
				MEMBER(item_name, soundsystem::SosEditItemInfo_t, cutl_string);
				MEMBER(item_type_name, soundsystem::SosEditItemInfo_t, cutl_string);
				MEMBER(item_kvstring, soundsystem::SosEditItemInfo_t, cutl_string);
				MEMBER(item_pos, soundsystem::SosEditItemInfo_t, vector2d);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SosEditItemInfo_t

			class CSoundEventMetaData {
				MEMBER(sound_event_vmix, soundsystem::CSoundEventMetaData, CStrongHandle<resourcesystem::InfoForResourceTypeCVMixListResource>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundEventMetaData

			class CDspPresetModifierList {
				MEMBER(dsp_name, soundsystem::CDspPresetModifierList, cutl_string);
				MEMBER(modifiers, soundsystem::CDspPresetModifierList, cutl_vector<soundsystem::CDSPMixgroupModifier>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDspPresetModifierList

			class CDSPMixgroupModifier {
				MEMBER(mixgroup, soundsystem::CDSPMixgroupModifier, cutl_string);
				MEMBER(fl_modifier, soundsystem::CDSPMixgroupModifier, float);
				MEMBER(fl_modifier_min, soundsystem::CDSPMixgroupModifier, float);
				MEMBER(fl_source_modifier, soundsystem::CDSPMixgroupModifier, float);
				MEMBER(fl_source_modifier_min, soundsystem::CDSPMixgroupModifier, float);
				MEMBER(fl_listener_reverb_modifier_when_source_reverb_is_active, soundsystem::CDSPMixgroupModifier, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDSPMixgroupModifier

			class CSosGroupBranchPattern {
				MEMBER(b_match_event_name, soundsystem::CSosGroupBranchPattern, bool);
				MEMBER(b_match_event_sub_string, soundsystem::CSosGroupBranchPattern, bool);
				MEMBER(b_match_ent_index, soundsystem::CSosGroupBranchPattern, bool);
				MEMBER(b_match_opvar, soundsystem::CSosGroupBranchPattern, bool);
				MEMBER(b_match_string, soundsystem::CSosGroupBranchPattern, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSosGroupBranchPattern

			class CSosGroupMatchPattern : public soundsystem::CSosGroupBranchPattern {
				MEMBER(match_sound_event_name, soundsystem::CSosGroupMatchPattern, cutl_string);
				MEMBER(match_sound_event_sub_string, soundsystem::CSosGroupMatchPattern, cutl_string);
				MEMBER(fl_ent_index, soundsystem::CSosGroupMatchPattern, float);
				MEMBER(fl_opvar, soundsystem::CSosGroupMatchPattern, float);
				MEMBER(opvar_string, soundsystem::CSosGroupMatchPattern, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSosGroupMatchPattern

			class CSosSoundEventGroupSchema {
				MEMBER(name, soundsystem::CSosSoundEventGroupSchema, cutl_string);
				MEMBER(n_type, soundsystem::CSosSoundEventGroupSchema, soundsystem::SosGroupType_t);
				MEMBER(b_is_blocking, soundsystem::CSosSoundEventGroupSchema, bool);
				MEMBER(n_block_max_count, soundsystem::CSosSoundEventGroupSchema, int32_t);
				MEMBER(b_invert_match, soundsystem::CSosSoundEventGroupSchema, bool);
				MEMBER(match_pattern, soundsystem::CSosSoundEventGroupSchema, soundsystem::CSosGroupMatchPattern);
				MEMBER(branch_pattern, soundsystem::CSosSoundEventGroupSchema, soundsystem::CSosGroupBranchPattern);
				MEMBER(fl_life_span_time, soundsystem::CSosSoundEventGroupSchema, float);
				MEMBER_ARR(v_actions, soundsystem::CSosSoundEventGroupSchema, 4, soundsystem::CSosGroupActionSchema*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSosSoundEventGroupSchema

			class CSosGroupActionSchema {
				MEMBER(name, soundsystem::CSosGroupActionSchema, cutl_string);
				MEMBER(action_type, soundsystem::CSosGroupActionSchema, soundsystem::ActionType_t);
				MEMBER(action_instance_type, soundsystem::CSosGroupActionSchema, soundsystem::ActionType_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSosGroupActionSchema

			class CSosGroupActionTimeLimitSchema : public soundsystem::CSosGroupActionSchema {
				MEMBER(fl_max_duration, soundsystem::CSosGroupActionTimeLimitSchema, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSosGroupActionTimeLimitSchema

			class CSosGroupActionMemberCountEnvelopeSchema : public soundsystem::CSosGroupActionSchema {
				MEMBER(n_base_count, soundsystem::CSosGroupActionMemberCountEnvelopeSchema, int32_t);
				MEMBER(n_target_count, soundsystem::CSosGroupActionMemberCountEnvelopeSchema, int32_t);
				MEMBER(fl_base_value, soundsystem::CSosGroupActionMemberCountEnvelopeSchema, float);
				MEMBER(fl_target_value, soundsystem::CSosGroupActionMemberCountEnvelopeSchema, float);
				MEMBER(fl_attack, soundsystem::CSosGroupActionMemberCountEnvelopeSchema, float);
				MEMBER(fl_decay, soundsystem::CSosGroupActionMemberCountEnvelopeSchema, float);
				MEMBER(result_var_name, soundsystem::CSosGroupActionMemberCountEnvelopeSchema, cutl_string);
				MEMBER(b_save_to_group, soundsystem::CSosGroupActionMemberCountEnvelopeSchema, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSosGroupActionMemberCountEnvelopeSchema

			class CSosGroupActionLimitSchema : public soundsystem::CSosGroupActionSchema {
				MEMBER(n_max_count, soundsystem::CSosGroupActionLimitSchema, int32_t);
				MEMBER(n_stop_type, soundsystem::CSosGroupActionLimitSchema, soundsystem::SosActionStopType_t);
				MEMBER(n_sort_type, soundsystem::CSosGroupActionLimitSchema, soundsystem::SosActionSortType_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSosGroupActionLimitSchema

			class CSosGroupActionTimeBlockLimitSchema : public soundsystem::CSosGroupActionSchema {
				MEMBER(n_max_count, soundsystem::CSosGroupActionTimeBlockLimitSchema, int32_t);
				MEMBER(fl_max_duration, soundsystem::CSosGroupActionTimeBlockLimitSchema, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSosGroupActionTimeBlockLimitSchema

			class CSosGroupActionSoundeventCountSchema : public soundsystem::CSosGroupActionSchema {
				MEMBER(b_exclude_stopped_sounds, soundsystem::CSosGroupActionSoundeventCountSchema, bool);
				MEMBER(str_count_key_name, soundsystem::CSosGroupActionSoundeventCountSchema, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSosGroupActionSoundeventCountSchema

			class CSosGroupActionSoundeventMinMaxValuesSchema : public soundsystem::CSosGroupActionSchema {
				MEMBER(str_query_public_field_name, soundsystem::CSosGroupActionSoundeventMinMaxValuesSchema, cutl_string);
				MEMBER(str_delay_public_field_name, soundsystem::CSosGroupActionSoundeventMinMaxValuesSchema, cutl_string);
				MEMBER(b_exclude_stopped_sounds, soundsystem::CSosGroupActionSoundeventMinMaxValuesSchema, bool);
				MEMBER(b_exclude_delayed_sounds, soundsystem::CSosGroupActionSoundeventMinMaxValuesSchema, bool);
				MEMBER(b_exclude_sounds_below_threshold, soundsystem::CSosGroupActionSoundeventMinMaxValuesSchema, bool);
				MEMBER(fl_exclude_sounds_min_threshold_value, soundsystem::CSosGroupActionSoundeventMinMaxValuesSchema, float);
				MEMBER(b_exclud_sounds_above_threshold, soundsystem::CSosGroupActionSoundeventMinMaxValuesSchema, bool);
				MEMBER(fl_exclude_sounds_max_threshold_value, soundsystem::CSosGroupActionSoundeventMinMaxValuesSchema, float);
				MEMBER(str_min_value_name, soundsystem::CSosGroupActionSoundeventMinMaxValuesSchema, cutl_string);
				MEMBER(str_max_value_name, soundsystem::CSosGroupActionSoundeventMinMaxValuesSchema, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSosGroupActionSoundeventMinMaxValuesSchema

			class CSosGroupActionSetSoundeventParameterSchema : public soundsystem::CSosGroupActionSchema {
				MEMBER(n_max_count, soundsystem::CSosGroupActionSetSoundeventParameterSchema, int32_t);
				MEMBER(fl_min_value, soundsystem::CSosGroupActionSetSoundeventParameterSchema, float);
				MEMBER(fl_max_value, soundsystem::CSosGroupActionSetSoundeventParameterSchema, float);
				MEMBER(opvar_name, soundsystem::CSosGroupActionSetSoundeventParameterSchema, cutl_string);
				MEMBER(n_sort_type, soundsystem::CSosGroupActionSetSoundeventParameterSchema, soundsystem::SosActionSortType_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSosGroupActionSetSoundeventParameterSchema

			class CSosGroupActionSoundeventClusterSchema : public soundsystem::CSosGroupActionSchema {
				MEMBER(n_min_nearby, soundsystem::CSosGroupActionSoundeventClusterSchema, int32_t);
				MEMBER(fl_cluster_epsilon, soundsystem::CSosGroupActionSoundeventClusterSchema, float);
				MEMBER(should_play_opvar, soundsystem::CSosGroupActionSoundeventClusterSchema, cutl_string);
				MEMBER(should_play_cluster_child, soundsystem::CSosGroupActionSoundeventClusterSchema, cutl_string);
				MEMBER(cluster_size_opvar, soundsystem::CSosGroupActionSoundeventClusterSchema, cutl_string);
				MEMBER(group_bounding_box_mins_opvar, soundsystem::CSosGroupActionSoundeventClusterSchema, cutl_string);
				MEMBER(group_bounding_box_maxs_opvar, soundsystem::CSosGroupActionSoundeventClusterSchema, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSosGroupActionSoundeventClusterSchema

			class CSosGroupActionSoundeventPrioritySchema : public soundsystem::CSosGroupActionSchema {
				MEMBER(priority_value, soundsystem::CSosGroupActionSoundeventPrioritySchema, cutl_string);
				MEMBER(priority_volume_scalar, soundsystem::CSosGroupActionSoundeventPrioritySchema, cutl_string);
				MEMBER(priority_contribute_but_dont_read, soundsystem::CSosGroupActionSoundeventPrioritySchema, cutl_string);
				MEMBER(b_priority_read_but_dont_contribute, soundsystem::CSosGroupActionSoundeventPrioritySchema, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSosGroupActionSoundeventPrioritySchema

			class CSosSoundEventGroupListSchema {
				MEMBER(group_list, soundsystem::CSosSoundEventGroupListSchema, cutl_vector<soundsystem::CSosSoundEventGroupSchema>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSosSoundEventGroupListSchema

			struct SelectedEditItemInfo_t {
				MEMBER(edit_items, soundsystem::SelectedEditItemInfo_t, cutl_vector<soundsystem::SosEditItemInfo_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SelectedEditItemInfo_t

			class CDSPPresetMixgroupModifierTable {
				MEMBER(table, soundsystem::CDSPPresetMixgroupModifierTable, cutl_vector<soundsystem::CDspPresetModifierList>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDSPPresetMixgroupModifierTable

			class CTestBlendContainer : public soundsystem_voicecontainers::CVoiceContainerBase {
				MEMBER(first_sound, soundsystem::CTestBlendContainer, CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase>);
				MEMBER(second_sound, soundsystem::CTestBlendContainer, CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTestBlendContainer

		} // namespace soundsystem
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_soundsystem_H
