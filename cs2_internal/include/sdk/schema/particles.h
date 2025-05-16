// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_particles_H
#define SDK_SCHEMA_particles_H

#include <cstdint>

#include "sdk/schema/particleslib.h"
#include "sdk/schema/resourcesystem.h"
#include "sdk/schema/animationsystem.h"
namespace sdk {
	namespace schema {
		namespace particles {
			class FloatInputMaterialVariable_t;
			class RenderProjectedMaterial_t;
			class IParticleCollection;
			class MaterialVariable_t;
			class ModelReference_t;
			class IParticleSystemDefinition;
			class CParticleSystemDefinition;
			class CReplicationParameters;
			class CParticleMassCalculationParameters;
			class PointDefinition_t;
			class PointDefinitionWithTimeValues_t;
			class SequenceWeightedList_t;
			class VecInputMaterialVariable_t;
			class ParticlePreviewState_t;
			class ParticleControlPointConfiguration_t;
			class CRandomNumberGeneratorParameters;
			class CPathParameters;
			class ControlPointReference_t;
			class TextureControls_t;
			class CParticleFunction;
			class CParticleFunctionConstraint;
			class C_OP_PlanarConstraint;
			class C_OP_ConstrainDistanceToUserSpecifiedPath;
			class C_OP_ShapeMatchingConstraint;
			class C_OP_CollideWithSelf;
			class C_OP_RopeSpringConstraint;
			class C_OP_WorldCollideConstraint;
			class C_OP_ConstrainDistanceToPath;
			class C_OP_CollideWithParentParticles;
			class C_OP_WorldTraceConstraint;
			class C_OP_ConstrainLineLength;
			class C_OP_SDFConstraint;
			class C_OP_BoxConstraint;
			class C_OP_SpringToVectorConstraint;
			class C_OP_ConstrainDistance;
			class CParticleFunctionInitializer;
			class C_INIT_InitVecCollection;
			class C_INIT_ModelCull;
			class C_INIT_QuantizeFloat;
			class C_INIT_SetRigidAttachment;
			class C_INIT_RandomColor;
			class C_INIT_PointList;
			class C_INIT_CreateSpiralSphere;
			class C_INIT_InitialSequenceFromModel;
			class C_INIT_RemapScalarToVector;
			class C_INIT_GlobalScale;
			class C_INIT_RadiusFromCPObject;
			class C_INIT_RemapCPtoScalar;
			class C_INIT_PositionOffsetToCP;
			class C_INIT_VelocityFromNormal;
			class C_INIT_CreateOnModel;
			class C_INIT_NormalAlignToCP;
			class C_INIT_CreateFromCPs;
			class C_INIT_PositionOffset;
			class C_INIT_PositionWarpScalar;
			class C_INIT_InitFromCPSnapshot;
			class C_INIT_CreateInEpitrochoid;
			class C_INIT_SequenceFromCP;
			class C_INIT_InitVec;
			class C_INIT_InheritVelocity;
			class C_INIT_CreateFromParentParticles;
			class C_INIT_RemapInitialTransformDirectionToRotation;
			class CGeneralRandomRotation;
			class C_INIT_RandomRotationSpeed;
			class C_INIT_RandomRotation;
			class C_INIT_RandomYaw;
			class C_INIT_ChaoticAttractor;
			class C_INIT_RandomSecondSequence;
			class C_INIT_InitFloat;
			class C_INIT_InitialVelocityFromHitbox;
			class C_INIT_CreateWithinSphereTransform;
			class C_INIT_RandomYawFlip;
			class C_INIT_RemapTransformOrientationToRotations;
			class C_INIT_RemapInitialDirectionToTransformToVector;
			class C_INIT_CreateSequentialPathV2;
			class C_INIT_CreateOnModelAtHeight;
			class C_INIT_RandomAlphaWindowThreshold;
			class C_INIT_CreateOnGrid;
			class C_INIT_ColorLitPerParticle;
			class C_INIT_CreateAlongPath;
			class C_INIT_RemapTransformToVector;
			class C_INIT_RemapInitialVisibilityScalar;
			class C_INIT_AddVectorToVector;
			class C_INIT_InitFromVectorFieldSnapshot;
			class C_INIT_DistanceCull;
			class C_INIT_RandomSequence;
			class C_INIT_AgeNoise;
			class C_INIT_RandomScalar;
			class C_INIT_PositionPlaceOnGround;
			class C_INIT_CreateWithinBox;
			class C_INIT_CreateParticleImpulse;
			class C_INIT_InheritFromParentParticles;
			class C_INIT_DistanceToNeighborCull;
			class C_INIT_VelocityFromCP;
			class C_INIT_RemapParticleCountToScalar;
			class C_INIT_RemapParticleCountToNamedModelElementScalar;
			class C_INIT_RemapParticleCountToNamedModelBodyPartScalar;
			class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar;
			class C_INIT_RemapParticleCountToNamedModelSequenceScalar;
			class C_INIT_CreationNoise;
			class C_INIT_DistanceToCPInit;
			class C_INIT_CreateFromPlaneCache;
			class C_INIT_InitFloatCollection;
			class C_INIT_RemapNamedModelElementToScalar;
			class C_INIT_RemapNamedModelBodyPartToScalar;
			class C_INIT_RemapNamedModelMeshGroupToScalar;
			class C_INIT_RemapNamedModelSequenceToScalar;
			class C_INIT_SetVectorAttributeToVectorExpression;
			class C_INIT_RandomVectorComponent;
			class C_INIT_PositionWarp;
			class C_INIT_RemapQAnglesToRotation;
			class C_INIT_RemapSpeedToScalar;
			class C_INIT_SetHitboxToModel;
			class C_INIT_RandomRadius;
			class C_INIT_RandomLifeTime;
			class C_INIT_CreatePhyllotaxis;
			class C_INIT_InitFromParentKilled;
			class C_INIT_RandomNamedModelElement;
			class C_INIT_RandomNamedModelMeshGroup;
			class C_INIT_RandomNamedModelBodyPart;
			class C_INIT_RandomNamedModelSequence;
			class C_INIT_RemapScalar;
			class C_INIT_MoveBetweenPoints;
			class C_INIT_SetAttributeToScalarExpression;
			class C_INIT_SequenceLifeTime;
			class C_INIT_CreateSequentialPath;
			class C_INIT_InitialRepulsionVelocity;
			class C_INIT_RandomAlpha;
			class C_INIT_RandomModelSequence;
			class C_INIT_InitSkinnedPositionFromCPSnapshot;
			class C_INIT_LifespanFromVelocity;
			class C_INIT_VelocityRandom;
			class C_INIT_RandomVector;
			class C_INIT_RtEnvCull;
			class C_INIT_StatusEffect;
			class C_INIT_SetHitboxToClosest;
			class C_INIT_PlaneCull;
			class C_INIT_ScaleVelocity;
			class C_INIT_StatusEffectCitadel;
			class C_INIT_NormalOffset;
			class C_INIT_RingWave;
			class C_INIT_InitialVelocityNoise;
			class C_INIT_RandomTrailLength;
			class C_INIT_Orient2DRelToCP;
			class C_INIT_VelocityRadialRandom;
			class C_INIT_OffsetVectorToVector;
			class CParticleFunctionRenderer;
			class C_OP_RenderLightBeam;
			class C_OP_RenderFlattenGrass;
			class C_OP_RenderStandardLight;
			class C_OP_RenderStatusEffectCitadel;
			class C_OP_RenderMaterialProxy;
			class C_OP_RenderProjected;
			class C_OP_RenderOmni2Light;
			class C_OP_RenderClientPhysicsImpulse;
			class C_OP_RenderTreeShake;
			class C_OP_RenderScreenShake;
			class C_OP_RenderText;
			class C_OP_RenderCables;
			class C_OP_RenderPoints;
			class C_OP_RenderLights;
			class C_OP_RenderModels;
			class C_OP_RenderStatusEffect;
			class C_OP_RenderBlobs;
			class C_OP_RenderPostProcessing;
			class C_OP_RenderClothForce;
			class C_OP_RenderGpuImplicit;
			class C_OP_RenderScreenVelocityRotate;
			class C_OP_RenderAsModels;
			class C_OP_RenderSimpleModelCollection;
			class C_OP_RenderVRHapticEvent;
			class C_OP_ClientPhysics;
			class C_OP_Callback;
			class C_OP_RenderTonemapController;
			class C_OP_RenderSound;
			class CBaseRendererSource2;
			class C_OP_RenderSprites;
			class CBaseTrailRenderer;
			class C_OP_RenderTrails;
			class C_OP_RenderRopes;
			class C_OP_RenderDeferredLight;
			class CParticleFunctionForce;
			class C_OP_ParentVortices;
			class C_OP_ForceBasedOnDistanceToPlane;
			class C_OP_CPVelocityForce;
			class C_OP_TimeVaryingForce;
			class C_OP_CurlNoiseForce;
			class C_OP_WindForce;
			class C_OP_PerParticleForce;
			class C_OP_IntraParticleForce;
			class C_OP_RandomForce;
			class C_OP_DensityForce;
			class C_OP_TurbulenceForce;
			class C_OP_SDFForce;
			class C_OP_ExternalWindForce;
			class C_OP_LocalAccelerationForce;
			class C_OP_TwistAroundAxis;
			class C_OP_ExternalGameImpulseForce;
			class C_OP_AttractToControlPoint;
			class CParticleFunctionOperator;
			class C_OP_CPOffsetToPercentageBetweenCPs;
			class C_OP_RampScalarLinear;
			class C_OP_PercentageBetweenTransformLerpCPs;
			class C_OP_RemapParticleCountToScalar;
			class C_OP_VectorNoise;
			class C_OP_RemapSpeed;
			class C_OP_MovementRigidAttachToCP;
			class C_OP_RampScalarLinearSimple;
			class C_OP_LerpToOtherAttribute;
			class C_OP_LockPoints;
			class C_OP_RadiusDecay;
			class C_OP_LerpVector;
			class C_OP_FadeIn;
			class C_OP_RemapNamedModelElementEndCap;
			class C_OP_RemapNamedModelBodyPartEndCap;
			class C_OP_RemapNamedModelSequenceEndCap;
			class C_OP_RemapNamedModelMeshGroupEndCap;
			class C_OP_MoveToHitbox;
			class C_OP_SnapshotSkinToBones;
			class C_OP_RemapDotProductToScalar;
			class C_OP_RemapControlPointOrientationToRotation;
			class C_OP_DistanceToTransform;
			class C_OP_ClampVector;
			class CGeneralSpin;
			class C_OP_Spin;
			class C_OP_SpinYaw;
			class C_OP_MaintainSequentialPath;
			class C_OP_FadeAndKill;
			class C_OP_MaxVelocity;
			class C_OP_SetAttributeToScalarExpression;
			class C_OP_RtEnvCull;
			class C_OP_RemapDirectionToCPToVector;
			class C_OP_SetChildControlPoints;
			class C_OP_PercentageBetweenTransforms;
			class C_OP_LerpScalar;
			class C_OP_CycleScalar;
			class C_OP_MovementMoveAlongSkinnedCPSnapshot;
			class C_OP_RemapDensityGradientToVectorAttribute;
			class C_OP_AlphaDecay;
			class C_OP_ColorAdjustHSL;
			class C_OP_LagCompensation;
			class C_OP_MovementMaintainOffset;
			class C_OP_LockToBone;
			class C_OP_RemapVectorComponentToScalar;
			class C_OP_Diffusion;
			class C_OP_SetFloatCollection;
			class C_OP_InheritFromParentParticlesV2;
			class C_OP_RemapCrossProductOfTwoVectorsToVector;
			class C_OP_SetCPOrientationToDirection;
			class C_OP_MovementPlaceOnGround;
			class C_OP_LockToPointList;
			class C_OP_VelocityDecay;
			class C_OP_LerpEndCapVector;
			class C_OP_DampenToCP;
			class C_OP_LerpToInitialPosition;
			class C_OP_DistanceBetweenVecs;
			class C_OP_RemapSDFGradientToVectorAttribute;
			class C_OP_Cull;
			class C_OP_NormalLock;
			class C_OP_LockToSavedSequentialPathV2;
			class C_OP_VelocityMatchingForce;
			class C_OP_DecayClampCount;
			class C_OP_SetControlPointsToModelParticles;
			class C_OP_DistanceCull;
			class C_OP_RotateVector;
			class C_OP_SetFromCPSnapshot;
			class C_OP_MovementRotateParticleAroundAxis;
			class C_OP_RemapVectortoCP;
			class C_OP_CalculateVectorAttribute;
			class C_OP_SetFloat;
			class C_OP_ModelCull;
			class C_OP_RemapTransformOrientationToYaw;
			class C_OP_RampScalarSplineSimple;
			class C_OP_FadeOut;
			class C_OP_ClampScalar;
			class C_OP_VectorFieldSnapshot;
			class C_OP_ControlpointLight;
			class C_OP_UpdateLightSource;
			class C_OP_PercentageBetweenTransformsVector;
			class C_OP_ConnectParentParticleToNearest;
			class C_OP_SDFLighting;
			class C_OP_RemapCPtoScalar;
			class C_OP_SnapshotRigidSkinToBones;
			class C_OP_SetCPtoVector;
			class C_OP_DragRelativeToPlane;
			class C_OP_RemapControlPointDirectionToVector;
			class C_OP_CylindricalDistanceToTransform;
			class C_OP_RemapTransformOrientationToRotations;
			class C_OP_EndCapTimedFreeze;
			class C_OP_RestartAfterDuration;
			class C_OP_ReinitializeScalarEndCap;
			class C_OP_InterpolateRadius;
			class C_OP_LockToSavedSequentialPath;
			class C_OP_InheritFromPeerSystem;
			class C_OP_OscillateVector;
			class C_OP_MovementSkinnedPositionFromCPSnapshot;
			class C_OP_SetCPOrientationToGroundNormal;
			class C_OP_ReadFromNeighboringParticle;
			class C_OP_SetPerChildControlPoint;
			class C_OP_ColorInterpolateRandom;
			class C_OP_SequenceFromModel;
			class C_OP_MovementLoopInsideSphere;
			class C_OP_DirectionBetweenVecsToVec;
			class C_OP_InheritFromParentParticles;
			class C_OP_FadeAndKillForTracers;
			class C_OP_RampScalarSpline;
			class C_OP_SetFloatAttributeToVectorExpression;
			class C_OP_Noise;
			class C_OP_Orient2DRelToCP;
			class C_OP_DifferencePreviousParticle;
			class C_OP_SetVec;
			class C_OP_SetVectorAttributeToVectorExpression;
			class C_OP_RemapCPtoVector;
			class C_OP_SetPerChildControlPointFromAttribute;
			class C_OP_RemapScalarEndCap;
			class C_OP_GlobalLight;
			class C_OP_RemapTransformVisibilityToVector;
			class C_OP_BasicMovement;
			class C_OP_QuantizeFloat;
			class C_OP_OscillateVectorSimple;
			class C_OP_SetUserEvent;
			class C_OP_EndCapTimedDecay;
			class C_OP_RemapScalar;
			class C_OP_RemapVelocityToVector;
			class C_OP_FadeInSimple;
			class C_OP_SetToCP;
			class C_OP_DistanceBetweenTransforms;
			class C_OP_NormalizeVector;
			class C_OP_RemapNamedModelElementOnceTimed;
			class C_OP_RemapNamedModelBodyPartOnceTimed;
			class C_OP_RemapNamedModelMeshGroupOnceTimed;
			class C_OP_RemapNamedModelSequenceOnceTimed;
			class C_OP_RemapDistanceToLineSegmentBase;
			class C_OP_RemapDistanceToLineSegmentToScalar;
			class C_OP_RemapDistanceToLineSegmentToVector;
			class C_OP_LerpEndCapScalar;
			class C_OP_DecayMaintainCount;
			class C_OP_OrientTo2dDirection;
			class CSpinUpdateBase;
			class C_OP_SpinUpdate;
			class C_OP_RemapDensityToVector;
			class C_OP_RemapParticleCountOnScalarEndCap;
			class C_OP_PlaneCull;
			class C_OP_RemapSDFDistanceToScalarAttribute;
			class C_OP_RemapScalarOnceTimed;
			class C_OP_OscillateScalarSimple;
			class C_OP_PinParticleToCP;
			class C_OP_PointVectorAtNextParticle;
			class C_OP_RemapCPVelocityToVector;
			class C_OP_ModelDampenMovement;
			class C_OP_OscillateScalar;
			class C_OP_SetControlPointsToParticle;
			class C_OP_EndCapDecay;
			class C_OP_RemapTransformVisibilityToScalar;
			class C_OP_ChladniWave;
			class C_OP_FadeOutSimple;
			class C_OP_RemapVisibilityScalar;
			class CParticleFunctionPreEmission;
			class C_OP_ForceControlPointStub;
			class C_OP_SetControlPointOrientationToCPVelocity;
			class C_OP_SelectivelyEnableChildren;
			class C_OP_HSVShiftToCP;
			class C_OP_RemapBoundingVolumetoCP;
			class C_OP_SetSimulationRate;
			class C_OP_SetControlPointRotation;
			class C_OP_RemapCPtoCP;
			class C_OP_SetControlPointToCenter;
			class C_OP_SetVariable;
			class C_OP_StopAfterCPDuration;
			class C_OP_SetControlPointToWaterSurface;
			class C_OP_SetControlPointFieldFromVectorExpression;
			class C_OP_SetControlPointToHMD;
			class C_OP_SetControlPointFieldToWater;
			class C_OP_SetControlPointPositionToRandomActiveCP;
			class C_OP_SetCPOrientationToPointAtCP;
			class C_OP_RampCPLinearRandom;
			class C_OP_DistanceBetweenCPsToCP;
			class C_OP_ChooseRandomChildrenInGroup;
			class C_OP_SetControlPointToCPVelocity;
			class C_OP_RemapModelVolumetoCP;
			class C_OP_SetRandomControlPointPosition;
			class C_OP_EnableChildrenFromParentParticleCount;
			class C_OP_SetControlPointToPlayer;
			class C_OP_SetControlPointToImpactPoint;
			class C_OP_SetControlPointOrientation;
			class C_OP_ControlPointToRadialScreenSpace;
			class C_OP_SetSingleControlPointPosition;
			class C_OP_PlayEndCapWhenFinished;
			class C_OP_QuantizeCPComponent;
			class C_OP_SetControlPointFieldToScalarExpression;
			class C_OP_SetControlPointToVectorExpression;
			class C_OP_SetParentControlPointsToChildCP;
			class C_OP_DriveCPFromGlobalSoundFloat;
			class C_OP_SetControlPointToHand;
			class C_OP_SetControlPointFromObjectScale;
			class C_OP_RepeatedTriggerChildGroup;
			class C_OP_SetControlPointPositionToTimeOfDayValue;
			class C_OP_RemapDotProductToCP;
			class C_OP_RemapAverageScalarValuetoCP;
			class C_OP_RemapExternalWindToCP;
			class C_OP_LightningSnapshotGenerator;
			class C_OP_SetControlPointPositions;
			class C_OP_RemapSpeedtoCP;
			class C_OP_SetGravityToCP;
			class C_OP_RemapAverageHitboxSpeedtoCP;
			class C_OP_RemapSDFDistanceToVectorAttribute;
			class C_OP_PositionLock;
			class C_OP_RemapTransformToVelocity;
			class C_OP_Decay;
			class C_OP_DecayOffscreen;
			class C_OP_TeleportBeam;
			class C_OP_ColorInterpolate;
			class C_OP_RemapGravityToVector;
			class CParticleFunctionEmitter;
			class C_OP_NoiseEmitter;
			class C_OP_MaintainEmitter;
			class C_OP_InstantaneousEmitter;
			class C_OP_ContinuousEmitter;
			class ParticleControlPointDriver_t;
			class ParticleChildrenInfo_t;
			class ParticlePreviewBodyGroup_t;
			class TextureGroup_t;
			class ParticleAttributeIndex_t;
			class CollisionGroupContext_t;
			class CParticleVisibilityInputs;
			// Enumerator count: 13
			// Alignment: 
			// Size: 0x4
			enum class ParticleColorBlendType_t : std::uint32_t {
				// MPropertyFriendlyName "Multiply"
				PARTICLE_COLOR_BLEND_MULTIPLY = 0x0,
				// MPropertyFriendlyName "Multiply x2"
				PARTICLE_COLOR_BLEND_MULTIPLY2X = 0x1,
				// MPropertyFriendlyName "Divide"
				PARTICLE_COLOR_BLEND_DIVIDE = 0x2,
				// MPropertyFriendlyName "Add"
				PARTICLE_COLOR_BLEND_ADD = 0x3,
				// MPropertyFriendlyName "Subtract"
				PARTICLE_COLOR_BLEND_SUBTRACT = 0x4,
				// MPropertyFriendlyName "Mod2X"
				PARTICLE_COLOR_BLEND_MOD2X = 0x5,
				// MPropertyFriendlyName "Screen"
				PARTICLE_COLOR_BLEND_SCREEN = 0x6,
				// MPropertyFriendlyName "Lighten"
				PARTICLE_COLOR_BLEND_MAX = 0x7,
				// MPropertyFriendlyName "Darken"
				PARTICLE_COLOR_BLEND_MIN = 0x8,
				// MPropertyFriendlyName "Replace"
				PARTICLE_COLOR_BLEND_REPLACE = 0x9,
				// MPropertyFriendlyName "Average"
				PARTICLE_COLOR_BLEND_AVERAGE = 0xa,
				// MPropertyFriendlyName "Negate"
				PARTICLE_COLOR_BLEND_NEGATE = 0xb,
				// MPropertyFriendlyName "Luminance"
				PARTICLE_COLOR_BLEND_LUMINANCE = 0xc,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ParticleOrientationSetMode_t : std::uint32_t {
				// MPropertyFriendlyName "Set From Velocity"
				PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0x0,
				// MPropertyFriendlyName "Set From Rotations"
				PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 0x1,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class ParticleImpulseType_t : std::uint32_t {
				// MPropertyFriendlyName "None"
				IMPULSE_TYPE_NONE = 0x0,
				// MPropertyFriendlyName "Generic"
				IMPULSE_TYPE_GENERIC = 0x1,
				// MPropertyFriendlyName "Rope"
				IMPULSE_TYPE_ROPE = 0x2,
				// MPropertyFriendlyName "Explosion"
				IMPULSE_TYPE_EXPLOSION = 0x4,
				// MPropertyFriendlyName "Underwater Explosion"
				IMPULSE_TYPE_EXPLOSION_UNDERWATER = 0x8,
				// MPropertyFriendlyName "Particle System"
				IMPULSE_TYPE_PARTICLE_SYSTEM = 0x10,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class ParticleSetMethod_t : std::uint32_t {
				// MPropertyFriendlyName "Set Value"
				PARTICLE_SET_REPLACE_VALUE = 0x0,
				// MPropertyFriendlyName "Scale Initial Value"
				PARTICLE_SET_SCALE_INITIAL_VALUE = 0x1,
				// MPropertyFriendlyName "Add to Initial Value"
				PARTICLE_SET_ADD_TO_INITIAL_VALUE = 0x2,
				// MPropertyFriendlyName "Ramp Current Value at Input Rate Per Second"
				PARTICLE_SET_RAMP_CURRENT_VALUE = 0x3,
				// MPropertyFriendlyName "Scale Current Value Raw"
				PARTICLE_SET_SCALE_CURRENT_VALUE = 0x4,
				// MPropertyFriendlyName "Add to Current Value Raw"
				PARTICLE_SET_ADD_TO_CURRENT_VALUE = 0x5,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ParticleAttrBoxFlags_t : std::uint32_t {
				// MPropertyFriendlyName "None"
				PARTICLE_ATTR_BOX_FLAGS_NONE = 0x0,
				// MPropertyFriendlyName "Water"
				PARTICLE_ATTR_BOX_FLAGS_WATER = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ParticleDepthFeatheringMode_t : std::uint32_t {
				// MPropertyFriendlyName "Off"
				PARTICLE_DEPTH_FEATHERING_OFF = 0x0,
				// MPropertyFriendlyName "On (If Possible)"
				PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
				// MPropertyFriendlyName "On (Required)"
				PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ParticleTraceMissBehavior_t : std::uint32_t {
				// MPropertyFriendlyName "Do Nothing"
				PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0x0,
				// MPropertyFriendlyName "Kill Particle"
				PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 0x1,
				// MPropertyFriendlyName "Place Particle at Trace End"
				PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ParticleVRHandChoiceList_t : std::uint32_t {
				// MPropertyFriendlyName "Left Hand"
				PARTICLE_VRHAND_LEFT = 0x0,
				// MPropertyFriendlyName "Right Hand"
				PARTICLE_VRHAND_RIGHT = 0x1,
				// MPropertyFriendlyName "Specified Via Control Point"
				PARTICLE_VRHAND_CP = 0x2,
				// MPropertyFriendlyName "Detect from CP's Object"
				PARTICLE_VRHAND_CP_OBJECT = 0x3,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class SnapshotIndexType_t : std::uint32_t {
				// MPropertyFriendlyName "Increment Index"
				SNAPSHOT_INDEX_INCREMENT = 0x0,
				// MPropertyFriendlyName "Direct Set of Index"
				SNAPSHOT_INDEX_DIRECT = 0x1,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class Detail2Combo_t : std::uint32_t {
				// MPropertyFriendlyName "Uninitialized"
				DETAIL_2_COMBO_UNINITIALIZED = 0xffffffff,
				// MPropertyFriendlyName "Off"
				DETAIL_2_COMBO_OFF = 0x0,
				// MPropertyFriendlyName "Add"
				DETAIL_2_COMBO_ADD = 0x1,
				// MPropertyFriendlyName "Add + Self Illum"
				DETAIL_2_COMBO_ADD_SELF_ILLUM = 0x2,
				// MPropertyFriendlyName "Mod2X"
				DETAIL_2_COMBO_MOD2X = 0x3,
				// MPropertyFriendlyName "Multiply"
				DETAIL_2_COMBO_MUL = 0x4,
				// MPropertyFriendlyName "Crossfade"
				DETAIL_2_COMBO_CROSSFADE = 0x5,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class MissingParentInheritBehavior_t : std::uint32_t {
				// MPropertyFriendlyName "Do Nothing"
				MISSING_PARENT_DO_NOTHING = 0xffffffff,
				// MPropertyFriendlyName "Kill Particle"
				MISSING_PARENT_KILL = 0x0,
				// MPropertyFriendlyName "Use Next Parent Particle"
				MISSING_PARENT_FIND_NEW = 0x1,
				// MPropertyFriendlyName "Use New Particle at Same Index if Possible"
				MISSING_PARENT_SAME_INDEX = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class PetGroundType_t : std::uint32_t {
				PET_GROUND_NONE = 0x0,
				PET_GROUND_GRID = 0x1,
				PET_GROUND_PLANE = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ParticleFogType_t : std::uint32_t {
				// MPropertyFriendlyName "Use Game Default"
				PARTICLE_FOG_GAME_DEFAULT = 0x0,
				// MPropertyFriendlyName "Enabled"
				PARTICLE_FOG_ENABLED = 0x1,
				// MPropertyFriendlyName "Disabled"
				PARTICLE_FOG_DISABLED = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ParticleSelection_t : std::uint32_t {
				// MPropertyFriendlyName "First/Oldest Particle"
				PARTICLE_SELECTION_FIRST = 0x0,
				// MPropertyFriendlyName "Last/Newest Particle"
				PARTICLE_SELECTION_LAST = 0x1,
				// MPropertyFriendlyName "Specified Particle Number"
				PARTICLE_SELECTION_NUMBER = 0x2,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class PFuncVisualizationType_t : std::uint32_t {
				// MPropertyFriendlyName "Visualization Sphere Wireframe"
				PFUNC_VISUALIZATION_SPHERE_WIREFRAME = 0x0,
				// MPropertyFriendlyName "Visualization Sphere Solid"
				PFUNC_VISUALIZATION_SPHERE_SOLID = 0x1,
				// MPropertyFriendlyName "Visualization Box"
				PFUNC_VISUALIZATION_BOX = 0x2,
				// MPropertyFriendlyName "Visualization Ring"
				PFUNC_VISUALIZATION_RING = 0x3,
				// MPropertyFriendlyName "Visualization Plane"
				PFUNC_VISUALIZATION_PLANE = 0x4,
				// MPropertyFriendlyName "Visualization Line"
				PFUNC_VISUALIZATION_LINE = 0x5,
				// MPropertyFriendlyName "Visualization Cylinder"
				PFUNC_VISUALIZATION_CYLINDER = 0x6,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x4
			enum class ScalarExpressionType_t : std::uint32_t {
				// MPropertyFriendlyName "Uninitialized"
				SCALAR_EXPRESSION_UNINITIALIZED = 0xffffffff,
				// MPropertyFriendlyName "Add"
				SCALAR_EXPRESSION_ADD = 0x0,
				// MPropertyFriendlyName "Subtract"
				SCALAR_EXPRESSION_SUBTRACT = 0x1,
				// MPropertyFriendlyName "Multiply"
				SCALAR_EXPRESSION_MUL = 0x2,
				// MPropertyFriendlyName "Divide"
				SCALAR_EXPRESSION_DIVIDE = 0x3,
				// MPropertyFriendlyName "Input 1"
				SCALAR_EXPRESSION_INPUT_1 = 0x4,
				// MPropertyFriendlyName "Min"
				SCALAR_EXPRESSION_MIN = 0x5,
				// MPropertyFriendlyName "Max"
				SCALAR_EXPRESSION_MAX = 0x6,
				// MPropertyFriendlyName "Mod"
				SCALAR_EXPRESSION_MOD = 0x7,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ParticleReplicationMode_t : std::uint32_t {
				// MPropertyFriendlyName "Off"
				PARTICLE_REPLICATIONMODE_NONE = 0x0,
				// MPropertyFriendlyName "Replicate for each parent particle"
				PARTICLE_REPLICATIONMODE_REPLICATE_FOR_EACH_PARENT_PARTICLE = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ParticleRotationLockType_t : std::uint32_t {
				// MPropertyFriendlyName "Don't Set"
				PARTICLE_ROTATION_LOCK_NONE = 0x0,
				// MPropertyFriendlyName "Set Rotations"
				PARTICLE_ROTATION_LOCK_ROTATIONS = 0x1,
				// MPropertyFriendlyName "Set Normal"
				PARTICLE_ROTATION_LOCK_NORMAL = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class InheritableBoolType_t : std::uint32_t {
				// MPropertyFriendlyName "Inherit from Parent"
				INHERITABLE_BOOL_INHERIT = 0x0,
				// MPropertyFriendlyName "False"
				INHERITABLE_BOOL_FALSE = 0x1,
				// MPropertyFriendlyName "True"
				INHERITABLE_BOOL_TRUE = 0x2,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class ParticlePostProcessPriorityGroup_t : std::uint32_t {
				// MPropertyFriendlyName "Level Volume"
				PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0x0,
				// MPropertyFriendlyName "Level Override"
				PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 0x1,
				// MPropertyFriendlyName "Gameplay Effect"
				PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 0x2,
				// MPropertyFriendlyName "Gameplay State Low"
				PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 0x3,
				// MPropertyFriendlyName "Gameplay State High"
				PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 0x4,
				// MPropertyFriendlyName "Global UI"
				PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 0x5,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class ParticleColorBlendMode_t : std::uint32_t {
				// MPropertyFriendlyName "Replace"
				PARTICLEBLEND_DEFAULT = 0x0,
				// MPropertyFriendlyName "Overlay"
				PARTICLEBLEND_OVERLAY = 0x1,
				// MPropertyFriendlyName "Darken"
				PARTICLEBLEND_DARKEN = 0x2,
				// MPropertyFriendlyName "Lighten"
				PARTICLEBLEND_LIGHTEN = 0x3,
				// MPropertyFriendlyName "Multiply"
				PARTICLEBLEND_MULTIPLY = 0x4,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class DetailCombo_t : std::uint32_t {
				// MPropertyFriendlyName "Off"
				DETAIL_COMBO_OFF = 0x0,
				// MPropertyFriendlyName "Add"
				DETAIL_COMBO_ADD = 0x1,
				// MPropertyFriendlyName "Add + Self Illum"
				DETAIL_COMBO_ADD_SELF_ILLUM = 0x2,
				// MPropertyFriendlyName "Mod2X"
				DETAIL_COMBO_MOD2X = 0x3,
			};
			// Enumerator count: 14
			// Alignment: 
			// Size: 0x4
			enum class SpriteCardPerParticleScale_t : std::uint32_t {
				// MPropertyFriendlyName "None"
				SPRITECARD_TEXTURE_PP_SCALE_NONE = 0x0,
				// MPropertyFriendlyName "Animation Time"
				SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_AGE = 0x1,
				// MPropertyFriendlyName "Animation Frame"
				SPRITECARD_TEXTURE_PP_SCALE_ANIMATION_FRAME = 0x2,
				// MPropertyFriendlyName "Shader Extra Data 1"
				SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA1 = 0x3,
				// MPropertyFriendlyName "Shader Extra Data 2"
				SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA2 = 0x4,
				// MPropertyFriendlyName "Alpha"
				SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_ALPHA = 0x5,
				// MPropertyFriendlyName "Radius"
				SPRITECARD_TEXTURE_PP_SCALE_SHADER_RADIUS = 0x6,
				// MPropertyFriendlyName "Roll"
				SPRITECARD_TEXTURE_PP_SCALE_ROLL = 0x7,
				// MPropertyFriendlyName "Yaw"
				SPRITECARD_TEXTURE_PP_SCALE_YAW = 0x8,
				// MPropertyFriendlyName "Pitch"
				SPRITECARD_TEXTURE_PP_SCALE_PITCH = 0x9,
				// MPropertyFriendlyName "Random 0 - 1 Value"
				SPRITECARD_TEXTURE_PP_SCALE_RANDOM = 0xa,
				// MPropertyFriendlyName "Random -1 - 1 Value"
				SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM = 0xb,
				// MPropertyFriendlyName "Random 0 - 1 x Time"
				SPRITECARD_TEXTURE_PP_SCALE_RANDOM_TIME = 0xc,
				// MPropertyFriendlyName "Random -1 - 1 x Time"
				SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM_TIME = 0xd,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class ParticleCollisionMode_t : std::uint32_t {
				// MPropertyFriendlyName "Per-Particle Trace"
				COLLISION_MODE_PER_PARTICLE_TRACE = 0x3,
				// MPropertyFriendlyName "Trace Caching"
				COLLISION_MODE_USE_NEAREST_TRACE = 0x2,
				// MPropertyFriendlyName "Per-Frame Planeset"
				COLLISION_MODE_PER_FRAME_PLANESET = 0x1,
				// MPropertyFriendlyName "Initial Trace Down"
				COLLISION_MODE_INITIAL_TRACE_DOWN = 0x0,
				// MPropertyFriendlyName "Collision Disabled"
				COLLISION_MODE_DISABLED = 0xffffffff,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class BlurFilterType_t : std::uint32_t {
				// MPropertyFriendlyName "Gaussian"
				BLURFILTER_GAUSSIAN = 0x0,
				// MPropertyFriendlyName "Box"
				BLURFILTER_BOX = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class StandardLightingAttenuationStyle_t : std::uint32_t {
				// MPropertyFriendlyName "Quadratic/Linear Bias"
				LIGHT_STYLE_OLD = 0x0,
				// MPropertyFriendlyName "Fifty Percent/Zero Percent Distance"
				LIGHT_STYLE_NEW = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ParticleParentSetMode_t : std::uint32_t {
				// MPropertyFriendlyName "Set Self and Children"
				PARTICLE_SET_PARENT_NO = 0x0,
				// MPropertyFriendlyName "Set Immediate Parent, Self, and Children"
				PARTICLE_SET_PARENT_IMMEDIATE = 0x1,
				// MPropertyFriendlyName "Set Root of Particle System Downward"
				PARTICLE_SET_PARENT_ROOT = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ParticleLightingQuality_t : std::uint32_t {
				// MPropertyFriendlyName "Per-Particle Lighting"
				PARTICLE_LIGHTING_PER_PARTICLE = 0x0,
				// MPropertyFriendlyName "Per-Vertex Lighting"
				PARTICLE_LIGHTING_PER_VERTEX = 0x1,
				// MPropertyFriendlyName "Per-Pixel Lighting"
				PARTICLE_LIGHTING_PER_PIXEL = 0xffffffff,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class ParticleControlPointAxis_t : std::uint32_t {
				// MPropertyFriendlyName "X Axis"
				PARTICLE_CP_AXIS_X = 0x0,
				// MPropertyFriendlyName "Y Axis"
				PARTICLE_CP_AXIS_Y = 0x1,
				// MPropertyFriendlyName "Z Axis"
				PARTICLE_CP_AXIS_Z = 0x2,
				// MPropertyFriendlyName "Negative X Axis"
				PARTICLE_CP_AXIS_NEGATIVE_X = 0x3,
				// MPropertyFriendlyName "Negative Y Axis"
				PARTICLE_CP_AXIS_NEGATIVE_Y = 0x4,
				// MPropertyFriendlyName "Negative Z Axis"
				PARTICLE_CP_AXIS_NEGATIVE_Z = 0x5,
			};
			// Enumerator count: 11
			// Alignment: 
			// Size: 0x4
			enum class EventTypeSelection_t : std::uint32_t {
				// MPropertyFriendlyName "None"
				PARTICLE_EVENT_TYPE_MASK_NONE = 0x0,
				// MPropertyFriendlyName "Spawned"
				PARTICLE_EVENT_TYPE_MASK_SPAWNED = 0x1,
				// MPropertyFriendlyName "Killed"
				PARTICLE_EVENT_TYPE_MASK_KILLED = 0x2,
				// MPropertyFriendlyName "Collision"
				PARTICLE_EVENT_TYPE_MASK_COLLISION = 0x4,
				// MPropertyFriendlyName "First Collision"
				PARTICLE_EVENT_TYPE_MASK_FIRST_COLLISION = 0x8,
				// MPropertyFriendlyName "Stopped on Collision"
				PARTICLE_EVENT_TYPE_MASK_COLLISION_STOPPED = 0x10,
				// MPropertyFriendlyName "Killed on Collision"
				PARTICLE_EVENT_TYPE_MASK_KILLED_ON_COLLISION = 0x20,
				// MPropertyFriendlyName "User Event 1"
				PARTICLE_EVENT_TYPE_MASK_USER_1 = 0x40,
				// MPropertyFriendlyName "User Event 2"
				PARTICLE_EVENT_TYPE_MASK_USER_2 = 0x80,
				// MPropertyFriendlyName "User Event 3"
				PARTICLE_EVENT_TYPE_MASK_USER_3 = 0x100,
				// MPropertyFriendlyName "User Event 4"
				PARTICLE_EVENT_TYPE_MASK_USER_4 = 0x200,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class SpriteCardShaderType_t : std::uint32_t {
				// MPropertyFriendlyName "Default"
				SPRITECARD_SHADER_BASE = 0x0,
				// MPropertyFriendlyName "Custom"
				SPRITECARD_SHADER_CUSTOM = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ParticleMassMode_t : std::uint32_t {
				// MPropertyFriendlyName "Radius cubed"
				PARTICLE_MASSMODE_RADIUS_CUBED = 0x0,
				// MPropertyFriendlyName "Radius squared"
				PARTICLE_MASSMODE_RADIUS_SQUARED = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ParticleDirectionNoiseType_t : std::uint32_t {
				// MPropertyFriendlyName "Perlin"
				PARTICLE_DIR_NOISE_PERLIN = 0x0,
				// MPropertyFriendlyName "Curl"
				PARTICLE_DIR_NOISE_CURL = 0x1,
				// MPropertyFriendlyName "Worley"
				PARTICLE_DIR_NOISE_WORLEY_BASIC = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ParticleHitboxBiasType_t : std::uint32_t {
				// MPropertyFriendlyName "Bias relative to Entity"
				PARTICLE_HITBOX_BIAS_ENTITY = 0x0,
				// MPropertyFriendlyName "Bias relative to Hitbox"
				PARTICLE_HITBOX_BIAS_HITBOX = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ParticleHitboxDataSelection_t : std::uint32_t {
				// MPropertyFriendlyName "Average Hitbox Speed"
				PARTICLE_HITBOX_AVERAGE_SPEED = 0x0,
				// MPropertyFriendlyName "Hitbox Count"
				PARTICLE_HITBOX_COUNT = 0x1,
			};
			// Enumerator count: 12
			// Alignment: 
			// Size: 0x4
			enum class ParticlePinDistance_t : std::uint32_t {
				// MPropertyFriendlyName "Don't Break"
				PARTICLE_PIN_DISTANCE_NONE = 0xffffffff,
				// MPropertyFriendlyName "Distance to Neighboring Particle"
				PARTICLE_PIN_DISTANCE_NEIGHBOR = 0x0,
				// MPropertyFriendlyName "Distance to Farthest Particle"
				PARTICLE_PIN_DISTANCE_FARTHEST = 0x1,
				// MPropertyFriendlyName "Distance to First Particle"
				PARTICLE_PIN_DISTANCE_FIRST = 0x2,
				// MPropertyFriendlyName "Distance to Last Particle"
				PARTICLE_PIN_DISTANCE_LAST = 0x3,
				// MPropertyFriendlyName "Distance to Particle System Center"
				PARTICLE_PIN_DISTANCE_CENTER = 0x5,
				// MPropertyFriendlyName "Distance to Control Point"
				PARTICLE_PIN_DISTANCE_CP = 0x6,
				// MPropertyFriendlyName "Distance to Either of Two Control Points"
				PARTICLE_PIN_DISTANCE_CP_PAIR_EITHER = 0x7,
				// MPropertyFriendlyName "Distance to Both of Two Control Points"
				PARTICLE_PIN_DISTANCE_CP_PAIR_BOTH = 0x8,
				// MPropertyFriendlyName "Particle Speed"
				PARTICLE_PIN_SPEED = 0x9,
				// MPropertyFriendlyName "Collection Age"
				PARTICLE_PIN_COLLECTION_AGE = 0xa,
				// MPropertyFriendlyName "Break Value of >= 1"
				PARTICLE_PIN_FLOAT_VALUE = 0xb,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class VectorFloatExpressionType_t : std::uint32_t {
				// MPropertyFriendlyName "Uninitialized"
				VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = 0xffffffff,
				// MPropertyFriendlyName "Dot Product"
				VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0x0,
				// MPropertyFriendlyName "Distance Between"
				VECTOR_FLOAT_EXPRESSION_DISTANCE = 0x1,
				// MPropertyFriendlyName "Distance Between Squared"
				VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 0x2,
				// MPropertyFriendlyName "Input 1 Length"
				VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 0x3,
				// MPropertyFriendlyName "Input 1 Length Squared"
				VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 0x4,
				// MPropertyFriendlyName "Input 1 Noise"
				VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 0x5,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class ParticleOrientationChoiceList_t : std::uint32_t {
				// MPropertyFriendlyName "Screen Align"
				PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0x0,
				// MPropertyFriendlyName "Screen-Z Align"
				PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 0x1,
				// MPropertyFriendlyName "World-Z Align"
				PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 0x2,
				// MPropertyFriendlyName "Particle Normal Align"
				PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 0x3,
				// MPropertyFriendlyName "Screen & Particle Normal Align"
				PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 0x4,
				// MPropertyFriendlyName "Full 3-Axis Rotation"
				PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 0x5,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ParticleEndcapMode_t : std::uint32_t {
				// MPropertyFriendlyName "Always Enabled"
				PARTICLE_ENDCAP_ALWAYS_ON = 0xffffffff,
				// MPropertyFriendlyName "Disabled During Endcap"
				PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
				// MPropertyFriendlyName "Only Enabled During Endcap"
				PARTICLE_ENDCAP_ENDCAP_ON = 0x1,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x4
			enum class VectorExpressionType_t : std::uint32_t {
				// MPropertyFriendlyName "Uninitialized"
				VECTOR_EXPRESSION_UNINITIALIZED = 0xffffffff,
				// MPropertyFriendlyName "Add"
				VECTOR_EXPRESSION_ADD = 0x0,
				// MPropertyFriendlyName "Subtract"
				VECTOR_EXPRESSION_SUBTRACT = 0x1,
				// MPropertyFriendlyName "Multiply"
				VECTOR_EXPRESSION_MUL = 0x2,
				// MPropertyFriendlyName "Divide"
				VECTOR_EXPRESSION_DIVIDE = 0x3,
				// MPropertyFriendlyName "Input 1"
				VECTOR_EXPRESSION_INPUT_1 = 0x4,
				// MPropertyFriendlyName "Min"
				VECTOR_EXPRESSION_MIN = 0x5,
				// MPropertyFriendlyName "Max"
				VECTOR_EXPRESSION_MAX = 0x6,
				// MPropertyFriendlyName "Cross Product"
				VECTOR_EXPRESSION_CROSSPRODUCT = 0x7,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ParticleSequenceCropOverride_t : std::uint32_t {
				// MPropertyFriendlyName "Use Default Cropping Behavior"
				PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 0xffffffff,
				// MPropertyFriendlyName "Force Cropping Off"
				PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0x0,
				// MPropertyFriendlyName "Force Cropping On"
				PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ParticleFalloffFunction_t : std::uint32_t {
				// MPropertyFriendlyName "Constant - No Falloff"
				PARTICLE_FALLOFF_CONSTANT = 0x0,
				// MPropertyFriendlyName "Linear Falloff"
				PARTICLE_FALLOFF_LINEAR = 0x1,
				// MPropertyFriendlyName "Exponential Falloff"
				PARTICLE_FALLOFF_EXPONENTIAL = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class HitboxLerpType_t : std::uint32_t {
				// MPropertyFriendlyName "Lerp from Start/End Time"
				HITBOX_LERP_LIFETIME = 0x0,
				// MPropertyFriendlyName "Constant"
				HITBOX_LERP_CONSTANT = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class AnimationType_t : std::uint32_t {
				// MPropertyFriendlyName "Fixed Rate"
				ANIMATION_TYPE_FIXED_RATE = 0x0,
				// MPropertyFriendlyName "Fit Lifetime"
				ANIMATION_TYPE_FIT_LIFETIME = 0x1,
				// MPropertyFriendlyName "Set Frames Manually"
				ANIMATION_TYPE_MANUAL_FRAMES = 0x2,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class ParticleTopology_t : std::uint32_t {
				// MPropertyFriendlyName "Points"
				PARTICLE_TOPOLOGY_POINTS = 0x0,
				// MPropertyFriendlyName "Line segments"
				PARTICLE_TOPOLOGY_LINES = 0x1,
				// MPropertyFriendlyName "Triangles"
				PARTICLE_TOPOLOGY_TRIS = 0x2,
				// MPropertyFriendlyName "Quadrilaterals"
				PARTICLE_TOPOLOGY_QUADS = 0x3,
				// MPropertyFriendlyName "Cubes"
				PARTICLE_TOPOLOGY_CUBES = 0x4,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ParticleLightBehaviorChoiceList_t : std::uint32_t {
				// MPropertyFriendlyName "Follow Direction"
				PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0x0,
				// MPropertyFriendlyName "Rope"
				PARTICLE_LIGHT_BEHAVIOR_ROPE = 0x1,
				// MPropertyFriendlyName "Trails"
				PARTICLE_LIGHT_BEHAVIOR_TRAILS = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ParticleLightUnitChoiceList_t : std::uint32_t {
				// MPropertyFriendlyName "Candelas"
				PARTICLE_LIGHT_UNIT_CANDELAS = 0x0,
				// MPropertyFriendlyName "Lumens"
				PARTICLE_LIGHT_UNIT_LUMENS = 0x1,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ModelHitboxType_t : std::uint32_t {
				MODEL_HITBOX_TYPE_STANDARD = 0x0,
				MODEL_HITBOX_TYPE_RAW_BONES = 0x1,
				MODEL_HITBOX_TYPE_RENDERBOUNDS = 0x2,
				MODEL_HITBOX_TYPE_SNAPSHOT = 0x3,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ParticleTraceSet_t : std::uint32_t {
				// MPropertyFriendlyName "Everything"
				PARTICLE_TRACE_SET_ALL = 0x0,
				// MPropertyFriendlyName "Static World Only"
				PARTICLE_TRACE_SET_STATIC = 0x1,
				// MPropertyFriendlyName "Static World and Kinematic/Keyframed Only"
				PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 0x2,
				// MPropertyFriendlyName "Dynamic Entities Only"
				PARTICLE_TRACE_SET_DYNAMIC = 0x3,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class ParticleTextureLayerBlendType_t : std::uint32_t {
				// MPropertyFriendlyName "Multiply"
				SPRITECARD_TEXTURE_BLEND_MULTIPLY = 0x0,
				// MPropertyFriendlyName "Mod2X"
				SPRITECARD_TEXTURE_BLEND_MOD2X = 0x1,
				// MPropertyFriendlyName "Replace"
				SPRITECARD_TEXTURE_BLEND_REPLACE = 0x2,
				// MPropertyFriendlyName "Add"
				SPRITECARD_TEXTURE_BLEND_ADD = 0x3,
				// MPropertyFriendlyName "Subtract"
				SPRITECARD_TEXTURE_BLEND_SUBTRACT = 0x4,
				// MPropertyFriendlyName "Average"
				SPRITECARD_TEXTURE_BLEND_AVERAGE = 0x5,
				// MPropertyFriendlyName "Luminance"
				SPRITECARD_TEXTURE_BLEND_LUMINANCE = 0x6,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ParticleDetailLevel_t : std::uint32_t {
				// MPropertyFriendlyName "Low"
				PARTICLEDETAIL_LOW = 0x0,
				// MPropertyFriendlyName "Medium"
				PARTICLEDETAIL_MEDIUM = 0x1,
				// MPropertyFriendlyName "High"
				PARTICLEDETAIL_HIGH = 0x2,
				// MPropertyFriendlyName "Ultra"
				PARTICLEDETAIL_ULTRA = 0x3,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class ParticleOutputBlendMode_t : std::uint32_t {
				// MPropertyFriendlyName "Alpha Blend"
				PARTICLE_OUTPUT_BLEND_MODE_ALPHA = 0x0,
				// MPropertyFriendlyName "Additive"
				PARTICLE_OUTPUT_BLEND_MODE_ADD = 0x1,
				// MPropertyFriendlyName "Blend Add (Pre-Mult Alpha)"
				PARTICLE_OUTPUT_BLEND_MODE_BLEND_ADD = 0x2,
				// MPropertyFriendlyName "Half Blend Add"
				PARTICLE_OUTPUT_BLEND_MODE_HALF_BLEND_ADD = 0x3,
				// MPropertyFriendlyName "Negative Half Blend Add"
				PARTICLE_OUTPUT_BLEND_MODE_NEG_HALF_BLEND_ADD = 0x4,
				// MPropertyFriendlyName "Mod2X"
				PARTICLE_OUTPUT_BLEND_MODE_MOD2X = 0x5,
				// MPropertyFriendlyName "Lighten"
				PARTICLE_OUTPUT_BLEND_MODE_LIGHTEN = 0x6,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ParticleLightnintBranchBehavior_t : std::uint32_t {
				// MPropertyFriendlyName "Branch Towards Current Direction"
				PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0x0,
				// MPropertyFriendlyName "Branch Towards Endpoint"
				PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class MaterialProxyType_t : std::uint32_t {
				// MPropertyFriendlyName "Status Effect"
				MATERIAL_PROXY_STATUS_EFFECT = 0x0,
				// MPropertyFriendlyName "Tint Only"
				MATERIAL_PROXY_TINT = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class BBoxVolumeType_t : std::uint32_t {
				// MPropertyFriendlyName "Bounding Box Volume"
				BBOX_VOLUME = 0x0,
				// MPropertyFriendlyName "Bounding Box Dimensions"
				BBOX_DIMENSIONS = 0x1,
				// MPropertyFriendlyName "Bounding Box Mins/Maxs"
				BBOX_MINS_MAXS = 0x2,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x4
			enum class SpriteCardTextureType_t : std::uint32_t {
				// MPropertyFriendlyName "Diffuse Texture"
				SPRITECARD_TEXTURE_DIFFUSE = 0x0,
				// MPropertyFriendlyName "Diffuse Infinite Zoom"
				SPRITECARD_TEXTURE_ZOOM = 0x1,
				// MPropertyFriendlyName "1D Luminance to Color Lookup"
				SPRITECARD_TEXTURE_1D_COLOR_LOOKUP = 0x2,
				// MPropertyFriendlyName "UV Distortion"
				SPRITECARD_TEXTURE_UVDISTORTION = 0x3,
				// MPropertyFriendlyName "UV Distortion Infinite Zoom"
				SPRITECARD_TEXTURE_UVDISTORTION_ZOOM = 0x4,
				// MPropertyFriendlyName "Normal Map"
				SPRITECARD_TEXTURE_NORMALMAP = 0x5,
				// MPropertyFriendlyName "Animation Smoothing Motion Vector"
				SPRITECARD_TEXTURE_ANIMMOTIONVEC = 0x6,
				// MPropertyFriendlyName "Spherical Harmonics A"
				SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A = 0x7,
				// MPropertyFriendlyName "Spherical Harmonics B"
				SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B = 0x8,
				// MPropertyFriendlyName "Spherical Harmonics C"
				SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C = 0x9,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ParticleAlphaReferenceType_t : std::uint32_t {
				// MPropertyFriendlyName "Texel Alpha & Particle Alpha & Alpha Reference"
				PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0x0,
				// MPropertyFriendlyName "Particle Alpha & Alpha Reference"
				PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 0x1,
				// MPropertyFriendlyName "Texel Alpha & Alpha Reference"
				PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 0x2,
				// MPropertyFriendlyName "Alpha Reference"
				PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3,
			};
			// Enumerator count: 15
			// Alignment: 
			// Size: 0x4
			enum class SpriteCardTextureChannel_t : std::uint32_t {
				// MPropertyFriendlyName "RGB"
				SPRITECARD_TEXTURE_CHANNEL_MIX_RGB = 0x0,
				// MPropertyFriendlyName "RGBA"
				SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA = 0x1,
				// MPropertyFriendlyName "Alpha"
				SPRITECARD_TEXTURE_CHANNEL_MIX_A = 0x2,
				// MPropertyFriendlyName "RGB with Alpha Passthrough"
				SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A = 0x3,
				// MPropertyFriendlyName "RGB with Alpha Mask"
				SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_ALPHAMASK = 0x4,
				// MPropertyFriendlyName "RGB with RGB as Alpha Mask"
				SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_RGBMASK = 0x5,
				// MPropertyFriendlyName "RGBA with RGB as Alpha"
				SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA_RGBALPHA = 0x6,
				// MPropertyFriendlyName "Alpha with RGB as Alpha"
				SPRITECARD_TEXTURE_CHANNEL_MIX_A_RGBALPHA = 0x7,
				// MPropertyFriendlyName "RGB with RGB as Alpha Passthrough"
				SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A_RGBALPHA = 0x8,
				// MPropertyFriendlyName "Red Channel"
				SPRITECARD_TEXTURE_CHANNEL_MIX_R = 0x9,
				// MPropertyFriendlyName "Green Channel"
				SPRITECARD_TEXTURE_CHANNEL_MIX_G = 0xa,
				// MPropertyFriendlyName "Blue Channel"
				SPRITECARD_TEXTURE_CHANNEL_MIX_B = 0xb,
				// MPropertyFriendlyName "Red with Red as Alpha"
				SPRITECARD_TEXTURE_CHANNEL_MIX_RALPHA = 0xc,
				// MPropertyFriendlyName "Green with Green as Alpha"
				SPRITECARD_TEXTURE_CHANNEL_MIX_GALPHA = 0xd,
				// MPropertyFriendlyName "Blue with Blue as Alpha"
				SPRITECARD_TEXTURE_CHANNEL_MIX_BALPHA = 0xe,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class RenderModelSubModelFieldType_t : std::uint32_t {
				// MPropertyFriendlyName "BodyGroup SubModel"
				SUBMODEL_AS_BODYGROUP_SUBMODEL = 0x0,
				// MPropertyFriendlyName "MeshGroup Index"
				SUBMODEL_AS_MESHGROUP_INDEX = 0x1,
				// MPropertyFriendlyName "MeshGroup Mask"
				SUBMODEL_AS_MESHGROUP_MASK = 0x2,
				// MPropertyFriendlyName "Model Default MeshGroup Mask"
				SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 0x3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ParticleLightFogLightingMode_t : std::uint32_t {
				// MPropertyFriendlyName "None"
				PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0x0,
				// MPropertyFriendlyName "Dynamic Fog with Shadows"
				PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 0x2,
				// MPropertyFriendlyName "Dynamic Fog No Shadows"
				PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 0x4,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ParticleSortingChoiceList_t : std::uint32_t {
				// MPropertyFriendlyName "Distance - Nearest"
				PARTICLE_SORTING_NEAREST = 0x0,
				// MPropertyFriendlyName "Age - Oldest"
				PARTICLE_SORTING_CREATION_TIME = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ClosestPointTestType_t : std::uint32_t {
				// MPropertyFriendlyName "Box"
				PARTICLE_CLOSEST_TYPE_BOX = 0x0,
				// MPropertyFriendlyName "Capsule"
				PARTICLE_CLOSEST_TYPE_CAPSULE = 0x1,
				// MPropertyFriendlyName "Hybrid Box/Capsule"
				PARTICLE_CLOSEST_TYPE_HYBRID = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ParticleOmni2LightTypeChoiceList_t : std::uint32_t {
				// MPropertyFriendlyName "Point"
				PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0x0,
				// MPropertyFriendlyName "Sphere"
				PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 0x1,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ParticleLightTypeChoiceList_t : std::uint32_t {
				// MPropertyFriendlyName "Omni Light"
				PARTICLE_LIGHT_TYPE_POINT = 0x0,
				// MPropertyFriendlyName "Spot Light"
				PARTICLE_LIGHT_TYPE_SPOT = 0x1,
				// MPropertyFriendlyName "FX Light"
				PARTICLE_LIGHT_TYPE_FX = 0x2,
				// MPropertyFriendlyName "Capsule Light"
				PARTICLE_LIGHT_TYPE_CAPSULE = 0x3,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class TextureRepetitionMode_t : std::uint32_t {
				// MPropertyFriendlyName "Per-Particle"
				TEXTURE_REPETITION_PARTICLE = 0x0,
				// MPropertyFriendlyName "Entire Path"
				TEXTURE_REPETITION_PATH = 0x1,
			};
			struct FloatInputMaterialVariable_t {
				MEMBER(str_variable, particles::FloatInputMaterialVariable_t, CUtlString);
				MEMBER(fl_input, particles::FloatInputMaterialVariable_t, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FloatInputMaterialVariable_t

			struct RenderProjectedMaterial_t {
				MEMBER(h_material, particles::RenderProjectedMaterial_t, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RenderProjectedMaterial_t

			class IParticleCollection {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IParticleCollection

			struct MaterialVariable_t {
				MEMBER(str_variable, particles::MaterialVariable_t, CUtlString);
				MEMBER(n_variable_field, particles::MaterialVariable_t, particles::ParticleAttributeIndex_t);
				MEMBER(fl_scale, particles::MaterialVariable_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct MaterialVariable_t

			struct ModelReference_t {
				MEMBER(model, particles::ModelReference_t, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);
				MEMBER(fl_relative_probability_of_spawn, particles::ModelReference_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ModelReference_t

			class IParticleSystemDefinition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IParticleSystemDefinition

			class CParticleSystemDefinition : public particles::IParticleSystemDefinition {
				MEMBER(n_behavior_version, particles::CParticleSystemDefinition, int32_t);
				MEMBER(pre_emission_operators, particles::CParticleSystemDefinition, cutl_vector<particles::CParticleFunctionPreEmission*>);
				MEMBER(emitters, particles::CParticleSystemDefinition, cutl_vector<particles::CParticleFunctionEmitter*>);
				MEMBER(initializers, particles::CParticleSystemDefinition, cutl_vector<particles::CParticleFunctionInitializer*>);
				MEMBER(operators, particles::CParticleSystemDefinition, cutl_vector<particles::CParticleFunctionOperator*>);
				MEMBER(force_generators, particles::CParticleSystemDefinition, cutl_vector<particles::CParticleFunctionForce*>);
				MEMBER(constraints, particles::CParticleSystemDefinition, cutl_vector<particles::CParticleFunctionConstraint*>);
				MEMBER(renderers, particles::CParticleSystemDefinition, cutl_vector<particles::CParticleFunctionRenderer*>);
				MEMBER(children, particles::CParticleSystemDefinition, cutl_vector<particles::ParticleChildrenInfo_t>);
				MEMBER(n_first_multiple_override__backward_compat, particles::CParticleSystemDefinition, int32_t);
				MEMBER(n_initial_particles, particles::CParticleSystemDefinition, int32_t);
				MEMBER(n_max_particles, particles::CParticleSystemDefinition, int32_t);
				MEMBER(n_group_id, particles::CParticleSystemDefinition, int32_t);
				MEMBER(bounding_box_min, particles::CParticleSystemDefinition, Vector);
				MEMBER(bounding_box_max, particles::CParticleSystemDefinition, Vector);
				MEMBER(fl_depth_sort_bias, particles::CParticleSystemDefinition, float);
				MEMBER(n_sort_override_position_cp, particles::CParticleSystemDefinition, int32_t);
				MEMBER(b_infinite_bounds, particles::CParticleSystemDefinition, bool);
				MEMBER(b_enable_named_values, particles::CParticleSystemDefinition, bool);
				MEMBER(named_value_domain, particles::CParticleSystemDefinition, CUtlString);
				MEMBER(named_value_locals, particles::CParticleSystemDefinition, cutl_vector<particleslib::ParticleNamedValueSource_t*>);
				MEMBER(constant_color, particles::CParticleSystemDefinition, Color);
				MEMBER(constant_normal, particles::CParticleSystemDefinition, Vector);
				MEMBER(fl_constant_radius, particles::CParticleSystemDefinition, float);
				MEMBER(fl_constant_rotation, particles::CParticleSystemDefinition, float);
				MEMBER(fl_constant_rotation_speed, particles::CParticleSystemDefinition, float);
				MEMBER(fl_constant_lifespan, particles::CParticleSystemDefinition, float);
				MEMBER(n_constant_sequence_number, particles::CParticleSystemDefinition, int32_t);
				MEMBER(n_constant_sequence_number1, particles::CParticleSystemDefinition, int32_t);
				MEMBER(n_snapshot_control_point, particles::CParticleSystemDefinition, int32_t);
				MEMBER(h_snapshot, particles::CParticleSystemDefinition, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSnapshot>);
				MEMBER(psz_cull_replacement_name, particles::CParticleSystemDefinition, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(fl_cull_radius, particles::CParticleSystemDefinition, float);
				MEMBER(fl_cull_fill_cost, particles::CParticleSystemDefinition, float);
				MEMBER(n_cull_control_point, particles::CParticleSystemDefinition, int32_t);
				MEMBER(h_fallback, particles::CParticleSystemDefinition, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(n_fallback_max_count, particles::CParticleSystemDefinition, int32_t);
				MEMBER(h_low_violence_def, particles::CParticleSystemDefinition, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(h_reference_replacement, particles::CParticleSystemDefinition, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(fl_pre_simulation_time, particles::CParticleSystemDefinition, float);
				MEMBER(fl_stop_simulation_after_time, particles::CParticleSystemDefinition, float);
				MEMBER(fl_maximum_time_step, particles::CParticleSystemDefinition, float);
				MEMBER(fl_maximum_sim_time, particles::CParticleSystemDefinition, float);
				MEMBER(fl_minimum_sim_time, particles::CParticleSystemDefinition, float);
				MEMBER(fl_minimum_time_step, particles::CParticleSystemDefinition, float);
				MEMBER(n_minimum_frames, particles::CParticleSystemDefinition, int32_t);
				MEMBER(n_min_cpulevel, particles::CParticleSystemDefinition, int32_t);
				MEMBER(n_min_gpulevel, particles::CParticleSystemDefinition, int32_t);
				MEMBER(fl_no_draw_time_to_go_to_sleep, particles::CParticleSystemDefinition, float);
				MEMBER(fl_max_draw_distance, particles::CParticleSystemDefinition, float);
				MEMBER(fl_start_fade_distance, particles::CParticleSystemDefinition, float);
				MEMBER(fl_max_creation_distance, particles::CParticleSystemDefinition, float);
				MEMBER(n_aggregation_min_available_particles, particles::CParticleSystemDefinition, int32_t);
				MEMBER(fl_aggregate_radius, particles::CParticleSystemDefinition, float);
				MEMBER(b_should_batch, particles::CParticleSystemDefinition, bool);
				MEMBER(b_should_hitboxes_fallback_to_render_bounds, particles::CParticleSystemDefinition, bool);
				MEMBER(b_should_hitboxes_fallback_to_snapshot, particles::CParticleSystemDefinition, bool);
				MEMBER(b_should_hitboxes_fallback_to_collision_hulls, particles::CParticleSystemDefinition, bool);
				MEMBER(n_view_model_effect, particles::CParticleSystemDefinition, particles::InheritableBoolType_t);
				MEMBER(b_screen_space_effect, particles::CParticleSystemDefinition, bool);
				MEMBER(psz_target_layer_id, particles::CParticleSystemDefinition, CUtlSymbolLarge);
				MEMBER(n_skip_render_control_point, particles::CParticleSystemDefinition, int32_t);
				MEMBER(n_allow_render_control_point, particles::CParticleSystemDefinition, int32_t);
				MEMBER(b_should_sort, particles::CParticleSystemDefinition, bool);
				MEMBER(control_point_configurations, particles::CParticleSystemDefinition, cutl_vector<particles::ParticleControlPointConfiguration_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleSystemDefinition

			class CReplicationParameters {
				MEMBER(n_replication_mode, particles::CReplicationParameters, particles::ParticleReplicationMode_t);
				MEMBER(b_scale_child_particle_radii, particles::CReplicationParameters, bool);
				MEMBER(fl_min_random_radius_scale, particles::CReplicationParameters, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_max_random_radius_scale, particles::CReplicationParameters, particleslib::CParticleCollectionFloatInput);
				MEMBER(v_min_random_displacement, particles::CReplicationParameters, particleslib::CParticleCollectionVecInput);
				MEMBER(v_max_random_displacement, particles::CReplicationParameters, particleslib::CParticleCollectionVecInput);
				MEMBER(fl_modelling_scale, particles::CReplicationParameters, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CReplicationParameters

			class CParticleMassCalculationParameters {
				MEMBER(n_mass_mode, particles::CParticleMassCalculationParameters, particles::ParticleMassMode_t);
				MEMBER(fl_radius, particles::CParticleMassCalculationParameters, particleslib::CPerParticleFloatInput);
				MEMBER(fl_nominal_radius, particles::CParticleMassCalculationParameters, particleslib::CPerParticleFloatInput);
				MEMBER(fl_scale, particles::CParticleMassCalculationParameters, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleMassCalculationParameters

			struct PointDefinition_t {
				MEMBER(n_control_point, particles::PointDefinition_t, int32_t);
				MEMBER(b_local_coords, particles::PointDefinition_t, bool);
				MEMBER(v_offset, particles::PointDefinition_t, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PointDefinition_t

			struct PointDefinitionWithTimeValues_t : public particles::PointDefinition_t {
				MEMBER(fl_time_duration, particles::PointDefinitionWithTimeValues_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PointDefinitionWithTimeValues_t

			struct SequenceWeightedList_t {
				MEMBER(n_sequence, particles::SequenceWeightedList_t, int32_t);
				MEMBER(fl_relative_weight, particles::SequenceWeightedList_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SequenceWeightedList_t

			struct VecInputMaterialVariable_t {
				MEMBER(str_variable, particles::VecInputMaterialVariable_t, CUtlString);
				MEMBER(vec_input, particles::VecInputMaterialVariable_t, particleslib::CParticleCollectionVecInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VecInputMaterialVariable_t

			struct ParticlePreviewState_t {
				MEMBER(preview_model, particles::ParticlePreviewState_t, CUtlString);
				MEMBER(n_mod_specific_data, particles::ParticlePreviewState_t, uint32_t);
				MEMBER(ground_type, particles::ParticlePreviewState_t, particles::PetGroundType_t);
				MEMBER(sequence_name, particles::ParticlePreviewState_t, CUtlString);
				MEMBER(n_fire_particle_on_sequence_frame, particles::ParticlePreviewState_t, int32_t);
				MEMBER(hitbox_set_name, particles::ParticlePreviewState_t, CUtlString);
				MEMBER(material_group_name, particles::ParticlePreviewState_t, CUtlString);
				MEMBER(vec_body_groups, particles::ParticlePreviewState_t, cutl_vector<particles::ParticlePreviewBodyGroup_t>);
				MEMBER(fl_playback_speed, particles::ParticlePreviewState_t, float);
				MEMBER(fl_particle_simulation_rate, particles::ParticlePreviewState_t, float);
				MEMBER(b_should_draw_hitboxes, particles::ParticlePreviewState_t, bool);
				MEMBER(b_should_draw_attachments, particles::ParticlePreviewState_t, bool);
				MEMBER(b_should_draw_attachment_names, particles::ParticlePreviewState_t, bool);
				MEMBER(b_should_draw_control_point_axes, particles::ParticlePreviewState_t, bool);
				MEMBER(b_animation_non_looping, particles::ParticlePreviewState_t, bool);
				MEMBER(vec_preview_gravity, particles::ParticlePreviewState_t, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ParticlePreviewState_t

			struct ParticleControlPointConfiguration_t {
				MEMBER(name, particles::ParticleControlPointConfiguration_t, CUtlString);
				MEMBER(drivers, particles::ParticleControlPointConfiguration_t, cutl_vector<particles::ParticleControlPointDriver_t>);
				MEMBER(preview_state, particles::ParticleControlPointConfiguration_t, particles::ParticlePreviewState_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ParticleControlPointConfiguration_t

			class CRandomNumberGeneratorParameters {
				MEMBER(b_distribute_evenly, particles::CRandomNumberGeneratorParameters, bool);
				MEMBER(n_seed, particles::CRandomNumberGeneratorParameters, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRandomNumberGeneratorParameters

			class CPathParameters {
				MEMBER(n_start_control_point_number, particles::CPathParameters, int32_t);
				MEMBER(n_end_control_point_number, particles::CPathParameters, int32_t);
				MEMBER(n_bulge_control, particles::CPathParameters, int32_t);
				MEMBER(fl_bulge, particles::CPathParameters, float);
				MEMBER(fl_mid_point, particles::CPathParameters, float);
				MEMBER(v_start_point_offset, particles::CPathParameters, Vector);
				MEMBER(v_mid_point_offset, particles::CPathParameters, Vector);
				MEMBER(v_end_offset, particles::CPathParameters, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathParameters

			struct ControlPointReference_t {
				MEMBER(control_point_name_string, particles::ControlPointReference_t, int32_t);
				MEMBER(v_offset_from_control_point, particles::ControlPointReference_t, Vector);
				MEMBER(b_offset_in_local_space, particles::ControlPointReference_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ControlPointReference_t

			struct TextureControls_t {
				MEMBER(fl_final_texture_scale_u, particles::TextureControls_t, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_final_texture_scale_v, particles::TextureControls_t, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_final_texture_offset_u, particles::TextureControls_t, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_final_texture_offset_v, particles::TextureControls_t, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_final_texture_uvrotation, particles::TextureControls_t, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_zoom_scale, particles::TextureControls_t, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_distortion, particles::TextureControls_t, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(b_randomize_offsets, particles::TextureControls_t, bool);
				MEMBER(b_clamp_uvs, particles::TextureControls_t, bool);
				MEMBER(n_per_particle_blend, particles::TextureControls_t, particles::SpriteCardPerParticleScale_t);
				MEMBER(n_per_particle_scale, particles::TextureControls_t, particles::SpriteCardPerParticleScale_t);
				MEMBER(n_per_particle_offset_u, particles::TextureControls_t, particles::SpriteCardPerParticleScale_t);
				MEMBER(n_per_particle_offset_v, particles::TextureControls_t, particles::SpriteCardPerParticleScale_t);
				MEMBER(n_per_particle_rotation, particles::TextureControls_t, particles::SpriteCardPerParticleScale_t);
				MEMBER(n_per_particle_zoom, particles::TextureControls_t, particles::SpriteCardPerParticleScale_t);
				MEMBER(n_per_particle_distortion, particles::TextureControls_t, particles::SpriteCardPerParticleScale_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct TextureControls_t

			class CParticleFunction {
				MEMBER(fl_op_strength, particles::CParticleFunction, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_op_end_cap_state, particles::CParticleFunction, particles::ParticleEndcapMode_t);
				MEMBER(fl_op_start_fade_in_time, particles::CParticleFunction, float);
				MEMBER(fl_op_end_fade_in_time, particles::CParticleFunction, float);
				MEMBER(fl_op_start_fade_out_time, particles::CParticleFunction, float);
				MEMBER(fl_op_end_fade_out_time, particles::CParticleFunction, float);
				MEMBER(fl_op_fade_oscillate_period, particles::CParticleFunction, float);
				MEMBER(b_normalize_to_stop_time, particles::CParticleFunction, bool);
				MEMBER(fl_op_time_offset_min, particles::CParticleFunction, float);
				MEMBER(fl_op_time_offset_max, particles::CParticleFunction, float);
				MEMBER(n_op_time_offset_seed, particles::CParticleFunction, int32_t);
				MEMBER(n_op_time_scale_seed, particles::CParticleFunction, int32_t);
				MEMBER(fl_op_time_scale_min, particles::CParticleFunction, float);
				MEMBER(fl_op_time_scale_max, particles::CParticleFunction, float);
				MEMBER(b_disable_operator, particles::CParticleFunction, bool);
				MEMBER(notes, particles::CParticleFunction, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleFunction

			class CParticleFunctionConstraint : public particles::CParticleFunction {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleFunctionConstraint

			class C_OP_PlanarConstraint : public particles::CParticleFunctionConstraint {
				MEMBER(point_on_plane, particles::C_OP_PlanarConstraint, Vector);
				MEMBER(plane_normal, particles::C_OP_PlanarConstraint, Vector);
				MEMBER(n_control_point_number, particles::C_OP_PlanarConstraint, int32_t);
				MEMBER(b_global_origin, particles::C_OP_PlanarConstraint, bool);
				MEMBER(b_global_normal, particles::C_OP_PlanarConstraint, bool);
				MEMBER(fl_radius_scale, particles::C_OP_PlanarConstraint, particleslib::CPerParticleFloatInput);
				MEMBER(fl_maximum_distance_to_cp, particles::C_OP_PlanarConstraint, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_use_old_code, particles::C_OP_PlanarConstraint, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_PlanarConstraint

			class C_OP_ConstrainDistanceToUserSpecifiedPath : public particles::CParticleFunctionConstraint {
				MEMBER(f_min_distance, particles::C_OP_ConstrainDistanceToUserSpecifiedPath, float);
				MEMBER(fl_max_distance, particles::C_OP_ConstrainDistanceToUserSpecifiedPath, float);
				MEMBER(fl_time_scale, particles::C_OP_ConstrainDistanceToUserSpecifiedPath, float);
				MEMBER(b_looped_path, particles::C_OP_ConstrainDistanceToUserSpecifiedPath, bool);
				MEMBER(point_list, particles::C_OP_ConstrainDistanceToUserSpecifiedPath, cutl_vector<particles::PointDefinitionWithTimeValues_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ConstrainDistanceToUserSpecifiedPath

			class C_OP_ShapeMatchingConstraint : public particles::CParticleFunctionConstraint {
				MEMBER(fl_shape_restoration_time, particles::C_OP_ShapeMatchingConstraint, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ShapeMatchingConstraint

			class C_OP_CollideWithSelf : public particles::CParticleFunctionConstraint {
				MEMBER(fl_radius_scale, particles::C_OP_CollideWithSelf, particleslib::CPerParticleFloatInput);
				MEMBER(fl_minimum_speed, particles::C_OP_CollideWithSelf, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_CollideWithSelf

			class C_OP_RopeSpringConstraint : public particles::CParticleFunctionConstraint {
				MEMBER(fl_rest_length, particles::C_OP_RopeSpringConstraint, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_min_distance, particles::C_OP_RopeSpringConstraint, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_max_distance, particles::C_OP_RopeSpringConstraint, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_adjustment_scale, particles::C_OP_RopeSpringConstraint, float);
				MEMBER(fl_initial_resting_length, particles::C_OP_RopeSpringConstraint, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RopeSpringConstraint

			class C_OP_WorldCollideConstraint : public particles::CParticleFunctionConstraint {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_WorldCollideConstraint

			class C_OP_ConstrainDistanceToPath : public particles::CParticleFunctionConstraint {
				MEMBER(f_min_distance, particles::C_OP_ConstrainDistanceToPath, float);
				MEMBER(fl_max_distance0, particles::C_OP_ConstrainDistanceToPath, float);
				MEMBER(fl_max_distance_mid, particles::C_OP_ConstrainDistanceToPath, float);
				MEMBER(fl_max_distance1, particles::C_OP_ConstrainDistanceToPath, float);
				MEMBER(path_parameters, particles::C_OP_ConstrainDistanceToPath, particles::CPathParameters);
				MEMBER(fl_travel_time, particles::C_OP_ConstrainDistanceToPath, float);
				MEMBER(n_field_scale, particles::C_OP_ConstrainDistanceToPath, particles::ParticleAttributeIndex_t);
				MEMBER(n_manual_tfield, particles::C_OP_ConstrainDistanceToPath, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ConstrainDistanceToPath

			class C_OP_CollideWithParentParticles : public particles::CParticleFunctionConstraint {
				MEMBER(fl_parent_radius_scale, particles::C_OP_CollideWithParentParticles, particleslib::CPerParticleFloatInput);
				MEMBER(fl_radius_scale, particles::C_OP_CollideWithParentParticles, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_CollideWithParentParticles

			class C_OP_WorldTraceConstraint : public particles::CParticleFunctionConstraint {
				MEMBER(n_cp, particles::C_OP_WorldTraceConstraint, int32_t);
				MEMBER(vec_cp_offset, particles::C_OP_WorldTraceConstraint, Vector);
				MEMBER(n_collision_mode, particles::C_OP_WorldTraceConstraint, particles::ParticleCollisionMode_t);
				MEMBER(n_collision_mode_min, particles::C_OP_WorldTraceConstraint, particles::ParticleCollisionMode_t);
				MEMBER(n_trace_set, particles::C_OP_WorldTraceConstraint, particles::ParticleTraceSet_t);
				MEMBER_ARR(collision_group_name, particles::C_OP_WorldTraceConstraint, 128, char);
				MEMBER(b_world_only, particles::C_OP_WorldTraceConstraint, bool);
				MEMBER(b_brush_only, particles::C_OP_WorldTraceConstraint, bool);
				MEMBER(b_include_water, particles::C_OP_WorldTraceConstraint, bool);
				MEMBER(n_ignore_cp, particles::C_OP_WorldTraceConstraint, int32_t);
				MEMBER(fl_cp_movement_tolerance, particles::C_OP_WorldTraceConstraint, float);
				MEMBER(fl_retest_rate, particles::C_OP_WorldTraceConstraint, float);
				MEMBER(fl_trace_tolerance, particles::C_OP_WorldTraceConstraint, float);
				MEMBER(fl_collision_confirmation_speed, particles::C_OP_WorldTraceConstraint, float);
				MEMBER(n_max_traces_per_frame, particles::C_OP_WorldTraceConstraint, float);
				MEMBER(fl_radius_scale, particles::C_OP_WorldTraceConstraint, particleslib::CPerParticleFloatInput);
				MEMBER(fl_bounce_amount, particles::C_OP_WorldTraceConstraint, particleslib::CPerParticleFloatInput);
				MEMBER(fl_slide_amount, particles::C_OP_WorldTraceConstraint, particleslib::CPerParticleFloatInput);
				MEMBER(fl_random_dir_scale, particles::C_OP_WorldTraceConstraint, particleslib::CPerParticleFloatInput);
				MEMBER(b_decay_bounce, particles::C_OP_WorldTraceConstraint, bool);
				MEMBER(b_killon_contact, particles::C_OP_WorldTraceConstraint, bool);
				MEMBER(fl_min_speed, particles::C_OP_WorldTraceConstraint, float);
				MEMBER(b_set_normal, particles::C_OP_WorldTraceConstraint, bool);
				MEMBER(n_stick_on_collision_field, particles::C_OP_WorldTraceConstraint, particles::ParticleAttributeIndex_t);
				MEMBER(fl_stop_speed, particles::C_OP_WorldTraceConstraint, particleslib::CPerParticleFloatInput);
				MEMBER(n_entity_stick_data_field, particles::C_OP_WorldTraceConstraint, particles::ParticleAttributeIndex_t);
				MEMBER(n_entity_stick_normal_field, particles::C_OP_WorldTraceConstraint, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_WorldTraceConstraint

			class C_OP_ConstrainLineLength : public particles::CParticleFunctionConstraint {
				MEMBER(fl_min_distance, particles::C_OP_ConstrainLineLength, float);
				MEMBER(fl_max_distance, particles::C_OP_ConstrainLineLength, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ConstrainLineLength

			class C_OP_SDFConstraint : public particles::CParticleFunctionConstraint {
				MEMBER(fl_min_dist, particles::C_OP_SDFConstraint, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_max_dist, particles::C_OP_SDFConstraint, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_max_iterations, particles::C_OP_SDFConstraint, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SDFConstraint

			class C_OP_BoxConstraint : public particles::CParticleFunctionConstraint {
				MEMBER(vec_min, particles::C_OP_BoxConstraint, particleslib::CParticleCollectionVecInput);
				MEMBER(vec_max, particles::C_OP_BoxConstraint, particleslib::CParticleCollectionVecInput);
				MEMBER(n_cp, particles::C_OP_BoxConstraint, int32_t);
				MEMBER(b_local_space, particles::C_OP_BoxConstraint, bool);
				MEMBER(b_account_for_radius, particles::C_OP_BoxConstraint, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_BoxConstraint

			class C_OP_SpringToVectorConstraint : public particles::CParticleFunctionConstraint {
				MEMBER(fl_rest_length, particles::C_OP_SpringToVectorConstraint, particleslib::CPerParticleFloatInput);
				MEMBER(fl_min_distance, particles::C_OP_SpringToVectorConstraint, particleslib::CPerParticleFloatInput);
				MEMBER(fl_max_distance, particles::C_OP_SpringToVectorConstraint, particleslib::CPerParticleFloatInput);
				MEMBER(fl_resting_length, particles::C_OP_SpringToVectorConstraint, particleslib::CPerParticleFloatInput);
				MEMBER(vec_anchor_vector, particles::C_OP_SpringToVectorConstraint, particleslib::CPerParticleVecInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SpringToVectorConstraint

			class C_OP_ConstrainDistance : public particles::CParticleFunctionConstraint {
				MEMBER(f_min_distance, particles::C_OP_ConstrainDistance, particleslib::CParticleCollectionFloatInput);
				MEMBER(f_max_distance, particles::C_OP_ConstrainDistance, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_control_point_number, particles::C_OP_ConstrainDistance, int32_t);
				MEMBER(center_offset, particles::C_OP_ConstrainDistance, Vector);
				MEMBER(b_global_center, particles::C_OP_ConstrainDistance, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ConstrainDistance

			class CParticleFunctionInitializer : public particles::CParticleFunction {
				MEMBER(n_associated_emitter_index, particles::CParticleFunctionInitializer, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleFunctionInitializer

			class C_INIT_InitVecCollection : public particles::CParticleFunctionInitializer {
				MEMBER(input_value, particles::C_INIT_InitVecCollection, particleslib::CParticleCollectionVecInput);
				MEMBER(n_output_field, particles::C_INIT_InitVecCollection, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_InitVecCollection

			class C_INIT_ModelCull : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point_number, particles::C_INIT_ModelCull, int32_t);
				MEMBER(b_bound_box, particles::C_INIT_ModelCull, bool);
				MEMBER(b_cull_outside, particles::C_INIT_ModelCull, bool);
				MEMBER(b_use_bones, particles::C_INIT_ModelCull, bool);
				MEMBER_ARR(hitbox_set_name, particles::C_INIT_ModelCull, 128, char);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_ModelCull

			class C_INIT_QuantizeFloat : public particles::CParticleFunctionInitializer {
				MEMBER(input_value, particles::C_INIT_QuantizeFloat, particleslib::CPerParticleFloatInput);
				MEMBER(n_output_field, particles::C_INIT_QuantizeFloat, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_QuantizeFloat

			class C_INIT_SetRigidAttachment : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point_number, particles::C_INIT_SetRigidAttachment, int32_t);
				MEMBER(n_field_input, particles::C_INIT_SetRigidAttachment, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_INIT_SetRigidAttachment, particles::ParticleAttributeIndex_t);
				MEMBER(b_local_space, particles::C_INIT_SetRigidAttachment, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_SetRigidAttachment

			class C_INIT_RandomColor : public particles::CParticleFunctionInitializer {
				MEMBER(color_min, particles::C_INIT_RandomColor, Color);
				MEMBER(color_max, particles::C_INIT_RandomColor, Color);
				MEMBER(tint_min, particles::C_INIT_RandomColor, Color);
				MEMBER(tint_max, particles::C_INIT_RandomColor, Color);
				MEMBER(fl_tint_perc, particles::C_INIT_RandomColor, float);
				MEMBER(fl_update_threshold, particles::C_INIT_RandomColor, float);
				MEMBER(n_tint_cp, particles::C_INIT_RandomColor, int32_t);
				MEMBER(n_field_output, particles::C_INIT_RandomColor, particles::ParticleAttributeIndex_t);
				MEMBER(n_tint_blend_mode, particles::C_INIT_RandomColor, particles::ParticleColorBlendMode_t);
				MEMBER(fl_light_amplification, particles::C_INIT_RandomColor, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomColor

			class C_INIT_PointList : public particles::CParticleFunctionInitializer {
				MEMBER(n_field_output, particles::C_INIT_PointList, particles::ParticleAttributeIndex_t);
				MEMBER(point_list, particles::C_INIT_PointList, cutl_vector<particles::PointDefinition_t>);
				MEMBER(b_place_along_path, particles::C_INIT_PointList, bool);
				MEMBER(b_closed_loop, particles::C_INIT_PointList, bool);
				MEMBER(n_num_points_along_path, particles::C_INIT_PointList, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_PointList

			class C_INIT_CreateSpiralSphere : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point_number, particles::C_INIT_CreateSpiralSphere, int32_t);
				MEMBER(n_override_cp, particles::C_INIT_CreateSpiralSphere, int32_t);
				MEMBER(n_density, particles::C_INIT_CreateSpiralSphere, int32_t);
				MEMBER(fl_initial_radius, particles::C_INIT_CreateSpiralSphere, float);
				MEMBER(fl_initial_speed_min, particles::C_INIT_CreateSpiralSphere, float);
				MEMBER(fl_initial_speed_max, particles::C_INIT_CreateSpiralSphere, float);
				MEMBER(b_use_particle_count, particles::C_INIT_CreateSpiralSphere, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreateSpiralSphere

			class C_INIT_InitialSequenceFromModel : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point_number, particles::C_INIT_InitialSequenceFromModel, int32_t);
				MEMBER(n_field_output, particles::C_INIT_InitialSequenceFromModel, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output_anim, particles::C_INIT_InitialSequenceFromModel, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_INIT_InitialSequenceFromModel, float);
				MEMBER(fl_input_max, particles::C_INIT_InitialSequenceFromModel, float);
				MEMBER(fl_output_min, particles::C_INIT_InitialSequenceFromModel, float);
				MEMBER(fl_output_max, particles::C_INIT_InitialSequenceFromModel, float);
				MEMBER(n_set_method, particles::C_INIT_InitialSequenceFromModel, particles::ParticleSetMethod_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_InitialSequenceFromModel

			class C_INIT_RemapScalarToVector : public particles::CParticleFunctionInitializer {
				MEMBER(n_field_input, particles::C_INIT_RemapScalarToVector, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_INIT_RemapScalarToVector, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_INIT_RemapScalarToVector, float);
				MEMBER(fl_input_max, particles::C_INIT_RemapScalarToVector, float);
				MEMBER(vec_output_min, particles::C_INIT_RemapScalarToVector, Vector);
				MEMBER(vec_output_max, particles::C_INIT_RemapScalarToVector, Vector);
				MEMBER(fl_start_time, particles::C_INIT_RemapScalarToVector, float);
				MEMBER(fl_end_time, particles::C_INIT_RemapScalarToVector, float);
				MEMBER(n_set_method, particles::C_INIT_RemapScalarToVector, particles::ParticleSetMethod_t);
				MEMBER(n_control_point_number, particles::C_INIT_RemapScalarToVector, int32_t);
				MEMBER(b_local_coords, particles::C_INIT_RemapScalarToVector, bool);
				MEMBER(fl_remap_bias, particles::C_INIT_RemapScalarToVector, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapScalarToVector

			class C_INIT_GlobalScale : public particles::CParticleFunctionInitializer {
				MEMBER(fl_scale, particles::C_INIT_GlobalScale, float);
				MEMBER(n_scale_control_point_number, particles::C_INIT_GlobalScale, int32_t);
				MEMBER(n_control_point_number, particles::C_INIT_GlobalScale, int32_t);
				MEMBER(b_scale_radius, particles::C_INIT_GlobalScale, bool);
				MEMBER(b_scale_position, particles::C_INIT_GlobalScale, bool);
				MEMBER(b_scale_velocity, particles::C_INIT_GlobalScale, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_GlobalScale

			class C_INIT_RadiusFromCPObject : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point, particles::C_INIT_RadiusFromCPObject, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RadiusFromCPObject

			class C_INIT_RemapCPtoScalar : public particles::CParticleFunctionInitializer {
				MEMBER(n_cpinput, particles::C_INIT_RemapCPtoScalar, int32_t);
				MEMBER(n_field_output, particles::C_INIT_RemapCPtoScalar, particles::ParticleAttributeIndex_t);
				MEMBER(n_field, particles::C_INIT_RemapCPtoScalar, int32_t);
				MEMBER(fl_input_min, particles::C_INIT_RemapCPtoScalar, float);
				MEMBER(fl_input_max, particles::C_INIT_RemapCPtoScalar, float);
				MEMBER(fl_output_min, particles::C_INIT_RemapCPtoScalar, float);
				MEMBER(fl_output_max, particles::C_INIT_RemapCPtoScalar, float);
				MEMBER(fl_start_time, particles::C_INIT_RemapCPtoScalar, float);
				MEMBER(fl_end_time, particles::C_INIT_RemapCPtoScalar, float);
				MEMBER(n_set_method, particles::C_INIT_RemapCPtoScalar, particles::ParticleSetMethod_t);
				MEMBER(fl_remap_bias, particles::C_INIT_RemapCPtoScalar, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapCPtoScalar

			class C_INIT_PositionOffsetToCP : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point_number_start, particles::C_INIT_PositionOffsetToCP, int32_t);
				MEMBER(n_control_point_number_end, particles::C_INIT_PositionOffsetToCP, int32_t);
				MEMBER(b_local_coords, particles::C_INIT_PositionOffsetToCP, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_PositionOffsetToCP

			class C_INIT_VelocityFromNormal : public particles::CParticleFunctionInitializer {
				MEMBER(f_speed_min, particles::C_INIT_VelocityFromNormal, float);
				MEMBER(f_speed_max, particles::C_INIT_VelocityFromNormal, float);
				MEMBER(b_ignore_dt, particles::C_INIT_VelocityFromNormal, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_VelocityFromNormal

			class C_INIT_CreateOnModel : public particles::CParticleFunctionInitializer {
				MEMBER(model_input, particles::C_INIT_CreateOnModel, particleslib::CParticleModelInput);
				MEMBER(transform_input, particles::C_INIT_CreateOnModel, particleslib::CParticleTransformInput);
				MEMBER(n_force_in_model, particles::C_INIT_CreateOnModel, int32_t);
				MEMBER(b_scale_to_volume, particles::C_INIT_CreateOnModel, bool);
				MEMBER(b_even_distribution, particles::C_INIT_CreateOnModel, bool);
				MEMBER(n_desired_hitbox, particles::C_INIT_CreateOnModel, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_hitbox_value_from_control_point_index, particles::C_INIT_CreateOnModel, int32_t);
				MEMBER(vec_hit_box_scale, particles::C_INIT_CreateOnModel, particleslib::CParticleCollectionVecInput);
				MEMBER(fl_bone_velocity, particles::C_INIT_CreateOnModel, float);
				MEMBER(fl_max_bone_velocity, particles::C_INIT_CreateOnModel, float);
				MEMBER(vec_direction_bias, particles::C_INIT_CreateOnModel, particleslib::CParticleCollectionVecInput);
				MEMBER_ARR(hitbox_set_name, particles::C_INIT_CreateOnModel, 128, char);
				MEMBER(b_local_coords, particles::C_INIT_CreateOnModel, bool);
				MEMBER(b_use_bones, particles::C_INIT_CreateOnModel, bool);
				MEMBER(b_use_mesh, particles::C_INIT_CreateOnModel, bool);
				MEMBER(fl_shell_size, particles::C_INIT_CreateOnModel, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreateOnModel

			class C_INIT_NormalAlignToCP : public particles::CParticleFunctionInitializer {
				MEMBER(transform_input, particles::C_INIT_NormalAlignToCP, particleslib::CParticleTransformInput);
				MEMBER(n_control_point_axis, particles::C_INIT_NormalAlignToCP, particles::ParticleControlPointAxis_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_NormalAlignToCP

			class C_INIT_CreateFromCPs : public particles::CParticleFunctionInitializer {
				MEMBER(n_increment, particles::C_INIT_CreateFromCPs, int32_t);
				MEMBER(n_min_cp, particles::C_INIT_CreateFromCPs, int32_t);
				MEMBER(n_max_cp, particles::C_INIT_CreateFromCPs, int32_t);
				MEMBER(n_dynamic_cpcount, particles::C_INIT_CreateFromCPs, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreateFromCPs

			class C_INIT_PositionOffset : public particles::CParticleFunctionInitializer {
				MEMBER(offset_min, particles::C_INIT_PositionOffset, particleslib::CPerParticleVecInput);
				MEMBER(offset_max, particles::C_INIT_PositionOffset, particleslib::CPerParticleVecInput);
				MEMBER(transform_input, particles::C_INIT_PositionOffset, particleslib::CParticleTransformInput);
				MEMBER(b_local_coords, particles::C_INIT_PositionOffset, bool);
				MEMBER(b_proportional, particles::C_INIT_PositionOffset, bool);
				MEMBER(randomness_parameters, particles::C_INIT_PositionOffset, particles::CRandomNumberGeneratorParameters);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_PositionOffset

			class C_INIT_PositionWarpScalar : public particles::CParticleFunctionInitializer {
				MEMBER(vec_warp_min, particles::C_INIT_PositionWarpScalar, Vector);
				MEMBER(vec_warp_max, particles::C_INIT_PositionWarpScalar, Vector);
				MEMBER(input_value, particles::C_INIT_PositionWarpScalar, particleslib::CPerParticleFloatInput);
				MEMBER(fl_prev_pos_scale, particles::C_INIT_PositionWarpScalar, float);
				MEMBER(n_scale_control_point_number, particles::C_INIT_PositionWarpScalar, int32_t);
				MEMBER(n_control_point_number, particles::C_INIT_PositionWarpScalar, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_PositionWarpScalar

			class C_INIT_InitFromCPSnapshot : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point_number, particles::C_INIT_InitFromCPSnapshot, int32_t);
				MEMBER(n_attribute_to_read, particles::C_INIT_InitFromCPSnapshot, particles::ParticleAttributeIndex_t);
				MEMBER(n_attribute_to_write, particles::C_INIT_InitFromCPSnapshot, particles::ParticleAttributeIndex_t);
				MEMBER(n_local_space_cp, particles::C_INIT_InitFromCPSnapshot, int32_t);
				MEMBER(b_random, particles::C_INIT_InitFromCPSnapshot, bool);
				MEMBER(b_reverse, particles::C_INIT_InitFromCPSnapshot, bool);
				MEMBER(n_snap_shot_increment, particles::C_INIT_InitFromCPSnapshot, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_manual_snapshot_index, particles::C_INIT_InitFromCPSnapshot, particleslib::CPerParticleFloatInput);
				MEMBER(n_random_seed, particles::C_INIT_InitFromCPSnapshot, int32_t);
				MEMBER(b_local_space_angles, particles::C_INIT_InitFromCPSnapshot, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_InitFromCPSnapshot

			class C_INIT_CreateInEpitrochoid : public particles::CParticleFunctionInitializer {
				MEMBER(n_component1, particles::C_INIT_CreateInEpitrochoid, int32_t);
				MEMBER(n_component2, particles::C_INIT_CreateInEpitrochoid, int32_t);
				MEMBER(transform_input, particles::C_INIT_CreateInEpitrochoid, particleslib::CParticleTransformInput);
				MEMBER(fl_particle_density, particles::C_INIT_CreateInEpitrochoid, particleslib::CPerParticleFloatInput);
				MEMBER(fl_offset, particles::C_INIT_CreateInEpitrochoid, particleslib::CPerParticleFloatInput);
				MEMBER(fl_radius1, particles::C_INIT_CreateInEpitrochoid, particleslib::CPerParticleFloatInput);
				MEMBER(fl_radius2, particles::C_INIT_CreateInEpitrochoid, particleslib::CPerParticleFloatInput);
				MEMBER(b_use_count, particles::C_INIT_CreateInEpitrochoid, bool);
				MEMBER(b_use_local_coords, particles::C_INIT_CreateInEpitrochoid, bool);
				MEMBER(b_offset_existing_pos, particles::C_INIT_CreateInEpitrochoid, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreateInEpitrochoid

			class C_INIT_SequenceFromCP : public particles::CParticleFunctionInitializer {
				MEMBER(b_kill_unused, particles::C_INIT_SequenceFromCP, bool);
				MEMBER(b_radius_scale, particles::C_INIT_SequenceFromCP, bool);
				MEMBER(n_cp, particles::C_INIT_SequenceFromCP, int32_t);
				MEMBER(vec_offset, particles::C_INIT_SequenceFromCP, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_SequenceFromCP

			class C_INIT_InitVec : public particles::CParticleFunctionInitializer {
				MEMBER(input_value, particles::C_INIT_InitVec, particleslib::CPerParticleVecInput);
				MEMBER(n_output_field, particles::C_INIT_InitVec, particles::ParticleAttributeIndex_t);
				MEMBER(n_set_method, particles::C_INIT_InitVec, particles::ParticleSetMethod_t);
				MEMBER(b_normalized_output, particles::C_INIT_InitVec, bool);
				MEMBER(b_write_previous_position, particles::C_INIT_InitVec, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_InitVec

			class C_INIT_InheritVelocity : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point_number, particles::C_INIT_InheritVelocity, int32_t);
				MEMBER(fl_velocity_scale, particles::C_INIT_InheritVelocity, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_InheritVelocity

			class C_INIT_CreateFromParentParticles : public particles::CParticleFunctionInitializer {
				MEMBER(fl_velocity_scale, particles::C_INIT_CreateFromParentParticles, float);
				MEMBER(fl_increment, particles::C_INIT_CreateFromParentParticles, float);
				MEMBER(b_random_distribution, particles::C_INIT_CreateFromParentParticles, bool);
				MEMBER(n_random_seed, particles::C_INIT_CreateFromParentParticles, int32_t);
				MEMBER(b_sub_frame, particles::C_INIT_CreateFromParentParticles, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreateFromParentParticles

			class C_INIT_RemapInitialTransformDirectionToRotation : public particles::CParticleFunctionInitializer {
				MEMBER(transform_input, particles::C_INIT_RemapInitialTransformDirectionToRotation, particleslib::CParticleTransformInput);
				MEMBER(n_field_output, particles::C_INIT_RemapInitialTransformDirectionToRotation, particles::ParticleAttributeIndex_t);
				MEMBER(fl_offset_rot, particles::C_INIT_RemapInitialTransformDirectionToRotation, float);
				MEMBER(n_component, particles::C_INIT_RemapInitialTransformDirectionToRotation, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapInitialTransformDirectionToRotation

			class CGeneralRandomRotation : public particles::CParticleFunctionInitializer {
				MEMBER(n_field_output, particles::CGeneralRandomRotation, particles::ParticleAttributeIndex_t);
				MEMBER(fl_degrees, particles::CGeneralRandomRotation, float);
				MEMBER(fl_degrees_min, particles::CGeneralRandomRotation, float);
				MEMBER(fl_degrees_max, particles::CGeneralRandomRotation, float);
				MEMBER(fl_rotation_rand_exponent, particles::CGeneralRandomRotation, float);
				MEMBER(b_randomly_flip_direction, particles::CGeneralRandomRotation, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGeneralRandomRotation

			class C_INIT_RandomRotationSpeed : public particles::CGeneralRandomRotation {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomRotationSpeed

			class C_INIT_RandomRotation : public particles::CGeneralRandomRotation {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomRotation

			class C_INIT_RandomYaw : public particles::CGeneralRandomRotation {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomYaw

			class C_INIT_ChaoticAttractor : public particles::CParticleFunctionInitializer {
				MEMBER(fl_aparm, particles::C_INIT_ChaoticAttractor, float);
				MEMBER(fl_bparm, particles::C_INIT_ChaoticAttractor, float);
				MEMBER(fl_cparm, particles::C_INIT_ChaoticAttractor, float);
				MEMBER(fl_dparm, particles::C_INIT_ChaoticAttractor, float);
				MEMBER(fl_scale, particles::C_INIT_ChaoticAttractor, float);
				MEMBER(fl_speed_min, particles::C_INIT_ChaoticAttractor, float);
				MEMBER(fl_speed_max, particles::C_INIT_ChaoticAttractor, float);
				MEMBER(n_base_cp, particles::C_INIT_ChaoticAttractor, int32_t);
				MEMBER(b_uniform_speed, particles::C_INIT_ChaoticAttractor, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_ChaoticAttractor

			class C_INIT_RandomSecondSequence : public particles::CParticleFunctionInitializer {
				MEMBER(n_sequence_min, particles::C_INIT_RandomSecondSequence, int32_t);
				MEMBER(n_sequence_max, particles::C_INIT_RandomSecondSequence, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomSecondSequence

			class C_INIT_InitFloat : public particles::CParticleFunctionInitializer {
				MEMBER(input_value, particles::C_INIT_InitFloat, particleslib::CPerParticleFloatInput);
				MEMBER(n_output_field, particles::C_INIT_InitFloat, particles::ParticleAttributeIndex_t);
				MEMBER(n_set_method, particles::C_INIT_InitFloat, particles::ParticleSetMethod_t);
				MEMBER(input_strength, particles::C_INIT_InitFloat, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_InitFloat

			class C_INIT_InitialVelocityFromHitbox : public particles::CParticleFunctionInitializer {
				MEMBER(fl_velocity_min, particles::C_INIT_InitialVelocityFromHitbox, float);
				MEMBER(fl_velocity_max, particles::C_INIT_InitialVelocityFromHitbox, float);
				MEMBER(n_control_point_number, particles::C_INIT_InitialVelocityFromHitbox, int32_t);
				MEMBER_ARR(hitbox_set_name, particles::C_INIT_InitialVelocityFromHitbox, 128, char);
				MEMBER(b_use_bones, particles::C_INIT_InitialVelocityFromHitbox, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_InitialVelocityFromHitbox

			class C_INIT_CreateWithinSphereTransform : public particles::CParticleFunctionInitializer {
				MEMBER(f_radius_min, particles::C_INIT_CreateWithinSphereTransform, particleslib::CPerParticleFloatInput);
				MEMBER(f_radius_max, particles::C_INIT_CreateWithinSphereTransform, particleslib::CPerParticleFloatInput);
				MEMBER(vec_distance_bias, particles::C_INIT_CreateWithinSphereTransform, particleslib::CPerParticleVecInput);
				MEMBER(vec_distance_bias_abs, particles::C_INIT_CreateWithinSphereTransform, Vector);
				MEMBER(transform_input, particles::C_INIT_CreateWithinSphereTransform, particleslib::CParticleTransformInput);
				MEMBER(f_speed_min, particles::C_INIT_CreateWithinSphereTransform, particleslib::CPerParticleFloatInput);
				MEMBER(f_speed_max, particles::C_INIT_CreateWithinSphereTransform, particleslib::CPerParticleFloatInput);
				MEMBER(f_speed_rand_exp, particles::C_INIT_CreateWithinSphereTransform, float);
				MEMBER(b_local_coords, particles::C_INIT_CreateWithinSphereTransform, bool);
				MEMBER(fl_end_cpgrowth_time, particles::C_INIT_CreateWithinSphereTransform, float);
				MEMBER(local_coordinate_system_speed_min, particles::C_INIT_CreateWithinSphereTransform, particleslib::CPerParticleVecInput);
				MEMBER(local_coordinate_system_speed_max, particles::C_INIT_CreateWithinSphereTransform, particleslib::CPerParticleVecInput);
				MEMBER(n_field_output, particles::C_INIT_CreateWithinSphereTransform, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_velocity, particles::C_INIT_CreateWithinSphereTransform, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreateWithinSphereTransform

			class C_INIT_RandomYawFlip : public particles::CParticleFunctionInitializer {
				MEMBER(fl_percent, particles::C_INIT_RandomYawFlip, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomYawFlip

			class C_INIT_RemapTransformOrientationToRotations : public particles::CParticleFunctionInitializer {
				MEMBER(transform_input, particles::C_INIT_RemapTransformOrientationToRotations, particleslib::CParticleTransformInput);
				MEMBER(vec_rotation, particles::C_INIT_RemapTransformOrientationToRotations, Vector);
				MEMBER(b_use_quat, particles::C_INIT_RemapTransformOrientationToRotations, bool);
				MEMBER(b_write_normal, particles::C_INIT_RemapTransformOrientationToRotations, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapTransformOrientationToRotations

			class C_INIT_RemapInitialDirectionToTransformToVector : public particles::CParticleFunctionInitializer {
				MEMBER(transform_input, particles::C_INIT_RemapInitialDirectionToTransformToVector, particleslib::CParticleTransformInput);
				MEMBER(n_field_output, particles::C_INIT_RemapInitialDirectionToTransformToVector, particles::ParticleAttributeIndex_t);
				MEMBER(fl_scale, particles::C_INIT_RemapInitialDirectionToTransformToVector, float);
				MEMBER(fl_offset_rot, particles::C_INIT_RemapInitialDirectionToTransformToVector, float);
				MEMBER(vec_offset_axis, particles::C_INIT_RemapInitialDirectionToTransformToVector, Vector);
				MEMBER(b_normalize, particles::C_INIT_RemapInitialDirectionToTransformToVector, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapInitialDirectionToTransformToVector

			class C_INIT_CreateSequentialPathV2 : public particles::CParticleFunctionInitializer {
				MEMBER(f_max_distance, particles::C_INIT_CreateSequentialPathV2, particleslib::CPerParticleFloatInput);
				MEMBER(fl_num_to_assign, particles::C_INIT_CreateSequentialPathV2, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_loop, particles::C_INIT_CreateSequentialPathV2, bool);
				MEMBER(b_cppairs, particles::C_INIT_CreateSequentialPathV2, bool);
				MEMBER(b_save_offset, particles::C_INIT_CreateSequentialPathV2, bool);
				MEMBER(path_params, particles::C_INIT_CreateSequentialPathV2, particles::CPathParameters);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreateSequentialPathV2

			class C_INIT_CreateOnModelAtHeight : public particles::CParticleFunctionInitializer {
				MEMBER(b_use_bones, particles::C_INIT_CreateOnModelAtHeight, bool);
				MEMBER(b_force_z, particles::C_INIT_CreateOnModelAtHeight, bool);
				MEMBER(n_control_point_number, particles::C_INIT_CreateOnModelAtHeight, int32_t);
				MEMBER(n_height_cp, particles::C_INIT_CreateOnModelAtHeight, int32_t);
				MEMBER(b_use_water_height, particles::C_INIT_CreateOnModelAtHeight, bool);
				MEMBER(fl_desired_height, particles::C_INIT_CreateOnModelAtHeight, particleslib::CParticleCollectionFloatInput);
				MEMBER(vec_hit_box_scale, particles::C_INIT_CreateOnModelAtHeight, particleslib::CParticleCollectionVecInput);
				MEMBER(vec_direction_bias, particles::C_INIT_CreateOnModelAtHeight, particleslib::CParticleCollectionVecInput);
				MEMBER(n_bias_type, particles::C_INIT_CreateOnModelAtHeight, particles::ParticleHitboxBiasType_t);
				MEMBER(b_local_coords, particles::C_INIT_CreateOnModelAtHeight, bool);
				MEMBER(b_prefer_moving_boxes, particles::C_INIT_CreateOnModelAtHeight, bool);
				MEMBER_ARR(hitbox_set_name, particles::C_INIT_CreateOnModelAtHeight, 128, char);
				MEMBER(fl_hitbox_velocity_scale, particles::C_INIT_CreateOnModelAtHeight, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_max_bone_velocity, particles::C_INIT_CreateOnModelAtHeight, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreateOnModelAtHeight

			class C_INIT_RandomAlphaWindowThreshold : public particles::CParticleFunctionInitializer {
				MEMBER(fl_min, particles::C_INIT_RandomAlphaWindowThreshold, float);
				MEMBER(fl_max, particles::C_INIT_RandomAlphaWindowThreshold, float);
				MEMBER(fl_exponent, particles::C_INIT_RandomAlphaWindowThreshold, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomAlphaWindowThreshold

			class C_INIT_CreateOnGrid : public particles::CParticleFunctionInitializer {
				MEMBER(n_xcount, particles::C_INIT_CreateOnGrid, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_ycount, particles::C_INIT_CreateOnGrid, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_zcount, particles::C_INIT_CreateOnGrid, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_xspacing, particles::C_INIT_CreateOnGrid, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_yspacing, particles::C_INIT_CreateOnGrid, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_zspacing, particles::C_INIT_CreateOnGrid, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_control_point_number, particles::C_INIT_CreateOnGrid, int32_t);
				MEMBER(b_local_space, particles::C_INIT_CreateOnGrid, bool);
				MEMBER(b_center, particles::C_INIT_CreateOnGrid, bool);
				MEMBER(b_hollow, particles::C_INIT_CreateOnGrid, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreateOnGrid

			class C_INIT_ColorLitPerParticle : public particles::CParticleFunctionInitializer {
				MEMBER(color_min, particles::C_INIT_ColorLitPerParticle, Color);
				MEMBER(color_max, particles::C_INIT_ColorLitPerParticle, Color);
				MEMBER(tint_min, particles::C_INIT_ColorLitPerParticle, Color);
				MEMBER(tint_max, particles::C_INIT_ColorLitPerParticle, Color);
				MEMBER(fl_tint_perc, particles::C_INIT_ColorLitPerParticle, float);
				MEMBER(n_tint_blend_mode, particles::C_INIT_ColorLitPerParticle, particles::ParticleColorBlendMode_t);
				MEMBER(fl_light_amplification, particles::C_INIT_ColorLitPerParticle, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_ColorLitPerParticle

			class C_INIT_CreateAlongPath : public particles::CParticleFunctionInitializer {
				MEMBER(f_max_distance, particles::C_INIT_CreateAlongPath, float);
				MEMBER(path_params, particles::C_INIT_CreateAlongPath, particles::CPathParameters);
				MEMBER(b_use_random_cps, particles::C_INIT_CreateAlongPath, bool);
				MEMBER(v_end_offset, particles::C_INIT_CreateAlongPath, Vector);
				MEMBER(b_save_offset, particles::C_INIT_CreateAlongPath, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreateAlongPath

			class C_INIT_RemapTransformToVector : public particles::CParticleFunctionInitializer {
				MEMBER(n_field_output, particles::C_INIT_RemapTransformToVector, particles::ParticleAttributeIndex_t);
				MEMBER(v_input_min, particles::C_INIT_RemapTransformToVector, Vector);
				MEMBER(v_input_max, particles::C_INIT_RemapTransformToVector, Vector);
				MEMBER(v_output_min, particles::C_INIT_RemapTransformToVector, Vector);
				MEMBER(v_output_max, particles::C_INIT_RemapTransformToVector, Vector);
				MEMBER(transform_input, particles::C_INIT_RemapTransformToVector, particleslib::CParticleTransformInput);
				MEMBER(local_space_transform, particles::C_INIT_RemapTransformToVector, particleslib::CParticleTransformInput);
				MEMBER(fl_start_time, particles::C_INIT_RemapTransformToVector, float);
				MEMBER(fl_end_time, particles::C_INIT_RemapTransformToVector, float);
				MEMBER(n_set_method, particles::C_INIT_RemapTransformToVector, particles::ParticleSetMethod_t);
				MEMBER(b_offset, particles::C_INIT_RemapTransformToVector, bool);
				MEMBER(b_accelerate, particles::C_INIT_RemapTransformToVector, bool);
				MEMBER(fl_remap_bias, particles::C_INIT_RemapTransformToVector, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapTransformToVector

			class C_INIT_RemapInitialVisibilityScalar : public particles::CParticleFunctionInitializer {
				MEMBER(n_field_output, particles::C_INIT_RemapInitialVisibilityScalar, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_INIT_RemapInitialVisibilityScalar, float);
				MEMBER(fl_input_max, particles::C_INIT_RemapInitialVisibilityScalar, float);
				MEMBER(fl_output_min, particles::C_INIT_RemapInitialVisibilityScalar, float);
				MEMBER(fl_output_max, particles::C_INIT_RemapInitialVisibilityScalar, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapInitialVisibilityScalar

			class C_INIT_AddVectorToVector : public particles::CParticleFunctionInitializer {
				MEMBER(vec_scale, particles::C_INIT_AddVectorToVector, Vector);
				MEMBER(n_field_output, particles::C_INIT_AddVectorToVector, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_input, particles::C_INIT_AddVectorToVector, particles::ParticleAttributeIndex_t);
				MEMBER(v_offset_min, particles::C_INIT_AddVectorToVector, Vector);
				MEMBER(v_offset_max, particles::C_INIT_AddVectorToVector, Vector);
				MEMBER(randomness_parameters, particles::C_INIT_AddVectorToVector, particles::CRandomNumberGeneratorParameters);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_AddVectorToVector

			class C_INIT_InitFromVectorFieldSnapshot : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point_number, particles::C_INIT_InitFromVectorFieldSnapshot, int32_t);
				MEMBER(n_local_space_cp, particles::C_INIT_InitFromVectorFieldSnapshot, int32_t);
				MEMBER(n_weight_update_cp, particles::C_INIT_InitFromVectorFieldSnapshot, int32_t);
				MEMBER(b_use_vertical_velocity, particles::C_INIT_InitFromVectorFieldSnapshot, bool);
				MEMBER(vec_scale, particles::C_INIT_InitFromVectorFieldSnapshot, particleslib::CPerParticleVecInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_InitFromVectorFieldSnapshot

			class C_INIT_DistanceCull : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point, particles::C_INIT_DistanceCull, int32_t);
				MEMBER(fl_distance, particles::C_INIT_DistanceCull, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_cull_inside, particles::C_INIT_DistanceCull, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_DistanceCull

			class C_INIT_RandomSequence : public particles::CParticleFunctionInitializer {
				MEMBER(n_sequence_min, particles::C_INIT_RandomSequence, int32_t);
				MEMBER(n_sequence_max, particles::C_INIT_RandomSequence, int32_t);
				MEMBER(b_shuffle, particles::C_INIT_RandomSequence, bool);
				MEMBER(b_linear, particles::C_INIT_RandomSequence, bool);
				MEMBER(weighted_list, particles::C_INIT_RandomSequence, cutl_vector<particles::SequenceWeightedList_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomSequence

			class C_INIT_AgeNoise : public particles::CParticleFunctionInitializer {
				MEMBER(b_abs_val, particles::C_INIT_AgeNoise, bool);
				MEMBER(b_abs_val_inv, particles::C_INIT_AgeNoise, bool);
				MEMBER(fl_offset, particles::C_INIT_AgeNoise, float);
				MEMBER(fl_age_min, particles::C_INIT_AgeNoise, float);
				MEMBER(fl_age_max, particles::C_INIT_AgeNoise, float);
				MEMBER(fl_noise_scale, particles::C_INIT_AgeNoise, float);
				MEMBER(fl_noise_scale_loc, particles::C_INIT_AgeNoise, float);
				MEMBER(vec_offset_loc, particles::C_INIT_AgeNoise, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_AgeNoise

			class C_INIT_RandomScalar : public particles::CParticleFunctionInitializer {
				MEMBER(fl_min, particles::C_INIT_RandomScalar, float);
				MEMBER(fl_max, particles::C_INIT_RandomScalar, float);
				MEMBER(fl_exponent, particles::C_INIT_RandomScalar, float);
				MEMBER(n_field_output, particles::C_INIT_RandomScalar, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomScalar

			class C_INIT_PositionPlaceOnGround : public particles::CParticleFunctionInitializer {
				MEMBER(fl_offset, particles::C_INIT_PositionPlaceOnGround, particleslib::CPerParticleFloatInput);
				MEMBER(fl_max_trace_length, particles::C_INIT_PositionPlaceOnGround, particleslib::CPerParticleFloatInput);
				MEMBER_ARR(collision_group_name, particles::C_INIT_PositionPlaceOnGround, 128, char);
				MEMBER(n_trace_set, particles::C_INIT_PositionPlaceOnGround, particles::ParticleTraceSet_t);
				MEMBER(n_trace_miss_behavior, particles::C_INIT_PositionPlaceOnGround, particles::ParticleTraceMissBehavior_t);
				MEMBER(b_include_water, particles::C_INIT_PositionPlaceOnGround, bool);
				MEMBER(b_set_normal, particles::C_INIT_PositionPlaceOnGround, bool);
				MEMBER(b_set_pxyzonly, particles::C_INIT_PositionPlaceOnGround, bool);
				MEMBER(b_trace_along_normal, particles::C_INIT_PositionPlaceOnGround, bool);
				MEMBER(b_offseton_col_only, particles::C_INIT_PositionPlaceOnGround, bool);
				MEMBER(fl_offset_by_radius_factor, particles::C_INIT_PositionPlaceOnGround, float);
				MEMBER(n_preserve_offset_cp, particles::C_INIT_PositionPlaceOnGround, int32_t);
				MEMBER(n_ignore_cp, particles::C_INIT_PositionPlaceOnGround, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_PositionPlaceOnGround

			class C_INIT_CreateWithinBox : public particles::CParticleFunctionInitializer {
				MEMBER(vec_min, particles::C_INIT_CreateWithinBox, particleslib::CPerParticleVecInput);
				MEMBER(vec_max, particles::C_INIT_CreateWithinBox, particleslib::CPerParticleVecInput);
				MEMBER(n_control_point_number, particles::C_INIT_CreateWithinBox, int32_t);
				MEMBER(b_local_space, particles::C_INIT_CreateWithinBox, bool);
				MEMBER(randomness_parameters, particles::C_INIT_CreateWithinBox, particles::CRandomNumberGeneratorParameters);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreateWithinBox

			class C_INIT_CreateParticleImpulse : public particles::CParticleFunctionInitializer {
				MEMBER(input_radius, particles::C_INIT_CreateParticleImpulse, particleslib::CPerParticleFloatInput);
				MEMBER(input_magnitude, particles::C_INIT_CreateParticleImpulse, particleslib::CPerParticleFloatInput);
				MEMBER(n_falloff_function, particles::C_INIT_CreateParticleImpulse, particles::ParticleFalloffFunction_t);
				MEMBER(input_falloff_exp, particles::C_INIT_CreateParticleImpulse, particleslib::CPerParticleFloatInput);
				MEMBER(n_impulse_type, particles::C_INIT_CreateParticleImpulse, particles::ParticleImpulseType_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreateParticleImpulse

			class C_INIT_InheritFromParentParticles : public particles::CParticleFunctionInitializer {
				MEMBER(fl_scale, particles::C_INIT_InheritFromParentParticles, float);
				MEMBER(n_field_output, particles::C_INIT_InheritFromParentParticles, particles::ParticleAttributeIndex_t);
				MEMBER(n_increment, particles::C_INIT_InheritFromParentParticles, int32_t);
				MEMBER(b_random_distribution, particles::C_INIT_InheritFromParentParticles, bool);
				MEMBER(n_random_seed, particles::C_INIT_InheritFromParentParticles, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_InheritFromParentParticles

			class C_INIT_DistanceToNeighborCull : public particles::CParticleFunctionInitializer {
				MEMBER(fl_distance, particles::C_INIT_DistanceToNeighborCull, particleslib::CPerParticleFloatInput);
				MEMBER(b_include_radii, particles::C_INIT_DistanceToNeighborCull, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_DistanceToNeighborCull

			class C_INIT_VelocityFromCP : public particles::CParticleFunctionInitializer {
				MEMBER(velocity_input, particles::C_INIT_VelocityFromCP, particleslib::CParticleCollectionVecInput);
				MEMBER(transform_input, particles::C_INIT_VelocityFromCP, particleslib::CParticleTransformInput);
				MEMBER(fl_velocity_scale, particles::C_INIT_VelocityFromCP, float);
				MEMBER(b_direction_only, particles::C_INIT_VelocityFromCP, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_VelocityFromCP

			class C_INIT_RemapParticleCountToScalar : public particles::CParticleFunctionInitializer {
				MEMBER(n_field_output, particles::C_INIT_RemapParticleCountToScalar, particles::ParticleAttributeIndex_t);
				MEMBER(n_input_min, particles::C_INIT_RemapParticleCountToScalar, int32_t);
				MEMBER(n_input_max, particles::C_INIT_RemapParticleCountToScalar, int32_t);
				MEMBER(n_scale_control_point, particles::C_INIT_RemapParticleCountToScalar, int32_t);
				MEMBER(n_scale_control_point_field, particles::C_INIT_RemapParticleCountToScalar, int32_t);
				MEMBER(fl_output_min, particles::C_INIT_RemapParticleCountToScalar, float);
				MEMBER(fl_output_max, particles::C_INIT_RemapParticleCountToScalar, float);
				MEMBER(n_set_method, particles::C_INIT_RemapParticleCountToScalar, particles::ParticleSetMethod_t);
				MEMBER(b_active_range, particles::C_INIT_RemapParticleCountToScalar, bool);
				MEMBER(b_invert, particles::C_INIT_RemapParticleCountToScalar, bool);
				MEMBER(b_wrap, particles::C_INIT_RemapParticleCountToScalar, bool);
				MEMBER(fl_remap_bias, particles::C_INIT_RemapParticleCountToScalar, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapParticleCountToScalar

			class C_INIT_RemapParticleCountToNamedModelElementScalar : public particles::C_INIT_RemapParticleCountToScalar {
				MEMBER(h_model, particles::C_INIT_RemapParticleCountToNamedModelElementScalar, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);
				MEMBER(output_min_name, particles::C_INIT_RemapParticleCountToNamedModelElementScalar, CUtlString);
				MEMBER(output_max_name, particles::C_INIT_RemapParticleCountToNamedModelElementScalar, CUtlString);
				MEMBER(b_model_from_renderer, particles::C_INIT_RemapParticleCountToNamedModelElementScalar, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapParticleCountToNamedModelElementScalar

			class C_INIT_RemapParticleCountToNamedModelBodyPartScalar : public particles::C_INIT_RemapParticleCountToNamedModelElementScalar {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapParticleCountToNamedModelBodyPartScalar

			class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar : public particles::C_INIT_RemapParticleCountToNamedModelElementScalar {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar

			class C_INIT_RemapParticleCountToNamedModelSequenceScalar : public particles::C_INIT_RemapParticleCountToNamedModelElementScalar {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapParticleCountToNamedModelSequenceScalar

			class C_INIT_CreationNoise : public particles::CParticleFunctionInitializer {
				MEMBER(n_field_output, particles::C_INIT_CreationNoise, particles::ParticleAttributeIndex_t);
				MEMBER(b_abs_val, particles::C_INIT_CreationNoise, bool);
				MEMBER(b_abs_val_inv, particles::C_INIT_CreationNoise, bool);
				MEMBER(fl_offset, particles::C_INIT_CreationNoise, float);
				MEMBER(fl_output_min, particles::C_INIT_CreationNoise, float);
				MEMBER(fl_output_max, particles::C_INIT_CreationNoise, float);
				MEMBER(fl_noise_scale, particles::C_INIT_CreationNoise, float);
				MEMBER(fl_noise_scale_loc, particles::C_INIT_CreationNoise, float);
				MEMBER(vec_offset_loc, particles::C_INIT_CreationNoise, Vector);
				MEMBER(fl_world_time_scale, particles::C_INIT_CreationNoise, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreationNoise

			class C_INIT_DistanceToCPInit : public particles::CParticleFunctionInitializer {
				MEMBER(n_field_output, particles::C_INIT_DistanceToCPInit, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_INIT_DistanceToCPInit, particleslib::CPerParticleFloatInput);
				MEMBER(fl_input_max, particles::C_INIT_DistanceToCPInit, particleslib::CPerParticleFloatInput);
				MEMBER(fl_output_min, particles::C_INIT_DistanceToCPInit, particleslib::CPerParticleFloatInput);
				MEMBER(fl_output_max, particles::C_INIT_DistanceToCPInit, particleslib::CPerParticleFloatInput);
				MEMBER(n_start_cp, particles::C_INIT_DistanceToCPInit, int32_t);
				MEMBER(b_los, particles::C_INIT_DistanceToCPInit, bool);
				MEMBER_ARR(collision_group_name, particles::C_INIT_DistanceToCPInit, 128, char);
				MEMBER(n_trace_set, particles::C_INIT_DistanceToCPInit, particles::ParticleTraceSet_t);
				MEMBER(fl_max_trace_length, particles::C_INIT_DistanceToCPInit, particleslib::CPerParticleFloatInput);
				MEMBER(fl_losscale, particles::C_INIT_DistanceToCPInit, float);
				MEMBER(n_set_method, particles::C_INIT_DistanceToCPInit, particles::ParticleSetMethod_t);
				MEMBER(b_active_range, particles::C_INIT_DistanceToCPInit, bool);
				MEMBER(vec_distance_scale, particles::C_INIT_DistanceToCPInit, Vector);
				MEMBER(fl_remap_bias, particles::C_INIT_DistanceToCPInit, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_DistanceToCPInit

			class C_INIT_CreateFromPlaneCache : public particles::CParticleFunctionInitializer {
				MEMBER(vec_offset_min, particles::C_INIT_CreateFromPlaneCache, Vector);
				MEMBER(vec_offset_max, particles::C_INIT_CreateFromPlaneCache, Vector);
				MEMBER(b_use_normal, particles::C_INIT_CreateFromPlaneCache, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreateFromPlaneCache

			class C_INIT_InitFloatCollection : public particles::CParticleFunctionInitializer {
				MEMBER(input_value, particles::C_INIT_InitFloatCollection, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_output_field, particles::C_INIT_InitFloatCollection, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_InitFloatCollection

			class C_INIT_RemapNamedModelElementToScalar : public particles::CParticleFunctionInitializer {
				MEMBER(h_model, particles::C_INIT_RemapNamedModelElementToScalar, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);
				MEMBER(names, particles::C_INIT_RemapNamedModelElementToScalar, cutl_vector<CUtlString>);
				MEMBER(values, particles::C_INIT_RemapNamedModelElementToScalar, cutl_vector<float>);
				MEMBER(n_field_input, particles::C_INIT_RemapNamedModelElementToScalar, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_INIT_RemapNamedModelElementToScalar, particles::ParticleAttributeIndex_t);
				MEMBER(n_set_method, particles::C_INIT_RemapNamedModelElementToScalar, particles::ParticleSetMethod_t);
				MEMBER(b_model_from_renderer, particles::C_INIT_RemapNamedModelElementToScalar, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapNamedModelElementToScalar

			class C_INIT_RemapNamedModelBodyPartToScalar : public particles::C_INIT_RemapNamedModelElementToScalar {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapNamedModelBodyPartToScalar

			class C_INIT_RemapNamedModelMeshGroupToScalar : public particles::C_INIT_RemapNamedModelElementToScalar {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapNamedModelMeshGroupToScalar

			class C_INIT_RemapNamedModelSequenceToScalar : public particles::C_INIT_RemapNamedModelElementToScalar {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapNamedModelSequenceToScalar

			class C_INIT_SetVectorAttributeToVectorExpression : public particles::CParticleFunctionInitializer {
				MEMBER(n_expression, particles::C_INIT_SetVectorAttributeToVectorExpression, particles::VectorExpressionType_t);
				MEMBER(v_input1, particles::C_INIT_SetVectorAttributeToVectorExpression, particleslib::CPerParticleVecInput);
				MEMBER(v_input2, particles::C_INIT_SetVectorAttributeToVectorExpression, particleslib::CPerParticleVecInput);
				MEMBER(n_output_field, particles::C_INIT_SetVectorAttributeToVectorExpression, particles::ParticleAttributeIndex_t);
				MEMBER(n_set_method, particles::C_INIT_SetVectorAttributeToVectorExpression, particles::ParticleSetMethod_t);
				MEMBER(b_normalized_output, particles::C_INIT_SetVectorAttributeToVectorExpression, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_SetVectorAttributeToVectorExpression

			class C_INIT_RandomVectorComponent : public particles::CParticleFunctionInitializer {
				MEMBER(fl_min, particles::C_INIT_RandomVectorComponent, float);
				MEMBER(fl_max, particles::C_INIT_RandomVectorComponent, float);
				MEMBER(n_field_output, particles::C_INIT_RandomVectorComponent, particles::ParticleAttributeIndex_t);
				MEMBER(n_component, particles::C_INIT_RandomVectorComponent, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomVectorComponent

			class C_INIT_PositionWarp : public particles::CParticleFunctionInitializer {
				MEMBER(vec_warp_min, particles::C_INIT_PositionWarp, particleslib::CParticleCollectionVecInput);
				MEMBER(vec_warp_max, particles::C_INIT_PositionWarp, particleslib::CParticleCollectionVecInput);
				MEMBER(n_scale_control_point_number, particles::C_INIT_PositionWarp, int32_t);
				MEMBER(n_control_point_number, particles::C_INIT_PositionWarp, int32_t);
				MEMBER(n_radius_component, particles::C_INIT_PositionWarp, int32_t);
				MEMBER(fl_warp_time, particles::C_INIT_PositionWarp, float);
				MEMBER(fl_warp_start_time, particles::C_INIT_PositionWarp, float);
				MEMBER(fl_prev_pos_scale, particles::C_INIT_PositionWarp, float);
				MEMBER(b_invert_warp, particles::C_INIT_PositionWarp, bool);
				MEMBER(b_use_count, particles::C_INIT_PositionWarp, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_PositionWarp

			class C_INIT_RemapQAnglesToRotation : public particles::CParticleFunctionInitializer {
				MEMBER(transform_input, particles::C_INIT_RemapQAnglesToRotation, particleslib::CParticleTransformInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapQAnglesToRotation

			class C_INIT_RemapSpeedToScalar : public particles::CParticleFunctionInitializer {
				MEMBER(n_field_output, particles::C_INIT_RemapSpeedToScalar, particles::ParticleAttributeIndex_t);
				MEMBER(n_control_point_number, particles::C_INIT_RemapSpeedToScalar, int32_t);
				MEMBER(fl_start_time, particles::C_INIT_RemapSpeedToScalar, float);
				MEMBER(fl_end_time, particles::C_INIT_RemapSpeedToScalar, float);
				MEMBER(fl_input_min, particles::C_INIT_RemapSpeedToScalar, float);
				MEMBER(fl_input_max, particles::C_INIT_RemapSpeedToScalar, float);
				MEMBER(fl_output_min, particles::C_INIT_RemapSpeedToScalar, float);
				MEMBER(fl_output_max, particles::C_INIT_RemapSpeedToScalar, float);
				MEMBER(n_set_method, particles::C_INIT_RemapSpeedToScalar, particles::ParticleSetMethod_t);
				MEMBER(b_per_particle, particles::C_INIT_RemapSpeedToScalar, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapSpeedToScalar

			class C_INIT_SetHitboxToModel : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point_number, particles::C_INIT_SetHitboxToModel, int32_t);
				MEMBER(n_force_in_model, particles::C_INIT_SetHitboxToModel, int32_t);
				MEMBER(b_even_distribution, particles::C_INIT_SetHitboxToModel, bool);
				MEMBER(n_desired_hitbox, particles::C_INIT_SetHitboxToModel, int32_t);
				MEMBER(vec_hit_box_scale, particles::C_INIT_SetHitboxToModel, particleslib::CParticleCollectionVecInput);
				MEMBER(vec_direction_bias, particles::C_INIT_SetHitboxToModel, Vector);
				MEMBER(b_maintain_hitbox, particles::C_INIT_SetHitboxToModel, bool);
				MEMBER(b_use_bones, particles::C_INIT_SetHitboxToModel, bool);
				MEMBER_ARR(hitbox_set_name, particles::C_INIT_SetHitboxToModel, 128, char);
				MEMBER(fl_shell_size, particles::C_INIT_SetHitboxToModel, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_SetHitboxToModel

			class C_INIT_RandomRadius : public particles::CParticleFunctionInitializer {
				MEMBER(fl_radius_min, particles::C_INIT_RandomRadius, float);
				MEMBER(fl_radius_max, particles::C_INIT_RandomRadius, float);
				MEMBER(fl_radius_rand_exponent, particles::C_INIT_RandomRadius, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomRadius

			class C_INIT_RandomLifeTime : public particles::CParticleFunctionInitializer {
				MEMBER(f_lifetime_min, particles::C_INIT_RandomLifeTime, float);
				MEMBER(f_lifetime_max, particles::C_INIT_RandomLifeTime, float);
				MEMBER(f_lifetime_rand_exponent, particles::C_INIT_RandomLifeTime, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomLifeTime

			class C_INIT_CreatePhyllotaxis : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point_number, particles::C_INIT_CreatePhyllotaxis, int32_t);
				MEMBER(n_scale_cp, particles::C_INIT_CreatePhyllotaxis, int32_t);
				MEMBER(n_component, particles::C_INIT_CreatePhyllotaxis, int32_t);
				MEMBER(f_rad_cent_core, particles::C_INIT_CreatePhyllotaxis, float);
				MEMBER(f_rad_per_point, particles::C_INIT_CreatePhyllotaxis, float);
				MEMBER(f_rad_per_point_to, particles::C_INIT_CreatePhyllotaxis, float);
				MEMBER(fpoint_angle, particles::C_INIT_CreatePhyllotaxis, float);
				MEMBER(fsize_overall, particles::C_INIT_CreatePhyllotaxis, float);
				MEMBER(f_rad_bias, particles::C_INIT_CreatePhyllotaxis, float);
				MEMBER(f_min_rad, particles::C_INIT_CreatePhyllotaxis, float);
				MEMBER(f_dist_bias, particles::C_INIT_CreatePhyllotaxis, float);
				MEMBER(b_use_local_coords, particles::C_INIT_CreatePhyllotaxis, bool);
				MEMBER(b_use_with_cont_emit, particles::C_INIT_CreatePhyllotaxis, bool);
				MEMBER(b_use_orig_radius, particles::C_INIT_CreatePhyllotaxis, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreatePhyllotaxis

			class C_INIT_InitFromParentKilled : public particles::CParticleFunctionInitializer {
				MEMBER(n_attribute_to_copy, particles::C_INIT_InitFromParentKilled, particles::ParticleAttributeIndex_t);
				MEMBER(n_event_type, particles::C_INIT_InitFromParentKilled, particles::EventTypeSelection_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_InitFromParentKilled

			class C_INIT_RandomNamedModelElement : public particles::CParticleFunctionInitializer {
				MEMBER(h_model, particles::C_INIT_RandomNamedModelElement, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);
				MEMBER(names, particles::C_INIT_RandomNamedModelElement, cutl_vector<CUtlString>);
				MEMBER(b_shuffle, particles::C_INIT_RandomNamedModelElement, bool);
				MEMBER(b_linear, particles::C_INIT_RandomNamedModelElement, bool);
				MEMBER(b_model_from_renderer, particles::C_INIT_RandomNamedModelElement, bool);
				MEMBER(n_field_output, particles::C_INIT_RandomNamedModelElement, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomNamedModelElement

			class C_INIT_RandomNamedModelMeshGroup : public particles::C_INIT_RandomNamedModelElement {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomNamedModelMeshGroup

			class C_INIT_RandomNamedModelBodyPart : public particles::C_INIT_RandomNamedModelElement {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomNamedModelBodyPart

			class C_INIT_RandomNamedModelSequence : public particles::C_INIT_RandomNamedModelElement {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomNamedModelSequence

			class C_INIT_RemapScalar : public particles::CParticleFunctionInitializer {
				MEMBER(n_field_input, particles::C_INIT_RemapScalar, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_INIT_RemapScalar, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_INIT_RemapScalar, float);
				MEMBER(fl_input_max, particles::C_INIT_RemapScalar, float);
				MEMBER(fl_output_min, particles::C_INIT_RemapScalar, float);
				MEMBER(fl_output_max, particles::C_INIT_RemapScalar, float);
				MEMBER(fl_start_time, particles::C_INIT_RemapScalar, float);
				MEMBER(fl_end_time, particles::C_INIT_RemapScalar, float);
				MEMBER(n_set_method, particles::C_INIT_RemapScalar, particles::ParticleSetMethod_t);
				MEMBER(b_active_range, particles::C_INIT_RemapScalar, bool);
				MEMBER(fl_remap_bias, particles::C_INIT_RemapScalar, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RemapScalar

			class C_INIT_MoveBetweenPoints : public particles::CParticleFunctionInitializer {
				MEMBER(fl_speed_min, particles::C_INIT_MoveBetweenPoints, particleslib::CPerParticleFloatInput);
				MEMBER(fl_speed_max, particles::C_INIT_MoveBetweenPoints, particleslib::CPerParticleFloatInput);
				MEMBER(fl_end_spread, particles::C_INIT_MoveBetweenPoints, particleslib::CPerParticleFloatInput);
				MEMBER(fl_start_offset, particles::C_INIT_MoveBetweenPoints, particleslib::CPerParticleFloatInput);
				MEMBER(fl_end_offset, particles::C_INIT_MoveBetweenPoints, particleslib::CPerParticleFloatInput);
				MEMBER(n_end_control_point_number, particles::C_INIT_MoveBetweenPoints, int32_t);
				MEMBER(b_trail_bias, particles::C_INIT_MoveBetweenPoints, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_MoveBetweenPoints

			class C_INIT_SetAttributeToScalarExpression : public particles::CParticleFunctionInitializer {
				MEMBER(n_expression, particles::C_INIT_SetAttributeToScalarExpression, particles::ScalarExpressionType_t);
				MEMBER(fl_input1, particles::C_INIT_SetAttributeToScalarExpression, particleslib::CPerParticleFloatInput);
				MEMBER(fl_input2, particles::C_INIT_SetAttributeToScalarExpression, particleslib::CPerParticleFloatInput);
				MEMBER(fl_output_remap, particles::C_INIT_SetAttributeToScalarExpression, particleslib::CParticleRemapFloatInput);
				MEMBER(n_output_field, particles::C_INIT_SetAttributeToScalarExpression, particles::ParticleAttributeIndex_t);
				MEMBER(n_set_method, particles::C_INIT_SetAttributeToScalarExpression, particles::ParticleSetMethod_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_SetAttributeToScalarExpression

			class C_INIT_SequenceLifeTime : public particles::CParticleFunctionInitializer {
				MEMBER(fl_framerate, particles::C_INIT_SequenceLifeTime, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_SequenceLifeTime

			class C_INIT_CreateSequentialPath : public particles::CParticleFunctionInitializer {
				MEMBER(f_max_distance, particles::C_INIT_CreateSequentialPath, float);
				MEMBER(fl_num_to_assign, particles::C_INIT_CreateSequentialPath, float);
				MEMBER(b_loop, particles::C_INIT_CreateSequentialPath, bool);
				MEMBER(b_cppairs, particles::C_INIT_CreateSequentialPath, bool);
				MEMBER(b_save_offset, particles::C_INIT_CreateSequentialPath, bool);
				MEMBER(path_params, particles::C_INIT_CreateSequentialPath, particles::CPathParameters);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_CreateSequentialPath

			class C_INIT_InitialRepulsionVelocity : public particles::CParticleFunctionInitializer {
				MEMBER_ARR(collision_group_name, particles::C_INIT_InitialRepulsionVelocity, 128, char);
				MEMBER(n_trace_set, particles::C_INIT_InitialRepulsionVelocity, particles::ParticleTraceSet_t);
				MEMBER(vec_output_min, particles::C_INIT_InitialRepulsionVelocity, Vector);
				MEMBER(vec_output_max, particles::C_INIT_InitialRepulsionVelocity, Vector);
				MEMBER(n_control_point_number, particles::C_INIT_InitialRepulsionVelocity, int32_t);
				MEMBER(b_per_particle, particles::C_INIT_InitialRepulsionVelocity, bool);
				MEMBER(b_translate, particles::C_INIT_InitialRepulsionVelocity, bool);
				MEMBER(b_proportional, particles::C_INIT_InitialRepulsionVelocity, bool);
				MEMBER(fl_trace_length, particles::C_INIT_InitialRepulsionVelocity, float);
				MEMBER(b_per_particle_tr, particles::C_INIT_InitialRepulsionVelocity, bool);
				MEMBER(b_inherit, particles::C_INIT_InitialRepulsionVelocity, bool);
				MEMBER(n_child_cp, particles::C_INIT_InitialRepulsionVelocity, int32_t);
				MEMBER(n_child_group_id, particles::C_INIT_InitialRepulsionVelocity, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_InitialRepulsionVelocity

			class C_INIT_RandomAlpha : public particles::CParticleFunctionInitializer {
				MEMBER(n_field_output, particles::C_INIT_RandomAlpha, particles::ParticleAttributeIndex_t);
				MEMBER(n_alpha_min, particles::C_INIT_RandomAlpha, int32_t);
				MEMBER(n_alpha_max, particles::C_INIT_RandomAlpha, int32_t);
				MEMBER(fl_alpha_rand_exponent, particles::C_INIT_RandomAlpha, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomAlpha

			class C_INIT_RandomModelSequence : public particles::CParticleFunctionInitializer {
				MEMBER_ARR(activity_name, particles::C_INIT_RandomModelSequence, 256, char);
				MEMBER_ARR(sequence_name, particles::C_INIT_RandomModelSequence, 256, char);
				MEMBER(h_model, particles::C_INIT_RandomModelSequence, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomModelSequence

			class C_INIT_InitSkinnedPositionFromCPSnapshot : public particles::CParticleFunctionInitializer {
				MEMBER(n_snapshot_control_point_number, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, int32_t);
				MEMBER(n_control_point_number, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, int32_t);
				MEMBER(b_random, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, bool);
				MEMBER(n_random_seed, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, int32_t);
				MEMBER(b_rigid, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, bool);
				MEMBER(b_set_normal, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, bool);
				MEMBER(b_ignore_dt, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, bool);
				MEMBER(fl_min_normal_velocity, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, float);
				MEMBER(fl_max_normal_velocity, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, float);
				MEMBER(n_index_type, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, particles::SnapshotIndexType_t);
				MEMBER(fl_read_index, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, particleslib::CPerParticleFloatInput);
				MEMBER(fl_increment, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, float);
				MEMBER(n_full_loop_increment, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, int32_t);
				MEMBER(n_snap_shot_start_point, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, int32_t);
				MEMBER(fl_bone_velocity, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, float);
				MEMBER(fl_bone_velocity_max, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, float);
				MEMBER(b_copy_color, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, bool);
				MEMBER(b_copy_alpha, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, bool);
				MEMBER(b_set_radius, particles::C_INIT_InitSkinnedPositionFromCPSnapshot, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_InitSkinnedPositionFromCPSnapshot

			class C_INIT_LifespanFromVelocity : public particles::CParticleFunctionInitializer {
				MEMBER(vec_component_scale, particles::C_INIT_LifespanFromVelocity, Vector);
				MEMBER(fl_trace_offset, particles::C_INIT_LifespanFromVelocity, float);
				MEMBER(fl_max_trace_length, particles::C_INIT_LifespanFromVelocity, float);
				MEMBER(fl_trace_tolerance, particles::C_INIT_LifespanFromVelocity, float);
				MEMBER(n_max_planes, particles::C_INIT_LifespanFromVelocity, int32_t);
				MEMBER_ARR(collision_group_name, particles::C_INIT_LifespanFromVelocity, 128, char);
				MEMBER(n_trace_set, particles::C_INIT_LifespanFromVelocity, particles::ParticleTraceSet_t);
				MEMBER(b_include_water, particles::C_INIT_LifespanFromVelocity, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_LifespanFromVelocity

			class C_INIT_VelocityRandom : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point_number, particles::C_INIT_VelocityRandom, int32_t);
				MEMBER(f_speed_min, particles::C_INIT_VelocityRandom, particleslib::CPerParticleFloatInput);
				MEMBER(f_speed_max, particles::C_INIT_VelocityRandom, particleslib::CPerParticleFloatInput);
				MEMBER(local_coordinate_system_speed_min, particles::C_INIT_VelocityRandom, particleslib::CPerParticleVecInput);
				MEMBER(local_coordinate_system_speed_max, particles::C_INIT_VelocityRandom, particleslib::CPerParticleVecInput);
				MEMBER(b_ignore_dt, particles::C_INIT_VelocityRandom, bool);
				MEMBER(randomness_parameters, particles::C_INIT_VelocityRandom, particles::CRandomNumberGeneratorParameters);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_VelocityRandom

			class C_INIT_RandomVector : public particles::CParticleFunctionInitializer {
				MEMBER(vec_min, particles::C_INIT_RandomVector, Vector);
				MEMBER(vec_max, particles::C_INIT_RandomVector, Vector);
				MEMBER(n_field_output, particles::C_INIT_RandomVector, particles::ParticleAttributeIndex_t);
				MEMBER(randomness_parameters, particles::C_INIT_RandomVector, particles::CRandomNumberGeneratorParameters);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomVector

			class C_INIT_RtEnvCull : public particles::CParticleFunctionInitializer {
				MEMBER(vec_test_dir, particles::C_INIT_RtEnvCull, Vector);
				MEMBER(vec_test_normal, particles::C_INIT_RtEnvCull, Vector);
				MEMBER(b_use_velocity, particles::C_INIT_RtEnvCull, bool);
				MEMBER(b_cull_on_miss, particles::C_INIT_RtEnvCull, bool);
				MEMBER(b_life_adjust, particles::C_INIT_RtEnvCull, bool);
				MEMBER_ARR(rt_env_name, particles::C_INIT_RtEnvCull, 128, char);
				MEMBER(n_rtenv_cp, particles::C_INIT_RtEnvCull, int32_t);
				MEMBER(n_component, particles::C_INIT_RtEnvCull, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RtEnvCull

			class C_INIT_StatusEffect : public particles::CParticleFunctionInitializer {
				MEMBER(n_detail2_combo, particles::C_INIT_StatusEffect, particles::Detail2Combo_t);
				MEMBER(fl_detail2_rotation, particles::C_INIT_StatusEffect, float);
				MEMBER(fl_detail2_scale, particles::C_INIT_StatusEffect, float);
				MEMBER(fl_detail2_blend_factor, particles::C_INIT_StatusEffect, float);
				MEMBER(fl_color_warp_intensity, particles::C_INIT_StatusEffect, float);
				MEMBER(fl_diffuse_warp_blend_to_full, particles::C_INIT_StatusEffect, float);
				MEMBER(fl_env_map_intensity, particles::C_INIT_StatusEffect, float);
				MEMBER(fl_ambient_scale, particles::C_INIT_StatusEffect, float);
				MEMBER(specular_color, particles::C_INIT_StatusEffect, Color);
				MEMBER(fl_specular_scale, particles::C_INIT_StatusEffect, float);
				MEMBER(fl_specular_exponent, particles::C_INIT_StatusEffect, float);
				MEMBER(fl_specular_exponent_blend_to_full, particles::C_INIT_StatusEffect, float);
				MEMBER(fl_specular_blend_to_full, particles::C_INIT_StatusEffect, float);
				MEMBER(rim_light_color, particles::C_INIT_StatusEffect, Color);
				MEMBER(fl_rim_light_scale, particles::C_INIT_StatusEffect, float);
				MEMBER(fl_reflections_tint_by_base_blend_to_none, particles::C_INIT_StatusEffect, float);
				MEMBER(fl_metalness_blend_to_full, particles::C_INIT_StatusEffect, float);
				MEMBER(fl_self_illum_blend_to_full, particles::C_INIT_StatusEffect, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_StatusEffect

			class C_INIT_SetHitboxToClosest : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point_number, particles::C_INIT_SetHitboxToClosest, int32_t);
				MEMBER(n_desired_hitbox, particles::C_INIT_SetHitboxToClosest, int32_t);
				MEMBER(vec_hit_box_scale, particles::C_INIT_SetHitboxToClosest, particleslib::CParticleCollectionVecInput);
				MEMBER_ARR(hitbox_set_name, particles::C_INIT_SetHitboxToClosest, 128, char);
				MEMBER(b_use_bones, particles::C_INIT_SetHitboxToClosest, bool);
				MEMBER(b_use_closest_point_on_hitbox, particles::C_INIT_SetHitboxToClosest, bool);
				MEMBER(n_test_type, particles::C_INIT_SetHitboxToClosest, particles::ClosestPointTestType_t);
				MEMBER(fl_hybrid_ratio, particles::C_INIT_SetHitboxToClosest, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_update_position, particles::C_INIT_SetHitboxToClosest, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_SetHitboxToClosest

			class C_INIT_PlaneCull : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point, particles::C_INIT_PlaneCull, int32_t);
				MEMBER(fl_distance, particles::C_INIT_PlaneCull, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_cull_inside, particles::C_INIT_PlaneCull, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_PlaneCull

			class C_INIT_ScaleVelocity : public particles::CParticleFunctionInitializer {
				MEMBER(vec_scale, particles::C_INIT_ScaleVelocity, particleslib::CParticleCollectionVecInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_ScaleVelocity

			class C_INIT_StatusEffectCitadel : public particles::CParticleFunctionInitializer {
				MEMBER(fl_sfxcolor_warp_amount, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxnormal_amount, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxmetalness_amount, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxroughness_amount, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxself_illum_amount, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxsscale, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxsscroll_x, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxsscroll_y, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxsscroll_z, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxsoffset_x, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxsoffset_y, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxsoffset_z, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(n_detail_combo, particles::C_INIT_StatusEffectCitadel, particles::DetailCombo_t);
				MEMBER(fl_sfxsdetail_amount, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxsdetail_scale, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxsdetail_scroll_x, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxsdetail_scroll_y, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxsdetail_scroll_z, particles::C_INIT_StatusEffectCitadel, float);
				MEMBER(fl_sfxsuse_model_uvs, particles::C_INIT_StatusEffectCitadel, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_StatusEffectCitadel

			class C_INIT_NormalOffset : public particles::CParticleFunctionInitializer {
				MEMBER(offset_min, particles::C_INIT_NormalOffset, Vector);
				MEMBER(offset_max, particles::C_INIT_NormalOffset, Vector);
				MEMBER(n_control_point_number, particles::C_INIT_NormalOffset, int32_t);
				MEMBER(b_local_coords, particles::C_INIT_NormalOffset, bool);
				MEMBER(b_normalize, particles::C_INIT_NormalOffset, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_NormalOffset

			class C_INIT_RingWave : public particles::CParticleFunctionInitializer {
				MEMBER(transform_input, particles::C_INIT_RingWave, particleslib::CParticleTransformInput);
				MEMBER(fl_particles_per_orbit, particles::C_INIT_RingWave, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_initial_radius, particles::C_INIT_RingWave, particleslib::CPerParticleFloatInput);
				MEMBER(fl_thickness, particles::C_INIT_RingWave, particleslib::CPerParticleFloatInput);
				MEMBER(fl_initial_speed_min, particles::C_INIT_RingWave, particleslib::CPerParticleFloatInput);
				MEMBER(fl_initial_speed_max, particles::C_INIT_RingWave, particleslib::CPerParticleFloatInput);
				MEMBER(fl_roll, particles::C_INIT_RingWave, particleslib::CPerParticleFloatInput);
				MEMBER(fl_pitch, particles::C_INIT_RingWave, particleslib::CPerParticleFloatInput);
				MEMBER(fl_yaw, particles::C_INIT_RingWave, particleslib::CPerParticleFloatInput);
				MEMBER(b_even_distribution, particles::C_INIT_RingWave, bool);
				MEMBER(b_xyvelocity_only, particles::C_INIT_RingWave, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RingWave

			class C_INIT_InitialVelocityNoise : public particles::CParticleFunctionInitializer {
				MEMBER(vec_abs_val, particles::C_INIT_InitialVelocityNoise, Vector);
				MEMBER(vec_abs_val_inv, particles::C_INIT_InitialVelocityNoise, Vector);
				MEMBER(vec_offset_loc, particles::C_INIT_InitialVelocityNoise, particleslib::CPerParticleVecInput);
				MEMBER(fl_offset, particles::C_INIT_InitialVelocityNoise, particleslib::CPerParticleFloatInput);
				MEMBER(vec_output_min, particles::C_INIT_InitialVelocityNoise, particleslib::CPerParticleVecInput);
				MEMBER(vec_output_max, particles::C_INIT_InitialVelocityNoise, particleslib::CPerParticleVecInput);
				MEMBER(fl_noise_scale, particles::C_INIT_InitialVelocityNoise, particleslib::CPerParticleFloatInput);
				MEMBER(fl_noise_scale_loc, particles::C_INIT_InitialVelocityNoise, particleslib::CPerParticleFloatInput);
				MEMBER(transform_input, particles::C_INIT_InitialVelocityNoise, particleslib::CParticleTransformInput);
				MEMBER(b_ignore_dt, particles::C_INIT_InitialVelocityNoise, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_InitialVelocityNoise

			class C_INIT_RandomTrailLength : public particles::CParticleFunctionInitializer {
				MEMBER(fl_min_length, particles::C_INIT_RandomTrailLength, float);
				MEMBER(fl_max_length, particles::C_INIT_RandomTrailLength, float);
				MEMBER(fl_length_rand_exponent, particles::C_INIT_RandomTrailLength, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_RandomTrailLength

			class C_INIT_Orient2DRelToCP : public particles::CParticleFunctionInitializer {
				MEMBER(n_cp, particles::C_INIT_Orient2DRelToCP, int32_t);
				MEMBER(n_field_output, particles::C_INIT_Orient2DRelToCP, particles::ParticleAttributeIndex_t);
				MEMBER(fl_rot_offset, particles::C_INIT_Orient2DRelToCP, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_Orient2DRelToCP

			class C_INIT_VelocityRadialRandom : public particles::CParticleFunctionInitializer {
				MEMBER(n_control_point_number, particles::C_INIT_VelocityRadialRandom, int32_t);
				MEMBER(f_speed_min, particles::C_INIT_VelocityRadialRandom, particleslib::CPerParticleFloatInput);
				MEMBER(f_speed_max, particles::C_INIT_VelocityRadialRandom, particleslib::CPerParticleFloatInput);
				MEMBER(vec_local_coordinate_system_speed_scale, particles::C_INIT_VelocityRadialRandom, Vector);
				MEMBER(b_ignore_delta, particles::C_INIT_VelocityRadialRandom, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_VelocityRadialRandom

			class C_INIT_OffsetVectorToVector : public particles::CParticleFunctionInitializer {
				MEMBER(n_field_input, particles::C_INIT_OffsetVectorToVector, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_INIT_OffsetVectorToVector, particles::ParticleAttributeIndex_t);
				MEMBER(vec_output_min, particles::C_INIT_OffsetVectorToVector, Vector);
				MEMBER(vec_output_max, particles::C_INIT_OffsetVectorToVector, Vector);
				MEMBER(randomness_parameters, particles::C_INIT_OffsetVectorToVector, particles::CRandomNumberGeneratorParameters);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_INIT_OffsetVectorToVector

			class CParticleFunctionRenderer : public particles::CParticleFunction {
				MEMBER(visibility_inputs, particles::CParticleFunctionRenderer, particles::CParticleVisibilityInputs);
				MEMBER(b_cannot_be_refracted, particles::CParticleFunctionRenderer, bool);
				MEMBER(b_skip_rendering_on_mobile, particles::CParticleFunctionRenderer, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleFunctionRenderer

			class C_OP_RenderLightBeam : public particles::CParticleFunctionRenderer {
				MEMBER(v_color_blend, particles::C_OP_RenderLightBeam, particleslib::CParticleCollectionVecInput);
				MEMBER(n_color_blend_type, particles::C_OP_RenderLightBeam, particles::ParticleColorBlendType_t);
				MEMBER(fl_brightness_lumens_per_meter, particles::C_OP_RenderLightBeam, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_cast_shadows, particles::C_OP_RenderLightBeam, bool);
				MEMBER(fl_skirt, particles::C_OP_RenderLightBeam, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_range, particles::C_OP_RenderLightBeam, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_thickness, particles::C_OP_RenderLightBeam, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderLightBeam

			class C_OP_RenderFlattenGrass : public particles::CParticleFunctionRenderer {
				MEMBER(fl_flatten_strength, particles::C_OP_RenderFlattenGrass, float);
				MEMBER(n_strength_field_override, particles::C_OP_RenderFlattenGrass, particles::ParticleAttributeIndex_t);
				MEMBER(fl_radius_scale, particles::C_OP_RenderFlattenGrass, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderFlattenGrass

			class C_OP_RenderStandardLight : public particles::CParticleFunctionRenderer {
				MEMBER(n_light_type, particles::C_OP_RenderStandardLight, particles::ParticleLightTypeChoiceList_t);
				MEMBER(vec_color_scale, particles::C_OP_RenderStandardLight, particleslib::CParticleCollectionVecInput);
				MEMBER(n_color_blend_type, particles::C_OP_RenderStandardLight, particles::ParticleColorBlendType_t);
				MEMBER(fl_intensity, particles::C_OP_RenderStandardLight, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_cast_shadows, particles::C_OP_RenderStandardLight, bool);
				MEMBER(fl_theta, particles::C_OP_RenderStandardLight, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_phi, particles::C_OP_RenderStandardLight, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_radius_multiplier, particles::C_OP_RenderStandardLight, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_attenuation_style, particles::C_OP_RenderStandardLight, particles::StandardLightingAttenuationStyle_t);
				MEMBER(fl_falloff_linearity, particles::C_OP_RenderStandardLight, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_fifty_percent_falloff, particles::C_OP_RenderStandardLight, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_zero_percent_falloff, particles::C_OP_RenderStandardLight, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_render_diffuse, particles::C_OP_RenderStandardLight, bool);
				MEMBER(b_render_specular, particles::C_OP_RenderStandardLight, bool);
				MEMBER(light_cookie, particles::C_OP_RenderStandardLight, CUtlString);
				MEMBER(n_priority, particles::C_OP_RenderStandardLight, int32_t);
				MEMBER(n_fog_lighting_mode, particles::C_OP_RenderStandardLight, particles::ParticleLightFogLightingMode_t);
				MEMBER(fl_fog_contribution, particles::C_OP_RenderStandardLight, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(n_capsule_light_behavior, particles::C_OP_RenderStandardLight, particles::ParticleLightBehaviorChoiceList_t);
				MEMBER(fl_capsule_length, particles::C_OP_RenderStandardLight, float);
				MEMBER(b_reverse_order, particles::C_OP_RenderStandardLight, bool);
				MEMBER(b_closed_loop, particles::C_OP_RenderStandardLight, bool);
				MEMBER(n_prev_pnt_source, particles::C_OP_RenderStandardLight, particles::ParticleAttributeIndex_t);
				MEMBER(fl_max_length, particles::C_OP_RenderStandardLight, float);
				MEMBER(fl_min_length, particles::C_OP_RenderStandardLight, float);
				MEMBER(b_ignore_dt, particles::C_OP_RenderStandardLight, bool);
				MEMBER(fl_constrain_radius_to_length_ratio, particles::C_OP_RenderStandardLight, float);
				MEMBER(fl_length_scale, particles::C_OP_RenderStandardLight, float);
				MEMBER(fl_length_fade_in_time, particles::C_OP_RenderStandardLight, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderStandardLight

			class C_OP_RenderStatusEffectCitadel : public particles::CParticleFunctionRenderer {
				MEMBER(p_texture_color_warp, particles::C_OP_RenderStatusEffectCitadel, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(p_texture_normal, particles::C_OP_RenderStatusEffectCitadel, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(p_texture_metalness, particles::C_OP_RenderStatusEffectCitadel, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(p_texture_roughness, particles::C_OP_RenderStatusEffectCitadel, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(p_texture_self_illum, particles::C_OP_RenderStatusEffectCitadel, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(p_texture_detail, particles::C_OP_RenderStatusEffectCitadel, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderStatusEffectCitadel

			class C_OP_RenderMaterialProxy : public particles::CParticleFunctionRenderer {
				MEMBER(n_material_control_point, particles::C_OP_RenderMaterialProxy, int32_t);
				MEMBER(n_proxy_type, particles::C_OP_RenderMaterialProxy, particles::MaterialProxyType_t);
				MEMBER(material_vars, particles::C_OP_RenderMaterialProxy, cutl_vector<particles::MaterialVariable_t>);
				MEMBER(h_override_material, particles::C_OP_RenderMaterialProxy, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(fl_material_override_enabled, particles::C_OP_RenderMaterialProxy, particleslib::CParticleCollectionFloatInput);
				MEMBER(vec_color_scale, particles::C_OP_RenderMaterialProxy, particleslib::CParticleCollectionVecInput);
				MEMBER(fl_alpha, particles::C_OP_RenderMaterialProxy, particleslib::CPerParticleFloatInput);
				MEMBER(n_color_blend_type, particles::C_OP_RenderMaterialProxy, particles::ParticleColorBlendType_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderMaterialProxy

			class C_OP_RenderProjected : public particles::CParticleFunctionRenderer {
				MEMBER(b_project_character, particles::C_OP_RenderProjected, bool);
				MEMBER(b_project_world, particles::C_OP_RenderProjected, bool);
				MEMBER(b_project_water, particles::C_OP_RenderProjected, bool);
				MEMBER(b_flip_horizontal, particles::C_OP_RenderProjected, bool);
				MEMBER(b_enable_projected_depth_controls, particles::C_OP_RenderProjected, bool);
				MEMBER(fl_min_projection_depth, particles::C_OP_RenderProjected, float);
				MEMBER(fl_max_projection_depth, particles::C_OP_RenderProjected, float);
				MEMBER(vec_projected_materials, particles::C_OP_RenderProjected, cutl_vector<particles::RenderProjectedMaterial_t>);
				MEMBER(fl_material_selection, particles::C_OP_RenderProjected, particleslib::CPerParticleFloatInput);
				MEMBER(fl_animation_time_scale, particles::C_OP_RenderProjected, float);
				MEMBER(b_orient_to_normal, particles::C_OP_RenderProjected, bool);
				MEMBER(material_vars, particles::C_OP_RenderProjected, cutl_vector<particles::MaterialVariable_t>);
				MEMBER(fl_radius_scale, particles::C_OP_RenderProjected, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_alpha_scale, particles::C_OP_RenderProjected, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_roll_scale, particles::C_OP_RenderProjected, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_alpha2_field, particles::C_OP_RenderProjected, particles::ParticleAttributeIndex_t);
				MEMBER(vec_color_scale, particles::C_OP_RenderProjected, particleslib::CParticleCollectionVecInput);
				MEMBER(n_color_blend_type, particles::C_OP_RenderProjected, particles::ParticleColorBlendType_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderProjected

			class C_OP_RenderOmni2Light : public particles::CParticleFunctionRenderer {
				MEMBER(n_light_type, particles::C_OP_RenderOmni2Light, particles::ParticleOmni2LightTypeChoiceList_t);
				MEMBER(v_color_blend, particles::C_OP_RenderOmni2Light, particleslib::CParticleCollectionVecInput);
				MEMBER(n_color_blend_type, particles::C_OP_RenderOmni2Light, particles::ParticleColorBlendType_t);
				MEMBER(n_brightness_unit, particles::C_OP_RenderOmni2Light, particles::ParticleLightUnitChoiceList_t);
				MEMBER(fl_brightness_lumens, particles::C_OP_RenderOmni2Light, particleslib::CPerParticleFloatInput);
				MEMBER(fl_brightness_candelas, particles::C_OP_RenderOmni2Light, particleslib::CPerParticleFloatInput);
				MEMBER(b_cast_shadows, particles::C_OP_RenderOmni2Light, bool);
				MEMBER(b_fog, particles::C_OP_RenderOmni2Light, bool);
				MEMBER(fl_fog_scale, particles::C_OP_RenderOmni2Light, particleslib::CPerParticleFloatInput);
				MEMBER(fl_luminaire_radius, particles::C_OP_RenderOmni2Light, particleslib::CPerParticleFloatInput);
				MEMBER(fl_skirt, particles::C_OP_RenderOmni2Light, particleslib::CPerParticleFloatInput);
				MEMBER(fl_range, particles::C_OP_RenderOmni2Light, particleslib::CPerParticleFloatInput);
				MEMBER(fl_inner_cone_angle, particles::C_OP_RenderOmni2Light, particleslib::CPerParticleFloatInput);
				MEMBER(fl_outer_cone_angle, particles::C_OP_RenderOmni2Light, particleslib::CPerParticleFloatInput);
				MEMBER(h_light_cookie, particles::C_OP_RenderOmni2Light, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(b_spherical_cookie, particles::C_OP_RenderOmni2Light, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderOmni2Light

			class C_OP_RenderClientPhysicsImpulse : public particles::CParticleFunctionRenderer {
				MEMBER(fl_radius, particles::C_OP_RenderClientPhysicsImpulse, particleslib::CPerParticleFloatInput);
				MEMBER(fl_magnitude, particles::C_OP_RenderClientPhysicsImpulse, particleslib::CPerParticleFloatInput);
				MEMBER(n_sim_id_filter, particles::C_OP_RenderClientPhysicsImpulse, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderClientPhysicsImpulse

			class C_OP_RenderTreeShake : public particles::CParticleFunctionRenderer {
				MEMBER(fl_peak_strength, particles::C_OP_RenderTreeShake, float);
				MEMBER(n_peak_strength_field_override, particles::C_OP_RenderTreeShake, particles::ParticleAttributeIndex_t);
				MEMBER(fl_radius, particles::C_OP_RenderTreeShake, float);
				MEMBER(n_radius_field_override, particles::C_OP_RenderTreeShake, particles::ParticleAttributeIndex_t);
				MEMBER(fl_shake_duration, particles::C_OP_RenderTreeShake, float);
				MEMBER(fl_transition_time, particles::C_OP_RenderTreeShake, float);
				MEMBER(fl_twist_amount, particles::C_OP_RenderTreeShake, float);
				MEMBER(fl_radial_amount, particles::C_OP_RenderTreeShake, float);
				MEMBER(fl_control_point_orientation_amount, particles::C_OP_RenderTreeShake, float);
				MEMBER(n_control_point_for_linear_direction, particles::C_OP_RenderTreeShake, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderTreeShake

			class C_OP_RenderScreenShake : public particles::CParticleFunctionRenderer {
				MEMBER(fl_duration_scale, particles::C_OP_RenderScreenShake, float);
				MEMBER(fl_radius_scale, particles::C_OP_RenderScreenShake, float);
				MEMBER(fl_frequency_scale, particles::C_OP_RenderScreenShake, float);
				MEMBER(fl_amplitude_scale, particles::C_OP_RenderScreenShake, float);
				MEMBER(n_radius_field, particles::C_OP_RenderScreenShake, particles::ParticleAttributeIndex_t);
				MEMBER(n_duration_field, particles::C_OP_RenderScreenShake, particles::ParticleAttributeIndex_t);
				MEMBER(n_frequency_field, particles::C_OP_RenderScreenShake, particles::ParticleAttributeIndex_t);
				MEMBER(n_amplitude_field, particles::C_OP_RenderScreenShake, particles::ParticleAttributeIndex_t);
				MEMBER(n_filter_cp, particles::C_OP_RenderScreenShake, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderScreenShake

			class C_OP_RenderText : public particles::CParticleFunctionRenderer {
				MEMBER(outline_color, particles::C_OP_RenderText, Color);
				MEMBER(default_text, particles::C_OP_RenderText, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderText

			class C_OP_RenderCables : public particles::CParticleFunctionRenderer {
				MEMBER(fl_radius_scale, particles::C_OP_RenderCables, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_alpha_scale, particles::C_OP_RenderCables, particleslib::CParticleCollectionFloatInput);
				MEMBER(vec_color_scale, particles::C_OP_RenderCables, particleslib::CParticleCollectionVecInput);
				MEMBER(n_color_blend_type, particles::C_OP_RenderCables, particles::ParticleColorBlendType_t);
				MEMBER(h_material, particles::C_OP_RenderCables, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(n_texture_repetition_mode, particles::C_OP_RenderCables, particles::TextureRepetitionMode_t);
				MEMBER(fl_texture_repeats_per_segment, particles::C_OP_RenderCables, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_texture_repeats_circumference, particles::C_OP_RenderCables, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_color_map_offset_v, particles::C_OP_RenderCables, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_color_map_offset_u, particles::C_OP_RenderCables, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_normal_map_offset_v, particles::C_OP_RenderCables, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_normal_map_offset_u, particles::C_OP_RenderCables, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_draw_cable_caps, particles::C_OP_RenderCables, bool);
				MEMBER(fl_cap_roundness, particles::C_OP_RenderCables, float);
				MEMBER(fl_cap_offset_amount, particles::C_OP_RenderCables, float);
				MEMBER(fl_tess_scale, particles::C_OP_RenderCables, float);
				MEMBER(n_min_tesselation, particles::C_OP_RenderCables, int32_t);
				MEMBER(n_max_tesselation, particles::C_OP_RenderCables, int32_t);
				MEMBER(n_roundness, particles::C_OP_RenderCables, int32_t);
				MEMBER(lighting_transform, particles::C_OP_RenderCables, particleslib::CParticleTransformInput);
				MEMBER(material_float_vars, particles::C_OP_RenderCables, cutl_vector<particles::FloatInputMaterialVariable_t>);
				MEMBER(material_vec_vars, particles::C_OP_RenderCables, cutl_vector<particles::VecInputMaterialVariable_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderCables

			class C_OP_RenderPoints : public particles::CParticleFunctionRenderer {
				MEMBER(h_material, particles::C_OP_RenderPoints, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderPoints

			class C_OP_RenderLights : public particles::C_OP_RenderPoints {
				MEMBER(fl_animation_rate, particles::C_OP_RenderLights, float);
				MEMBER(n_animation_type, particles::C_OP_RenderLights, particles::AnimationType_t);
				MEMBER(b_animate_in_fps, particles::C_OP_RenderLights, bool);
				MEMBER(fl_min_size, particles::C_OP_RenderLights, float);
				MEMBER(fl_max_size, particles::C_OP_RenderLights, float);
				MEMBER(fl_start_fade_size, particles::C_OP_RenderLights, float);
				MEMBER(fl_end_fade_size, particles::C_OP_RenderLights, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderLights

			class C_OP_RenderModels : public particles::CParticleFunctionRenderer {
				MEMBER(b_only_render_in_effects_bloom_pass, particles::C_OP_RenderModels, bool);
				MEMBER(b_only_render_in_effects_water_pass, particles::C_OP_RenderModels, bool);
				MEMBER(b_use_mixed_resolution_rendering, particles::C_OP_RenderModels, bool);
				MEMBER(b_only_render_in_effecs_game_overlay, particles::C_OP_RenderModels, bool);
				MEMBER(model_list, particles::C_OP_RenderModels, cutl_vector<particles::ModelReference_t>);
				MEMBER(n_body_group_field, particles::C_OP_RenderModels, particles::ParticleAttributeIndex_t);
				MEMBER(n_sub_model_field, particles::C_OP_RenderModels, particles::ParticleAttributeIndex_t);
				MEMBER(b_ignore_normal, particles::C_OP_RenderModels, bool);
				MEMBER(b_orient_z, particles::C_OP_RenderModels, bool);
				MEMBER(b_center_offset, particles::C_OP_RenderModels, bool);
				MEMBER(vec_local_offset, particles::C_OP_RenderModels, particleslib::CPerParticleVecInput);
				MEMBER(vec_local_rotation, particles::C_OP_RenderModels, particleslib::CPerParticleVecInput);
				MEMBER(b_ignore_radius, particles::C_OP_RenderModels, bool);
				MEMBER(n_model_scale_cp, particles::C_OP_RenderModels, int32_t);
				MEMBER(vec_component_scale, particles::C_OP_RenderModels, particleslib::CPerParticleVecInput);
				MEMBER(b_local_scale, particles::C_OP_RenderModels, bool);
				MEMBER(n_size_cull_bloat, particles::C_OP_RenderModels, int32_t);
				MEMBER(b_animated, particles::C_OP_RenderModels, bool);
				MEMBER(fl_animation_rate, particles::C_OP_RenderModels, particleslib::CPerParticleFloatInput);
				MEMBER(b_scale_animation_rate, particles::C_OP_RenderModels, bool);
				MEMBER(b_force_looping_animation, particles::C_OP_RenderModels, bool);
				MEMBER(b_reset_anim_on_stop, particles::C_OP_RenderModels, bool);
				MEMBER(b_manual_anim_frame, particles::C_OP_RenderModels, bool);
				MEMBER(n_animation_scale_field, particles::C_OP_RenderModels, particles::ParticleAttributeIndex_t);
				MEMBER(n_animation_field, particles::C_OP_RenderModels, particles::ParticleAttributeIndex_t);
				MEMBER(n_manual_frame_field, particles::C_OP_RenderModels, particles::ParticleAttributeIndex_t);
				MEMBER_ARR(activity_name, particles::C_OP_RenderModels, 256, char);
				MEMBER_ARR(sequence_name, particles::C_OP_RenderModels, 256, char);
				MEMBER(b_enable_cloth_simulation, particles::C_OP_RenderModels, bool);
				MEMBER_ARR(cloth_effect_name, particles::C_OP_RenderModels, 64, char);
				MEMBER(h_override_material, particles::C_OP_RenderModels, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(b_override_translucent_materials, particles::C_OP_RenderModels, bool);
				MEMBER(n_skin, particles::C_OP_RenderModels, particleslib::CPerParticleFloatInput);
				MEMBER(material_vars, particles::C_OP_RenderModels, cutl_vector<particles::MaterialVariable_t>);
				MEMBER(fl_manual_model_selection, particles::C_OP_RenderModels, particleslib::CPerParticleFloatInput);
				MEMBER(model_input, particles::C_OP_RenderModels, particleslib::CParticleModelInput);
				MEMBER(n_lod, particles::C_OP_RenderModels, int32_t);
				MEMBER_ARR(econ_slot_name, particles::C_OP_RenderModels, 256, char);
				MEMBER(b_original_model, particles::C_OP_RenderModels, bool);
				MEMBER(b_suppress_tint, particles::C_OP_RenderModels, bool);
				MEMBER(n_sub_model_field_type, particles::C_OP_RenderModels, particles::RenderModelSubModelFieldType_t);
				MEMBER(b_disable_shadows, particles::C_OP_RenderModels, bool);
				MEMBER(b_disable_depth_prepass, particles::C_OP_RenderModels, bool);
				MEMBER(b_accepts_decals, particles::C_OP_RenderModels, bool);
				MEMBER(b_force_draw_interleved_with_siblings, particles::C_OP_RenderModels, bool);
				MEMBER(b_do_not_draw_in_particle_pass, particles::C_OP_RenderModels, bool);
				MEMBER(b_allow_approximate_transforms, particles::C_OP_RenderModels, bool);
				MEMBER_ARR(sz_render_attribute, particles::C_OP_RenderModels, 260, char);
				MEMBER(fl_radius_scale, particles::C_OP_RenderModels, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_alpha_scale, particles::C_OP_RenderModels, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_roll_scale, particles::C_OP_RenderModels, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_alpha2_field, particles::C_OP_RenderModels, particles::ParticleAttributeIndex_t);
				MEMBER(vec_color_scale, particles::C_OP_RenderModels, particleslib::CParticleCollectionVecInput);
				MEMBER(n_color_blend_type, particles::C_OP_RenderModels, particles::ParticleColorBlendType_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderModels

			class C_OP_RenderStatusEffect : public particles::CParticleFunctionRenderer {
				MEMBER(p_texture_color_warp, particles::C_OP_RenderStatusEffect, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(p_texture_detail2, particles::C_OP_RenderStatusEffect, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(p_texture_diffuse_warp, particles::C_OP_RenderStatusEffect, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(p_texture_fresnel_color_warp, particles::C_OP_RenderStatusEffect, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(p_texture_fresnel_warp, particles::C_OP_RenderStatusEffect, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(p_texture_specular_warp, particles::C_OP_RenderStatusEffect, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(p_texture_env_map, particles::C_OP_RenderStatusEffect, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderStatusEffect

			class C_OP_RenderBlobs : public particles::CParticleFunctionRenderer {
				MEMBER(cube_width, particles::C_OP_RenderBlobs, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(cutoff_radius, particles::C_OP_RenderBlobs, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(render_radius, particles::C_OP_RenderBlobs, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(n_vertex_count_kb, particles::C_OP_RenderBlobs, uint32_t);
				MEMBER(n_index_count_kb, particles::C_OP_RenderBlobs, uint32_t);
				MEMBER(n_scale_cp, particles::C_OP_RenderBlobs, int32_t);
				MEMBER(material_vars, particles::C_OP_RenderBlobs, cutl_vector<particles::MaterialVariable_t>);
				MEMBER(h_material, particles::C_OP_RenderBlobs, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderBlobs

			class C_OP_RenderPostProcessing : public particles::CParticleFunctionRenderer {
				MEMBER(fl_post_process_strength, particles::C_OP_RenderPostProcessing, particleslib::CPerParticleFloatInput);
				MEMBER(h_post_texture, particles::C_OP_RenderPostProcessing, CStrongHandle<resourcesystem::InfoForResourceTypeCPostProcessingResource>);
				MEMBER(n_priority, particles::C_OP_RenderPostProcessing, particles::ParticlePostProcessPriorityGroup_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderPostProcessing

			class C_OP_RenderClothForce : public particles::CParticleFunctionRenderer {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderClothForce

			class C_OP_RenderGpuImplicit : public particles::CParticleFunctionRenderer {
				MEMBER(b_use_per_particle_radius, particles::C_OP_RenderGpuImplicit, bool);
				MEMBER(n_vertex_count_kb, particles::C_OP_RenderGpuImplicit, uint32_t);
				MEMBER(n_index_count_kb, particles::C_OP_RenderGpuImplicit, uint32_t);
				MEMBER(f_grid_size, particles::C_OP_RenderGpuImplicit, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(f_radius_scale, particles::C_OP_RenderGpuImplicit, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(f_isosurface_threshold, particles::C_OP_RenderGpuImplicit, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(n_scale_cp, particles::C_OP_RenderGpuImplicit, int32_t);
				MEMBER(h_material, particles::C_OP_RenderGpuImplicit, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderGpuImplicit

			class C_OP_RenderScreenVelocityRotate : public particles::CParticleFunctionRenderer {
				MEMBER(fl_rotate_rate_degrees, particles::C_OP_RenderScreenVelocityRotate, float);
				MEMBER(fl_forward_degrees, particles::C_OP_RenderScreenVelocityRotate, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderScreenVelocityRotate

			class C_OP_RenderAsModels : public particles::CParticleFunctionRenderer {
				MEMBER(model_list, particles::C_OP_RenderAsModels, cutl_vector<particles::ModelReference_t>);
				MEMBER(fl_model_scale, particles::C_OP_RenderAsModels, float);
				MEMBER(b_fit_to_model_size, particles::C_OP_RenderAsModels, bool);
				MEMBER(b_non_uniform_scaling, particles::C_OP_RenderAsModels, bool);
				MEMBER(n_xaxis_scaling_attribute, particles::C_OP_RenderAsModels, particles::ParticleAttributeIndex_t);
				MEMBER(n_yaxis_scaling_attribute, particles::C_OP_RenderAsModels, particles::ParticleAttributeIndex_t);
				MEMBER(n_zaxis_scaling_attribute, particles::C_OP_RenderAsModels, particles::ParticleAttributeIndex_t);
				MEMBER(n_size_cull_bloat, particles::C_OP_RenderAsModels, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderAsModels

			class C_OP_RenderSimpleModelCollection : public particles::CParticleFunctionRenderer {
				MEMBER(b_center_offset, particles::C_OP_RenderSimpleModelCollection, bool);
				MEMBER(h_model, particles::C_OP_RenderSimpleModelCollection, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);
				MEMBER(model_input, particles::C_OP_RenderSimpleModelCollection, particleslib::CParticleModelInput);
				MEMBER(f_size_cull_scale, particles::C_OP_RenderSimpleModelCollection, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_disable_shadows, particles::C_OP_RenderSimpleModelCollection, bool);
				MEMBER(b_disable_motion_blur, particles::C_OP_RenderSimpleModelCollection, bool);
				MEMBER(b_accepts_decals, particles::C_OP_RenderSimpleModelCollection, bool);
				MEMBER(n_angular_velocity_field, particles::C_OP_RenderSimpleModelCollection, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderSimpleModelCollection

			class C_OP_RenderVRHapticEvent : public particles::CParticleFunctionRenderer {
				MEMBER(n_hand, particles::C_OP_RenderVRHapticEvent, particles::ParticleVRHandChoiceList_t);
				MEMBER(n_output_hand_cp, particles::C_OP_RenderVRHapticEvent, int32_t);
				MEMBER(n_output_field, particles::C_OP_RenderVRHapticEvent, int32_t);
				MEMBER(fl_amplitude, particles::C_OP_RenderVRHapticEvent, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderVRHapticEvent

			class C_OP_ClientPhysics : public particles::CParticleFunctionRenderer {
				MEMBER(str_physics_type, particles::C_OP_ClientPhysics, CUtlString);
				MEMBER(b_start_asleep, particles::C_OP_ClientPhysics, bool);
				MEMBER(fl_player_wake_radius, particles::C_OP_ClientPhysics, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_vehicle_wake_radius, particles::C_OP_ClientPhysics, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_use_high_quality_simulation, particles::C_OP_ClientPhysics, bool);
				MEMBER(n_max_particle_count, particles::C_OP_ClientPhysics, int32_t);
				MEMBER(b_respect_exclusion_volumes, particles::C_OP_ClientPhysics, bool);
				MEMBER(b_kill_particles, particles::C_OP_ClientPhysics, bool);
				MEMBER(b_delete_sim, particles::C_OP_ClientPhysics, bool);
				MEMBER(n_control_point, particles::C_OP_ClientPhysics, int32_t);
				MEMBER(n_color_blend_type, particles::C_OP_ClientPhysics, particles::ParticleColorBlendType_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ClientPhysics

			class C_OP_Callback : public particles::CParticleFunctionRenderer {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_Callback

			class C_OP_RenderTonemapController : public particles::CParticleFunctionRenderer {
				MEMBER(fl_tonemap_level, particles::C_OP_RenderTonemapController, float);
				MEMBER(fl_tonemap_weight, particles::C_OP_RenderTonemapController, float);
				MEMBER(n_tonemap_level_field, particles::C_OP_RenderTonemapController, particles::ParticleAttributeIndex_t);
				MEMBER(n_tonemap_weight_field, particles::C_OP_RenderTonemapController, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderTonemapController

			class C_OP_RenderSound : public particles::CParticleFunctionRenderer {
				MEMBER(fl_duration_scale, particles::C_OP_RenderSound, float);
				MEMBER(fl_snd_lvl_scale, particles::C_OP_RenderSound, float);
				MEMBER(fl_pitch_scale, particles::C_OP_RenderSound, float);
				MEMBER(fl_volume_scale, particles::C_OP_RenderSound, float);
				MEMBER(n_snd_lvl_field, particles::C_OP_RenderSound, particles::ParticleAttributeIndex_t);
				MEMBER(n_duration_field, particles::C_OP_RenderSound, particles::ParticleAttributeIndex_t);
				MEMBER(n_pitch_field, particles::C_OP_RenderSound, particles::ParticleAttributeIndex_t);
				MEMBER(n_volume_field, particles::C_OP_RenderSound, particles::ParticleAttributeIndex_t);
				MEMBER(n_channel, particles::C_OP_RenderSound, int32_t);
				MEMBER(n_cpreference, particles::C_OP_RenderSound, int32_t);
				MEMBER_ARR(psz_sound_name, particles::C_OP_RenderSound, 256, char);
				MEMBER(b_suppress_stop_sound_event, particles::C_OP_RenderSound, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderSound

			class CBaseRendererSource2 : public particles::CParticleFunctionRenderer {
				MEMBER(fl_radius_scale, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_alpha_scale, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_roll_scale, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(n_alpha2_field, particles::CBaseRendererSource2, particles::ParticleAttributeIndex_t);
				MEMBER(vec_color_scale, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererVecInput);
				MEMBER(n_color_blend_type, particles::CBaseRendererSource2, particles::ParticleColorBlendType_t);
				MEMBER(n_shader_type, particles::CBaseRendererSource2, particles::SpriteCardShaderType_t);
				MEMBER(str_shader_override, particles::CBaseRendererSource2, CUtlString);
				MEMBER(fl_center_xoffset, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_center_yoffset, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_bump_strength, particles::CBaseRendererSource2, float);
				MEMBER(n_crop_texture_override, particles::CBaseRendererSource2, particles::ParticleSequenceCropOverride_t);
				MEMBER(vec_textures_input, particles::CBaseRendererSource2, cutl_vector<particles::TextureGroup_t>);
				MEMBER(fl_animation_rate, particles::CBaseRendererSource2, float);
				MEMBER(n_animation_type, particles::CBaseRendererSource2, particles::AnimationType_t);
				MEMBER(b_animate_in_fps, particles::CBaseRendererSource2, bool);
				MEMBER(fl_motion_vector_scale_u, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_motion_vector_scale_v, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_self_illum_amount, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_diffuse_amount, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_diffuse_clamp, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(n_lighting_control_point, particles::CBaseRendererSource2, int32_t);
				MEMBER(n_self_illum_per_particle, particles::CBaseRendererSource2, particles::ParticleAttributeIndex_t);
				MEMBER(n_output_blend_mode, particles::CBaseRendererSource2, particles::ParticleOutputBlendMode_t);
				MEMBER(b_gamma_correct_vertex_colors, particles::CBaseRendererSource2, bool);
				MEMBER(b_saturate_color_pre_alpha_blend, particles::CBaseRendererSource2, bool);
				MEMBER(fl_add_self_amount, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_desaturation, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_overbright_factor, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(n_hsvshift_control_point, particles::CBaseRendererSource2, int32_t);
				MEMBER(n_fog_type, particles::CBaseRendererSource2, particles::ParticleFogType_t);
				MEMBER(fl_fog_amount, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(b_tint_by_fow, particles::CBaseRendererSource2, bool);
				MEMBER(b_tint_by_global_light, particles::CBaseRendererSource2, bool);
				MEMBER(n_per_particle_alpha_reference, particles::CBaseRendererSource2, particles::SpriteCardPerParticleScale_t);
				MEMBER(n_per_particle_alpha_ref_window, particles::CBaseRendererSource2, particles::SpriteCardPerParticleScale_t);
				MEMBER(n_alpha_reference_type, particles::CBaseRendererSource2, particles::ParticleAlphaReferenceType_t);
				MEMBER(fl_alpha_reference_softness, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_source_alpha_value_to_map_to_zero, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_source_alpha_value_to_map_to_one, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(b_refract, particles::CBaseRendererSource2, bool);
				MEMBER(b_refract_solid, particles::CBaseRendererSource2, bool);
				MEMBER(fl_refract_amount, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(n_refract_blur_radius, particles::CBaseRendererSource2, int32_t);
				MEMBER(n_refract_blur_type, particles::CBaseRendererSource2, particles::BlurFilterType_t);
				MEMBER(b_only_render_in_effects_bloom_pass, particles::CBaseRendererSource2, bool);
				MEMBER(b_only_render_in_effects_water_pass, particles::CBaseRendererSource2, bool);
				MEMBER(b_use_mixed_resolution_rendering, particles::CBaseRendererSource2, bool);
				MEMBER(b_only_render_in_effecs_game_overlay, particles::CBaseRendererSource2, bool);
				MEMBER_ARR(stencil_test_id, particles::CBaseRendererSource2, 128, char);
				MEMBER(b_stencil_test_exclude, particles::CBaseRendererSource2, bool);
				MEMBER_ARR(stencil_write_id, particles::CBaseRendererSource2, 128, char);
				MEMBER(b_write_stencil_on_depth_pass, particles::CBaseRendererSource2, bool);
				MEMBER(b_write_stencil_on_depth_fail, particles::CBaseRendererSource2, bool);
				MEMBER(b_reverse_zbuffering, particles::CBaseRendererSource2, bool);
				MEMBER(b_disable_zbuffering, particles::CBaseRendererSource2, bool);
				MEMBER(n_feathering_mode, particles::CBaseRendererSource2, particles::ParticleDepthFeatheringMode_t);
				MEMBER(fl_feathering_min_dist, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_feathering_max_dist, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_feathering_filter, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_depth_bias, particles::CBaseRendererSource2, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(n_sort_method, particles::CBaseRendererSource2, particles::ParticleSortingChoiceList_t);
				MEMBER(b_blend_frames_seq0, particles::CBaseRendererSource2, bool);
				MEMBER(b_max_luminance_blending_sequence0, particles::CBaseRendererSource2, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseRendererSource2

			class C_OP_RenderSprites : public particles::CBaseRendererSource2 {
				MEMBER(n_sequence_override, particles::C_OP_RenderSprites, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(n_orientation_type, particles::C_OP_RenderSprites, particles::ParticleOrientationChoiceList_t);
				MEMBER(n_orientation_control_point, particles::C_OP_RenderSprites, int32_t);
				MEMBER(b_use_yaw_with_normal_aligned, particles::C_OP_RenderSprites, bool);
				MEMBER(fl_min_size, particles::C_OP_RenderSprites, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_max_size, particles::C_OP_RenderSprites, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_alpha_adjust_with_size_adjust, particles::C_OP_RenderSprites, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_start_fade_size, particles::C_OP_RenderSprites, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_end_fade_size, particles::C_OP_RenderSprites, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_start_fade_dot, particles::C_OP_RenderSprites, float);
				MEMBER(fl_end_fade_dot, particles::C_OP_RenderSprites, float);
				MEMBER(b_distance_alpha, particles::C_OP_RenderSprites, bool);
				MEMBER(b_soft_edges, particles::C_OP_RenderSprites, bool);
				MEMBER(fl_edge_softness_start, particles::C_OP_RenderSprites, float);
				MEMBER(fl_edge_softness_end, particles::C_OP_RenderSprites, float);
				MEMBER(b_outline, particles::C_OP_RenderSprites, bool);
				MEMBER(outline_color, particles::C_OP_RenderSprites, Color);
				MEMBER(n_outline_alpha, particles::C_OP_RenderSprites, int32_t);
				MEMBER(fl_outline_start0, particles::C_OP_RenderSprites, float);
				MEMBER(fl_outline_start1, particles::C_OP_RenderSprites, float);
				MEMBER(fl_outline_end0, particles::C_OP_RenderSprites, float);
				MEMBER(fl_outline_end1, particles::C_OP_RenderSprites, float);
				MEMBER(n_lighting_mode, particles::C_OP_RenderSprites, particles::ParticleLightingQuality_t);
				MEMBER(fl_lighting_tessellation, particles::C_OP_RenderSprites, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_lighting_directionality, particles::C_OP_RenderSprites, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(b_particle_shadows, particles::C_OP_RenderSprites, bool);
				MEMBER(fl_shadow_density, particles::C_OP_RenderSprites, float);
				MEMBER(replication_parameters, particles::C_OP_RenderSprites, particles::CReplicationParameters);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderSprites

			class CBaseTrailRenderer : public particles::CBaseRendererSource2 {
				MEMBER(n_orientation_type, particles::CBaseTrailRenderer, particles::ParticleOrientationChoiceList_t);
				MEMBER(n_orientation_control_point, particles::CBaseTrailRenderer, int32_t);
				MEMBER(fl_min_size, particles::CBaseTrailRenderer, float);
				MEMBER(fl_max_size, particles::CBaseTrailRenderer, float);
				MEMBER(fl_start_fade_size, particles::CBaseTrailRenderer, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_end_fade_size, particles::CBaseTrailRenderer, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(b_clamp_v, particles::CBaseTrailRenderer, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseTrailRenderer

			class C_OP_RenderTrails : public particles::CBaseTrailRenderer {
				MEMBER(b_enable_fading_and_clamping, particles::C_OP_RenderTrails, bool);
				MEMBER(fl_start_fade_dot, particles::C_OP_RenderTrails, float);
				MEMBER(fl_end_fade_dot, particles::C_OP_RenderTrails, float);
				MEMBER(n_prev_pnt_source, particles::C_OP_RenderTrails, particles::ParticleAttributeIndex_t);
				MEMBER(fl_max_length, particles::C_OP_RenderTrails, float);
				MEMBER(fl_min_length, particles::C_OP_RenderTrails, float);
				MEMBER(b_ignore_dt, particles::C_OP_RenderTrails, bool);
				MEMBER(fl_constrain_radius_to_length_ratio, particles::C_OP_RenderTrails, float);
				MEMBER(fl_length_scale, particles::C_OP_RenderTrails, float);
				MEMBER(fl_length_fade_in_time, particles::C_OP_RenderTrails, float);
				MEMBER(fl_radius_head_taper, particles::C_OP_RenderTrails, particleslib::CPerParticleFloatInput);
				MEMBER(vec_head_color_scale, particles::C_OP_RenderTrails, particleslib::CParticleCollectionVecInput);
				MEMBER(fl_head_alpha_scale, particles::C_OP_RenderTrails, particleslib::CPerParticleFloatInput);
				MEMBER(fl_radius_taper, particles::C_OP_RenderTrails, particleslib::CPerParticleFloatInput);
				MEMBER(vec_tail_color_scale, particles::C_OP_RenderTrails, particleslib::CParticleCollectionVecInput);
				MEMBER(fl_tail_alpha_scale, particles::C_OP_RenderTrails, particleslib::CPerParticleFloatInput);
				MEMBER(n_horiz_crop_field, particles::C_OP_RenderTrails, particles::ParticleAttributeIndex_t);
				MEMBER(n_vert_crop_field, particles::C_OP_RenderTrails, particles::ParticleAttributeIndex_t);
				MEMBER(fl_forward_shift, particles::C_OP_RenderTrails, float);
				MEMBER(b_flip_uvbased_on_pitch_yaw, particles::C_OP_RenderTrails, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderTrails

			class C_OP_RenderRopes : public particles::CBaseRendererSource2 {
				MEMBER(b_enable_fading_and_clamping, particles::C_OP_RenderRopes, bool);
				MEMBER(fl_min_size, particles::C_OP_RenderRopes, float);
				MEMBER(fl_max_size, particles::C_OP_RenderRopes, float);
				MEMBER(fl_start_fade_size, particles::C_OP_RenderRopes, float);
				MEMBER(fl_end_fade_size, particles::C_OP_RenderRopes, float);
				MEMBER(fl_start_fade_dot, particles::C_OP_RenderRopes, float);
				MEMBER(fl_end_fade_dot, particles::C_OP_RenderRopes, float);
				MEMBER(fl_radius_taper, particles::C_OP_RenderRopes, float);
				MEMBER(n_min_tesselation, particles::C_OP_RenderRopes, int32_t);
				MEMBER(n_max_tesselation, particles::C_OP_RenderRopes, int32_t);
				MEMBER(fl_tess_scale, particles::C_OP_RenderRopes, float);
				MEMBER(fl_texture_vworld_size, particles::C_OP_RenderRopes, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_texture_vscroll_rate, particles::C_OP_RenderRopes, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(fl_texture_voffset, particles::C_OP_RenderRopes, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(n_texture_vparams_cp, particles::C_OP_RenderRopes, int32_t);
				MEMBER(b_clamp_v, particles::C_OP_RenderRopes, bool);
				MEMBER(n_scale_cp1, particles::C_OP_RenderRopes, int32_t);
				MEMBER(n_scale_cp2, particles::C_OP_RenderRopes, int32_t);
				MEMBER(fl_scale_vsize_by_control_point_distance, particles::C_OP_RenderRopes, float);
				MEMBER(fl_scale_vscroll_by_control_point_distance, particles::C_OP_RenderRopes, float);
				MEMBER(fl_scale_voffset_by_control_point_distance, particles::C_OP_RenderRopes, float);
				MEMBER(b_use_scalar_for_texture_coordinate, particles::C_OP_RenderRopes, bool);
				MEMBER(n_scalar_field_for_texture_coordinate, particles::C_OP_RenderRopes, particles::ParticleAttributeIndex_t);
				MEMBER(fl_scalar_attribute_texture_coord_scale, particles::C_OP_RenderRopes, float);
				MEMBER(b_reverse_order, particles::C_OP_RenderRopes, bool);
				MEMBER(b_closed_loop, particles::C_OP_RenderRopes, bool);
				MEMBER(n_orientation_type, particles::C_OP_RenderRopes, particles::ParticleOrientationChoiceList_t);
				MEMBER(n_vector_field_for_orientation, particles::C_OP_RenderRopes, particles::ParticleAttributeIndex_t);
				MEMBER(b_draw_as_opaque, particles::C_OP_RenderRopes, bool);
				MEMBER(b_generate_normals, particles::C_OP_RenderRopes, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderRopes

			class C_OP_RenderDeferredLight : public particles::CParticleFunctionRenderer {
				MEMBER(b_use_alpha_test_window, particles::C_OP_RenderDeferredLight, bool);
				MEMBER(b_use_texture, particles::C_OP_RenderDeferredLight, bool);
				MEMBER(fl_radius_scale, particles::C_OP_RenderDeferredLight, float);
				MEMBER(fl_alpha_scale, particles::C_OP_RenderDeferredLight, float);
				MEMBER(n_alpha2_field, particles::C_OP_RenderDeferredLight, particles::ParticleAttributeIndex_t);
				MEMBER(vec_color_scale, particles::C_OP_RenderDeferredLight, particleslib::CParticleCollectionVecInput);
				MEMBER(n_color_blend_type, particles::C_OP_RenderDeferredLight, particles::ParticleColorBlendType_t);
				MEMBER(fl_light_distance, particles::C_OP_RenderDeferredLight, float);
				MEMBER(fl_start_falloff, particles::C_OP_RenderDeferredLight, float);
				MEMBER(fl_distance_falloff, particles::C_OP_RenderDeferredLight, float);
				MEMBER(fl_spot_fo_v, particles::C_OP_RenderDeferredLight, float);
				MEMBER(n_alpha_test_point_field, particles::C_OP_RenderDeferredLight, particles::ParticleAttributeIndex_t);
				MEMBER(n_alpha_test_range_field, particles::C_OP_RenderDeferredLight, particles::ParticleAttributeIndex_t);
				MEMBER(n_alpha_test_sharpness_field, particles::C_OP_RenderDeferredLight, particles::ParticleAttributeIndex_t);
				MEMBER(h_texture, particles::C_OP_RenderDeferredLight, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(n_hsvshift_control_point, particles::C_OP_RenderDeferredLight, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RenderDeferredLight

			class CParticleFunctionForce : public particles::CParticleFunction {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleFunctionForce

			class C_OP_ParentVortices : public particles::CParticleFunctionForce {
				MEMBER(fl_force_scale, particles::C_OP_ParentVortices, float);
				MEMBER(vec_twist_axis, particles::C_OP_ParentVortices, Vector);
				MEMBER(b_flip_based_on_yaw, particles::C_OP_ParentVortices, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ParentVortices

			class C_OP_ForceBasedOnDistanceToPlane : public particles::CParticleFunctionForce {
				MEMBER(fl_min_dist, particles::C_OP_ForceBasedOnDistanceToPlane, float);
				MEMBER(vec_force_at_min_dist, particles::C_OP_ForceBasedOnDistanceToPlane, Vector);
				MEMBER(fl_max_dist, particles::C_OP_ForceBasedOnDistanceToPlane, float);
				MEMBER(vec_force_at_max_dist, particles::C_OP_ForceBasedOnDistanceToPlane, Vector);
				MEMBER(vec_plane_normal, particles::C_OP_ForceBasedOnDistanceToPlane, Vector);
				MEMBER(n_control_point_number, particles::C_OP_ForceBasedOnDistanceToPlane, int32_t);
				MEMBER(fl_exponent, particles::C_OP_ForceBasedOnDistanceToPlane, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ForceBasedOnDistanceToPlane

			class C_OP_CPVelocityForce : public particles::CParticleFunctionForce {
				MEMBER(n_control_point_number, particles::C_OP_CPVelocityForce, int32_t);
				MEMBER(fl_scale, particles::C_OP_CPVelocityForce, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_CPVelocityForce

			class C_OP_TimeVaryingForce : public particles::CParticleFunctionForce {
				MEMBER(fl_start_lerp_time, particles::C_OP_TimeVaryingForce, float);
				MEMBER(starting_force, particles::C_OP_TimeVaryingForce, Vector);
				MEMBER(fl_end_lerp_time, particles::C_OP_TimeVaryingForce, float);
				MEMBER(ending_force, particles::C_OP_TimeVaryingForce, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_TimeVaryingForce

			class C_OP_CurlNoiseForce : public particles::CParticleFunctionForce {
				MEMBER(n_noise_type, particles::C_OP_CurlNoiseForce, particles::ParticleDirectionNoiseType_t);
				MEMBER(vec_noise_freq, particles::C_OP_CurlNoiseForce, particleslib::CPerParticleVecInput);
				MEMBER(vec_noise_scale, particles::C_OP_CurlNoiseForce, particleslib::CPerParticleVecInput);
				MEMBER(vec_offset, particles::C_OP_CurlNoiseForce, particleslib::CPerParticleVecInput);
				MEMBER(vec_offset_rate, particles::C_OP_CurlNoiseForce, particleslib::CPerParticleVecInput);
				MEMBER(fl_worley_seed, particles::C_OP_CurlNoiseForce, particleslib::CPerParticleFloatInput);
				MEMBER(fl_worley_jitter, particles::C_OP_CurlNoiseForce, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_CurlNoiseForce

			class C_OP_WindForce : public particles::CParticleFunctionForce {
				MEMBER(v_force, particles::C_OP_WindForce, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_WindForce

			class C_OP_PerParticleForce : public particles::CParticleFunctionForce {
				MEMBER(fl_force_scale, particles::C_OP_PerParticleForce, particleslib::CPerParticleFloatInput);
				MEMBER(v_force, particles::C_OP_PerParticleForce, particleslib::CPerParticleVecInput);
				MEMBER(n_cp, particles::C_OP_PerParticleForce, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_PerParticleForce

			class C_OP_IntraParticleForce : public particles::CParticleFunctionForce {
				MEMBER(fl_attraction_min_distance, particles::C_OP_IntraParticleForce, float);
				MEMBER(fl_attraction_max_distance, particles::C_OP_IntraParticleForce, float);
				MEMBER(fl_attraction_max_strength, particles::C_OP_IntraParticleForce, float);
				MEMBER(fl_repulsion_min_distance, particles::C_OP_IntraParticleForce, float);
				MEMBER(fl_repulsion_max_distance, particles::C_OP_IntraParticleForce, float);
				MEMBER(fl_repulsion_max_strength, particles::C_OP_IntraParticleForce, float);
				MEMBER(b_use_aabb, particles::C_OP_IntraParticleForce, bool);
				MEMBER(b_thread_it, particles::C_OP_IntraParticleForce, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_IntraParticleForce

			class C_OP_RandomForce : public particles::CParticleFunctionForce {
				MEMBER(min_force, particles::C_OP_RandomForce, Vector);
				MEMBER(max_force, particles::C_OP_RandomForce, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RandomForce

			class C_OP_DensityForce : public particles::CParticleFunctionForce {
				MEMBER(fl_radius_scale, particles::C_OP_DensityForce, float);
				MEMBER(fl_force_scale, particles::C_OP_DensityForce, float);
				MEMBER(fl_target_density, particles::C_OP_DensityForce, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_DensityForce

			class C_OP_TurbulenceForce : public particles::CParticleFunctionForce {
				MEMBER(fl_noise_coord_scale0, particles::C_OP_TurbulenceForce, float);
				MEMBER(fl_noise_coord_scale1, particles::C_OP_TurbulenceForce, float);
				MEMBER(fl_noise_coord_scale2, particles::C_OP_TurbulenceForce, float);
				MEMBER(fl_noise_coord_scale3, particles::C_OP_TurbulenceForce, float);
				MEMBER(vec_noise_amount0, particles::C_OP_TurbulenceForce, Vector);
				MEMBER(vec_noise_amount1, particles::C_OP_TurbulenceForce, Vector);
				MEMBER(vec_noise_amount2, particles::C_OP_TurbulenceForce, Vector);
				MEMBER(vec_noise_amount3, particles::C_OP_TurbulenceForce, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_TurbulenceForce

			class C_OP_SDFForce : public particles::CParticleFunctionForce {
				MEMBER(fl_force_scale, particles::C_OP_SDFForce, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SDFForce

			class C_OP_ExternalWindForce : public particles::CParticleFunctionForce {
				MEMBER(vec_sample_position, particles::C_OP_ExternalWindForce, particleslib::CPerParticleVecInput);
				MEMBER(vec_scale, particles::C_OP_ExternalWindForce, particleslib::CPerParticleVecInput);
				MEMBER(b_sample_wind, particles::C_OP_ExternalWindForce, bool);
				MEMBER(b_sample_water, particles::C_OP_ExternalWindForce, bool);
				MEMBER(b_dampen_near_water_plane, particles::C_OP_ExternalWindForce, bool);
				MEMBER(b_sample_gravity, particles::C_OP_ExternalWindForce, bool);
				MEMBER(vec_gravity_force, particles::C_OP_ExternalWindForce, particleslib::CPerParticleVecInput);
				MEMBER(b_use_basic_movement_gravity, particles::C_OP_ExternalWindForce, bool);
				MEMBER(fl_local_gravity_scale, particles::C_OP_ExternalWindForce, particleslib::CPerParticleFloatInput);
				MEMBER(fl_local_buoyancy_scale, particles::C_OP_ExternalWindForce, particleslib::CPerParticleFloatInput);
				MEMBER(vec_buoyancy_force, particles::C_OP_ExternalWindForce, particleslib::CPerParticleVecInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ExternalWindForce

			class C_OP_LocalAccelerationForce : public particles::CParticleFunctionForce {
				MEMBER(n_cp, particles::C_OP_LocalAccelerationForce, int32_t);
				MEMBER(n_scale_cp, particles::C_OP_LocalAccelerationForce, int32_t);
				MEMBER(vec_accel, particles::C_OP_LocalAccelerationForce, particleslib::CParticleCollectionVecInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_LocalAccelerationForce

			class C_OP_TwistAroundAxis : public particles::CParticleFunctionForce {
				MEMBER(f_force_amount, particles::C_OP_TwistAroundAxis, float);
				MEMBER(twist_axis, particles::C_OP_TwistAroundAxis, Vector);
				MEMBER(b_local_space, particles::C_OP_TwistAroundAxis, bool);
				MEMBER(n_control_point_number, particles::C_OP_TwistAroundAxis, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_TwistAroundAxis

			class C_OP_ExternalGameImpulseForce : public particles::CParticleFunctionForce {
				MEMBER(fl_force_scale, particles::C_OP_ExternalGameImpulseForce, particleslib::CPerParticleFloatInput);
				MEMBER(b_ropes, particles::C_OP_ExternalGameImpulseForce, bool);
				MEMBER(b_ropes_zonly, particles::C_OP_ExternalGameImpulseForce, bool);
				MEMBER(b_explosions, particles::C_OP_ExternalGameImpulseForce, bool);
				MEMBER(b_particles, particles::C_OP_ExternalGameImpulseForce, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ExternalGameImpulseForce

			class C_OP_AttractToControlPoint : public particles::CParticleFunctionForce {
				MEMBER(vec_component_scale, particles::C_OP_AttractToControlPoint, Vector);
				MEMBER(f_force_amount, particles::C_OP_AttractToControlPoint, particleslib::CPerParticleFloatInput);
				MEMBER(f_falloff_power, particles::C_OP_AttractToControlPoint, float);
				MEMBER(transform_input, particles::C_OP_AttractToControlPoint, particleslib::CParticleTransformInput);
				MEMBER(f_force_amount_min, particles::C_OP_AttractToControlPoint, particleslib::CPerParticleFloatInput);
				MEMBER(b_apply_min_force, particles::C_OP_AttractToControlPoint, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_AttractToControlPoint

			class CParticleFunctionOperator : public particles::CParticleFunction {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleFunctionOperator

			class C_OP_CPOffsetToPercentageBetweenCPs : public particles::CParticleFunctionOperator {
				MEMBER(fl_input_min, particles::C_OP_CPOffsetToPercentageBetweenCPs, float);
				MEMBER(fl_input_max, particles::C_OP_CPOffsetToPercentageBetweenCPs, float);
				MEMBER(fl_input_bias, particles::C_OP_CPOffsetToPercentageBetweenCPs, float);
				MEMBER(n_start_cp, particles::C_OP_CPOffsetToPercentageBetweenCPs, int32_t);
				MEMBER(n_end_cp, particles::C_OP_CPOffsetToPercentageBetweenCPs, int32_t);
				MEMBER(n_offset_cp, particles::C_OP_CPOffsetToPercentageBetweenCPs, int32_t);
				MEMBER(n_ouput_cp, particles::C_OP_CPOffsetToPercentageBetweenCPs, int32_t);
				MEMBER(n_input_cp, particles::C_OP_CPOffsetToPercentageBetweenCPs, int32_t);
				MEMBER(b_radial_check, particles::C_OP_CPOffsetToPercentageBetweenCPs, bool);
				MEMBER(b_scale_offset, particles::C_OP_CPOffsetToPercentageBetweenCPs, bool);
				MEMBER(vec_offset, particles::C_OP_CPOffsetToPercentageBetweenCPs, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_CPOffsetToPercentageBetweenCPs

			class C_OP_RampScalarLinear : public particles::CParticleFunctionOperator {
				MEMBER(rate_min, particles::C_OP_RampScalarLinear, float);
				MEMBER(rate_max, particles::C_OP_RampScalarLinear, float);
				MEMBER(fl_start_time_min, particles::C_OP_RampScalarLinear, float);
				MEMBER(fl_start_time_max, particles::C_OP_RampScalarLinear, float);
				MEMBER(fl_end_time_min, particles::C_OP_RampScalarLinear, float);
				MEMBER(fl_end_time_max, particles::C_OP_RampScalarLinear, float);
				MEMBER(n_field, particles::C_OP_RampScalarLinear, particles::ParticleAttributeIndex_t);
				MEMBER(b_proportional_op, particles::C_OP_RampScalarLinear, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RampScalarLinear

			class C_OP_PercentageBetweenTransformLerpCPs : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_PercentageBetweenTransformLerpCPs, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_PercentageBetweenTransformLerpCPs, float);
				MEMBER(fl_input_max, particles::C_OP_PercentageBetweenTransformLerpCPs, float);
				MEMBER(transform_start, particles::C_OP_PercentageBetweenTransformLerpCPs, particleslib::CParticleTransformInput);
				MEMBER(transform_end, particles::C_OP_PercentageBetweenTransformLerpCPs, particleslib::CParticleTransformInput);
				MEMBER(n_output_start_cp, particles::C_OP_PercentageBetweenTransformLerpCPs, int32_t);
				MEMBER(n_output_start_field, particles::C_OP_PercentageBetweenTransformLerpCPs, int32_t);
				MEMBER(n_output_end_cp, particles::C_OP_PercentageBetweenTransformLerpCPs, int32_t);
				MEMBER(n_output_end_field, particles::C_OP_PercentageBetweenTransformLerpCPs, int32_t);
				MEMBER(n_set_method, particles::C_OP_PercentageBetweenTransformLerpCPs, particles::ParticleSetMethod_t);
				MEMBER(b_active_range, particles::C_OP_PercentageBetweenTransformLerpCPs, bool);
				MEMBER(b_radial_check, particles::C_OP_PercentageBetweenTransformLerpCPs, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_PercentageBetweenTransformLerpCPs

			class C_OP_RemapParticleCountToScalar : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_RemapParticleCountToScalar, particles::ParticleAttributeIndex_t);
				MEMBER(n_input_min, particles::C_OP_RemapParticleCountToScalar, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_input_max, particles::C_OP_RemapParticleCountToScalar, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_output_min, particles::C_OP_RemapParticleCountToScalar, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_output_max, particles::C_OP_RemapParticleCountToScalar, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_active_range, particles::C_OP_RemapParticleCountToScalar, bool);
				MEMBER(n_set_method, particles::C_OP_RemapParticleCountToScalar, particles::ParticleSetMethod_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapParticleCountToScalar

			class C_OP_VectorNoise : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_VectorNoise, particles::ParticleAttributeIndex_t);
				MEMBER(vec_output_min, particles::C_OP_VectorNoise, Vector);
				MEMBER(vec_output_max, particles::C_OP_VectorNoise, Vector);
				MEMBER(fl4_noise_scale, particles::C_OP_VectorNoise, float);
				MEMBER(b_additive, particles::C_OP_VectorNoise, bool);
				MEMBER(b_offset, particles::C_OP_VectorNoise, bool);
				MEMBER(fl_noise_animation_time_scale, particles::C_OP_VectorNoise, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_VectorNoise

			class C_OP_RemapSpeed : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_RemapSpeed, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_RemapSpeed, float);
				MEMBER(fl_input_max, particles::C_OP_RemapSpeed, float);
				MEMBER(fl_output_min, particles::C_OP_RemapSpeed, float);
				MEMBER(fl_output_max, particles::C_OP_RemapSpeed, float);
				MEMBER(n_set_method, particles::C_OP_RemapSpeed, particles::ParticleSetMethod_t);
				MEMBER(b_ignore_delta, particles::C_OP_RemapSpeed, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapSpeed

			class C_OP_MovementRigidAttachToCP : public particles::CParticleFunctionOperator {
				MEMBER(n_control_point_number, particles::C_OP_MovementRigidAttachToCP, int32_t);
				MEMBER(n_scale_control_point, particles::C_OP_MovementRigidAttachToCP, int32_t);
				MEMBER(n_scale_cpfield, particles::C_OP_MovementRigidAttachToCP, int32_t);
				MEMBER(n_field_input, particles::C_OP_MovementRigidAttachToCP, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_OP_MovementRigidAttachToCP, particles::ParticleAttributeIndex_t);
				MEMBER(b_offset_local, particles::C_OP_MovementRigidAttachToCP, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_MovementRigidAttachToCP

			class C_OP_RampScalarLinearSimple : public particles::CParticleFunctionOperator {
				MEMBER(rate, particles::C_OP_RampScalarLinearSimple, float);
				MEMBER(fl_start_time, particles::C_OP_RampScalarLinearSimple, float);
				MEMBER(fl_end_time, particles::C_OP_RampScalarLinearSimple, float);
				MEMBER(n_field, particles::C_OP_RampScalarLinearSimple, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RampScalarLinearSimple

			class C_OP_LerpToOtherAttribute : public particles::CParticleFunctionOperator {
				MEMBER(fl_interpolation, particles::C_OP_LerpToOtherAttribute, particleslib::CPerParticleFloatInput);
				MEMBER(n_field_input_from, particles::C_OP_LerpToOtherAttribute, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_input, particles::C_OP_LerpToOtherAttribute, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_OP_LerpToOtherAttribute, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_LerpToOtherAttribute

			class C_OP_LockPoints : public particles::CParticleFunctionOperator {
				MEMBER(n_min_col, particles::C_OP_LockPoints, int32_t);
				MEMBER(n_max_col, particles::C_OP_LockPoints, int32_t);
				MEMBER(n_min_row, particles::C_OP_LockPoints, int32_t);
				MEMBER(n_max_row, particles::C_OP_LockPoints, int32_t);
				MEMBER(n_control_point, particles::C_OP_LockPoints, int32_t);
				MEMBER(fl_blend_value, particles::C_OP_LockPoints, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_LockPoints

			class C_OP_RadiusDecay : public particles::CParticleFunctionOperator {
				MEMBER(fl_min_radius, particles::C_OP_RadiusDecay, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RadiusDecay

			class C_OP_LerpVector : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_LerpVector, particles::ParticleAttributeIndex_t);
				MEMBER(vec_output, particles::C_OP_LerpVector, Vector);
				MEMBER(fl_start_time, particles::C_OP_LerpVector, float);
				MEMBER(fl_end_time, particles::C_OP_LerpVector, float);
				MEMBER(n_set_method, particles::C_OP_LerpVector, particles::ParticleSetMethod_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_LerpVector

			class C_OP_FadeIn : public particles::CParticleFunctionOperator {
				MEMBER(fl_fade_in_time_min, particles::C_OP_FadeIn, float);
				MEMBER(fl_fade_in_time_max, particles::C_OP_FadeIn, float);
				MEMBER(fl_fade_in_time_exp, particles::C_OP_FadeIn, float);
				MEMBER(b_proportional, particles::C_OP_FadeIn, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_FadeIn

			class C_OP_RemapNamedModelElementEndCap : public particles::CParticleFunctionOperator {
				MEMBER(h_model, particles::C_OP_RemapNamedModelElementEndCap, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);
				MEMBER(in_names, particles::C_OP_RemapNamedModelElementEndCap, cutl_vector<CUtlString>);
				MEMBER(out_names, particles::C_OP_RemapNamedModelElementEndCap, cutl_vector<CUtlString>);
				MEMBER(fallback_names, particles::C_OP_RemapNamedModelElementEndCap, cutl_vector<CUtlString>);
				MEMBER(b_model_from_renderer, particles::C_OP_RemapNamedModelElementEndCap, bool);
				MEMBER(n_field_input, particles::C_OP_RemapNamedModelElementEndCap, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_OP_RemapNamedModelElementEndCap, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapNamedModelElementEndCap

			class C_OP_RemapNamedModelBodyPartEndCap : public particles::C_OP_RemapNamedModelElementEndCap {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapNamedModelBodyPartEndCap

			class C_OP_RemapNamedModelSequenceEndCap : public particles::C_OP_RemapNamedModelElementEndCap {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapNamedModelSequenceEndCap

			class C_OP_RemapNamedModelMeshGroupEndCap : public particles::C_OP_RemapNamedModelElementEndCap {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapNamedModelMeshGroupEndCap

			class C_OP_MoveToHitbox : public particles::CParticleFunctionOperator {
				MEMBER(model_input, particles::C_OP_MoveToHitbox, particleslib::CParticleModelInput);
				MEMBER(transform_input, particles::C_OP_MoveToHitbox, particleslib::CParticleTransformInput);
				MEMBER(fl_life_time_lerp_start, particles::C_OP_MoveToHitbox, float);
				MEMBER(fl_life_time_lerp_end, particles::C_OP_MoveToHitbox, float);
				MEMBER(fl_prev_pos_scale, particles::C_OP_MoveToHitbox, float);
				MEMBER_ARR(hitbox_set_name, particles::C_OP_MoveToHitbox, 128, char);
				MEMBER(b_use_bones, particles::C_OP_MoveToHitbox, bool);
				MEMBER(n_lerp_type, particles::C_OP_MoveToHitbox, particles::HitboxLerpType_t);
				MEMBER(fl_interpolation, particles::C_OP_MoveToHitbox, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_MoveToHitbox

			class C_OP_SnapshotSkinToBones : public particles::CParticleFunctionOperator {
				MEMBER(b_transform_normals, particles::C_OP_SnapshotSkinToBones, bool);
				MEMBER(b_transform_radii, particles::C_OP_SnapshotSkinToBones, bool);
				MEMBER(n_control_point_number, particles::C_OP_SnapshotSkinToBones, int32_t);
				MEMBER(fl_life_time_fade_start, particles::C_OP_SnapshotSkinToBones, float);
				MEMBER(fl_life_time_fade_end, particles::C_OP_SnapshotSkinToBones, float);
				MEMBER(fl_jump_threshold, particles::C_OP_SnapshotSkinToBones, float);
				MEMBER(fl_prev_pos_scale, particles::C_OP_SnapshotSkinToBones, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SnapshotSkinToBones

			class C_OP_RemapDotProductToScalar : public particles::CParticleFunctionOperator {
				MEMBER(n_input_cp1, particles::C_OP_RemapDotProductToScalar, int32_t);
				MEMBER(n_input_cp2, particles::C_OP_RemapDotProductToScalar, int32_t);
				MEMBER(n_field_output, particles::C_OP_RemapDotProductToScalar, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_RemapDotProductToScalar, float);
				MEMBER(fl_input_max, particles::C_OP_RemapDotProductToScalar, float);
				MEMBER(fl_output_min, particles::C_OP_RemapDotProductToScalar, float);
				MEMBER(fl_output_max, particles::C_OP_RemapDotProductToScalar, float);
				MEMBER(b_use_particle_velocity, particles::C_OP_RemapDotProductToScalar, bool);
				MEMBER(n_set_method, particles::C_OP_RemapDotProductToScalar, particles::ParticleSetMethod_t);
				MEMBER(b_active_range, particles::C_OP_RemapDotProductToScalar, bool);
				MEMBER(b_use_particle_normal, particles::C_OP_RemapDotProductToScalar, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapDotProductToScalar

			class C_OP_RemapControlPointOrientationToRotation : public particles::CParticleFunctionOperator {
				MEMBER(n_cp, particles::C_OP_RemapControlPointOrientationToRotation, int32_t);
				MEMBER(n_field_output, particles::C_OP_RemapControlPointOrientationToRotation, particles::ParticleAttributeIndex_t);
				MEMBER(fl_offset_rot, particles::C_OP_RemapControlPointOrientationToRotation, float);
				MEMBER(n_component, particles::C_OP_RemapControlPointOrientationToRotation, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapControlPointOrientationToRotation

			class C_OP_DistanceToTransform : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_DistanceToTransform, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_DistanceToTransform, particleslib::CPerParticleFloatInput);
				MEMBER(fl_input_max, particles::C_OP_DistanceToTransform, particleslib::CPerParticleFloatInput);
				MEMBER(fl_output_min, particles::C_OP_DistanceToTransform, particleslib::CPerParticleFloatInput);
				MEMBER(fl_output_max, particles::C_OP_DistanceToTransform, particleslib::CPerParticleFloatInput);
				MEMBER(transform_start, particles::C_OP_DistanceToTransform, particleslib::CParticleTransformInput);
				MEMBER(b_los, particles::C_OP_DistanceToTransform, bool);
				MEMBER_ARR(collision_group_name, particles::C_OP_DistanceToTransform, 128, char);
				MEMBER(n_trace_set, particles::C_OP_DistanceToTransform, particles::ParticleTraceSet_t);
				MEMBER(fl_max_trace_length, particles::C_OP_DistanceToTransform, float);
				MEMBER(fl_losscale, particles::C_OP_DistanceToTransform, float);
				MEMBER(n_set_method, particles::C_OP_DistanceToTransform, particles::ParticleSetMethod_t);
				MEMBER(b_active_range, particles::C_OP_DistanceToTransform, bool);
				MEMBER(b_additive, particles::C_OP_DistanceToTransform, bool);
				MEMBER(vec_component_scale, particles::C_OP_DistanceToTransform, particleslib::CPerParticleVecInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_DistanceToTransform

			class C_OP_ClampVector : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_ClampVector, particles::ParticleAttributeIndex_t);
				MEMBER(vec_output_min, particles::C_OP_ClampVector, particleslib::CPerParticleVecInput);
				MEMBER(vec_output_max, particles::C_OP_ClampVector, particleslib::CPerParticleVecInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ClampVector

			class CGeneralSpin : public particles::CParticleFunctionOperator {
				MEMBER(n_spin_rate_degrees, particles::CGeneralSpin, int32_t);
				MEMBER(n_spin_rate_min_degrees, particles::CGeneralSpin, int32_t);
				MEMBER(f_spin_rate_stop_time, particles::CGeneralSpin, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGeneralSpin

			class C_OP_Spin : public particles::CGeneralSpin {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_Spin

			class C_OP_SpinYaw : public particles::CGeneralSpin {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SpinYaw

			class C_OP_MaintainSequentialPath : public particles::CParticleFunctionOperator {
				MEMBER(f_max_distance, particles::C_OP_MaintainSequentialPath, float);
				MEMBER(fl_num_to_assign, particles::C_OP_MaintainSequentialPath, float);
				MEMBER(fl_cohesion_strength, particles::C_OP_MaintainSequentialPath, float);
				MEMBER(fl_tolerance, particles::C_OP_MaintainSequentialPath, float);
				MEMBER(b_loop, particles::C_OP_MaintainSequentialPath, bool);
				MEMBER(b_use_particle_count, particles::C_OP_MaintainSequentialPath, bool);
				MEMBER(path_params, particles::C_OP_MaintainSequentialPath, particles::CPathParameters);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_MaintainSequentialPath

			class C_OP_FadeAndKill : public particles::CParticleFunctionOperator {
				MEMBER(fl_start_fade_in_time, particles::C_OP_FadeAndKill, float);
				MEMBER(fl_end_fade_in_time, particles::C_OP_FadeAndKill, float);
				MEMBER(fl_start_fade_out_time, particles::C_OP_FadeAndKill, float);
				MEMBER(fl_end_fade_out_time, particles::C_OP_FadeAndKill, float);
				MEMBER(fl_start_alpha, particles::C_OP_FadeAndKill, float);
				MEMBER(fl_end_alpha, particles::C_OP_FadeAndKill, float);
				MEMBER(b_force_preserve_particle_order, particles::C_OP_FadeAndKill, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_FadeAndKill

			class C_OP_MaxVelocity : public particles::CParticleFunctionOperator {
				MEMBER(fl_max_velocity, particles::C_OP_MaxVelocity, float);
				MEMBER(fl_min_velocity, particles::C_OP_MaxVelocity, float);
				MEMBER(n_override_cp, particles::C_OP_MaxVelocity, int32_t);
				MEMBER(n_override_cpfield, particles::C_OP_MaxVelocity, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_MaxVelocity

			class C_OP_SetAttributeToScalarExpression : public particles::CParticleFunctionOperator {
				MEMBER(n_expression, particles::C_OP_SetAttributeToScalarExpression, particles::ScalarExpressionType_t);
				MEMBER(fl_input1, particles::C_OP_SetAttributeToScalarExpression, particleslib::CPerParticleFloatInput);
				MEMBER(fl_input2, particles::C_OP_SetAttributeToScalarExpression, particleslib::CPerParticleFloatInput);
				MEMBER(fl_output_remap, particles::C_OP_SetAttributeToScalarExpression, particleslib::CParticleRemapFloatInput);
				MEMBER(n_output_field, particles::C_OP_SetAttributeToScalarExpression, particles::ParticleAttributeIndex_t);
				MEMBER(n_set_method, particles::C_OP_SetAttributeToScalarExpression, particles::ParticleSetMethod_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetAttributeToScalarExpression

			class C_OP_RtEnvCull : public particles::CParticleFunctionOperator {
				MEMBER(vec_test_dir, particles::C_OP_RtEnvCull, Vector);
				MEMBER(vec_test_normal, particles::C_OP_RtEnvCull, Vector);
				MEMBER(b_cull_on_miss, particles::C_OP_RtEnvCull, bool);
				MEMBER(b_stick_instead_of_cull, particles::C_OP_RtEnvCull, bool);
				MEMBER_ARR(rt_env_name, particles::C_OP_RtEnvCull, 128, char);
				MEMBER(n_rtenv_cp, particles::C_OP_RtEnvCull, int32_t);
				MEMBER(n_component, particles::C_OP_RtEnvCull, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RtEnvCull

			class C_OP_RemapDirectionToCPToVector : public particles::CParticleFunctionOperator {
				MEMBER(n_cp, particles::C_OP_RemapDirectionToCPToVector, int32_t);
				MEMBER(n_field_output, particles::C_OP_RemapDirectionToCPToVector, particles::ParticleAttributeIndex_t);
				MEMBER(fl_scale, particles::C_OP_RemapDirectionToCPToVector, float);
				MEMBER(fl_offset_rot, particles::C_OP_RemapDirectionToCPToVector, float);
				MEMBER(vec_offset_axis, particles::C_OP_RemapDirectionToCPToVector, Vector);
				MEMBER(b_normalize, particles::C_OP_RemapDirectionToCPToVector, bool);
				MEMBER(n_field_strength, particles::C_OP_RemapDirectionToCPToVector, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapDirectionToCPToVector

			class C_OP_SetChildControlPoints : public particles::CParticleFunctionOperator {
				MEMBER(n_child_group_id, particles::C_OP_SetChildControlPoints, int32_t);
				MEMBER(n_first_control_point, particles::C_OP_SetChildControlPoints, int32_t);
				MEMBER(n_num_control_points, particles::C_OP_SetChildControlPoints, int32_t);
				MEMBER(n_first_source_point, particles::C_OP_SetChildControlPoints, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_reverse, particles::C_OP_SetChildControlPoints, bool);
				MEMBER(b_set_orientation, particles::C_OP_SetChildControlPoints, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetChildControlPoints

			class C_OP_PercentageBetweenTransforms : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_PercentageBetweenTransforms, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_PercentageBetweenTransforms, float);
				MEMBER(fl_input_max, particles::C_OP_PercentageBetweenTransforms, float);
				MEMBER(fl_output_min, particles::C_OP_PercentageBetweenTransforms, float);
				MEMBER(fl_output_max, particles::C_OP_PercentageBetweenTransforms, float);
				MEMBER(transform_start, particles::C_OP_PercentageBetweenTransforms, particleslib::CParticleTransformInput);
				MEMBER(transform_end, particles::C_OP_PercentageBetweenTransforms, particleslib::CParticleTransformInput);
				MEMBER(n_set_method, particles::C_OP_PercentageBetweenTransforms, particles::ParticleSetMethod_t);
				MEMBER(b_active_range, particles::C_OP_PercentageBetweenTransforms, bool);
				MEMBER(b_radial_check, particles::C_OP_PercentageBetweenTransforms, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_PercentageBetweenTransforms

			class C_OP_LerpScalar : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_LerpScalar, particles::ParticleAttributeIndex_t);
				MEMBER(fl_output, particles::C_OP_LerpScalar, particleslib::CPerParticleFloatInput);
				MEMBER(fl_start_time, particles::C_OP_LerpScalar, float);
				MEMBER(fl_end_time, particles::C_OP_LerpScalar, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_LerpScalar

			class C_OP_CycleScalar : public particles::CParticleFunctionOperator {
				MEMBER(n_dest_field, particles::C_OP_CycleScalar, particles::ParticleAttributeIndex_t);
				MEMBER(fl_start_value, particles::C_OP_CycleScalar, float);
				MEMBER(fl_end_value, particles::C_OP_CycleScalar, float);
				MEMBER(fl_cycle_time, particles::C_OP_CycleScalar, float);
				MEMBER(b_do_not_repeat_cycle, particles::C_OP_CycleScalar, bool);
				MEMBER(b_synchronize_particles, particles::C_OP_CycleScalar, bool);
				MEMBER(n_cpscale, particles::C_OP_CycleScalar, int32_t);
				MEMBER(n_cpfield_min, particles::C_OP_CycleScalar, int32_t);
				MEMBER(n_cpfield_max, particles::C_OP_CycleScalar, int32_t);
				MEMBER(n_set_method, particles::C_OP_CycleScalar, particles::ParticleSetMethod_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_CycleScalar

			class C_OP_MovementMoveAlongSkinnedCPSnapshot : public particles::CParticleFunctionOperator {
				MEMBER(n_control_point_number, particles::C_OP_MovementMoveAlongSkinnedCPSnapshot, int32_t);
				MEMBER(n_snapshot_control_point_number, particles::C_OP_MovementMoveAlongSkinnedCPSnapshot, int32_t);
				MEMBER(b_set_normal, particles::C_OP_MovementMoveAlongSkinnedCPSnapshot, bool);
				MEMBER(b_set_radius, particles::C_OP_MovementMoveAlongSkinnedCPSnapshot, bool);
				MEMBER(fl_interpolation, particles::C_OP_MovementMoveAlongSkinnedCPSnapshot, particleslib::CPerParticleFloatInput);
				MEMBER(fl_tvalue, particles::C_OP_MovementMoveAlongSkinnedCPSnapshot, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_MovementMoveAlongSkinnedCPSnapshot

			class C_OP_RemapDensityGradientToVectorAttribute : public particles::CParticleFunctionOperator {
				MEMBER(fl_radius_scale, particles::C_OP_RemapDensityGradientToVectorAttribute, float);
				MEMBER(n_field_output, particles::C_OP_RemapDensityGradientToVectorAttribute, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapDensityGradientToVectorAttribute

			class C_OP_AlphaDecay : public particles::CParticleFunctionOperator {
				MEMBER(fl_min_alpha, particles::C_OP_AlphaDecay, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_AlphaDecay

			class C_OP_ColorAdjustHSL : public particles::CParticleFunctionOperator {
				MEMBER(fl_hue_adjust, particles::C_OP_ColorAdjustHSL, particleslib::CPerParticleFloatInput);
				MEMBER(fl_saturation_adjust, particles::C_OP_ColorAdjustHSL, particleslib::CPerParticleFloatInput);
				MEMBER(fl_lightness_adjust, particles::C_OP_ColorAdjustHSL, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ColorAdjustHSL

			class C_OP_LagCompensation : public particles::CParticleFunctionOperator {
				MEMBER(n_desired_velocity_cp, particles::C_OP_LagCompensation, int32_t);
				MEMBER(n_latency_cp, particles::C_OP_LagCompensation, int32_t);
				MEMBER(n_latency_cpfield, particles::C_OP_LagCompensation, int32_t);
				MEMBER(n_desired_velocity_cpfield, particles::C_OP_LagCompensation, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_LagCompensation

			class C_OP_MovementMaintainOffset : public particles::CParticleFunctionOperator {
				MEMBER(vec_offset, particles::C_OP_MovementMaintainOffset, Vector);
				MEMBER(n_cp, particles::C_OP_MovementMaintainOffset, int32_t);
				MEMBER(b_radius_scale, particles::C_OP_MovementMaintainOffset, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_MovementMaintainOffset

			class C_OP_LockToBone : public particles::CParticleFunctionOperator {
				MEMBER(model_input, particles::C_OP_LockToBone, particleslib::CParticleModelInput);
				MEMBER(transform_input, particles::C_OP_LockToBone, particleslib::CParticleTransformInput);
				MEMBER(fl_life_time_fade_start, particles::C_OP_LockToBone, float);
				MEMBER(fl_life_time_fade_end, particles::C_OP_LockToBone, float);
				MEMBER(fl_jump_threshold, particles::C_OP_LockToBone, float);
				MEMBER(fl_prev_pos_scale, particles::C_OP_LockToBone, float);
				MEMBER_ARR(hitbox_set_name, particles::C_OP_LockToBone, 128, char);
				MEMBER(b_rigid, particles::C_OP_LockToBone, bool);
				MEMBER(b_use_bones, particles::C_OP_LockToBone, bool);
				MEMBER(n_field_output, particles::C_OP_LockToBone, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output_prev, particles::C_OP_LockToBone, particles::ParticleAttributeIndex_t);
				MEMBER(n_rotation_set_type, particles::C_OP_LockToBone, particles::ParticleRotationLockType_t);
				MEMBER(b_rigid_rotation_lock, particles::C_OP_LockToBone, bool);
				MEMBER(vec_rotation, particles::C_OP_LockToBone, particleslib::CPerParticleVecInput);
				MEMBER(fl_rot_lerp, particles::C_OP_LockToBone, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_LockToBone

			class C_OP_RemapVectorComponentToScalar : public particles::CParticleFunctionOperator {
				MEMBER(n_field_input, particles::C_OP_RemapVectorComponentToScalar, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_OP_RemapVectorComponentToScalar, particles::ParticleAttributeIndex_t);
				MEMBER(n_component, particles::C_OP_RemapVectorComponentToScalar, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapVectorComponentToScalar

			class C_OP_Diffusion : public particles::CParticleFunctionOperator {
				MEMBER(fl_radius_scale, particles::C_OP_Diffusion, float);
				MEMBER(n_field_output, particles::C_OP_Diffusion, particles::ParticleAttributeIndex_t);
				MEMBER(n_voxel_grid_resolution, particles::C_OP_Diffusion, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_Diffusion

			class C_OP_SetFloatCollection : public particles::CParticleFunctionOperator {
				MEMBER(input_value, particles::C_OP_SetFloatCollection, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_output_field, particles::C_OP_SetFloatCollection, particles::ParticleAttributeIndex_t);
				MEMBER(n_set_method, particles::C_OP_SetFloatCollection, particles::ParticleSetMethod_t);
				MEMBER(lerp, particles::C_OP_SetFloatCollection, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetFloatCollection

			class C_OP_InheritFromParentParticlesV2 : public particles::CParticleFunctionOperator {
				MEMBER(fl_scale, particles::C_OP_InheritFromParentParticlesV2, float);
				MEMBER(n_field_output, particles::C_OP_InheritFromParentParticlesV2, particles::ParticleAttributeIndex_t);
				MEMBER(n_increment, particles::C_OP_InheritFromParentParticlesV2, int32_t);
				MEMBER(b_random_distribution, particles::C_OP_InheritFromParentParticlesV2, bool);
				MEMBER(n_missing_parent_behavior, particles::C_OP_InheritFromParentParticlesV2, particles::MissingParentInheritBehavior_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_InheritFromParentParticlesV2

			class C_OP_RemapCrossProductOfTwoVectorsToVector : public particles::CParticleFunctionOperator {
				MEMBER(input_vec1, particles::C_OP_RemapCrossProductOfTwoVectorsToVector, particleslib::CPerParticleVecInput);
				MEMBER(input_vec2, particles::C_OP_RemapCrossProductOfTwoVectorsToVector, particleslib::CPerParticleVecInput);
				MEMBER(n_field_output, particles::C_OP_RemapCrossProductOfTwoVectorsToVector, particles::ParticleAttributeIndex_t);
				MEMBER(b_normalize, particles::C_OP_RemapCrossProductOfTwoVectorsToVector, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapCrossProductOfTwoVectorsToVector

			class C_OP_SetCPOrientationToDirection : public particles::CParticleFunctionOperator {
				MEMBER(n_input_control_point, particles::C_OP_SetCPOrientationToDirection, int32_t);
				MEMBER(n_output_control_point, particles::C_OP_SetCPOrientationToDirection, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetCPOrientationToDirection

			class C_OP_MovementPlaceOnGround : public particles::CParticleFunctionOperator {
				MEMBER(fl_offset, particles::C_OP_MovementPlaceOnGround, particleslib::CPerParticleFloatInput);
				MEMBER(fl_max_trace_length, particles::C_OP_MovementPlaceOnGround, float);
				MEMBER(fl_tolerance, particles::C_OP_MovementPlaceOnGround, float);
				MEMBER(fl_trace_offset, particles::C_OP_MovementPlaceOnGround, float);
				MEMBER(fl_lerp_rate, particles::C_OP_MovementPlaceOnGround, float);
				MEMBER_ARR(collision_group_name, particles::C_OP_MovementPlaceOnGround, 128, char);
				MEMBER(n_trace_set, particles::C_OP_MovementPlaceOnGround, particles::ParticleTraceSet_t);
				MEMBER(n_ref_cp1, particles::C_OP_MovementPlaceOnGround, int32_t);
				MEMBER(n_ref_cp2, particles::C_OP_MovementPlaceOnGround, int32_t);
				MEMBER(n_lerp_cp, particles::C_OP_MovementPlaceOnGround, int32_t);
				MEMBER(n_trace_miss_behavior, particles::C_OP_MovementPlaceOnGround, particles::ParticleTraceMissBehavior_t);
				MEMBER(b_include_shot_hull, particles::C_OP_MovementPlaceOnGround, bool);
				MEMBER(b_include_water, particles::C_OP_MovementPlaceOnGround, bool);
				MEMBER(b_set_normal, particles::C_OP_MovementPlaceOnGround, bool);
				MEMBER(b_scale_offset, particles::C_OP_MovementPlaceOnGround, bool);
				MEMBER(n_preserve_offset_cp, particles::C_OP_MovementPlaceOnGround, int32_t);
				MEMBER(n_ignore_cp, particles::C_OP_MovementPlaceOnGround, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_MovementPlaceOnGround

			class C_OP_LockToPointList : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_LockToPointList, particles::ParticleAttributeIndex_t);
				MEMBER(point_list, particles::C_OP_LockToPointList, cutl_vector<particles::PointDefinition_t>);
				MEMBER(b_place_along_path, particles::C_OP_LockToPointList, bool);
				MEMBER(b_closed_loop, particles::C_OP_LockToPointList, bool);
				MEMBER(n_num_points_along_path, particles::C_OP_LockToPointList, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_LockToPointList

			class C_OP_VelocityDecay : public particles::CParticleFunctionOperator {
				MEMBER(fl_min_velocity, particles::C_OP_VelocityDecay, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_VelocityDecay

			class C_OP_LerpEndCapVector : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_LerpEndCapVector, particles::ParticleAttributeIndex_t);
				MEMBER(vec_output, particles::C_OP_LerpEndCapVector, Vector);
				MEMBER(fl_lerp_time, particles::C_OP_LerpEndCapVector, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_LerpEndCapVector

			class C_OP_DampenToCP : public particles::CParticleFunctionOperator {
				MEMBER(n_control_point_number, particles::C_OP_DampenToCP, int32_t);
				MEMBER(fl_range, particles::C_OP_DampenToCP, float);
				MEMBER(fl_scale, particles::C_OP_DampenToCP, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_DampenToCP

			class C_OP_LerpToInitialPosition : public particles::CParticleFunctionOperator {
				MEMBER(n_control_point_number, particles::C_OP_LerpToInitialPosition, int32_t);
				MEMBER(fl_interpolation, particles::C_OP_LerpToInitialPosition, particleslib::CPerParticleFloatInput);
				MEMBER(n_cache_field, particles::C_OP_LerpToInitialPosition, particles::ParticleAttributeIndex_t);
				MEMBER(fl_scale, particles::C_OP_LerpToInitialPosition, particleslib::CParticleCollectionFloatInput);
				MEMBER(vec_scale, particles::C_OP_LerpToInitialPosition, particleslib::CParticleCollectionVecInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_LerpToInitialPosition

			class C_OP_DistanceBetweenVecs : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_DistanceBetweenVecs, particles::ParticleAttributeIndex_t);
				MEMBER(vec_point1, particles::C_OP_DistanceBetweenVecs, particleslib::CPerParticleVecInput);
				MEMBER(vec_point2, particles::C_OP_DistanceBetweenVecs, particleslib::CPerParticleVecInput);
				MEMBER(fl_input_min, particles::C_OP_DistanceBetweenVecs, particleslib::CPerParticleFloatInput);
				MEMBER(fl_input_max, particles::C_OP_DistanceBetweenVecs, particleslib::CPerParticleFloatInput);
				MEMBER(fl_output_min, particles::C_OP_DistanceBetweenVecs, particleslib::CPerParticleFloatInput);
				MEMBER(fl_output_max, particles::C_OP_DistanceBetweenVecs, particleslib::CPerParticleFloatInput);
				MEMBER(n_set_method, particles::C_OP_DistanceBetweenVecs, particles::ParticleSetMethod_t);
				MEMBER(b_delta_time, particles::C_OP_DistanceBetweenVecs, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_DistanceBetweenVecs

			class C_OP_RemapSDFGradientToVectorAttribute : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_RemapSDFGradientToVectorAttribute, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapSDFGradientToVectorAttribute

			class C_OP_Cull : public particles::CParticleFunctionOperator {
				MEMBER(fl_cull_perc, particles::C_OP_Cull, float);
				MEMBER(fl_cull_start, particles::C_OP_Cull, float);
				MEMBER(fl_cull_end, particles::C_OP_Cull, float);
				MEMBER(fl_cull_exp, particles::C_OP_Cull, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_Cull

			class C_OP_NormalLock : public particles::CParticleFunctionOperator {
				MEMBER(n_control_point_number, particles::C_OP_NormalLock, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_NormalLock

			class C_OP_LockToSavedSequentialPathV2 : public particles::CParticleFunctionOperator {
				MEMBER(fl_fade_start, particles::C_OP_LockToSavedSequentialPathV2, float);
				MEMBER(fl_fade_end, particles::C_OP_LockToSavedSequentialPathV2, float);
				MEMBER(b_cppairs, particles::C_OP_LockToSavedSequentialPathV2, bool);
				MEMBER(path_params, particles::C_OP_LockToSavedSequentialPathV2, particles::CPathParameters);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_LockToSavedSequentialPathV2

			class C_OP_VelocityMatchingForce : public particles::CParticleFunctionOperator {
				MEMBER(fl_dir_scale, particles::C_OP_VelocityMatchingForce, float);
				MEMBER(fl_spd_scale, particles::C_OP_VelocityMatchingForce, float);
				MEMBER(fl_neighbor_distance, particles::C_OP_VelocityMatchingForce, float);
				MEMBER(fl_facing_strength, particles::C_OP_VelocityMatchingForce, float);
				MEMBER(b_use_aabb, particles::C_OP_VelocityMatchingForce, bool);
				MEMBER(n_cpbroadcast, particles::C_OP_VelocityMatchingForce, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_VelocityMatchingForce

			class C_OP_DecayClampCount : public particles::CParticleFunctionOperator {
				MEMBER(n_count, particles::C_OP_DecayClampCount, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_DecayClampCount

			class C_OP_SetControlPointsToModelParticles : public particles::CParticleFunctionOperator {
				MEMBER_ARR(hitbox_set_name, particles::C_OP_SetControlPointsToModelParticles, 128, char);
				MEMBER_ARR(attachment_name, particles::C_OP_SetControlPointsToModelParticles, 128, char);
				MEMBER(n_first_control_point, particles::C_OP_SetControlPointsToModelParticles, int32_t);
				MEMBER(n_num_control_points, particles::C_OP_SetControlPointsToModelParticles, int32_t);
				MEMBER(n_first_source_point, particles::C_OP_SetControlPointsToModelParticles, int32_t);
				MEMBER(b_skin, particles::C_OP_SetControlPointsToModelParticles, bool);
				MEMBER(b_attachment, particles::C_OP_SetControlPointsToModelParticles, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointsToModelParticles

			class C_OP_DistanceCull : public particles::CParticleFunctionOperator {
				MEMBER(n_control_point, particles::C_OP_DistanceCull, int32_t);
				MEMBER(vec_point_offset, particles::C_OP_DistanceCull, Vector);
				MEMBER(fl_distance, particles::C_OP_DistanceCull, float);
				MEMBER(b_cull_inside, particles::C_OP_DistanceCull, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_DistanceCull

			class C_OP_RotateVector : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_RotateVector, particles::ParticleAttributeIndex_t);
				MEMBER(vec_rot_axis_min, particles::C_OP_RotateVector, Vector);
				MEMBER(vec_rot_axis_max, particles::C_OP_RotateVector, Vector);
				MEMBER(fl_rot_rate_min, particles::C_OP_RotateVector, float);
				MEMBER(fl_rot_rate_max, particles::C_OP_RotateVector, float);
				MEMBER(b_normalize, particles::C_OP_RotateVector, bool);
				MEMBER(fl_scale, particles::C_OP_RotateVector, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RotateVector

			class C_OP_SetFromCPSnapshot : public particles::CParticleFunctionOperator {
				MEMBER(n_control_point_number, particles::C_OP_SetFromCPSnapshot, int32_t);
				MEMBER(n_attribute_to_read, particles::C_OP_SetFromCPSnapshot, particles::ParticleAttributeIndex_t);
				MEMBER(n_attribute_to_write, particles::C_OP_SetFromCPSnapshot, particles::ParticleAttributeIndex_t);
				MEMBER(n_local_space_cp, particles::C_OP_SetFromCPSnapshot, int32_t);
				MEMBER(b_random, particles::C_OP_SetFromCPSnapshot, bool);
				MEMBER(b_reverse, particles::C_OP_SetFromCPSnapshot, bool);
				MEMBER(n_random_seed, particles::C_OP_SetFromCPSnapshot, int32_t);
				MEMBER(n_snap_shot_start_point, particles::C_OP_SetFromCPSnapshot, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_snap_shot_increment, particles::C_OP_SetFromCPSnapshot, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_interpolation, particles::C_OP_SetFromCPSnapshot, particleslib::CPerParticleFloatInput);
				MEMBER(b_sub_sample, particles::C_OP_SetFromCPSnapshot, bool);
				MEMBER(b_prev, particles::C_OP_SetFromCPSnapshot, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetFromCPSnapshot

			class C_OP_MovementRotateParticleAroundAxis : public particles::CParticleFunctionOperator {
				MEMBER(vec_rot_axis, particles::C_OP_MovementRotateParticleAroundAxis, particleslib::CParticleCollectionVecInput);
				MEMBER(fl_rot_rate, particles::C_OP_MovementRotateParticleAroundAxis, particleslib::CParticleCollectionFloatInput);
				MEMBER(transform_input, particles::C_OP_MovementRotateParticleAroundAxis, particleslib::CParticleTransformInput);
				MEMBER(b_local_space, particles::C_OP_MovementRotateParticleAroundAxis, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_MovementRotateParticleAroundAxis

			class C_OP_RemapVectortoCP : public particles::CParticleFunctionOperator {
				MEMBER(n_out_control_point_number, particles::C_OP_RemapVectortoCP, int32_t);
				MEMBER(n_field_input, particles::C_OP_RemapVectortoCP, particles::ParticleAttributeIndex_t);
				MEMBER(n_particle_number, particles::C_OP_RemapVectortoCP, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapVectortoCP

			class C_OP_CalculateVectorAttribute : public particles::CParticleFunctionOperator {
				MEMBER(v_start_value, particles::C_OP_CalculateVectorAttribute, Vector);
				MEMBER(n_field_input1, particles::C_OP_CalculateVectorAttribute, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_scale1, particles::C_OP_CalculateVectorAttribute, float);
				MEMBER(n_field_input2, particles::C_OP_CalculateVectorAttribute, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_scale2, particles::C_OP_CalculateVectorAttribute, float);
				MEMBER(n_control_point_input1, particles::C_OP_CalculateVectorAttribute, particles::ControlPointReference_t);
				MEMBER(fl_control_point_scale1, particles::C_OP_CalculateVectorAttribute, float);
				MEMBER(n_control_point_input2, particles::C_OP_CalculateVectorAttribute, particles::ControlPointReference_t);
				MEMBER(fl_control_point_scale2, particles::C_OP_CalculateVectorAttribute, float);
				MEMBER(n_field_output, particles::C_OP_CalculateVectorAttribute, particles::ParticleAttributeIndex_t);
				MEMBER(v_final_output_scale, particles::C_OP_CalculateVectorAttribute, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_CalculateVectorAttribute

			class C_OP_SetFloat : public particles::CParticleFunctionOperator {
				MEMBER(input_value, particles::C_OP_SetFloat, particleslib::CPerParticleFloatInput);
				MEMBER(n_output_field, particles::C_OP_SetFloat, particles::ParticleAttributeIndex_t);
				MEMBER(n_set_method, particles::C_OP_SetFloat, particles::ParticleSetMethod_t);
				MEMBER(lerp, particles::C_OP_SetFloat, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetFloat

			class C_OP_ModelCull : public particles::CParticleFunctionOperator {
				MEMBER(n_control_point_number, particles::C_OP_ModelCull, int32_t);
				MEMBER(b_bound_box, particles::C_OP_ModelCull, bool);
				MEMBER(b_cull_outside, particles::C_OP_ModelCull, bool);
				MEMBER(b_use_bones, particles::C_OP_ModelCull, bool);
				MEMBER_ARR(hitbox_set_name, particles::C_OP_ModelCull, 128, char);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ModelCull

			class C_OP_RemapTransformOrientationToYaw : public particles::CParticleFunctionOperator {
				MEMBER(transform_input, particles::C_OP_RemapTransformOrientationToYaw, particleslib::CParticleTransformInput);
				MEMBER(n_field_output, particles::C_OP_RemapTransformOrientationToYaw, particles::ParticleAttributeIndex_t);
				MEMBER(fl_rot_offset, particles::C_OP_RemapTransformOrientationToYaw, float);
				MEMBER(fl_spin_strength, particles::C_OP_RemapTransformOrientationToYaw, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapTransformOrientationToYaw

			class C_OP_RampScalarSplineSimple : public particles::CParticleFunctionOperator {
				MEMBER(rate, particles::C_OP_RampScalarSplineSimple, float);
				MEMBER(fl_start_time, particles::C_OP_RampScalarSplineSimple, float);
				MEMBER(fl_end_time, particles::C_OP_RampScalarSplineSimple, float);
				MEMBER(n_field, particles::C_OP_RampScalarSplineSimple, particles::ParticleAttributeIndex_t);
				MEMBER(b_ease_out, particles::C_OP_RampScalarSplineSimple, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RampScalarSplineSimple

			class C_OP_FadeOut : public particles::CParticleFunctionOperator {
				MEMBER(fl_fade_out_time_min, particles::C_OP_FadeOut, float);
				MEMBER(fl_fade_out_time_max, particles::C_OP_FadeOut, float);
				MEMBER(fl_fade_out_time_exp, particles::C_OP_FadeOut, float);
				MEMBER(fl_fade_bias, particles::C_OP_FadeOut, float);
				MEMBER(b_proportional, particles::C_OP_FadeOut, bool);
				MEMBER(b_ease_in_and_out, particles::C_OP_FadeOut, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_FadeOut

			class C_OP_ClampScalar : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_ClampScalar, particles::ParticleAttributeIndex_t);
				MEMBER(fl_output_min, particles::C_OP_ClampScalar, particleslib::CPerParticleFloatInput);
				MEMBER(fl_output_max, particles::C_OP_ClampScalar, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ClampScalar

			class C_OP_VectorFieldSnapshot : public particles::CParticleFunctionOperator {
				MEMBER(n_control_point_number, particles::C_OP_VectorFieldSnapshot, int32_t);
				MEMBER(n_attribute_to_write, particles::C_OP_VectorFieldSnapshot, particles::ParticleAttributeIndex_t);
				MEMBER(n_local_space_cp, particles::C_OP_VectorFieldSnapshot, int32_t);
				MEMBER(fl_interpolation, particles::C_OP_VectorFieldSnapshot, particleslib::CPerParticleFloatInput);
				MEMBER(vec_scale, particles::C_OP_VectorFieldSnapshot, particleslib::CPerParticleVecInput);
				MEMBER(fl_boundary_dampening, particles::C_OP_VectorFieldSnapshot, float);
				MEMBER(b_set_velocity, particles::C_OP_VectorFieldSnapshot, bool);
				MEMBER(b_lock_to_surface, particles::C_OP_VectorFieldSnapshot, bool);
				MEMBER(fl_grid_spacing, particles::C_OP_VectorFieldSnapshot, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_VectorFieldSnapshot

			class C_OP_ControlpointLight : public particles::CParticleFunctionOperator {
				MEMBER(fl_scale, particles::C_OP_ControlpointLight, float);
				MEMBER(n_control_point1, particles::C_OP_ControlpointLight, int32_t);
				MEMBER(n_control_point2, particles::C_OP_ControlpointLight, int32_t);
				MEMBER(n_control_point3, particles::C_OP_ControlpointLight, int32_t);
				MEMBER(n_control_point4, particles::C_OP_ControlpointLight, int32_t);
				MEMBER(vec_cpoffset1, particles::C_OP_ControlpointLight, Vector);
				MEMBER(vec_cpoffset2, particles::C_OP_ControlpointLight, Vector);
				MEMBER(vec_cpoffset3, particles::C_OP_ControlpointLight, Vector);
				MEMBER(vec_cpoffset4, particles::C_OP_ControlpointLight, Vector);
				MEMBER(light_fifty_dist1, particles::C_OP_ControlpointLight, float);
				MEMBER(light_zero_dist1, particles::C_OP_ControlpointLight, float);
				MEMBER(light_fifty_dist2, particles::C_OP_ControlpointLight, float);
				MEMBER(light_zero_dist2, particles::C_OP_ControlpointLight, float);
				MEMBER(light_fifty_dist3, particles::C_OP_ControlpointLight, float);
				MEMBER(light_zero_dist3, particles::C_OP_ControlpointLight, float);
				MEMBER(light_fifty_dist4, particles::C_OP_ControlpointLight, float);
				MEMBER(light_zero_dist4, particles::C_OP_ControlpointLight, float);
				MEMBER(light_color1, particles::C_OP_ControlpointLight, Color);
				MEMBER(light_color2, particles::C_OP_ControlpointLight, Color);
				MEMBER(light_color3, particles::C_OP_ControlpointLight, Color);
				MEMBER(light_color4, particles::C_OP_ControlpointLight, Color);
				MEMBER(b_light_type1, particles::C_OP_ControlpointLight, bool);
				MEMBER(b_light_type2, particles::C_OP_ControlpointLight, bool);
				MEMBER(b_light_type3, particles::C_OP_ControlpointLight, bool);
				MEMBER(b_light_type4, particles::C_OP_ControlpointLight, bool);
				MEMBER(b_light_dynamic1, particles::C_OP_ControlpointLight, bool);
				MEMBER(b_light_dynamic2, particles::C_OP_ControlpointLight, bool);
				MEMBER(b_light_dynamic3, particles::C_OP_ControlpointLight, bool);
				MEMBER(b_light_dynamic4, particles::C_OP_ControlpointLight, bool);
				MEMBER(b_use_normal, particles::C_OP_ControlpointLight, bool);
				MEMBER(b_use_hlambert, particles::C_OP_ControlpointLight, bool);
				MEMBER(b_clamp_lower_range, particles::C_OP_ControlpointLight, bool);
				MEMBER(b_clamp_upper_range, particles::C_OP_ControlpointLight, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ControlpointLight

			class C_OP_UpdateLightSource : public particles::CParticleFunctionOperator {
				MEMBER(v_color_tint, particles::C_OP_UpdateLightSource, Color);
				MEMBER(fl_brightness_scale, particles::C_OP_UpdateLightSource, float);
				MEMBER(fl_radius_scale, particles::C_OP_UpdateLightSource, float);
				MEMBER(fl_minimum_lighting_radius, particles::C_OP_UpdateLightSource, float);
				MEMBER(fl_maximum_lighting_radius, particles::C_OP_UpdateLightSource, float);
				MEMBER(fl_position_damping_constant, particles::C_OP_UpdateLightSource, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_UpdateLightSource

			class C_OP_PercentageBetweenTransformsVector : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_PercentageBetweenTransformsVector, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_PercentageBetweenTransformsVector, float);
				MEMBER(fl_input_max, particles::C_OP_PercentageBetweenTransformsVector, float);
				MEMBER(vec_output_min, particles::C_OP_PercentageBetweenTransformsVector, Vector);
				MEMBER(vec_output_max, particles::C_OP_PercentageBetweenTransformsVector, Vector);
				MEMBER(transform_start, particles::C_OP_PercentageBetweenTransformsVector, particleslib::CParticleTransformInput);
				MEMBER(transform_end, particles::C_OP_PercentageBetweenTransformsVector, particleslib::CParticleTransformInput);
				MEMBER(n_set_method, particles::C_OP_PercentageBetweenTransformsVector, particles::ParticleSetMethod_t);
				MEMBER(b_active_range, particles::C_OP_PercentageBetweenTransformsVector, bool);
				MEMBER(b_radial_check, particles::C_OP_PercentageBetweenTransformsVector, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_PercentageBetweenTransformsVector

			class C_OP_ConnectParentParticleToNearest : public particles::CParticleFunctionOperator {
				MEMBER(n_first_control_point, particles::C_OP_ConnectParentParticleToNearest, int32_t);
				MEMBER(n_second_control_point, particles::C_OP_ConnectParentParticleToNearest, int32_t);
				MEMBER(b_use_radius, particles::C_OP_ConnectParentParticleToNearest, bool);
				MEMBER(fl_radius_scale, particles::C_OP_ConnectParentParticleToNearest, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_parent_radius_scale, particles::C_OP_ConnectParentParticleToNearest, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ConnectParentParticleToNearest

			class C_OP_SDFLighting : public particles::CParticleFunctionOperator {
				MEMBER(v_lighting_dir, particles::C_OP_SDFLighting, Vector);
				MEMBER(v_tint_0, particles::C_OP_SDFLighting, Vector);
				MEMBER(v_tint_1, particles::C_OP_SDFLighting, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SDFLighting

			class C_OP_RemapCPtoScalar : public particles::CParticleFunctionOperator {
				MEMBER(n_cpinput, particles::C_OP_RemapCPtoScalar, int32_t);
				MEMBER(n_field_output, particles::C_OP_RemapCPtoScalar, particles::ParticleAttributeIndex_t);
				MEMBER(n_field, particles::C_OP_RemapCPtoScalar, int32_t);
				MEMBER(fl_input_min, particles::C_OP_RemapCPtoScalar, float);
				MEMBER(fl_input_max, particles::C_OP_RemapCPtoScalar, float);
				MEMBER(fl_output_min, particles::C_OP_RemapCPtoScalar, float);
				MEMBER(fl_output_max, particles::C_OP_RemapCPtoScalar, float);
				MEMBER(fl_start_time, particles::C_OP_RemapCPtoScalar, float);
				MEMBER(fl_end_time, particles::C_OP_RemapCPtoScalar, float);
				MEMBER(fl_interp_rate, particles::C_OP_RemapCPtoScalar, float);
				MEMBER(n_set_method, particles::C_OP_RemapCPtoScalar, particles::ParticleSetMethod_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapCPtoScalar

			class C_OP_SnapshotRigidSkinToBones : public particles::CParticleFunctionOperator {
				MEMBER(b_transform_normals, particles::C_OP_SnapshotRigidSkinToBones, bool);
				MEMBER(b_transform_radii, particles::C_OP_SnapshotRigidSkinToBones, bool);
				MEMBER(n_control_point_number, particles::C_OP_SnapshotRigidSkinToBones, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SnapshotRigidSkinToBones

			class C_OP_SetCPtoVector : public particles::CParticleFunctionOperator {
				MEMBER(n_cpinput, particles::C_OP_SetCPtoVector, int32_t);
				MEMBER(n_field_output, particles::C_OP_SetCPtoVector, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetCPtoVector

			class C_OP_DragRelativeToPlane : public particles::CParticleFunctionOperator {
				MEMBER(fl_drag_at_plane, particles::C_OP_DragRelativeToPlane, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_falloff, particles::C_OP_DragRelativeToPlane, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_directional, particles::C_OP_DragRelativeToPlane, bool);
				MEMBER(vec_plane_normal, particles::C_OP_DragRelativeToPlane, particleslib::CParticleCollectionVecInput);
				MEMBER(n_control_point_number, particles::C_OP_DragRelativeToPlane, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_DragRelativeToPlane

			class C_OP_RemapControlPointDirectionToVector : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_RemapControlPointDirectionToVector, particles::ParticleAttributeIndex_t);
				MEMBER(fl_scale, particles::C_OP_RemapControlPointDirectionToVector, float);
				MEMBER(n_control_point_number, particles::C_OP_RemapControlPointDirectionToVector, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapControlPointDirectionToVector

			class C_OP_CylindricalDistanceToTransform : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_CylindricalDistanceToTransform, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_CylindricalDistanceToTransform, particleslib::CPerParticleFloatInput);
				MEMBER(fl_input_max, particles::C_OP_CylindricalDistanceToTransform, particleslib::CPerParticleFloatInput);
				MEMBER(fl_output_min, particles::C_OP_CylindricalDistanceToTransform, particleslib::CPerParticleFloatInput);
				MEMBER(fl_output_max, particles::C_OP_CylindricalDistanceToTransform, particleslib::CPerParticleFloatInput);
				MEMBER(transform_start, particles::C_OP_CylindricalDistanceToTransform, particleslib::CParticleTransformInput);
				MEMBER(transform_end, particles::C_OP_CylindricalDistanceToTransform, particleslib::CParticleTransformInput);
				MEMBER(n_set_method, particles::C_OP_CylindricalDistanceToTransform, particles::ParticleSetMethod_t);
				MEMBER(b_active_range, particles::C_OP_CylindricalDistanceToTransform, bool);
				MEMBER(b_additive, particles::C_OP_CylindricalDistanceToTransform, bool);
				MEMBER(b_capsule, particles::C_OP_CylindricalDistanceToTransform, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_CylindricalDistanceToTransform

			class C_OP_RemapTransformOrientationToRotations : public particles::CParticleFunctionOperator {
				MEMBER(transform_input, particles::C_OP_RemapTransformOrientationToRotations, particleslib::CParticleTransformInput);
				MEMBER(vec_rotation, particles::C_OP_RemapTransformOrientationToRotations, Vector);
				MEMBER(b_use_quat, particles::C_OP_RemapTransformOrientationToRotations, bool);
				MEMBER(b_write_normal, particles::C_OP_RemapTransformOrientationToRotations, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapTransformOrientationToRotations

			class C_OP_EndCapTimedFreeze : public particles::CParticleFunctionOperator {
				MEMBER(fl_freeze_time, particles::C_OP_EndCapTimedFreeze, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_EndCapTimedFreeze

			class C_OP_RestartAfterDuration : public particles::CParticleFunctionOperator {
				MEMBER(fl_duration_min, particles::C_OP_RestartAfterDuration, float);
				MEMBER(fl_duration_max, particles::C_OP_RestartAfterDuration, float);
				MEMBER(n_cp, particles::C_OP_RestartAfterDuration, int32_t);
				MEMBER(n_cpfield, particles::C_OP_RestartAfterDuration, int32_t);
				MEMBER(n_child_group_id, particles::C_OP_RestartAfterDuration, int32_t);
				MEMBER(b_only_children, particles::C_OP_RestartAfterDuration, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RestartAfterDuration

			class C_OP_ReinitializeScalarEndCap : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_ReinitializeScalarEndCap, particles::ParticleAttributeIndex_t);
				MEMBER(fl_output_min, particles::C_OP_ReinitializeScalarEndCap, float);
				MEMBER(fl_output_max, particles::C_OP_ReinitializeScalarEndCap, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ReinitializeScalarEndCap

			class C_OP_InterpolateRadius : public particles::CParticleFunctionOperator {
				MEMBER(fl_start_time, particles::C_OP_InterpolateRadius, float);
				MEMBER(fl_end_time, particles::C_OP_InterpolateRadius, float);
				MEMBER(fl_start_scale, particles::C_OP_InterpolateRadius, float);
				MEMBER(fl_end_scale, particles::C_OP_InterpolateRadius, float);
				MEMBER(b_ease_in_and_out, particles::C_OP_InterpolateRadius, bool);
				MEMBER(fl_bias, particles::C_OP_InterpolateRadius, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_InterpolateRadius

			class C_OP_LockToSavedSequentialPath : public particles::CParticleFunctionOperator {
				MEMBER(fl_fade_start, particles::C_OP_LockToSavedSequentialPath, float);
				MEMBER(fl_fade_end, particles::C_OP_LockToSavedSequentialPath, float);
				MEMBER(b_cppairs, particles::C_OP_LockToSavedSequentialPath, bool);
				MEMBER(path_params, particles::C_OP_LockToSavedSequentialPath, particles::CPathParameters);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_LockToSavedSequentialPath

			class C_OP_InheritFromPeerSystem : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_InheritFromPeerSystem, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_input, particles::C_OP_InheritFromPeerSystem, particles::ParticleAttributeIndex_t);
				MEMBER(n_increment, particles::C_OP_InheritFromPeerSystem, int32_t);
				MEMBER(n_group_id, particles::C_OP_InheritFromPeerSystem, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_InheritFromPeerSystem

			class C_OP_OscillateVector : public particles::CParticleFunctionOperator {
				MEMBER(rate_min, particles::C_OP_OscillateVector, Vector);
				MEMBER(rate_max, particles::C_OP_OscillateVector, Vector);
				MEMBER(frequency_min, particles::C_OP_OscillateVector, Vector);
				MEMBER(frequency_max, particles::C_OP_OscillateVector, Vector);
				MEMBER(n_field, particles::C_OP_OscillateVector, particles::ParticleAttributeIndex_t);
				MEMBER(b_proportional, particles::C_OP_OscillateVector, bool);
				MEMBER(b_proportional_op, particles::C_OP_OscillateVector, bool);
				MEMBER(b_offset, particles::C_OP_OscillateVector, bool);
				MEMBER(fl_start_time_min, particles::C_OP_OscillateVector, float);
				MEMBER(fl_start_time_max, particles::C_OP_OscillateVector, float);
				MEMBER(fl_end_time_min, particles::C_OP_OscillateVector, float);
				MEMBER(fl_end_time_max, particles::C_OP_OscillateVector, float);
				MEMBER(fl_osc_mult, particles::C_OP_OscillateVector, particleslib::CPerParticleFloatInput);
				MEMBER(fl_osc_add, particles::C_OP_OscillateVector, particleslib::CPerParticleFloatInput);
				MEMBER(fl_rate_scale, particles::C_OP_OscillateVector, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_OscillateVector

			class C_OP_MovementSkinnedPositionFromCPSnapshot : public particles::CParticleFunctionOperator {
				MEMBER(n_snapshot_control_point_number, particles::C_OP_MovementSkinnedPositionFromCPSnapshot, int32_t);
				MEMBER(n_control_point_number, particles::C_OP_MovementSkinnedPositionFromCPSnapshot, int32_t);
				MEMBER(b_random, particles::C_OP_MovementSkinnedPositionFromCPSnapshot, bool);
				MEMBER(n_random_seed, particles::C_OP_MovementSkinnedPositionFromCPSnapshot, int32_t);
				MEMBER(b_set_normal, particles::C_OP_MovementSkinnedPositionFromCPSnapshot, bool);
				MEMBER(b_set_radius, particles::C_OP_MovementSkinnedPositionFromCPSnapshot, bool);
				MEMBER(n_index_type, particles::C_OP_MovementSkinnedPositionFromCPSnapshot, particles::SnapshotIndexType_t);
				MEMBER(fl_read_index, particles::C_OP_MovementSkinnedPositionFromCPSnapshot, particleslib::CPerParticleFloatInput);
				MEMBER(fl_increment, particles::C_OP_MovementSkinnedPositionFromCPSnapshot, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_full_loop_increment, particles::C_OP_MovementSkinnedPositionFromCPSnapshot, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_snap_shot_start_point, particles::C_OP_MovementSkinnedPositionFromCPSnapshot, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_interpolation, particles::C_OP_MovementSkinnedPositionFromCPSnapshot, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_MovementSkinnedPositionFromCPSnapshot

			class C_OP_SetCPOrientationToGroundNormal : public particles::CParticleFunctionOperator {
				MEMBER(fl_interp_rate, particles::C_OP_SetCPOrientationToGroundNormal, float);
				MEMBER(fl_max_trace_length, particles::C_OP_SetCPOrientationToGroundNormal, float);
				MEMBER(fl_tolerance, particles::C_OP_SetCPOrientationToGroundNormal, float);
				MEMBER(fl_trace_offset, particles::C_OP_SetCPOrientationToGroundNormal, float);
				MEMBER_ARR(collision_group_name, particles::C_OP_SetCPOrientationToGroundNormal, 128, char);
				MEMBER(n_trace_set, particles::C_OP_SetCPOrientationToGroundNormal, particles::ParticleTraceSet_t);
				MEMBER(n_input_cp, particles::C_OP_SetCPOrientationToGroundNormal, int32_t);
				MEMBER(n_output_cp, particles::C_OP_SetCPOrientationToGroundNormal, int32_t);
				MEMBER(b_include_water, particles::C_OP_SetCPOrientationToGroundNormal, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetCPOrientationToGroundNormal

			class C_OP_ReadFromNeighboringParticle : public particles::CParticleFunctionOperator {
				MEMBER(n_field_input, particles::C_OP_ReadFromNeighboringParticle, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_OP_ReadFromNeighboringParticle, particles::ParticleAttributeIndex_t);
				MEMBER(n_increment, particles::C_OP_ReadFromNeighboringParticle, int32_t);
				MEMBER(distance_check, particles::C_OP_ReadFromNeighboringParticle, particleslib::CPerParticleFloatInput);
				MEMBER(fl_interpolation, particles::C_OP_ReadFromNeighboringParticle, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ReadFromNeighboringParticle

			class C_OP_SetPerChildControlPoint : public particles::CParticleFunctionOperator {
				MEMBER(n_child_group_id, particles::C_OP_SetPerChildControlPoint, int32_t);
				MEMBER(n_first_control_point, particles::C_OP_SetPerChildControlPoint, int32_t);
				MEMBER(n_num_control_points, particles::C_OP_SetPerChildControlPoint, int32_t);
				MEMBER(n_particle_increment, particles::C_OP_SetPerChildControlPoint, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_first_source_point, particles::C_OP_SetPerChildControlPoint, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_set_orientation, particles::C_OP_SetPerChildControlPoint, bool);
				MEMBER(n_orientation_field, particles::C_OP_SetPerChildControlPoint, particles::ParticleAttributeIndex_t);
				MEMBER(b_num_based_on_particle_count, particles::C_OP_SetPerChildControlPoint, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetPerChildControlPoint

			class C_OP_ColorInterpolateRandom : public particles::CParticleFunctionOperator {
				MEMBER(color_fade_min, particles::C_OP_ColorInterpolateRandom, Color);
				MEMBER(color_fade_max, particles::C_OP_ColorInterpolateRandom, Color);
				MEMBER(fl_fade_start_time, particles::C_OP_ColorInterpolateRandom, float);
				MEMBER(fl_fade_end_time, particles::C_OP_ColorInterpolateRandom, float);
				MEMBER(n_field_output, particles::C_OP_ColorInterpolateRandom, particles::ParticleAttributeIndex_t);
				MEMBER(b_ease_in_out, particles::C_OP_ColorInterpolateRandom, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ColorInterpolateRandom

			class C_OP_SequenceFromModel : public particles::CParticleFunctionOperator {
				MEMBER(n_control_point_number, particles::C_OP_SequenceFromModel, int32_t);
				MEMBER(n_field_output, particles::C_OP_SequenceFromModel, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output_anim, particles::C_OP_SequenceFromModel, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_SequenceFromModel, float);
				MEMBER(fl_input_max, particles::C_OP_SequenceFromModel, float);
				MEMBER(fl_output_min, particles::C_OP_SequenceFromModel, float);
				MEMBER(fl_output_max, particles::C_OP_SequenceFromModel, float);
				MEMBER(n_set_method, particles::C_OP_SequenceFromModel, particles::ParticleSetMethod_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SequenceFromModel

			class C_OP_MovementLoopInsideSphere : public particles::CParticleFunctionOperator {
				MEMBER(n_cp, particles::C_OP_MovementLoopInsideSphere, int32_t);
				MEMBER(fl_distance, particles::C_OP_MovementLoopInsideSphere, particleslib::CParticleCollectionFloatInput);
				MEMBER(vec_scale, particles::C_OP_MovementLoopInsideSphere, particleslib::CParticleCollectionVecInput);
				MEMBER(n_dist_sqr_attr, particles::C_OP_MovementLoopInsideSphere, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_MovementLoopInsideSphere

			class C_OP_DirectionBetweenVecsToVec : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_DirectionBetweenVecsToVec, particles::ParticleAttributeIndex_t);
				MEMBER(vec_point1, particles::C_OP_DirectionBetweenVecsToVec, particleslib::CPerParticleVecInput);
				MEMBER(vec_point2, particles::C_OP_DirectionBetweenVecsToVec, particleslib::CPerParticleVecInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_DirectionBetweenVecsToVec

			class C_OP_InheritFromParentParticles : public particles::CParticleFunctionOperator {
				MEMBER(fl_scale, particles::C_OP_InheritFromParentParticles, float);
				MEMBER(n_field_output, particles::C_OP_InheritFromParentParticles, particles::ParticleAttributeIndex_t);
				MEMBER(n_increment, particles::C_OP_InheritFromParentParticles, int32_t);
				MEMBER(b_random_distribution, particles::C_OP_InheritFromParentParticles, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_InheritFromParentParticles

			class C_OP_FadeAndKillForTracers : public particles::CParticleFunctionOperator {
				MEMBER(fl_start_fade_in_time, particles::C_OP_FadeAndKillForTracers, float);
				MEMBER(fl_end_fade_in_time, particles::C_OP_FadeAndKillForTracers, float);
				MEMBER(fl_start_fade_out_time, particles::C_OP_FadeAndKillForTracers, float);
				MEMBER(fl_end_fade_out_time, particles::C_OP_FadeAndKillForTracers, float);
				MEMBER(fl_start_alpha, particles::C_OP_FadeAndKillForTracers, float);
				MEMBER(fl_end_alpha, particles::C_OP_FadeAndKillForTracers, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_FadeAndKillForTracers

			class C_OP_RampScalarSpline : public particles::CParticleFunctionOperator {
				MEMBER(rate_min, particles::C_OP_RampScalarSpline, float);
				MEMBER(rate_max, particles::C_OP_RampScalarSpline, float);
				MEMBER(fl_start_time_min, particles::C_OP_RampScalarSpline, float);
				MEMBER(fl_start_time_max, particles::C_OP_RampScalarSpline, float);
				MEMBER(fl_end_time_min, particles::C_OP_RampScalarSpline, float);
				MEMBER(fl_end_time_max, particles::C_OP_RampScalarSpline, float);
				MEMBER(fl_bias, particles::C_OP_RampScalarSpline, float);
				MEMBER(n_field, particles::C_OP_RampScalarSpline, particles::ParticleAttributeIndex_t);
				MEMBER(b_proportional_op, particles::C_OP_RampScalarSpline, bool);
				MEMBER(b_ease_out, particles::C_OP_RampScalarSpline, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RampScalarSpline

			class C_OP_SetFloatAttributeToVectorExpression : public particles::CParticleFunctionOperator {
				MEMBER(n_expression, particles::C_OP_SetFloatAttributeToVectorExpression, particles::VectorFloatExpressionType_t);
				MEMBER(v_input1, particles::C_OP_SetFloatAttributeToVectorExpression, particleslib::CPerParticleVecInput);
				MEMBER(v_input2, particles::C_OP_SetFloatAttributeToVectorExpression, particleslib::CPerParticleVecInput);
				MEMBER(fl_output_remap, particles::C_OP_SetFloatAttributeToVectorExpression, particleslib::CParticleRemapFloatInput);
				MEMBER(n_output_field, particles::C_OP_SetFloatAttributeToVectorExpression, particles::ParticleAttributeIndex_t);
				MEMBER(n_set_method, particles::C_OP_SetFloatAttributeToVectorExpression, particles::ParticleSetMethod_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetFloatAttributeToVectorExpression

			class C_OP_Noise : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_Noise, particles::ParticleAttributeIndex_t);
				MEMBER(fl_output_min, particles::C_OP_Noise, float);
				MEMBER(fl_output_max, particles::C_OP_Noise, float);
				MEMBER(fl4_noise_scale, particles::C_OP_Noise, float);
				MEMBER(b_additive, particles::C_OP_Noise, bool);
				MEMBER(fl_noise_animation_time_scale, particles::C_OP_Noise, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_Noise

			class C_OP_Orient2DRelToCP : public particles::CParticleFunctionOperator {
				MEMBER(fl_rot_offset, particles::C_OP_Orient2DRelToCP, float);
				MEMBER(fl_spin_strength, particles::C_OP_Orient2DRelToCP, float);
				MEMBER(n_cp, particles::C_OP_Orient2DRelToCP, int32_t);
				MEMBER(n_field_output, particles::C_OP_Orient2DRelToCP, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_Orient2DRelToCP

			class C_OP_DifferencePreviousParticle : public particles::CParticleFunctionOperator {
				MEMBER(n_field_input, particles::C_OP_DifferencePreviousParticle, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_OP_DifferencePreviousParticle, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_DifferencePreviousParticle, float);
				MEMBER(fl_input_max, particles::C_OP_DifferencePreviousParticle, float);
				MEMBER(fl_output_min, particles::C_OP_DifferencePreviousParticle, float);
				MEMBER(fl_output_max, particles::C_OP_DifferencePreviousParticle, float);
				MEMBER(n_set_method, particles::C_OP_DifferencePreviousParticle, particles::ParticleSetMethod_t);
				MEMBER(b_active_range, particles::C_OP_DifferencePreviousParticle, bool);
				MEMBER(b_set_previous_particle, particles::C_OP_DifferencePreviousParticle, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_DifferencePreviousParticle

			class C_OP_SetVec : public particles::CParticleFunctionOperator {
				MEMBER(input_value, particles::C_OP_SetVec, particleslib::CPerParticleVecInput);
				MEMBER(n_output_field, particles::C_OP_SetVec, particles::ParticleAttributeIndex_t);
				MEMBER(n_set_method, particles::C_OP_SetVec, particles::ParticleSetMethod_t);
				MEMBER(lerp, particles::C_OP_SetVec, particleslib::CPerParticleFloatInput);
				MEMBER(b_normalized_output, particles::C_OP_SetVec, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetVec

			class C_OP_SetVectorAttributeToVectorExpression : public particles::CParticleFunctionOperator {
				MEMBER(n_expression, particles::C_OP_SetVectorAttributeToVectorExpression, particles::VectorExpressionType_t);
				MEMBER(v_input1, particles::C_OP_SetVectorAttributeToVectorExpression, particleslib::CPerParticleVecInput);
				MEMBER(v_input2, particles::C_OP_SetVectorAttributeToVectorExpression, particleslib::CPerParticleVecInput);
				MEMBER(n_output_field, particles::C_OP_SetVectorAttributeToVectorExpression, particles::ParticleAttributeIndex_t);
				MEMBER(n_set_method, particles::C_OP_SetVectorAttributeToVectorExpression, particles::ParticleSetMethod_t);
				MEMBER(b_normalized_output, particles::C_OP_SetVectorAttributeToVectorExpression, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetVectorAttributeToVectorExpression

			class C_OP_RemapCPtoVector : public particles::CParticleFunctionOperator {
				MEMBER(n_cpinput, particles::C_OP_RemapCPtoVector, int32_t);
				MEMBER(n_field_output, particles::C_OP_RemapCPtoVector, particles::ParticleAttributeIndex_t);
				MEMBER(n_local_space_cp, particles::C_OP_RemapCPtoVector, int32_t);
				MEMBER(v_input_min, particles::C_OP_RemapCPtoVector, Vector);
				MEMBER(v_input_max, particles::C_OP_RemapCPtoVector, Vector);
				MEMBER(v_output_min, particles::C_OP_RemapCPtoVector, Vector);
				MEMBER(v_output_max, particles::C_OP_RemapCPtoVector, Vector);
				MEMBER(fl_start_time, particles::C_OP_RemapCPtoVector, float);
				MEMBER(fl_end_time, particles::C_OP_RemapCPtoVector, float);
				MEMBER(fl_interp_rate, particles::C_OP_RemapCPtoVector, float);
				MEMBER(n_set_method, particles::C_OP_RemapCPtoVector, particles::ParticleSetMethod_t);
				MEMBER(b_offset, particles::C_OP_RemapCPtoVector, bool);
				MEMBER(b_accelerate, particles::C_OP_RemapCPtoVector, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapCPtoVector

			class C_OP_SetPerChildControlPointFromAttribute : public particles::CParticleFunctionOperator {
				MEMBER(n_child_group_id, particles::C_OP_SetPerChildControlPointFromAttribute, int32_t);
				MEMBER(n_first_control_point, particles::C_OP_SetPerChildControlPointFromAttribute, int32_t);
				MEMBER(n_num_control_points, particles::C_OP_SetPerChildControlPointFromAttribute, int32_t);
				MEMBER(n_particle_increment, particles::C_OP_SetPerChildControlPointFromAttribute, int32_t);
				MEMBER(n_first_source_point, particles::C_OP_SetPerChildControlPointFromAttribute, int32_t);
				MEMBER(b_num_based_on_particle_count, particles::C_OP_SetPerChildControlPointFromAttribute, bool);
				MEMBER(n_attribute_to_read, particles::C_OP_SetPerChildControlPointFromAttribute, particles::ParticleAttributeIndex_t);
				MEMBER(n_cpfield, particles::C_OP_SetPerChildControlPointFromAttribute, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetPerChildControlPointFromAttribute

			class C_OP_RemapScalarEndCap : public particles::CParticleFunctionOperator {
				MEMBER(n_field_input, particles::C_OP_RemapScalarEndCap, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_OP_RemapScalarEndCap, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_RemapScalarEndCap, float);
				MEMBER(fl_input_max, particles::C_OP_RemapScalarEndCap, float);
				MEMBER(fl_output_min, particles::C_OP_RemapScalarEndCap, float);
				MEMBER(fl_output_max, particles::C_OP_RemapScalarEndCap, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapScalarEndCap

			class C_OP_GlobalLight : public particles::CParticleFunctionOperator {
				MEMBER(fl_scale, particles::C_OP_GlobalLight, float);
				MEMBER(b_clamp_lower_range, particles::C_OP_GlobalLight, bool);
				MEMBER(b_clamp_upper_range, particles::C_OP_GlobalLight, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_GlobalLight

			class C_OP_RemapTransformVisibilityToVector : public particles::CParticleFunctionOperator {
				MEMBER(n_set_method, particles::C_OP_RemapTransformVisibilityToVector, particles::ParticleSetMethod_t);
				MEMBER(transform_input, particles::C_OP_RemapTransformVisibilityToVector, particleslib::CParticleTransformInput);
				MEMBER(n_field_output, particles::C_OP_RemapTransformVisibilityToVector, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_RemapTransformVisibilityToVector, float);
				MEMBER(fl_input_max, particles::C_OP_RemapTransformVisibilityToVector, float);
				MEMBER(vec_output_min, particles::C_OP_RemapTransformVisibilityToVector, Vector);
				MEMBER(vec_output_max, particles::C_OP_RemapTransformVisibilityToVector, Vector);
				MEMBER(fl_radius, particles::C_OP_RemapTransformVisibilityToVector, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapTransformVisibilityToVector

			class C_OP_BasicMovement : public particles::CParticleFunctionOperator {
				MEMBER(gravity, particles::C_OP_BasicMovement, particleslib::CParticleCollectionVecInput);
				MEMBER(f_drag, particles::C_OP_BasicMovement, particleslib::CParticleCollectionFloatInput);
				MEMBER(mass_controls, particles::C_OP_BasicMovement, particles::CParticleMassCalculationParameters);
				MEMBER(n_max_constraint_passes, particles::C_OP_BasicMovement, int32_t);
				MEMBER(b_use_new_code, particles::C_OP_BasicMovement, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_BasicMovement

			class C_OP_QuantizeFloat : public particles::CParticleFunctionOperator {
				MEMBER(input_value, particles::C_OP_QuantizeFloat, particleslib::CPerParticleFloatInput);
				MEMBER(n_output_field, particles::C_OP_QuantizeFloat, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_QuantizeFloat

			class C_OP_OscillateVectorSimple : public particles::CParticleFunctionOperator {
				MEMBER(rate, particles::C_OP_OscillateVectorSimple, Vector);
				MEMBER(frequency, particles::C_OP_OscillateVectorSimple, Vector);
				MEMBER(n_field, particles::C_OP_OscillateVectorSimple, particles::ParticleAttributeIndex_t);
				MEMBER(fl_osc_mult, particles::C_OP_OscillateVectorSimple, float);
				MEMBER(fl_osc_add, particles::C_OP_OscillateVectorSimple, float);
				MEMBER(b_offset, particles::C_OP_OscillateVectorSimple, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_OscillateVectorSimple

			class C_OP_SetUserEvent : public particles::CParticleFunctionOperator {
				MEMBER(fl_input, particles::C_OP_SetUserEvent, particleslib::CPerParticleFloatInput);
				MEMBER(fl_rising_edge, particles::C_OP_SetUserEvent, particleslib::CPerParticleFloatInput);
				MEMBER(n_rising_event_type, particles::C_OP_SetUserEvent, particles::EventTypeSelection_t);
				MEMBER(fl_falling_edge, particles::C_OP_SetUserEvent, particleslib::CPerParticleFloatInput);
				MEMBER(n_falling_event_type, particles::C_OP_SetUserEvent, particles::EventTypeSelection_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetUserEvent

			class C_OP_EndCapTimedDecay : public particles::CParticleFunctionOperator {
				MEMBER(fl_decay_time, particles::C_OP_EndCapTimedDecay, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_EndCapTimedDecay

			class C_OP_RemapScalar : public particles::CParticleFunctionOperator {
				MEMBER(n_field_input, particles::C_OP_RemapScalar, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_OP_RemapScalar, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_RemapScalar, float);
				MEMBER(fl_input_max, particles::C_OP_RemapScalar, float);
				MEMBER(fl_output_min, particles::C_OP_RemapScalar, float);
				MEMBER(fl_output_max, particles::C_OP_RemapScalar, float);
				MEMBER(b_old_code, particles::C_OP_RemapScalar, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapScalar

			class C_OP_RemapVelocityToVector : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_RemapVelocityToVector, particles::ParticleAttributeIndex_t);
				MEMBER(fl_scale, particles::C_OP_RemapVelocityToVector, float);
				MEMBER(b_normalize, particles::C_OP_RemapVelocityToVector, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapVelocityToVector

			class C_OP_FadeInSimple : public particles::CParticleFunctionOperator {
				MEMBER(fl_fade_in_time, particles::C_OP_FadeInSimple, float);
				MEMBER(n_field_output, particles::C_OP_FadeInSimple, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_FadeInSimple

			class C_OP_SetToCP : public particles::CParticleFunctionOperator {
				MEMBER(n_control_point_number, particles::C_OP_SetToCP, int32_t);
				MEMBER(vec_offset, particles::C_OP_SetToCP, Vector);
				MEMBER(b_offset_local, particles::C_OP_SetToCP, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetToCP

			class C_OP_DistanceBetweenTransforms : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_DistanceBetweenTransforms, particles::ParticleAttributeIndex_t);
				MEMBER(transform_start, particles::C_OP_DistanceBetweenTransforms, particleslib::CParticleTransformInput);
				MEMBER(transform_end, particles::C_OP_DistanceBetweenTransforms, particleslib::CParticleTransformInput);
				MEMBER(fl_input_min, particles::C_OP_DistanceBetweenTransforms, particleslib::CPerParticleFloatInput);
				MEMBER(fl_input_max, particles::C_OP_DistanceBetweenTransforms, particleslib::CPerParticleFloatInput);
				MEMBER(fl_output_min, particles::C_OP_DistanceBetweenTransforms, particleslib::CPerParticleFloatInput);
				MEMBER(fl_output_max, particles::C_OP_DistanceBetweenTransforms, particleslib::CPerParticleFloatInput);
				MEMBER(fl_max_trace_length, particles::C_OP_DistanceBetweenTransforms, float);
				MEMBER(fl_losscale, particles::C_OP_DistanceBetweenTransforms, float);
				MEMBER_ARR(collision_group_name, particles::C_OP_DistanceBetweenTransforms, 128, char);
				MEMBER(n_trace_set, particles::C_OP_DistanceBetweenTransforms, particles::ParticleTraceSet_t);
				MEMBER(b_los, particles::C_OP_DistanceBetweenTransforms, bool);
				MEMBER(n_set_method, particles::C_OP_DistanceBetweenTransforms, particles::ParticleSetMethod_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_DistanceBetweenTransforms

			class C_OP_NormalizeVector : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_NormalizeVector, particles::ParticleAttributeIndex_t);
				MEMBER(fl_scale, particles::C_OP_NormalizeVector, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_NormalizeVector

			class C_OP_RemapNamedModelElementOnceTimed : public particles::CParticleFunctionOperator {
				MEMBER(h_model, particles::C_OP_RemapNamedModelElementOnceTimed, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);
				MEMBER(in_names, particles::C_OP_RemapNamedModelElementOnceTimed, cutl_vector<CUtlString>);
				MEMBER(out_names, particles::C_OP_RemapNamedModelElementOnceTimed, cutl_vector<CUtlString>);
				MEMBER(fallback_names, particles::C_OP_RemapNamedModelElementOnceTimed, cutl_vector<CUtlString>);
				MEMBER(b_model_from_renderer, particles::C_OP_RemapNamedModelElementOnceTimed, bool);
				MEMBER(b_proportional, particles::C_OP_RemapNamedModelElementOnceTimed, bool);
				MEMBER(n_field_input, particles::C_OP_RemapNamedModelElementOnceTimed, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_OP_RemapNamedModelElementOnceTimed, particles::ParticleAttributeIndex_t);
				MEMBER(fl_remap_time, particles::C_OP_RemapNamedModelElementOnceTimed, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapNamedModelElementOnceTimed

			class C_OP_RemapNamedModelBodyPartOnceTimed : public particles::C_OP_RemapNamedModelElementOnceTimed {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapNamedModelBodyPartOnceTimed

			class C_OP_RemapNamedModelMeshGroupOnceTimed : public particles::C_OP_RemapNamedModelElementOnceTimed {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapNamedModelMeshGroupOnceTimed

			class C_OP_RemapNamedModelSequenceOnceTimed : public particles::C_OP_RemapNamedModelElementOnceTimed {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapNamedModelSequenceOnceTimed

			class C_OP_RemapDistanceToLineSegmentBase : public particles::CParticleFunctionOperator {
				MEMBER(n_cp0, particles::C_OP_RemapDistanceToLineSegmentBase, int32_t);
				MEMBER(n_cp1, particles::C_OP_RemapDistanceToLineSegmentBase, int32_t);
				MEMBER(fl_min_input_value, particles::C_OP_RemapDistanceToLineSegmentBase, float);
				MEMBER(fl_max_input_value, particles::C_OP_RemapDistanceToLineSegmentBase, float);
				MEMBER(b_infinite_line, particles::C_OP_RemapDistanceToLineSegmentBase, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapDistanceToLineSegmentBase

			class C_OP_RemapDistanceToLineSegmentToScalar : public particles::C_OP_RemapDistanceToLineSegmentBase {
				MEMBER(n_field_output, particles::C_OP_RemapDistanceToLineSegmentToScalar, particles::ParticleAttributeIndex_t);
				MEMBER(fl_min_output_value, particles::C_OP_RemapDistanceToLineSegmentToScalar, float);
				MEMBER(fl_max_output_value, particles::C_OP_RemapDistanceToLineSegmentToScalar, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapDistanceToLineSegmentToScalar

			class C_OP_RemapDistanceToLineSegmentToVector : public particles::C_OP_RemapDistanceToLineSegmentBase {
				MEMBER(n_field_output, particles::C_OP_RemapDistanceToLineSegmentToVector, particles::ParticleAttributeIndex_t);
				MEMBER(v_min_output_value, particles::C_OP_RemapDistanceToLineSegmentToVector, Vector);
				MEMBER(v_max_output_value, particles::C_OP_RemapDistanceToLineSegmentToVector, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapDistanceToLineSegmentToVector

			class C_OP_LerpEndCapScalar : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_LerpEndCapScalar, particles::ParticleAttributeIndex_t);
				MEMBER(fl_output, particles::C_OP_LerpEndCapScalar, float);
				MEMBER(fl_lerp_time, particles::C_OP_LerpEndCapScalar, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_LerpEndCapScalar

			class C_OP_DecayMaintainCount : public particles::CParticleFunctionOperator {
				MEMBER(n_particles_to_maintain, particles::C_OP_DecayMaintainCount, int32_t);
				MEMBER(fl_decay_delay, particles::C_OP_DecayMaintainCount, float);
				MEMBER(n_snapshot_control_point, particles::C_OP_DecayMaintainCount, int32_t);
				MEMBER(b_lifespan_decay, particles::C_OP_DecayMaintainCount, bool);
				MEMBER(fl_scale, particles::C_OP_DecayMaintainCount, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_kill_newest, particles::C_OP_DecayMaintainCount, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_DecayMaintainCount

			class C_OP_OrientTo2dDirection : public particles::CParticleFunctionOperator {
				MEMBER(fl_rot_offset, particles::C_OP_OrientTo2dDirection, float);
				MEMBER(fl_spin_strength, particles::C_OP_OrientTo2dDirection, float);
				MEMBER(n_field_output, particles::C_OP_OrientTo2dDirection, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_OrientTo2dDirection

			class CSpinUpdateBase : public particles::CParticleFunctionOperator {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSpinUpdateBase

			class C_OP_SpinUpdate : public particles::CSpinUpdateBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SpinUpdate

			class C_OP_RemapDensityToVector : public particles::CParticleFunctionOperator {
				MEMBER(fl_radius_scale, particles::C_OP_RemapDensityToVector, float);
				MEMBER(n_field_output, particles::C_OP_RemapDensityToVector, particles::ParticleAttributeIndex_t);
				MEMBER(fl_density_min, particles::C_OP_RemapDensityToVector, float);
				MEMBER(fl_density_max, particles::C_OP_RemapDensityToVector, float);
				MEMBER(vec_output_min, particles::C_OP_RemapDensityToVector, Vector);
				MEMBER(vec_output_max, particles::C_OP_RemapDensityToVector, Vector);
				MEMBER(b_use_parent_density, particles::C_OP_RemapDensityToVector, bool);
				MEMBER(n_voxel_grid_resolution, particles::C_OP_RemapDensityToVector, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapDensityToVector

			class C_OP_RemapParticleCountOnScalarEndCap : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_RemapParticleCountOnScalarEndCap, particles::ParticleAttributeIndex_t);
				MEMBER(n_input_min, particles::C_OP_RemapParticleCountOnScalarEndCap, int32_t);
				MEMBER(n_input_max, particles::C_OP_RemapParticleCountOnScalarEndCap, int32_t);
				MEMBER(fl_output_min, particles::C_OP_RemapParticleCountOnScalarEndCap, float);
				MEMBER(fl_output_max, particles::C_OP_RemapParticleCountOnScalarEndCap, float);
				MEMBER(b_backwards, particles::C_OP_RemapParticleCountOnScalarEndCap, bool);
				MEMBER(n_set_method, particles::C_OP_RemapParticleCountOnScalarEndCap, particles::ParticleSetMethod_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapParticleCountOnScalarEndCap

			class C_OP_PlaneCull : public particles::CParticleFunctionOperator {
				MEMBER(n_plane_control_point, particles::C_OP_PlaneCull, int32_t);
				MEMBER(vec_plane_direction, particles::C_OP_PlaneCull, Vector);
				MEMBER(b_local_space, particles::C_OP_PlaneCull, bool);
				MEMBER(fl_plane_offset, particles::C_OP_PlaneCull, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_PlaneCull

			class C_OP_RemapSDFDistanceToScalarAttribute : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_RemapSDFDistanceToScalarAttribute, particles::ParticleAttributeIndex_t);
				MEMBER(n_vector_field_input, particles::C_OP_RemapSDFDistanceToScalarAttribute, particles::ParticleAttributeIndex_t);
				MEMBER(fl_min_distance, particles::C_OP_RemapSDFDistanceToScalarAttribute, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_max_distance, particles::C_OP_RemapSDFDistanceToScalarAttribute, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_value_below_min, particles::C_OP_RemapSDFDistanceToScalarAttribute, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_value_at_min, particles::C_OP_RemapSDFDistanceToScalarAttribute, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_value_at_max, particles::C_OP_RemapSDFDistanceToScalarAttribute, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_value_above_max, particles::C_OP_RemapSDFDistanceToScalarAttribute, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapSDFDistanceToScalarAttribute

			class C_OP_RemapScalarOnceTimed : public particles::CParticleFunctionOperator {
				MEMBER(b_proportional, particles::C_OP_RemapScalarOnceTimed, bool);
				MEMBER(n_field_input, particles::C_OP_RemapScalarOnceTimed, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_OP_RemapScalarOnceTimed, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_RemapScalarOnceTimed, float);
				MEMBER(fl_input_max, particles::C_OP_RemapScalarOnceTimed, float);
				MEMBER(fl_output_min, particles::C_OP_RemapScalarOnceTimed, float);
				MEMBER(fl_output_max, particles::C_OP_RemapScalarOnceTimed, float);
				MEMBER(fl_remap_time, particles::C_OP_RemapScalarOnceTimed, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapScalarOnceTimed

			class C_OP_OscillateScalarSimple : public particles::CParticleFunctionOperator {
				MEMBER(rate, particles::C_OP_OscillateScalarSimple, float);
				MEMBER(frequency, particles::C_OP_OscillateScalarSimple, float);
				MEMBER(n_field, particles::C_OP_OscillateScalarSimple, particles::ParticleAttributeIndex_t);
				MEMBER(fl_osc_mult, particles::C_OP_OscillateScalarSimple, float);
				MEMBER(fl_osc_add, particles::C_OP_OscillateScalarSimple, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_OscillateScalarSimple

			class C_OP_PinParticleToCP : public particles::CParticleFunctionOperator {
				MEMBER(n_control_point_number, particles::C_OP_PinParticleToCP, int32_t);
				MEMBER(vec_offset, particles::C_OP_PinParticleToCP, particleslib::CParticleCollectionVecInput);
				MEMBER(b_offset_local, particles::C_OP_PinParticleToCP, bool);
				MEMBER(n_particle_selection, particles::C_OP_PinParticleToCP, particles::ParticleSelection_t);
				MEMBER(n_particle_number, particles::C_OP_PinParticleToCP, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_pin_break_type, particles::C_OP_PinParticleToCP, particles::ParticlePinDistance_t);
				MEMBER(fl_break_distance, particles::C_OP_PinParticleToCP, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_break_speed, particles::C_OP_PinParticleToCP, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_age, particles::C_OP_PinParticleToCP, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_break_control_point_number, particles::C_OP_PinParticleToCP, int32_t);
				MEMBER(n_break_control_point_number2, particles::C_OP_PinParticleToCP, int32_t);
				MEMBER(fl_break_value, particles::C_OP_PinParticleToCP, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_interpolation, particles::C_OP_PinParticleToCP, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_PinParticleToCP

			class C_OP_PointVectorAtNextParticle : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_PointVectorAtNextParticle, particles::ParticleAttributeIndex_t);
				MEMBER(fl_interpolation, particles::C_OP_PointVectorAtNextParticle, particleslib::CPerParticleFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_PointVectorAtNextParticle

			class C_OP_RemapCPVelocityToVector : public particles::CParticleFunctionOperator {
				MEMBER(n_control_point, particles::C_OP_RemapCPVelocityToVector, int32_t);
				MEMBER(n_field_output, particles::C_OP_RemapCPVelocityToVector, particles::ParticleAttributeIndex_t);
				MEMBER(fl_scale, particles::C_OP_RemapCPVelocityToVector, float);
				MEMBER(b_normalize, particles::C_OP_RemapCPVelocityToVector, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapCPVelocityToVector

			class C_OP_ModelDampenMovement : public particles::CParticleFunctionOperator {
				MEMBER(n_control_point_number, particles::C_OP_ModelDampenMovement, int32_t);
				MEMBER(b_bound_box, particles::C_OP_ModelDampenMovement, bool);
				MEMBER(b_outside, particles::C_OP_ModelDampenMovement, bool);
				MEMBER(b_use_bones, particles::C_OP_ModelDampenMovement, bool);
				MEMBER_ARR(hitbox_set_name, particles::C_OP_ModelDampenMovement, 128, char);
				MEMBER(vec_pos_offset, particles::C_OP_ModelDampenMovement, particleslib::CPerParticleVecInput);
				MEMBER(f_drag, particles::C_OP_ModelDampenMovement, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ModelDampenMovement

			class C_OP_OscillateScalar : public particles::CParticleFunctionOperator {
				MEMBER(rate_min, particles::C_OP_OscillateScalar, float);
				MEMBER(rate_max, particles::C_OP_OscillateScalar, float);
				MEMBER(frequency_min, particles::C_OP_OscillateScalar, float);
				MEMBER(frequency_max, particles::C_OP_OscillateScalar, float);
				MEMBER(n_field, particles::C_OP_OscillateScalar, particles::ParticleAttributeIndex_t);
				MEMBER(b_proportional, particles::C_OP_OscillateScalar, bool);
				MEMBER(b_proportional_op, particles::C_OP_OscillateScalar, bool);
				MEMBER(fl_start_time_min, particles::C_OP_OscillateScalar, float);
				MEMBER(fl_start_time_max, particles::C_OP_OscillateScalar, float);
				MEMBER(fl_end_time_min, particles::C_OP_OscillateScalar, float);
				MEMBER(fl_end_time_max, particles::C_OP_OscillateScalar, float);
				MEMBER(fl_osc_mult, particles::C_OP_OscillateScalar, float);
				MEMBER(fl_osc_add, particles::C_OP_OscillateScalar, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_OscillateScalar

			class C_OP_SetControlPointsToParticle : public particles::CParticleFunctionOperator {
				MEMBER(n_child_group_id, particles::C_OP_SetControlPointsToParticle, int32_t);
				MEMBER(n_first_control_point, particles::C_OP_SetControlPointsToParticle, int32_t);
				MEMBER(n_num_control_points, particles::C_OP_SetControlPointsToParticle, int32_t);
				MEMBER(n_first_source_point, particles::C_OP_SetControlPointsToParticle, int32_t);
				MEMBER(b_set_orientation, particles::C_OP_SetControlPointsToParticle, bool);
				MEMBER(n_orientation_mode, particles::C_OP_SetControlPointsToParticle, particles::ParticleOrientationSetMode_t);
				MEMBER(n_set_parent, particles::C_OP_SetControlPointsToParticle, particles::ParticleParentSetMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointsToParticle

			class C_OP_EndCapDecay : public particles::CParticleFunctionOperator {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_EndCapDecay

			class C_OP_RemapTransformVisibilityToScalar : public particles::CParticleFunctionOperator {
				MEMBER(n_set_method, particles::C_OP_RemapTransformVisibilityToScalar, particles::ParticleSetMethod_t);
				MEMBER(transform_input, particles::C_OP_RemapTransformVisibilityToScalar, particleslib::CParticleTransformInput);
				MEMBER(n_field_output, particles::C_OP_RemapTransformVisibilityToScalar, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_RemapTransformVisibilityToScalar, float);
				MEMBER(fl_input_max, particles::C_OP_RemapTransformVisibilityToScalar, float);
				MEMBER(fl_output_min, particles::C_OP_RemapTransformVisibilityToScalar, float);
				MEMBER(fl_output_max, particles::C_OP_RemapTransformVisibilityToScalar, float);
				MEMBER(fl_radius, particles::C_OP_RemapTransformVisibilityToScalar, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapTransformVisibilityToScalar

			class C_OP_ChladniWave : public particles::CParticleFunctionOperator {
				MEMBER(n_field_output, particles::C_OP_ChladniWave, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_ChladniWave, particleslib::CPerParticleFloatInput);
				MEMBER(fl_input_max, particles::C_OP_ChladniWave, particleslib::CPerParticleFloatInput);
				MEMBER(fl_output_min, particles::C_OP_ChladniWave, particleslib::CPerParticleFloatInput);
				MEMBER(fl_output_max, particles::C_OP_ChladniWave, particleslib::CPerParticleFloatInput);
				MEMBER(vec_wave_length, particles::C_OP_ChladniWave, particleslib::CPerParticleVecInput);
				MEMBER(vec_harmonics, particles::C_OP_ChladniWave, particleslib::CPerParticleVecInput);
				MEMBER(n_set_method, particles::C_OP_ChladniWave, particles::ParticleSetMethod_t);
				MEMBER(n_local_space_control_point, particles::C_OP_ChladniWave, int32_t);
				MEMBER(b3_d, particles::C_OP_ChladniWave, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ChladniWave

			class C_OP_FadeOutSimple : public particles::CParticleFunctionOperator {
				MEMBER(fl_fade_out_time, particles::C_OP_FadeOutSimple, float);
				MEMBER(n_field_output, particles::C_OP_FadeOutSimple, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_FadeOutSimple

			class C_OP_RemapVisibilityScalar : public particles::CParticleFunctionOperator {
				MEMBER(n_field_input, particles::C_OP_RemapVisibilityScalar, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output, particles::C_OP_RemapVisibilityScalar, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_RemapVisibilityScalar, float);
				MEMBER(fl_input_max, particles::C_OP_RemapVisibilityScalar, float);
				MEMBER(fl_output_min, particles::C_OP_RemapVisibilityScalar, float);
				MEMBER(fl_output_max, particles::C_OP_RemapVisibilityScalar, float);
				MEMBER(fl_radius_scale, particles::C_OP_RemapVisibilityScalar, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapVisibilityScalar

			class CParticleFunctionPreEmission : public particles::CParticleFunctionOperator {
				MEMBER(b_run_once, particles::CParticleFunctionPreEmission, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleFunctionPreEmission

			class C_OP_ForceControlPointStub : public particles::CParticleFunctionPreEmission {
				MEMBER(control_point, particles::C_OP_ForceControlPointStub, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ForceControlPointStub

			class C_OP_SetControlPointOrientationToCPVelocity : public particles::CParticleFunctionPreEmission {
				MEMBER(n_cpinput, particles::C_OP_SetControlPointOrientationToCPVelocity, int32_t);
				MEMBER(n_cpoutput, particles::C_OP_SetControlPointOrientationToCPVelocity, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointOrientationToCPVelocity

			class C_OP_SelectivelyEnableChildren : public particles::CParticleFunctionPreEmission {
				MEMBER(n_child_group_id, particles::C_OP_SelectivelyEnableChildren, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_first_child, particles::C_OP_SelectivelyEnableChildren, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_num_children_to_enable, particles::C_OP_SelectivelyEnableChildren, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_play_endcap_on_stop, particles::C_OP_SelectivelyEnableChildren, bool);
				MEMBER(b_destroy_immediately, particles::C_OP_SelectivelyEnableChildren, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SelectivelyEnableChildren

			class C_OP_HSVShiftToCP : public particles::CParticleFunctionPreEmission {
				MEMBER(n_color_cp, particles::C_OP_HSVShiftToCP, int32_t);
				MEMBER(n_color_gem_enable_cp, particles::C_OP_HSVShiftToCP, int32_t);
				MEMBER(n_output_cp, particles::C_OP_HSVShiftToCP, int32_t);
				MEMBER(default_hsvcolor, particles::C_OP_HSVShiftToCP, Color);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_HSVShiftToCP

			class C_OP_RemapBoundingVolumetoCP : public particles::CParticleFunctionPreEmission {
				MEMBER(n_out_control_point_number, particles::C_OP_RemapBoundingVolumetoCP, int32_t);
				MEMBER(fl_input_min, particles::C_OP_RemapBoundingVolumetoCP, float);
				MEMBER(fl_input_max, particles::C_OP_RemapBoundingVolumetoCP, float);
				MEMBER(fl_output_min, particles::C_OP_RemapBoundingVolumetoCP, float);
				MEMBER(fl_output_max, particles::C_OP_RemapBoundingVolumetoCP, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapBoundingVolumetoCP

			class C_OP_SetSimulationRate : public particles::CParticleFunctionPreEmission {
				MEMBER(fl_simulation_scale, particles::C_OP_SetSimulationRate, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetSimulationRate

			class C_OP_SetControlPointRotation : public particles::CParticleFunctionPreEmission {
				MEMBER(vec_rot_axis, particles::C_OP_SetControlPointRotation, particleslib::CParticleCollectionVecInput);
				MEMBER(fl_rot_rate, particles::C_OP_SetControlPointRotation, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_cp, particles::C_OP_SetControlPointRotation, int32_t);
				MEMBER(n_local_cp, particles::C_OP_SetControlPointRotation, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointRotation

			class C_OP_RemapCPtoCP : public particles::CParticleFunctionPreEmission {
				MEMBER(n_input_control_point, particles::C_OP_RemapCPtoCP, int32_t);
				MEMBER(n_output_control_point, particles::C_OP_RemapCPtoCP, int32_t);
				MEMBER(n_input_field, particles::C_OP_RemapCPtoCP, int32_t);
				MEMBER(n_output_field, particles::C_OP_RemapCPtoCP, int32_t);
				MEMBER(fl_input_min, particles::C_OP_RemapCPtoCP, float);
				MEMBER(fl_input_max, particles::C_OP_RemapCPtoCP, float);
				MEMBER(fl_output_min, particles::C_OP_RemapCPtoCP, float);
				MEMBER(fl_output_max, particles::C_OP_RemapCPtoCP, float);
				MEMBER(b_derivative, particles::C_OP_RemapCPtoCP, bool);
				MEMBER(fl_interp_rate, particles::C_OP_RemapCPtoCP, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapCPtoCP

			class C_OP_SetControlPointToCenter : public particles::CParticleFunctionPreEmission {
				MEMBER(n_cp1, particles::C_OP_SetControlPointToCenter, int32_t);
				MEMBER(vec_cp1_pos, particles::C_OP_SetControlPointToCenter, Vector);
				MEMBER(b_use_avg_particle_pos, particles::C_OP_SetControlPointToCenter, bool);
				MEMBER(n_set_parent, particles::C_OP_SetControlPointToCenter, particles::ParticleParentSetMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointToCenter

			class C_OP_SetVariable : public particles::CParticleFunctionPreEmission {
				MEMBER(variable_reference, particles::C_OP_SetVariable, particleslib::CParticleVariableRef);
				MEMBER(transform_input, particles::C_OP_SetVariable, particleslib::CParticleTransformInput);
				MEMBER(position_offset, particles::C_OP_SetVariable, Vector);
				MEMBER(rotation_offset, particles::C_OP_SetVariable, QAngle);
				MEMBER(vec_input, particles::C_OP_SetVariable, particleslib::CParticleCollectionVecInput);
				MEMBER(float_input, particles::C_OP_SetVariable, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetVariable

			class C_OP_StopAfterCPDuration : public particles::CParticleFunctionPreEmission {
				MEMBER(fl_duration, particles::C_OP_StopAfterCPDuration, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_destroy_immediately, particles::C_OP_StopAfterCPDuration, bool);
				MEMBER(b_play_end_cap, particles::C_OP_StopAfterCPDuration, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_StopAfterCPDuration

			class C_OP_SetControlPointToWaterSurface : public particles::CParticleFunctionPreEmission {
				MEMBER(n_source_cp, particles::C_OP_SetControlPointToWaterSurface, int32_t);
				MEMBER(n_dest_cp, particles::C_OP_SetControlPointToWaterSurface, int32_t);
				MEMBER(n_flow_cp, particles::C_OP_SetControlPointToWaterSurface, int32_t);
				MEMBER(n_active_cp, particles::C_OP_SetControlPointToWaterSurface, int32_t);
				MEMBER(n_active_cpfield, particles::C_OP_SetControlPointToWaterSurface, int32_t);
				MEMBER(fl_retest_rate, particles::C_OP_SetControlPointToWaterSurface, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_adaptive_threshold, particles::C_OP_SetControlPointToWaterSurface, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointToWaterSurface

			class C_OP_SetControlPointFieldFromVectorExpression : public particles::CParticleFunctionPreEmission {
				MEMBER(n_expression, particles::C_OP_SetControlPointFieldFromVectorExpression, particles::VectorFloatExpressionType_t);
				MEMBER(vec_input1, particles::C_OP_SetControlPointFieldFromVectorExpression, particleslib::CParticleCollectionVecInput);
				MEMBER(vec_input2, particles::C_OP_SetControlPointFieldFromVectorExpression, particleslib::CParticleCollectionVecInput);
				MEMBER(fl_output_remap, particles::C_OP_SetControlPointFieldFromVectorExpression, particleslib::CParticleRemapFloatInput);
				MEMBER(n_output_cp, particles::C_OP_SetControlPointFieldFromVectorExpression, int32_t);
				MEMBER(n_out_vector_field, particles::C_OP_SetControlPointFieldFromVectorExpression, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointFieldFromVectorExpression

			class C_OP_SetControlPointToHMD : public particles::CParticleFunctionPreEmission {
				MEMBER(n_cp1, particles::C_OP_SetControlPointToHMD, int32_t);
				MEMBER(vec_cp1_pos, particles::C_OP_SetControlPointToHMD, Vector);
				MEMBER(b_orient_to_hmd, particles::C_OP_SetControlPointToHMD, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointToHMD

			class C_OP_SetControlPointFieldToWater : public particles::CParticleFunctionPreEmission {
				MEMBER(n_source_cp, particles::C_OP_SetControlPointFieldToWater, int32_t);
				MEMBER(n_dest_cp, particles::C_OP_SetControlPointFieldToWater, int32_t);
				MEMBER(n_cpfield, particles::C_OP_SetControlPointFieldToWater, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointFieldToWater

			class C_OP_SetControlPointPositionToRandomActiveCP : public particles::CParticleFunctionPreEmission {
				MEMBER(n_cp1, particles::C_OP_SetControlPointPositionToRandomActiveCP, int32_t);
				MEMBER(n_head_location_min, particles::C_OP_SetControlPointPositionToRandomActiveCP, int32_t);
				MEMBER(n_head_location_max, particles::C_OP_SetControlPointPositionToRandomActiveCP, int32_t);
				MEMBER(fl_reset_rate, particles::C_OP_SetControlPointPositionToRandomActiveCP, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointPositionToRandomActiveCP

			class C_OP_SetCPOrientationToPointAtCP : public particles::CParticleFunctionPreEmission {
				MEMBER(n_input_cp, particles::C_OP_SetCPOrientationToPointAtCP, int32_t);
				MEMBER(n_output_cp, particles::C_OP_SetCPOrientationToPointAtCP, int32_t);
				MEMBER(fl_interpolation, particles::C_OP_SetCPOrientationToPointAtCP, particleslib::CParticleCollectionFloatInput);
				MEMBER(b2_dorientation, particles::C_OP_SetCPOrientationToPointAtCP, bool);
				MEMBER(b_avoid_singularity, particles::C_OP_SetCPOrientationToPointAtCP, bool);
				MEMBER(b_point_away, particles::C_OP_SetCPOrientationToPointAtCP, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetCPOrientationToPointAtCP

			class C_OP_RampCPLinearRandom : public particles::CParticleFunctionPreEmission {
				MEMBER(n_out_control_point_number, particles::C_OP_RampCPLinearRandom, int32_t);
				MEMBER(vec_rate_min, particles::C_OP_RampCPLinearRandom, Vector);
				MEMBER(vec_rate_max, particles::C_OP_RampCPLinearRandom, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RampCPLinearRandom

			class C_OP_DistanceBetweenCPsToCP : public particles::CParticleFunctionPreEmission {
				MEMBER(n_start_cp, particles::C_OP_DistanceBetweenCPsToCP, int32_t);
				MEMBER(n_end_cp, particles::C_OP_DistanceBetweenCPsToCP, int32_t);
				MEMBER(n_output_cp, particles::C_OP_DistanceBetweenCPsToCP, int32_t);
				MEMBER(n_output_cpfield, particles::C_OP_DistanceBetweenCPsToCP, int32_t);
				MEMBER(b_set_once, particles::C_OP_DistanceBetweenCPsToCP, bool);
				MEMBER(fl_input_min, particles::C_OP_DistanceBetweenCPsToCP, float);
				MEMBER(fl_input_max, particles::C_OP_DistanceBetweenCPsToCP, float);
				MEMBER(fl_output_min, particles::C_OP_DistanceBetweenCPsToCP, float);
				MEMBER(fl_output_max, particles::C_OP_DistanceBetweenCPsToCP, float);
				MEMBER(fl_max_trace_length, particles::C_OP_DistanceBetweenCPsToCP, float);
				MEMBER(fl_losscale, particles::C_OP_DistanceBetweenCPsToCP, float);
				MEMBER(b_los, particles::C_OP_DistanceBetweenCPsToCP, bool);
				MEMBER_ARR(collision_group_name, particles::C_OP_DistanceBetweenCPsToCP, 128, char);
				MEMBER(n_trace_set, particles::C_OP_DistanceBetweenCPsToCP, particles::ParticleTraceSet_t);
				MEMBER(n_set_parent, particles::C_OP_DistanceBetweenCPsToCP, particles::ParticleParentSetMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_DistanceBetweenCPsToCP

			class C_OP_ChooseRandomChildrenInGroup : public particles::CParticleFunctionPreEmission {
				MEMBER(n_child_group_id, particles::C_OP_ChooseRandomChildrenInGroup, int32_t);
				MEMBER(fl_number_of_children, particles::C_OP_ChooseRandomChildrenInGroup, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ChooseRandomChildrenInGroup

			class C_OP_SetControlPointToCPVelocity : public particles::CParticleFunctionPreEmission {
				MEMBER(n_cpinput, particles::C_OP_SetControlPointToCPVelocity, int32_t);
				MEMBER(n_cpoutput_vel, particles::C_OP_SetControlPointToCPVelocity, int32_t);
				MEMBER(b_normalize, particles::C_OP_SetControlPointToCPVelocity, bool);
				MEMBER(n_cpoutput_mag, particles::C_OP_SetControlPointToCPVelocity, int32_t);
				MEMBER(n_cpfield, particles::C_OP_SetControlPointToCPVelocity, int32_t);
				MEMBER(vec_comparison_velocity, particles::C_OP_SetControlPointToCPVelocity, particleslib::CParticleCollectionVecInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointToCPVelocity

			class C_OP_RemapModelVolumetoCP : public particles::CParticleFunctionPreEmission {
				MEMBER(n_bbox_type, particles::C_OP_RemapModelVolumetoCP, particles::BBoxVolumeType_t);
				MEMBER(n_in_control_point_number, particles::C_OP_RemapModelVolumetoCP, int32_t);
				MEMBER(n_out_control_point_number, particles::C_OP_RemapModelVolumetoCP, int32_t);
				MEMBER(n_out_control_point_max_number, particles::C_OP_RemapModelVolumetoCP, int32_t);
				MEMBER(n_field, particles::C_OP_RemapModelVolumetoCP, int32_t);
				MEMBER(fl_input_min, particles::C_OP_RemapModelVolumetoCP, float);
				MEMBER(fl_input_max, particles::C_OP_RemapModelVolumetoCP, float);
				MEMBER(fl_output_min, particles::C_OP_RemapModelVolumetoCP, float);
				MEMBER(fl_output_max, particles::C_OP_RemapModelVolumetoCP, float);
				MEMBER(b_bbox_only, particles::C_OP_RemapModelVolumetoCP, bool);
				MEMBER(b_cube_root, particles::C_OP_RemapModelVolumetoCP, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapModelVolumetoCP

			class C_OP_SetRandomControlPointPosition : public particles::CParticleFunctionPreEmission {
				MEMBER(b_use_world_location, particles::C_OP_SetRandomControlPointPosition, bool);
				MEMBER(b_orient, particles::C_OP_SetRandomControlPointPosition, bool);
				MEMBER(n_cp1, particles::C_OP_SetRandomControlPointPosition, int32_t);
				MEMBER(n_head_location, particles::C_OP_SetRandomControlPointPosition, int32_t);
				MEMBER(fl_re_random_rate, particles::C_OP_SetRandomControlPointPosition, particleslib::CParticleCollectionFloatInput);
				MEMBER(vec_cpmin_pos, particles::C_OP_SetRandomControlPointPosition, Vector);
				MEMBER(vec_cpmax_pos, particles::C_OP_SetRandomControlPointPosition, Vector);
				MEMBER(fl_interpolation, particles::C_OP_SetRandomControlPointPosition, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetRandomControlPointPosition

			class C_OP_EnableChildrenFromParentParticleCount : public particles::CParticleFunctionPreEmission {
				MEMBER(n_child_group_id, particles::C_OP_EnableChildrenFromParentParticleCount, int32_t);
				MEMBER(n_first_child, particles::C_OP_EnableChildrenFromParentParticleCount, int32_t);
				MEMBER(n_num_children_to_enable, particles::C_OP_EnableChildrenFromParentParticleCount, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_disable_children, particles::C_OP_EnableChildrenFromParentParticleCount, bool);
				MEMBER(b_play_endcap_on_stop, particles::C_OP_EnableChildrenFromParentParticleCount, bool);
				MEMBER(b_destroy_immediately, particles::C_OP_EnableChildrenFromParentParticleCount, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_EnableChildrenFromParentParticleCount

			class C_OP_SetControlPointToPlayer : public particles::CParticleFunctionPreEmission {
				MEMBER(n_cp1, particles::C_OP_SetControlPointToPlayer, int32_t);
				MEMBER(vec_cp1_pos, particles::C_OP_SetControlPointToPlayer, Vector);
				MEMBER(b_orient_to_eyes, particles::C_OP_SetControlPointToPlayer, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointToPlayer

			class C_OP_SetControlPointToImpactPoint : public particles::CParticleFunctionPreEmission {
				MEMBER(n_cpout, particles::C_OP_SetControlPointToImpactPoint, int32_t);
				MEMBER(n_cpin, particles::C_OP_SetControlPointToImpactPoint, int32_t);
				MEMBER(fl_update_rate, particles::C_OP_SetControlPointToImpactPoint, float);
				MEMBER(fl_trace_length, particles::C_OP_SetControlPointToImpactPoint, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_start_offset, particles::C_OP_SetControlPointToImpactPoint, float);
				MEMBER(fl_offset, particles::C_OP_SetControlPointToImpactPoint, float);
				MEMBER(vec_trace_dir, particles::C_OP_SetControlPointToImpactPoint, Vector);
				MEMBER_ARR(collision_group_name, particles::C_OP_SetControlPointToImpactPoint, 128, char);
				MEMBER(n_trace_set, particles::C_OP_SetControlPointToImpactPoint, particles::ParticleTraceSet_t);
				MEMBER(b_set_to_endpoint, particles::C_OP_SetControlPointToImpactPoint, bool);
				MEMBER(b_trace_to_closest_surface, particles::C_OP_SetControlPointToImpactPoint, bool);
				MEMBER(b_include_water, particles::C_OP_SetControlPointToImpactPoint, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointToImpactPoint

			class C_OP_SetControlPointOrientation : public particles::CParticleFunctionPreEmission {
				MEMBER(b_use_world_location, particles::C_OP_SetControlPointOrientation, bool);
				MEMBER(b_randomize, particles::C_OP_SetControlPointOrientation, bool);
				MEMBER(b_set_once, particles::C_OP_SetControlPointOrientation, bool);
				MEMBER(n_cp, particles::C_OP_SetControlPointOrientation, int32_t);
				MEMBER(n_head_location, particles::C_OP_SetControlPointOrientation, int32_t);
				MEMBER(vec_rotation, particles::C_OP_SetControlPointOrientation, QAngle);
				MEMBER(vec_rotation_b, particles::C_OP_SetControlPointOrientation, QAngle);
				MEMBER(fl_interpolation, particles::C_OP_SetControlPointOrientation, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointOrientation

			class C_OP_ControlPointToRadialScreenSpace : public particles::CParticleFunctionPreEmission {
				MEMBER(n_cpin, particles::C_OP_ControlPointToRadialScreenSpace, int32_t);
				MEMBER(vec_cp1_pos, particles::C_OP_ControlPointToRadialScreenSpace, Vector);
				MEMBER(n_cpout, particles::C_OP_ControlPointToRadialScreenSpace, int32_t);
				MEMBER(n_cpout_field, particles::C_OP_ControlPointToRadialScreenSpace, int32_t);
				MEMBER(n_cpsspos_out, particles::C_OP_ControlPointToRadialScreenSpace, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ControlPointToRadialScreenSpace

			class C_OP_SetSingleControlPointPosition : public particles::CParticleFunctionPreEmission {
				MEMBER(b_set_once, particles::C_OP_SetSingleControlPointPosition, bool);
				MEMBER(n_cp1, particles::C_OP_SetSingleControlPointPosition, int32_t);
				MEMBER(vec_cp1_pos, particles::C_OP_SetSingleControlPointPosition, particleslib::CParticleCollectionVecInput);
				MEMBER(transform_input, particles::C_OP_SetSingleControlPointPosition, particleslib::CParticleTransformInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetSingleControlPointPosition

			class C_OP_PlayEndCapWhenFinished : public particles::CParticleFunctionPreEmission {
				MEMBER(b_fire_on_emission_end, particles::C_OP_PlayEndCapWhenFinished, bool);
				MEMBER(b_include_children, particles::C_OP_PlayEndCapWhenFinished, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_PlayEndCapWhenFinished

			class C_OP_QuantizeCPComponent : public particles::CParticleFunctionPreEmission {
				MEMBER(fl_input_value, particles::C_OP_QuantizeCPComponent, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_cpoutput, particles::C_OP_QuantizeCPComponent, int32_t);
				MEMBER(n_out_vector_field, particles::C_OP_QuantizeCPComponent, int32_t);
				MEMBER(fl_quantize_value, particles::C_OP_QuantizeCPComponent, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_QuantizeCPComponent

			class C_OP_SetControlPointFieldToScalarExpression : public particles::CParticleFunctionPreEmission {
				MEMBER(n_expression, particles::C_OP_SetControlPointFieldToScalarExpression, particles::ScalarExpressionType_t);
				MEMBER(fl_input1, particles::C_OP_SetControlPointFieldToScalarExpression, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_input2, particles::C_OP_SetControlPointFieldToScalarExpression, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_output_remap, particles::C_OP_SetControlPointFieldToScalarExpression, particleslib::CParticleRemapFloatInput);
				MEMBER(n_output_cp, particles::C_OP_SetControlPointFieldToScalarExpression, int32_t);
				MEMBER(n_out_vector_field, particles::C_OP_SetControlPointFieldToScalarExpression, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointFieldToScalarExpression

			class C_OP_SetControlPointToVectorExpression : public particles::CParticleFunctionPreEmission {
				MEMBER(n_expression, particles::C_OP_SetControlPointToVectorExpression, particles::VectorExpressionType_t);
				MEMBER(n_output_cp, particles::C_OP_SetControlPointToVectorExpression, int32_t);
				MEMBER(v_input1, particles::C_OP_SetControlPointToVectorExpression, particleslib::CParticleCollectionVecInput);
				MEMBER(v_input2, particles::C_OP_SetControlPointToVectorExpression, particleslib::CParticleCollectionVecInput);
				MEMBER(b_normalized_output, particles::C_OP_SetControlPointToVectorExpression, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointToVectorExpression

			class C_OP_SetParentControlPointsToChildCP : public particles::CParticleFunctionPreEmission {
				MEMBER(n_child_group_id, particles::C_OP_SetParentControlPointsToChildCP, int32_t);
				MEMBER(n_child_control_point, particles::C_OP_SetParentControlPointsToChildCP, int32_t);
				MEMBER(n_num_control_points, particles::C_OP_SetParentControlPointsToChildCP, int32_t);
				MEMBER(n_first_source_point, particles::C_OP_SetParentControlPointsToChildCP, int32_t);
				MEMBER(b_set_orientation, particles::C_OP_SetParentControlPointsToChildCP, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetParentControlPointsToChildCP

			class C_OP_DriveCPFromGlobalSoundFloat : public particles::CParticleFunctionPreEmission {
				MEMBER(n_output_control_point, particles::C_OP_DriveCPFromGlobalSoundFloat, int32_t);
				MEMBER(n_output_field, particles::C_OP_DriveCPFromGlobalSoundFloat, int32_t);
				MEMBER(fl_input_min, particles::C_OP_DriveCPFromGlobalSoundFloat, float);
				MEMBER(fl_input_max, particles::C_OP_DriveCPFromGlobalSoundFloat, float);
				MEMBER(fl_output_min, particles::C_OP_DriveCPFromGlobalSoundFloat, float);
				MEMBER(fl_output_max, particles::C_OP_DriveCPFromGlobalSoundFloat, float);
				MEMBER(stack_name, particles::C_OP_DriveCPFromGlobalSoundFloat, CUtlString);
				MEMBER(operator_name, particles::C_OP_DriveCPFromGlobalSoundFloat, CUtlString);
				MEMBER(field_name, particles::C_OP_DriveCPFromGlobalSoundFloat, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_DriveCPFromGlobalSoundFloat

			class C_OP_SetControlPointToHand : public particles::CParticleFunctionPreEmission {
				MEMBER(n_cp1, particles::C_OP_SetControlPointToHand, int32_t);
				MEMBER(n_hand, particles::C_OP_SetControlPointToHand, int32_t);
				MEMBER(vec_cp1_pos, particles::C_OP_SetControlPointToHand, Vector);
				MEMBER(b_orient_to_hand, particles::C_OP_SetControlPointToHand, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointToHand

			class C_OP_SetControlPointFromObjectScale : public particles::CParticleFunctionPreEmission {
				MEMBER(n_cpinput, particles::C_OP_SetControlPointFromObjectScale, int32_t);
				MEMBER(n_cpoutput, particles::C_OP_SetControlPointFromObjectScale, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointFromObjectScale

			class C_OP_RepeatedTriggerChildGroup : public particles::CParticleFunctionPreEmission {
				MEMBER(n_child_group_id, particles::C_OP_RepeatedTriggerChildGroup, int32_t);
				MEMBER(fl_cluster_refire_time, particles::C_OP_RepeatedTriggerChildGroup, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_cluster_size, particles::C_OP_RepeatedTriggerChildGroup, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_cluster_cooldown, particles::C_OP_RepeatedTriggerChildGroup, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_limit_child_count, particles::C_OP_RepeatedTriggerChildGroup, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RepeatedTriggerChildGroup

			class C_OP_SetControlPointPositionToTimeOfDayValue : public particles::CParticleFunctionPreEmission {
				MEMBER(n_control_point_number, particles::C_OP_SetControlPointPositionToTimeOfDayValue, int32_t);
				MEMBER_ARR(psz_time_of_day_parameter, particles::C_OP_SetControlPointPositionToTimeOfDayValue, 128, char);
				MEMBER(vec_default_value, particles::C_OP_SetControlPointPositionToTimeOfDayValue, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointPositionToTimeOfDayValue

			class C_OP_RemapDotProductToCP : public particles::CParticleFunctionPreEmission {
				MEMBER(n_input_cp1, particles::C_OP_RemapDotProductToCP, int32_t);
				MEMBER(n_input_cp2, particles::C_OP_RemapDotProductToCP, int32_t);
				MEMBER(n_output_cp, particles::C_OP_RemapDotProductToCP, int32_t);
				MEMBER(n_out_vector_field, particles::C_OP_RemapDotProductToCP, int32_t);
				MEMBER(fl_input_min, particles::C_OP_RemapDotProductToCP, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_input_max, particles::C_OP_RemapDotProductToCP, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_output_min, particles::C_OP_RemapDotProductToCP, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_output_max, particles::C_OP_RemapDotProductToCP, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapDotProductToCP

			class C_OP_RemapAverageScalarValuetoCP : public particles::CParticleFunctionPreEmission {
				MEMBER(n_out_control_point_number, particles::C_OP_RemapAverageScalarValuetoCP, int32_t);
				MEMBER(n_out_vector_field, particles::C_OP_RemapAverageScalarValuetoCP, int32_t);
				MEMBER(n_field, particles::C_OP_RemapAverageScalarValuetoCP, particles::ParticleAttributeIndex_t);
				MEMBER(fl_input_min, particles::C_OP_RemapAverageScalarValuetoCP, float);
				MEMBER(fl_input_max, particles::C_OP_RemapAverageScalarValuetoCP, float);
				MEMBER(fl_output_min, particles::C_OP_RemapAverageScalarValuetoCP, float);
				MEMBER(fl_output_max, particles::C_OP_RemapAverageScalarValuetoCP, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapAverageScalarValuetoCP

			class C_OP_RemapExternalWindToCP : public particles::CParticleFunctionPreEmission {
				MEMBER(n_cp, particles::C_OP_RemapExternalWindToCP, int32_t);
				MEMBER(n_cpoutput, particles::C_OP_RemapExternalWindToCP, int32_t);
				MEMBER(vec_scale, particles::C_OP_RemapExternalWindToCP, particleslib::CParticleCollectionVecInput);
				MEMBER(b_set_magnitude, particles::C_OP_RemapExternalWindToCP, bool);
				MEMBER(n_out_vector_field, particles::C_OP_RemapExternalWindToCP, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapExternalWindToCP

			class C_OP_LightningSnapshotGenerator : public particles::CParticleFunctionPreEmission {
				MEMBER(n_cpsnapshot, particles::C_OP_LightningSnapshotGenerator, int32_t);
				MEMBER(n_cpstart_pnt, particles::C_OP_LightningSnapshotGenerator, int32_t);
				MEMBER(n_cpend_pnt, particles::C_OP_LightningSnapshotGenerator, int32_t);
				MEMBER(fl_segments, particles::C_OP_LightningSnapshotGenerator, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_offset, particles::C_OP_LightningSnapshotGenerator, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_offset_decay, particles::C_OP_LightningSnapshotGenerator, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_recalc_rate, particles::C_OP_LightningSnapshotGenerator, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_uvscale, particles::C_OP_LightningSnapshotGenerator, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_uvoffset, particles::C_OP_LightningSnapshotGenerator, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_split_rate, particles::C_OP_LightningSnapshotGenerator, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_branch_twist, particles::C_OP_LightningSnapshotGenerator, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_branch_behavior, particles::C_OP_LightningSnapshotGenerator, particles::ParticleLightnintBranchBehavior_t);
				MEMBER(fl_radius_start, particles::C_OP_LightningSnapshotGenerator, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_radius_end, particles::C_OP_LightningSnapshotGenerator, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_dedicated_pool, particles::C_OP_LightningSnapshotGenerator, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_LightningSnapshotGenerator

			class C_OP_SetControlPointPositions : public particles::CParticleFunctionPreEmission {
				MEMBER(b_use_world_location, particles::C_OP_SetControlPointPositions, bool);
				MEMBER(b_orient, particles::C_OP_SetControlPointPositions, bool);
				MEMBER(b_set_once, particles::C_OP_SetControlPointPositions, bool);
				MEMBER(n_cp1, particles::C_OP_SetControlPointPositions, int32_t);
				MEMBER(n_cp2, particles::C_OP_SetControlPointPositions, int32_t);
				MEMBER(n_cp3, particles::C_OP_SetControlPointPositions, int32_t);
				MEMBER(n_cp4, particles::C_OP_SetControlPointPositions, int32_t);
				MEMBER(vec_cp1_pos, particles::C_OP_SetControlPointPositions, Vector);
				MEMBER(vec_cp2_pos, particles::C_OP_SetControlPointPositions, Vector);
				MEMBER(vec_cp3_pos, particles::C_OP_SetControlPointPositions, Vector);
				MEMBER(vec_cp4_pos, particles::C_OP_SetControlPointPositions, Vector);
				MEMBER(n_head_location, particles::C_OP_SetControlPointPositions, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetControlPointPositions

			class C_OP_RemapSpeedtoCP : public particles::CParticleFunctionPreEmission {
				MEMBER(n_in_control_point_number, particles::C_OP_RemapSpeedtoCP, int32_t);
				MEMBER(n_out_control_point_number, particles::C_OP_RemapSpeedtoCP, int32_t);
				MEMBER(n_field, particles::C_OP_RemapSpeedtoCP, int32_t);
				MEMBER(fl_input_min, particles::C_OP_RemapSpeedtoCP, float);
				MEMBER(fl_input_max, particles::C_OP_RemapSpeedtoCP, float);
				MEMBER(fl_output_min, particles::C_OP_RemapSpeedtoCP, float);
				MEMBER(fl_output_max, particles::C_OP_RemapSpeedtoCP, float);
				MEMBER(b_use_delta_v, particles::C_OP_RemapSpeedtoCP, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapSpeedtoCP

			class C_OP_SetGravityToCP : public particles::CParticleFunctionPreEmission {
				MEMBER(n_cpinput, particles::C_OP_SetGravityToCP, int32_t);
				MEMBER(n_cpoutput, particles::C_OP_SetGravityToCP, int32_t);
				MEMBER(fl_scale, particles::C_OP_SetGravityToCP, particleslib::CParticleCollectionFloatInput);
				MEMBER(b_set_orientation, particles::C_OP_SetGravityToCP, bool);
				MEMBER(b_set_zdown, particles::C_OP_SetGravityToCP, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_SetGravityToCP

			class C_OP_RemapAverageHitboxSpeedtoCP : public particles::CParticleFunctionPreEmission {
				MEMBER(n_in_control_point_number, particles::C_OP_RemapAverageHitboxSpeedtoCP, int32_t);
				MEMBER(n_out_control_point_number, particles::C_OP_RemapAverageHitboxSpeedtoCP, int32_t);
				MEMBER(n_field, particles::C_OP_RemapAverageHitboxSpeedtoCP, int32_t);
				MEMBER(n_hitbox_data_type, particles::C_OP_RemapAverageHitboxSpeedtoCP, particles::ParticleHitboxDataSelection_t);
				MEMBER(fl_input_min, particles::C_OP_RemapAverageHitboxSpeedtoCP, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_input_max, particles::C_OP_RemapAverageHitboxSpeedtoCP, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_output_min, particles::C_OP_RemapAverageHitboxSpeedtoCP, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_output_max, particles::C_OP_RemapAverageHitboxSpeedtoCP, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_height_control_point_number, particles::C_OP_RemapAverageHitboxSpeedtoCP, int32_t);
				MEMBER(vec_comparison_velocity, particles::C_OP_RemapAverageHitboxSpeedtoCP, particleslib::CParticleCollectionVecInput);
				MEMBER_ARR(hitbox_set_name, particles::C_OP_RemapAverageHitboxSpeedtoCP, 128, char);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapAverageHitboxSpeedtoCP

			class C_OP_RemapSDFDistanceToVectorAttribute : public particles::CParticleFunctionOperator {
				MEMBER(n_vector_field_output, particles::C_OP_RemapSDFDistanceToVectorAttribute, particles::ParticleAttributeIndex_t);
				MEMBER(n_vector_field_input, particles::C_OP_RemapSDFDistanceToVectorAttribute, particles::ParticleAttributeIndex_t);
				MEMBER(fl_min_distance, particles::C_OP_RemapSDFDistanceToVectorAttribute, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_max_distance, particles::C_OP_RemapSDFDistanceToVectorAttribute, particleslib::CParticleCollectionFloatInput);
				MEMBER(v_value_below_min, particles::C_OP_RemapSDFDistanceToVectorAttribute, Vector);
				MEMBER(v_value_at_min, particles::C_OP_RemapSDFDistanceToVectorAttribute, Vector);
				MEMBER(v_value_at_max, particles::C_OP_RemapSDFDistanceToVectorAttribute, Vector);
				MEMBER(v_value_above_max, particles::C_OP_RemapSDFDistanceToVectorAttribute, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapSDFDistanceToVectorAttribute

			class C_OP_PositionLock : public particles::CParticleFunctionOperator {
				MEMBER(transform_input, particles::C_OP_PositionLock, particleslib::CParticleTransformInput);
				MEMBER(fl_start_time_min, particles::C_OP_PositionLock, float);
				MEMBER(fl_start_time_max, particles::C_OP_PositionLock, float);
				MEMBER(fl_start_time_exp, particles::C_OP_PositionLock, float);
				MEMBER(fl_end_time_min, particles::C_OP_PositionLock, float);
				MEMBER(fl_end_time_max, particles::C_OP_PositionLock, float);
				MEMBER(fl_end_time_exp, particles::C_OP_PositionLock, float);
				MEMBER(fl_range, particles::C_OP_PositionLock, float);
				MEMBER(fl_range_bias, particles::C_OP_PositionLock, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_jump_threshold, particles::C_OP_PositionLock, float);
				MEMBER(fl_prev_pos_scale, particles::C_OP_PositionLock, float);
				MEMBER(b_lock_rot, particles::C_OP_PositionLock, bool);
				MEMBER(vec_scale, particles::C_OP_PositionLock, particleslib::CParticleCollectionVecInput);
				MEMBER(n_field_output, particles::C_OP_PositionLock, particles::ParticleAttributeIndex_t);
				MEMBER(n_field_output_prev, particles::C_OP_PositionLock, particles::ParticleAttributeIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_PositionLock

			class C_OP_RemapTransformToVelocity : public particles::CParticleFunctionOperator {
				MEMBER(transform_input, particles::C_OP_RemapTransformToVelocity, particleslib::CParticleTransformInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapTransformToVelocity

			class C_OP_Decay : public particles::CParticleFunctionOperator {
				MEMBER(b_rope_decay, particles::C_OP_Decay, bool);
				MEMBER(b_force_preserve_particle_order, particles::C_OP_Decay, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_Decay

			class C_OP_DecayOffscreen : public particles::CParticleFunctionOperator {
				MEMBER(fl_offscreen_time, particles::C_OP_DecayOffscreen, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_DecayOffscreen

			class C_OP_TeleportBeam : public particles::CParticleFunctionOperator {
				MEMBER(n_cpposition, particles::C_OP_TeleportBeam, int32_t);
				MEMBER(n_cpvelocity, particles::C_OP_TeleportBeam, int32_t);
				MEMBER(n_cpmisc, particles::C_OP_TeleportBeam, int32_t);
				MEMBER(n_cpcolor, particles::C_OP_TeleportBeam, int32_t);
				MEMBER(n_cpinvalid_color, particles::C_OP_TeleportBeam, int32_t);
				MEMBER(n_cpextra_arc_data, particles::C_OP_TeleportBeam, int32_t);
				MEMBER(v_gravity, particles::C_OP_TeleportBeam, Vector);
				MEMBER(fl_arc_max_duration, particles::C_OP_TeleportBeam, float);
				MEMBER(fl_segment_break, particles::C_OP_TeleportBeam, float);
				MEMBER(fl_arc_speed, particles::C_OP_TeleportBeam, float);
				MEMBER(fl_alpha, particles::C_OP_TeleportBeam, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_TeleportBeam

			class C_OP_ColorInterpolate : public particles::CParticleFunctionOperator {
				MEMBER(color_fade, particles::C_OP_ColorInterpolate, Color);
				MEMBER(fl_fade_start_time, particles::C_OP_ColorInterpolate, float);
				MEMBER(fl_fade_end_time, particles::C_OP_ColorInterpolate, float);
				MEMBER(n_field_output, particles::C_OP_ColorInterpolate, particles::ParticleAttributeIndex_t);
				MEMBER(b_ease_in_out, particles::C_OP_ColorInterpolate, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ColorInterpolate

			class C_OP_RemapGravityToVector : public particles::CParticleFunctionOperator {
				MEMBER(v_input1, particles::C_OP_RemapGravityToVector, particleslib::CPerParticleVecInput);
				MEMBER(n_output_field, particles::C_OP_RemapGravityToVector, particles::ParticleAttributeIndex_t);
				MEMBER(n_set_method, particles::C_OP_RemapGravityToVector, particles::ParticleSetMethod_t);
				MEMBER(b_normalized_output, particles::C_OP_RemapGravityToVector, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_RemapGravityToVector

			class CParticleFunctionEmitter : public particles::CParticleFunction {
				MEMBER(n_emitter_index, particles::CParticleFunctionEmitter, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleFunctionEmitter

			class C_OP_NoiseEmitter : public particles::CParticleFunctionEmitter {
				MEMBER(fl_emission_duration, particles::C_OP_NoiseEmitter, float);
				MEMBER(fl_start_time, particles::C_OP_NoiseEmitter, float);
				MEMBER(fl_emission_scale, particles::C_OP_NoiseEmitter, float);
				MEMBER(n_scale_control_point, particles::C_OP_NoiseEmitter, int32_t);
				MEMBER(n_scale_control_point_field, particles::C_OP_NoiseEmitter, int32_t);
				MEMBER(n_world_noise_point, particles::C_OP_NoiseEmitter, int32_t);
				MEMBER(b_abs_val, particles::C_OP_NoiseEmitter, bool);
				MEMBER(b_abs_val_inv, particles::C_OP_NoiseEmitter, bool);
				MEMBER(fl_offset, particles::C_OP_NoiseEmitter, float);
				MEMBER(fl_output_min, particles::C_OP_NoiseEmitter, float);
				MEMBER(fl_output_max, particles::C_OP_NoiseEmitter, float);
				MEMBER(fl_noise_scale, particles::C_OP_NoiseEmitter, float);
				MEMBER(fl_world_noise_scale, particles::C_OP_NoiseEmitter, float);
				MEMBER(vec_offset_loc, particles::C_OP_NoiseEmitter, Vector);
				MEMBER(fl_world_time_scale, particles::C_OP_NoiseEmitter, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_NoiseEmitter

			class C_OP_MaintainEmitter : public particles::CParticleFunctionEmitter {
				MEMBER(n_particles_to_maintain, particles::C_OP_MaintainEmitter, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_start_time, particles::C_OP_MaintainEmitter, float);
				MEMBER(fl_emission_duration, particles::C_OP_MaintainEmitter, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_emission_rate, particles::C_OP_MaintainEmitter, float);
				MEMBER(n_snapshot_control_point, particles::C_OP_MaintainEmitter, int32_t);
				MEMBER(b_emit_instantaneously, particles::C_OP_MaintainEmitter, bool);
				MEMBER(b_final_emit_on_stop, particles::C_OP_MaintainEmitter, bool);
				MEMBER(fl_scale, particles::C_OP_MaintainEmitter, particleslib::CParticleCollectionFloatInput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_MaintainEmitter

			class C_OP_InstantaneousEmitter : public particles::CParticleFunctionEmitter {
				MEMBER(n_particles_to_emit, particles::C_OP_InstantaneousEmitter, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_start_time, particles::C_OP_InstantaneousEmitter, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_init_from_killed_parent_particles, particles::C_OP_InstantaneousEmitter, float);
				MEMBER(n_event_type, particles::C_OP_InstantaneousEmitter, particles::EventTypeSelection_t);
				MEMBER(fl_parent_particle_scale, particles::C_OP_InstantaneousEmitter, particleslib::CParticleCollectionFloatInput);
				MEMBER(n_max_emitted_per_frame, particles::C_OP_InstantaneousEmitter, int32_t);
				MEMBER(n_snapshot_control_point, particles::C_OP_InstantaneousEmitter, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_InstantaneousEmitter

			class C_OP_ContinuousEmitter : public particles::CParticleFunctionEmitter {
				MEMBER(fl_emission_duration, particles::C_OP_ContinuousEmitter, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_start_time, particles::C_OP_ContinuousEmitter, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_emit_rate, particles::C_OP_ContinuousEmitter, particleslib::CParticleCollectionFloatInput);
				MEMBER(fl_emission_scale, particles::C_OP_ContinuousEmitter, float);
				MEMBER(fl_scale_per_parent_particle, particles::C_OP_ContinuousEmitter, float);
				MEMBER(b_init_from_killed_parent_particles, particles::C_OP_ContinuousEmitter, bool);
				MEMBER(n_event_type, particles::C_OP_ContinuousEmitter, particles::EventTypeSelection_t);
				MEMBER(n_snapshot_control_point, particles::C_OP_ContinuousEmitter, int32_t);
				MEMBER(n_limit_per_update, particles::C_OP_ContinuousEmitter, int32_t);
				MEMBER(b_force_emit_on_first_update, particles::C_OP_ContinuousEmitter, bool);
				MEMBER(b_force_emit_on_last_update, particles::C_OP_ContinuousEmitter, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OP_ContinuousEmitter

			struct ParticleControlPointDriver_t {
				MEMBER(i_control_point, particles::ParticleControlPointDriver_t, int32_t);
				MEMBER(i_attach_type, particles::ParticleControlPointDriver_t, animationsystem::ParticleAttachment_t);
				MEMBER(attachment_name, particles::ParticleControlPointDriver_t, CUtlString);
				MEMBER(vec_offset, particles::ParticleControlPointDriver_t, Vector);
				MEMBER(ang_offset, particles::ParticleControlPointDriver_t, QAngle);
				MEMBER(entity_name, particles::ParticleControlPointDriver_t, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ParticleControlPointDriver_t

			struct ParticleChildrenInfo_t {
				MEMBER(child_ref, particles::ParticleChildrenInfo_t, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(fl_delay, particles::ParticleChildrenInfo_t, float);
				MEMBER(b_end_cap, particles::ParticleChildrenInfo_t, bool);
				MEMBER(b_disable_child, particles::ParticleChildrenInfo_t, bool);
				MEMBER(n_detail_level, particles::ParticleChildrenInfo_t, particles::ParticleDetailLevel_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ParticleChildrenInfo_t

			struct ParticlePreviewBodyGroup_t {
				MEMBER(body_group_name, particles::ParticlePreviewBodyGroup_t, CUtlString);
				MEMBER(n_value, particles::ParticlePreviewBodyGroup_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ParticlePreviewBodyGroup_t

			struct TextureGroup_t {
				MEMBER(b_enabled, particles::TextureGroup_t, bool);
				MEMBER(b_replace_texture_with_gradient, particles::TextureGroup_t, bool);
				MEMBER(h_texture, particles::TextureGroup_t, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(gradient, particles::TextureGroup_t, CColorGradient);
				MEMBER(n_texture_type, particles::TextureGroup_t, particles::SpriteCardTextureType_t);
				MEMBER(n_texture_channels, particles::TextureGroup_t, particles::SpriteCardTextureChannel_t);
				MEMBER(n_texture_blend_mode, particles::TextureGroup_t, particles::ParticleTextureLayerBlendType_t);
				MEMBER(fl_texture_blend, particles::TextureGroup_t, particleslib::CParticleCollectionRendererFloatInput);
				MEMBER(texture_controls, particles::TextureGroup_t, particles::TextureControls_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct TextureGroup_t

			struct ParticleAttributeIndex_t {
				MEMBER(value, particles::ParticleAttributeIndex_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ParticleAttributeIndex_t

			struct CollisionGroupContext_t {
				MEMBER(n_collision_group_number, particles::CollisionGroupContext_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CollisionGroupContext_t

			class CParticleVisibilityInputs {
				MEMBER(fl_camera_bias, particles::CParticleVisibilityInputs, float);
				MEMBER(n_cpin, particles::CParticleVisibilityInputs, int32_t);
				MEMBER(fl_proxy_radius, particles::CParticleVisibilityInputs, float);
				MEMBER(fl_input_min, particles::CParticleVisibilityInputs, float);
				MEMBER(fl_input_max, particles::CParticleVisibilityInputs, float);
				MEMBER(fl_input_pixel_vis_fade, particles::CParticleVisibilityInputs, float);
				MEMBER(fl_no_pixel_visibility_fallback, particles::CParticleVisibilityInputs, float);
				MEMBER(fl_distance_input_min, particles::CParticleVisibilityInputs, float);
				MEMBER(fl_distance_input_max, particles::CParticleVisibilityInputs, float);
				MEMBER(fl_dot_input_min, particles::CParticleVisibilityInputs, float);
				MEMBER(fl_dot_input_max, particles::CParticleVisibilityInputs, float);
				MEMBER(b_dot_cpangles, particles::CParticleVisibilityInputs, bool);
				MEMBER(b_dot_camera_angles, particles::CParticleVisibilityInputs, bool);
				MEMBER(fl_alpha_scale_min, particles::CParticleVisibilityInputs, float);
				MEMBER(fl_alpha_scale_max, particles::CParticleVisibilityInputs, float);
				MEMBER(fl_radius_scale_min, particles::CParticleVisibilityInputs, float);
				MEMBER(fl_radius_scale_max, particles::CParticleVisibilityInputs, float);
				MEMBER(fl_radius_scale_fovbase, particles::CParticleVisibilityInputs, float);
				MEMBER(b_right_eye, particles::CParticleVisibilityInputs, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleVisibilityInputs

		} // namespace particles
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_particles_H
