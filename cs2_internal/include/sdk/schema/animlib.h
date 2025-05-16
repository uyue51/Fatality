// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_animlib_H
#define SDK_SCHEMA_animlib_H

#include <cstdint>

#include <sdk/schema/animlib.h>
#include <sdk/schema/resourcesystem.h>
namespace sdk {
	namespace schema {
		namespace animlib {
			class CNmTarget;
			class CNmSyncTrack_Event_t;
			class CNmParameterizedBlendNode_BlendRange_t;
			class CNmStateEventConditionNode_Condition_t;
			class NmSyncTrackTimeRange_t;
			class NmSyncTrackTime_t;
			class CNmGraphNode_CDefinition;
			class CNmValueNode_CDefinition;
			class CNmTargetValueNode_CDefinition;
			class CNmControlParameterTargetNode_CDefinition;
			class CNmCachedTargetNode_CDefinition;
			class CNmConstTargetNode_CDefinition;
			class CNmVirtualParameterTargetNode_CDefinition;
			class CNmTargetOffsetNode_CDefinition;
			class CNmIDValueNode_CDefinition;
			class CNmControlParameterIDNode_CDefinition;
			class CNmVirtualParameterIDNode_CDefinition;
			class CNmFootstepEventIDNode_CDefinition;
			class CNmCurrentSyncEventIDNode_CDefinition;
			class CNmCachedIDNode_CDefinition;
			class CNmConstIDNode_CDefinition;
			class CNmIDEventNode_CDefinition;
			class CNmBoolValueNode_CDefinition;
			class CNmVirtualParameterBoolNode_CDefinition;
			class CNmIDComparisonNode_CDefinition;
			class CNmFloatComparisonNode_CDefinition;
			class CNmFloatRangeComparisonNode_CDefinition;
			class CNmFootEventConditionNode_CDefinition;
			class CNmAndNode_CDefinition;
			class CNmNotNode_CDefinition;
			class CNmConstBoolNode_CDefinition;
			class CNmIsTargetSetNode_CDefinition;
			class CNmControlParameterBoolNode_CDefinition;
			class CNmTimeConditionNode_CDefinition;
			class CNmStateEventConditionNode_CDefinition;
			class CNmStateCompletedConditionNode_CDefinition;
			class CNmSyncEventIndexConditionNode_CDefinition;
			class CNmCachedBoolNode_CDefinition;
			class CNmIDEventPercentageThroughNode_CDefinition;
			class CNmIDEventConditionNode_CDefinition;
			class CNmOrNode_CDefinition;
			class CNmTransitionEventConditionNode_CDefinition;
			class CNmBoneMaskValueNode_CDefinition;
			class CNmBoneMaskNode_CDefinition;
			class CNmFixedWeightBoneMaskNode_CDefinition;
			class CNmBoneMaskSelectorNode_CDefinition;
			class CNmVirtualParameterBoneMaskNode_CDefinition;
			class CNmBoneMaskBlendNode_CDefinition;
			class CNmFloatValueNode_CDefinition;
			class CNmCurrentSyncEventPercentageThroughNode_CDefinition;
			class CNmConstFloatNode_CDefinition;
			class CNmFloatRemapNode_CDefinition;
			class CNmFloatClampNode_CDefinition;
			class CNmFootstepEventPercentageThroughNode_CDefinition;
			class CNmFloatCurveNode_CDefinition;
			class CNmFloatAbsNode_CDefinition;
			class CNmIDToFloatNode_CDefinition;
			class CNmFloatSelectorNode_CDefinition;
			class CNmControlParameterFloatNode_CDefinition;
			class CNmFloatMathNode_CDefinition;
			class CNmFloatSwitchNode_CDefinition;
			class CNmCurrentSyncEventIndexNode_CDefinition;
			class CNmFloatAngleMathNode_CDefinition;
			class CNmVirtualParameterFloatNode_CDefinition;
			class CNmFloatEaseNode_CDefinition;
			class CNmVectorInfoNode_CDefinition;
			class CNmCachedFloatNode_CDefinition;
			class CNmTargetInfoNode_CDefinition;
			class CNmVectorValueNode_CDefinition;
			class CNmVectorNegateNode_CDefinition;
			class CNmTargetPointNode_CDefinition;
			class CNmConstVectorNode_CDefinition;
			class CNmVirtualParameterVectorNode_CDefinition;
			class CNmVectorCreateNode_CDefinition;
			class CNmControlParameterVectorNode_CDefinition;
			class CNmCachedVectorNode_CDefinition;
			class CNmPoseNode_CDefinition;
			class CNmAnimationPoseNode_CDefinition;
			class CNmChildGraphNode_CDefinition;
			class CNmZeroPoseNode_CDefinition;
			class CNmStateMachineNode_CDefinition;
			class CNmOrientationWarpNode_CDefinition;
			class CNmLayerBlendNode_CDefinition;
			class CNmTargetWarpNode_CDefinition;
			class CNmParameterizedClipSelectorNode_CDefinition;
			class CNmBlend2DNode_CDefinition;
			class CNmParameterizedSelectorNode_CDefinition;
			class CNmSelectorNode_CDefinition;
			class CNmTransitionNode_CDefinition;
			class CNmExternalGraphNode_CDefinition;
			class CNmClipSelectorNode_CDefinition;
			class CNmStateNode_CDefinition;
			class CNmReferencePoseNode_CDefinition;
			class CNmPassthroughNode_CDefinition;
			class CNmRootMotionOverrideNode_CDefinition;
			class CNmSpeedScaleBaseNode_CDefinition;
			class CNmSpeedScaleNode_CDefinition;
			class CNmDurationScaleNode_CDefinition;
			class CNmVelocityBasedSpeedScaleNode_CDefinition;
			class CNmClipNode_CDefinition;
			class CNmParameterizedBlendNode_CDefinition;
			class CNmBlend1DNode_CDefinition;
			class CNmVelocityBlendNode_CDefinition;
			class CNmParameterizedBlendNode_Parameterization_t;
			class CNmBitFlags;
			class NmCompressionSettings_t;
			class CNmGraphDefinition_ChildGraphSlot_t;
			class CNmRootMotionData;
			class CNmStateNode_TimedEvent_t;
			class CNmBoneMask;
			class CNmSyncTrack_EventMarker_t;
			class NmPercent_t;
			class CNmLayerBlendNode_LayerDefinition_t;
			class CNmStateMachineNode_TransitionDefinition_t;
			class NmCompressionSettings_t_QuantizationRange_t;
			class CNmEvent;
			class CNmFootEvent;
			class CNmIDEvent;
			class CNmTransitionEvent;
			class CNmOrientationWarpEvent;
			class CNmRootMotionEvent;
			class CNmTargetWarpEvent;
			class CNmLegacyEvent;
			class CNmFrameSnapEvent;
			class CNmGraphDataSet;
			class CNmSkeleton;
			class CNmGraphDefinition;
			class CNmGraphVariation;
			class CNmStateMachineNode_StateDefinition_t;
			class CNmIKRig;
			class CNmClip;
			class CNmGraphDefinition_ExternalGraphSlot_t;
			class CNmSyncTrack;
			class CNmTask;
			class CNmCachedPoseWriteTask;
			class CNmReferencePoseTask;
			class CNmZeroPoseTask;
			class CNmBlendTaskBase;
			class CNmModelSpaceBlendTask;
			class CNmOverlayBlendTask;
			class CNmAdditiveBlendTask;
			class CNmBlendTask;
			class CNmSampleTask;
			class CNmCachedPoseReadTask;
			class CNmFloatRemapNode_RemapRange_t;
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x1
			enum class CNmFloatAngleMathNode_Operation_t : std::uint8_t {
				ClampTo180 = 0,
				ClampTo360 = 1,
				FlipHemisphere = 2,
				FlipHemisphereNegate = 3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class NmTransitionRule_t : std::uint8_t {
				// MPropertyFriendlyName "Fully Allowed"
				AllowTransition = 0,
				// MPropertyFriendlyName "Conditionally Allowed"
				ConditionallyAllowTransition = 1,
				// MPropertyFriendlyName "Blocked"
				BlockTransition = 2,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x1
			enum class NmStateEventTypeCondition_t : std::uint8_t {
				Entry = 0,
				FullyInState = 1,
				Exit = 2,
				Timed = 3,
				Any = 4,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x1
			enum class CNmRootMotionOverrideNode_OverrideFlags_t : std::uint8_t {
				AllowMoveX = 0,
				AllowMoveY = 1,
				AllowMoveZ = 2,
				AllowFacingPitch = 3,
				ListenForEvents = 4,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x1
			enum class NmTargetWarpAlgorithm_t : std::uint8_t {
				Lerp = 0,
				Hermite = 1,
				HermiteFeaturePreserving = 2,
				Bezier = 3,
			};
			// Enumerator count: 23
			// Alignment: 
			// Size: 0x1
			enum class NmEasingOperation_t : std::uint8_t {
				Linear = 0,
				InQuad = 1,
				OutQuad = 2,
				InOutQuad = 3,
				InCubic = 4,
				OutCubic = 5,
				InOutCubic = 6,
				InQuart = 7,
				OutQuart = 8,
				InOutQuart = 9,
				InQuint = 10,
				OutQuint = 11,
				InOutQuint = 12,
				InSine = 13,
				OutSine = 14,
				InOutSine = 15,
				InExpo = 16,
				OutExpo = 17,
				InOutExpo = 18,
				InCirc = 19,
				OutCirc = 20,
				InOutCirc = 21,
				None = 22,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class NmCachedValueMode_t : std::uint32_t {
				OnEntry = 0x0,
				OnExit = 0x1,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x1
			enum class NmTransitionRuleCondition_t : std::uint8_t {
				// MPropertyFriendlyName "Any Allowed"
				AnyAllowed = 0,
				// MPropertyFriendlyName "Fully Allowed"
				FullyAllowed = 1,
				// MPropertyFriendlyName "Conditionally Allowed"
				ConditionallyAllowed = 2,
				// MPropertyFriendlyName "Blocked"
				Blocked = 3,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x1
			enum class NmRootMotionBlendMode_t : std::uint8_t {
				Blend = 0,
				Additive = 1,
				IgnoreSource = 2,
				IgnoreTarget = 3,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x1
			enum class NmEasingFunction_t : std::uint8_t {
				Linear = 0,
				Quad = 1,
				Cubic = 2,
				Quart = 3,
				Quint = 4,
				Sine = 5,
				Expo = 6,
				Circ = 7,
				Back = 8,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x1
			enum class CNmFloatMathNode_Operator_t : std::uint8_t {
				Add = 0,
				Sub = 1,
				Mul = 2,
				Div = 3,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x1
			enum class CNmSyncEventIndexConditionNode_TriggerMode_t : std::uint8_t {
				ExactlyAtEventIndex = 0,
				GreaterThanEqualToEventIndex = 1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x1
			enum class CNmRootMotionData_SamplingMode_t : std::uint8_t {
				Delta = 0,
				WorldSpace = 1,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x1
			enum class NmEventConditionRules_t : std::uint8_t {
				LimitSearchToSourceState = 0,
				IgnoreInactiveEvents = 1,
				PreferHighestWeight = 2,
				PreferHighestProgress = 3,
				OperatorOr = 4,
				OperatorAnd = 5,
				SearchOnlyStateEvents = 6,
				SearchOnlyAnimEvents = 7,
				SearchBothStateAndAnimEvents = 8,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x1
			enum class CNmTimeConditionNode_Operator_t : std::uint8_t {
				LessThan = 0,
				LessThanEqual = 1,
				GreaterThan = 2,
				GreaterThanEqual = 3,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x1
			enum class NmFootPhaseCondition_t : std::uint8_t {
				LeftFootDown = 0,
				LeftFootPassing = 1,
				LeftPhase = 4,
				RightFootDown = 2,
				RightFootPassing = 3,
				RightPhase = 5,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x1
			enum class CNmIDComparisonNode_Comparison_t : std::uint8_t {
				Matches = 0,
				DoesntMatch = 1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class NmPoseBlendMode_t : std::uint8_t {
				Overlay = 0,
				Additive = 1,
				ModelSpace = 2,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x1
			enum class CNmVectorInfoNode_Info_t : std::uint8_t {
				X = 0,
				Y = 1,
				Z = 2,
				Length = 3,
				AngleHorizontal = 4,
				AngleVertical = 5,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class NmFrameSnapEventMode_t : std::uint32_t {
				Floor = 0x0,
				Round = 0x1,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x1
			enum class NmGraphValueType_t : std::uint8_t {
				Unknown = 0,
				Bool = 1,
				ID = 2,
				Float = 3,
				Vector = 4,
				Target = 5,
				BoneMask = 6,
				Pose = 7,
				Special = 8,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x1
			enum class NmFootPhase_t : std::uint8_t {
				LeftFootDown = 0,
				RightFootPassing = 1,
				RightFootDown = 2,
				LeftFootPassing = 3,
			};
			// Enumerator count: 8
			// Alignment: 
			// Size: 0x4
			enum class CNmTargetInfoNode_Info_t : std::uint32_t {
				AngleHorizontal = 0x0,
				AngleVertical = 0x1,
				Distance = 0x2,
				DistanceHorizontalOnly = 0x3,
				DistanceVerticalOnly = 0x4,
				DeltaOrientationX = 0x5,
				DeltaOrientationY = 0x6,
				DeltaOrientationZ = 0x7,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x1
			enum class CNmTimeConditionNode_ComparisonType_t : std::uint8_t {
				PercentageThroughState = 0,
				PercentageThroughSyncEvent = 1,
				ElapsedTime = 2,
				LoopCount = 3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class CNmBoneMask_WeightInfo_t : std::uint8_t {
				Zero = 0,
				Mixed = 1,
				One = 2,
			};
			// Enumerator count: 8
			// Alignment: 
			// Size: 0x1
			enum class CNmTransitionNode_TransitionOptions_t : std::uint8_t {
				None = 0,
				ClampDuration = 1,
				Synchronized = 2,
				MatchSourceTime = 3,
				MatchSyncEventIndex = 4,
				MatchSyncEventID = 5,
				MatchSyncEventPercentage = 6,
				PreferClosestSyncEventID = 7,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x1
			enum class CNmFloatComparisonNode_Comparison_t : std::uint8_t {
				GreaterThanEqual = 0,
				LessThanEqual = 1,
				NearEqual = 2,
				GreaterThan = 3,
				LessThan = 4,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x1
			enum class NmTargetWarpRule_t : std::uint8_t {
				WarpXY = 0,
				WarpZ = 1,
				WarpXYZ = 2,
				RotationOnly = 3,
			};
			class CNmTarget {
				MEMBER(transform, animlib::CNmTarget, CTransform);
				MEMBER(bone_id, animlib::CNmTarget, CGlobalSymbol);
				MEMBER(b_is_bone_target, animlib::CNmTarget, bool);
				MEMBER(b_is_using_bone_space_offsets, animlib::CNmTarget, bool);
				MEMBER(b_has_offsets, animlib::CNmTarget, bool);
				MEMBER(b_is_set, animlib::CNmTarget, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmTarget

			struct CNmSyncTrack_Event_t {
				MEMBER(id, animlib::CNmSyncTrack_Event_t, CGlobalSymbol);
				MEMBER(start_time, animlib::CNmSyncTrack_Event_t, animlib::NmPercent_t);
				MEMBER(duration, animlib::CNmSyncTrack_Event_t, animlib::NmPercent_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CNmSyncTrack_Event_t

			struct CNmParameterizedBlendNode_BlendRange_t {
				MEMBER(n_input_idx0, animlib::CNmParameterizedBlendNode_BlendRange_t, int16_t);
				MEMBER(n_input_idx1, animlib::CNmParameterizedBlendNode_BlendRange_t, int16_t);
				////MEMBER(parameter_value_range, animlib::CNmParameterizedBlendNode_BlendRange_t, Range_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CNmParameterizedBlendNode_BlendRange_t

			struct CNmStateEventConditionNode_Condition_t {
				MEMBER(event_id, animlib::CNmStateEventConditionNode_Condition_t, CGlobalSymbol);
				MEMBER(event_type_condition, animlib::CNmStateEventConditionNode_Condition_t, animlib::NmStateEventTypeCondition_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CNmStateEventConditionNode_Condition_t

			struct NmSyncTrackTimeRange_t {
				MEMBER(start_time, animlib::NmSyncTrackTimeRange_t, animlib::NmSyncTrackTime_t);
				MEMBER(end_time, animlib::NmSyncTrackTimeRange_t, animlib::NmSyncTrackTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct NmSyncTrackTimeRange_t

			struct NmSyncTrackTime_t {
				MEMBER(n_event_idx, animlib::NmSyncTrackTime_t, int32_t);
				MEMBER(percentage_through, animlib::NmSyncTrackTime_t, animlib::NmPercent_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct NmSyncTrackTime_t

			class CNmGraphNode_CDefinition {
				MEMBER(n_node_idx, animlib::CNmGraphNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmGraphNode_CDefinition

			class CNmValueNode_CDefinition : public animlib::CNmGraphNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmValueNode_CDefinition

			class CNmTargetValueNode_CDefinition : public animlib::CNmValueNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmTargetValueNode_CDefinition

			class CNmControlParameterTargetNode_CDefinition : public animlib::CNmTargetValueNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmControlParameterTargetNode_CDefinition

			class CNmCachedTargetNode_CDefinition : public animlib::CNmTargetValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmCachedTargetNode_CDefinition, int16_t);
				MEMBER(mode, animlib::CNmCachedTargetNode_CDefinition, animlib::NmCachedValueMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmCachedTargetNode_CDefinition

			class CNmConstTargetNode_CDefinition : public animlib::CNmTargetValueNode_CDefinition {
				MEMBER(value, animlib::CNmConstTargetNode_CDefinition, animlib::CNmTarget);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmConstTargetNode_CDefinition

			class CNmVirtualParameterTargetNode_CDefinition : public animlib::CNmTargetValueNode_CDefinition {
				MEMBER(n_child_node_idx, animlib::CNmVirtualParameterTargetNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmVirtualParameterTargetNode_CDefinition

			class CNmTargetOffsetNode_CDefinition : public animlib::CNmTargetValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmTargetOffsetNode_CDefinition, int16_t);
				MEMBER(b_is_bone_space_offset, animlib::CNmTargetOffsetNode_CDefinition, bool);
				MEMBER(rotation_offset, animlib::CNmTargetOffsetNode_CDefinition, quaternion);
				MEMBER(translation_offset, animlib::CNmTargetOffsetNode_CDefinition, vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmTargetOffsetNode_CDefinition

			class CNmIDValueNode_CDefinition : public animlib::CNmValueNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmIDValueNode_CDefinition

			class CNmControlParameterIDNode_CDefinition : public animlib::CNmIDValueNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmControlParameterIDNode_CDefinition

			class CNmVirtualParameterIDNode_CDefinition : public animlib::CNmIDValueNode_CDefinition {
				MEMBER(n_child_node_idx, animlib::CNmVirtualParameterIDNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmVirtualParameterIDNode_CDefinition

			class CNmFootstepEventIDNode_CDefinition : public animlib::CNmIDValueNode_CDefinition {
				MEMBER(n_source_state_node_idx, animlib::CNmFootstepEventIDNode_CDefinition, int16_t);
				MEMBER(event_condition_rules, animlib::CNmFootstepEventIDNode_CDefinition, animlib::CNmBitFlags);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFootstepEventIDNode_CDefinition

			class CNmCurrentSyncEventIDNode_CDefinition : public animlib::CNmIDValueNode_CDefinition {
				MEMBER(n_source_state_node_idx, animlib::CNmCurrentSyncEventIDNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmCurrentSyncEventIDNode_CDefinition

			class CNmCachedIDNode_CDefinition : public animlib::CNmIDValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmCachedIDNode_CDefinition, int16_t);
				MEMBER(mode, animlib::CNmCachedIDNode_CDefinition, animlib::NmCachedValueMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmCachedIDNode_CDefinition

			class CNmConstIDNode_CDefinition : public animlib::CNmIDValueNode_CDefinition {
				MEMBER(value, animlib::CNmConstIDNode_CDefinition, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmConstIDNode_CDefinition

			class CNmIDEventNode_CDefinition : public animlib::CNmIDValueNode_CDefinition {
				MEMBER(n_source_state_node_idx, animlib::CNmIDEventNode_CDefinition, int16_t);
				MEMBER(event_condition_rules, animlib::CNmIDEventNode_CDefinition, animlib::CNmBitFlags);
				MEMBER(default_value, animlib::CNmIDEventNode_CDefinition, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmIDEventNode_CDefinition

			class CNmBoolValueNode_CDefinition : public animlib::CNmValueNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmBoolValueNode_CDefinition

			class CNmVirtualParameterBoolNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				MEMBER(n_child_node_idx, animlib::CNmVirtualParameterBoolNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmVirtualParameterBoolNode_CDefinition

			class CNmIDComparisonNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmIDComparisonNode_CDefinition, int16_t);
				MEMBER(comparison, animlib::CNmIDComparisonNode_CDefinition, animlib::CNmIDComparisonNode_Comparison_t);
				////MEMBER(comparision_ids, animlib::CNmIDComparisonNode_CDefinition, CUtlLeanVectorFixedGrowable<CGlobalSymbol,4>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmIDComparisonNode_CDefinition

			class CNmFloatComparisonNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmFloatComparisonNode_CDefinition, int16_t);
				MEMBER(n_comparand_value_node_idx, animlib::CNmFloatComparisonNode_CDefinition, int16_t);
				MEMBER(comparison, animlib::CNmFloatComparisonNode_CDefinition, animlib::CNmFloatComparisonNode_Comparison_t);
				MEMBER(fl_epsilon, animlib::CNmFloatComparisonNode_CDefinition, float);
				MEMBER(fl_comparison_value, animlib::CNmFloatComparisonNode_CDefinition, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFloatComparisonNode_CDefinition

			class CNmFloatRangeComparisonNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				////MEMBER(range, animlib::CNmFloatRangeComparisonNode_CDefinition, Range_t);
				MEMBER(n_input_value_node_idx, animlib::CNmFloatRangeComparisonNode_CDefinition, int16_t);
				MEMBER(b_is_inclusive_check, animlib::CNmFloatRangeComparisonNode_CDefinition, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFloatRangeComparisonNode_CDefinition

			class CNmFootEventConditionNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				MEMBER(n_source_state_node_idx, animlib::CNmFootEventConditionNode_CDefinition, int16_t);
				MEMBER(phase_condition, animlib::CNmFootEventConditionNode_CDefinition, animlib::NmFootPhaseCondition_t);
				MEMBER(event_condition_rules, animlib::CNmFootEventConditionNode_CDefinition, animlib::CNmBitFlags);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFootEventConditionNode_CDefinition

			class CNmAndNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				/////MEMBER(condition_node_indices, animlib::CNmAndNode_CDefinition, CUtlLeanVectorFixedGrowable<int16_t,4>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmAndNode_CDefinition

			class CNmNotNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmNotNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmNotNode_CDefinition

			class CNmConstBoolNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				MEMBER(b_value, animlib::CNmConstBoolNode_CDefinition, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmConstBoolNode_CDefinition

			class CNmIsTargetSetNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmIsTargetSetNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmIsTargetSetNode_CDefinition

			class CNmControlParameterBoolNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmControlParameterBoolNode_CDefinition

			class CNmTimeConditionNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				MEMBER(source_state_node_idx, animlib::CNmTimeConditionNode_CDefinition, int16_t);
				MEMBER(n_input_value_node_idx, animlib::CNmTimeConditionNode_CDefinition, int16_t);
				MEMBER(fl_comparand, animlib::CNmTimeConditionNode_CDefinition, float);
				MEMBER(type, animlib::CNmTimeConditionNode_CDefinition, animlib::CNmTimeConditionNode_ComparisonType_t);
				MEMBER(_operator, animlib::CNmTimeConditionNode_CDefinition, animlib::CNmTimeConditionNode_Operator_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmTimeConditionNode_CDefinition

			class CNmStateEventConditionNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				MEMBER(n_source_state_node_idx, animlib::CNmStateEventConditionNode_CDefinition, int16_t);
				MEMBER(event_condition_rules, animlib::CNmStateEventConditionNode_CDefinition, animlib::CNmBitFlags);
				////MEMBER(conditions, animlib::CNmStateEventConditionNode_CDefinition, CUtlVectorFixedGrowable<animlib::CNmStateEventConditionNode_Condition_t,5>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmStateEventConditionNode_CDefinition

			class CNmStateCompletedConditionNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				MEMBER(n_source_state_node_idx, animlib::CNmStateCompletedConditionNode_CDefinition, int16_t);
				MEMBER(n_transition_duration_override_node_idx, animlib::CNmStateCompletedConditionNode_CDefinition, int16_t);
				MEMBER(fl_transition_duration_seconds, animlib::CNmStateCompletedConditionNode_CDefinition, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmStateCompletedConditionNode_CDefinition

			class CNmSyncEventIndexConditionNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				MEMBER(n_source_state_node_idx, animlib::CNmSyncEventIndexConditionNode_CDefinition, int16_t);
				MEMBER(trigger_mode, animlib::CNmSyncEventIndexConditionNode_CDefinition, animlib::CNmSyncEventIndexConditionNode_TriggerMode_t);
				MEMBER(sync_event_idx, animlib::CNmSyncEventIndexConditionNode_CDefinition, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmSyncEventIndexConditionNode_CDefinition

			class CNmCachedBoolNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmCachedBoolNode_CDefinition, int16_t);
				MEMBER(mode, animlib::CNmCachedBoolNode_CDefinition, animlib::NmCachedValueMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmCachedBoolNode_CDefinition

			class CNmIDEventPercentageThroughNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				MEMBER(n_source_state_node_idx, animlib::CNmIDEventPercentageThroughNode_CDefinition, int16_t);
				MEMBER(event_condition_rules, animlib::CNmIDEventPercentageThroughNode_CDefinition, animlib::CNmBitFlags);
				MEMBER(event_id, animlib::CNmIDEventPercentageThroughNode_CDefinition, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmIDEventPercentageThroughNode_CDefinition

			class CNmIDEventConditionNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				MEMBER(n_source_state_node_idx, animlib::CNmIDEventConditionNode_CDefinition, int16_t);
				MEMBER(event_condition_rules, animlib::CNmIDEventConditionNode_CDefinition, animlib::CNmBitFlags);
				////MEMBER(event_ids, animlib::CNmIDEventConditionNode_CDefinition, CUtlVectorFixedGrowable<CGlobalSymbol,5>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmIDEventConditionNode_CDefinition

			class CNmOrNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				////MEMBER(condition_node_indices, animlib::CNmOrNode_CDefinition, CUtlLeanVectorFixedGrowable<int16_t,4>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmOrNode_CDefinition

			class CNmTransitionEventConditionNode_CDefinition : public animlib::CNmBoolValueNode_CDefinition {
				MEMBER(require_rule_id, animlib::CNmTransitionEventConditionNode_CDefinition, CGlobalSymbol);
				MEMBER(event_condition_rules, animlib::CNmTransitionEventConditionNode_CDefinition, animlib::CNmBitFlags);
				MEMBER(n_source_state_node_idx, animlib::CNmTransitionEventConditionNode_CDefinition, int16_t);
				MEMBER(rule_condition, animlib::CNmTransitionEventConditionNode_CDefinition, animlib::NmTransitionRuleCondition_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmTransitionEventConditionNode_CDefinition

			class CNmBoneMaskValueNode_CDefinition : public animlib::CNmValueNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmBoneMaskValueNode_CDefinition

			class CNmBoneMaskNode_CDefinition : public animlib::CNmBoneMaskValueNode_CDefinition {
				MEMBER(bone_mask_id, animlib::CNmBoneMaskNode_CDefinition, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmBoneMaskNode_CDefinition

			class CNmFixedWeightBoneMaskNode_CDefinition : public animlib::CNmBoneMaskValueNode_CDefinition {
				MEMBER(fl_bone_weight, animlib::CNmFixedWeightBoneMaskNode_CDefinition, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFixedWeightBoneMaskNode_CDefinition

			class CNmBoneMaskSelectorNode_CDefinition : public animlib::CNmBoneMaskValueNode_CDefinition {
				MEMBER(default_mask_node_idx, animlib::CNmBoneMaskSelectorNode_CDefinition, int16_t);
				MEMBER(parameter_value_node_idx, animlib::CNmBoneMaskSelectorNode_CDefinition, int16_t);
				MEMBER(switch_dynamically, animlib::CNmBoneMaskSelectorNode_CDefinition, bool);
				////MEMBER(mask_node_indices, animlib::CNmBoneMaskSelectorNode_CDefinition, CUtlVectorFixedGrowable<int16_t,7>);
				////MEMBER(parameter_values, animlib::CNmBoneMaskSelectorNode_CDefinition, CUtlVectorFixedGrowable<CGlobalSymbol,7>);
				MEMBER(fl_blend_time_seconds, animlib::CNmBoneMaskSelectorNode_CDefinition, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmBoneMaskSelectorNode_CDefinition

			class CNmVirtualParameterBoneMaskNode_CDefinition : public animlib::CNmBoneMaskValueNode_CDefinition {
				MEMBER(n_child_node_idx, animlib::CNmVirtualParameterBoneMaskNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmVirtualParameterBoneMaskNode_CDefinition

			class CNmBoneMaskBlendNode_CDefinition : public animlib::CNmBoneMaskValueNode_CDefinition {
				MEMBER(n_source_mask_node_idx, animlib::CNmBoneMaskBlendNode_CDefinition, int16_t);
				MEMBER(n_target_mask_node_idx, animlib::CNmBoneMaskBlendNode_CDefinition, int16_t);
				MEMBER(n_blend_weight_value_node_idx, animlib::CNmBoneMaskBlendNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmBoneMaskBlendNode_CDefinition

			class CNmFloatValueNode_CDefinition : public animlib::CNmValueNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFloatValueNode_CDefinition

			class CNmCurrentSyncEventPercentageThroughNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(n_source_state_node_idx, animlib::CNmCurrentSyncEventPercentageThroughNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmCurrentSyncEventPercentageThroughNode_CDefinition

			class CNmConstFloatNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(fl_value, animlib::CNmConstFloatNode_CDefinition, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmConstFloatNode_CDefinition

			class CNmFloatRemapNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmFloatRemapNode_CDefinition, int16_t);
				MEMBER(input_range, animlib::CNmFloatRemapNode_CDefinition, animlib::CNmFloatRemapNode_RemapRange_t);
				MEMBER(output_range, animlib::CNmFloatRemapNode_CDefinition, animlib::CNmFloatRemapNode_RemapRange_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFloatRemapNode_CDefinition

			class CNmFloatClampNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmFloatClampNode_CDefinition, int16_t);
				////MEMBER(clamp_range, animlib::CNmFloatClampNode_CDefinition, Range_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFloatClampNode_CDefinition

			class CNmFootstepEventPercentageThroughNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(n_source_state_node_idx, animlib::CNmFootstepEventPercentageThroughNode_CDefinition, int16_t);
				MEMBER(phase_condition, animlib::CNmFootstepEventPercentageThroughNode_CDefinition, animlib::NmFootPhaseCondition_t);
				MEMBER(event_condition_rules, animlib::CNmFootstepEventPercentageThroughNode_CDefinition, animlib::CNmBitFlags);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFootstepEventPercentageThroughNode_CDefinition

			class CNmFloatCurveNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmFloatCurveNode_CDefinition, int16_t);
				MEMBER(curve, animlib::CNmFloatCurveNode_CDefinition, CPiecewiseCurve);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFloatCurveNode_CDefinition

			class CNmFloatAbsNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmFloatAbsNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFloatAbsNode_CDefinition

			class CNmIDToFloatNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmIDToFloatNode_CDefinition, int16_t);
				MEMBER(default_value, animlib::CNmIDToFloatNode_CDefinition, float);
				/////MEMBER(ids, animlib::CNmIDToFloatNode_CDefinition, CUtlLeanVectorFixedGrowable<CGlobalSymbol,5>);
				////MEMBER(values, animlib::CNmIDToFloatNode_CDefinition, CUtlLeanVectorFixedGrowable<float,5>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmIDToFloatNode_CDefinition

			class CNmFloatSelectorNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				////MEMBER(condition_node_indices, animlib::CNmFloatSelectorNode_CDefinition, CUtlVectorFixedGrowable<int16_t,5>);
				///MEMBER(values, animlib::CNmFloatSelectorNode_CDefinition, CUtlVectorFixedGrowable<float,5>);
				MEMBER(fl_default_value, animlib::CNmFloatSelectorNode_CDefinition, float);
				MEMBER(fl_ease_time, animlib::CNmFloatSelectorNode_CDefinition, float);
				MEMBER(easing_op, animlib::CNmFloatSelectorNode_CDefinition, animlib::NmEasingOperation_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFloatSelectorNode_CDefinition

			class CNmControlParameterFloatNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmControlParameterFloatNode_CDefinition

			class CNmFloatMathNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(n_input_value_node_idx_a, animlib::CNmFloatMathNode_CDefinition, int16_t);
				MEMBER(n_input_value_node_idx_b, animlib::CNmFloatMathNode_CDefinition, int16_t);
				MEMBER(b_return_absolute_result, animlib::CNmFloatMathNode_CDefinition, bool);
				MEMBER(_operator, animlib::CNmFloatMathNode_CDefinition, animlib::CNmFloatMathNode_Operator_t);
				MEMBER(fl_value_b, animlib::CNmFloatMathNode_CDefinition, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFloatMathNode_CDefinition

			class CNmFloatSwitchNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(n_switch_value_node_idx, animlib::CNmFloatSwitchNode_CDefinition, int16_t);
				MEMBER(n_true_value_node_idx, animlib::CNmFloatSwitchNode_CDefinition, int16_t);
				MEMBER(n_false_value_node_idx, animlib::CNmFloatSwitchNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFloatSwitchNode_CDefinition

			class CNmCurrentSyncEventIndexNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(n_source_state_node_idx, animlib::CNmCurrentSyncEventIndexNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmCurrentSyncEventIndexNode_CDefinition

			class CNmFloatAngleMathNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmFloatAngleMathNode_CDefinition, int16_t);
				MEMBER(operation, animlib::CNmFloatAngleMathNode_CDefinition, animlib::CNmFloatAngleMathNode_Operation_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFloatAngleMathNode_CDefinition

			class CNmVirtualParameterFloatNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(n_child_node_idx, animlib::CNmVirtualParameterFloatNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmVirtualParameterFloatNode_CDefinition

			class CNmFloatEaseNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(fl_ease_time, animlib::CNmFloatEaseNode_CDefinition, float);
				MEMBER(fl_start_value, animlib::CNmFloatEaseNode_CDefinition, float);
				MEMBER(n_input_value_node_idx, animlib::CNmFloatEaseNode_CDefinition, int16_t);
				MEMBER(easing_op, animlib::CNmFloatEaseNode_CDefinition, animlib::NmEasingOperation_t);
				MEMBER(b_use_start_value, animlib::CNmFloatEaseNode_CDefinition, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFloatEaseNode_CDefinition

			class CNmVectorInfoNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmVectorInfoNode_CDefinition, int16_t);
				MEMBER(desired_info, animlib::CNmVectorInfoNode_CDefinition, animlib::CNmVectorInfoNode_Info_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmVectorInfoNode_CDefinition

			class CNmCachedFloatNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmCachedFloatNode_CDefinition, int16_t);
				MEMBER(mode, animlib::CNmCachedFloatNode_CDefinition, animlib::NmCachedValueMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmCachedFloatNode_CDefinition

			class CNmTargetInfoNode_CDefinition : public animlib::CNmFloatValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmTargetInfoNode_CDefinition, int16_t);
				MEMBER(info_type, animlib::CNmTargetInfoNode_CDefinition, animlib::CNmTargetInfoNode_Info_t);
				MEMBER(b_is_world_space_target, animlib::CNmTargetInfoNode_CDefinition, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmTargetInfoNode_CDefinition

			class CNmVectorValueNode_CDefinition : public animlib::CNmValueNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmVectorValueNode_CDefinition

			class CNmVectorNegateNode_CDefinition : public animlib::CNmVectorValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmVectorNegateNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmVectorNegateNode_CDefinition

			class CNmTargetPointNode_CDefinition : public animlib::CNmVectorValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmTargetPointNode_CDefinition, int16_t);
				MEMBER(b_is_world_space_target, animlib::CNmTargetPointNode_CDefinition, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmTargetPointNode_CDefinition

			class CNmConstVectorNode_CDefinition : public animlib::CNmVectorValueNode_CDefinition {
				MEMBER(value, animlib::CNmConstVectorNode_CDefinition, vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmConstVectorNode_CDefinition

			class CNmVirtualParameterVectorNode_CDefinition : public animlib::CNmVectorValueNode_CDefinition {
				MEMBER(n_child_node_idx, animlib::CNmVirtualParameterVectorNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmVirtualParameterVectorNode_CDefinition

			class CNmVectorCreateNode_CDefinition : public animlib::CNmVectorValueNode_CDefinition {
				MEMBER(input_vector_value_node_idx, animlib::CNmVectorCreateNode_CDefinition, int16_t);
				MEMBER(input_value_xnode_idx, animlib::CNmVectorCreateNode_CDefinition, int16_t);
				MEMBER(input_value_ynode_idx, animlib::CNmVectorCreateNode_CDefinition, int16_t);
				MEMBER(input_value_znode_idx, animlib::CNmVectorCreateNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmVectorCreateNode_CDefinition

			class CNmControlParameterVectorNode_CDefinition : public animlib::CNmVectorValueNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmControlParameterVectorNode_CDefinition

			class CNmCachedVectorNode_CDefinition : public animlib::CNmVectorValueNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmCachedVectorNode_CDefinition, int16_t);
				MEMBER(mode, animlib::CNmCachedVectorNode_CDefinition, animlib::NmCachedValueMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmCachedVectorNode_CDefinition

			class CNmPoseNode_CDefinition : public animlib::CNmGraphNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmPoseNode_CDefinition

			class CNmAnimationPoseNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				MEMBER(n_pose_time_value_node_idx, animlib::CNmAnimationPoseNode_CDefinition, int16_t);
				MEMBER(n_data_slot_idx, animlib::CNmAnimationPoseNode_CDefinition, int16_t);
				//////MEMBER(input_time_remap_range, animlib::CNmAnimationPoseNode_CDefinition, Range_t);
				MEMBER(fl_user_specified_time, animlib::CNmAnimationPoseNode_CDefinition, float);
				MEMBER(b_use_frames_as_input, animlib::CNmAnimationPoseNode_CDefinition, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmAnimationPoseNode_CDefinition

			class CNmChildGraphNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				MEMBER(n_child_graph_idx, animlib::CNmChildGraphNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmChildGraphNode_CDefinition

			class CNmZeroPoseNode_CDefinition : public animlib::CNmPoseNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmZeroPoseNode_CDefinition

			class CNmStateMachineNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				////MEMBER(state_definitions, animlib::CNmStateMachineNode_CDefinition, CUtlLeanVectorFixedGrowable<animlib::CNmStateMachineNode__StateDefinition_t,5>);
				MEMBER(n_default_state_index, animlib::CNmStateMachineNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmStateMachineNode_CDefinition

			class CNmOrientationWarpNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				MEMBER(n_clip_reference_node_idx, animlib::CNmOrientationWarpNode_CDefinition, int16_t);
				MEMBER(n_target_value_node_idx, animlib::CNmOrientationWarpNode_CDefinition, int16_t);
				MEMBER(b_is_offset_node, animlib::CNmOrientationWarpNode_CDefinition, bool);
				MEMBER(b_is_offset_relative_to_character, animlib::CNmOrientationWarpNode_CDefinition, bool);
				MEMBER(sampling_mode, animlib::CNmOrientationWarpNode_CDefinition, animlib::CNmRootMotionData_SamplingMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmOrientationWarpNode_CDefinition

			class CNmLayerBlendNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				MEMBER(n_base_node_idx, animlib::CNmLayerBlendNode_CDefinition, int16_t);
				MEMBER(b_only_sample_base_root_motion, animlib::CNmLayerBlendNode_CDefinition, bool);
				///MEMBER(layer_definition, animlib::CNmLayerBlendNode_CDefinition, CUtlLeanVectorFixedGrowable<animlib::CNmLayerBlendNode__LayerDefinition_t,3>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmLayerBlendNode_CDefinition

			class CNmTargetWarpNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				MEMBER(n_clip_reference_node_idx, animlib::CNmTargetWarpNode_CDefinition, int16_t);
				MEMBER(n_target_value_node_idx, animlib::CNmTargetWarpNode_CDefinition, int16_t);
				MEMBER(sampling_mode, animlib::CNmTargetWarpNode_CDefinition, animlib::CNmRootMotionData_SamplingMode_t);
				MEMBER(b_allow_target_update, animlib::CNmTargetWarpNode_CDefinition, bool);
				MEMBER(fl_sampling_position_error_threshold_sq, animlib::CNmTargetWarpNode_CDefinition, float);
				MEMBER(fl_max_tangent_length, animlib::CNmTargetWarpNode_CDefinition, float);
				MEMBER(fl_lerp_fallback_distance_threshold, animlib::CNmTargetWarpNode_CDefinition, float);
				MEMBER(fl_target_update_distance_threshold, animlib::CNmTargetWarpNode_CDefinition, float);
				MEMBER(fl_target_update_angle_threshold_radians, animlib::CNmTargetWarpNode_CDefinition, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmTargetWarpNode_CDefinition

			class CNmParameterizedClipSelectorNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				////MEMBER(option_node_indices, animlib::CNmParameterizedClipSelectorNode_CDefinition, CUtlLeanVectorFixedGrowable<int16_t,5>);
				MEMBER(parameter_node_idx, animlib::CNmParameterizedClipSelectorNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmParameterizedClipSelectorNode_CDefinition

			class CNmBlend2DNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				////MEMBER(source_node_indices, animlib::CNmBlend2DNode_CDefinition, CUtlVectorFixedGrowable<int16_t,5>);
				MEMBER(n_input_parameter_node_idx0, animlib::CNmBlend2DNode_CDefinition, int16_t);
				MEMBER(n_input_parameter_node_idx1, animlib::CNmBlend2DNode_CDefinition, int16_t);
				////MEMBER(values, animlib::CNmBlend2DNode_CDefinition, CUtlVectorFixedGrowable<Vector2D,10>);
				///MEMBER(indices, animlib::CNmBlend2DNode_CDefinition, CUtlVectorFixedGrowable<uint8_t,30>);
				////MEMBER(hull_indices, animlib::CNmBlend2DNode_CDefinition, CUtlVectorFixedGrowable<uint8_t,10>);
				MEMBER(b_allow_looping, animlib::CNmBlend2DNode_CDefinition, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmBlend2DNode_CDefinition

			class CNmParameterizedSelectorNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				////MEMBER(option_node_indices, animlib::CNmParameterizedSelectorNode_CDefinition, CUtlLeanVectorFixedGrowable<int16_t,5>);
				MEMBER(parameter_node_idx, animlib::CNmParameterizedSelectorNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmParameterizedSelectorNode_CDefinition

			class CNmSelectorNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				///MEMBER(option_node_indices, animlib::CNmSelectorNode_CDefinition, CUtlLeanVectorFixedGrowable<int16_t,5>);
				////MEMBER(condition_node_indices, animlib::CNmSelectorNode_CDefinition, CUtlLeanVectorFixedGrowable<int16_t,5>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmSelectorNode_CDefinition

			class CNmTransitionNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				MEMBER(n_target_state_node_idx, animlib::CNmTransitionNode_CDefinition, int16_t);
				MEMBER(n_duration_override_node_idx, animlib::CNmTransitionNode_CDefinition, int16_t);
				MEMBER(sync_event_offset_override_node_idx, animlib::CNmTransitionNode_CDefinition, int16_t);
				MEMBER(start_bone_mask_node_idx, animlib::CNmTransitionNode_CDefinition, int16_t);
				MEMBER(fl_duration, animlib::CNmTransitionNode_CDefinition, float);
				MEMBER(bone_mask_blend_in_time_percentage, animlib::CNmTransitionNode_CDefinition, animlib::NmPercent_t);
				MEMBER(sync_event_offset, animlib::CNmTransitionNode_CDefinition, float);
				MEMBER(transition_options, animlib::CNmTransitionNode_CDefinition, animlib::CNmBitFlags);
				MEMBER(target_sync_idnode_idx, animlib::CNmTransitionNode_CDefinition, int16_t);
				MEMBER(blend_weight_easing, animlib::CNmTransitionNode_CDefinition, animlib::NmEasingOperation_t);
				MEMBER(root_motion_blend, animlib::CNmTransitionNode_CDefinition, animlib::NmRootMotionBlendMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmTransitionNode_CDefinition

			class CNmExternalGraphNode_CDefinition : public animlib::CNmPoseNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmExternalGraphNode_CDefinition

			class CNmClipSelectorNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				///MEMBER(option_node_indices, animlib::CNmClipSelectorNode_CDefinition, CUtlLeanVectorFixedGrowable<int16_t,5>);
				///MEMBER(condition_node_indices, animlib::CNmClipSelectorNode_CDefinition, CUtlLeanVectorFixedGrowable<int16_t,5>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmClipSelectorNode_CDefinition

			class CNmStateNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				MEMBER(n_child_node_idx, animlib::CNmStateNode_CDefinition, int16_t);
				///MEMBER(entry_events, animlib::CNmStateNode_CDefinition, CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>);
				///MEMBER(execute_events, animlib::CNmStateNode_CDefinition, CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>);
				////MEMBER(exit_events, animlib::CNmStateNode_CDefinition, CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>);
				////MEMBER(timed_remaining_events, animlib::CNmStateNode_CDefinition, CUtlLeanVectorFixedGrowable<animlib::CNmStateNode__TimedEvent_t,1>);
				////MEMBER(timed_elapsed_events, animlib::CNmStateNode_CDefinition, CUtlLeanVectorFixedGrowable<animlib::CNmStateNode__TimedEvent_t,1>);
				MEMBER(n_layer_weight_node_idx, animlib::CNmStateNode_CDefinition, int16_t);
				MEMBER(n_layer_root_motion_weight_node_idx, animlib::CNmStateNode_CDefinition, int16_t);
				MEMBER(n_layer_bone_mask_node_idx, animlib::CNmStateNode_CDefinition, int16_t);
				MEMBER(b_is_off_state, animlib::CNmStateNode_CDefinition, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmStateNode_CDefinition

			class CNmReferencePoseNode_CDefinition : public animlib::CNmPoseNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmReferencePoseNode_CDefinition

			class CNmPassthroughNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				MEMBER(n_child_node_idx, animlib::CNmPassthroughNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmPassthroughNode_CDefinition

			class CNmRootMotionOverrideNode_CDefinition : public animlib::CNmPassthroughNode_CDefinition {
				MEMBER(desired_moving_velocity_node_idx, animlib::CNmRootMotionOverrideNode_CDefinition, int16_t);
				MEMBER(desired_facing_direction_node_idx, animlib::CNmRootMotionOverrideNode_CDefinition, int16_t);
				MEMBER(linear_velocity_limit_node_idx, animlib::CNmRootMotionOverrideNode_CDefinition, int16_t);
				MEMBER(angular_velocity_limit_node_idx, animlib::CNmRootMotionOverrideNode_CDefinition, int16_t);
				MEMBER(max_linear_velocity, animlib::CNmRootMotionOverrideNode_CDefinition, float);
				MEMBER(max_angular_velocity_radians, animlib::CNmRootMotionOverrideNode_CDefinition, float);
				MEMBER(override_flags, animlib::CNmRootMotionOverrideNode_CDefinition, animlib::CNmBitFlags);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmRootMotionOverrideNode_CDefinition

			class CNmSpeedScaleBaseNode_CDefinition : public animlib::CNmPassthroughNode_CDefinition {
				MEMBER(n_input_value_node_idx, animlib::CNmSpeedScaleBaseNode_CDefinition, int16_t);
				MEMBER(fl_default_input_value, animlib::CNmSpeedScaleBaseNode_CDefinition, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmSpeedScaleBaseNode_CDefinition

			class CNmSpeedScaleNode_CDefinition : public animlib::CNmSpeedScaleBaseNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmSpeedScaleNode_CDefinition

			class CNmDurationScaleNode_CDefinition : public animlib::CNmSpeedScaleBaseNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmDurationScaleNode_CDefinition

			class CNmVelocityBasedSpeedScaleNode_CDefinition : public animlib::CNmSpeedScaleBaseNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmVelocityBasedSpeedScaleNode_CDefinition

			class CNmClipNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				MEMBER(n_play_in_reverse_value_node_idx, animlib::CNmClipNode_CDefinition, int16_t);
				MEMBER(n_reset_time_value_node_idx, animlib::CNmClipNode_CDefinition, int16_t);
				MEMBER(b_sample_root_motion, animlib::CNmClipNode_CDefinition, bool);
				MEMBER(b_allow_looping, animlib::CNmClipNode_CDefinition, bool);
				MEMBER(n_data_slot_idx, animlib::CNmClipNode_CDefinition, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmClipNode_CDefinition

			class CNmParameterizedBlendNode_CDefinition : public animlib::CNmPoseNode_CDefinition {
				////MEMBER(source_node_indices, animlib::CNmParameterizedBlendNode_CDefinition, CUtlVectorFixedGrowable<int16_t,5>);
				MEMBER(n_input_parameter_value_node_idx, animlib::CNmParameterizedBlendNode_CDefinition, int16_t);
				MEMBER(b_allow_looping, animlib::CNmParameterizedBlendNode_CDefinition, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmParameterizedBlendNode_CDefinition

			class CNmBlend1DNode_CDefinition : public animlib::CNmParameterizedBlendNode_CDefinition {
				MEMBER(parameterization, animlib::CNmBlend1DNode_CDefinition, animlib::CNmParameterizedBlendNode_Parameterization_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmBlend1DNode_CDefinition

			class CNmVelocityBlendNode_CDefinition : public animlib::CNmParameterizedBlendNode_CDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmVelocityBlendNode_CDefinition

			struct CNmParameterizedBlendNode_Parameterization_t {
				///MEMBER(blend_ranges, animlib::CNmParameterizedBlendNode_Parameterization_t, CUtlLeanVectorFixedGrowable<animlib::CNmParameterizedBlendNode__BlendRange_t,5>);
				///MEMBER(parameter_range, animlib::CNmParameterizedBlendNode_Parameterization_t, Range_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CNmParameterizedBlendNode_Parameterization_t

			class CNmBitFlags {
				MEMBER(flags, animlib::CNmBitFlags, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmBitFlags

			struct NmCompressionSettings_t {
				MEMBER(translation_range_x, animlib::NmCompressionSettings_t, animlib::NmCompressionSettings_t_QuantizationRange_t);
				MEMBER(translation_range_y, animlib::NmCompressionSettings_t, animlib::NmCompressionSettings_t_QuantizationRange_t);
				MEMBER(translation_range_z, animlib::NmCompressionSettings_t, animlib::NmCompressionSettings_t_QuantizationRange_t);
				MEMBER(scale_range, animlib::NmCompressionSettings_t, animlib::NmCompressionSettings_t_QuantizationRange_t);
				MEMBER(constant_rotation, animlib::NmCompressionSettings_t, quaternion);
				MEMBER(b_is_rotation_static, animlib::NmCompressionSettings_t, bool);
				MEMBER(b_is_translation_static, animlib::NmCompressionSettings_t, bool);
				MEMBER(b_is_scale_static, animlib::NmCompressionSettings_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct NmCompressionSettings_t

			struct CNmGraphDefinition_ChildGraphSlot_t {
				MEMBER(n_node_idx, animlib::CNmGraphDefinition_ChildGraphSlot_t, int16_t);
				MEMBER(data_slot_idx, animlib::CNmGraphDefinition_ChildGraphSlot_t, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CNmGraphDefinition_ChildGraphSlot_t

			class CNmRootMotionData {
				MEMBER(transforms, animlib::CNmRootMotionData, cutl_vector<CTransform>);
				MEMBER(n_num_frames, animlib::CNmRootMotionData, int32_t);
				MEMBER(fl_average_linear_velocity, animlib::CNmRootMotionData, float);
				MEMBER(fl_average_angular_velocity_radians, animlib::CNmRootMotionData, float);
				MEMBER(total_delta, animlib::CNmRootMotionData, CTransform);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmRootMotionData

			struct CNmStateNode_TimedEvent_t {
				MEMBER(id, animlib::CNmStateNode_TimedEvent_t, CGlobalSymbol);
				MEMBER(fl_time_value_seconds, animlib::CNmStateNode_TimedEvent_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CNmStateNode_TimedEvent_t

			class CNmBoneMask {
				MEMBER(id, animlib::CNmBoneMask, CGlobalSymbol);
				MEMBER(weight_info, animlib::CNmBoneMask, animlib::CNmBoneMask_WeightInfo_t);
				MEMBER(weights, animlib::CNmBoneMask, cutl_vector<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmBoneMask

			struct CNmSyncTrack_EventMarker_t {
				MEMBER(start_time, animlib::CNmSyncTrack_EventMarker_t, animlib::NmPercent_t);
				MEMBER(id, animlib::CNmSyncTrack_EventMarker_t, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CNmSyncTrack_EventMarker_t

			struct NmPercent_t {
				MEMBER(fl_value, animlib::NmPercent_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct NmPercent_t

			struct CNmLayerBlendNode_LayerDefinition_t {
				MEMBER(n_input_node_idx, animlib::CNmLayerBlendNode_LayerDefinition_t, int16_t);
				MEMBER(n_weight_value_node_idx, animlib::CNmLayerBlendNode_LayerDefinition_t, int16_t);
				MEMBER(n_bone_mask_value_node_idx, animlib::CNmLayerBlendNode_LayerDefinition_t, int16_t);
				MEMBER(n_root_motion_weight_value_node_idx, animlib::CNmLayerBlendNode_LayerDefinition_t, int16_t);
				MEMBER(b_is_synchronized, animlib::CNmLayerBlendNode_LayerDefinition_t, bool);
				MEMBER(b_ignore_events, animlib::CNmLayerBlendNode_LayerDefinition_t, bool);
				MEMBER(b_is_state_machine_layer, animlib::CNmLayerBlendNode_LayerDefinition_t, bool);
				MEMBER(blend_mode, animlib::CNmLayerBlendNode_LayerDefinition_t, animlib::NmPoseBlendMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CNmLayerBlendNode_LayerDefinition_t

			struct CNmStateMachineNode_TransitionDefinition_t {
				MEMBER(n_target_state_idx, animlib::CNmStateMachineNode_TransitionDefinition_t, int16_t);
				MEMBER(n_condition_node_idx, animlib::CNmStateMachineNode_TransitionDefinition_t, int16_t);
				MEMBER(n_transition_node_idx, animlib::CNmStateMachineNode_TransitionDefinition_t, int16_t);
				MEMBER(b_can_be_forced, animlib::CNmStateMachineNode_TransitionDefinition_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CNmStateMachineNode_TransitionDefinition_t

			struct NmCompressionSettings_t_QuantizationRange_t {
				MEMBER(fl_range_start, animlib::NmCompressionSettings_t_QuantizationRange_t, float);
				MEMBER(fl_range_length, animlib::NmCompressionSettings_t_QuantizationRange_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct NmCompressionSettings_t_QuantizationRange_t

			class CNmEvent {
				MEMBER(fl_start_time_seconds, animlib::CNmEvent, float);
				MEMBER(fl_duration_seconds, animlib::CNmEvent, float);
				MEMBER(sync_id, animlib::CNmEvent, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmEvent

			class CNmFootEvent : public animlib::CNmEvent {
				MEMBER(phase, animlib::CNmFootEvent, animlib::NmFootPhase_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFootEvent

			class CNmIDEvent : public animlib::CNmEvent {
				MEMBER(id, animlib::CNmIDEvent, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmIDEvent

			class CNmTransitionEvent : public animlib::CNmEvent {
				MEMBER(rule, animlib::CNmTransitionEvent, animlib::NmTransitionRule_t);
				MEMBER(id, animlib::CNmTransitionEvent, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmTransitionEvent

			class CNmOrientationWarpEvent : public animlib::CNmEvent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmOrientationWarpEvent

			class CNmRootMotionEvent : public animlib::CNmEvent {
				MEMBER(fl_blend_time_seconds, animlib::CNmRootMotionEvent, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmRootMotionEvent

			class CNmTargetWarpEvent : public animlib::CNmEvent {
				MEMBER(rule, animlib::CNmTargetWarpEvent, animlib::NmTargetWarpRule_t);
				MEMBER(algorithm, animlib::CNmTargetWarpEvent, animlib::NmTargetWarpAlgorithm_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmTargetWarpEvent

			class CNmLegacyEvent : public animlib::CNmEvent {
				MEMBER(anim_event_class_name, animlib::CNmLegacyEvent, cutl_string);
				MEMBER(kv, animlib::CNmLegacyEvent, KeyValues3);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmLegacyEvent

			class CNmFrameSnapEvent : public animlib::CNmEvent {
				MEMBER(frame_snap_mode, animlib::CNmFrameSnapEvent, animlib::NmFrameSnapEventMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmFrameSnapEvent

			class CNmGraphDataSet {
				MEMBER(variation_id, animlib::CNmGraphDataSet, CGlobalSymbol);
				MEMBER(skeleton, animlib::CNmGraphDataSet, CStrongHandle<resourcesystem::InfoForResourceTypeCNmSkeleton>);
				MEMBER(resources, animlib::CNmGraphDataSet, cutl_vector<CStrongHandleVoid>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmGraphDataSet

			class CNmSkeleton {
				MEMBER(id, animlib::CNmSkeleton, CGlobalSymbol);
				MEMBER(bone_ids, animlib::CNmSkeleton, CUtlLeanVector<CGlobalSymbol>);
				MEMBER(parent_indices, animlib::CNmSkeleton, cutl_vector<int32_t>);
				MEMBER(parent_space_reference_pose, animlib::CNmSkeleton, cutl_vector<CTransform>);
				MEMBER(model_space_reference_pose, animlib::CNmSkeleton, cutl_vector<CTransform>);
				MEMBER(num_bones_to_sample_at_low_lod, animlib::CNmSkeleton, int32_t);
				MEMBER(bone_masks, animlib::CNmSkeleton, CUtlLeanVector<animlib::CNmBoneMask>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmSkeleton

			class CNmGraphDefinition {
				MEMBER(persistent_node_indices, animlib::CNmGraphDefinition, cutl_vector<int16_t>);
				MEMBER(n_root_node_idx, animlib::CNmGraphDefinition, int16_t);
				MEMBER(control_parameter_ids, animlib::CNmGraphDefinition, cutl_vector<CGlobalSymbol>);
				MEMBER(virtual_parameter_ids, animlib::CNmGraphDefinition, cutl_vector<CGlobalSymbol>);
				MEMBER(virtual_parameter_node_indices, animlib::CNmGraphDefinition, cutl_vector<int16_t>);
				MEMBER(child_graph_slots, animlib::CNmGraphDefinition, cutl_vector<animlib::CNmGraphDefinition_ChildGraphSlot_t>);
				MEMBER(external_graph_slots, animlib::CNmGraphDefinition, cutl_vector<animlib::CNmGraphDefinition_ExternalGraphSlot_t>);
				MEMBER(node_paths, animlib::CNmGraphDefinition, cutl_vector<cutl_string>);
				////MEMBER(runtime_version_id, animlib::CNmGraphDefinition, V_uuid_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmGraphDefinition

			class CNmGraphVariation {
				MEMBER(graph_definition, animlib::CNmGraphVariation, CStrongHandle<resourcesystem::InfoForResourceTypeCNmGraphDefinition>);
				MEMBER(data_set, animlib::CNmGraphVariation, animlib::CNmGraphDataSet);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmGraphVariation

			struct CNmStateMachineNode_StateDefinition_t {
				MEMBER(n_state_node_idx, animlib::CNmStateMachineNode_StateDefinition_t, int16_t);
				MEMBER(n_entry_condition_node_idx, animlib::CNmStateMachineNode_StateDefinition_t, int16_t);
				////MEMBER(transition_definitions, animlib::CNmStateMachineNode_StateDefinition_t, CUtlLeanVectorFixedGrowable<animlib::CNmStateMachineNode__TransitionDefinition_t,5>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CNmStateMachineNode_StateDefinition_t

			class CNmIKRig {
				MEMBER(skeleton, animlib::CNmIKRig, CStrongHandle<resourcesystem::InfoForResourceTypeCNmSkeleton>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmIKRig

			class CNmClip {
				MEMBER(skeleton, animlib::CNmClip, CStrongHandle<resourcesystem::InfoForResourceTypeCNmSkeleton>);
				MEMBER(n_num_frames, animlib::CNmClip, uint32_t);
				MEMBER(fl_duration, animlib::CNmClip, float);
				MEMBER(compressed_pose_data, animlib::CNmClip, CUtlBinaryBlock);
				MEMBER(track_compression_settings, animlib::CNmClip, cutl_vector<animlib::NmCompressionSettings_t>);
				MEMBER(compressed_pose_offsets, animlib::CNmClip, cutl_vector<uint32_t>);
				MEMBER(sync_track, animlib::CNmClip, animlib::CNmSyncTrack);
				MEMBER(root_motion, animlib::CNmClip, animlib::CNmRootMotionData);
				MEMBER(b_is_additive, animlib::CNmClip, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmClip

			struct CNmGraphDefinition_ExternalGraphSlot_t {
				MEMBER(n_node_idx, animlib::CNmGraphDefinition_ExternalGraphSlot_t, int16_t);
				MEMBER(slot_id, animlib::CNmGraphDefinition_ExternalGraphSlot_t, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CNmGraphDefinition_ExternalGraphSlot_t

			class CNmSyncTrack {
				///MEMBER(sync_events, animlib::CNmSyncTrack, CUtlLeanVectorFixedGrowable<animlib::CNmSyncTrack_Event_t,10>);
				MEMBER(n_start_event_offset, animlib::CNmSyncTrack, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmSyncTrack

			class CNmTask {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmTask

			class CNmCachedPoseWriteTask : public animlib::CNmTask {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmCachedPoseWriteTask

			class CNmReferencePoseTask : public animlib::CNmTask {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmReferencePoseTask

			class CNmZeroPoseTask : public animlib::CNmTask {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmZeroPoseTask

			class CNmBlendTaskBase : public animlib::CNmTask {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmBlendTaskBase

			class CNmModelSpaceBlendTask : public animlib::CNmBlendTaskBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmModelSpaceBlendTask

			class CNmOverlayBlendTask : public animlib::CNmBlendTaskBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmOverlayBlendTask

			class CNmAdditiveBlendTask : public animlib::CNmBlendTaskBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmAdditiveBlendTask

			class CNmBlendTask : public animlib::CNmBlendTaskBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmBlendTask

			class CNmSampleTask : public animlib::CNmTask {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmSampleTask

			class CNmCachedPoseReadTask : public animlib::CNmTask {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNmCachedPoseReadTask

			struct CNmFloatRemapNode_RemapRange_t {
				MEMBER(fl_begin, animlib::CNmFloatRemapNode_RemapRange_t, float);
				MEMBER(fl_end, animlib::CNmFloatRemapNode_RemapRange_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CNmFloatRemapNode_RemapRange_t

		} // namespace animlib
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_animlib_H
