// generated on: Mon Nov 18 16:22:34 2024
#ifndef SDK_SCHEMA_animgraphlib_H
#define SDK_SCHEMA_animgraphlib_H

#include <cstdint>

#include <sdk/schema/animgraphlib.h>
#include <sdk/schema/modellib.h>
#include <sdk/schema/animationsystem.h>
#include <sdk/schema/resourcesystem.h>
namespace sdk {
	namespace schema {
		namespace animgraphlib {
			class FootFixedData_t;
			class IKSolverSettings_t;
			class AimMatrixOpFixedSettings_t;
			class CMotionSearchDB;
			class IKTargetSettings_t;
			class ParamSpan_t;
			class CMotionNode;
			class CMotionNodeBlend1D;
			class CMotionNodeSequence;
			class CAnimUpdateSharedData;
			class SolveIKChainPoseOpFixedSettings_t;
			class CPoseHandle;
			class JiggleBoneSettingsList_t;
			class CAnimMotorUpdaterBase;
			class CPlayerInputAnimMotorUpdater;
			class CPathAnimMotorUpdaterBase;
			class CPathAnimMotorUpdater;
			class CDampedPathAnimMotorUpdater;
			class ParamSpanSample_t;
			class TraceSettings_t;
			class CAnimParamHandleMap;
			class CAnimGraphModelBinding;
			class CAnimGraphSettingsManager;
			class LookAtOpFixedSettings_t;
			class ScriptInfo_t;
			class FootPinningPoseOpFixedData_t;
			class CStateActionUpdater;
			class CAnimationGraphVisualizerPrimitiveBase;
			class CAnimationGraphVisualizerPie;
			class CAnimationGraphVisualizerAxis;
			class CAnimationGraphVisualizerText;
			class CAnimationGraphVisualizerSphere;
			class CAnimationGraphVisualizerLine;
			class CTransitionUpdateData;
			class CBlendCurve;
			class CAnimUpdateNodeBase;
			class CBinaryUpdateNode;
			class CBoneMaskUpdateNode;
			class CSubtractUpdateNode;
			class CAddUpdateNode;
			class CLeafUpdateNode;
			class CDirectionalBlendUpdateNode;
			class CCycleControlClipUpdateNode;
			class CMotionMatchingUpdateNode;
			class CBindPoseUpdateNode;
			class CLeanMatrixUpdateNode;
			class CSingleFrameUpdateNode;
			class CSequenceUpdateNodeBase;
			class CPairedSequenceUpdateNode;
			class CSequenceUpdateNode;
			class CJumpHelperUpdateNode;
			class CInputStreamUpdateNode;
			class CMotionGraphUpdateNode;
			class CZeroPoseUpdateNode;
			class CStateMachineUpdateNode;
			class CBlendUpdateNode;
			class CSelectorUpdateNode;
			class CUnaryUpdateNode;
			class CWayPointHelperUpdateNode;
			class CFollowTargetUpdateNode;
			class CTargetWarpUpdateNode;
			class CRagdollUpdateNode;
			class CFollowPathUpdateNode;
			class CTwoBoneIKUpdateNode;
			class CMoverUpdateNode;
			class CFootStepTriggerUpdateNode;
			class CTurnHelperUpdateNode;
			class CFollowAttachmentUpdateNode;
			class CLookAtUpdateNode;
			class CAimMatrixUpdateNode;
			class CJiggleBoneUpdateNode;
			class CFootLockUpdateNode;
			class CDirectPlaybackUpdateNode;
			class CSolveIKChainUpdateNode;
			class CCycleControlUpdateNode;
			class CChoreoUpdateNode;
			class CStopAtGoalUpdateNode;
			class CFootPinningUpdateNode;
			class CRootUpdateNode;
			class CStanceOverrideUpdateNode;
			class CStanceScaleUpdateNode;
			class CAimCameraUpdateNode;
			class CFootAdjustmentUpdateNode;
			class CSpeedScaleUpdateNode;
			class COrientationWarpUpdateNode;
			class CSlowDownOnSlopesUpdateNode;
			class CHitReactUpdateNode;
			class CPathHelperUpdateNode;
			class CBlend2DUpdateNode;
			class CTargetSelectorUpdateNode;
			class CChoiceUpdateNode;
			class CMotionMetricEvaluator;
			class CCurrentRotationVelocityMetricEvaluator;
			class CDistanceRemainingMetricEvaluator;
			class CFutureFacingMetricEvaluator;
			class CCurrentVelocityMetricEvaluator;
			class CFootPositionMetricEvaluator;
			class CPathMetricEvaluator;
			class CStepsRemainingMetricEvaluator;
			class CBlockSelectionMetricEvaluator;
			class CFootCycleMetricEvaluator;
			class CFutureVelocityMetricEvaluator;
			class CBoneVelocityMetricEvaluator;
			class CTimeRemainingMetricEvaluator;
			class CBonePositionMetricEvaluator;
			class CAnimInputDamping;
			class AimCameraOpFixedSettings_t;
			class CAnimReplayFrame;
			class CSequenceTagSpans;
			class CStateUpdateData;
			class BoneDemoCaptureSettings_t;
			class CAnimParameterManagerUpdater;
			class CStateNodeStateData;
			class CDampedValueUpdateItem;
			class JiggleBoneSettings_t;
			class CMotionGraphGroup;
			class FootStepTrigger;
			class CAnimUpdateNodeRef;
			class CAnimStateMachineUpdater;
			class FollowTargetOpFixedSettings_t;
			class CAnimActionUpdater;
			class CToggleComponentActionUpdater;
			class CSetParameterActionUpdater;
			class CEmitTagActionUpdater;
			class CExpressionActionUpdater;
			class CParamSpanUpdater;
			class CDirectPlaybackTagData;
			class CAnimComponentUpdater;
			class CCPPScriptComponentUpdater;
			class CAnimScriptComponentUpdater;
			class CSlopeComponentUpdater;
			class CMovementComponentUpdater;
			class CPairedSequenceComponentUpdater;
			class CLODComponentUpdater;
			class CStateMachineComponentUpdater;
			class CRagdollComponentUpdater;
			class CDampedValueComponentUpdater;
			class CActionComponentUpdater;
			class CLookComponentUpdater;
			class CDemoSettingsComponentUpdater;
			class BlendItem_t;
			class CMotionDataSet;
			class TagSpan_t;
			class CSolveIKTargetHandle_t;
			class CStaticPoseCache;
			class CStaticPoseCacheBuilder;
			class IKDemoCaptureSettings_t;
			class MotionDBIndex;
			class WeightList;
			class CAnimParamHandle;
			class ChainToSolveData_t;
			class FootLockPoseOpFixedSettings;
			class LookAtBone_t;
			class CAnimDemoCaptureSettings;
			class CAnimGraphSettingsGroup;
			class CAnimGraphNetworkSettings;
			class CProductQuantizer;
			class CMotionGraph;
			class CEditableMotionGraph;
			class HitReactFixedSettings_t;
			class IKBoneNameAndIndex_t;
			class CAnimTagBase;
			class CMaterialAttributeAnimTag;
			class CBodyGroupAnimTag;
			class CStringAnimTag;
			class CAudioAnimTag;
			class CClothSettingsAnimTag;
			class CRagdollAnimTag;
			class CHandshakeAnimTagBase;
			class CTaskHandshakeAnimTag;
			class CMovementHandshakeAnimTag;
			class CFootstepLandedAnimTag;
			class CParticleAnimTag;
			class CFootFallAnimTag;
			class CTaskStatusAnimTag;
			class CSequenceFinishedAnimTag;
			class ConfigIndex;
			class MotionIndex;
			class FollowAttachmentSettings_t;
			class CAnimScriptManager;
			class TwoBoneIKSettings_t;
			class CMotionSearchNode;
			class CMotionGraphConfig;
			class StanceInfo_t;
			class CCachedPose;
			class CVectorQuantizer;
			class SampleCode;
			class CStateNodeTransitionData;
			class CAnimGraphDebugReplay;
			class CAnimNodePath;
			class CAnimTagManagerUpdater;
			class MotionBlendItem;
			class CBodyGroupSetting;
			class CAnimParameterBase;
			class CVirtualAnimParameter;
			class CConcreteAnimParameter;
			class CFloatAnimParameter;
			class CEnumAnimParameter;
			class CBoolAnimParameter;
			class CSymbolAnimParameter;
			class CQuaternionAnimParameter;
			class CVectorAnimParameter;
			class CIntAnimParameter;
			class FootFixedSettings;
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class CAnimationGraphVisualizerPrimitiveType : std::uint32_t {
				ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0x0,
				ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 0x1,
				ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 0x2,
				ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 0x3,
				ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 0x4,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class StanceOverrideMode : std::uint32_t {
				Sequence = 0x0,
				Node = 0x1,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class EIKEndEffectorRotationFixUpMode : std::uint32_t {
				// MPropertyFriendlyName "None"
				// MPropertyDescription "However the end effector ends up after the solve, it's rotation will remain unchanged."
				None = 0x0,
				// MPropertyFriendlyName "Match Target Orientation"
				// MPropertyDescription "The targets orientation will be stamped onto the end effector."
				MatchTargetOrientation = 0x1,
				// MPropertyFriendlyName "Look At Target Forward"
				// MPropertyDescription "The targets forward vector will be used to build a look orientation while preserving the rotation of the end effector after the solve as much as possible."
				LookAtTargetForward = 0x2,
				// MPropertyFriendlyName "Maintain Parent Orientation"
				// MPropertyDescription "Use the parent bone's orientation as the end effector's orientation."
				MaintainParentOrientation = 0x3,
				// MPropertySuppressEnumerator
				Count = 0x4,
			};
			// Enumerator count: 8
			// Alignment: 
			// Size: 0x4
			enum class FootFallTagFoot_t : std::uint32_t {
				// MPropertyFriendlyName "Left"
				FOOT1 = 0x0,
				// MPropertyFriendlyName "Right"
				FOOT2 = 0x1,
				// MPropertyFriendlyName "Foot 3"
				FOOT3 = 0x2,
				// MPropertyFriendlyName "Foot 4"
				FOOT4 = 0x3,
				// MPropertyFriendlyName "Foot 5"
				FOOT5 = 0x4,
				// MPropertyFriendlyName "Foot 6"
				FOOT6 = 0x5,
				// MPropertyFriendlyName "Foot 7"
				FOOT7 = 0x6,
				// MPropertyFriendlyName "Foot 8"
				FOOT8 = 0x7,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class StepPhase : std::uint32_t {
				// MPropertyFriendlyName "On Ground"
				StepPhase_OnGround = 0x0,
				// MPropertyFriendlyName "In the Air"
				StepPhase_InAir = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ChoiceBlendMethod : std::uint32_t {
				// MPropertyFriendlyName "Single Blend Time"
				SingleBlendTime = 0x0,
				// MPropertyFriendlyName "Per-Choice Blend Times"
				PerChoiceBlendTimes = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class BinaryNodeTiming : std::uint32_t {
				// MPropertyFriendlyName "Use Child1"
				UseChild1 = 0x0,
				// MPropertyFriendlyName "Use Child2"
				UseChild2 = 0x1,
				// MPropertyFriendlyName "Synchronize Children"
				SyncChildren = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class IKTargetCoordinateSystem : std::uint32_t {
				// MPropertyFriendlyName "World Space"
				IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
				// MPropertyFriendlyName "Model Space"
				IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
				IKTARGETCOORDINATESYSTEM_COUNT = 0x2,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class SolveIKChainAnimNodeDebugSetting : std::uint32_t {
				// MPropertyFriendlyName "None"
				SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0x0,
				// MPropertyFriendlyName "Debug X Axis Circle"
				SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 0x1,
				// MPropertyFriendlyName "Debug Y Axis Circle"
				SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 0x2,
				// MPropertyFriendlyName "Debug Z Axis Circle"
				SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 0x3,
				// MPropertyFriendlyName "Debug Hold Forward"
				SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 0x4,
				// MPropertyFriendlyName "Debug Hold Up"
				SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 0x5,
				// MPropertyFriendlyName "Debug Hold Left"
				SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 0x6,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class EDemoBoneSelectionMode : std::uint32_t {
				// MPropertyFriendlyName "Capture All Bones"
				CaptureAllBones = 0x0,
				// MPropertyFriendlyName "Capture Selected Bones"
				CaptureSelectedBones = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class MatterialAttributeTagType_t : std::uint32_t {
				// MPropertyFriendlyName "Value"
				MATERIAL_ATTRIBUTE_TAG_VALUE = 0x0,
				// MPropertyFriendlyName "color"
				MATERIAL_ATTRIBUTE_TAG_COLOR = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class AnimNodeNetworkMode : std::uint32_t {
				// MPropertyFriendlyName "Server Authoritative"
				ServerAuthoritative = 0x0,
				// MPropertyFriendlyName "Client Simulate"
				ClientSimulate = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class IKTargetSource : std::uint32_t {
				// MPropertyFriendlyName "Bone"
				IKTARGETSOURCE_Bone = 0x0,
				// MPropertyFriendlyName "Animgraph Parameter"
				IKTARGETSOURCE_AnimgraphParameter = 0x1,
				IKTARGETSOURCE_COUNT = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class PoseType_t : std::uint8_t {
				POSETYPE_STATIC = 0,
				POSETYPE_DYNAMIC = 1,
				POSETYPE_INVALID = 255,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class AimMatrixBlendMode : std::uint32_t {
				// MPropertyFriendlyName "None"
				AimMatrixBlendMode_None = 0x0,
				// MPropertyFriendlyName "Additive"
				AimMatrixBlendMode_Additive = 0x1,
				// MPropertyFriendlyName "Model-Space Additive"
				AimMatrixBlendMode_ModelSpaceAdditive = 0x2,
				// MPropertyFriendlyName "Bone Mask"
				AimMatrixBlendMode_BoneMask = 0x3,
			};
			// Enumerator count: 36
			// Alignment: 
			// Size: 0x4
			enum class AnimValueSource : std::uint32_t {
				// MPropertyFriendlyName "Move Heading"
				MoveHeading = 0x0,
				// MPropertyFriendlyName "Move Speed"
				MoveSpeed = 0x1,
				// MPropertyFriendlyName "Forward Speed"
				ForwardSpeed = 0x2,
				// MPropertyFriendlyName "Strafe Speed"
				StrafeSpeed = 0x3,
				// MPropertyFriendlyName "Facing Heading"
				FacingHeading = 0x4,
				// MPropertyFriendlyName "Look Heading"
				LookHeading = 0x5,
				// MPropertyFriendlyName "Look Pitch"
				LookPitch = 0x6,
				// MPropertyFriendlyName "Look Distance"
				LookDistance = 0x7,
				// MPropertyFriendlyName "Parameter"
				Parameter = 0x8,
				// MPropertyFriendlyName "Waypoint Heading"
				WayPointHeading = 0x9,
				// MPropertyFriendlyName "Waypoint Distance"
				WayPointDistance = 0xa,
				// MPropertyFriendlyName "Boundary Radius"
				BoundaryRadius = 0xb,
				// MPropertyFriendlyName "Target Move Heading"
				TargetMoveHeading = 0xc,
				// MPropertyFriendlyName "Target Move Speed"
				TargetMoveSpeed = 0xd,
				// MPropertyFriendlyName "Acceleration Heading"
				AccelerationHeading = 0xe,
				// MPropertyFriendlyName "Acceleration Speed"
				AccelerationSpeed = 0xf,
				// MPropertyFriendlyName "Slope Heading"
				SlopeHeading = 0x10,
				// MPropertyFriendlyName "Slope Angle"
				SlopeAngle = 0x11,
				// MPropertyFriendlyName "Slope Pitch"
				SlopePitch = 0x12,
				// MPropertyFriendlyName "Slope Yaw"
				SlopeYaw = 0x13,
				// MPropertyFriendlyName "Goal Distance"
				GoalDistance = 0x14,
				// MPropertyFriendlyName "Acceleration Left-Right"
				AccelerationLeftRight = 0x15,
				// MPropertyFriendlyName "Acceleration Forward-Back"
				AccelerationFrontBack = 0x16,
				// MPropertyFriendlyName "Root Motion Speed"
				RootMotionSpeed = 0x17,
				// MPropertyFriendlyName "Root Motion Turn Speed"
				RootMotionTurnSpeed = 0x18,
				// MPropertyFriendlyName "Move Heading Relative to Look Heading"
				MoveHeadingRelativeToLookHeading = 0x19,
				// MPropertyFriendlyName "Max Move Speed"
				MaxMoveSpeed = 0x1a,
				// MPropertyFriendlyName "Finger Curl - Thumb"
				FingerCurl_Thumb = 0x1b,
				// MPropertyFriendlyName "Finger Curl - Index"
				FingerCurl_Index = 0x1c,
				// MPropertyFriendlyName "Finger Curl - Middle"
				FingerCurl_Middle = 0x1d,
				// MPropertyFriendlyName "Finger Curl - Ring"
				FingerCurl_Ring = 0x1e,
				// MPropertyFriendlyName "Finger Curl - Pinky"
				FingerCurl_Pinky = 0x1f,
				// MPropertyFriendlyName "Finger Splay - Thumb:Index"
				FingerSplay_Thumb_Index = 0x20,
				// MPropertyFriendlyName "Finger Splay - Index:Middle"
				FingerSplay_Index_Middle = 0x21,
				// MPropertyFriendlyName "Finger Splay - Middle:Ring"
				FingerSplay_Middle_Ring = 0x22,
				// MPropertyFriendlyName "Finger Splay - Ring:Pinky"
				FingerSplay_Ring_Pinky = 0x23,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class IKSolverType : std::uint32_t {
				// MPropertyFriendlyName "Perlin"
				// MPropertyDescription "Classic perlin 2-bone solver"
				IKSOLVER_Perlin = 0x0,
				// MPropertyFriendlyName "Two Bone"
				// MPropertyDescription "2-bone solver that does not have singularities that Perlin does, and should be used as a default starting point for 2 bone solves."
				IKSOLVER_TwoBone = 0x1,
				// MPropertyFriendlyName "FABRIK"
				// MPropertyDescription ""Forward And Backward Reaching Inverse Kinematics" solver - A solver that can handle any number of bones and works by iteratively solving for the position of each bone in the chain."
				IKSOLVER_Fabrik = 0x2,
				// MPropertyFriendlyName "Dog Leg (3-Bone)"
				// MPropertyDescription "A 3-bone solver that uses two 2-bone solves under the hood to emulate a dog leg."
				IKSOLVER_DogLeg3Bone = 0x3,
				// MPropertyFriendlyName "CCD"
				// MPropertyDescription "Cyclic Coordinate Descent solver - A solver that can handle any number of bones and works by iteratively solving for the rotation of each bone in the chain."
				IKSOLVER_CCD = 0x4,
				// MPropertySuppressEnumerator
				IKSOLVER_COUNT = 0x5,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class IkTargetType : std::uint32_t {
				// MPropertyFriendlyName "Attachment"
				IkTarget_Attachment = 0x0,
				// MPropertyFriendlyName "Bone"
				IkTarget_Bone = 0x1,
				// MPropertyFriendlyName "Parameter (Model Space)"
				IkTarget_Parameter_ModelSpace = 0x2,
				// MPropertyFriendlyName "Parameter (World Space)"
				IkTarget_Parameter_WorldSpace = 0x3,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class Blend2DMode : std::uint32_t {
				// MPropertyFriendlyName "General"
				Blend2DMode_General = 0x0,
				// MPropertyFriendlyName "Directional"
				Blend2DMode_Directional = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class VelocityMetricMode : std::uint8_t {
				// MPropertyFriendlyName "Direction Only"
				DirectionOnly = 0,
				// MPropertyFriendlyName "Magnitude Only"
				MagnitudeOnly = 1,
				// MPropertyFriendlyName "Direction and Magnitude"
				DirectionAndMagnitude = 2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ChoiceChangeMethod : std::uint32_t {
				OnReset = 0x0,
				OnCycleEnd = 0x1,
				OnResetOrCycleEnd = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class BlendKeyType : std::uint32_t {
				// MPropertyFriendlyName "User Defined Values"
				BlendKey_UserValue = 0x0,
				// MPropertyFriendlyName "Velocity"
				BlendKey_Velocity = 0x1,
				// MPropertyFriendlyName "Distance"
				BlendKey_Distance = 0x2,
				// MPropertyFriendlyName "Remaining Distance"
				BlendKey_RemainingDistance = 0x3,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class StateActionBehavior : std::uint32_t {
				STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0x0,
				STATETAGBEHAVIOR_FIRE_ON_ENTER = 0x1,
				STATETAGBEHAVIOR_FIRE_ON_EXIT = 0x2,
				STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 0x3,
			};
			// Enumerator count: 14
			// Alignment: 
			// Size: 0x4
			enum class AnimVectorSource : std::uint32_t {
				// MPropertyFriendlyName "Move Direction"
				MoveDirection = 0x0,
				// MPropertyFriendlyName "Facing Position"
				FacingPosition = 0x1,
				// MPropertyFriendlyName "Look Direction"
				LookDirection = 0x2,
				// MPropertyFriendlyName "Parameter"
				VectorParameter = 0x3,
				// MPropertyFriendlyName "Waypoint Direction"
				WayPointDirection = 0x4,
				// MPropertyFriendlyName "Acceleration"
				Acceleration = 0x5,
				// MPropertyFriendlyName "Slope Normal"
				SlopeNormal = 0x6,
				// MPropertyFriendlyName "Slope Normal World Space"
				SlopeNormal_WorldSpace = 0x7,
				// MPropertyFriendlyName "Look Target"
				LookTarget = 0x8,
				// MPropertyFriendlyName "Look Target World Space"
				LookTarget_WorldSpace = 0x9,
				// MPropertyFriendlyName "Waypoint Position"
				WayPointPosition = 0xa,
				// MPropertyFriendlyName "Goal Position"
				GoalPosition = 0xb,
				// MPropertyFriendlyName "Root Motion Velocity"
				RootMotionVelocity = 0xc,
				// MPropertyFriendlyName "Manual Target World Space"
				ManualTarget_WorldSpace = 0xd,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class ResetCycleOption : std::uint32_t {
				Beginning = 0x0,
				SameCycleAsSource = 0x1,
				InverseSourceCycle = 0x2,
				FixedValue = 0x3,
				SameTimeAsSource = 0x4,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class IKChannelMode : std::uint32_t {
				// MPropertyFriendlyName "Two Bone"
				TwoBone = 0x0,
				// MPropertyFriendlyName "Two Bone + Translate"
				TwoBone_Translate = 0x1,
				// MPropertyFriendlyName "One Bone"
				OneBone = 0x2,
				// MPropertyFriendlyName "One Bone + Translate"
				OneBone_Translate = 0x3,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class JumpCorrectionMethod : std::uint32_t {
				// MPropertyFriendlyName "Scale Animation Motion"
				ScaleMotion = 0x0,
				// MPropertyFriendlyName "Add Correction Delta"
				AddCorrectionDelta = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class FootLockSubVisualization : std::uint32_t {
				// MPropertyFriendlyName "Reachability Analysis"
				FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0x0,
				// MPropertyFriendlyName "IK Solve"
				FOOTLOCKSUBVISUALIZATION_IKSolve = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class FootPinningTimingSource : std::uint32_t {
				FootMotion = 0x0,
				Tag = 0x1,
				Parameter = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class DampingSpeedFunction : std::uint32_t {
				NoDamping = 0x0,
				Constant = 0x1,
				Spring = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class JiggleBoneSimSpace : std::uint32_t {
				// MPropertyFriendlyName "Local Space"
				SimSpace_Local = 0x0,
				// MPropertyFriendlyName "Model Space"
				SimSpace_Model = 0x1,
				// MPropertyFriendlyName "World Space"
				SimSpace_World = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class IkEndEffectorType : std::uint32_t {
				// MPropertyFriendlyName "Attachment"
				IkEndEffector_Attachment = 0x0,
				// MPropertyFriendlyName "Last Bone in Chain"
				IkEndEffector_Bone = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x2
			enum class AnimScriptType : std::uint16_t {
				ANIMSCRIPT_TYPE_INVALID = 0xffff,
				ANIMSCRIPT_FUSE_GENERAL = 0x0,
				ANIMSCRIPT_FUSE_STATEMACHINE = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class SelectorTagBehavior_t : std::uint32_t {
				// MPropertyFriendlyName "Active While Current"
				SelectorTagBehavior_OnWhileCurrent = 0x0,
				// MPropertyFriendlyName "Off When Finished"
				SelectorTagBehavior_OffWhenFinished = 0x1,
				// MPropertyFriendlyName "Off Before Finished"
				SelectorTagBehavior_OffBeforeFinished = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class HandshakeTagType_t : std::uint32_t {
				eInvalid = 0xffffffff,
				eTask = 0x0,
				eMovement = 0x1,
				eCount = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class FieldNetworkOption : std::uint32_t {
				// MPropertyFriendlyName "Auto"
				Auto = 0x0,
				// MPropertyFriendlyName "Enable Replication"
				ForceEnable = 0x1,
				// MPropertyFriendlyName "Disable Replication"
				ForceDisable = 0x2,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x1
			enum class FacingMode : std::uint8_t {
				// MPropertyFriendlyName "None"
				FacingMode_Invalid = 0,
				// MPropertyFriendlyName "Manual Direction"
				FacingMode_Manual = 1,
				// MPropertyFriendlyName "Path"
				FacingMode_Path = 2,
				// MPropertyFriendlyName "Look Target"
				FacingMode_LookTarget = 3,
				// MPropertyFriendlyName "Manual Position"
				FacingMode_ManualPosition = 4,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ChoiceMethod : std::uint32_t {
				WeightedRandom = 0x0,
				WeightedRandomNoRepeat = 0x1,
				Iterate = 0x2,
				IterateRandom = 0x3,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class BoneMaskBlendSpace : std::uint32_t {
				// MPropertyFriendlyName "Parent Space"
				BlendSpace_Parent = 0x0,
				// MPropertyFriendlyName "Model Space"
				BlendSpace_Model = 0x1,
				// MPropertyFriendlyName "Model Space, Rotation Only"
				BlendSpace_Model_RotationOnly = 0x2,
				// MPropertyFriendlyName "Model Space, Translation Only"
				BlendSpace_Model_TranslationOnly = 0x3,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class BinaryNodeChildOption : std::uint32_t {
				// MPropertyFriendlyName "Child 1"
				Child1 = 0x0,
				// MPropertyFriendlyName "Child 2"
				Child2 = 0x1,
			};
			struct FootFixedData_t {
				MEMBER(v_toe_offset, animgraphlib::FootFixedData_t, vector_aligned);
				MEMBER(v_heel_offset, animgraphlib::FootFixedData_t, vector_aligned);
				MEMBER(n_target_bone_index, animgraphlib::FootFixedData_t, int32_t);
				MEMBER(n_ankle_bone_index, animgraphlib::FootFixedData_t, int32_t);
				MEMBER(n_ikanchor_bone_index, animgraphlib::FootFixedData_t, int32_t);
				MEMBER(ik_chain_index, animgraphlib::FootFixedData_t, int32_t);
				MEMBER(fl_max_iklength, animgraphlib::FootFixedData_t, float);
				MEMBER(n_foot_index, animgraphlib::FootFixedData_t, int32_t);
				MEMBER(n_tag_index, animgraphlib::FootFixedData_t, int32_t);
				MEMBER(fl_max_rotation_left, animgraphlib::FootFixedData_t, float);
				MEMBER(fl_max_rotation_right, animgraphlib::FootFixedData_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FootFixedData_t

			struct IKSolverSettings_t {
				MEMBER(solver_type, animgraphlib::IKSolverSettings_t, animgraphlib::IKSolverType);
				MEMBER(n_num_iterations, animgraphlib::IKSolverSettings_t, int32_t);
				MEMBER(end_effector_rotation_fix_up_mode, animgraphlib::IKSolverSettings_t, animgraphlib::EIKEndEffectorRotationFixUpMode);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct IKSolverSettings_t

			struct AimMatrixOpFixedSettings_t {
				MEMBER(attachment, animgraphlib::AimMatrixOpFixedSettings_t, modellib::CAnimAttachment);
				MEMBER(damping, animgraphlib::AimMatrixOpFixedSettings_t, animgraphlib::CAnimInputDamping);
				MEMBER_ARR(pose_cache_handles, animgraphlib::AimMatrixOpFixedSettings_t, 10, animgraphlib::CPoseHandle);
				MEMBER(e_blend_mode, animgraphlib::AimMatrixOpFixedSettings_t, animgraphlib::AimMatrixBlendMode);
				MEMBER(fl_max_yaw_angle, animgraphlib::AimMatrixOpFixedSettings_t, float);
				MEMBER(fl_max_pitch_angle, animgraphlib::AimMatrixOpFixedSettings_t, float);
				MEMBER(n_sequence_max_frame, animgraphlib::AimMatrixOpFixedSettings_t, int32_t);
				MEMBER(n_bone_mask_index, animgraphlib::AimMatrixOpFixedSettings_t, int32_t);
				MEMBER(b_target_is_position, animgraphlib::AimMatrixOpFixedSettings_t, bool);
				MEMBER(b_use_bias_and_clamp, animgraphlib::AimMatrixOpFixedSettings_t, bool);
				MEMBER(fl_bias_and_clamp_yaw_offset, animgraphlib::AimMatrixOpFixedSettings_t, float);
				MEMBER(fl_bias_and_clamp_pitch_offset, animgraphlib::AimMatrixOpFixedSettings_t, float);
				MEMBER(bias_and_clamp_blend_curve, animgraphlib::AimMatrixOpFixedSettings_t, animgraphlib::CBlendCurve);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct AimMatrixOpFixedSettings_t

			class CMotionSearchDB {
				MEMBER(root_node, animgraphlib::CMotionSearchDB, animgraphlib::CMotionSearchNode);
				MEMBER(residual_quantizer, animgraphlib::CMotionSearchDB, animgraphlib::CProductQuantizer);
				MEMBER(code_indices, animgraphlib::CMotionSearchDB, cutl_vector<animgraphlib::MotionDBIndex>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMotionSearchDB

			struct IKTargetSettings_t {
				MEMBER(target_source, animgraphlib::IKTargetSettings_t, animgraphlib::IKTargetSource);
				MEMBER(bone, animgraphlib::IKTargetSettings_t, animgraphlib::IKBoneNameAndIndex_t);
				MEMBER(animgraph_parameter_name_position, animgraphlib::IKTargetSettings_t, modellib::AnimParamID);
				MEMBER(animgraph_parameter_name_orientation, animgraphlib::IKTargetSettings_t, modellib::AnimParamID);
				MEMBER(target_coord_system, animgraphlib::IKTargetSettings_t, animgraphlib::IKTargetCoordinateSystem);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct IKTargetSettings_t

			struct ParamSpan_t {
				MEMBER(samples, animgraphlib::ParamSpan_t, cutl_vector<animgraphlib::ParamSpanSample_t>);
				MEMBER(h_param, animgraphlib::ParamSpan_t, animgraphlib::CAnimParamHandle);
				MEMBER(e_param_type, animgraphlib::ParamSpan_t, animationsystem::AnimParamType_t);
				MEMBER(fl_start_cycle, animgraphlib::ParamSpan_t, float);
				MEMBER(fl_end_cycle, animgraphlib::ParamSpan_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ParamSpan_t

			class CMotionNode {
				MEMBER(name, animgraphlib::CMotionNode, cutl_string);
				MEMBER(id, animgraphlib::CMotionNode, modellib::AnimNodeID);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMotionNode

			class CMotionNodeBlend1D : public animgraphlib::CMotionNode {
				MEMBER(blend_items, animgraphlib::CMotionNodeBlend1D, cutl_vector<animgraphlib::MotionBlendItem>);
				MEMBER(n_param_index, animgraphlib::CMotionNodeBlend1D, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMotionNodeBlend1D

			class CMotionNodeSequence : public animgraphlib::CMotionNode {
				MEMBER(tags, animgraphlib::CMotionNodeSequence, cutl_vector<animgraphlib::TagSpan_t>);
				MEMBER(h_sequence, animgraphlib::CMotionNodeSequence, animationsystem::HSequence);
				MEMBER(fl_playback_speed, animgraphlib::CMotionNodeSequence, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMotionNodeSequence

			class CAnimUpdateSharedData {
				MEMBER(nodes, animgraphlib::CAnimUpdateSharedData, cutl_vector<CSmartPtr<animgraphlib::CAnimUpdateNodeBase>>);
				MEMBER(node_index_map, animgraphlib::CAnimUpdateSharedData, CUtlHashtable<animgraphlib::CAnimNodePath,int32_t>);
				MEMBER(components, animgraphlib::CAnimUpdateSharedData, cutl_vector<CSmartPtr<animgraphlib::CAnimComponentUpdater>>);
				MEMBER(p_param_list_updater, animgraphlib::CAnimUpdateSharedData, CSmartPtr<animgraphlib::CAnimParameterManagerUpdater>);
				MEMBER(p_tag_manager_updater, animgraphlib::CAnimUpdateSharedData, CSmartPtr<animgraphlib::CAnimTagManagerUpdater>);
				MEMBER(script_manager, animgraphlib::CAnimUpdateSharedData, CSmartPtr<animgraphlib::CAnimScriptManager>);
				MEMBER(settings, animgraphlib::CAnimUpdateSharedData, animgraphlib::CAnimGraphSettingsManager);
				MEMBER(p_static_pose_cache, animgraphlib::CAnimUpdateSharedData, CSmartPtr<animgraphlib::CStaticPoseCacheBuilder>);
				MEMBER(p_skeleton, animgraphlib::CAnimUpdateSharedData, CSmartPtr<modellib::CAnimSkeleton>);
				MEMBER(root_node_path, animgraphlib::CAnimUpdateSharedData, animgraphlib::CAnimNodePath);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimUpdateSharedData

			struct SolveIKChainPoseOpFixedSettings_t {
				MEMBER(chains_to_solve_data, animgraphlib::SolveIKChainPoseOpFixedSettings_t, cutl_vector<animgraphlib::ChainToSolveData_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SolveIKChainPoseOpFixedSettings_t

			class CPoseHandle {
				MEMBER(n_index, animgraphlib::CPoseHandle, uint16_t);
				MEMBER(e_type, animgraphlib::CPoseHandle, animgraphlib::PoseType_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPoseHandle

			struct JiggleBoneSettingsList_t {
				MEMBER(bone_settings, animgraphlib::JiggleBoneSettingsList_t, cutl_vector<animgraphlib::JiggleBoneSettings_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct JiggleBoneSettingsList_t

			class CAnimMotorUpdaterBase {
				MEMBER(name, animgraphlib::CAnimMotorUpdaterBase, cutl_string);
				MEMBER(b_default, animgraphlib::CAnimMotorUpdaterBase, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimMotorUpdaterBase

			class CPlayerInputAnimMotorUpdater : public animgraphlib::CAnimMotorUpdaterBase {
				MEMBER(sample_times, animgraphlib::CPlayerInputAnimMotorUpdater, cutl_vector<float>);
				MEMBER(fl_spring_constant, animgraphlib::CPlayerInputAnimMotorUpdater, float);
				MEMBER(fl_anticipation_distance, animgraphlib::CPlayerInputAnimMotorUpdater, float);
				MEMBER(h_anticipation_pos_param, animgraphlib::CPlayerInputAnimMotorUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(h_anticipation_heading_param, animgraphlib::CPlayerInputAnimMotorUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(b_use_acceleration, animgraphlib::CPlayerInputAnimMotorUpdater, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayerInputAnimMotorUpdater

			class CPathAnimMotorUpdaterBase : public animgraphlib::CAnimMotorUpdaterBase {
				MEMBER(b_lock_to_path, animgraphlib::CPathAnimMotorUpdaterBase, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathAnimMotorUpdaterBase

			class CPathAnimMotorUpdater : public animgraphlib::CPathAnimMotorUpdaterBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathAnimMotorUpdater

			class CDampedPathAnimMotorUpdater : public animgraphlib::CPathAnimMotorUpdaterBase {
				MEMBER(fl_anticipation_time, animgraphlib::CDampedPathAnimMotorUpdater, float);
				MEMBER(fl_min_speed_scale, animgraphlib::CDampedPathAnimMotorUpdater, float);
				MEMBER(h_anticipation_pos_param, animgraphlib::CDampedPathAnimMotorUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(h_anticipation_heading_param, animgraphlib::CDampedPathAnimMotorUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(fl_spring_constant, animgraphlib::CDampedPathAnimMotorUpdater, float);
				MEMBER(fl_min_spring_tension, animgraphlib::CDampedPathAnimMotorUpdater, float);
				MEMBER(fl_max_spring_tension, animgraphlib::CDampedPathAnimMotorUpdater, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDampedPathAnimMotorUpdater

			struct ParamSpanSample_t {
				MEMBER(value, animgraphlib::ParamSpanSample_t, CAnimVariant);
				MEMBER(fl_cycle, animgraphlib::ParamSpanSample_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ParamSpanSample_t

			struct TraceSettings_t {
				MEMBER(fl_trace_height, animgraphlib::TraceSettings_t, float);
				MEMBER(fl_trace_radius, animgraphlib::TraceSettings_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct TraceSettings_t

			class CAnimParamHandleMap {
				MEMBER(list, animgraphlib::CAnimParamHandleMap, CUtlHashtable<uint16_t,int16_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimParamHandleMap

			class CAnimGraphModelBinding {
				MEMBER(model_name, animgraphlib::CAnimGraphModelBinding, cutl_string);
				MEMBER(p_shared_data, animgraphlib::CAnimGraphModelBinding, CSmartPtr<animgraphlib::CAnimUpdateSharedData>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimGraphModelBinding

			class CAnimGraphSettingsManager {
				MEMBER(settings_groups, animgraphlib::CAnimGraphSettingsManager, cutl_vector<CSmartPtr<animgraphlib::CAnimGraphSettingsGroup>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimGraphSettingsManager

			struct LookAtOpFixedSettings_t {
				MEMBER(attachment, animgraphlib::LookAtOpFixedSettings_t, modellib::CAnimAttachment);
				MEMBER(damping, animgraphlib::LookAtOpFixedSettings_t, animgraphlib::CAnimInputDamping);
				MEMBER(bones, animgraphlib::LookAtOpFixedSettings_t, cutl_vector<animgraphlib::LookAtBone_t>);
				MEMBER(fl_yaw_limit, animgraphlib::LookAtOpFixedSettings_t, float);
				MEMBER(fl_pitch_limit, animgraphlib::LookAtOpFixedSettings_t, float);
				MEMBER(fl_hysteresis_inner_angle, animgraphlib::LookAtOpFixedSettings_t, float);
				MEMBER(fl_hysteresis_outer_angle, animgraphlib::LookAtOpFixedSettings_t, float);
				MEMBER(b_rotate_yaw_forward, animgraphlib::LookAtOpFixedSettings_t, bool);
				MEMBER(b_maintain_up_direction, animgraphlib::LookAtOpFixedSettings_t, bool);
				MEMBER(b_target_is_position, animgraphlib::LookAtOpFixedSettings_t, bool);
				MEMBER(b_use_hysteresis, animgraphlib::LookAtOpFixedSettings_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct LookAtOpFixedSettings_t

			struct ScriptInfo_t {
				MEMBER(code, animgraphlib::ScriptInfo_t, cutl_string);
				MEMBER(params_modified, animgraphlib::ScriptInfo_t, cutl_vector<animgraphlib::CAnimParamHandle>);
				MEMBER(proxy_read_params, animgraphlib::ScriptInfo_t, cutl_vector<int32_t>);
				MEMBER(proxy_write_params, animgraphlib::ScriptInfo_t, cutl_vector<int32_t>);
				MEMBER(e_script_type, animgraphlib::ScriptInfo_t, animgraphlib::AnimScriptType);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ScriptInfo_t

			struct FootPinningPoseOpFixedData_t {
				MEMBER(foot_info, animgraphlib::FootPinningPoseOpFixedData_t, cutl_vector<animgraphlib::FootFixedData_t>);
				MEMBER(fl_blend_time, animgraphlib::FootPinningPoseOpFixedData_t, float);
				MEMBER(fl_lock_break_distance, animgraphlib::FootPinningPoseOpFixedData_t, float);
				MEMBER(fl_max_leg_twist, animgraphlib::FootPinningPoseOpFixedData_t, float);
				MEMBER(n_hip_bone_index, animgraphlib::FootPinningPoseOpFixedData_t, int32_t);
				MEMBER(b_apply_leg_twist_limits, animgraphlib::FootPinningPoseOpFixedData_t, bool);
				MEMBER(b_apply_foot_rotation_limits, animgraphlib::FootPinningPoseOpFixedData_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FootPinningPoseOpFixedData_t

			class CStateActionUpdater {
				MEMBER(p_action, animgraphlib::CStateActionUpdater, CSmartPtr<animgraphlib::CAnimActionUpdater>);
				MEMBER(e_behavior, animgraphlib::CStateActionUpdater, animgraphlib::StateActionBehavior);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CStateActionUpdater

			class CAnimationGraphVisualizerPrimitiveBase {
				MEMBER(type, animgraphlib::CAnimationGraphVisualizerPrimitiveBase, animgraphlib::CAnimationGraphVisualizerPrimitiveType);
				MEMBER_ARR(owning_anim_node_paths, animgraphlib::CAnimationGraphVisualizerPrimitiveBase, 11, modellib::AnimNodeID);
				MEMBER(n_owning_anim_node_path_count, animgraphlib::CAnimationGraphVisualizerPrimitiveBase, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimationGraphVisualizerPrimitiveBase

			class CAnimationGraphVisualizerPie : public animgraphlib::CAnimationGraphVisualizerPrimitiveBase {
				MEMBER(v_ws_center, animgraphlib::CAnimationGraphVisualizerPie, vector_aligned);
				MEMBER(v_ws_start, animgraphlib::CAnimationGraphVisualizerPie, vector_aligned);
				MEMBER(v_ws_end, animgraphlib::CAnimationGraphVisualizerPie, vector_aligned);
				MEMBER(color, animgraphlib::CAnimationGraphVisualizerPie, color);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimationGraphVisualizerPie

			class CAnimationGraphVisualizerAxis : public animgraphlib::CAnimationGraphVisualizerPrimitiveBase {
				MEMBER(x_ws_transform, animgraphlib::CAnimationGraphVisualizerAxis, CTransform);
				MEMBER(fl_axis_size, animgraphlib::CAnimationGraphVisualizerAxis, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimationGraphVisualizerAxis

			class CAnimationGraphVisualizerText : public animgraphlib::CAnimationGraphVisualizerPrimitiveBase {
				MEMBER(v_ws_position, animgraphlib::CAnimationGraphVisualizerText, vector_aligned);
				MEMBER(color, animgraphlib::CAnimationGraphVisualizerText, color);
				MEMBER(text, animgraphlib::CAnimationGraphVisualizerText, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimationGraphVisualizerText

			class CAnimationGraphVisualizerSphere : public animgraphlib::CAnimationGraphVisualizerPrimitiveBase {
				MEMBER(v_ws_position, animgraphlib::CAnimationGraphVisualizerSphere, vector_aligned);
				MEMBER(fl_radius, animgraphlib::CAnimationGraphVisualizerSphere, float);
				MEMBER(color, animgraphlib::CAnimationGraphVisualizerSphere, color);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimationGraphVisualizerSphere

			class CAnimationGraphVisualizerLine : public animgraphlib::CAnimationGraphVisualizerPrimitiveBase {
				MEMBER(v_ws_position_start, animgraphlib::CAnimationGraphVisualizerLine, vector_aligned);
				MEMBER(v_ws_position_end, animgraphlib::CAnimationGraphVisualizerLine, vector_aligned);
				MEMBER(color, animgraphlib::CAnimationGraphVisualizerLine, color);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimationGraphVisualizerLine

			class CTransitionUpdateData {
				MEMBER(src_state_index, animgraphlib::CTransitionUpdateData, uint8_t);
				MEMBER(dest_state_index, animgraphlib::CTransitionUpdateData, uint8_t);
				MEMBER(n_handshake_mask_to_disable_first, animgraphlib::CTransitionUpdateData, uint8_t);
				MEMBER(b_disabled, animgraphlib::CTransitionUpdateData, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTransitionUpdateData

			class CBlendCurve {
				MEMBER(fl_control_point1, animgraphlib::CBlendCurve, float);
				MEMBER(fl_control_point2, animgraphlib::CBlendCurve, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBlendCurve

			class CAnimUpdateNodeBase {
				MEMBER(node_path, animgraphlib::CAnimUpdateNodeBase, animgraphlib::CAnimNodePath);
				MEMBER(network_mode, animgraphlib::CAnimUpdateNodeBase, animgraphlib::AnimNodeNetworkMode);
				MEMBER(name, animgraphlib::CAnimUpdateNodeBase, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimUpdateNodeBase

			class CBinaryUpdateNode : public animgraphlib::CAnimUpdateNodeBase {
				MEMBER(p_child1, animgraphlib::CBinaryUpdateNode, animgraphlib::CAnimUpdateNodeRef);
				MEMBER(p_child2, animgraphlib::CBinaryUpdateNode, animgraphlib::CAnimUpdateNodeRef);
				MEMBER(timing_behavior, animgraphlib::CBinaryUpdateNode, animgraphlib::BinaryNodeTiming);
				MEMBER(fl_timing_blend, animgraphlib::CBinaryUpdateNode, float);
				MEMBER(b_reset_child1, animgraphlib::CBinaryUpdateNode, bool);
				MEMBER(b_reset_child2, animgraphlib::CBinaryUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBinaryUpdateNode

			class CBoneMaskUpdateNode : public animgraphlib::CBinaryUpdateNode {
				MEMBER(n_weight_list_index, animgraphlib::CBoneMaskUpdateNode, int32_t);
				MEMBER(fl_root_motion_blend, animgraphlib::CBoneMaskUpdateNode, float);
				MEMBER(blend_space, animgraphlib::CBoneMaskUpdateNode, animgraphlib::BoneMaskBlendSpace);
				MEMBER(foot_motion_timing, animgraphlib::CBoneMaskUpdateNode, animgraphlib::BinaryNodeChildOption);
				MEMBER(b_use_blend_scale, animgraphlib::CBoneMaskUpdateNode, bool);
				MEMBER(blend_value_source, animgraphlib::CBoneMaskUpdateNode, animgraphlib::AnimValueSource);
				MEMBER(h_blend_parameter, animgraphlib::CBoneMaskUpdateNode, animgraphlib::CAnimParamHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBoneMaskUpdateNode

			class CSubtractUpdateNode : public animgraphlib::CBinaryUpdateNode {
				MEMBER(foot_motion_timing, animgraphlib::CSubtractUpdateNode, animgraphlib::BinaryNodeChildOption);
				MEMBER(b_apply_to_foot_motion, animgraphlib::CSubtractUpdateNode, bool);
				MEMBER(b_apply_channels_separately, animgraphlib::CSubtractUpdateNode, bool);
				MEMBER(b_use_model_space, animgraphlib::CSubtractUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSubtractUpdateNode

			class CAddUpdateNode : public animgraphlib::CBinaryUpdateNode {
				MEMBER(foot_motion_timing, animgraphlib::CAddUpdateNode, animgraphlib::BinaryNodeChildOption);
				MEMBER(b_apply_to_foot_motion, animgraphlib::CAddUpdateNode, bool);
				MEMBER(b_apply_channels_separately, animgraphlib::CAddUpdateNode, bool);
				MEMBER(b_use_model_space, animgraphlib::CAddUpdateNode, bool);
				MEMBER(b_apply_scale, animgraphlib::CAddUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAddUpdateNode

			class CLeafUpdateNode : public animgraphlib::CAnimUpdateNodeBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLeafUpdateNode

			class CDirectionalBlendUpdateNode : public animgraphlib::CLeafUpdateNode {
				MEMBER_ARR(h_sequences, animgraphlib::CDirectionalBlendUpdateNode, 8, animationsystem::HSequence);
				MEMBER(damping, animgraphlib::CDirectionalBlendUpdateNode, animgraphlib::CAnimInputDamping);
				MEMBER(blend_value_source, animgraphlib::CDirectionalBlendUpdateNode, animgraphlib::AnimValueSource);
				MEMBER(param_index, animgraphlib::CDirectionalBlendUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(playback_speed, animgraphlib::CDirectionalBlendUpdateNode, float);
				MEMBER(duration, animgraphlib::CDirectionalBlendUpdateNode, float);
				MEMBER(b_loop, animgraphlib::CDirectionalBlendUpdateNode, bool);
				MEMBER(b_lock_blend_on_reset, animgraphlib::CDirectionalBlendUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDirectionalBlendUpdateNode

			class CCycleControlClipUpdateNode : public animgraphlib::CLeafUpdateNode {
				MEMBER(tags, animgraphlib::CCycleControlClipUpdateNode, cutl_vector<animgraphlib::TagSpan_t>);
				MEMBER(h_sequence, animgraphlib::CCycleControlClipUpdateNode, animationsystem::HSequence);
				MEMBER(duration, animgraphlib::CCycleControlClipUpdateNode, float);
				MEMBER(value_source, animgraphlib::CCycleControlClipUpdateNode, animgraphlib::AnimValueSource);
				MEMBER(param_index, animgraphlib::CCycleControlClipUpdateNode, animgraphlib::CAnimParamHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCycleControlClipUpdateNode

			class CMotionMatchingUpdateNode : public animgraphlib::CLeafUpdateNode {
				MEMBER(data_set, animgraphlib::CMotionMatchingUpdateNode, animgraphlib::CMotionDataSet);
				MEMBER(metrics, animgraphlib::CMotionMatchingUpdateNode, cutl_vector<CSmartPtr<animgraphlib::CMotionMetricEvaluator>>);
				MEMBER(weights, animgraphlib::CMotionMatchingUpdateNode, cutl_vector<float>);
				MEMBER(b_search_every_tick, animgraphlib::CMotionMatchingUpdateNode, bool);
				MEMBER(fl_search_interval, animgraphlib::CMotionMatchingUpdateNode, float);
				MEMBER(b_search_when_clip_ends, animgraphlib::CMotionMatchingUpdateNode, bool);
				MEMBER(b_search_when_goal_changes, animgraphlib::CMotionMatchingUpdateNode, bool);
				MEMBER(blend_curve, animgraphlib::CMotionMatchingUpdateNode, animgraphlib::CBlendCurve);
				MEMBER(fl_sample_rate, animgraphlib::CMotionMatchingUpdateNode, float);
				MEMBER(fl_blend_time, animgraphlib::CMotionMatchingUpdateNode, float);
				MEMBER(b_lock_clip_when_waning, animgraphlib::CMotionMatchingUpdateNode, bool);
				MEMBER(fl_selection_threshold, animgraphlib::CMotionMatchingUpdateNode, float);
				MEMBER(fl_reselection_time_window, animgraphlib::CMotionMatchingUpdateNode, float);
				MEMBER(b_enable_rotation_correction, animgraphlib::CMotionMatchingUpdateNode, bool);
				MEMBER(b_goal_assist, animgraphlib::CMotionMatchingUpdateNode, bool);
				MEMBER(fl_goal_assist_distance, animgraphlib::CMotionMatchingUpdateNode, float);
				MEMBER(fl_goal_assist_tolerance, animgraphlib::CMotionMatchingUpdateNode, float);
				MEMBER(distance_scale__damping, animgraphlib::CMotionMatchingUpdateNode, animgraphlib::CAnimInputDamping);
				MEMBER(fl_distance_scale__outer_radius, animgraphlib::CMotionMatchingUpdateNode, float);
				MEMBER(fl_distance_scale__inner_radius, animgraphlib::CMotionMatchingUpdateNode, float);
				MEMBER(fl_distance_scale__max_scale, animgraphlib::CMotionMatchingUpdateNode, float);
				MEMBER(fl_distance_scale__min_scale, animgraphlib::CMotionMatchingUpdateNode, float);
				MEMBER(b_enable_distance_scaling, animgraphlib::CMotionMatchingUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMotionMatchingUpdateNode

			class CBindPoseUpdateNode : public animgraphlib::CLeafUpdateNode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBindPoseUpdateNode

			class CLeanMatrixUpdateNode : public animgraphlib::CLeafUpdateNode {
				MEMBER_ARR(frame_corners, animgraphlib::CLeanMatrixUpdateNode, 3, int32_t);
				MEMBER_ARR(poses, animgraphlib::CLeanMatrixUpdateNode, 9, animgraphlib::CPoseHandle);
				MEMBER(damping, animgraphlib::CLeanMatrixUpdateNode, animgraphlib::CAnimInputDamping);
				MEMBER(blend_source, animgraphlib::CLeanMatrixUpdateNode, animgraphlib::AnimVectorSource);
				MEMBER(param_index, animgraphlib::CLeanMatrixUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(vertical_axis, animgraphlib::CLeanMatrixUpdateNode, vector);
				MEMBER(horizontal_axis, animgraphlib::CLeanMatrixUpdateNode, vector);
				MEMBER(h_sequence, animgraphlib::CLeanMatrixUpdateNode, animationsystem::HSequence);
				MEMBER(fl_max_value, animgraphlib::CLeanMatrixUpdateNode, float);
				MEMBER(n_sequence_max_frame, animgraphlib::CLeanMatrixUpdateNode, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLeanMatrixUpdateNode

			class CSingleFrameUpdateNode : public animgraphlib::CLeafUpdateNode {
				MEMBER(actions, animgraphlib::CSingleFrameUpdateNode, cutl_vector<CSmartPtr<animgraphlib::CAnimActionUpdater>>);
				MEMBER(h_pose_cache_handle, animgraphlib::CSingleFrameUpdateNode, animgraphlib::CPoseHandle);
				MEMBER(h_sequence, animgraphlib::CSingleFrameUpdateNode, animationsystem::HSequence);
				MEMBER(fl_cycle, animgraphlib::CSingleFrameUpdateNode, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSingleFrameUpdateNode

			class CSequenceUpdateNodeBase : public animgraphlib::CLeafUpdateNode {
				MEMBER(playback_speed, animgraphlib::CSequenceUpdateNodeBase, float);
				MEMBER(b_loop, animgraphlib::CSequenceUpdateNodeBase, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSequenceUpdateNodeBase

			class CPairedSequenceUpdateNode : public animgraphlib::CSequenceUpdateNodeBase {
				MEMBER(s_paired_sequence_role, animgraphlib::CPairedSequenceUpdateNode, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPairedSequenceUpdateNode

			class CSequenceUpdateNode : public animgraphlib::CSequenceUpdateNodeBase {
				MEMBER(h_sequence, animgraphlib::CSequenceUpdateNode, animationsystem::HSequence);
				MEMBER(duration, animgraphlib::CSequenceUpdateNode, float);
				MEMBER(param_spans, animgraphlib::CSequenceUpdateNode, animgraphlib::CParamSpanUpdater);
				MEMBER(tags, animgraphlib::CSequenceUpdateNode, cutl_vector<animgraphlib::TagSpan_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSequenceUpdateNode

			class CJumpHelperUpdateNode : public animgraphlib::CSequenceUpdateNode {
				MEMBER(h_target_param, animgraphlib::CJumpHelperUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(fl_original_jump_movement, animgraphlib::CJumpHelperUpdateNode, vector);
				MEMBER(fl_original_jump_duration, animgraphlib::CJumpHelperUpdateNode, float);
				MEMBER(fl_jump_start_cycle, animgraphlib::CJumpHelperUpdateNode, float);
				MEMBER(fl_jump_end_cycle, animgraphlib::CJumpHelperUpdateNode, float);
				MEMBER(e_correction_method, animgraphlib::CJumpHelperUpdateNode, animgraphlib::JumpCorrectionMethod);
				MEMBER_ARR(b_translation_axis, animgraphlib::CJumpHelperUpdateNode, 3, bool);
				MEMBER(b_scale_speed, animgraphlib::CJumpHelperUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CJumpHelperUpdateNode

			class CInputStreamUpdateNode : public animgraphlib::CLeafUpdateNode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInputStreamUpdateNode

			class CMotionGraphUpdateNode : public animgraphlib::CLeafUpdateNode {
				MEMBER(p_motion_graph, animgraphlib::CMotionGraphUpdateNode, CSmartPtr<animgraphlib::CMotionGraph>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMotionGraphUpdateNode

			class CZeroPoseUpdateNode : public animgraphlib::CLeafUpdateNode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CZeroPoseUpdateNode

			class CStateMachineUpdateNode : public animgraphlib::CAnimUpdateNodeBase {
				MEMBER(state_machine, animgraphlib::CStateMachineUpdateNode, animgraphlib::CAnimStateMachineUpdater);
				MEMBER(state_data, animgraphlib::CStateMachineUpdateNode, cutl_vector<animgraphlib::CStateNodeStateData>);
				MEMBER(transition_data, animgraphlib::CStateMachineUpdateNode, cutl_vector<animgraphlib::CStateNodeTransitionData>);
				MEMBER(b_block_waning_tags, animgraphlib::CStateMachineUpdateNode, bool);
				MEMBER(b_lock_state_when_waning, animgraphlib::CStateMachineUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CStateMachineUpdateNode

			class CBlendUpdateNode : public animgraphlib::CAnimUpdateNodeBase {
				MEMBER(children, animgraphlib::CBlendUpdateNode, cutl_vector<animgraphlib::CAnimUpdateNodeRef>);
				MEMBER(sorted_order, animgraphlib::CBlendUpdateNode, cutl_vector<uint8_t>);
				MEMBER(target_values, animgraphlib::CBlendUpdateNode, cutl_vector<float>);
				MEMBER(blend_value_source, animgraphlib::CBlendUpdateNode, animgraphlib::AnimValueSource);
				MEMBER(param_index, animgraphlib::CBlendUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(damping, animgraphlib::CBlendUpdateNode, animgraphlib::CAnimInputDamping);
				MEMBER(blend_key_type, animgraphlib::CBlendUpdateNode, animgraphlib::BlendKeyType);
				MEMBER(b_lock_blend_on_reset, animgraphlib::CBlendUpdateNode, bool);
				MEMBER(b_sync_cycles, animgraphlib::CBlendUpdateNode, bool);
				MEMBER(b_loop, animgraphlib::CBlendUpdateNode, bool);
				MEMBER(b_lock_when_waning, animgraphlib::CBlendUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBlendUpdateNode

			class CSelectorUpdateNode : public animgraphlib::CAnimUpdateNodeBase {
				MEMBER(children, animgraphlib::CSelectorUpdateNode, cutl_vector<animgraphlib::CAnimUpdateNodeRef>);
				MEMBER(tags, animgraphlib::CSelectorUpdateNode, cutl_vector<int8_t>);
				MEMBER(blend_curve, animgraphlib::CSelectorUpdateNode, animgraphlib::CBlendCurve);
				///MEMBER(fl_blend_time, animgraphlib::CSelectorUpdateNode, CAnimValue<float>);
				MEMBER(h_parameter, animgraphlib::CSelectorUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(n_tag_index, animgraphlib::CSelectorUpdateNode, int32_t);
				MEMBER(e_tag_behavior, animgraphlib::CSelectorUpdateNode, animgraphlib::SelectorTagBehavior_t);
				MEMBER(b_reset_on_change, animgraphlib::CSelectorUpdateNode, bool);
				MEMBER(b_lock_when_waning, animgraphlib::CSelectorUpdateNode, bool);
				MEMBER(b_sync_cycles_on_change, animgraphlib::CSelectorUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSelectorUpdateNode

			class CUnaryUpdateNode : public animgraphlib::CAnimUpdateNodeBase {
				MEMBER(p_child_node, animgraphlib::CUnaryUpdateNode, animgraphlib::CAnimUpdateNodeRef);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CUnaryUpdateNode

			class CWayPointHelperUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(fl_start_cycle, animgraphlib::CWayPointHelperUpdateNode, float);
				MEMBER(fl_end_cycle, animgraphlib::CWayPointHelperUpdateNode, float);
				MEMBER(b_only_goals, animgraphlib::CWayPointHelperUpdateNode, bool);
				MEMBER(b_prevent_overshoot, animgraphlib::CWayPointHelperUpdateNode, bool);
				MEMBER(b_prevent_undershoot, animgraphlib::CWayPointHelperUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWayPointHelperUpdateNode

			class CFollowTargetUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(op_fixed_data, animgraphlib::CFollowTargetUpdateNode, animgraphlib::FollowTargetOpFixedSettings_t);
				MEMBER(h_parameter_position, animgraphlib::CFollowTargetUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(h_parameter_orientation, animgraphlib::CFollowTargetUpdateNode, animgraphlib::CAnimParamHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFollowTargetUpdateNode

			class CTargetWarpUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(h_position_parameter, animgraphlib::CTargetWarpUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(h_face_position_parameter, animgraphlib::CTargetWarpUpdateNode, animgraphlib::CAnimParamHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTargetWarpUpdateNode

			class CRagdollUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(n_weight_list_index, animgraphlib::CRagdollUpdateNode, int32_t);
				MEMBER(pose_control_method, animgraphlib::CRagdollUpdateNode, animationsystem::RagdollPoseControl);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRagdollUpdateNode

			class CFollowPathUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(fl_blend_out_time, animgraphlib::CFollowPathUpdateNode, float);
				MEMBER(b_block_non_path_movement, animgraphlib::CFollowPathUpdateNode, bool);
				MEMBER(b_stop_feet_at_goal, animgraphlib::CFollowPathUpdateNode, bool);
				MEMBER(b_scale_speed, animgraphlib::CFollowPathUpdateNode, bool);
				MEMBER(fl_scale, animgraphlib::CFollowPathUpdateNode, float);
				MEMBER(fl_min_angle, animgraphlib::CFollowPathUpdateNode, float);
				MEMBER(fl_max_angle, animgraphlib::CFollowPathUpdateNode, float);
				MEMBER(fl_speed_scale_blending, animgraphlib::CFollowPathUpdateNode, float);
				MEMBER(turn_damping, animgraphlib::CFollowPathUpdateNode, animgraphlib::CAnimInputDamping);
				MEMBER(facing_target, animgraphlib::CFollowPathUpdateNode, animgraphlib::AnimValueSource);
				MEMBER(h_param, animgraphlib::CFollowPathUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(fl_turn_to_face_offset, animgraphlib::CFollowPathUpdateNode, float);
				MEMBER(b_turn_to_face, animgraphlib::CFollowPathUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFollowPathUpdateNode

			class CTwoBoneIKUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(op_fixed_data, animgraphlib::CTwoBoneIKUpdateNode, animgraphlib::TwoBoneIKSettings_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTwoBoneIKUpdateNode

			class CMoverUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(damping, animgraphlib::CMoverUpdateNode, animgraphlib::CAnimInputDamping);
				MEMBER(facing_target, animgraphlib::CMoverUpdateNode, animgraphlib::AnimValueSource);
				MEMBER(h_move_vec_param, animgraphlib::CMoverUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(h_move_heading_param, animgraphlib::CMoverUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(h_turn_to_face_param, animgraphlib::CMoverUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(fl_turn_to_face_offset, animgraphlib::CMoverUpdateNode, float);
				MEMBER(fl_turn_to_face_limit, animgraphlib::CMoverUpdateNode, float);
				MEMBER(b_additive, animgraphlib::CMoverUpdateNode, bool);
				MEMBER(b_apply_movement, animgraphlib::CMoverUpdateNode, bool);
				MEMBER(b_orient_movement, animgraphlib::CMoverUpdateNode, bool);
				MEMBER(b_apply_rotation, animgraphlib::CMoverUpdateNode, bool);
				MEMBER(b_limit_only, animgraphlib::CMoverUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMoverUpdateNode

			class CFootStepTriggerUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(triggers, animgraphlib::CFootStepTriggerUpdateNode, cutl_vector<animgraphlib::FootStepTrigger>);
				MEMBER(fl_tolerance, animgraphlib::CFootStepTriggerUpdateNode, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootStepTriggerUpdateNode

			class CTurnHelperUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(facing_target, animgraphlib::CTurnHelperUpdateNode, animgraphlib::AnimValueSource);
				MEMBER(turn_start_time_offset, animgraphlib::CTurnHelperUpdateNode, float);
				MEMBER(turn_duration, animgraphlib::CTurnHelperUpdateNode, float);
				MEMBER(b_match_child_duration, animgraphlib::CTurnHelperUpdateNode, bool);
				MEMBER(manual_turn_offset, animgraphlib::CTurnHelperUpdateNode, float);
				MEMBER(b_use_manual_turn_offset, animgraphlib::CTurnHelperUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTurnHelperUpdateNode

			class CFollowAttachmentUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(op_fixed_data, animgraphlib::CFollowAttachmentUpdateNode, animgraphlib::FollowAttachmentSettings_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFollowAttachmentUpdateNode

			class CLookAtUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(op_fixed_settings, animgraphlib::CLookAtUpdateNode, animgraphlib::LookAtOpFixedSettings_t);
				MEMBER(target, animgraphlib::CLookAtUpdateNode, animgraphlib::AnimVectorSource);
				MEMBER(param_index, animgraphlib::CLookAtUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(weight_param_index, animgraphlib::CLookAtUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(b_reset_child, animgraphlib::CLookAtUpdateNode, bool);
				MEMBER(b_lock_when_waning, animgraphlib::CLookAtUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLookAtUpdateNode

			class CAimMatrixUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(op_fixed_settings, animgraphlib::CAimMatrixUpdateNode, animgraphlib::AimMatrixOpFixedSettings_t);
				MEMBER(target, animgraphlib::CAimMatrixUpdateNode, animgraphlib::AnimVectorSource);
				MEMBER(param_index, animgraphlib::CAimMatrixUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(h_sequence, animgraphlib::CAimMatrixUpdateNode, animationsystem::HSequence);
				MEMBER(b_reset_child, animgraphlib::CAimMatrixUpdateNode, bool);
				MEMBER(b_lock_when_waning, animgraphlib::CAimMatrixUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAimMatrixUpdateNode

			class CJiggleBoneUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(op_fixed_data, animgraphlib::CJiggleBoneUpdateNode, animgraphlib::JiggleBoneSettingsList_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CJiggleBoneUpdateNode

			class CFootLockUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(op_fixed_settings, animgraphlib::CFootLockUpdateNode, animgraphlib::FootLockPoseOpFixedSettings);
				MEMBER(foot_settings, animgraphlib::CFootLockUpdateNode, cutl_vector<animgraphlib::FootFixedSettings>);
				MEMBER(hip_shift_damping, animgraphlib::CFootLockUpdateNode, animgraphlib::CAnimInputDamping);
				MEMBER(root_height_damping, animgraphlib::CFootLockUpdateNode, animgraphlib::CAnimInputDamping);
				MEMBER(fl_stride_curve_scale, animgraphlib::CFootLockUpdateNode, float);
				MEMBER(fl_stride_curve_limit_scale, animgraphlib::CFootLockUpdateNode, float);
				MEMBER(fl_step_height_increase_scale, animgraphlib::CFootLockUpdateNode, float);
				MEMBER(fl_step_height_decrease_scale, animgraphlib::CFootLockUpdateNode, float);
				MEMBER(fl_hip_shift_scale, animgraphlib::CFootLockUpdateNode, float);
				MEMBER(fl_blend_time, animgraphlib::CFootLockUpdateNode, float);
				MEMBER(fl_max_root_height_offset, animgraphlib::CFootLockUpdateNode, float);
				MEMBER(fl_min_root_height_offset, animgraphlib::CFootLockUpdateNode, float);
				MEMBER(fl_tilt_plane_pitch_spring_strength, animgraphlib::CFootLockUpdateNode, float);
				MEMBER(fl_tilt_plane_roll_spring_strength, animgraphlib::CFootLockUpdateNode, float);
				MEMBER(b_apply_foot_rotation_limits, animgraphlib::CFootLockUpdateNode, bool);
				MEMBER(b_apply_hip_shift, animgraphlib::CFootLockUpdateNode, bool);
				MEMBER(b_modulate_step_height, animgraphlib::CFootLockUpdateNode, bool);
				MEMBER(b_reset_child, animgraphlib::CFootLockUpdateNode, bool);
				MEMBER(b_enable_vertical_curved_paths, animgraphlib::CFootLockUpdateNode, bool);
				MEMBER(b_enable_root_height_damping, animgraphlib::CFootLockUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootLockUpdateNode

			class CDirectPlaybackUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(b_finish_early, animgraphlib::CDirectPlaybackUpdateNode, bool);
				MEMBER(b_reset_on_finish, animgraphlib::CDirectPlaybackUpdateNode, bool);
				MEMBER(all_tags, animgraphlib::CDirectPlaybackUpdateNode, cutl_vector<animgraphlib::CDirectPlaybackTagData>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDirectPlaybackUpdateNode

			class CSolveIKChainUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(target_handles, animgraphlib::CSolveIKChainUpdateNode, cutl_vector<animgraphlib::CSolveIKTargetHandle_t>);
				MEMBER(op_fixed_data, animgraphlib::CSolveIKChainUpdateNode, animgraphlib::SolveIKChainPoseOpFixedSettings_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSolveIKChainUpdateNode

			class CCycleControlUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(value_source, animgraphlib::CCycleControlUpdateNode, animgraphlib::AnimValueSource);
				MEMBER(param_index, animgraphlib::CCycleControlUpdateNode, animgraphlib::CAnimParamHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCycleControlUpdateNode

			class CChoreoUpdateNode : public animgraphlib::CUnaryUpdateNode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CChoreoUpdateNode

			class CStopAtGoalUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(fl_outer_radius, animgraphlib::CStopAtGoalUpdateNode, float);
				MEMBER(fl_inner_radius, animgraphlib::CStopAtGoalUpdateNode, float);
				MEMBER(fl_max_scale, animgraphlib::CStopAtGoalUpdateNode, float);
				MEMBER(fl_min_scale, animgraphlib::CStopAtGoalUpdateNode, float);
				MEMBER(damping, animgraphlib::CStopAtGoalUpdateNode, animgraphlib::CAnimInputDamping);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CStopAtGoalUpdateNode

			class CFootPinningUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(pose_op_fixed_data, animgraphlib::CFootPinningUpdateNode, animgraphlib::FootPinningPoseOpFixedData_t);
				MEMBER(e_timing_source, animgraphlib::CFootPinningUpdateNode, animgraphlib::FootPinningTimingSource);
				MEMBER(params, animgraphlib::CFootPinningUpdateNode, cutl_vector<animgraphlib::CAnimParamHandle>);
				MEMBER(b_reset_child, animgraphlib::CFootPinningUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootPinningUpdateNode

			class CRootUpdateNode : public animgraphlib::CUnaryUpdateNode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRootUpdateNode

			class CStanceOverrideUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(foot_stance_info, animgraphlib::CStanceOverrideUpdateNode, cutl_vector<animgraphlib::StanceInfo_t>);
				MEMBER(p_stance_source_node, animgraphlib::CStanceOverrideUpdateNode, animgraphlib::CAnimUpdateNodeRef);
				MEMBER(h_parameter, animgraphlib::CStanceOverrideUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(e_mode, animgraphlib::CStanceOverrideUpdateNode, animgraphlib::StanceOverrideMode);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CStanceOverrideUpdateNode

			class CStanceScaleUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(h_param, animgraphlib::CStanceScaleUpdateNode, animgraphlib::CAnimParamHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CStanceScaleUpdateNode

			class CAimCameraUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(h_parameter_position, animgraphlib::CAimCameraUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(h_parameter_orientation, animgraphlib::CAimCameraUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(h_parameter_spine_rotation_weight, animgraphlib::CAimCameraUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(h_parameter_pelvis_offset, animgraphlib::CAimCameraUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(h_parameter_use_ik, animgraphlib::CAimCameraUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(h_parameter_camera_only, animgraphlib::CAimCameraUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(h_parameter_weapon_depenetration_distance, animgraphlib::CAimCameraUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(h_parameter_weapon_depenetration_delta, animgraphlib::CAimCameraUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(h_parameter_camera_clearance_distance, animgraphlib::CAimCameraUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(op_fixed_settings, animgraphlib::CAimCameraUpdateNode, animgraphlib::AimCameraOpFixedSettings_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAimCameraUpdateNode

			class CFootAdjustmentUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(clips, animgraphlib::CFootAdjustmentUpdateNode, cutl_vector<animationsystem::HSequence>);
				MEMBER(h_base_pose_cache_handle, animgraphlib::CFootAdjustmentUpdateNode, animgraphlib::CPoseHandle);
				MEMBER(facing_target, animgraphlib::CFootAdjustmentUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(fl_turn_time_min, animgraphlib::CFootAdjustmentUpdateNode, float);
				MEMBER(fl_turn_time_max, animgraphlib::CFootAdjustmentUpdateNode, float);
				MEMBER(fl_step_height_max, animgraphlib::CFootAdjustmentUpdateNode, float);
				MEMBER(fl_step_height_max_angle, animgraphlib::CFootAdjustmentUpdateNode, float);
				MEMBER(b_reset_child, animgraphlib::CFootAdjustmentUpdateNode, bool);
				MEMBER(b_animation_driven, animgraphlib::CFootAdjustmentUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootAdjustmentUpdateNode

			class CSpeedScaleUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(param_index, animgraphlib::CSpeedScaleUpdateNode, animgraphlib::CAnimParamHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSpeedScaleUpdateNode

			class COrientationWarpUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(h_facing_position_parameter, animgraphlib::COrientationWarpUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(turn_damping, animgraphlib::COrientationWarpUpdateNode, animgraphlib::CAnimInputDamping);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class COrientationWarpUpdateNode

			class CSlowDownOnSlopesUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(fl_slow_down_strength, animgraphlib::CSlowDownOnSlopesUpdateNode, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSlowDownOnSlopesUpdateNode

			class CHitReactUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(op_fixed_settings, animgraphlib::CHitReactUpdateNode, animgraphlib::HitReactFixedSettings_t);
				MEMBER(trigger_param, animgraphlib::CHitReactUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(hit_bone_param, animgraphlib::CHitReactUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(hit_offset_param, animgraphlib::CHitReactUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(hit_direction_param, animgraphlib::CHitReactUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(hit_strength_param, animgraphlib::CHitReactUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(fl_min_delay_between_hits, animgraphlib::CHitReactUpdateNode, float);
				MEMBER(b_reset_child, animgraphlib::CHitReactUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHitReactUpdateNode

			class CPathHelperUpdateNode : public animgraphlib::CUnaryUpdateNode {
				MEMBER(fl_stopping_radius, animgraphlib::CPathHelperUpdateNode, float);
				MEMBER(fl_stopping_speed_scale, animgraphlib::CPathHelperUpdateNode, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathHelperUpdateNode

			class CBlend2DUpdateNode : public animgraphlib::CAnimUpdateNodeBase {
				MEMBER(items, animgraphlib::CBlend2DUpdateNode, cutl_vector<animgraphlib::BlendItem_t>);
				MEMBER(tags, animgraphlib::CBlend2DUpdateNode, cutl_vector<animgraphlib::TagSpan_t>);
				MEMBER(param_spans, animgraphlib::CBlend2DUpdateNode, animgraphlib::CParamSpanUpdater);
				MEMBER(node_item_indices, animgraphlib::CBlend2DUpdateNode, cutl_vector<int32_t>);
				MEMBER(damping, animgraphlib::CBlend2DUpdateNode, animgraphlib::CAnimInputDamping);
				MEMBER(blend_source_x, animgraphlib::CBlend2DUpdateNode, animgraphlib::AnimValueSource);
				MEMBER(param_x, animgraphlib::CBlend2DUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(blend_source_y, animgraphlib::CBlend2DUpdateNode, animgraphlib::AnimValueSource);
				MEMBER(param_y, animgraphlib::CBlend2DUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(e_blend_mode, animgraphlib::CBlend2DUpdateNode, animgraphlib::Blend2DMode);
				MEMBER(playback_speed, animgraphlib::CBlend2DUpdateNode, float);
				MEMBER(b_loop, animgraphlib::CBlend2DUpdateNode, bool);
				MEMBER(b_lock_blend_on_reset, animgraphlib::CBlend2DUpdateNode, bool);
				MEMBER(b_lock_when_waning, animgraphlib::CBlend2DUpdateNode, bool);
				MEMBER(b_anim_events_and_tags_on_most_weighted_only, animgraphlib::CBlend2DUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBlend2DUpdateNode

			class CTargetSelectorUpdateNode : public animgraphlib::CAnimUpdateNodeBase {
				MEMBER(children, animgraphlib::CTargetSelectorUpdateNode, cutl_vector<animgraphlib::CAnimUpdateNodeRef>);
				MEMBER(h_position_parameter, animgraphlib::CTargetSelectorUpdateNode, animgraphlib::CAnimParamHandle);
				MEMBER(h_face_position_parameter, animgraphlib::CTargetSelectorUpdateNode, animgraphlib::CAnimParamHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTargetSelectorUpdateNode

			class CChoiceUpdateNode : public animgraphlib::CAnimUpdateNodeBase {
				MEMBER(children, animgraphlib::CChoiceUpdateNode, cutl_vector<animgraphlib::CAnimUpdateNodeRef>);
				MEMBER(weights, animgraphlib::CChoiceUpdateNode, cutl_vector<float>);
				MEMBER(blend_times, animgraphlib::CChoiceUpdateNode, cutl_vector<float>);
				MEMBER(choice_method, animgraphlib::CChoiceUpdateNode, animgraphlib::ChoiceMethod);
				MEMBER(choice_change_method, animgraphlib::CChoiceUpdateNode, animgraphlib::ChoiceChangeMethod);
				MEMBER(blend_method, animgraphlib::CChoiceUpdateNode, animgraphlib::ChoiceBlendMethod);
				MEMBER(blend_time, animgraphlib::CChoiceUpdateNode, float);
				MEMBER(b_cross_fade, animgraphlib::CChoiceUpdateNode, bool);
				MEMBER(b_reset_chosen, animgraphlib::CChoiceUpdateNode, bool);
				MEMBER(b_dont_reset_same_selection, animgraphlib::CChoiceUpdateNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CChoiceUpdateNode

			class CMotionMetricEvaluator {
				MEMBER(means, animgraphlib::CMotionMetricEvaluator, cutl_vector<float>);
				MEMBER(standard_deviations, animgraphlib::CMotionMetricEvaluator, cutl_vector<float>);
				MEMBER(fl_weight, animgraphlib::CMotionMetricEvaluator, float);
				MEMBER(n_dimension_start_index, animgraphlib::CMotionMetricEvaluator, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMotionMetricEvaluator

			class CCurrentRotationVelocityMetricEvaluator : public animgraphlib::CMotionMetricEvaluator {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCurrentRotationVelocityMetricEvaluator

			class CDistanceRemainingMetricEvaluator : public animgraphlib::CMotionMetricEvaluator {
				MEMBER(fl_max_distance, animgraphlib::CDistanceRemainingMetricEvaluator, float);
				MEMBER(fl_min_distance, animgraphlib::CDistanceRemainingMetricEvaluator, float);
				MEMBER(fl_start_goal_filter_distance, animgraphlib::CDistanceRemainingMetricEvaluator, float);
				MEMBER(fl_max_goal_overshoot_scale, animgraphlib::CDistanceRemainingMetricEvaluator, float);
				MEMBER(b_filter_fixed_min_distance, animgraphlib::CDistanceRemainingMetricEvaluator, bool);
				MEMBER(b_filter_goal_distance, animgraphlib::CDistanceRemainingMetricEvaluator, bool);
				MEMBER(b_filter_goal_overshoot, animgraphlib::CDistanceRemainingMetricEvaluator, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDistanceRemainingMetricEvaluator

			class CFutureFacingMetricEvaluator : public animgraphlib::CMotionMetricEvaluator {
				MEMBER(fl_distance, animgraphlib::CFutureFacingMetricEvaluator, float);
				MEMBER(fl_time, animgraphlib::CFutureFacingMetricEvaluator, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFutureFacingMetricEvaluator

			class CCurrentVelocityMetricEvaluator : public animgraphlib::CMotionMetricEvaluator {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCurrentVelocityMetricEvaluator

			class CFootPositionMetricEvaluator : public animgraphlib::CMotionMetricEvaluator {
				MEMBER(foot_indices, animgraphlib::CFootPositionMetricEvaluator, cutl_vector<int32_t>);
				MEMBER(b_ignore_slope, animgraphlib::CFootPositionMetricEvaluator, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootPositionMetricEvaluator

			class CPathMetricEvaluator : public animgraphlib::CMotionMetricEvaluator {
				MEMBER(path_time_samples, animgraphlib::CPathMetricEvaluator, cutl_vector<float>);
				MEMBER(fl_distance, animgraphlib::CPathMetricEvaluator, float);
				MEMBER(b_extrapolate_movement, animgraphlib::CPathMetricEvaluator, bool);
				MEMBER(fl_min_extrapolation_speed, animgraphlib::CPathMetricEvaluator, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathMetricEvaluator

			class CStepsRemainingMetricEvaluator : public animgraphlib::CMotionMetricEvaluator {
				MEMBER(foot_indices, animgraphlib::CStepsRemainingMetricEvaluator, cutl_vector<int32_t>);
				MEMBER(fl_min_steps_remaining, animgraphlib::CStepsRemainingMetricEvaluator, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CStepsRemainingMetricEvaluator

			class CBlockSelectionMetricEvaluator : public animgraphlib::CMotionMetricEvaluator {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBlockSelectionMetricEvaluator

			class CFootCycleMetricEvaluator : public animgraphlib::CMotionMetricEvaluator {
				MEMBER(foot_indices, animgraphlib::CFootCycleMetricEvaluator, cutl_vector<int32_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootCycleMetricEvaluator

			class CFutureVelocityMetricEvaluator : public animgraphlib::CMotionMetricEvaluator {
				MEMBER(fl_distance, animgraphlib::CFutureVelocityMetricEvaluator, float);
				MEMBER(fl_stopping_distance, animgraphlib::CFutureVelocityMetricEvaluator, float);
				MEMBER(fl_target_speed, animgraphlib::CFutureVelocityMetricEvaluator, float);
				MEMBER(e_mode, animgraphlib::CFutureVelocityMetricEvaluator, animgraphlib::VelocityMetricMode);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFutureVelocityMetricEvaluator

			class CBoneVelocityMetricEvaluator : public animgraphlib::CMotionMetricEvaluator {
				MEMBER(n_bone_index, animgraphlib::CBoneVelocityMetricEvaluator, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBoneVelocityMetricEvaluator

			class CTimeRemainingMetricEvaluator : public animgraphlib::CMotionMetricEvaluator {
				MEMBER(b_match_by_time_remaining, animgraphlib::CTimeRemainingMetricEvaluator, bool);
				MEMBER(fl_max_time_remaining, animgraphlib::CTimeRemainingMetricEvaluator, float);
				MEMBER(b_filter_by_time_remaining, animgraphlib::CTimeRemainingMetricEvaluator, bool);
				MEMBER(fl_min_time_remaining, animgraphlib::CTimeRemainingMetricEvaluator, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTimeRemainingMetricEvaluator

			class CBonePositionMetricEvaluator : public animgraphlib::CMotionMetricEvaluator {
				MEMBER(n_bone_index, animgraphlib::CBonePositionMetricEvaluator, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBonePositionMetricEvaluator

			class CAnimInputDamping {
				MEMBER(speed_function, animgraphlib::CAnimInputDamping, animgraphlib::DampingSpeedFunction);
				MEMBER(f_speed_scale, animgraphlib::CAnimInputDamping, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimInputDamping

			struct AimCameraOpFixedSettings_t {
				MEMBER(n_chain_index, animgraphlib::AimCameraOpFixedSettings_t, int32_t);
				MEMBER(n_camera_joint_index, animgraphlib::AimCameraOpFixedSettings_t, int32_t);
				MEMBER(n_pelvis_joint_index, animgraphlib::AimCameraOpFixedSettings_t, int32_t);
				MEMBER(n_clavicle_left_joint_index, animgraphlib::AimCameraOpFixedSettings_t, int32_t);
				MEMBER(n_clavicle_right_joint_index, animgraphlib::AimCameraOpFixedSettings_t, int32_t);
				MEMBER(n_depenetration_joint_index, animgraphlib::AimCameraOpFixedSettings_t, int32_t);
				MEMBER(prop_joints, animgraphlib::AimCameraOpFixedSettings_t, cutl_vector<int32_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct AimCameraOpFixedSettings_t

			class CAnimReplayFrame {
				MEMBER(input_data_blocks, animgraphlib::CAnimReplayFrame, cutl_vector<CUtlBinaryBlock>);
				MEMBER(instance_data, animgraphlib::CAnimReplayFrame, CUtlBinaryBlock);
				MEMBER(starting_local_to_world_transform, animgraphlib::CAnimReplayFrame, CTransform);
				MEMBER(local_to_world_transform, animgraphlib::CAnimReplayFrame, CTransform);
				MEMBER(time_stamp, animgraphlib::CAnimReplayFrame, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimReplayFrame

			class CSequenceTagSpans {
				MEMBER(s_sequence_name, animgraphlib::CSequenceTagSpans, CGlobalSymbol);
				MEMBER(tags, animgraphlib::CSequenceTagSpans, cutl_vector<animgraphlib::TagSpan_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSequenceTagSpans

			class CStateUpdateData {
				MEMBER(name, animgraphlib::CStateUpdateData, cutl_string);
				MEMBER(h_script, animgraphlib::CStateUpdateData, modellib::AnimScriptHandle);
				MEMBER(transition_indices, animgraphlib::CStateUpdateData, cutl_vector<int32_t>);
				MEMBER(actions, animgraphlib::CStateUpdateData, cutl_vector<animgraphlib::CStateActionUpdater>);
				MEMBER(state_id, animgraphlib::CStateUpdateData, modellib::AnimStateID);
				MEMBER(b_is_start_state, animgraphlib::CStateUpdateData, uint8_t);
				MEMBER(b_is_end_state, animgraphlib::CStateUpdateData, uint8_t);
				MEMBER(b_is_passthrough, animgraphlib::CStateUpdateData, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CStateUpdateData

			struct BoneDemoCaptureSettings_t {
				MEMBER(bone_name, animgraphlib::BoneDemoCaptureSettings_t, cutl_string);
				MEMBER(fl_error_spline_rotation_max, animgraphlib::BoneDemoCaptureSettings_t, float);
				MEMBER(fl_error_spline_translation_max, animgraphlib::BoneDemoCaptureSettings_t, float);
				MEMBER(fl_error_spline_scale_max, animgraphlib::BoneDemoCaptureSettings_t, float);
				MEMBER(fl_error_quantization_rotation_max, animgraphlib::BoneDemoCaptureSettings_t, float);
				MEMBER(fl_error_quantization_translation_max, animgraphlib::BoneDemoCaptureSettings_t, float);
				MEMBER(fl_error_quantization_scale_max, animgraphlib::BoneDemoCaptureSettings_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct BoneDemoCaptureSettings_t

			class CAnimParameterManagerUpdater {
				MEMBER(parameters, animgraphlib::CAnimParameterManagerUpdater, cutl_vector<CSmartPtr<animgraphlib::CAnimParameterBase>>);
				MEMBER(id_to_index_map, animgraphlib::CAnimParameterManagerUpdater, CUtlHashtable<modellib::AnimParamID,int32_t>);
				MEMBER(name_to_index_map, animgraphlib::CAnimParameterManagerUpdater, CUtlHashtable<cutl_string,int32_t>);
				MEMBER(index_to_handle, animgraphlib::CAnimParameterManagerUpdater, cutl_vector<animgraphlib::CAnimParamHandle>);
				MEMBER(auto_reset_params, animgraphlib::CAnimParameterManagerUpdater, cutl_vector<CUtlPair<animgraphlib::CAnimParamHandle,CAnimVariant>>);
				MEMBER(auto_reset_map, animgraphlib::CAnimParameterManagerUpdater, CUtlHashtable<animgraphlib::CAnimParamHandle,int16_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimParameterManagerUpdater

			class CStateNodeStateData {
				MEMBER(p_child, animgraphlib::CStateNodeStateData, animgraphlib::CAnimUpdateNodeRef);
				MEMBER(b_exclusive_root_motion, animgraphlib::CStateNodeStateData, uint8_t);
				MEMBER(b_exclusive_root_motion_first_frame, animgraphlib::CStateNodeStateData, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CStateNodeStateData

			class CDampedValueUpdateItem {
				MEMBER(damping, animgraphlib::CDampedValueUpdateItem, animgraphlib::CAnimInputDamping);
				MEMBER(h_param_in, animgraphlib::CDampedValueUpdateItem, animgraphlib::CAnimParamHandle);
				MEMBER(h_param_out, animgraphlib::CDampedValueUpdateItem, animgraphlib::CAnimParamHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDampedValueUpdateItem

			struct JiggleBoneSettings_t {
				MEMBER(n_bone_index, animgraphlib::JiggleBoneSettings_t, int32_t);
				MEMBER(fl_spring_strength, animgraphlib::JiggleBoneSettings_t, float);
				MEMBER(fl_max_time_step, animgraphlib::JiggleBoneSettings_t, float);
				MEMBER(fl_damping, animgraphlib::JiggleBoneSettings_t, float);
				MEMBER(v_bounds_max_ls, animgraphlib::JiggleBoneSettings_t, vector);
				MEMBER(v_bounds_min_ls, animgraphlib::JiggleBoneSettings_t, vector);
				MEMBER(e_sim_space, animgraphlib::JiggleBoneSettings_t, animgraphlib::JiggleBoneSimSpace);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct JiggleBoneSettings_t

			class CMotionGraphGroup {
				MEMBER(search_db, animgraphlib::CMotionGraphGroup, animgraphlib::CMotionSearchDB);
				MEMBER(motion_graphs, animgraphlib::CMotionGraphGroup, cutl_vector<CSmartPtr<animgraphlib::CMotionGraph>>);
				MEMBER(motion_graph_configs, animgraphlib::CMotionGraphGroup, cutl_vector<animgraphlib::CMotionGraphConfig>);
				MEMBER(sample_to_config, animgraphlib::CMotionGraphGroup, cutl_vector<int32_t>);
				MEMBER(h_is_active_script, animgraphlib::CMotionGraphGroup, modellib::AnimScriptHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMotionGraphGroup

			class FootStepTrigger {
				MEMBER(tags, animgraphlib::FootStepTrigger, cutl_vector<int32_t>);
				MEMBER(n_foot_index, animgraphlib::FootStepTrigger, int32_t);
				MEMBER(trigger_phase, animgraphlib::FootStepTrigger, animgraphlib::StepPhase);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class FootStepTrigger

			class CAnimUpdateNodeRef {
				MEMBER(node_index, animgraphlib::CAnimUpdateNodeRef, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimUpdateNodeRef

			class CAnimStateMachineUpdater {
				MEMBER(states, animgraphlib::CAnimStateMachineUpdater, cutl_vector<animgraphlib::CStateUpdateData>);
				MEMBER(transitions, animgraphlib::CAnimStateMachineUpdater, cutl_vector<animgraphlib::CTransitionUpdateData>);
				MEMBER(start_state_index, animgraphlib::CAnimStateMachineUpdater, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimStateMachineUpdater

			struct FollowTargetOpFixedSettings_t {
				MEMBER(bone_index, animgraphlib::FollowTargetOpFixedSettings_t, int32_t);
				MEMBER(b_bone_target, animgraphlib::FollowTargetOpFixedSettings_t, bool);
				MEMBER(bone_target_index, animgraphlib::FollowTargetOpFixedSettings_t, int32_t);
				MEMBER(b_world_coodinate_target, animgraphlib::FollowTargetOpFixedSettings_t, bool);
				MEMBER(b_match_target_orientation, animgraphlib::FollowTargetOpFixedSettings_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FollowTargetOpFixedSettings_t

			class CAnimActionUpdater {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimActionUpdater

			class CToggleComponentActionUpdater : public animgraphlib::CAnimActionUpdater {
				MEMBER(component_id, animgraphlib::CToggleComponentActionUpdater, modellib::AnimComponentID);
				MEMBER(b_set_enabled, animgraphlib::CToggleComponentActionUpdater, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CToggleComponentActionUpdater

			class CSetParameterActionUpdater : public animgraphlib::CAnimActionUpdater {
				MEMBER(h_param, animgraphlib::CSetParameterActionUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(value, animgraphlib::CSetParameterActionUpdater, CAnimVariant);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSetParameterActionUpdater

			class CEmitTagActionUpdater : public animgraphlib::CAnimActionUpdater {
				MEMBER(n_tag_index, animgraphlib::CEmitTagActionUpdater, int32_t);
				MEMBER(b_is_zero_duration, animgraphlib::CEmitTagActionUpdater, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEmitTagActionUpdater

			class CExpressionActionUpdater : public animgraphlib::CAnimActionUpdater {
				MEMBER(h_param, animgraphlib::CExpressionActionUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(e_param_type, animgraphlib::CExpressionActionUpdater, animationsystem::AnimParamType_t);
				MEMBER(h_script, animgraphlib::CExpressionActionUpdater, modellib::AnimScriptHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CExpressionActionUpdater

			class CParamSpanUpdater {
				MEMBER(spans, animgraphlib::CParamSpanUpdater, cutl_vector<animgraphlib::ParamSpan_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParamSpanUpdater

			class CDirectPlaybackTagData {
				MEMBER(sequence_name, animgraphlib::CDirectPlaybackTagData, cutl_string);
				MEMBER(tags, animgraphlib::CDirectPlaybackTagData, cutl_vector<animgraphlib::TagSpan_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDirectPlaybackTagData

			class CAnimComponentUpdater {
				MEMBER(name, animgraphlib::CAnimComponentUpdater, cutl_string);
				MEMBER(id, animgraphlib::CAnimComponentUpdater, modellib::AnimComponentID);
				MEMBER(network_mode, animgraphlib::CAnimComponentUpdater, animgraphlib::AnimNodeNetworkMode);
				MEMBER(b_start_enabled, animgraphlib::CAnimComponentUpdater, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimComponentUpdater

			class CCPPScriptComponentUpdater : public animgraphlib::CAnimComponentUpdater {
				MEMBER(scripts_to_run, animgraphlib::CCPPScriptComponentUpdater, cutl_vector<CGlobalSymbol>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCPPScriptComponentUpdater

			class CAnimScriptComponentUpdater : public animgraphlib::CAnimComponentUpdater {
				MEMBER(h_script, animgraphlib::CAnimScriptComponentUpdater, modellib::AnimScriptHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimScriptComponentUpdater

			class CSlopeComponentUpdater : public animgraphlib::CAnimComponentUpdater {
				MEMBER(fl_trace_distance, animgraphlib::CSlopeComponentUpdater, float);
				MEMBER(h_slope_angle, animgraphlib::CSlopeComponentUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(h_slope_angle_front, animgraphlib::CSlopeComponentUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(h_slope_angle_side, animgraphlib::CSlopeComponentUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(h_slope_heading, animgraphlib::CSlopeComponentUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(h_slope_normal, animgraphlib::CSlopeComponentUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(h_slope_normal__world_space, animgraphlib::CSlopeComponentUpdater, animgraphlib::CAnimParamHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSlopeComponentUpdater

			class CMovementComponentUpdater : public animgraphlib::CAnimComponentUpdater {
				MEMBER(motors, animgraphlib::CMovementComponentUpdater, cutl_vector<CSmartPtr<animgraphlib::CAnimMotorUpdaterBase>>);
				MEMBER(facing_damping, animgraphlib::CMovementComponentUpdater, animgraphlib::CAnimInputDamping);
				MEMBER(n_default_motor_index, animgraphlib::CMovementComponentUpdater, int32_t);
				MEMBER(fl_default_run_speed, animgraphlib::CMovementComponentUpdater, float);
				MEMBER(b_move_vars_disabled, animgraphlib::CMovementComponentUpdater, bool);
				MEMBER(b_network_path, animgraphlib::CMovementComponentUpdater, bool);
				MEMBER(b_network_facing, animgraphlib::CMovementComponentUpdater, bool);
				MEMBER_ARR(param_handles, animgraphlib::CMovementComponentUpdater, 30, animgraphlib::CAnimParamHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMovementComponentUpdater

			class CPairedSequenceComponentUpdater : public animgraphlib::CAnimComponentUpdater {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPairedSequenceComponentUpdater

			class CLODComponentUpdater : public animgraphlib::CAnimComponentUpdater {
				MEMBER(n_server_lod, animgraphlib::CLODComponentUpdater, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLODComponentUpdater

			class CStateMachineComponentUpdater : public animgraphlib::CAnimComponentUpdater {
				MEMBER(state_machine, animgraphlib::CStateMachineComponentUpdater, animgraphlib::CAnimStateMachineUpdater);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CStateMachineComponentUpdater

			class CRagdollComponentUpdater : public animgraphlib::CAnimComponentUpdater {
				MEMBER(ragdoll_node_paths, animgraphlib::CRagdollComponentUpdater, cutl_vector<animgraphlib::CAnimNodePath>);
				MEMBER(bone_indices, animgraphlib::CRagdollComponentUpdater, cutl_vector<int32_t>);
				MEMBER(bone_names, animgraphlib::CRagdollComponentUpdater, cutl_vector<cutl_string>);
				MEMBER(weight_lists, animgraphlib::CRagdollComponentUpdater, cutl_vector<animgraphlib::WeightList>);
				MEMBER(fl_spring_frequency_min, animgraphlib::CRagdollComponentUpdater, float);
				MEMBER(fl_spring_frequency_max, animgraphlib::CRagdollComponentUpdater, float);
				MEMBER(fl_max_stretch, animgraphlib::CRagdollComponentUpdater, float);
				MEMBER(b_solid_collision_at_zero_weight, animgraphlib::CRagdollComponentUpdater, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRagdollComponentUpdater

			class CDampedValueComponentUpdater : public animgraphlib::CAnimComponentUpdater {
				MEMBER(items, animgraphlib::CDampedValueComponentUpdater, cutl_vector<animgraphlib::CDampedValueUpdateItem>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDampedValueComponentUpdater

			class CActionComponentUpdater : public animgraphlib::CAnimComponentUpdater {
				MEMBER(actions, animgraphlib::CActionComponentUpdater, cutl_vector<CSmartPtr<animgraphlib::CAnimActionUpdater>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CActionComponentUpdater

			class CLookComponentUpdater : public animgraphlib::CAnimComponentUpdater {
				MEMBER(h_look_heading, animgraphlib::CLookComponentUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(h_look_heading_velocity, animgraphlib::CLookComponentUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(h_look_pitch, animgraphlib::CLookComponentUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(h_look_distance, animgraphlib::CLookComponentUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(h_look_direction, animgraphlib::CLookComponentUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(h_look_target, animgraphlib::CLookComponentUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(h_look_target_world_space, animgraphlib::CLookComponentUpdater, animgraphlib::CAnimParamHandle);
				MEMBER(b_network_look_target, animgraphlib::CLookComponentUpdater, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLookComponentUpdater

			class CDemoSettingsComponentUpdater : public animgraphlib::CAnimComponentUpdater {
				MEMBER(settings, animgraphlib::CDemoSettingsComponentUpdater, animgraphlib::CAnimDemoCaptureSettings);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDemoSettingsComponentUpdater

			struct BlendItem_t {
				MEMBER(tags, animgraphlib::BlendItem_t, cutl_vector<animgraphlib::TagSpan_t>);
				MEMBER(p_child, animgraphlib::BlendItem_t, animgraphlib::CAnimUpdateNodeRef);
				MEMBER(h_sequence, animgraphlib::BlendItem_t, animationsystem::HSequence);
				MEMBER(v_pos, animgraphlib::BlendItem_t, vector2d);
				MEMBER(fl_duration, animgraphlib::BlendItem_t, float);
				MEMBER(b_use_custom_duration, animgraphlib::BlendItem_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct BlendItem_t

			class CMotionDataSet {
				MEMBER(groups, animgraphlib::CMotionDataSet, cutl_vector<animgraphlib::CMotionGraphGroup>);
				MEMBER(n_dimension_count, animgraphlib::CMotionDataSet, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMotionDataSet

			struct TagSpan_t {
				MEMBER(tag_index, animgraphlib::TagSpan_t, int32_t);
				MEMBER(start_cycle, animgraphlib::TagSpan_t, float);
				MEMBER(end_cycle, animgraphlib::TagSpan_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct TagSpan_t

			struct CSolveIKTargetHandle_t {
				MEMBER(position_handle, animgraphlib::CSolveIKTargetHandle_t, animgraphlib::CAnimParamHandle);
				MEMBER(orientation_handle, animgraphlib::CSolveIKTargetHandle_t, animgraphlib::CAnimParamHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CSolveIKTargetHandle_t

			class CStaticPoseCache {
				MEMBER(poses, animgraphlib::CStaticPoseCache, cutl_vector<animgraphlib::CCachedPose>);
				MEMBER(n_bone_count, animgraphlib::CStaticPoseCache, int32_t);
				MEMBER(n_morph_count, animgraphlib::CStaticPoseCache, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CStaticPoseCache

			class CStaticPoseCacheBuilder : public animgraphlib::CStaticPoseCache {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CStaticPoseCacheBuilder

			struct IKDemoCaptureSettings_t {
				MEMBER(parent_bone_name, animgraphlib::IKDemoCaptureSettings_t, cutl_string);
				MEMBER(e_mode, animgraphlib::IKDemoCaptureSettings_t, animgraphlib::IKChannelMode);
				MEMBER(ik_chain_name, animgraphlib::IKDemoCaptureSettings_t, cutl_string);
				MEMBER(one_bone_start, animgraphlib::IKDemoCaptureSettings_t, cutl_string);
				MEMBER(one_bone_end, animgraphlib::IKDemoCaptureSettings_t, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct IKDemoCaptureSettings_t

			class MotionDBIndex {
				MEMBER(n_index, animgraphlib::MotionDBIndex, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class MotionDBIndex

			class WeightList {
				MEMBER(name, animgraphlib::WeightList, cutl_string);
				MEMBER(weights, animgraphlib::WeightList, cutl_vector<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class WeightList

			class CAnimParamHandle {
				MEMBER(type, animgraphlib::CAnimParamHandle, animationsystem::AnimParamType_t);
				MEMBER(index, animgraphlib::CAnimParamHandle, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimParamHandle

			struct ChainToSolveData_t {
				MEMBER(n_chain_index, animgraphlib::ChainToSolveData_t, int32_t);
				MEMBER(solver_settings, animgraphlib::ChainToSolveData_t, animgraphlib::IKSolverSettings_t);
				MEMBER(target_settings, animgraphlib::ChainToSolveData_t, animgraphlib::IKTargetSettings_t);
				MEMBER(debug_setting, animgraphlib::ChainToSolveData_t, animgraphlib::SolveIKChainAnimNodeDebugSetting);
				MEMBER(fl_debug_normalized_value, animgraphlib::ChainToSolveData_t, float);
				MEMBER(v_debug_offset, animgraphlib::ChainToSolveData_t, vector_aligned);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ChainToSolveData_t

			class FootLockPoseOpFixedSettings {
				MEMBER(foot_info, animgraphlib::FootLockPoseOpFixedSettings, cutl_vector<animgraphlib::FootFixedData_t>);
				MEMBER(hip_damping_settings, animgraphlib::FootLockPoseOpFixedSettings, animgraphlib::CAnimInputDamping);
				MEMBER(n_hip_bone_index, animgraphlib::FootLockPoseOpFixedSettings, int32_t);
				MEMBER(ik_solver_type, animgraphlib::FootLockPoseOpFixedSettings, animgraphlib::IKSolverType);
				MEMBER(b_apply_tilt, animgraphlib::FootLockPoseOpFixedSettings, bool);
				MEMBER(b_apply_hip_drop, animgraphlib::FootLockPoseOpFixedSettings, bool);
				MEMBER(b_always_use_fallback_hinge, animgraphlib::FootLockPoseOpFixedSettings, bool);
				MEMBER(b_apply_foot_rotation_limits, animgraphlib::FootLockPoseOpFixedSettings, bool);
				MEMBER(b_apply_leg_twist_limits, animgraphlib::FootLockPoseOpFixedSettings, bool);
				MEMBER(fl_max_foot_height, animgraphlib::FootLockPoseOpFixedSettings, float);
				MEMBER(fl_extension_scale, animgraphlib::FootLockPoseOpFixedSettings, float);
				MEMBER(fl_max_leg_twist, animgraphlib::FootLockPoseOpFixedSettings, float);
				MEMBER(b_enable_lock_breaking, animgraphlib::FootLockPoseOpFixedSettings, bool);
				MEMBER(fl_lock_break_tolerance, animgraphlib::FootLockPoseOpFixedSettings, float);
				MEMBER(fl_lock_blend_time, animgraphlib::FootLockPoseOpFixedSettings, float);
				MEMBER(b_enable_stretching, animgraphlib::FootLockPoseOpFixedSettings, bool);
				MEMBER(fl_max_stretch_amount, animgraphlib::FootLockPoseOpFixedSettings, float);
				MEMBER(fl_stretch_extension_scale, animgraphlib::FootLockPoseOpFixedSettings, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class FootLockPoseOpFixedSettings

			struct LookAtBone_t {
				MEMBER(index, animgraphlib::LookAtBone_t, int32_t);
				MEMBER(weight, animgraphlib::LookAtBone_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct LookAtBone_t

			class CAnimDemoCaptureSettings {
				MEMBER(vec_error_range_spline_rotation, animgraphlib::CAnimDemoCaptureSettings, vector2d);
				MEMBER(vec_error_range_spline_translation, animgraphlib::CAnimDemoCaptureSettings, vector2d);
				MEMBER(vec_error_range_spline_scale, animgraphlib::CAnimDemoCaptureSettings, vector2d);
				MEMBER(fl_ik_rotation__max_spline_error, animgraphlib::CAnimDemoCaptureSettings, float);
				MEMBER(fl_ik_translation__max_spline_error, animgraphlib::CAnimDemoCaptureSettings, float);
				MEMBER(vec_error_range_quantization_rotation, animgraphlib::CAnimDemoCaptureSettings, vector2d);
				MEMBER(vec_error_range_quantization_translation, animgraphlib::CAnimDemoCaptureSettings, vector2d);
				MEMBER(vec_error_range_quantization_scale, animgraphlib::CAnimDemoCaptureSettings, vector2d);
				MEMBER(fl_ik_rotation__max_quantization_error, animgraphlib::CAnimDemoCaptureSettings, float);
				MEMBER(fl_ik_translation__max_quantization_error, animgraphlib::CAnimDemoCaptureSettings, float);
				MEMBER(base_sequence, animgraphlib::CAnimDemoCaptureSettings, cutl_string);
				MEMBER(n_base_sequence_frame, animgraphlib::CAnimDemoCaptureSettings, int32_t);
				MEMBER(bone_selection_mode, animgraphlib::CAnimDemoCaptureSettings, animgraphlib::EDemoBoneSelectionMode);
				MEMBER(bones, animgraphlib::CAnimDemoCaptureSettings, cutl_vector<animgraphlib::BoneDemoCaptureSettings_t>);
				MEMBER(ik_chains, animgraphlib::CAnimDemoCaptureSettings, cutl_vector<animgraphlib::IKDemoCaptureSettings_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimDemoCaptureSettings

			class CAnimGraphSettingsGroup {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimGraphSettingsGroup

			class CAnimGraphNetworkSettings : public animgraphlib::CAnimGraphSettingsGroup {
				MEMBER(b_networking_enabled, animgraphlib::CAnimGraphNetworkSettings, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimGraphNetworkSettings

			class CProductQuantizer {
				MEMBER(sub_quantizers, animgraphlib::CProductQuantizer, cutl_vector<animgraphlib::CVectorQuantizer>);
				MEMBER(n_dimensions, animgraphlib::CProductQuantizer, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CProductQuantizer

			class CMotionGraph {
				MEMBER(param_spans, animgraphlib::CMotionGraph, animgraphlib::CParamSpanUpdater);
				MEMBER(tags, animgraphlib::CMotionGraph, cutl_vector<animgraphlib::TagSpan_t>);
				MEMBER(p_root_node, animgraphlib::CMotionGraph, CSmartPtr<animgraphlib::CMotionNode>);
				MEMBER(n_parameter_count, animgraphlib::CMotionGraph, int32_t);
				MEMBER(n_config_start_index, animgraphlib::CMotionGraph, int32_t);
				MEMBER(n_config_count, animgraphlib::CMotionGraph, int32_t);
				MEMBER(b_loop, animgraphlib::CMotionGraph, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMotionGraph

			class CEditableMotionGraph : public animgraphlib::CMotionGraph {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEditableMotionGraph

			struct HitReactFixedSettings_t {
				MEMBER(n_weight_list_index, animgraphlib::HitReactFixedSettings_t, int32_t);
				MEMBER(n_effected_bone_count, animgraphlib::HitReactFixedSettings_t, int32_t);
				MEMBER(fl_max_impact_force, animgraphlib::HitReactFixedSettings_t, float);
				MEMBER(fl_min_impact_force, animgraphlib::HitReactFixedSettings_t, float);
				MEMBER(fl_whip_impact_scale, animgraphlib::HitReactFixedSettings_t, float);
				MEMBER(fl_counter_rotation_scale, animgraphlib::HitReactFixedSettings_t, float);
				MEMBER(fl_distance_fade_scale, animgraphlib::HitReactFixedSettings_t, float);
				MEMBER(fl_propagation_scale, animgraphlib::HitReactFixedSettings_t, float);
				MEMBER(fl_whip_delay, animgraphlib::HitReactFixedSettings_t, float);
				MEMBER(fl_spring_strength, animgraphlib::HitReactFixedSettings_t, float);
				MEMBER(fl_whip_spring_strength, animgraphlib::HitReactFixedSettings_t, float);
				MEMBER(fl_max_angle_radians, animgraphlib::HitReactFixedSettings_t, float);
				MEMBER(n_hip_bone_index, animgraphlib::HitReactFixedSettings_t, int32_t);
				MEMBER(fl_hip_bone_translation_scale, animgraphlib::HitReactFixedSettings_t, float);
				MEMBER(fl_hip_dip_spring_strength, animgraphlib::HitReactFixedSettings_t, float);
				MEMBER(fl_hip_dip_impact_scale, animgraphlib::HitReactFixedSettings_t, float);
				MEMBER(fl_hip_dip_delay, animgraphlib::HitReactFixedSettings_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct HitReactFixedSettings_t

			struct IKBoneNameAndIndex_t {
				MEMBER(name, animgraphlib::IKBoneNameAndIndex_t, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct IKBoneNameAndIndex_t

			class CAnimTagBase {
				MEMBER(name, animgraphlib::CAnimTagBase, CGlobalSymbol);
				MEMBER(s_comment, animgraphlib::CAnimTagBase, cutl_string);
				MEMBER(group, animgraphlib::CAnimTagBase, CGlobalSymbol);
				MEMBER(tag_id, animgraphlib::CAnimTagBase, modellib::AnimTagID);
				MEMBER(b_is_referenced, animgraphlib::CAnimTagBase, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimTagBase

			class CMaterialAttributeAnimTag : public animgraphlib::CAnimTagBase {
				MEMBER(attribute_name, animgraphlib::CMaterialAttributeAnimTag, cutl_string);
				MEMBER(attribute_type, animgraphlib::CMaterialAttributeAnimTag, animgraphlib::MatterialAttributeTagType_t);
				MEMBER(fl_value, animgraphlib::CMaterialAttributeAnimTag, float);
				MEMBER(color, animgraphlib::CMaterialAttributeAnimTag, color);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMaterialAttributeAnimTag

			class CBodyGroupAnimTag : public animgraphlib::CAnimTagBase {
				MEMBER(n_priority, animgraphlib::CBodyGroupAnimTag, int32_t);
				MEMBER(body_group_settings, animgraphlib::CBodyGroupAnimTag, cutl_vector<animgraphlib::CBodyGroupSetting>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBodyGroupAnimTag

			class CStringAnimTag : public animgraphlib::CAnimTagBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CStringAnimTag

			class CAudioAnimTag : public animgraphlib::CAnimTagBase {
				MEMBER(clip_name, animgraphlib::CAudioAnimTag, cutl_string);
				MEMBER(attachment_name, animgraphlib::CAudioAnimTag, cutl_string);
				MEMBER(fl_volume, animgraphlib::CAudioAnimTag, float);
				MEMBER(b_stop_when_tag_ends, animgraphlib::CAudioAnimTag, bool);
				MEMBER(b_stop_when_graph_ends, animgraphlib::CAudioAnimTag, bool);
				MEMBER(b_play_on_server, animgraphlib::CAudioAnimTag, bool);
				MEMBER(b_play_on_client, animgraphlib::CAudioAnimTag, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAudioAnimTag

			class CClothSettingsAnimTag : public animgraphlib::CAnimTagBase {
				MEMBER(fl_stiffness, animgraphlib::CClothSettingsAnimTag, float);
				MEMBER(fl_ease_in, animgraphlib::CClothSettingsAnimTag, float);
				MEMBER(fl_ease_out, animgraphlib::CClothSettingsAnimTag, float);
				MEMBER(n_vertex_set, animgraphlib::CClothSettingsAnimTag, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CClothSettingsAnimTag

			class CRagdollAnimTag : public animgraphlib::CAnimTagBase {
				MEMBER(n_pose_control, animgraphlib::CRagdollAnimTag, animationsystem::AnimPoseControl);
				MEMBER(fl_frequency, animgraphlib::CRagdollAnimTag, float);
				MEMBER(fl_damping_ratio, animgraphlib::CRagdollAnimTag, float);
				MEMBER(fl_decay_duration, animgraphlib::CRagdollAnimTag, float);
				MEMBER(fl_decay_bias, animgraphlib::CRagdollAnimTag, float);
				MEMBER(b_destroy, animgraphlib::CRagdollAnimTag, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRagdollAnimTag

			class CHandshakeAnimTagBase : public animgraphlib::CAnimTagBase {
				MEMBER(b_is_disable_tag, animgraphlib::CHandshakeAnimTagBase, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHandshakeAnimTagBase

			class CTaskHandshakeAnimTag : public animgraphlib::CHandshakeAnimTagBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTaskHandshakeAnimTag

			class CMovementHandshakeAnimTag : public animgraphlib::CHandshakeAnimTagBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMovementHandshakeAnimTag

			class CFootstepLandedAnimTag : public animgraphlib::CAnimTagBase {
				MEMBER(footstep_type, animgraphlib::CFootstepLandedAnimTag, animationsystem::FootstepLandedFootSoundType_t);
				MEMBER(override_sound_name, animgraphlib::CFootstepLandedAnimTag, cutl_string);
				MEMBER(debug_anim_source_string, animgraphlib::CFootstepLandedAnimTag, cutl_string);
				MEMBER(bone_name, animgraphlib::CFootstepLandedAnimTag, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootstepLandedAnimTag

			class CParticleAnimTag : public animgraphlib::CAnimTagBase {
				MEMBER(h_particle_system, animgraphlib::CParticleAnimTag, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(particle_system_name, animgraphlib::CParticleAnimTag, cutl_string);
				MEMBER(config_name, animgraphlib::CParticleAnimTag, cutl_string);
				MEMBER(b_detach_from_owner, animgraphlib::CParticleAnimTag, bool);
				MEMBER(b_stop_when_tag_ends, animgraphlib::CParticleAnimTag, bool);
				MEMBER(b_tag_end_stop_is_instant, animgraphlib::CParticleAnimTag, bool);
				MEMBER(attachment_name, animgraphlib::CParticleAnimTag, cutl_string);
				MEMBER(attachment_type, animgraphlib::CParticleAnimTag, animationsystem::ParticleAttachment_t);
				MEMBER(attachment_cp1_name, animgraphlib::CParticleAnimTag, cutl_string);
				MEMBER(attachment_cp1_type, animgraphlib::CParticleAnimTag, animationsystem::ParticleAttachment_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleAnimTag

			class CFootFallAnimTag : public animgraphlib::CAnimTagBase {
				MEMBER(foot, animgraphlib::CFootFallAnimTag, animgraphlib::FootFallTagFoot_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootFallAnimTag

			class CTaskStatusAnimTag : public animgraphlib::CAnimTagBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTaskStatusAnimTag

			class CSequenceFinishedAnimTag : public animgraphlib::CAnimTagBase {
				MEMBER(sequence_name, animgraphlib::CSequenceFinishedAnimTag, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSequenceFinishedAnimTag

			class ConfigIndex {
				MEMBER(n_group, animgraphlib::ConfigIndex, uint16_t);
				MEMBER(n_config, animgraphlib::ConfigIndex, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class ConfigIndex

			class MotionIndex {
				MEMBER(n_group, animgraphlib::MotionIndex, uint16_t);
				MEMBER(n_motion, animgraphlib::MotionIndex, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class MotionIndex

			struct FollowAttachmentSettings_t {
				MEMBER(attachment, animgraphlib::FollowAttachmentSettings_t, modellib::CAnimAttachment);
				MEMBER(bone_index, animgraphlib::FollowAttachmentSettings_t, int32_t);
				MEMBER(b_match_translation, animgraphlib::FollowAttachmentSettings_t, bool);
				MEMBER(b_match_rotation, animgraphlib::FollowAttachmentSettings_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FollowAttachmentSettings_t

			class CAnimScriptManager {
				MEMBER(script_info, animgraphlib::CAnimScriptManager, cutl_vector<animgraphlib::ScriptInfo_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimScriptManager

			struct TwoBoneIKSettings_t {
				MEMBER(end_effector_type, animgraphlib::TwoBoneIKSettings_t, animgraphlib::IkEndEffectorType);
				MEMBER(end_effector_attachment, animgraphlib::TwoBoneIKSettings_t, modellib::CAnimAttachment);
				MEMBER(target_type, animgraphlib::TwoBoneIKSettings_t, animgraphlib::IkTargetType);
				MEMBER(target_attachment, animgraphlib::TwoBoneIKSettings_t, modellib::CAnimAttachment);
				MEMBER(target_bone_index, animgraphlib::TwoBoneIKSettings_t, int32_t);
				MEMBER(h_position_param, animgraphlib::TwoBoneIKSettings_t, animgraphlib::CAnimParamHandle);
				MEMBER(h_rotation_param, animgraphlib::TwoBoneIKSettings_t, animgraphlib::CAnimParamHandle);
				MEMBER(b_always_use_fallback_hinge, animgraphlib::TwoBoneIKSettings_t, bool);
				MEMBER(v_ls_fallback_hinge_axis, animgraphlib::TwoBoneIKSettings_t, vector_aligned);
				MEMBER(n_fixed_bone_index, animgraphlib::TwoBoneIKSettings_t, int32_t);
				MEMBER(n_middle_bone_index, animgraphlib::TwoBoneIKSettings_t, int32_t);
				MEMBER(n_end_bone_index, animgraphlib::TwoBoneIKSettings_t, int32_t);
				MEMBER(b_match_target_orientation, animgraphlib::TwoBoneIKSettings_t, bool);
				MEMBER(b_constrain_twist, animgraphlib::TwoBoneIKSettings_t, bool);
				MEMBER(fl_max_twist, animgraphlib::TwoBoneIKSettings_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct TwoBoneIKSettings_t

			class CMotionSearchNode {
				MEMBER(children, animgraphlib::CMotionSearchNode, cutl_vector<animgraphlib::CMotionSearchNode*>);
				MEMBER(quantizer, animgraphlib::CMotionSearchNode, animgraphlib::CVectorQuantizer);
				MEMBER(sample_codes, animgraphlib::CMotionSearchNode, cutl_vector<cutl_vector<animgraphlib::SampleCode>>);
				MEMBER(sample_indices, animgraphlib::CMotionSearchNode, cutl_vector<cutl_vector<int32_t>>);
				MEMBER(selectable_samples, animgraphlib::CMotionSearchNode, cutl_vector<int32_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMotionSearchNode

			class CMotionGraphConfig {
				MEMBER_ARR(param_values, animgraphlib::CMotionGraphConfig, 4, float);
				MEMBER(fl_duration, animgraphlib::CMotionGraphConfig, float);
				MEMBER(n_motion_index, animgraphlib::CMotionGraphConfig, animgraphlib::MotionIndex);
				MEMBER(n_sample_start, animgraphlib::CMotionGraphConfig, int32_t);
				MEMBER(n_sample_count, animgraphlib::CMotionGraphConfig, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMotionGraphConfig

			struct StanceInfo_t {
				MEMBER(v_position, animgraphlib::StanceInfo_t, vector);
				MEMBER(fl_direction, animgraphlib::StanceInfo_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct StanceInfo_t

			class CCachedPose {
				MEMBER(transforms, animgraphlib::CCachedPose, cutl_vector<CTransform>);
				MEMBER(morph_weights, animgraphlib::CCachedPose, cutl_vector<float>);
				MEMBER(h_sequence, animgraphlib::CCachedPose, animationsystem::HSequence);
				MEMBER(fl_cycle, animgraphlib::CCachedPose, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCachedPose

			class CVectorQuantizer {
				MEMBER(centroid_vectors, animgraphlib::CVectorQuantizer, cutl_vector<float>);
				MEMBER(n_centroids, animgraphlib::CVectorQuantizer, int32_t);
				MEMBER(n_dimensions, animgraphlib::CVectorQuantizer, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVectorQuantizer

			class SampleCode {
				MEMBER_ARR(sub_code, animgraphlib::SampleCode, 8, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class SampleCode

			class CStateNodeTransitionData {
				MEMBER(curve, animgraphlib::CStateNodeTransitionData, animgraphlib::CBlendCurve);
				///MEMBER(blend_duration, animgraphlib::CStateNodeTransitionData, CAnimValue<float>);
				///MEMBER(reset_cycle_value, animgraphlib::CStateNodeTransitionData, CAnimValue<float>);
				MEMBER(b_reset, animgraphlib::CStateNodeTransitionData, uint8_t);
				MEMBER(reset_cycle_option, animgraphlib::CStateNodeTransitionData, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CStateNodeTransitionData

			class CAnimGraphDebugReplay {
				MEMBER(anim_graph_file_name, animgraphlib::CAnimGraphDebugReplay, cutl_string);
				MEMBER(frame_list, animgraphlib::CAnimGraphDebugReplay, cutl_vector<CSmartPtr<animgraphlib::CAnimReplayFrame>>);
				MEMBER(start_index, animgraphlib::CAnimGraphDebugReplay, int32_t);
				MEMBER(write_index, animgraphlib::CAnimGraphDebugReplay, int32_t);
				MEMBER(frame_count, animgraphlib::CAnimGraphDebugReplay, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimGraphDebugReplay

			class CAnimNodePath {
				MEMBER_ARR(path, animgraphlib::CAnimNodePath, 11, modellib::AnimNodeID);
				MEMBER(n_count, animgraphlib::CAnimNodePath, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimNodePath

			class CAnimTagManagerUpdater {
				MEMBER(tags, animgraphlib::CAnimTagManagerUpdater, cutl_vector<CSmartPtr<animgraphlib::CAnimTagBase>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimTagManagerUpdater

			class MotionBlendItem {
				MEMBER(p_child, animgraphlib::MotionBlendItem, CSmartPtr<animgraphlib::CMotionNode>);
				MEMBER(fl_key_value, animgraphlib::MotionBlendItem, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class MotionBlendItem

			class CBodyGroupSetting {
				MEMBER(body_group_name, animgraphlib::CBodyGroupSetting, cutl_string);
				MEMBER(n_body_group_option, animgraphlib::CBodyGroupSetting, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBodyGroupSetting

			class CAnimParameterBase {
				MEMBER(name, animgraphlib::CAnimParameterBase, CGlobalSymbol);
				MEMBER(s_comment, animgraphlib::CAnimParameterBase, cutl_string);
				MEMBER(group, animgraphlib::CAnimParameterBase, cutl_string);
				MEMBER(id, animgraphlib::CAnimParameterBase, modellib::AnimParamID);
				MEMBER(component_name, animgraphlib::CAnimParameterBase, cutl_string);
				MEMBER(b_networking_requested, animgraphlib::CAnimParameterBase, bool);
				MEMBER(b_is_referenced, animgraphlib::CAnimParameterBase, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimParameterBase

			class CVirtualAnimParameter : public animgraphlib::CAnimParameterBase {
				MEMBER(expression_string, animgraphlib::CVirtualAnimParameter, cutl_string);
				MEMBER(e_param_type, animgraphlib::CVirtualAnimParameter, animationsystem::AnimParamType_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVirtualAnimParameter

			class CConcreteAnimParameter : public animgraphlib::CAnimParameterBase {
				MEMBER(preview_button, animgraphlib::CConcreteAnimParameter, animationsystem::AnimParamButton_t);
				MEMBER(e_network_setting, animgraphlib::CConcreteAnimParameter, animationsystem::AnimParamNetworkSetting);
				MEMBER(b_use_most_recent_value, animgraphlib::CConcreteAnimParameter, bool);
				MEMBER(b_auto_reset, animgraphlib::CConcreteAnimParameter, bool);
				MEMBER(b_game_writable, animgraphlib::CConcreteAnimParameter, bool);
				MEMBER(b_graph_writable, animgraphlib::CConcreteAnimParameter, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CConcreteAnimParameter

			class CFloatAnimParameter : public animgraphlib::CConcreteAnimParameter {
				MEMBER(f_default_value, animgraphlib::CFloatAnimParameter, float);
				MEMBER(f_min_value, animgraphlib::CFloatAnimParameter, float);
				MEMBER(f_max_value, animgraphlib::CFloatAnimParameter, float);
				MEMBER(b_interpolate, animgraphlib::CFloatAnimParameter, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFloatAnimParameter

			class CEnumAnimParameter : public animgraphlib::CConcreteAnimParameter {
				MEMBER(default_value, animgraphlib::CEnumAnimParameter, uint8_t);
				MEMBER(enum_options, animgraphlib::CEnumAnimParameter, cutl_vector<cutl_string>);
				MEMBER(vec_enum_referenced, animgraphlib::CEnumAnimParameter, cutl_vector<uint64_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnumAnimParameter

			class CBoolAnimParameter : public animgraphlib::CConcreteAnimParameter {
				MEMBER(b_default_value, animgraphlib::CBoolAnimParameter, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBoolAnimParameter

			class CSymbolAnimParameter : public animgraphlib::CConcreteAnimParameter {
				MEMBER(default_value, animgraphlib::CSymbolAnimParameter, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSymbolAnimParameter

			class CQuaternionAnimParameter : public animgraphlib::CConcreteAnimParameter {
				MEMBER(default_value, animgraphlib::CQuaternionAnimParameter, quaternion);
				MEMBER(b_interpolate, animgraphlib::CQuaternionAnimParameter, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CQuaternionAnimParameter

			class CVectorAnimParameter : public animgraphlib::CConcreteAnimParameter {
				MEMBER(default_value, animgraphlib::CVectorAnimParameter, vector);
				MEMBER(b_interpolate, animgraphlib::CVectorAnimParameter, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVectorAnimParameter

			class CIntAnimParameter : public animgraphlib::CConcreteAnimParameter {
				MEMBER(default_value, animgraphlib::CIntAnimParameter, int32_t);
				MEMBER(min_value, animgraphlib::CIntAnimParameter, int32_t);
				MEMBER(max_value, animgraphlib::CIntAnimParameter, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CIntAnimParameter

			class FootFixedSettings {
				MEMBER(trace_settings, animgraphlib::FootFixedSettings, animgraphlib::TraceSettings_t);
				MEMBER(v_foot_base_bind_pose_position_ms, animgraphlib::FootFixedSettings, vector_aligned);
				MEMBER(fl_foot_base_length, animgraphlib::FootFixedSettings, float);
				MEMBER(fl_max_rotation_left, animgraphlib::FootFixedSettings, float);
				MEMBER(fl_max_rotation_right, animgraphlib::FootFixedSettings, float);
				MEMBER(footstep_landed_tag_index, animgraphlib::FootFixedSettings, int32_t);
				MEMBER(b_enable_tracing, animgraphlib::FootFixedSettings, bool);
				MEMBER(fl_trace_angle_blend, animgraphlib::FootFixedSettings, float);
				MEMBER(n_disable_tag_index, animgraphlib::FootFixedSettings, int32_t);
				MEMBER(n_foot_index, animgraphlib::FootFixedSettings, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class FootFixedSettings

		} // namespace animgraphlib
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_animgraphlib_H
