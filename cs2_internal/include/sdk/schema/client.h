// generated on: Mon Nov 18 16:22:34 2024
#ifndef SDK_SCHEMA_client_H
#define SDK_SCHEMA_client_H

#include <cstdint>

#include <sdk/schema/client.h>
#include <sdk/schema/entity2.h>
#include <sdk/schema/resourcesystem.h>
#include <sdk/schema/animationsystem.h>
#include <sdk/schema/tier2.h>
#include <sdk/schema/modellib.h>
////#include <sdk/schema/particleslib.h>
#include <sdk/schema/pulse_runtime_lib.h>
namespace sdk 
{
	namespace schema 
	{
		namespace client 
		{
			class CNetworkVelocityVector;
			class CAnimGraphControllerBase;
			class C_CSGO_PreviewPlayer_GraphController;
			class C_CSGO_PreviewModel_GraphController;
			class CCSGOViewModel_GraphController;
			class C_Chicken_GraphController;
			class IRagdoll;
			class CompositeMaterialMatchFilter_t;
			class CFiringModeInt;
			class EventClientProcessInput_t;
			class EventClientPollNetworking_t;
			class CInButtonState;
			class IClientAlphaProperty;
			class CClientAlphaProperty;
			class CTakeDamageSummaryScopeGuard;
			class ParticleIndex_t;
			class QuestProgress;
			class EventSetTime_t;
			class IEconItemInterface;
			class C_EconItemView;
			class sndopvarlatchdata_t;
			class CTakeDamageInfo;
			class WaterWheelDrag_t;
			class CCompositeMaterialEditorDoc;
			class SummaryTakeDamageInfo_t;
			class EventClientFrameSimulate_t;
			class CompMatPropertyMutator_t;
			class EventClientPreOutput_t;
			class EventModInitialized_t;
			class CompMatMutatorCondition_t;
			class SoundeventPathCornerPairNetworked_t;
			class C_IronSightController;
			class CSceneEventInfo;
			class CommandToolCommand_t;
			class C_CommandContext;
			class CNavLinkAnimgraphVar;
			class AmmoTypeInfo_t;
			class GameAmmoTypeInfo_t;
			class EventFrameBoundary_t;
			class EventClientProcessGameInput_t;
			class TimedEvent;
			class EventPreDataUpdate_t;
			class CInterpolatedValue;
			class IChoreoServices;
			class CNetworkOriginQuantizedVector;
			class CGlowOverlay;
			class C_LightGlowOverlay;
			class CFireOverlay;
			class C_SunGlowOverlay;
			class EventServerEndAsyncPostTickWork_t;
			class CRopeOverlapHit;
			class CDestructiblePartsSystemData;
			class CAnimEventListenerBase;
			class CAnimEventListener;
			class CAnimEventQueueListener;
			class CompositeMaterialInputLooseVariable_t;
			class CSimpleSimTimer;
			class CRandSimTimer;
			class CSimTimer;
			class CStopwatchBase;
			class CSimpleStopwatch;
			class CRandStopwatch;
			class CStopwatch;
			class EventClientSceneSystemThreadStateChange_t;
			class CPlayerControllerComponent;
			class CCSPlayerController_ActionTrackingServices;
			class CCSPlayerController_InGameMoneyServices;
			class CCSPlayerController_InventoryServices;
			class CCSPlayerController_DamageServices;
			class CDecalInfo;
			class IGapHost_GameEntity;
			class CSoundEnvelope;
			class ragdollelement_t;
			class CCSGOPlayerAnimGraphState;
			class CNetworkViewOffsetVector;
			class EventClientPollInput_t;
			class EventSimulate_t;
			class EventAdvanceTick_t;
			class EventClientAdvanceTick_t;
			class EventServerAdvanceTick_t;
			class EventClientPauseSimulate_t;
			class EventServerSimulate_t;
			class EventServerProcessNetworking_t;
			class EventClientSimulate_t;
			class EventServerPostSimulate_t;
			class EventPostAdvanceTick_t;
			class EventClientPostAdvanceTick_t;
			class EventServerPostAdvanceTick_t;
			class EventServerBeginAsyncPostTickWork_t;
			class EventClientPostSimulate_t;
			class EventClientPreSimulate_t;
			class EventServerPollNetworking_t;
			class CGlobalLightBase;
			class ModelConfigHandle_t;
			class C_EnvWindShared_WindAveEvent_t;
			class SellbackPurchaseEntry_t;
			class CGlowSprite;
			class CGameSceneNode;
			class CSkeletonInstance;
			class CNavLinkMovementVData;
			class fogparams_t;
			class CNetworkOriginCellCoordQuantizedVector;
			class EntityRenderAttribute_t;
			class CNetworkedSequenceOperation;
			class ServerAuthoritativeWeaponSlot_t;
			class C_BaseEntityAPI;
			class CTakeDamageInfoAPI;
			class CompositeMaterialAssemblyProcedure_t;
			class C_SceneEntity_QueuedEvents_t;
			class shard_model_desc_t;
			class CRR_Response;
			class CSoundPatch;
			class GeneratedTextureHandle_t;
			class CSkillDamage;
			class audioparams_t;
			class CWorldCompositionChunkReferenceElement_t;
			class CAttributeManager_cached_attribute_float_t;
			class CBuoyancyHelper;
			class IntervalTimer;
			class CTimeline;
			class C_BaseFlex_Emphasized_Phoneme;
			class EngineCountdownTimer;
			class C_RetakeGameRules;
			class SceneEventId_t;
			class WeaponPurchaseTracker_t;
			class ResponseParams;
			class ragdoll_t;
			class CNetworkTransmitComponent;
			class CompositeMaterial_t;
			class ISkeletonAnimationController;
			class CSkeletonAnimationController;
			class CBaseAnimGraphController;
			class EventAppShutdown_t;
			class C_EnvWindShared_WindVariationEvent_t;
			class CDamageRecord;
			class EventClientAdvanceNonRenderedFrame_t;
			class CAttributeList;
			class C_EconEntity_AttachedModelData_t;
			class CPlayerSprayDecalRenderHelper;
			class CModelState;
			class SequenceHistory_t;
			class CEntitySubclassVDataBase;
			class CPrecipitationVData;
			class CBasePlayerWeaponVData;
			class CCSWeaponBaseVData;
			class CBasePlayerVData;
			class CPlayerPawnComponent;
			class CCSPlayer_DamageReactServices;
			class CPlayer_ItemServices;
			class CCSPlayer_ItemServices;
			class CPlayer_AutoaimServices;
			class CCSPlayer_BuyServices;
			class CCSPlayer_ActionTrackingServices;
			class CCSPlayer_GlowServices;
			class CPlayer_MovementServices;
			class CPlayer_MovementServices_Humanoid;
			class CCSPlayer_MovementServices;
			class CCSObserver_MovementServices;
			class CPlayer_WaterServices;
			class CCSPlayer_WaterServices;
			class CPlayer_ObserverServices;
			class CCSObserver_ObserverServices;
			class CCSPlayer_HostageServices;
			class CCSPlayer_BulletServices;
			class CPlayer_FlashlightServices;
			class CCSPlayer_PingServices;
			class CPlayer_UseServices;
			class CCSPlayer_UseServices;
			class CCSObserver_UseServices;
			class CPlayer_WeaponServices;
			class CCSPlayer_WeaponServices;
			class CPlayer_CameraServices;
			class CCSPlayerBase_CameraServices;
			class CCSObserver_CameraServices;
			class CCSPlayer_CameraServices;
			class CPlayer_ViewModelServices;
			class CCSObserver_ViewModelServices;
			class CCSPlayer_ViewModelServices;
			class CSkillInt;
			class EventSplitScreenStateChanged_t;
			class CCSPointScriptExtensions_observer;
			class CSkillFloat;
			class ActiveModelConfig_t;
			class RagdollCreationParams_t;
			class CTakeDamageResult;
			class hudtextparms_t;
			class EventPostDataUpdate_t;
			class EventClientProcessNetworking_t;
			class CAnimGraphNetworkedVariables;
			class CResponseCriteriaSet;
			class CAttributeManager;
			class C_AttributeContainer;
			class WaterWheelFrictionScale_t;
			class ViewAngleServerChange_t;
			class CPulseCell_PlaySequence_CursorState_t;
			class CBasePlayerControllerAPI;
			class CCSPointScriptExtensions_player;
			class CRemapFloat;
			class CFiringModeFloat;
			class CompositeMaterialInputContainer_t;
			class CPointTemplateAPI;
			class CCSPointScriptExtensions_CCSWeaponBaseVData;
			class C_fogplayerparams_t;
			class CDestructiblePartsSystemData_HitGroupInfoAndPartData;
			class CCSPointScriptExtensions_entity;
			class EventClientPostOutput_t;
			class WeaponPurchaseCount_t;
			class CSharedGapTypeQueryRegistration;
			class IHasAttributes;
			class CSPerRoundStats_t;
			class CSMatchStats_t;
			class PhysicsRagdollPose_t;
			class CCSPointScriptExtensions_player_controller;
			class CCollisionProperty;
			class CGlowProperty;
			class CDestructiblePartsSystemData_PartData;
			class CProjectedTextureBase;
			class VPhysicsCollisionAttribute_t;
			class C_GameRules;
			class C_SingleplayRules;
			class C_MultiplayRules;
			class C_TeamplayRules;
			class C_CSGameRules;
			class C_EnvWindShared;
			class EngineLoopState_t;
			class CPathSimpleAPI;
			class CFlashlightEffect;
			class CEffectData;
			class CFootstepTableHandle;
			class HullFlags_t;
			class PointCameraSettings_t;
			class CClientGapTypeQueryRegistration;
			class EventClientOutput_t;
			class CPulseAnimFuncs;
			class EventSimpleLoopFrameUpdate_t;
			class WrappedPhysicsJoint_t;
			class CCopyRecipientFilter;
			class PredictedDamageTag_t;
			class CDestructiblePartRuntimeData;
			class CGameSceneNodeHandle;
			class EntitySpottedState_t;
			class C_RopeKeyframe_CPhysicsDelegate;
			class AmmoIndex_t;
			class CountdownTimer;
			class CCSGameModeRules;
			class CCSGameModeRules_Noop;
			class CCSGameModeRules_ArmsRace;
			class CCSGameModeRules_Deathmatch;
			class CScriptUniformRandomStream;
			class CCSPointScriptExtensions_weapon_cs_base;
			class CEconItemAttribute;
			class EventProfileStorageAvailable_t;
			class sky3dparams_t;
			class thinkfunc_t;
			class CBreakableStageHelper;
			class CDestructiblePartRuntimeDataVector;
			class CompositeMaterialEditorPoint_t;
			class ResponseFollowup;
			class CLogicRelay;
			class C_CSGO_TeamSelectCharacterPosition;
			class C_InfoInstructorHintHostageRescueZone;
			class C_Item;
			class CBodyComponentBaseAnimGraph;
			class C_PointClientUIHUD;
			class C_SoundOpvarSetPathCornerEntity;
			class C_HEGrenade;
			class C_FuncMover;
			class C_WeaponM4A1;
			class C_TriggerLerpObject;
			class C_SoundEventPathCornerEntity;
			class CEnvSoundscapeTriggerable;
			class C_HostageCarriableProp;
			class C_WeaponM249;
			class C_PlayerPing;
			class C_Chicken;
			class C_BaseCSGrenade;
			class C_Fish;
			class C_GameRulesProxy;
			class C_EnvProjectedTexture;
			class CBodyComponentSkeletonInstance;
			class C_WeaponCZ75a;
			class C_EnvCombinedLightProbeVolume;
			class CBasePlayerController;
			class C_BaseModelEntity;
			class CCSGO_WingmanIntroCounterTerroristPosition;
			class C_SoundEventEntityAlias_snd_event_point;
			class C_FootstepControl;
			class CTripWireFireProjectile;
			class C_LightSpotEntity;
			class C_EnvDetailController;
			class C_SpotlightEnd;
			class C_EnvDecal;
			class C_PointCamera;
			class C_LightDirectionalEntity;
			class C_BarnLight;
			class C_EnvWind;
			class C_TriggerPhysics;
			class C_BaseCombatCharacter;
			class C_FlashbangProjectile;
			class C_SoundEventSphereEntity;
			class C_BaseEntity;
			class C_MolotovGrenade;
			class C_SoundAreaEntitySphere;
			class C_DynamicPropAlias_cable_dynamic;
			class C_SceneEntity;
			class C_FuncMonitor;
			class C_SoundEventAABBEntity;
			class C_TriggerMultiple;
			class C_EnvVolumetricFogVolume;
			class C_GlobalLight;
			class C_Inferno;
			class CBodyComponent;
			class C_LightGlow;
			class C_PlayerSprayDecal;
			class C_CSTeam;
			class C_ClientRagdoll;
			class C_InfoLadderDismount;
			class C_CSPlayerResource;
			class CBodyComponentPoint;
			class C_SmokeGrenadeProjectile;
			class C_CSGO_MapPreviewCameraPath;
			class CCSGO_WingmanIntroTerroristPosition;
			class C_CSGO_TerroristWingmanIntroCamera;
			class C_WeaponSawedoff;
			class C_WeaponMP7;
			class CCSPlayerController;
			class C_WeaponMag7;
			class C_CSGO_MapPreviewCameraPathNode;
			class C_DEagle;
			class C_CSPlayerPawn;
			class C_Melee;
			class C_RagdollPropAttached;
			class CInfoDynamicShadowHint;
			class C_BaseCSGrenadeProjectile;
			class C_BaseTrigger;
			class C_WeaponBaseItem;
			class C_SensorGrenadeProjectile;
			class C_BreakableProp;
			class C_BaseButton;
			class CInfoParticleTarget;
			class C_Item_Healthshot;
			class C_WeaponAug;
			class CEnvSoundscapeProxyAlias_snd_soundscape_proxy;
			class C_ColorCorrectionVolume;
			class C_CSGO_TeamIntroTerroristPosition;
			class C_PointClientUIWorldPanel;
			class C_CSMinimapBoundary;
			class C_CSGO_EndOfMatchCharacterPosition;
			class C_Knife;
			class CMapInfo;
			class C_SoundOpvarSetAABBEntity;
			class C_PropDoorRotating;
			class CCitadelSoundOpvarSetOBB;
			class C_Team;
			class C_CSGO_EndOfMatchLineupStart;
			class C_SoundAreaEntityOrientedBox;
			class C_FuncMoveLinear;
			class C_TextureBasedAnimatable;
			class C_DynamicPropAlias_prop_dynamic_override;
			class C_SoundOpvarSetPointEntity;
			class C_CSPlayerPawnBase;
			class C_LightOrthoEntity;
			class C_CSGO_PreviewPlayer;
			class CSkyboxReference;
			class C_TonemapController2Alias_env_tonemap_controller2;
			class CRenderComponent;
			class C_PathParticleRopeAlias_path_particle_rope_clientside;
			class C_CSGOViewModel;
			class C_WeaponSSG08;
			class C_EnvLightProbeVolume;
			class C_PointClientUIWorldTextPanel;
			class C_ViewmodelAttachmentModel;
			class C_CSGO_TeamSelectCamera;
			class C_Flashbang;
			class CBumpMine;
			class C_BaseDoor;
			class CRagdollManager;
			class CPointOffScreenIndicatorUi;
			class C_TeamRoundTimer;
			class C_WeaponGlock;
			class C_SmokeGrenade;
			class C_WeaponGalilAR;
			class C_WorldModelGloves;
			class CPathSimple;
			class CInfoWorldLayer;
			class C_CSObserverPawn;
			class CBodyComponentBaseModelEntity;
			class CTripWireFire;
			class C_CSWeaponBaseGun;
			class CEnvSoundscapeProxy;
			class C_SkyCamera;
			class C_World;
			class CEnvSoundscape;
			class C_EntityDissolve;
			class C_CSGO_TeamIntroCounterTerroristPosition;
			class C_PostProcessingVolume;
			class CServerOnlyModelEntity;
			class C_FuncRotating;
			class C_CSGO_TeamSelectCounterTerroristPosition;
			class CPulseCell_LerpCameraSettings_CursorState_t;
			class C_BaseFire;
			class C_ItemDogtags;
			class C_DecoyProjectile;
			class C_WaterBullet;
			class CCSPointScriptEntity;
			class C_C4;
			class CBaseAnimGraph;
			class CBreachChargeProjectile;
			class C_PointEntity;
			class C_PathParticleRope;
			class C_WeaponP90;
			class CEnvSoundscapeAlias_snd_soundscape;
			class C_BasePlayerWeapon;
			class C_RagdollProp;
			class C_EnvSky;
			class C_WeaponAWP;
			class C_BasePlayerPawn;
			class CLogicalEntity;
			class C_SoundEventOBBEntity;
			class C_TriggerBuoyancy;
			class C_Hostage;
			class C_RopeKeyframe;
			class C_GradientFog;
			class C_CSGO_TeamPreviewCamera;
			class C_EconWearable;
			class CCSGO_WingmanIntroCharacterPosition;
			class C_HEGrenadeProjectile;
			class CInfoTarget;
			class C_BaseToggle;
			class C_NetTestBaseCombatCharacter;
			class CWaterSplasher;
			class C_KeychainModule;
			class C_ModelPointEntity;
			class C_FireSmoke;
			class C_WeaponRevolver;
			class CPointTemplate;
			class C_FireFromAboveSprite;
			class C_SoundOpvarSetOBBWindEntity;
			class C_WeaponMP5SD;
			class C_WeaponShield;
			class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel;
			class C_DynamicPropAlias_dynamic_prop;
			class CPointChildModifier;
			class C_PointCameraVFOV;
			class C_CSGO_TeamSelectTerroristPosition;
			class C_TonemapController2;
			class C_WeaponG3SG1;
			class CFuncWater;
			class C_SoundOpvarSetAutoRoomEntity;
			class C_EconEntity;
			class C_WeaponSG556;
			class C_RectLight;
			class C_WeaponNegev;
			class C_ParticleSystem;
			class C_CSGO_TeamPreviewModel;
			class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable;
			class C_CSGameRulesProxy;
			class CBombTarget;
			class CWeaponZoneRepulsor;
			class C_BaseFlex;
			class C_CSGO_EndOfMatchLineupEnd;
			class C_Multimeter;
			class C_OmniLight;
			class C_CsmFovOverride;
			class C_PlantedC4;
			class C_Precipitation;
			class C_PhysMagnet;
			class C_ColorCorrection;
			class C_WeaponUMP45;
			class CHostageRescueZoneShim;
			class CLightComponent;
			class C_TintController;
			class C_WeaponP250;
			class C_CSGO_CounterTerroristWingmanIntroCamera;
			class C_WeaponNOVA;
			class CGrenadeTracer;
			class C_WeaponUSPSilencer;
			class C_PointClientUIDialog;
			class C_PrecipitationBlocker;
			class C_CSGO_CounterTerroristTeamIntroCamera;
			class C_HandleTest;
			class C_EnvWindClientside;
			class C_WeaponMAC10;
			class CSpriteOriented;
			class C_IncendiaryGrenade;
			class C_WeaponFamas;
			class C_FireSprite;
			class C_EnvParticleGlow;
			class C_SoundEventEntity;
			class C_CSGO_TeamIntroCharacterPosition;
			class C_CSGO_PreviewModelAlias_csgo_item_previewmodel;
			class C_WeaponM4A1Silencer;
			class C_Sun;
			class C_CSGO_EndOfMatchLineupEndpoint;
			class C_DynamicProp;
			class CHitboxComponent;
			class C_BulletHitModel;
			class C_MapVetoPickController;
			class C_FireCrackerBlast;
			class C_WeaponMP9;
			class C_PointCommentaryNode;
			class C_AK47;
			class C_SensorGrenade;
			class C_FuncLadder;
			class C_CSGO_PreviewModel;
			class C_SoundOpvarSetOBBEntity;
			class C_FuncElectrifiedVolume;
			class C_BaseGrenade;
			class C_EnvVolumetricFogController;
			class C_WeaponTec9;
			class C_Breakable;
			class C_SoundAreaEntityBase;
			class CCSClientPointScriptEntity;
			class C_CS2WeaponModuleBase;
			class C_InfoVisibilityBox;
			class C_BaseViewModel;
			class C_BaseClientUIEntity;
			class C_CSWeaponBase;
			class C_FuncTrackTrain;
			class CBaseProp;
			class C_WeaponHKP2000;
			class C_WeaponXM1014;
			class C_MapPreviewParticleSystem;
			class CBreachCharge;
			class C_EnvCubemap;
			class C_PredictedViewModel;
			class C_WeaponBizon;
			class C_PortraitWorldCallbackHandler;
			class C_PointValueRemapper;
			class C_EnvCubemapBox;
			class C_CSGO_EndOfMatchCamera;
			class C_SoundOpvarSetPointBase;
			class C_PhysBox;
			class C_WeaponTaser;
			class C_LightEntity;
			class C_Fists;
			class C_PhysicsPropMultiplayer;
			class CInfoDynamicShadowHintBox;
			class C_EnvCubemapFog;
			class C_ShatterGlassShardPhysics;
			class C_WeaponElite;
			class C_PlayerVisibility;
			class CPropDataComponent;
			class C_WeaponSCAR20;
			class C_DecoyGrenade;
			class C_LocalTempEntity;
			class C_MolotovProjectile;
			class C_LightEnvironmentEntity;
			class CInfoOffscreenPanoramaTexture;
			class C_DynamicLight;
			class C_TriggerVolume;
			class C_StattrakModule;
			class C_PhysicsProp;
			class C_Beam;
			class C_CSGO_TeamPreviewCharacterPosition;
			class C_EnvScreenOverlay;
			class C_PointWorldText;
			class CBumpMineProjectile;
			class C_WeaponFiveSeven;
			class C_BasePropDoor;
			class C_NametagModule;
			class C_PhysPropClientside;
			class C_VoteController;
			class C_FogController;
			class C_FuncBrush;
			class C_FuncConveyor;
			class CHostageRescueZone;
			class CTablet;
			class CCSPointScript;
			class C_EntityFlame;
			class C_Sprite;
			class C_CSGO_TerroristTeamIntroCamera;
			class CPulseCell_Step_EntFire;
			class CPulseCell_PlaySequence;
			class CPulseCell_LerpCameraSettings;


			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class C_BaseCombatCharacter_WaterWakeMode_t : std::uint32_t {
				WATER_WAKE_NONE = 0x0,
				WATER_WAKE_IDLE = 0x1,
				WATER_WAKE_WALKING = 0x2,
				WATER_WAKE_RUNNING = 0x3,
				WATER_WAKE_WATER_OVERHEAD = 0x4,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class TimelineCompression_t : std::uint32_t {
				TIMELINE_COMPRESSION_SUM = 0x0,
				TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
				TIMELINE_COMPRESSION_AVERAGE = 0x2,
				TIMELINE_COMPRESSION_AVERAGE_BLEND = 0x3,
				TIMELINE_COMPRESSION_TOTAL = 0x4,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class CSWeaponMode : std::uint32_t {
				Primary_Mode = 0x0,
				Secondary_Mode = 0x1,
				WeaponMode_MAX = 0x2,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class IChoreoServices_ScriptState_t : std::uint32_t {
				SCRIPT_PLAYING = 0x0,
				SCRIPT_WAIT = 0x1,
				SCRIPT_POST_IDLE = 0x2,
				SCRIPT_CLEANUP = 0x3,
				SCRIPT_MOVE_TO_MARK = 0x4,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class SubclassVDataChangeType_t : std::uint32_t {
				SUBCLASS_VDATA_CREATED = 0x0,
				SUBCLASS_VDATA_SUBCLASS_CHANGED = 0x1,
				SUBCLASS_VDATA_RELOADED = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class C4LightEffect_t : std::uint32_t {
				eLightEffectNone = 0x0,
				eLightEffectDropped = 0x1,
				eLightEffectThirdPersonHeld = 0x2,
			};
			// Enumerator count: 74
			// Alignment: 
			// Size: 0x4
			enum class loadout_slot_t : std::uint32_t {
				LOADOUT_SLOT_PROMOTED = 0xfffffffe,
				LOADOUT_SLOT_INVALID = 0xffffffff,
				LOADOUT_SLOT_MELEE = 0x0,
				LOADOUT_SLOT_C4 = 0x1,
				LOADOUT_SLOT_FIRST_AUTO_BUY_WEAPON = 0x0,
				LOADOUT_SLOT_LAST_AUTO_BUY_WEAPON = 0x1,
				LOADOUT_SLOT_SECONDARY0 = 0x2,
				LOADOUT_SLOT_SECONDARY1 = 0x3,
				LOADOUT_SLOT_SECONDARY2 = 0x4,
				LOADOUT_SLOT_SECONDARY3 = 0x5,
				LOADOUT_SLOT_SECONDARY4 = 0x6,
				LOADOUT_SLOT_SECONDARY5 = 0x7,
				LOADOUT_SLOT_SMG0 = 0x8,
				LOADOUT_SLOT_SMG1 = 0x9,
				LOADOUT_SLOT_SMG2 = 0xa,
				LOADOUT_SLOT_SMG3 = 0xb,
				LOADOUT_SLOT_SMG4 = 0xc,
				LOADOUT_SLOT_SMG5 = 0xd,
				LOADOUT_SLOT_RIFLE0 = 0xe,
				LOADOUT_SLOT_RIFLE1 = 0xf,
				LOADOUT_SLOT_RIFLE2 = 0x10,
				LOADOUT_SLOT_RIFLE3 = 0x11,
				LOADOUT_SLOT_RIFLE4 = 0x12,
				LOADOUT_SLOT_RIFLE5 = 0x13,
				LOADOUT_SLOT_HEAVY0 = 0x14,
				LOADOUT_SLOT_HEAVY1 = 0x15,
				LOADOUT_SLOT_HEAVY2 = 0x16,
				LOADOUT_SLOT_HEAVY3 = 0x17,
				LOADOUT_SLOT_HEAVY4 = 0x18,
				LOADOUT_SLOT_HEAVY5 = 0x19,
				LOADOUT_SLOT_FIRST_WHEEL_WEAPON = 0x2,
				LOADOUT_SLOT_LAST_WHEEL_WEAPON = 0x19,
				LOADOUT_SLOT_FIRST_PRIMARY_WEAPON = 0x8,
				LOADOUT_SLOT_LAST_PRIMARY_WEAPON = 0x19,
				LOADOUT_SLOT_FIRST_WHEEL_GRENADE = 0x1a,
				LOADOUT_SLOT_GRENADE0 = 0x1a,
				LOADOUT_SLOT_GRENADE1 = 0x1b,
				LOADOUT_SLOT_GRENADE2 = 0x1c,
				LOADOUT_SLOT_GRENADE3 = 0x1d,
				LOADOUT_SLOT_GRENADE4 = 0x1e,
				LOADOUT_SLOT_GRENADE5 = 0x1f,
				LOADOUT_SLOT_LAST_WHEEL_GRENADE = 0x1f,
				LOADOUT_SLOT_EQUIPMENT0 = 0x20,
				LOADOUT_SLOT_EQUIPMENT1 = 0x21,
				LOADOUT_SLOT_EQUIPMENT2 = 0x22,
				LOADOUT_SLOT_EQUIPMENT3 = 0x23,
				LOADOUT_SLOT_EQUIPMENT4 = 0x24,
				LOADOUT_SLOT_EQUIPMENT5 = 0x25,
				LOADOUT_SLOT_FIRST_WHEEL_EQUIPMENT = 0x20,
				LOADOUT_SLOT_LAST_WHEEL_EQUIPMENT = 0x25,
				LOADOUT_SLOT_CLOTHING_CUSTOMPLAYER = 0x26,
				LOADOUT_SLOT_CLOTHING_CUSTOMHEAD = 0x27,
				LOADOUT_SLOT_CLOTHING_FACEMASK = 0x28,
				LOADOUT_SLOT_CLOTHING_HANDS = 0x29,
				LOADOUT_SLOT_FIRST_COSMETIC = 0x29,
				LOADOUT_SLOT_LAST_COSMETIC = 0x29,
				LOADOUT_SLOT_CLOTHING_EYEWEAR = 0x2a,
				LOADOUT_SLOT_CLOTHING_HAT = 0x2b,
				LOADOUT_SLOT_CLOTHING_LOWERBODY = 0x2c,
				LOADOUT_SLOT_CLOTHING_TORSO = 0x2d,
				LOADOUT_SLOT_CLOTHING_APPEARANCE = 0x2e,
				LOADOUT_SLOT_MISC0 = 0x2f,
				LOADOUT_SLOT_MISC1 = 0x30,
				LOADOUT_SLOT_MISC2 = 0x31,
				LOADOUT_SLOT_MISC3 = 0x32,
				LOADOUT_SLOT_MISC4 = 0x33,
				LOADOUT_SLOT_MISC5 = 0x34,
				LOADOUT_SLOT_MISC6 = 0x35,
				LOADOUT_SLOT_MUSICKIT = 0x36,
				LOADOUT_SLOT_FLAIR0 = 0x37,
				LOADOUT_SLOT_SPRAY0 = 0x38,
				LOADOUT_SLOT_FIRST_ALL_CHARACTER = 0x36,
				LOADOUT_SLOT_LAST_ALL_CHARACTER = 0x38,
				LOADOUT_SLOT_COUNT = 0x39,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class StanceType_t : std::uint32_t {
				// MPropertySuppressEnumerator
				STANCE_CURRENT = 0xffffffff,
				// MPropertyFriendlyName "Default"
				STANCE_DEFAULT = 0x0,
				// MPropertyFriendlyName "Crouching"
				STANCE_CROUCHING = 0x1,
				// MPropertyFriendlyName "Prone"
				STANCE_PRONE = 0x2,
				// MPropertySuppressEnumerator
				NUM_STANCES = 0x3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ObserverInterpState_t : std::uint32_t {
				OBSERVER_INTERP_NONE = 0x0,
				OBSERVER_INTERP_TRAVELING = 0x1,
				OBSERVER_INTERP_SETTLING = 0x2,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class DoorState_t : std::uint32_t {
				DOOR_STATE_CLOSED = 0x0,
				DOOR_STATE_OPENING = 0x1,
				DOOR_STATE_OPEN = 0x2,
				DOOR_STATE_CLOSING = 0x3,
				DOOR_STATE_AJAR = 0x4,
			};
			// Enumerator count: 12
			// Alignment: 
			// Size: 0x4
			enum class Hull_t : std::uint32_t {
				HULL_HUMAN = 0x0,
				HULL_SMALL_CENTERED = 0x1,
				HULL_WIDE_HUMAN = 0x2,
				HULL_TINY = 0x3,
				HULL_MEDIUM = 0x4,
				HULL_TINY_CENTERED = 0x5,
				HULL_LARGE = 0x6,
				HULL_LARGE_CENTERED = 0x7,
				HULL_MEDIUM_TALL = 0x8,
				HULL_SMALL = 0x9,
				NUM_HULLS = 0xa,
				HULL_NONE = 0xb,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class PointTemplateClientOnlyEntityBehavior_t : std::uint32_t {
				CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
				CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1,
			};
			// Enumerator count: 18
			// Alignment: 
			// Size: 0x4
			enum class CSPlayerBlockingUseAction_t : std::uint32_t {
				k_CSPlayerBlockingUseAction_None = 0x0,
				k_CSPlayerBlockingUseAction_DefusingDefault = 0x1,
				k_CSPlayerBlockingUseAction_DefusingWithKit = 0x2,
				k_CSPlayerBlockingUseAction_HostageGrabbing = 0x3,
				k_CSPlayerBlockingUseAction_HostageDropping = 0x4,
				k_CSPlayerBlockingUseAction_OpeningSafe = 0x5,
				k_CSPlayerBlockingUseAction_EquippingParachute = 0x6,
				k_CSPlayerBlockingUseAction_EquippingHeavyArmor = 0x7,
				k_CSPlayerBlockingUseAction_EquippingContract = 0x8,
				k_CSPlayerBlockingUseAction_EquippingTabletUpgrade = 0x9,
				k_CSPlayerBlockingUseAction_TakingOffHeavyArmor = 0xa,
				k_CSPlayerBlockingUseAction_PayingToOpenDoor = 0xb,
				k_CSPlayerBlockingUseAction_CancelingSpawnRappelling = 0xc,
				k_CSPlayerBlockingUseAction_EquippingExoJump = 0xd,
				k_CSPlayerBlockingUseAction_PickingUpBumpMine = 0xe,
				k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 0xf,
				k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 0x10,
				k_CSPlayerBlockingUseAction_MaxCount = 0x11,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x4
			enum class PreviewCharacterMode : std::uint32_t {
				DIORAMA = 0x0,
				MAIN_MENU = 0x1,
				BUY_MENU = 0x2,
				TEAM_SELECT = 0x3,
				END_OF_MATCH = 0x4,
				INVENTORY_INSPECT = 0x5,
				WALKING = 0x6,
				TEAM_INTRO = 0x7,
				WINGMAN_INTRO = 0x8,
				BANNER = 0x9,
			};
			// Enumerator count: 17
			// Alignment: 
			// Size: 0x4
			enum class BaseExplosionTypes_t : std::uint32_t {
				// MPropertyFriendlyName "Default"
				EXPLOSION_TYPE_DEFAULT = 0x0,
				// MPropertyFriendlyName "Grenade"
				EXPLOSION_TYPE_GRENADE = 0x1,
				// MPropertyFriendlyName "Molotov"
				EXPLOSION_TYPE_MOLOTOV = 0x2,
				// MPropertyFriendlyName "Fireworks"
				EXPLOSION_TYPE_FIREWORKS = 0x3,
				// MPropertyFriendlyName "Gascan"
				EXPLOSION_TYPE_GASCAN = 0x4,
				// MPropertyFriendlyName "Gas Cylinder"
				EXPLOSION_TYPE_GASCYLINDER = 0x5,
				// MPropertyFriendlyName "Explosive Barrel"
				EXPLOSION_TYPE_EXPLOSIVEBARREL = 0x6,
				// MPropertyFriendlyName "Electrical"
				EXPLOSION_TYPE_ELECTRICAL = 0x7,
				// MPropertyFriendlyName "EMP"
				EXPLOSION_TYPE_EMP = 0x8,
				// MPropertyFriendlyName "Shrapnel"
				EXPLOSION_TYPE_SHRAPNEL = 0x9,
				// MPropertyFriendlyName "Smoke Grenade"
				EXPLOSION_TYPE_SMOKEGRENADE = 0xa,
				// MPropertyFriendlyName "Flashbang"
				EXPLOSION_TYPE_FLASHBANG = 0xb,
				// MPropertyFriendlyName "Tripmine"
				EXPLOSION_TYPE_TRIPMINE = 0xc,
				// MPropertyFriendlyName "Ice"
				EXPLOSION_TYPE_ICE = 0xd,
				// MPropertyFriendlyName "None"
				EXPLOSION_TYPE_NONE = 0xe,
				// MPropertyFriendlyName "Custom"
				EXPLOSION_TYPE_CUSTOM = 0xf,
				// MPropertySuppressEnumerator
				EXPLOSION_TYPE_COUNT = 0x10,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class WorldTextPanelOrientation_t : std::uint32_t {
				WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
				WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
				WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x1
			enum class SurroundingBoundsType_t : std::uint8_t {
				USE_OBB_COLLISION_BOUNDS = 0,
				USE_BEST_COLLISION_BOUNDS = 1,
				USE_HITBOXES = 2,
				USE_SPECIFIED_BOUNDS = 3,
				USE_GAME_CODE = 4,
				USE_ROTATION_EXPANDED_BOUNDS = 5,
				USE_ROTATION_EXPANDED_ORIENTED_BOUNDS = 6,
				USE_COLLISION_BOUNDS_NEVER_VPHYSICS = 7,
				USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 8,
				SURROUNDING_TYPE_BIT_COUNT = 3,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class EntityDisolveType_t : std::uint32_t {
				ENTITY_DISSOLVE_INVALID = 0xffffffff,
				ENTITY_DISSOLVE_NORMAL = 0x0,
				ENTITY_DISSOLVE_ELECTRICAL = 0x1,
				ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
				ENTITY_DISSOLVE_CORE = 0x3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class WorldTextPanelHorizontalAlign_t : std::uint32_t {
				WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0x0,
				WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
				WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class SequenceFinishNotifyState_t : std::uint8_t {
				eDoNotNotify = 0,
				eNotifyWhenFinished = 1,
				eNotifyTriggered = 2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class CSWeaponSilencerType : std::uint32_t {
				WEAPONSILENCER_NONE = 0x0,
				WEAPONSILENCER_DETACHABLE = 0x1,
				WEAPONSILENCER_INTEGRATED = 0x2,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x4
			enum class CompMatPropertyMutatorType_t : std::uint32_t {
				// MPropertyFriendlyName "Init With"
				COMP_MAT_PROPERTY_MUTATOR_INIT = 0x0,
				// MPropertyFriendlyName "Copy Matching Keys From"
				COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 0x1,
				// MPropertyFriendlyName "Copy Keys with Suffix"
				COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 0x2,
				// MPropertyFriendlyName "Copy Property From"
				COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 0x3,
				// MPropertyFriendlyName "Set Value"
				COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 0x4,
				// MPropertyFriendlyName "Generate Texture"
				COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 0x5,
				// MPropertyFriendlyName "Mutators"
				COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 0x6,
				// MPropertyFriendlyName "Pop Input Variable Queue"
				COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 0x7,
				// MPropertyFriendlyName "Draw Text"
				COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 0x8,
				// MPropertyFriendlyName "Random Roll Input Variables"
				COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 0x9,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x1
			enum class ItemFlagTypes_t : std::uint8_t {
				ITEM_FLAG_NONE = 0,
				ITEM_FLAG_CAN_SELECT_WITHOUT_AMMO = 1,
				ITEM_FLAG_NOAUTORELOAD = 2,
				ITEM_FLAG_NOAUTOSWITCHEMPTY = 4,
				ITEM_FLAG_LIMITINWORLD = 8,
				ITEM_FLAG_EXHAUSTIBLE = 16,
				ITEM_FLAG_DOHITLOCATIONDMG = 32,
				ITEM_FLAG_NOAMMOPICKUPS = 64,
				ITEM_FLAG_NOITEMPICKUP = 128,
			};
			// Enumerator count: 15
			// Alignment: 
			// Size: 0x4
			enum class CompositeMaterialInputLooseVariableType_t : std::uint32_t {
				// MPropertyFriendlyName "Boolean"
				LOOSE_VARIABLE_TYPE_BOOLEAN = 0x0,
				// MPropertyFriendlyName "Integer"
				LOOSE_VARIABLE_TYPE_INTEGER1 = 0x1,
				// MPropertyFriendlyName "Integer2"
				LOOSE_VARIABLE_TYPE_INTEGER2 = 0x2,
				// MPropertyFriendlyName "Integer3"
				LOOSE_VARIABLE_TYPE_INTEGER3 = 0x3,
				// MPropertyFriendlyName "Integer4"
				LOOSE_VARIABLE_TYPE_INTEGER4 = 0x4,
				// MPropertyFriendlyName "Float"
				LOOSE_VARIABLE_TYPE_FLOAT1 = 0x5,
				// MPropertyFriendlyName "Float2"
				LOOSE_VARIABLE_TYPE_FLOAT2 = 0x6,
				// MPropertyFriendlyName "Float3"
				LOOSE_VARIABLE_TYPE_FLOAT3 = 0x7,
				// MPropertyFriendlyName "Float4"
				LOOSE_VARIABLE_TYPE_FLOAT4 = 0x8,
				// MPropertyFriendlyName "Color4"
				LOOSE_VARIABLE_TYPE_COLOR4 = 0x9,
				// MPropertyFriendlyName "String"
				LOOSE_VARIABLE_TYPE_STRING = 0xa,
				// MPropertyFriendlyName "System Variable"
				LOOSE_VARIABLE_TYPE_SYSTEMVAR = 0xb,
				// MPropertyFriendlyName "Material"
				LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 0xc,
				// MPropertyFriendlyName "Texture"
				LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 0xd,
				// MPropertyFriendlyName "Panorama Render"
				LOOSE_VARIABLE_TYPE_PANORAMA_RENDER = 0xe,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class WorldTextPanelVerticalAlign_t : std::uint32_t {
				WORLDTEXT_VERTICAL_ALIGN_TOP = 0x0,
				WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
				WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class CSWeaponCategory : std::uint32_t {
				WEAPONCATEGORY_OTHER = 0x0,
				WEAPONCATEGORY_MELEE = 0x1,
				WEAPONCATEGORY_SECONDARY = 0x2,
				WEAPONCATEGORY_SMG = 0x3,
				WEAPONCATEGORY_RIFLE = 0x4,
				WEAPONCATEGORY_HEAVY = 0x5,
				WEAPONCATEGORY_COUNT = 0x6,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class BeginDeathLifeStateTransition_t : std::uint8_t {
				NO_CHANGE_IN_LIFESTATE = 0,
				TRANSITION_TO_LIFESTATE_DYING = 1,
				TRANSITION_TO_LIFESTATE_DEAD = 2,
			};
			// Enumerator count: 24
			// Alignment: 
			// Size: 0x4
			enum class PlayerAnimEvent_t : std::uint32_t {
				PLAYERANIMEVENT_FIRE_GUN_PRIMARY = 0x0,
				PLAYERANIMEVENT_FIRE_GUN_SECONDARY = 0x1,
				PLAYERANIMEVENT_GRENADE_PULL_PIN = 0x2,
				PLAYERANIMEVENT_THROW_GRENADE = 0x3,
				PLAYERANIMEVENT_JUMP = 0x4,
				PLAYERANIMEVENT_RELOAD = 0x5,
				PLAYERANIMEVENT_CLEAR_FIRING = 0x6,
				PLAYERANIMEVENT_DEPLOY = 0x7,
				PLAYERANIMEVENT_SILENCER_STATE = 0x8,
				PLAYERANIMEVENT_SILENCER_TOGGLE = 0x9,
				PLAYERANIMEVENT_THROW_GRENADE_UNDERHAND = 0xa,
				PLAYERANIMEVENT_CATCH_WEAPON = 0xb,
				PLAYERANIMEVENT_LOOKATWEAPON_REQUEST = 0xc,
				PLAYERANIMEVENT_RELOAD_CANCEL_LOOKATWEAPON = 0xd,
				PLAYERANIMEVENT_HAULBACK = 0xe,
				PLAYERANIMEVENT_IDLE = 0xf,
				PLAYERANIMEVENT_STRIKE_HIT = 0x10,
				PLAYERANIMEVENT_STRIKE_MISS = 0x11,
				PLAYERANIMEVENT_BACKSTAB = 0x12,
				PLAYERANIMEVENT_DRYFIRE = 0x13,
				PLAYERANIMEVENT_FIDGET = 0x14,
				PLAYERANIMEVENT_RELEASE = 0x15,
				PLAYERANIMEVENT_TAUNT = 0x16,
				PLAYERANIMEVENT_COUNT = 0x17,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class LifeState_t : std::uint32_t {
				LIFE_ALIVE = 0x0,
				LIFE_DYING = 0x1,
				LIFE_DEAD = 0x2,
				LIFE_RESPAWNABLE = 0x3,
				LIFE_RESPAWNING = 0x4,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class FixAngleSet_t : std::uint8_t {
				None = 0,
				Absolute = 1,
				Relative = 2,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class CompositeMaterialInputTextureType_t : std::uint32_t {
				// MPropertyFriendlyName "Default"
				INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
				// MPropertyFriendlyName "Normal Map"
				INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
				// MPropertyFriendlyName "Color"
				INPUT_TEXTURE_TYPE_COLOR = 0x2,
				// MPropertyFriendlyName "Masks"
				INPUT_TEXTURE_TYPE_MASKS = 0x3,
				// MPropertyFriendlyName "Roughness"
				INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
				// MPropertyFriendlyName "Pearlescence Mask"
				INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
				// MPropertyFriendlyName "Ambient Occlusion"
				INPUT_TEXTURE_TYPE_AO = 0x6,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class OnFrame : std::uint8_t {
				ONFRAME_UNKNOWN = 0,
				ONFRAME_TRUE = 1,
				ONFRAME_FALSE = 2,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x4
			enum class BloodType : std::uint32_t {
				None = 0xffffffff,
				ColorRed = 0x0,
				ColorYellow = 0x1,
				ColorGreen = 0x2,
				ColorRedLVL2 = 0x3,
				ColorRedLVL3 = 0x4,
				ColorRedLVL4 = 0x5,
				ColorRedLVL5 = 0x6,
				ColorRedLVL6 = 0x7,
			};
			// Enumerator count: 47
			// Alignment: 
			// Size: 0x4
			enum class GameAnimEventIndex_t : std::uint32_t {
				AE_EMPTY = 0x0,
				AE_CL_PLAYSOUND = 0x1,
				AE_CL_PLAYSOUND_ATTACHMENT = 0x2,
				AE_CL_PLAYSOUND_POSITION = 0x3,
				AE_SV_PLAYSOUND = 0x4,
				AE_CL_STOPSOUND = 0x5,
				AE_CL_PLAYSOUND_LOOPING = 0x6,
				AE_CL_CREATE_PARTICLE_EFFECT = 0x7,
				AE_CL_STOP_PARTICLE_EFFECT = 0x8,
				AE_CL_CREATE_PARTICLE_EFFECT_CFG = 0x9,
				AE_SV_CREATE_PARTICLE_EFFECT_CFG = 0xa,
				AE_SV_STOP_PARTICLE_EFFECT = 0xb,
				AE_FOOTSTEP = 0xc,
				AE_RAGDOLL = 0xd,
				AE_CL_STOP_RAGDOLL_CONTROL = 0xe,
				AE_CL_ENABLE_BODYGROUP = 0xf,
				AE_CL_DISABLE_BODYGROUP = 0x10,
				AE_BODYGROUP_SET_VALUE = 0x11,
				AE_CL_BODYGROUP_SET_VALUE_CMODEL_WPN = 0x12,
				AE_WEAPON_PERFORM_ATTACK = 0x13,
				AE_FIRE_INPUT = 0x14,
				AE_CL_CLOTH_ATTR = 0x15,
				AE_CL_CLOTH_GROUND_OFFSET = 0x16,
				AE_CL_CLOTH_STIFFEN = 0x17,
				AE_CL_CLOTH_EFFECT = 0x18,
				AE_CL_CREATE_ANIM_SCOPE_PROP = 0x19,
				AE_SV_IKLOCK = 0x1a,
				AE_PULSE_GRAPH = 0x1b,
				AE_PULSE_GRAPH_LOOKAT = 0x1c,
				AE_PULSE_GRAPH_AIMAT = 0x1d,
				AE_PULSE_GRAPH_IKLOCKLEFTARM = 0x1e,
				AE_PULSE_GRAPH_IKLOCKRIGHTARM = 0x1f,
				AE_DISABLE_PLATFORM = 0x20,
				AE_ENABLE_PLATFORM = 0x21,
				AE_ANIMGRAPH_SET_PARAM = 0x22,
				AE_CL_WEAPON_TRANSITION_INTO_HAND = 0x23,
				AE_CL_BODYGROUP_SET_TO_CLIP = 0x24,
				AE_CL_BODYGROUP_SET_TO_NEXTCLIP = 0x25,
				AE_SV_SHOW_SILENCER = 0x26,
				AE_SV_ATTACH_SILENCER_COMPLETE = 0x27,
				AE_SV_HIDE_SILENCER = 0x28,
				AE_SV_DETACH_SILENCER_COMPLETE = 0x29,
				AE_CL_EJECT_MAG = 0x2a,
				AE_WPN_COMPLETE_RELOAD = 0x2b,
				AE_WPN_HEALTHSHOT_INJECT = 0x2c,
				AE_CL_C4_SCREEN_TEXT = 0x2d,
				AE_GRENADE_THROW_COMPLETE = 0x2e,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class BreakableContentsType_t : std::uint32_t {
				BC_DEFAULT = 0x0,
				BC_EMPTY = 0x1,
				BC_PROP_GROUP_OVERRIDE = 0x2,
				BC_PARTICLE_SYSTEM_OVERRIDE = 0x3,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class EDestructiblePartDamagePassThroughType : std::uint32_t {
				Normal = 0x0,
				Absorb = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class PointWorldTextReorientMode_t : std::uint32_t {
				POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
				POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class ScriptedMoveTo_t : std::uint32_t {
				eWait = 0x0,
				eMoveWithGait = 0x3,
				eTeleport = 0x4,
				eWaitFacing = 0x5,
				// MPropertySuppressEnumerator
				eObsoleteBackCompat1 = 0x1,
				// MPropertySuppressEnumerator
				eObsoleteBackCompat2 = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class WeaponAttackType_t : std::uint32_t {
				eInvalid = 0xffffffff,
				ePrimary = 0x0,
				eSecondary = 0x1,
				eCount = 0x2,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class AnimLoopMode_t : std::uint32_t {
				// MPropertySuppressEnumerator
				ANIM_LOOP_MODE_INVALID = 0xffffffff,
				ANIM_LOOP_MODE_NOT_LOOPING = 0x0,
				ANIM_LOOP_MODE_LOOPING = 0x1,
				ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
				// MPropertySuppressEnumerator
				ANIM_LOOP_MODE_COUNT = 0x3,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x4
			enum class Class_T : std::uint32_t {
				CLASS_NONE = 0x0,
				CLASS_PLAYER = 0x1,
				CLASS_PLAYER_ALLY = 0x2,
				CLASS_BOMB = 0x3,
				CLASS_FOOT_CONTACT_SHADOW = 0x4,
				CLASS_WEAPON = 0x5,
				CLASS_WATER_SPLASHER = 0x6,
				CLASS_WEAPON_VIEWMODEL = 0x7,
				CLASS_DOOR = 0x8,
				NUM_CLASSIFY_CLASSES = 0x9,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class PreviewWeaponState : std::uint32_t {
				DROPPED = 0x0,
				HOLSTERED = 0x1,
				DEPLOYED = 0x2,
				PLANTED = 0x3,
				INSPECT = 0x4,
				ICON = 0x5,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class EProceduralRagdollWeightIndexPropagationMethod : std::uint32_t {
				Bone = 0x0,
				BoneAndChildren = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class CommandEntitySpecType_t : std::uint32_t {
				SPEC_SEARCH = 0x0,
				SPEC_TYPES_COUNT = 0x1,
			};
			// Enumerator count: 20
			// Alignment: 
			// Size: 0x4
			enum class CSWeaponType : std::uint32_t {
				WEAPONTYPE_KNIFE = 0x0,
				WEAPONTYPE_PISTOL = 0x1,
				WEAPONTYPE_SUBMACHINEGUN = 0x2,
				WEAPONTYPE_RIFLE = 0x3,
				WEAPONTYPE_SHOTGUN = 0x4,
				WEAPONTYPE_SNIPER_RIFLE = 0x5,
				WEAPONTYPE_MACHINEGUN = 0x6,
				WEAPONTYPE_C4 = 0x7,
				WEAPONTYPE_TASER = 0x8,
				WEAPONTYPE_GRENADE = 0x9,
				WEAPONTYPE_EQUIPMENT = 0xa,
				WEAPONTYPE_STACKABLEITEM = 0xb,
				WEAPONTYPE_FISTS = 0xc,
				WEAPONTYPE_BREACHCHARGE = 0xd,
				WEAPONTYPE_BUMPMINE = 0xe,
				WEAPONTYPE_TABLET = 0xf,
				WEAPONTYPE_MELEE = 0x10,
				WEAPONTYPE_SHIELD = 0x11,
				WEAPONTYPE_ZONE_REPULSOR = 0x12,
				WEAPONTYPE_UNKNOWN = 0x13,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class WeaponSwitchReason_t : std::uint32_t {
				eDrawn = 0x0,
				eEquipped = 0x1,
				eUserInitiatedSwitchToLast = 0x2,
				eUserInitiatedSwitchHands = 0x3,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x1
			enum class ShardSolid_t : std::uint8_t {
				SHARD_SOLID = 0,
				SHARD_DEBRIS = 1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class EntityPlatformTypes_t : std::uint8_t {
				ENTITY_NOT_PLATFORM = 0,
				ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 1,
				ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 2,
			};
			// Enumerator count: 13
			// Alignment: 
			// Size: 0x1
			enum class RenderMode_t : std::uint8_t {
				kRenderNormal = 0,
				kRenderTransColor = 1,
				kRenderTransTexture = 2,
				kRenderGlow = 3,
				kRenderTransAlpha = 4,
				kRenderTransAdd = 5,
				kRenderEnvironmental = 6,
				kRenderTransAddFrameBlend = 7,
				kRenderTransAlphaAdd = 8,
				kRenderWorldGlow = 9,
				kRenderNone = 10,
				kRenderDevVisualizer = 11,
				kRenderModeCount = 12,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class PerformanceMode_t : std::uint32_t {
				PM_NORMAL = 0x0,
				PM_NO_GIBS = 0x1,
				PM_FULL_GIBS = 0x2,
				PM_REDUCED_GIBS = 0x3,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ValueRemapperMomentumType_t : std::uint32_t {
				MomentumType_None = 0x0,
				MomentumType_Friction = 0x1,
				MomentumType_SpringTowardSnapValue = 0x2,
				MomentumType_SpringAwayFromSnapValue = 0x3,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class HierarchyType_t : std::uint32_t {
				HIERARCHY_NONE = 0x0,
				HIERARCHY_BONE_MERGE = 0x1,
				HIERARCHY_ATTACHMENT = 0x2,
				HIERARCHY_ABSORIGIN = 0x3,
				HIERARCHY_BONE = 0x4,
				HIERARCHY_TYPE_COUNT = 0x5,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x4
			enum class EInButtonState : std::uint32_t {
				IN_BUTTON_UP = 0x0,
				IN_BUTTON_DOWN = 0x1,
				IN_BUTTON_DOWN_UP = 0x2,
				IN_BUTTON_UP_DOWN = 0x3,
				IN_BUTTON_UP_DOWN_UP = 0x4,
				IN_BUTTON_DOWN_UP_DOWN = 0x5,
				IN_BUTTON_DOWN_UP_DOWN_UP = 0x6,
				IN_BUTTON_UP_DOWN_UP_DOWN = 0x7,
				IN_BUTTON_STATE_COUNT = 0x8,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class BeamClipStyle_t : std::uint32_t {
				kNOCLIP = 0x0,
				kGEOCLIP = 0x1,
				kMODELCLIP = 0x2,
				kBEAMCLIPSTYLE_NUMBITS = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class CSWeaponState_t : std::uint32_t {
				WEAPON_NOT_CARRIED = 0x0,
				WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
				WEAPON_IS_ACTIVE = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ScriptedOnDeath_t : std::uint32_t {
				SS_ONDEATH_NOT_APPLICABLE = 0xffffffff,
				SS_ONDEATH_UNDEFINED = 0x0,
				SS_ONDEATH_RAGDOLL = 0x1,
				SS_ONDEATH_ANIMATED_DEATH = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class CommandExecMode_t : std::uint32_t {
				EXEC_MANUAL = 0x0,
				EXEC_LEVELSTART = 0x1,
				EXEC_PERIODIC = 0x2,
				EXEC_MODES_COUNT = 0x3,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x1
			enum class ShatterDamageCause : std::uint8_t {
				SHATTERDAMAGE_BULLET = 0,
				SHATTERDAMAGE_MELEE = 1,
				SHATTERDAMAGE_THROWN = 2,
				SHATTERDAMAGE_SCRIPT = 3,
				SHATTERDAMAGE_EXPLOSIVE = 4,
			};
			// Enumerator count: 17
			// Alignment: 
			// Size: 0x4
			enum class gear_slot_t : std::uint32_t {
				GEAR_SLOT_INVALID = 0xffffffff,
				GEAR_SLOT_RIFLE = 0x0,
				GEAR_SLOT_PISTOL = 0x1,
				GEAR_SLOT_KNIFE = 0x2,
				GEAR_SLOT_GRENADES = 0x3,
				GEAR_SLOT_C4 = 0x4,
				GEAR_SLOT_RESERVED_SLOT6 = 0x5,
				GEAR_SLOT_RESERVED_SLOT7 = 0x6,
				GEAR_SLOT_RESERVED_SLOT8 = 0x7,
				GEAR_SLOT_RESERVED_SLOT9 = 0x8,
				GEAR_SLOT_RESERVED_SLOT10 = 0x9,
				GEAR_SLOT_RESERVED_SLOT11 = 0xa,
				GEAR_SLOT_BOOSTS = 0xb,
				GEAR_SLOT_UTILITY = 0xc,
				GEAR_SLOT_COUNT = 0xd,
				GEAR_SLOT_FIRST = 0x0,
				GEAR_SLOT_LAST = 0xc,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ChoreoLookAtSpeed_t : std::uint32_t {
				// MPropertySuppressEnumerator
				eInvalid = 0xffffffff,
				// MPropertyFriendlyName "Slow"
				eSlow = 0x0,
				// MPropertyFriendlyName "Medium"
				eMedium = 0x1,
				// MPropertyFriendlyName "Fast"
				eFast = 0x2,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class ObserverMode_t : std::uint32_t {
				OBS_MODE_NONE = 0x0,
				OBS_MODE_FIXED = 0x1,
				OBS_MODE_IN_EYE = 0x2,
				OBS_MODE_CHASE = 0x3,
				OBS_MODE_ROAMING = 0x4,
				OBS_MODE_DIRECTED = 0x5,
				NUM_OBSERVER_MODES = 0x6,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x4
			enum class CSPlayerState : std::uint32_t {
				STATE_ACTIVE = 0x0,
				STATE_WELCOME = 0x1,
				STATE_PICKINGTEAM = 0x2,
				STATE_PICKINGCLASS = 0x3,
				STATE_DEATH_ANIM = 0x4,
				STATE_DEATH_WAIT_FOR_KEY = 0x5,
				STATE_OBSERVER_MODE = 0x6,
				STATE_GUNGAME_RESPAWN = 0x7,
				STATE_DORMANT = 0x8,
				NUM_PLAYER_STATES = 0x9,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x1
			enum class WaterLevel_t : std::uint8_t {
				WL_NotInWater = 0,
				WL_Feet = 1,
				WL_Knees = 2,
				WL_Waist = 3,
				WL_Chest = 4,
				WL_FullyUnderwater = 5,
				WL_Count = 6,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class AmmoPosition_t : std::uint32_t {
				AMMO_POSITION_INVALID = 0xffffffff,
				AMMO_POSITION_PRIMARY = 0x0,
				AMMO_POSITION_SECONDARY = 0x1,
				AMMO_POSITION_COUNT = 0x2,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x4
			enum class CDebugOverlayFilterType_t : std::uint32_t {
				NONE = 0x0,
				TEXT = 0x1,
				ENTITY = 0x2,
				COUNT = 0x3,
				TACTICAL_SEARCH = 0x4,
				AI_SCHEDULE = 0x5,
				AI_TASK = 0x6,
				AI_EVENT = 0x7,
				END_SIM_HISTORY_TYPES = 0x8,
				COMBINED = 0xffffffff,
			};
			// Enumerator count: 23
			// Alignment: 
			// Size: 0x4
			enum class PreviewEOMCelebration : std::uint32_t {
				WALKUP = 0x0,
				PUNCHING = 0x1,
				SWAGGER = 0x2,
				DROPDOWN = 0x3,
				STRETCH = 0x4,
				SWAT_FEMALE = 0x5,
				MASK_F = 0x6,
				GUERILLA = 0x7,
				GUERILLA02 = 0x8,
				GENDARMERIE = 0x9,
				SCUBA_FEMALE = 0xa,
				SCUBA_MALE = 0xb,
				AVA_DEFEAT = 0xc,
				GENDARMERIE_DEFEAT = 0xd,
				MAE_DEFEAT = 0xe,
				RICKSAW_DEFEAT = 0xf,
				SCUBA_FEMALE_DEFEAT = 0x10,
				SCUBA_MALE_DEFEAT = 0x11,
				CRASSWATER_DEFEAT = 0x12,
				DARRYL_DEFEAT = 0x13,
				DOCTOR_DEFEAT = 0x14,
				MUHLIK_DEFEAT = 0x15,
				VYPA_DEFEAT = 0x16,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class CompositeMaterialInputContainerSourceType_t : std::uint32_t {
				// MPropertyFriendlyName "Target Material"
				CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
				// MPropertyFriendlyName "Material from Target Material Attr"
				CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
				// MPropertyFriendlyName "Specified Material"
				CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
				// MPropertyFriendlyName "Loose Variables"
				CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
				// MPropertyFriendlyName "Variable from Target Material Attr"
				CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
				// MPropertyFriendlyName "Target Instance Material"
				CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5,
			};
			// Enumerator count: 27
			// Alignment: 
			// Size: 0x4
			enum class RumbleEffect_t : std::uint32_t {
				RUMBLE_INVALID = 0xffffffff,
				// MPropertySuppressEnumerator
				RUMBLE_STOP_ALL = 0x0,
				RUMBLE_PISTOL = 0x1,
				RUMBLE_357 = 0x2,
				RUMBLE_SMG1 = 0x3,
				RUMBLE_AR2 = 0x4,
				RUMBLE_SHOTGUN_SINGLE = 0x5,
				RUMBLE_SHOTGUN_DOUBLE = 0x6,
				RUMBLE_AR2_ALT_FIRE = 0x7,
				RUMBLE_RPG_MISSILE = 0x8,
				RUMBLE_CROWBAR_SWING = 0x9,
				RUMBLE_AIRBOAT_GUN = 0xa,
				RUMBLE_JEEP_ENGINE_LOOP = 0xb,
				RUMBLE_FLAT_LEFT = 0xc,
				RUMBLE_FLAT_RIGHT = 0xd,
				RUMBLE_FLAT_BOTH = 0xe,
				RUMBLE_DMG_LOW = 0xf,
				RUMBLE_DMG_MED = 0x10,
				RUMBLE_DMG_HIGH = 0x11,
				RUMBLE_FALL_LONG = 0x12,
				RUMBLE_FALL_SHORT = 0x13,
				RUMBLE_PHYSCANNON_OPEN = 0x14,
				RUMBLE_PHYSCANNON_PUNT = 0x15,
				RUMBLE_PHYSCANNON_LOW = 0x16,
				RUMBLE_PHYSCANNON_MEDIUM = 0x17,
				RUMBLE_PHYSCANNON_HIGH = 0x18,
				// MPropertySuppressEnumerator
				NUM_RUMBLE_EFFECTS = 0x19,
			};
			// Enumerator count: 21
			// Alignment: 
			// Size: 0x8
			enum class InputBitMask_t : std::uint64_t {
				// MEnumeratorIsNotAFlag
				IN_NONE = 0x0,
				// MEnumeratorIsNotAFlag
				IN_ALL = 0xffffffffffffffff,
				IN_ATTACK = 0x1,
				IN_JUMP = 0x2,
				IN_DUCK = 0x4,
				IN_FORWARD = 0x8,
				IN_BACK = 0x10,
				IN_USE = 0x20,
				IN_TURNLEFT = 0x80,
				IN_TURNRIGHT = 0x100,
				IN_MOVELEFT = 0x200,
				IN_MOVERIGHT = 0x400,
				IN_ATTACK2 = 0x800,
				IN_RELOAD = 0x2000,
				IN_SPEED = 0x10000,
				IN_JOYAUTOSPRINT = 0x20000,
				// MEnumeratorIsNotAFlag
				IN_FIRST_MOD_SPECIFIC_BIT = 0x100000000,
				IN_USEORRELOAD = 0x100000000,
				IN_SCORE = 0x200000000,
				IN_ZOOM = 0x400000000,
				IN_LOOK_AT_WEAPON = 0x800000000,
			};
			// Enumerator count: 14
			// Alignment: 
			// Size: 0x4
			enum class HitGroup_t : std::uint32_t {
				HITGROUP_INVALID = 0xffffffff,
				HITGROUP_GENERIC = 0x0,
				HITGROUP_HEAD = 0x1,
				HITGROUP_CHEST = 0x2,
				HITGROUP_STOMACH = 0x3,
				HITGROUP_LEFTARM = 0x4,
				HITGROUP_RIGHTARM = 0x5,
				HITGROUP_LEFTLEG = 0x6,
				HITGROUP_RIGHTLEG = 0x7,
				HITGROUP_NECK = 0x8,
				HITGROUP_UNUSED = 0x9,
				HITGROUP_GEAR = 0xa,
				HITGROUP_SPECIAL = 0xb,
				HITGROUP_COUNT = 0xc,
			};
			// Enumerator count: 40
			// Alignment: 
			// Size: 0x8
			enum class DebugOverlayBits_t : std::uint64_t {
				// MPropertyFriendlyName "Ent Text"
				// MPropertyDescription "show text debug overlay for this entity"
				OVERLAY_TEXT_BIT = 0x1,
				// MPropertyFriendlyName "Name"
				// MPropertyDescription "show name debug overlay for this entity"
				OVERLAY_NAME_BIT = 0x2,
				// MPropertyFriendlyName "Bounding Box"
				// MPropertyDescription "show bounding box overlay for this entity"
				OVERLAY_BBOX_BIT = 0x4,
				// MPropertyFriendlyName "Pivot"
				// MPropertyDescription "show pivot for this entity"
				OVERLAY_PIVOT_BIT = 0x8,
				// MPropertyFriendlyName "Message"
				// MPropertyDescription "TODO show messages for this entity"
				OVERLAY_MESSAGE_BIT = 0x10,
				// MPropertyFriendlyName "ABS BBox"
				// MPropertyDescription "show abs bounding box overlay"
				OVERLAY_ABSBOX_BIT = 0x20,
				// MPropertyFriendlyName "RBox"
				// MPropertyDescription "show the rbox overlay"
				OVERLAY_RBOX_BIT = 0x40,
				// MPropertyFriendlyName "Entities That Block LOS"
				// MPropertyDescription "TODO show entities that block NPC LOS"
				OVERLAY_SHOW_BLOCKSLOS = 0x80,
				// MPropertyFriendlyName "Attachment Points"
				// MPropertyDescription "show attachment points"
				OVERLAY_ATTACHMENTS_BIT = 0x100,
				// MPropertyFriendlyName "Interpolated Attachment Points"
				// MPropertyDescription "show interpolated attachment points"
				OVERLAY_INTERPOLATED_ATTACHMENTS_BIT = 0x200,
				// MPropertyFriendlyName "Interpolated Pivot"
				// MPropertyDescription "show interpolated pivot for this entity"
				OVERLAY_INTERPOLATED_PIVOT_BIT = 0x400,
				// MPropertyFriendlyName "Skeleton"
				// MPropertyDescription "show skeleton for this entity"
				OVERLAY_SKELETON_BIT = 0x800,
				// MPropertyFriendlyName "Interpolated Skeleton"
				// MPropertyDescription "show interpolated skeleton"
				OVERLAY_INTERPOLATED_SKELETON_BIT = 0x1000,
				// MPropertyFriendlyName "Trigger Bounds"
				// MPropertyDescription "show trigger bounds"
				OVERLAY_TRIGGER_BOUNDS_BIT = 0x2000,
				// MPropertyFriendlyName "Hitboxes"
				// MPropertyDescription "show hitboxes for this entity"
				OVERLAY_HITBOX_BIT = 0x4000,
				// MPropertyFriendlyName "Interpolated Hitboxes"
				// MPropertyDescription "show interpolated hitboxes"
				OVERLAY_INTERPOLATED_HITBOX_BIT = 0x8000,
				// MPropertyFriendlyName "Autoaim Radius"
				// MPropertyDescription "TODO Display autoaim radius"
				OVERLAY_AUTOAIM_BIT = 0x10000,
				// MPropertyFriendlyName "NPC Selected"
				// MPropertyDescription "TODO the npc is current selected SOURCE2_UNSUPPORTED?"
				OVERLAY_NPC_SELECTED_BIT = 0x20000,
				// MPropertyFriendlyName "Joint Info"
				// MPropertyDescription "hows joint info for this entity"
				OVERLAY_JOINT_INFO_BIT = 0x40000,
				// MPropertyFriendlyName "NPC Route"
				// MPropertyDescription "draw the route for this npc"
				OVERLAY_NPC_ROUTE_BIT = 0x80000,
				OVERLAY_VISIBILITY_TRACES_BIT = 0x100000,
				// MPropertyFriendlyName "NPC Enemies"
				// MPropertyDescription "show npc's enemies"
				OVERLAY_NPC_ENEMIES_BIT = 0x400000,
				// MPropertyFriendlyName "NPC Conditions"
				// MPropertyDescription "show NPC's current conditions"
				OVERLAY_NPC_CONDITIONS_BIT = 0x800000,
				// MPropertyFriendlyName "NPC Combat"
				// MPropertyDescription "show npc combat related information (squads/slots/etc)"
				OVERLAY_NPC_COMBAT_BIT = 0x1000000,
				// MPropertyFriendlyName "NPC Schedule Tasks"
				// MPropertyDescription "show npc schedule task details"
				OVERLAY_NPC_TASK_BIT = 0x2000000,
				// MPropertyFriendlyName "NPC Body Locations"
				// MPropertyDescription "show npc body locations"
				OVERLAY_NPC_BODYLOCATIONS = 0x4000000,
				// MPropertyFriendlyName "NPC View Conde"
				// MPropertyDescription "show npc's viewcone"
				OVERLAY_NPC_VIEWCONE_BIT = 0x8000000,
				// MPropertyFriendlyName "NPC Kill"
				// MPropertyDescription "kill the NPC, running all appropriate AI."
				OVERLAY_NPC_KILL_BIT = 0x10000000,
				// MPropertyFriendlyName "OVERLAY_WC_CHANGE_ENTITY"
				// MPropertyDescription "object changed during WC edit (probably unused)"
				OVERLAY_WC_CHANGE_ENTITY = 0x20000000,
				// MPropertyFriendlyName "Buddha Mode"
				// MPropertyDescription "TODO take damage but don't die"
				OVERLAY_BUDDHA_MODE = 0x40000000,
				// MPropertyFriendlyName "NPC Steering"
				// MPropertyDescription "Show the steering regulations associated with the NPC"
				OVERLAY_NPC_STEERING_REGULATIONS = 0x80000000,
				// MPropertyFriendlyName "NPC Task Console Text"
				// MPropertyDescription "show task and schedule names when they start"
				OVERLAY_NPC_TASK_TEXT_BIT = 0x100000000,
				// MPropertyFriendlyName "Prop Debug"
				// MPropertyDescription "Show prop health and bounds"
				OVERLAY_PROP_DEBUG = 0x200000000,
				// MPropertyFriendlyName "NPC Relationships"
				// MPropertyDescription "show relationships between target and all children"
				OVERLAY_NPC_RELATION_BIT = 0x400000000,
				// MPropertyFriendlyName "View Offset"
				// MPropertyDescription "TODO show view offset"
				OVERLAY_VIEWOFFSET = 0x800000000,
				// MPropertyFriendlyName "Collision Wireframe"
				// MPropertyDescription "show collision wireframe"
				OVERLAY_VCOLLIDE_WIREFRAME_BIT = 0x1000000000,
				// MPropertyFriendlyName "NPC Scripted Commands"
				// MPropertyDescription "show the state of scripted commands"
				OVERLAY_NPC_SCRIPTED_COMMANDS_BIT = 0x2000000000,
				// MPropertyFriendlyName "Actor Name"
				// MPropertyDescription "show fancy actor name over head of actors (entities which return ShouldDisplayInActorNames() == true)"
				OVERLAY_ACTORNAME_BIT = 0x4000000000,
				// MPropertyFriendlyName "NPC Gather Conditions"
				// MPropertyDescription "show condition gathering text info"
				OVERLAY_NPC_CONDITIONS_TEXT_BIT = 0x8000000000,
				// MPropertyFriendlyName "NPC Ability Ranges"
				// MPropertyDescription "draw range indicators for all abilities on the NPC"
				OVERLAY_NPC_ABILITY_RANGE_DEBUG_BIT = 0x10000000000,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class AmmoFlags_t : std::uint32_t {
				AMMO_FORCE_DROP_IF_CARRIED = 0x1,
				AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
				// MPropertySuppressEnumerator
				// MEnumeratorIsNotAFlag
				AMMO_FLAG_MAX = 0x2,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class BeamType_t : std::uint32_t {
				BEAM_INVALID = 0x0,
				BEAM_POINTS = 0x1,
				BEAM_ENTPOINT = 0x2,
				BEAM_ENTS = 0x3,
				BEAM_HOSE = 0x4,
				BEAM_SPLINE = 0x5,
				BEAM_LASER = 0x6,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class EntitySubclassScope_t : std::uint32_t {
				SUBCLASS_SCOPE_NONE = 0xffffffff,
				// MPropertyFriendlyName "Precipitation"
				// MEntitySubclassScopeFile
				SUBCLASS_SCOPE_PRECIPITATION = 0x0,
				// MPropertyFriendlyName "PlayerWeapon"
				// MEntitySubclassScopeFile
				SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x1,
				SUBCLASS_SCOPE_COUNT = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ShadowType_t : std::uint32_t {
				SHADOWS_NONE = 0x0,
				SHADOWS_SIMPLE = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class CDebugOverlayCombinedTypes_t : std::uint32_t {
				ALL = 0x0,
				ANY = 0x1,
				COUNT = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class CompositeMaterialVarSystemVar_t : std::uint32_t {
				// MPropertyFriendlyName "Composite Generation Time"
				COMPMATSYSVAR_COMPOSITETIME = 0x0,
				// MPropertyFriendlyName "Empty Resource Spacer"
				COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x1
			enum class ShatterGlassStressType : std::uint8_t {
				SHATTERGLASS_BLUNT = 0,
				SHATTERGLASS_BALLISTIC = 1,
				SHATTERGLASS_PULSE = 2,
				SHATTERGLASS_EXPLOSIVE = 3,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ValueRemapperRatchetType_t : std::uint32_t {
				RatchetType_Absolute = 0x0,
				RatchetType_EachEngage = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class CRR_Response_ResponseEnum_t : std::uint32_t {
				MAX_RESPONSE_NAME = 0xc0,
				MAX_RULE_NAME = 0x80,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class MoveMountingAmount_t : std::uint32_t {
				MOVE_MOUNT_NONE = 0x0,
				MOVE_MOUNT_LOW = 0x1,
				MOVE_MOUNT_HIGH = 0x2,
				MOVE_MOUNT_MAXCOUNT = 0x3,
			};
			// Enumerator count: 20
			// Alignment: 
			// Size: 0x1
			enum class RenderFx_t : std::uint8_t {
				kRenderFxNone = 0,
				kRenderFxPulseSlow = 1,
				kRenderFxPulseFast = 2,
				kRenderFxPulseSlowWide = 3,
				kRenderFxPulseFastWide = 4,
				kRenderFxFadeSlow = 5,
				kRenderFxFadeFast = 6,
				kRenderFxSolidSlow = 7,
				kRenderFxSolidFast = 8,
				kRenderFxStrobeSlow = 9,
				kRenderFxStrobeFast = 10,
				kRenderFxStrobeFaster = 11,
				kRenderFxFlickerSlow = 12,
				kRenderFxFlickerFast = 13,
				kRenderFxNoDissipation = 14,
				kRenderFxFadeOut = 15,
				kRenderFxFadeIn = 16,
				kRenderFxPulseFastWider = 17,
				kRenderFxGlowShell = 18,
				kRenderFxMax = 19,
			};
			// Enumerator count: 35
			// Alignment: 
			// Size: 0x4
			enum class vote_create_failed_t : std::uint32_t {
				VOTE_FAILED_GENERIC = 0x0,
				VOTE_FAILED_TRANSITIONING_PLAYERS = 0x1,
				VOTE_FAILED_RATE_EXCEEDED = 0x2,
				VOTE_FAILED_YES_MUST_EXCEED_NO = 0x3,
				VOTE_FAILED_QUORUM_FAILURE = 0x4,
				VOTE_FAILED_ISSUE_DISABLED = 0x5,
				VOTE_FAILED_MAP_NOT_FOUND = 0x6,
				VOTE_FAILED_MAP_NAME_REQUIRED = 0x7,
				VOTE_FAILED_FAILED_RECENTLY = 0x8,
				VOTE_FAILED_TEAM_CANT_CALL = 0x9,
				VOTE_FAILED_WAITINGFORPLAYERS = 0xa,
				VOTE_FAILED_PLAYERNOTFOUND = 0xb,
				VOTE_FAILED_CANNOT_KICK_ADMIN = 0xc,
				VOTE_FAILED_SCRAMBLE_IN_PROGRESS = 0xd,
				VOTE_FAILED_SPECTATOR = 0xe,
				VOTE_FAILED_FAILED_RECENT_KICK = 0xf,
				VOTE_FAILED_FAILED_RECENT_CHANGEMAP = 0x10,
				VOTE_FAILED_FAILED_RECENT_SWAPTEAMS = 0x11,
				VOTE_FAILED_FAILED_RECENT_SCRAMBLETEAMS = 0x12,
				VOTE_FAILED_FAILED_RECENT_RESTART = 0x13,
				VOTE_FAILED_SWAP_IN_PROGRESS = 0x14,
				VOTE_FAILED_DISABLED = 0x15,
				VOTE_FAILED_NEXTLEVEL_SET = 0x16,
				VOTE_FAILED_TOO_EARLY_SURRENDER = 0x17,
				VOTE_FAILED_MATCH_PAUSED = 0x18,
				VOTE_FAILED_MATCH_NOT_PAUSED = 0x19,
				VOTE_FAILED_NOT_IN_WARMUP = 0x1a,
				VOTE_FAILED_NOT_10_PLAYERS = 0x1b,
				VOTE_FAILED_TIMEOUT_ACTIVE = 0x1c,
				VOTE_FAILED_TIMEOUT_INACTIVE = 0x1d,
				VOTE_FAILED_TIMEOUT_EXHAUSTED = 0x1e,
				VOTE_FAILED_CANT_ROUND_END = 0x1f,
				VOTE_FAILED_REMATCH = 0x20,
				VOTE_FAILED_CONTINUE = 0x21,
				VOTE_FAILED_MAX = 0x22,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class LatchDirtyPermission_t : std::uint32_t {
				LATCH_DIRTY_DISALLOW = 0x0,
				LATCH_DIRTY_SERVER_CONTROLLED = 0x1,
				LATCH_DIRTY_CLIENT_SIMULATED = 0x2,
				LATCH_DIRTY_PREDICTION = 0x3,
				LATCH_DIRTY_FRAMESIMULATE = 0x4,
				LATCH_DIRTY_PARTICLE_SIMULATE = 0x5,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ChoreoLookAtMode_t : std::uint32_t {
				// MPropertySuppressEnumerator
				eInvalid = 0xffffffff,
				// MPropertyFriendlyName "Chest"
				eChest = 0x0,
				// MPropertyFriendlyName "Head"
				eHead = 0x1,
				// MPropertyFriendlyName "Eyes"
				eEyesOnly = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ChatIgnoreType_t : std::uint32_t {
				CHAT_IGNORE_NONE = 0x0,
				CHAT_IGNORE_ALL = 0x1,
				CHAT_IGNORE_TEAM = 0x2,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class PlayerConnectedState : std::uint32_t {
				PlayerNeverConnected = 0xffffffff,
				PlayerConnected = 0x0,
				PlayerConnecting = 0x1,
				PlayerReconnecting = 0x2,
				PlayerDisconnecting = 0x3,
				PlayerDisconnected = 0x4,
				PlayerReserved = 0x5,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x1
			enum class SolidType_t : std::uint8_t {
				SOLID_NONE = 0,
				SOLID_BSP = 1,
				SOLID_BBOX = 2,
				SOLID_OBB = 3,
				SOLID_SPHERE = 4,
				SOLID_POINT = 5,
				SOLID_VPHYSICS = 6,
				SOLID_CAPSULE = 7,
				SOLID_LAST = 8,
			};
			// Enumerator count: 24
			// Alignment: 
			// Size: 0x4
			enum class DamageTypes_t : std::uint32_t {
				DMG_GENERIC = 0x0,
				DMG_CRUSH = 0x1,
				DMG_BULLET = 0x2,
				DMG_SLASH = 0x4,
				DMG_BURN = 0x8,
				DMG_VEHICLE = 0x10,
				DMG_FALL = 0x20,
				DMG_BLAST = 0x40,
				DMG_CLUB = 0x80,
				DMG_SHOCK = 0x100,
				DMG_SONIC = 0x200,
				DMG_ENERGYBEAM = 0x400,
				DMG_DROWN = 0x4000,
				DMG_POISON = 0x8000,
				DMG_RADIATION = 0x10000,
				DMG_DROWNRECOVER = 0x20000,
				DMG_ACID = 0x40000,
				DMG_PHYSGUN = 0x100000,
				DMG_DISSOLVE = 0x200000,
				DMG_BLAST_SURFACE = 0x400000,
				DMG_BUCKSHOT = 0x1000000,
				// MPropertySuppressEnumerator
				// MEnumeratorIsNotAFlag
				DMG_LASTGENERICFLAG = 0x1000000,
				DMG_HEADSHOT = 0x2000000,
				DMG_DANGERZONE = 0x4000000,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class PointWorldTextJustifyVertical_t : std::uint32_t {
				POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
				POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
				POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class attributeprovidertypes_t : std::uint32_t {
				PROVIDER_GENERIC = 0x0,
				PROVIDER_WEAPON = 0x1,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x1
			enum class MoveCollide_t : std::uint8_t {
				MOVECOLLIDE_DEFAULT = 0,
				MOVECOLLIDE_FLY_BOUNCE = 1,
				MOVECOLLIDE_FLY_CUSTOM = 2,
				MOVECOLLIDE_FLY_SLIDE = 3,
				MOVECOLLIDE_COUNT = 4,
				MOVECOLLIDE_MAX_BITS = 3,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class ShakeCommand_t : std::uint32_t {
				SHAKE_START = 0x0,
				SHAKE_STOP = 0x1,
				SHAKE_AMPLITUDE = 0x2,
				SHAKE_FREQUENCY = 0x3,
				SHAKE_START_RUMBLEONLY = 0x4,
				SHAKE_START_NORUMBLE = 0x5,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class IChoreoServices_ChoreoState_t : std::uint32_t {
				STATE_PRE_SCRIPT = 0x0,
				STATE_WAIT_FOR_SCRIPT = 0x1,
				STATE_WALK_TO_MARK = 0x2,
				STATE_SYNCHRONIZE_SCRIPT = 0x3,
				STATE_PLAY_SCRIPT = 0x4,
				STATE_PLAY_SCRIPT_POST_IDLE = 0x5,
				STATE_PLAY_SCRIPT_POST_IDLE_DONE = 0x6,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ValueRemapperOutputType_t : std::uint32_t {
				OutputType_AnimationCycle = 0x0,
				OutputType_RotationX = 0x1,
				OutputType_RotationY = 0x2,
				OutputType_RotationZ = 0x3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class PointTemplateOwnerSpawnGroupType_t : std::uint32_t {
				INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
				INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
				INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class EContributionScoreFlag_t : std::uint8_t {
				k_EContributionScoreFlag_Default = 0,
				k_EContributionScoreFlag_Objective = 1,
				k_EContributionScoreFlag_Bullets = 2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class EntityDistanceMode_t : std::uint32_t {
				eOriginToOrigin = 0x0,
				eCenterToCenter = 0x1,
				eAxisToAxis = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class PointWorldTextJustifyHorizontal_t : std::uint32_t {
				POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0x0,
				POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
				POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class BrushSolidities_e : std::uint32_t {
				BRUSHSOLID_TOGGLE = 0x0,
				BRUSHSOLID_NEVER = 0x1,
				BRUSHSOLID_ALWAYS = 0x2,
			};
			// Enumerator count: 13
			// Alignment: 
			// Size: 0x4
			enum class QuestProgress_Reason : std::uint32_t {
				QUEST_NONINITIALIZED = 0x0,
				QUEST_OK = 0x1,
				QUEST_NOT_ENOUGH_PLAYERS = 0x2,
				QUEST_WARMUP = 0x3,
				QUEST_NOT_CONNECTED_TO_STEAM = 0x4,
				QUEST_NONOFFICIAL_SERVER = 0x5,
				QUEST_NO_ENTITLEMENT = 0x6,
				QUEST_NO_QUEST = 0x7,
				QUEST_PLAYER_IS_BOT = 0x8,
				QUEST_WRONG_MAP = 0x9,
				QUEST_WRONG_MODE = 0xa,
				QUEST_NOT_SYNCED_WITH_SERVER = 0xb,
				QUEST_REASON_MAX = 0xc,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ModifyDamageReturn_t : std::uint32_t {
				CONTINUE_TO_APPLY_DAMAGE = 0x0,
				ABORT_DO_NOT_APPLY_DAMAGE = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class CompMatPropertyMutatorConditionType_t : std::uint32_t {
				// MPropertyFriendlyName "Input Container Exists"
				COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
				// MPropertyFriendlyName "Input Container Variable Exists"
				COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
				// MPropertyFriendlyName "Input Container Variable Exists and Equals"
				COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ScriptedHeldWeaponBehavior_t : std::uint32_t {
				eInvalid = 0xffffffff,
				eHolster = 0x0,
				eDeploy = 0x1,
				eDrop = 0x2,
			};
			// Enumerator count: 8
			// Alignment: 
			// Size: 0x4
			enum class GrenadeType_t : std::uint32_t {
				GRENADE_TYPE_EXPLOSIVE = 0x0,
				GRENADE_TYPE_FLASH = 0x1,
				GRENADE_TYPE_FIRE = 0x2,
				GRENADE_TYPE_DECOY = 0x3,
				GRENADE_TYPE_SMOKE = 0x4,
				GRENADE_TYPE_SENSOR = 0x5,
				GRENADE_TYPE_SNOWBALL = 0x6,
				GRENADE_TYPE_TOTAL = 0x7,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ValueRemapperInputType_t : std::uint32_t {
				InputType_PlayerShootPosition = 0x0,
				InputType_PlayerShootPositionAroundAxis = 0x1,
			};
			// Enumerator count: 8
			// Alignment: 
			// Size: 0x1
			enum class EKillTypes_t : std::uint8_t {
				KILL_NONE = 0,
				KILL_DEFAULT = 1,
				KILL_HEADSHOT = 2,
				KILL_BLAST = 3,
				KILL_BURN = 4,
				KILL_SLASH = 5,
				KILL_SHOCK = 6,
				KILLTYPE_COUNT = 7,
			};
			// Enumerator count: 25
			// Alignment: 
			// Size: 0x4
			enum class WeaponSound_t : std::uint32_t {
				WEAPON_SOUND_EMPTY = 0x0,
				WEAPON_SOUND_SECONDARY_EMPTY = 0x1,
				WEAPON_SOUND_SINGLE = 0x2,
				WEAPON_SOUND_SECONDARY_ATTACK = 0x3,
				WEAPON_SOUND_MELEE_MISS = 0x4,
				WEAPON_SOUND_MELEE_HIT = 0x5,
				WEAPON_SOUND_MELEE_HIT_WORLD = 0x6,
				WEAPON_SOUND_MELEE_HIT_PLAYER = 0x7,
				WEAPON_SOUND_MELEE_HIT_NPC = 0x8,
				WEAPON_SOUND_SPECIAL1 = 0x9,
				WEAPON_SOUND_SPECIAL2 = 0xa,
				WEAPON_SOUND_SPECIAL3 = 0xb,
				WEAPON_SOUND_NEARLYEMPTY = 0xc,
				WEAPON_SOUND_IMPACT = 0xd,
				WEAPON_SOUND_REFLECT = 0xe,
				WEAPON_SOUND_SECONDARY_IMPACT = 0xf,
				WEAPON_SOUND_SECONDARY_REFLECT = 0x10,
				WEAPON_SOUND_RELOAD = 0x11,
				WEAPON_SOUND_SINGLE_ACCURATE = 0x12,
				WEAPON_SOUND_ZOOM_IN = 0x13,
				WEAPON_SOUND_ZOOM_OUT = 0x14,
				WEAPON_SOUND_MOUSE_PRESSED = 0x15,
				WEAPON_SOUND_DROP = 0x16,
				WEAPON_SOUND_RADIO_USE = 0x17,
				// MPropertySuppressEnumerator
				WEAPON_SOUND_NUM_TYPES = 0x18,
			};
			// Enumerator count: 17
			// Alignment: 
			// Size: 0x8
			enum class TakeDamageFlags_t : std::uint64_t {
				DFLAG_NONE = 0x0,
				DFLAG_SUPPRESS_HEALTH_CHANGES = 0x1,
				DFLAG_SUPPRESS_PHYSICS_FORCE = 0x2,
				DFLAG_SUPPRESS_EFFECTS = 0x4,
				DFLAG_PREVENT_DEATH = 0x8,
				DFLAG_FORCE_DEATH = 0x10,
				DFLAG_ALWAYS_GIB = 0x20,
				DFLAG_NEVER_GIB = 0x40,
				DFLAG_REMOVE_NO_RAGDOLL = 0x80,
				DFLAG_SUPPRESS_DAMAGE_MODIFICATION = 0x100,
				DFLAG_ALWAYS_FIRE_DAMAGE_EVENTS = 0x200,
				DFLAG_RADIUS_DMG = 0x400,
				DFLAG_FORCEREDUCEARMOR_DMG = 0x800,
				DFLAG_SUPPRESS_INTERRUPT_FLINCH = 0x1000,
				// MPropertySuppressEnumerator
				// MEnumeratorIsNotAFlag
				DMG_LASTDFLAG = 0x1000,
				DFLAG_IGNORE_ARMOR = 0x2000,
				DFLAG_SUPPRESS_UTILREMOVE = 0x4000,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ValueRemapperHapticsType_t : std::uint32_t {
				HaticsType_Default = 0x0,
				HaticsType_None = 0x1,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x4
			enum class Disposition_t : std::uint32_t {
				D_ER = 0x0,
				D_HT = 0x1,
				D_FR = 0x2,
				D_LI = 0x3,
				D_NU = 0x4,
				D_ERROR = 0x0,
				D_HATE = 0x1,
				D_FEAR = 0x2,
				D_LIKE = 0x3,
				D_NEUTRAL = 0x4,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class CanPlaySequence_t : std::uint32_t {
				CANNOT_PLAY = 0x0,
				CAN_PLAY_NOW = 0x1,
				CAN_PLAY_ENQUEUED = 0x2,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class MedalRank_t : std::uint32_t {
				MEDAL_RANK_NONE = 0x0,
				MEDAL_RANK_BRONZE = 0x1,
				MEDAL_RANK_SILVER = 0x2,
				MEDAL_RANK_GOLD = 0x3,
				MEDAL_RANK_COUNT = 0x4,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class CompositeMaterialMatchFilterType_t : std::uint32_t {
				// MPropertyFriendlyName "Target Material Attribute Exists"
				MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
				// MPropertyFriendlyName "Target Material Shader Name"
				MATCH_FILTER_MATERIAL_SHADER = 0x1,
				// MPropertyFriendlyName "Target Material Name SubStr"
				MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
				// MPropertyFriendlyName "Target Material Attribute Equals"
				MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
				// MPropertyFriendlyName "Target Material Property Exists"
				MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
				// MPropertyFriendlyName "Target Material Property Equals"
				MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5,
			};
			// Enumerator count: 14
			// Alignment: 
			// Size: 0x1
			enum class MoveType_t : std::uint8_t {
				MOVETYPE_NONE = 0,
				MOVETYPE_OBSOLETE = 1,
				MOVETYPE_WALK = 2,
				MOVETYPE_FLY = 3,
				MOVETYPE_FLYGRAVITY = 4,
				MOVETYPE_VPHYSICS = 5,
				MOVETYPE_PUSH = 6,
				MOVETYPE_NOCLIP = 7,
				MOVETYPE_OBSERVER = 8,
				MOVETYPE_LADDER = 9,
				MOVETYPE_CUSTOM = 10,
				MOVETYPE_LAST = 11,
				MOVETYPE_INVALID = 11,
				MOVETYPE_MAX_BITS = 5,
			};

			class CNetworkOriginCellCoordQuantizedVector {
			public:
				MEMBER(cell_x, client::CNetworkOriginCellCoordQuantizedVector, uint16_t);
				MEMBER(cell_y, client::CNetworkOriginCellCoordQuantizedVector, uint16_t);
				MEMBER(cell_z, client::CNetworkOriginCellCoordQuantizedVector, uint16_t);
				MEMBER(n_outside_world, client::CNetworkOriginCellCoordQuantizedVector, uint16_t);
				MEMBER(vec_x, client::CNetworkOriginCellCoordQuantizedVector, CNetworkedQuantizedFloat);
				MEMBER(vec_y, client::CNetworkOriginCellCoordQuantizedVector, CNetworkedQuantizedFloat);
				MEMBER(vec_z, client::CNetworkOriginCellCoordQuantizedVector, CNetworkedQuantizedFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNetworkOriginCellCoordQuantizedVector

			class CCollisionProperty {
			public:
				MEMBER(collision_attribute, client::CCollisionProperty, client::VPhysicsCollisionAttribute_t);
				MEMBER(vec_mins, client::CCollisionProperty, vector);
				MEMBER(vec_maxs, client::CCollisionProperty, vector);
				MEMBER(us_solid_flags, client::CCollisionProperty, uint8_t);
				MEMBER(n_solid_type, client::CCollisionProperty, client::SolidType_t);
				MEMBER(trigger_bloat, client::CCollisionProperty, uint8_t);
				MEMBER(n_surround_type, client::CCollisionProperty, client::SurroundingBoundsType_t);
				MEMBER(collision_group, client::CCollisionProperty, uint8_t);
				MEMBER(n_enable_physics, client::CCollisionProperty, uint8_t);
				MEMBER(fl_bounding_radius, client::CCollisionProperty, float);
				MEMBER(vec_specified_surrounding_mins, client::CCollisionProperty, vector);
				MEMBER(vec_specified_surrounding_maxs, client::CCollisionProperty, vector);
				MEMBER(vec_surrounding_maxs, client::CCollisionProperty, vector);
				MEMBER(vec_surrounding_mins, client::CCollisionProperty, vector);
				MEMBER(v_capsule_center1, client::CCollisionProperty, vector);
				MEMBER(v_capsule_center2, client::CCollisionProperty, vector);
				MEMBER(fl_capsule_radius, client::CCollisionProperty, float);

				std::uint16_t CollisionMask() const {
					return *reinterpret_cast<const std::uint16_t*>(reinterpret_cast<std::uintptr_t>(this) + 0x38);
				};

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCollisionProperty

			class CAttributeManager {
			public:
				MEMBER(providers, client::CAttributeManager, cutl_vector<chandle<client::C_BaseEntity>>);
				MEMBER(i_reapply_provision_parity, client::CAttributeManager, int32_t);
				MEMBER(h_outer, client::CAttributeManager, chandle<client::C_BaseEntity>);
				MEMBER(b_prevent_loopback, client::CAttributeManager, bool);
				MEMBER(provider_type, client::CAttributeManager, client::attributeprovidertypes_t);
				MEMBER(cached_results, client::CAttributeManager, cutl_vector<client::CAttributeManager_cached_attribute_float_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAttributeManager

			class C_AttributeContainer : public client::CAttributeManager {
			public:
				MEMBER(item, client::C_AttributeContainer, client::C_EconItemView);
				MEMBER(i_external_item_provider_registered_token, client::C_AttributeContainer, int32_t);
				MEMBER(ull_registered_as_item_id, client::C_AttributeContainer, uint64_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_AttributeContainer

			class CNetworkViewOffsetVector {
			public:
				MEMBER(vec_x, client::CNetworkViewOffsetVector, CNetworkedQuantizedFloat);
				MEMBER(vec_y, client::CNetworkViewOffsetVector, CNetworkedQuantizedFloat);
				MEMBER(vec_z, client::CNetworkViewOffsetVector, CNetworkedQuantizedFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNetworkViewOffsetVector

			class IEconItemInterface {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IEconItemInterface

			class C_EconItemView : public client::IEconItemInterface {
			public:
				MEMBER(b_inventory_image_rgba_requested, client::C_EconItemView, bool);
				MEMBER(b_inventory_image_tried_cache, client::C_EconItemView, bool);
				MEMBER(n_inventory_image_rgba_width, client::C_EconItemView, int32_t);
				MEMBER(n_inventory_image_rgba_height, client::C_EconItemView, int32_t);
				MEMBER_ARR(sz_current_load_cached_file_name, client::C_EconItemView, 260, char);
				MEMBER(b_restore_custom_material_after_precache, client::C_EconItemView, bool);
				MEMBER(i_item_definition_index, client::C_EconItemView, uint16_t);
				MEMBER(i_entity_quality, client::C_EconItemView, int32_t);
				MEMBER(i_entity_level, client::C_EconItemView, uint32_t);
				MEMBER(i_item_id, client::C_EconItemView, uint64_t);
				MEMBER(i_item_idhigh, client::C_EconItemView, uint32_t);
				MEMBER(i_item_idlow, client::C_EconItemView, uint32_t);
				MEMBER(i_account_id, client::C_EconItemView, uint32_t);
				MEMBER(i_inventory_position, client::C_EconItemView, uint32_t);
				MEMBER(b_initialized, client::C_EconItemView, bool);
				MEMBER(b_disallow_soc, client::C_EconItemView, bool);
				MEMBER(b_is_store_item, client::C_EconItemView, bool);
				MEMBER(b_is_trade_item, client::C_EconItemView, bool);
				MEMBER(i_entity_quantity, client::C_EconItemView, int32_t);
				MEMBER(i_rarity_override, client::C_EconItemView, int32_t);
				MEMBER(i_quality_override, client::C_EconItemView, int32_t);
				MEMBER(i_origin_override, client::C_EconItemView, int32_t);
				MEMBER(un_client_flags, client::C_EconItemView, uint8_t);
				MEMBER(un_override_style, client::C_EconItemView, uint8_t);
				MEMBER(attribute_list, client::C_EconItemView, client::CAttributeList);
				MEMBER(networked_dynamic_attributes, client::C_EconItemView, client::CAttributeList);
				MEMBER_ARR(sz_custom_name, client::C_EconItemView, 161, char);
				MEMBER_ARR(sz_custom_name_override, client::C_EconItemView, 161, char);
				MEMBER(b_initialized_tags, client::C_EconItemView, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EconItemView

			struct EventClientSceneSystemThreadStateChange_t {
			public:
				MEMBER(b_threads_active, client::EventClientSceneSystemThreadStateChange_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientSceneSystemThreadStateChange_t

			class CPlayerControllerComponent {
			public:
				MEMBER(_m_p_chain_entity, client::CPlayerControllerComponent, entity2::CNetworkVarChainer);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayerControllerComponent

			class CCSPlayerController_ActionTrackingServices : public client::CPlayerControllerComponent {
			public:
				MEMBER(per_round_stats, client::CCSPlayerController_ActionTrackingServices, C_UtlVectorEmbeddedNetworkVar<client::CSPerRoundStats_t>);
				MEMBER(match_stats, client::CCSPlayerController_ActionTrackingServices, client::CSMatchStats_t);
				MEMBER(i_num_round_kills, client::CCSPlayerController_ActionTrackingServices, int32_t);
				MEMBER(i_num_round_kills_headshots, client::CCSPlayerController_ActionTrackingServices, int32_t);
				MEMBER(un_total_round_damage_dealt, client::CCSPlayerController_ActionTrackingServices, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerController_ActionTrackingServices

			class CCSPlayerController_InGameMoneyServices : public client::CPlayerControllerComponent {
			public:
				MEMBER(i_account, client::CCSPlayerController_InGameMoneyServices, int32_t);
				MEMBER(i_start_account, client::CCSPlayerController_InGameMoneyServices, int32_t);
				MEMBER(i_total_cash_spent, client::CCSPlayerController_InGameMoneyServices, int32_t);
				MEMBER(i_cash_spent_this_round, client::CCSPlayerController_InGameMoneyServices, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerController_InGameMoneyServices

			class CCSPlayerController_InventoryServices : public client::CPlayerControllerComponent {
			public:
				MEMBER(un_music_id, client::CCSPlayerController_InventoryServices, uint16_t);
				MEMBER_ARR(rank, client::CCSPlayerController_InventoryServices, 6, client::MedalRank_t);
				MEMBER(n_persona_data_public_level, client::CCSPlayerController_InventoryServices, int32_t);
				MEMBER(n_persona_data_public_commends_leader, client::CCSPlayerController_InventoryServices, int32_t);
				MEMBER(n_persona_data_public_commends_teacher, client::CCSPlayerController_InventoryServices, int32_t);
				MEMBER(n_persona_data_public_commends_friendly, client::CCSPlayerController_InventoryServices, int32_t);
				MEMBER(n_persona_data_xp_trail_level, client::CCSPlayerController_InventoryServices, int32_t);
				MEMBER(vec_server_authoritative_weapon_slots, client::CCSPlayerController_InventoryServices, C_UtlVectorEmbeddedNetworkVar<client::ServerAuthoritativeWeaponSlot_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerController_InventoryServices

			class CCSPlayerController_DamageServices : public client::CPlayerControllerComponent {
			public:
				MEMBER(n_send_update, client::CCSPlayerController_DamageServices, int32_t);
				MEMBER(damage_list, client::CCSPlayerController_DamageServices, C_UtlVectorEmbeddedNetworkVar<client::CDamageRecord>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerController_DamageServices

			class CPlayerPawnComponent {
			public:
				MEMBER(_m_p_chain_entity, client::CPlayerPawnComponent, entity2::CNetworkVarChainer);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayerPawnComponent

			class CCSPlayer_DamageReactServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_DamageReactServices

			class CPlayer_ItemServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_ItemServices

			class CPlayer_WeaponServices : public client::CPlayerPawnComponent {
			public:
				MEMBER(h_my_weapons, client::CPlayer_WeaponServices, C_NetworkUtlVectorBase<chandle<client::C_BasePlayerWeapon>>);
				MEMBER(h_active_weapon, client::CPlayer_WeaponServices, chandle<client::C_BasePlayerWeapon>);
				MEMBER(h_last_weapon, client::CPlayer_WeaponServices, chandle<client::C_BasePlayerWeapon>);
				MEMBER_ARR(i_ammo, client::CPlayer_WeaponServices, 32, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_WeaponServices

			class CCSPlayer_WeaponServices : public client::CPlayer_WeaponServices {
			public:
				MEMBER(fl_next_attack, client::CCSPlayer_WeaponServices, entity2::GameTime_t);
				MEMBER(b_is_looking_at_weapon, client::CCSPlayer_WeaponServices, bool);
				MEMBER(b_is_holding_look_at_weapon, client::CCSPlayer_WeaponServices, bool);
				MEMBER(n_old_shoot_position_history_count, client::CCSPlayer_WeaponServices, uint32_t);
				MEMBER(n_old_input_history_count, client::CCSPlayer_WeaponServices, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_WeaponServices

			class CGameSceneNode {
			public:
				MEMBER(node_to_world, client::CGameSceneNode, CTransform);
				MEMBER(p_owner, client::CGameSceneNode, entity2::CEntityInstance*);
				MEMBER(p_parent, client::CGameSceneNode, client::CGameSceneNode*);
				MEMBER(p_child, client::CGameSceneNode, client::CGameSceneNode*);
				MEMBER(p_next_sibling, client::CGameSceneNode, client::CGameSceneNode*);
				MEMBER(h_parent, client::CGameSceneNode, client::CGameSceneNodeHandle);
				MEMBER(vec_origin, client::CGameSceneNode, client::CNetworkOriginCellCoordQuantizedVector);
				MEMBER(ang_rotation, client::CGameSceneNode, qangle);
				MEMBER(fl_scale, client::CGameSceneNode, float);
				MEMBER(vec_abs_origin, client::CGameSceneNode, vector);
				MEMBER(ang_abs_rotation, client::CGameSceneNode, qangle);
				MEMBER(fl_abs_scale, client::CGameSceneNode, float);
				MEMBER(n_parent_attachment_or_bone, client::CGameSceneNode, int16_t);
				MEMBER(b_debug_abs_origin_changes, client::CGameSceneNode, bool);
				MEMBER(b_dormant, client::CGameSceneNode, bool);
				MEMBER(b_force_parent_to_be_networked, client::CGameSceneNode, bool);
				MEMBER(b_dirty_hierarchy, client::CGameSceneNode, uint8_t);
				MEMBER(b_dirty_bone_merge_info, client::CGameSceneNode, uint8_t);
				MEMBER(b_networked_position_changed, client::CGameSceneNode, uint8_t);
				MEMBER(b_networked_angles_changed, client::CGameSceneNode, uint8_t);
				MEMBER(b_networked_scale_changed, client::CGameSceneNode, uint8_t);
				MEMBER(b_will_be_calling_post_data_update, client::CGameSceneNode, uint8_t);
				MEMBER(b_bone_merge_flex, client::CGameSceneNode, uint8_t);
				MEMBER(n_latch_abs_origin, client::CGameSceneNode, uint8_t);
				MEMBER(b_dirty_bone_merge_bone_to_root, client::CGameSceneNode, uint8_t);
				MEMBER(n_hierarchical_depth, client::CGameSceneNode, uint8_t);
				MEMBER(n_hierarchy_type, client::CGameSceneNode, uint8_t);
				MEMBER(n_do_not_set_anim_time_in_invalidate_physics_count, client::CGameSceneNode, uint8_t);
				MEMBER(name, client::CGameSceneNode, CUtlStringToken);
				MEMBER(hierarchy_attach_name, client::CGameSceneNode, CUtlStringToken);
				MEMBER(fl_zoffset, client::CGameSceneNode, float);
				MEMBER(fl_client_local_scale, client::CGameSceneNode, float);
				MEMBER(v_render_origin, client::CGameSceneNode, vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGameSceneNode

			class C_BaseEntity : public entity2::CEntityInstance {
			public:
				MEMBER(cbody_component, client::C_BaseEntity, client::CBodyComponent*);
				MEMBER(network_transmit_component, client::C_BaseEntity, client::CNetworkTransmitComponent);
				MEMBER(n_last_think_tick, client::C_BaseEntity, entity2::GameTick_t);
				MEMBER(p_game_scene_node, client::C_BaseEntity, client::CGameSceneNode*);
				MEMBER(p_render_component, client::C_BaseEntity, client::CRenderComponent*);
				MEMBER(p_collision, client::C_BaseEntity, client::CCollisionProperty*);
				MEMBER(i_max_health, client::C_BaseEntity, int32_t);
				MEMBER(i_health, client::C_BaseEntity, int32_t);
				MEMBER(life_state, client::C_BaseEntity, uint8_t);
				MEMBER(b_takes_damage, client::C_BaseEntity, bool);
				MEMBER(n_take_damage_flags, client::C_BaseEntity, client::TakeDamageFlags_t);
				MEMBER(n_platform_type, client::C_BaseEntity, client::EntityPlatformTypes_t);
				MEMBER(ub_interpolation_frame, client::C_BaseEntity, uint8_t);
				MEMBER(h_scene_object_controller, client::C_BaseEntity, chandle<client::C_BaseEntity>);
				MEMBER(n_no_interpolation_tick, client::C_BaseEntity, int32_t);
				MEMBER(n_visibility_no_interpolation_tick, client::C_BaseEntity, int32_t);
				MEMBER(fl_proxy_random_value, client::C_BaseEntity, float);
				MEMBER(i_eflags, client::C_BaseEntity, int32_t);
				MEMBER(n_water_type, client::C_BaseEntity, uint8_t);
				MEMBER(b_interpolate_even_with_no_model, client::C_BaseEntity, bool);
				MEMBER(b_prediction_eligible, client::C_BaseEntity, bool);
				MEMBER(b_apply_layer_match_idto_model, client::C_BaseEntity, bool);
				MEMBER(tok_layer_match_id, client::C_BaseEntity, CUtlStringToken);
				MEMBER(n_subclass_id, client::C_BaseEntity, CUtlStringToken);
				MEMBER(n_simulation_tick, client::C_BaseEntity, int32_t);
				MEMBER(i_current_think_context, client::C_BaseEntity, int32_t);
				MEMBER(a_think_functions, client::C_BaseEntity, cutl_vector<client::thinkfunc_t>);
				MEMBER(b_disabled_context_thinks, client::C_BaseEntity, bool);
				MEMBER(fl_anim_time, client::C_BaseEntity, float);
				MEMBER(fl_simulation_time, client::C_BaseEntity, float);
				MEMBER(n_scene_object_override_flags, client::C_BaseEntity, uint8_t);
				MEMBER(b_has_successfully_interpolated, client::C_BaseEntity, bool);
				MEMBER(b_has_added_vars_to_interpolation, client::C_BaseEntity, bool);
				MEMBER(b_render_even_when_not_successfully_interpolated, client::C_BaseEntity, bool);
				MEMBER_ARR(n_interpolation_latch_dirty_flags, client::C_BaseEntity, 2, int32_t);
				MEMBER_ARR(list_entry, client::C_BaseEntity, 11, uint16_t);
				MEMBER(fl_create_time, client::C_BaseEntity, entity2::GameTime_t);
				MEMBER(fl_speed, client::C_BaseEntity, float);
				MEMBER(ent_client_flags, client::C_BaseEntity, uint16_t);
				MEMBER(b_client_side_ragdoll, client::C_BaseEntity, bool);
				MEMBER(i_team_num, client::C_BaseEntity, uint8_t);
				MEMBER(spawnflags, client::C_BaseEntity, uint32_t);
				MEMBER(n_next_think_tick, client::C_BaseEntity, entity2::GameTick_t);
				MEMBER(f_flags, client::C_BaseEntity, uint32_t);
				MEMBER(vec_abs_velocity, client::C_BaseEntity, vector);
				MEMBER(vec_velocity, client::C_BaseEntity, client::CNetworkVelocityVector);
				MEMBER(vec_base_velocity, client::C_BaseEntity, vector);
				MEMBER(h_effect_entity, client::C_BaseEntity, chandle<client::C_BaseEntity>);
				MEMBER(h_owner_entity, client::C_BaseEntity, chandle<client::C_BaseEntity>);
				MEMBER(move_collide, client::C_BaseEntity, client::MoveCollide_t);
				MEMBER(move_type, client::C_BaseEntity, client::MoveType_t);
				MEMBER(n_actual_move_type, client::C_BaseEntity, client::MoveType_t);
				MEMBER(fl_water_level, client::C_BaseEntity, float);
				MEMBER(f_effects, client::C_BaseEntity, uint32_t);
				MEMBER(h_ground_entity, client::C_BaseEntity, chandle<client::C_BaseEntity>);
				MEMBER(n_ground_body_index, client::C_BaseEntity, int32_t);
				MEMBER(fl_friction, client::C_BaseEntity, float);
				MEMBER(fl_elasticity, client::C_BaseEntity, float);
				MEMBER(fl_gravity_scale, client::C_BaseEntity, float);
				MEMBER(fl_time_scale, client::C_BaseEntity, float);
				MEMBER(b_animated_every_tick, client::C_BaseEntity, bool);
				MEMBER(fl_nav_ignore_until_time, client::C_BaseEntity, entity2::GameTime_t);
				MEMBER(h_think, client::C_BaseEntity, uint16_t);
				MEMBER(f_bbox_vis_flags, client::C_BaseEntity, uint8_t);
				MEMBER(b_predictable, client::C_BaseEntity, bool);
				MEMBER(b_render_with_view_models, client::C_BaseEntity, bool);
				MEMBER(n_split_user_player_prediction_slot, client::C_BaseEntity, CSplitScreenSlot);
				MEMBER(n_first_predictable_command, client::C_BaseEntity, int32_t);
				MEMBER(n_last_predictable_command, client::C_BaseEntity, int32_t);
				MEMBER(h_old_move_parent, client::C_BaseEntity, chandle<client::C_BaseEntity>);
				//////MEMBER(particles, client::C_BaseEntity, particleslib::CParticleProperty);
				MEMBER(vec_predicted_script_floats, client::C_BaseEntity, cutl_vector<float>);
				MEMBER(vec_predicted_script_float_ids, client::C_BaseEntity, cutl_vector<int32_t>);
				MEMBER(n_next_script_var_record_id, client::C_BaseEntity, int32_t);
				MEMBER(vec_ang_velocity, client::C_BaseEntity, qangle);
				MEMBER(data_change_event_ref, client::C_BaseEntity, int32_t);
				MEMBER(dependencies, client::C_BaseEntity, cutl_vector<CEntityHandle>);
				MEMBER(n_creation_tick, client::C_BaseEntity, int32_t);
				MEMBER(b_anim_time_changed, client::C_BaseEntity, bool);
				MEMBER(b_simulation_time_changed, client::C_BaseEntity, bool);
				MEMBER(s_unique_hammer_id, client::C_BaseEntity, cutl_string);
				MEMBER(n_blood_type, client::C_BaseEntity, client::BloodType);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseEntity

			class CBasePlayerController : public client::C_BaseEntity {
			public:
				MEMBER(n_final_predicted_tick, client::CBasePlayerController, int32_t);
				MEMBER(command_context, client::CBasePlayerController, client::C_CommandContext);
				MEMBER(n_in_buttons_which_are_toggles, client::CBasePlayerController, uint64_t);
				MEMBER(n_tick_base, client::CBasePlayerController, uint32_t);
				MEMBER(h_pawn, client::CBasePlayerController, chandle<client::C_BasePlayerPawn>);
				MEMBER(b_known_team_mismatch, client::CBasePlayerController, bool);
				MEMBER(h_predicted_pawn, client::CBasePlayerController, chandle<client::C_BasePlayerPawn>);
				MEMBER(n_split_screen_slot, client::CBasePlayerController, CSplitScreenSlot);
				MEMBER(h_split_owner, client::CBasePlayerController, chandle<client::CBasePlayerController>);
				MEMBER(h_split_screen_players, client::CBasePlayerController, cutl_vector<chandle<client::CBasePlayerController>>);
				MEMBER(b_is_hltv, client::CBasePlayerController, bool);
				MEMBER(i_connected, client::CBasePlayerController, client::PlayerConnectedState);
				MEMBER_ARR(isz_player_name, client::CBasePlayerController, 128, char);
				MEMBER(steam_id, client::CBasePlayerController, uint64_t);
				MEMBER(b_is_local_player_controller, client::CBasePlayerController, bool);
				MEMBER(i_desired_fov, client::CBasePlayerController, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBasePlayerController

			class CCSPlayerController : public client::CBasePlayerController {
			public:
				MEMBER(p_in_game_money_services, client::CCSPlayerController, client::CCSPlayerController_InGameMoneyServices*);
				MEMBER(p_inventory_services, client::CCSPlayerController, client::CCSPlayerController_InventoryServices*);
				MEMBER(p_action_tracking_services, client::CCSPlayerController, client::CCSPlayerController_ActionTrackingServices*);
				MEMBER(p_damage_services, client::CCSPlayerController, client::CCSPlayerController_DamageServices*);
				MEMBER(i_ping, client::CCSPlayerController, uint32_t);
				MEMBER(b_has_communication_abuse_mute, client::CCSPlayerController, bool);
				MEMBER(sz_crosshair_codes, client::CCSPlayerController, CUtlSymbolLarge);
				MEMBER(i_pending_team_num, client::CCSPlayerController, uint8_t);
				MEMBER(fl_force_team_time, client::CCSPlayerController, entity2::GameTime_t);
				MEMBER(i_comp_teammate_color, client::CCSPlayerController, int32_t);
				MEMBER(b_ever_played_on_team, client::CCSPlayerController, bool);
				MEMBER(fl_previous_force_join_team_time, client::CCSPlayerController, entity2::GameTime_t);
				MEMBER(sz_clan, client::CCSPlayerController, CUtlSymbolLarge);
				MEMBER(s_sanitized_player_name, client::CCSPlayerController, cutl_string);
				MEMBER(i_coaching_team, client::CCSPlayerController, int32_t);
				MEMBER(n_player_dominated, client::CCSPlayerController, uint64_t);
				MEMBER(n_player_dominating_me, client::CCSPlayerController, uint64_t);
				MEMBER(i_competitive_ranking, client::CCSPlayerController, int32_t);
				MEMBER(i_competitive_wins, client::CCSPlayerController, int32_t);
				MEMBER(i_competitive_rank_type, client::CCSPlayerController, int8_t);
				MEMBER(i_competitive_ranking_predicted__win, client::CCSPlayerController, int32_t);
				MEMBER(i_competitive_ranking_predicted__loss, client::CCSPlayerController, int32_t);
				MEMBER(i_competitive_ranking_predicted__tie, client::CCSPlayerController, int32_t);
				MEMBER(n_end_match_next_map_vote, client::CCSPlayerController, int32_t);
				MEMBER(un_active_quest_id, client::CCSPlayerController, uint16_t);
				MEMBER(n_quest_progress_reason, client::CCSPlayerController, client::QuestProgress_Reason);
				MEMBER(un_player_tv_control_flags, client::CCSPlayerController, uint32_t);
				MEMBER(i_draft_index, client::CCSPlayerController, int32_t);
				MEMBER(ms_queued_mode_disconnection_timestamp, client::CCSPlayerController, uint32_t);
				MEMBER(ui_abandon_recorded_reason, client::CCSPlayerController, uint32_t);
				MEMBER(b_cannot_be_kicked, client::CCSPlayerController, bool);
				MEMBER(b_ever_fully_connected, client::CCSPlayerController, bool);
				MEMBER(b_abandon_allows_surrender, client::CCSPlayerController, bool);
				MEMBER(b_abandon_offers_instant_surrender, client::CCSPlayerController, bool);
				MEMBER(b_disconnection1_min_warning_printed, client::CCSPlayerController, bool);
				MEMBER(b_score_reported, client::CCSPlayerController, bool);
				MEMBER(n_disconnection_tick, client::CCSPlayerController, int32_t);
				MEMBER(b_controlling_bot, client::CCSPlayerController, bool);
				MEMBER(b_has_controlled_bot_this_round, client::CCSPlayerController, bool);
				MEMBER(b_has_been_controlled_by_player_this_round, client::CCSPlayerController, bool);
				MEMBER(n_bots_controlled_this_round, client::CCSPlayerController, int32_t);
				MEMBER(b_can_control_observed_bot, client::CCSPlayerController, bool);
				MEMBER(h_player_pawn, client::CCSPlayerController, chandle<client::C_CSPlayerPawn>);
				MEMBER(h_observer_pawn, client::CCSPlayerController, chandle<client::C_CSObserverPawn>);
				MEMBER(b_pawn_is_alive, client::CCSPlayerController, bool);
				MEMBER(i_pawn_health, client::CCSPlayerController, uint32_t);
				MEMBER(i_pawn_armor, client::CCSPlayerController, int32_t);
				MEMBER(b_pawn_has_defuser, client::CCSPlayerController, bool);
				MEMBER(b_pawn_has_helmet, client::CCSPlayerController, bool);
				MEMBER(n_pawn_character_def_index, client::CCSPlayerController, uint16_t);
				MEMBER(i_pawn_lifetime_start, client::CCSPlayerController, int32_t);
				MEMBER(i_pawn_lifetime_end, client::CCSPlayerController, int32_t);
				MEMBER(i_pawn_bot_difficulty, client::CCSPlayerController, int32_t);
				MEMBER(h_original_controller_of_current_pawn, client::CCSPlayerController, chandle<client::CCSPlayerController>);
				MEMBER(i_score, client::CCSPlayerController, int32_t);
				MEMBER_ARR(recent_kill_queue, client::CCSPlayerController, 8, uint8_t);
				MEMBER(n_first_kill, client::CCSPlayerController, uint8_t);
				MEMBER(n_kill_count, client::CCSPlayerController, uint8_t);
				MEMBER(b_mvp_no_music, client::CCSPlayerController, bool);
				MEMBER(e_mvp_reason, client::CCSPlayerController, int32_t);
				MEMBER(i_music_kit_id, client::CCSPlayerController, int32_t);
				MEMBER(i_music_kit_mvps, client::CCSPlayerController, int32_t);
				MEMBER(i_mvps, client::CCSPlayerController, int32_t);
				MEMBER(b_is_player_name_dirty, client::CCSPlayerController, bool);
				MEMBER(b_fire_bullets_seed_synchronized, client::CCSPlayerController, bool);
				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerController

			class C_BaseModelEntity : public client::C_BaseEntity {
			public:
				MEMBER(crender_component, client::C_BaseModelEntity, client::CRenderComponent*);
				MEMBER(chitbox_component, client::C_BaseModelEntity, client::CHitboxComponent);
				MEMBER(last_hit_group, client::C_BaseModelEntity, client::HitGroup_t);
				MEMBER(b_init_model_effects, client::C_BaseModelEntity, bool);
				MEMBER(b_is_static_prop, client::C_BaseModelEntity, bool);
				MEMBER(n_last_add_decal, client::C_BaseModelEntity, int32_t);
				MEMBER(n_decals_added, client::C_BaseModelEntity, int32_t);
				MEMBER(i_old_health, client::C_BaseModelEntity, int32_t);
				MEMBER(n_render_mode, client::C_BaseModelEntity, client::RenderMode_t);
				MEMBER(n_render_fx, client::C_BaseModelEntity, client::RenderFx_t);
				MEMBER(b_allow_fade_in_view, client::C_BaseModelEntity, bool);
				MEMBER(clr_render, client::C_BaseModelEntity, color);
				MEMBER(vec_render_attributes, client::C_BaseModelEntity, C_UtlVectorEmbeddedNetworkVar<client::EntityRenderAttribute_t>);
				MEMBER(b_render_to_cubemaps, client::C_BaseModelEntity, bool);
				MEMBER(b_no_interpolate, client::C_BaseModelEntity, bool);
				MEMBER(collision, client::C_BaseModelEntity, client::CCollisionProperty);
				MEMBER(glow, client::C_BaseModelEntity, client::CGlowProperty);
				MEMBER(fl_glow_backface_mult, client::C_BaseModelEntity, float);
				MEMBER(fade_min_dist, client::C_BaseModelEntity, float);
				MEMBER(fade_max_dist, client::C_BaseModelEntity, float);
				MEMBER(fl_fade_scale, client::C_BaseModelEntity, float);
				MEMBER(fl_shadow_strength, client::C_BaseModelEntity, float);
				MEMBER(n_object_culling, client::C_BaseModelEntity, uint8_t);
				MEMBER(n_add_decal, client::C_BaseModelEntity, int32_t);
				MEMBER(v_decal_position, client::C_BaseModelEntity, vector);
				MEMBER(v_decal_forward_axis, client::C_BaseModelEntity, vector);
				MEMBER(fl_decal_heal_blood_rate, client::C_BaseModelEntity, float);
				MEMBER(fl_decal_heal_height_rate, client::C_BaseModelEntity, float);
				MEMBER(config_entities_to_propagate_material_decals_to, client::C_BaseModelEntity, C_NetworkUtlVectorBase<chandle<client::C_BaseModelEntity>>);
				MEMBER(vec_view_offset, client::C_BaseModelEntity, client::CNetworkViewOffsetVector);
				MEMBER(p_client_alpha_property, client::C_BaseModelEntity, client::CClientAlphaProperty*);
				MEMBER(client_override_tint, client::C_BaseModelEntity, color);
				MEMBER(b_use_client_override_tint, client::C_BaseModelEntity, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseModelEntity

			class CBaseAnimGraph : public client::C_BaseModelEntity {
			public:
				MEMBER(b_initially_populate_interp_history, client::CBaseAnimGraph, bool);
				MEMBER(b_suppress_anim_event_sounds, client::CBaseAnimGraph, bool);
				MEMBER(b_anim_graph_update_enabled, client::CBaseAnimGraph, bool);
				MEMBER(fl_max_slope_distance, client::CBaseAnimGraph, float);
				MEMBER(v_last_slope_check_pos, client::CBaseAnimGraph, vector);
				MEMBER(b_animation_update_scheduled, client::CBaseAnimGraph, bool);
				MEMBER(vec_force, client::CBaseAnimGraph, vector);
				MEMBER(n_force_bone, client::CBaseAnimGraph, int32_t);
				MEMBER(p_clientside_ragdoll, client::CBaseAnimGraph, client::CBaseAnimGraph*);
				MEMBER(b_built_ragdoll, client::CBaseAnimGraph, bool);
				MEMBER(ragdoll_pose, client::CBaseAnimGraph, client::PhysicsRagdollPose_t);
				MEMBER(b_ragdoll_client_side, client::CBaseAnimGraph, bool);
				MEMBER(b_has_animated_material_attributes, client::CBaseAnimGraph, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseAnimGraph

			class C_BaseFlex : public client::CBaseAnimGraph {
			public:
				MEMBER(flex_weight, client::C_BaseFlex, C_NetworkUtlVectorBase<float>);
				MEMBER(v_look_target_position, client::C_BaseFlex, vector);
				MEMBER(blinktoggle, client::C_BaseFlex, bool);
				MEMBER(n_last_flex_update_frame_count, client::C_BaseFlex, int32_t);
				MEMBER(cached_view_target, client::C_BaseFlex, vector);
				MEMBER(n_next_scene_event_id, client::C_BaseFlex, client::SceneEventId_t);
				MEMBER(i_blink, client::C_BaseFlex, int32_t);
				MEMBER(blinktime, client::C_BaseFlex, float);
				MEMBER(prevblinktoggle, client::C_BaseFlex, bool);
				MEMBER(i_jaw_open, client::C_BaseFlex, int32_t);
				MEMBER(fl_jaw_open_amount, client::C_BaseFlex, float);
				MEMBER(fl_blink_amount, client::C_BaseFlex, float);
				MEMBER(i_mouth_attachment, client::C_BaseFlex, modellib::AttachmentHandle_t);
				MEMBER(i_eye_attachment, client::C_BaseFlex, modellib::AttachmentHandle_t);
				MEMBER(b_reset_flex_weights_on_model_change, client::C_BaseFlex, bool);
				MEMBER(n_eye_occlusion_renderer_bone, client::C_BaseFlex, int32_t);
				MEMBER(m_eye_occlusion_renderer_camera_to_bone_transform, client::C_BaseFlex, matrix3x4_t);
				MEMBER(v_eye_occlusion_renderer_half_extent, client::C_BaseFlex, vector);
				MEMBER_ARR(phoneme_classes, client::C_BaseFlex, 3, client::C_BaseFlex_Emphasized_Phoneme);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseFlex

			class C_BaseCombatCharacter : public client::C_BaseFlex {
			public:
				MEMBER(h_my_wearables, client::C_BaseCombatCharacter, C_NetworkUtlVectorBase<chandle<client::C_EconWearable>>);
				MEMBER(left_foot_attachment, client::C_BaseCombatCharacter, modellib::AttachmentHandle_t);
				MEMBER(right_foot_attachment, client::C_BaseCombatCharacter, modellib::AttachmentHandle_t);
				MEMBER(n_water_wake_mode, client::C_BaseCombatCharacter, client::C_BaseCombatCharacter_WaterWakeMode_t);
				MEMBER(fl_water_world_z, client::C_BaseCombatCharacter, float);
				MEMBER(fl_water_next_trace_time, client::C_BaseCombatCharacter, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseCombatCharacter

			class C_BasePlayerPawn : public client::C_BaseCombatCharacter {
			public:
				MEMBER(p_weapon_services, client::C_BasePlayerPawn, client::CPlayer_WeaponServices*);
				MEMBER(p_item_services, client::C_BasePlayerPawn, client::CPlayer_ItemServices*);
				MEMBER(p_autoaim_services, client::C_BasePlayerPawn, client::CPlayer_AutoaimServices*);
				MEMBER(p_observer_services, client::C_BasePlayerPawn, client::CPlayer_ObserverServices*);
				MEMBER(p_water_services, client::C_BasePlayerPawn, client::CPlayer_WaterServices*);
				MEMBER(p_use_services, client::C_BasePlayerPawn, client::CPlayer_UseServices*);
				MEMBER(p_flashlight_services, client::C_BasePlayerPawn, client::CPlayer_FlashlightServices*);
				MEMBER(p_camera_services, client::C_BasePlayerPawn, client::CPlayer_CameraServices*);
				MEMBER(p_movement_services, client::C_BasePlayerPawn, client::CPlayer_MovementServices*);
				MEMBER(server_view_angle_changes, client::C_BasePlayerPawn, C_UtlVectorEmbeddedNetworkVar<client::ViewAngleServerChange_t>);
				MEMBER(n_highest_consumed_server_view_angle_change_index, client::C_BasePlayerPawn, uint32_t);
				MEMBER(v_angle, client::C_BasePlayerPawn, qangle);
				MEMBER(v_angle_previous, client::C_BasePlayerPawn, qangle);
				MEMBER(i_hide_hud, client::C_BasePlayerPawn, uint32_t);
				MEMBER(skybox3d, client::C_BasePlayerPawn, client::sky3dparams_t);
				MEMBER(fl_death_time, client::C_BasePlayerPawn, entity2::GameTime_t);
				MEMBER(vec_prediction_error, client::C_BasePlayerPawn, vector);
				MEMBER(fl_prediction_error_time, client::C_BasePlayerPawn, entity2::GameTime_t);
				MEMBER(vec_last_camera_setup_local_origin, client::C_BasePlayerPawn, vector);
				MEMBER(fl_last_camera_setup_time, client::C_BasePlayerPawn, entity2::GameTime_t);
				MEMBER(fl_fovsensitivity_adjust, client::C_BasePlayerPawn, float);
				MEMBER(fl_mouse_sensitivity, client::C_BasePlayerPawn, float);
				MEMBER(v_old_origin, client::C_BasePlayerPawn, vector);
				MEMBER(fl_old_simulation_time, client::C_BasePlayerPawn, float);
				MEMBER(n_last_executed_command_number, client::C_BasePlayerPawn, int32_t);
				MEMBER(n_last_executed_command_tick, client::C_BasePlayerPawn, int32_t);
				MEMBER(h_controller, client::C_BasePlayerPawn, chandle<client::CBasePlayerController>);
				MEMBER(b_is_swapping_to_predictable_controller, client::C_BasePlayerPawn, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BasePlayerPawn

			class C_CSPlayerPawnBase : public client::C_BasePlayerPawn {
			public:
				MEMBER(p_ping_services, client::C_CSPlayerPawnBase, client::CCSPlayer_PingServices*);
				MEMBER(p_view_model_services, client::C_CSPlayerPawnBase, client::CPlayer_ViewModelServices*);
				MEMBER_ARR(f_rendering_clip_plane, client::C_CSPlayerPawnBase, 4, float);
				MEMBER(n_last_clip_plane_setup_frame, client::C_CSPlayerPawnBase, int32_t);
				MEMBER(vec_last_clip_camera_pos, client::C_CSPlayerPawnBase, vector);
				MEMBER(vec_last_clip_camera_forward, client::C_CSPlayerPawnBase, vector);
				MEMBER(b_clip_hit_static_world, client::C_CSPlayerPawnBase, bool);
				MEMBER(b_cached_plane_is_valid, client::C_CSPlayerPawnBase, bool);
				MEMBER(p_clipping_weapon, client::C_CSPlayerPawnBase, client::C_CSWeaponBase*);
				MEMBER(previous_player_state, client::C_CSPlayerPawnBase, client::CSPlayerState);
				MEMBER(i_player_state, client::C_CSPlayerPawnBase, client::CSPlayerState);
				MEMBER(b_is_rescuing, client::C_CSPlayerPawnBase, bool);
				MEMBER(f_immune_to_gun_game_damage_time, client::C_CSPlayerPawnBase, entity2::GameTime_t);
				MEMBER(f_immune_to_gun_game_damage_time_last, client::C_CSPlayerPawnBase, entity2::GameTime_t);
				MEMBER(b_gun_game_immunity, client::C_CSPlayerPawnBase, bool);
				MEMBER(b_has_moved_since_spawn, client::C_CSPlayerPawnBase, bool);
				MEMBER(f_molotov_use_time, client::C_CSPlayerPawnBase, float);
				MEMBER(f_molotov_damage_time, client::C_CSPlayerPawnBase, float);
				MEMBER(i_throw_grenade_counter, client::C_CSPlayerPawnBase, int32_t);
				MEMBER(fl_last_spawn_time_index, client::C_CSPlayerPawnBase, entity2::GameTime_t);
				MEMBER(i_progress_bar_duration, client::C_CSPlayerPawnBase, int32_t);
				MEMBER(fl_progress_bar_start_time, client::C_CSPlayerPawnBase, float);
				MEMBER(vec_intro_start_eye_position, client::C_CSPlayerPawnBase, vector);
				MEMBER(vec_intro_start_player_forward, client::C_CSPlayerPawnBase, vector);
				MEMBER(fl_client_death_time, client::C_CSPlayerPawnBase, entity2::GameTime_t);
				MEMBER(b_screen_tear_frame_captured, client::C_CSPlayerPawnBase, bool);
				MEMBER(fl_flash_bang_time, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_flash_screenshot_alpha, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_flash_overlay_alpha, client::C_CSPlayerPawnBase, float);
				MEMBER(b_flash_build_up, client::C_CSPlayerPawnBase, bool);
				MEMBER(b_flash_dsp_has_been_cleared, client::C_CSPlayerPawnBase, bool);
				MEMBER(b_flash_screenshot_has_been_grabbed, client::C_CSPlayerPawnBase, bool);
				MEMBER(fl_flash_max_alpha, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_flash_duration, client::C_CSPlayerPawnBase, float);
				MEMBER(i_health_bar_render_mask_index, client::C_CSPlayerPawnBase, int32_t);
				MEMBER(fl_health_fade_value, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_health_fade_alpha, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_death_ccweight, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_prev_round_end_time, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_prev_match_end_time, client::C_CSPlayerPawnBase, float);
				MEMBER(ang_eye_angles, client::C_CSPlayerPawnBase, qangle);
				MEMBER(f_next_think_push_away, client::C_CSPlayerPawnBase, float);
				MEMBER(b_should_autobuy_dmweapons, client::C_CSPlayerPawnBase, bool);
				MEMBER(b_should_autobuy_now, client::C_CSPlayerPawnBase, bool);
				MEMBER(i_ident_index, client::C_CSPlayerPawnBase, CEntityIndex);
				MEMBER(delay_target_idtimer, client::C_CSPlayerPawnBase, client::CountdownTimer);
				MEMBER(i_target_item_ent_idx, client::C_CSPlayerPawnBase, CEntityIndex);
				MEMBER(i_old_ident_index, client::C_CSPlayerPawnBase, CEntityIndex);
				MEMBER(hold_target_idtimer, client::C_CSPlayerPawnBase, client::CountdownTimer);
				MEMBER(fl_current_music_start_time, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_music_round_start_time, client::C_CSPlayerPawnBase, float);
				MEMBER(b_defer_start_music_on_warmup, client::C_CSPlayerPawnBase, bool);
				MEMBER(cycle_latch, client::C_CSPlayerPawnBase, int32_t);
				MEMBER(server_intended_cycle, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_last_smoke_overlay_alpha, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_last_smoke_age, client::C_CSPlayerPawnBase, float);
				MEMBER(v_last_smoke_overlay_color, client::C_CSPlayerPawnBase, vector);
				MEMBER(n_player_smoked_fx, client::C_CSPlayerPawnBase, client::ParticleIndex_t);
				MEMBER(n_player_inferno_body_fx, client::C_CSPlayerPawnBase, client::ParticleIndex_t);
				MEMBER(n_player_inferno_foot_fx, client::C_CSPlayerPawnBase, client::ParticleIndex_t);
				MEMBER(fl_next_mag_drop_time, client::C_CSPlayerPawnBase, float);
				MEMBER(n_last_mag_drop_attachment_index, client::C_CSPlayerPawnBase, int32_t);
				MEMBER(vec_last_alive_local_velocity, client::C_CSPlayerPawnBase, vector);
				MEMBER(b_guardian_should_spray_custom_xmark, client::C_CSPlayerPawnBase, bool);
				MEMBER(h_original_controller, client::C_CSPlayerPawnBase, chandle<client::CCSPlayerController>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSPlayerPawnBase

			class C_CSPlayerPawn : public client::C_CSPlayerPawnBase {
			public:
				MEMBER(p_bullet_services, client::C_CSPlayerPawn, client::CCSPlayer_BulletServices*);
				MEMBER(p_hostage_services, client::C_CSPlayerPawn, client::CCSPlayer_HostageServices*);
				MEMBER(p_buy_services, client::C_CSPlayerPawn, client::CCSPlayer_BuyServices*);
				MEMBER(p_glow_services, client::C_CSPlayerPawn, client::CCSPlayer_GlowServices*);
				MEMBER(p_action_tracking_services, client::C_CSPlayerPawn, client::CCSPlayer_ActionTrackingServices*);
				MEMBER(p_damage_react_services, client::C_CSPlayerPawn, client::CCSPlayer_DamageReactServices*);
				MEMBER(fl_health_shot_boost_expiration_time, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(fl_last_fired_weapon_time, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(b_has_female_voice, client::C_CSPlayerPawn, bool);
				MEMBER(fl_landing_time_seconds, client::C_CSPlayerPawn, float);
				MEMBER(fl_old_fall_velocity, client::C_CSPlayerPawn, float);
				MEMBER_ARR(sz_last_place_name, client::C_CSPlayerPawn, 18, char);
				MEMBER(b_prev_defuser, client::C_CSPlayerPawn, bool);
				MEMBER(b_prev_helmet, client::C_CSPlayerPawn, bool);
				MEMBER(n_prev_armor_val, client::C_CSPlayerPawn, int32_t);
				MEMBER(n_prev_grenade_ammo_count, client::C_CSPlayerPawn, int32_t);
				MEMBER(un_previous_weapon_hash, client::C_CSPlayerPawn, uint32_t);
				MEMBER(un_weapon_hash, client::C_CSPlayerPawn, uint32_t);
				MEMBER(b_in_buy_zone, client::C_CSPlayerPawn, bool);
				MEMBER(b_previously_in_buy_zone, client::C_CSPlayerPawn, bool);
				MEMBER(aim_punch_angle, client::C_CSPlayerPawn, qangle);
				MEMBER(aim_punch_angle_vel, client::C_CSPlayerPawn, qangle);
				MEMBER(aim_punch_tick_base, client::C_CSPlayerPawn, int32_t);
				MEMBER(aim_punch_tick_fraction, client::C_CSPlayerPawn, float);
				MEMBER(aim_punch_cache, client::C_CSPlayerPawn, cutl_vector<qangle>);
				MEMBER(b_in_landing, client::C_CSPlayerPawn, bool);
				MEMBER(fl_landing_start_time, client::C_CSPlayerPawn, float);
				MEMBER(b_in_hostage_rescue_zone, client::C_CSPlayerPawn, bool);
				MEMBER(b_in_bomb_zone, client::C_CSPlayerPawn, bool);
				MEMBER(b_is_buy_menu_open, client::C_CSPlayerPawn, bool);
				MEMBER(fl_time_of_last_injury, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(fl_next_spray_decal_time, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(i_retakes_offering, client::C_CSPlayerPawn, int32_t);
				MEMBER(i_retakes_offering_card, client::C_CSPlayerPawn, int32_t);
				MEMBER(b_retakes_has_defuse_kit, client::C_CSPlayerPawn, bool);
				MEMBER(b_retakes_mvplast_round, client::C_CSPlayerPawn, bool);
				MEMBER(i_retakes_mvpboost_item, client::C_CSPlayerPawn, int32_t);
				MEMBER(retakes_mvpboost_extra_utility, client::C_CSPlayerPawn, client::loadout_slot_t);
				MEMBER(b_need_to_re_apply_gloves, client::C_CSPlayerPawn, bool);
				MEMBER(econ_gloves, client::C_CSPlayerPawn, client::C_EconItemView);
				MEMBER(n_econ_gloves_changed, client::C_CSPlayerPawn, uint8_t);
				MEMBER(b_must_sync_ragdoll_state, client::C_CSPlayerPawn, bool);
				MEMBER(n_ragdoll_damage_bone, client::C_CSPlayerPawn, int32_t);
				MEMBER(v_ragdoll_damage_force, client::C_CSPlayerPawn, vector);
				MEMBER(v_ragdoll_damage_position, client::C_CSPlayerPawn, vector);
				MEMBER_ARR(sz_ragdoll_damage_weapon_name, client::C_CSPlayerPawn, 64, char);
				MEMBER(b_ragdoll_damage_headshot, client::C_CSPlayerPawn, bool);
				MEMBER(v_ragdoll_server_origin, client::C_CSPlayerPawn, vector);
				MEMBER(b_last_head_bone_transform_is_valid, client::C_CSPlayerPawn, bool);
				MEMBER(last_land_time, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(b_on_ground_last_tick, client::C_CSPlayerPawn, bool);
				MEMBER(q_death_eye_angles, client::C_CSPlayerPawn, qangle);
				MEMBER(b_skip_one_head_constraint_update, client::C_CSPlayerPawn, bool);
				MEMBER(b_left_handed, client::C_CSPlayerPawn, bool);
				MEMBER(f_switched_handedness_time, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(fl_viewmodel_offset_x, client::C_CSPlayerPawn, float);
				MEMBER(fl_viewmodel_offset_y, client::C_CSPlayerPawn, float);
				MEMBER(fl_viewmodel_offset_z, client::C_CSPlayerPawn, float);
				MEMBER(fl_viewmodel_fov, client::C_CSPlayerPawn, float);
				MEMBER_ARR(vec_player_patch_econ_indices, client::C_CSPlayerPawn, 5, uint32_t);
				MEMBER(gun_game_immunity_color, client::C_CSPlayerPawn, color);
				MEMBER(vec_bullet_hit_models, client::C_CSPlayerPawn, cutl_vector<client::C_BulletHitModel*>);
				MEMBER(b_is_walking, client::C_CSPlayerPawn, bool);
				MEMBER(third_person_heading, client::C_CSPlayerPawn, qangle);
				MEMBER(fl_slope_drop_offset, client::C_CSPlayerPawn, float);
				MEMBER(fl_slope_drop_height, client::C_CSPlayerPawn, float);
				MEMBER(v_head_constraint_offset, client::C_CSPlayerPawn, vector);
				MEMBER(entity_spotted_state, client::C_CSPlayerPawn, client::EntitySpottedState_t);
				MEMBER(b_is_scoped, client::C_CSPlayerPawn, bool);
				MEMBER(b_resume_zoom, client::C_CSPlayerPawn, bool);
				MEMBER(b_is_defusing, client::C_CSPlayerPawn, bool);
				MEMBER(b_is_grabbing_hostage, client::C_CSPlayerPawn, bool);
				MEMBER(i_blocking_use_action_in_progress, client::C_CSPlayerPawn, client::CSPlayerBlockingUseAction_t);
				MEMBER(fl_emit_sound_time, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(b_in_no_defuse_area, client::C_CSPlayerPawn, bool);
				MEMBER(n_which_bomb_zone, client::C_CSPlayerPawn, int32_t);
				MEMBER(i_shots_fired, client::C_CSPlayerPawn, int32_t);
				MEMBER(fl_flinch_stack, client::C_CSPlayerPawn, float);
				MEMBER(fl_velocity_modifier, client::C_CSPlayerPawn, float);
				MEMBER(fl_hit_heading, client::C_CSPlayerPawn, float);
				MEMBER(n_hit_body_part, client::C_CSPlayerPawn, int32_t);
				MEMBER(b_wait_for_no_attack, client::C_CSPlayerPawn, bool);
				MEMBER(ignore_ladder_jump_time, client::C_CSPlayerPawn, float);
				MEMBER(b_killed_by_headshot, client::C_CSPlayerPawn, bool);
				MEMBER(armor_value, client::C_CSPlayerPawn, int32_t);
				MEMBER(un_current_equipment_value, client::C_CSPlayerPawn, uint16_t);
				MEMBER(un_round_start_equipment_value, client::C_CSPlayerPawn, uint16_t);
				MEMBER(un_freezetime_end_equipment_value, client::C_CSPlayerPawn, uint16_t);
				MEMBER(n_last_killer_index, client::C_CSPlayerPawn, CEntityIndex);
				MEMBER(b_old_is_scoped, client::C_CSPlayerPawn, bool);
				MEMBER(b_has_death_info, client::C_CSPlayerPawn, bool);
				MEMBER(fl_death_info_time, client::C_CSPlayerPawn, float);
				MEMBER(vec_death_info_origin, client::C_CSPlayerPawn, vector);
				MEMBER(grenade_parameter_stash_time, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(b_grenade_parameters_stashed, client::C_CSPlayerPawn, bool);
				MEMBER(ang_stashed_shoot_angles, client::C_CSPlayerPawn, qangle);
				MEMBER(vec_stashed_grenade_throw_position, client::C_CSPlayerPawn, vector);
				MEMBER(vec_stashed_velocity, client::C_CSPlayerPawn, vector);
				MEMBER_ARR(ang_shoot_angle_history, client::C_CSPlayerPawn, 2, qangle);
				MEMBER_ARR(vec_throw_position_history, client::C_CSPlayerPawn, 2, vector);
				MEMBER_ARR(vec_velocity_history, client::C_CSPlayerPawn, 2, vector);
				MEMBER(predicted_damage_tags, client::C_CSPlayerPawn, C_UtlVectorEmbeddedNetworkVar<client::PredictedDamageTag_t>);
				MEMBER(n_prev_highest_received_damage_tag_tick, client::C_CSPlayerPawn, entity2::GameTick_t);
				MEMBER(n_highest_applied_damage_tag_tick, client::C_CSPlayerPawn, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSPlayerPawn

			class C_EconEntity : public client::C_BaseFlex {
			public:
				MEMBER(fl_flex_delay_time, client::C_EconEntity, float);
				MEMBER(fl_flex_delayed_weight, client::C_EconEntity, float32*);
				MEMBER(b_attributes_initialized, client::C_EconEntity, bool);
				MEMBER(attribute_manager, client::C_EconEntity, client::C_AttributeContainer);
				MEMBER(original_owner_xuid_low, client::C_EconEntity, uint32_t);
				MEMBER(original_owner_xuid_high, client::C_EconEntity, uint32_t);
				MEMBER(n_fallback_paint_kit, client::C_EconEntity, int32_t);
				MEMBER(n_fallback_seed, client::C_EconEntity, int32_t);
				MEMBER(fl_fallback_wear, client::C_EconEntity, float);
				MEMBER(n_fallback_stat_trak, client::C_EconEntity, int32_t);
				MEMBER(b_clientside, client::C_EconEntity, bool);
				MEMBER(b_particle_systems_created, client::C_EconEntity, bool);
				MEMBER(vec_attached_particles, client::C_EconEntity, cutl_vector<int32_t>);
				MEMBER(h_viewmodel_attachment, client::C_EconEntity, chandle<client::CBaseAnimGraph>);
				MEMBER(i_old_team, client::C_EconEntity, int32_t);
				MEMBER(b_attachment_dirty, client::C_EconEntity, bool);
				MEMBER(n_unloaded_model_index, client::C_EconEntity, int32_t);
				MEMBER(i_num_owner_validation_retries, client::C_EconEntity, int32_t);
				MEMBER(h_old_providee, client::C_EconEntity, chandle<client::C_BaseEntity>);
				MEMBER(vec_attached_models, client::C_EconEntity, cutl_vector<client::C_EconEntity_AttachedModelData_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EconEntity

			class C_BasePlayerWeapon : public client::C_EconEntity {
			public:
				MEMBER(n_next_primary_attack_tick, client::C_BasePlayerWeapon, entity2::GameTick_t);
				MEMBER(fl_next_primary_attack_tick_ratio, client::C_BasePlayerWeapon, float);
				MEMBER(n_next_secondary_attack_tick, client::C_BasePlayerWeapon, entity2::GameTick_t);
				MEMBER(fl_next_secondary_attack_tick_ratio, client::C_BasePlayerWeapon, float);
				MEMBER(i_clip1, client::C_BasePlayerWeapon, int32_t);
				MEMBER(i_clip2, client::C_BasePlayerWeapon, int32_t);
				MEMBER_ARR(p_reserve_ammo, client::C_BasePlayerWeapon, 2, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BasePlayerWeapon

		}
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_client_H

/*
		namespace client {
			class CNetworkVelocityVector;
			class CAnimGraphControllerBase;
			class C_CSGO_PreviewPlayer_GraphController;
			class C_CSGO_PreviewModel_GraphController;
			class CCSGOViewModel_GraphController;
			class C_Chicken_GraphController;
			class IRagdoll;
			class CompositeMaterialMatchFilter_t;
			class CFiringModeInt;
			class EventClientProcessInput_t;
			class EventClientPollNetworking_t;
			class CInButtonState;
			class IClientAlphaProperty;
			class CClientAlphaProperty;
			class CTakeDamageSummaryScopeGuard;
			class ParticleIndex_t;
			class QuestProgress;
			class EventSetTime_t;
			class IEconItemInterface;
			class C_EconItemView;
			class sndopvarlatchdata_t;
			class CTakeDamageInfo;
			class WaterWheelDrag_t;
			class CCompositeMaterialEditorDoc;
			class SummaryTakeDamageInfo_t;
			class EventClientFrameSimulate_t;
			class CompMatPropertyMutator_t;
			class EventClientPreOutput_t;
			class EventModInitialized_t;
			class CompMatMutatorCondition_t;
			class SoundeventPathCornerPairNetworked_t;
			class C_IronSightController;
			class CSceneEventInfo;
			class CommandToolCommand_t;
			class C_CommandContext;
			class CNavLinkAnimgraphVar;
			class AmmoTypeInfo_t;
			class GameAmmoTypeInfo_t;
			class EventFrameBoundary_t;
			class EventClientProcessGameInput_t;
			class TimedEvent;
			class EventPreDataUpdate_t;
			class CInterpolatedValue;
			class IChoreoServices;
			class CNetworkOriginQuantizedVector;
			class CGlowOverlay;
			class C_LightGlowOverlay;
			class CFireOverlay;
			class C_SunGlowOverlay;
			class EventServerEndAsyncPostTickWork_t;
			class CRopeOverlapHit;
			class CDestructiblePartsSystemData;
			class CAnimEventListenerBase;
			class CAnimEventListener;
			class CAnimEventQueueListener;
			class CompositeMaterialInputLooseVariable_t;
			class CSimpleSimTimer;
			class CRandSimTimer;
			class CSimTimer;
			class CStopwatchBase;
			class CSimpleStopwatch;
			class CRandStopwatch;
			class CStopwatch;
			class EventClientSceneSystemThreadStateChange_t;
			class CPlayerControllerComponent;
			class CCSPlayerController_ActionTrackingServices;
			class CCSPlayerController_InGameMoneyServices;
			class CCSPlayerController_InventoryServices;
			class CCSPlayerController_DamageServices;
			class CDecalInfo;
			class IGapHost_GameEntity;
			class CSoundEnvelope;
			class ragdollelement_t;
			class CCSGOPlayerAnimGraphState;
			class CNetworkViewOffsetVector;
			class EventClientPollInput_t;
			class EventSimulate_t;
			class EventAdvanceTick_t;
			class EventClientAdvanceTick_t;
			class EventServerAdvanceTick_t;
			class EventClientPauseSimulate_t;
			class EventServerSimulate_t;
			class EventServerProcessNetworking_t;
			class EventClientSimulate_t;
			class EventServerPostSimulate_t;
			class EventPostAdvanceTick_t;
			class EventClientPostAdvanceTick_t;
			class EventServerPostAdvanceTick_t;
			class EventServerBeginAsyncPostTickWork_t;
			class EventClientPostSimulate_t;
			class EventClientPreSimulate_t;
			class EventServerPollNetworking_t;
			class CGlobalLightBase;
			class ModelConfigHandle_t;
			class C_EnvWindShared_WindAveEvent_t;
			class SellbackPurchaseEntry_t;
			class CGlowSprite;
			class CGameSceneNode;
			class CSkeletonInstance;
			class CNavLinkMovementVData;
			class fogparams_t;
			class CNetworkOriginCellCoordQuantizedVector;
			class EntityRenderAttribute_t;
			class CNetworkedSequenceOperation;
			class ServerAuthoritativeWeaponSlot_t;
			class C_BaseEntityAPI;
			class CTakeDamageInfoAPI;
			class CompositeMaterialAssemblyProcedure_t;
			class C_SceneEntity_QueuedEvents_t;
			class shard_model_desc_t;
			class CRR_Response;
			class CSoundPatch;
			class GeneratedTextureHandle_t;
			class CSkillDamage;
			class audioparams_t;
			class CWorldCompositionChunkReferenceElement_t;
			class CAttributeManager_cached_attribute_float_t;
			class CBuoyancyHelper;
			class IntervalTimer;
			class CTimeline;
			class C_BaseFlex_Emphasized_Phoneme;
			class EngineCountdownTimer;
			class C_RetakeGameRules;
			class SceneEventId_t;
			class WeaponPurchaseTracker_t;
			class ResponseParams;
			class ragdoll_t;
			class CNetworkTransmitComponent;
			class CompositeMaterial_t;
			class ISkeletonAnimationController;
			class CSkeletonAnimationController;
			class CBaseAnimGraphController;
			class EventAppShutdown_t;
			class C_EnvWindShared_WindVariationEvent_t;
			class CDamageRecord;
			class EventClientAdvanceNonRenderedFrame_t;
			class CAttributeList;
			class C_EconEntity_AttachedModelData_t;
			class CPlayerSprayDecalRenderHelper;
			class CModelState;
			class SequenceHistory_t;
			class CEntitySubclassVDataBase;
			class CPrecipitationVData;
			class CBasePlayerWeaponVData;
			class CCSWeaponBaseVData;
			class CBasePlayerVData;
			class CPlayerPawnComponent;
			class CCSPlayer_DamageReactServices;
			class CPlayer_ItemServices;
			class CCSPlayer_ItemServices;
			class CPlayer_AutoaimServices;
			class CCSPlayer_BuyServices;
			class CCSPlayer_ActionTrackingServices;
			class CCSPlayer_GlowServices;
			class CPlayer_MovementServices;
			class CPlayer_MovementServices_Humanoid;
			class CCSPlayer_MovementServices;
			class CCSObserver_MovementServices;
			class CPlayer_WaterServices;
			class CCSPlayer_WaterServices;
			class CPlayer_ObserverServices;
			class CCSObserver_ObserverServices;
			class CCSPlayer_HostageServices;
			class CCSPlayer_BulletServices;
			class CPlayer_FlashlightServices;
			class CCSPlayer_PingServices;
			class CPlayer_UseServices;
			class CCSPlayer_UseServices;
			class CCSObserver_UseServices;
			class CPlayer_WeaponServices;
			class CCSPlayer_WeaponServices;
			class CPlayer_CameraServices;
			class CCSPlayerBase_CameraServices;
			class CCSObserver_CameraServices;
			class CCSPlayer_CameraServices;
			class CPlayer_ViewModelServices;
			class CCSObserver_ViewModelServices;
			class CCSPlayer_ViewModelServices;
			class CSkillInt;
			class EventSplitScreenStateChanged_t;
			class CCSPointScriptExtensions_observer;
			class CSkillFloat;
			class ActiveModelConfig_t;
			class RagdollCreationParams_t;
			class CTakeDamageResult;
			class hudtextparms_t;
			class EventPostDataUpdate_t;
			class EventClientProcessNetworking_t;
			class CAnimGraphNetworkedVariables;
			class CResponseCriteriaSet;
			class CAttributeManager;
			class C_AttributeContainer;
			class WaterWheelFrictionScale_t;
			class ViewAngleServerChange_t;
			class CPulseCell_PlaySequence_CursorState_t;
			class CBasePlayerControllerAPI;
			class CCSPointScriptExtensions_player;
			class CRemapFloat;
			class CFiringModeFloat;
			class CompositeMaterialInputContainer_t;
			class CPointTemplateAPI;
			class CCSPointScriptExtensions_CCSWeaponBaseVData;
			class C_fogplayerparams_t;
			class CDestructiblePartsSystemData_HitGroupInfoAndPartData;
			class CCSPointScriptExtensions_entity;
			class EventClientPostOutput_t;
			class WeaponPurchaseCount_t;
			class CSharedGapTypeQueryRegistration;
			class IHasAttributes;
			class CSPerRoundStats_t;
			class CSMatchStats_t;
			class PhysicsRagdollPose_t;
			class CCSPointScriptExtensions_player_controller;
			class CCollisionProperty;
			class CGlowProperty;
			class CDestructiblePartsSystemData_PartData;
			class CProjectedTextureBase;
			class VPhysicsCollisionAttribute_t;
			class C_GameRules;
			class C_SingleplayRules;
			class C_MultiplayRules;
			class C_TeamplayRules;
			class C_CSGameRules;
			class C_EnvWindShared;
			class EngineLoopState_t;
			class CPathSimpleAPI;
			class CFlashlightEffect;
			class CEffectData;
			class CFootstepTableHandle;
			class HullFlags_t;
			class PointCameraSettings_t;
			class CClientGapTypeQueryRegistration;
			class EventClientOutput_t;
			class CPulseAnimFuncs;
			class EventSimpleLoopFrameUpdate_t;
			class WrappedPhysicsJoint_t;
			class CCopyRecipientFilter;
			class PredictedDamageTag_t;
			class CDestructiblePartRuntimeData;
			class CGameSceneNodeHandle;
			class EntitySpottedState_t;
			class C_RopeKeyframe_CPhysicsDelegate;
			class AmmoIndex_t;
			class CountdownTimer;
			class CCSGameModeRules;
			class CCSGameModeRules_Noop;
			class CCSGameModeRules_ArmsRace;
			class CCSGameModeRules_Deathmatch;
			class CScriptUniformRandomStream;
			class CCSPointScriptExtensions_weapon_cs_base;
			class CEconItemAttribute;
			class EventProfileStorageAvailable_t;
			class sky3dparams_t;
			class thinkfunc_t;
			class CBreakableStageHelper;
			class CDestructiblePartRuntimeDataVector;
			class CompositeMaterialEditorPoint_t;
			class ResponseFollowup;
			class CLogicRelay;
			class C_CSGO_TeamSelectCharacterPosition;
			class C_InfoInstructorHintHostageRescueZone;
			class C_Item;
			class CBodyComponentBaseAnimGraph;
			class C_PointClientUIHUD;
			class C_SoundOpvarSetPathCornerEntity;
			class C_HEGrenade;
			class C_FuncMover;
			class C_WeaponM4A1;
			class C_TriggerLerpObject;
			class C_SoundEventPathCornerEntity;
			class CEnvSoundscapeTriggerable;
			class C_HostageCarriableProp;
			class C_WeaponM249;
			class C_PlayerPing;
			class C_Chicken;
			class C_BaseCSGrenade;
			class C_Fish;
			class C_GameRulesProxy;
			class C_EnvProjectedTexture;
			class CBodyComponentSkeletonInstance;
			class C_WeaponCZ75a;
			class C_EnvCombinedLightProbeVolume;
			class CBasePlayerController;
			class C_BaseModelEntity;
			class CCSGO_WingmanIntroCounterTerroristPosition;
			class C_SoundEventEntityAlias_snd_event_point;
			class C_FootstepControl;
			class CTripWireFireProjectile;
			class C_LightSpotEntity;
			class C_EnvDetailController;
			class C_SpotlightEnd;
			class C_EnvDecal;
			class C_PointCamera;
			class C_LightDirectionalEntity;
			class C_BarnLight;
			class C_EnvWind;
			class C_TriggerPhysics;
			class C_BaseCombatCharacter;
			class C_FlashbangProjectile;
			class C_SoundEventSphereEntity;
			class C_BaseEntity;
			class C_MolotovGrenade;
			class C_SoundAreaEntitySphere;
			class C_DynamicPropAlias_cable_dynamic;
			class C_SceneEntity;
			class C_FuncMonitor;
			class C_SoundEventAABBEntity;
			class C_TriggerMultiple;
			class C_EnvVolumetricFogVolume;
			class C_GlobalLight;
			class C_Inferno;
			class CBodyComponent;
			class C_LightGlow;
			class C_PlayerSprayDecal;
			class C_CSTeam;
			class C_ClientRagdoll;
			class C_InfoLadderDismount;
			class C_CSPlayerResource;
			class CBodyComponentPoint;
			class C_SmokeGrenadeProjectile;
			class C_CSGO_MapPreviewCameraPath;
			class CCSGO_WingmanIntroTerroristPosition;
			class C_CSGO_TerroristWingmanIntroCamera;
			class C_WeaponSawedoff;
			class C_WeaponMP7;
			class CCSPlayerController;
			class C_WeaponMag7;
			class C_CSGO_MapPreviewCameraPathNode;
			class C_DEagle;
			class C_CSPlayerPawn;
			class C_Melee;
			class C_RagdollPropAttached;
			class CInfoDynamicShadowHint;
			class C_BaseCSGrenadeProjectile;
			class C_BaseTrigger;
			class C_WeaponBaseItem;
			class C_SensorGrenadeProjectile;
			class C_BreakableProp;
			class C_BaseButton;
			class CInfoParticleTarget;
			class C_Item_Healthshot;
			class C_WeaponAug;
			class CEnvSoundscapeProxyAlias_snd_soundscape_proxy;
			class C_ColorCorrectionVolume;
			class C_CSGO_TeamIntroTerroristPosition;
			class C_PointClientUIWorldPanel;
			class C_CSMinimapBoundary;
			class C_CSGO_EndOfMatchCharacterPosition;
			class C_Knife;
			class CMapInfo;
			class C_SoundOpvarSetAABBEntity;
			class C_PropDoorRotating;
			class CCitadelSoundOpvarSetOBB;
			class C_Team;
			class C_CSGO_EndOfMatchLineupStart;
			class C_SoundAreaEntityOrientedBox;
			class C_FuncMoveLinear;
			class C_TextureBasedAnimatable;
			class C_DynamicPropAlias_prop_dynamic_override;
			class C_SoundOpvarSetPointEntity;
			class C_CSPlayerPawnBase;
			class C_LightOrthoEntity;
			class C_CSGO_PreviewPlayer;
			class CSkyboxReference;
			class C_TonemapController2Alias_env_tonemap_controller2;
			class CRenderComponent;
			class C_PathParticleRopeAlias_path_particle_rope_clientside;
			class C_CSGOViewModel;
			class C_WeaponSSG08;
			class C_EnvLightProbeVolume;
			class C_PointClientUIWorldTextPanel;
			class C_ViewmodelAttachmentModel;
			class C_CSGO_TeamSelectCamera;
			class C_Flashbang;
			class CBumpMine;
			class C_BaseDoor;
			class CRagdollManager;
			class CPointOffScreenIndicatorUi;
			class C_TeamRoundTimer;
			class C_WeaponGlock;
			class C_SmokeGrenade;
			class C_WeaponGalilAR;
			class C_WorldModelGloves;
			class CPathSimple;
			class CInfoWorldLayer;
			class C_CSObserverPawn;
			class CBodyComponentBaseModelEntity;
			class CTripWireFire;
			class C_CSWeaponBaseGun;
			class CEnvSoundscapeProxy;
			class C_SkyCamera;
			class C_World;
			class CEnvSoundscape;
			class C_EntityDissolve;
			class C_CSGO_TeamIntroCounterTerroristPosition;
			class C_PostProcessingVolume;
			class CServerOnlyModelEntity;
			class C_FuncRotating;
			class C_CSGO_TeamSelectCounterTerroristPosition;
			class CPulseCell_LerpCameraSettings_CursorState_t;
			class C_BaseFire;
			class C_ItemDogtags;
			class C_DecoyProjectile;
			class C_WaterBullet;
			class CCSPointScriptEntity;
			class C_C4;
			class CBaseAnimGraph;
			class CBreachChargeProjectile;
			class C_PointEntity;
			class C_PathParticleRope;
			class C_WeaponP90;
			class CEnvSoundscapeAlias_snd_soundscape;
			class C_BasePlayerWeapon;
			class C_RagdollProp;
			class C_EnvSky;
			class C_WeaponAWP;
			class C_BasePlayerPawn;
			class CLogicalEntity;
			class C_SoundEventOBBEntity;
			class C_TriggerBuoyancy;
			class C_Hostage;
			class C_RopeKeyframe;
			class C_GradientFog;
			class C_CSGO_TeamPreviewCamera;
			class C_EconWearable;
			class CCSGO_WingmanIntroCharacterPosition;
			class C_HEGrenadeProjectile;
			class CInfoTarget;
			class C_BaseToggle;
			class C_NetTestBaseCombatCharacter;
			class CWaterSplasher;
			class C_KeychainModule;
			class C_ModelPointEntity;
			class C_FireSmoke;
			class C_WeaponRevolver;
			class CPointTemplate;
			class C_FireFromAboveSprite;
			class C_SoundOpvarSetOBBWindEntity;
			class C_WeaponMP5SD;
			class C_WeaponShield;
			class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel;
			class C_DynamicPropAlias_dynamic_prop;
			class CPointChildModifier;
			class C_PointCameraVFOV;
			class C_CSGO_TeamSelectTerroristPosition;
			class C_TonemapController2;
			class C_WeaponG3SG1;
			class CFuncWater;
			class C_SoundOpvarSetAutoRoomEntity;
			class C_EconEntity;
			class C_WeaponSG556;
			class C_RectLight;
			class C_WeaponNegev;
			class C_ParticleSystem;
			class C_CSGO_TeamPreviewModel;
			class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable;
			class C_CSGameRulesProxy;
			class CBombTarget;
			class CWeaponZoneRepulsor;
			class C_BaseFlex;
			class C_CSGO_EndOfMatchLineupEnd;
			class C_Multimeter;
			class C_OmniLight;
			class C_CsmFovOverride;
			class C_PlantedC4;
			class C_Precipitation;
			class C_PhysMagnet;
			class C_ColorCorrection;
			class C_WeaponUMP45;
			class CHostageRescueZoneShim;
			class CLightComponent;
			class C_TintController;
			class C_WeaponP250;
			class C_CSGO_CounterTerroristWingmanIntroCamera;
			class C_WeaponNOVA;
			class CGrenadeTracer;
			class C_WeaponUSPSilencer;
			class C_PointClientUIDialog;
			class C_PrecipitationBlocker;
			class C_CSGO_CounterTerroristTeamIntroCamera;
			class C_HandleTest;
			class C_EnvWindClientside;
			class C_WeaponMAC10;
			class CSpriteOriented;
			class C_IncendiaryGrenade;
			class C_WeaponFamas;
			class C_FireSprite;
			class C_EnvParticleGlow;
			class C_SoundEventEntity;
			class C_CSGO_TeamIntroCharacterPosition;
			class C_CSGO_PreviewModelAlias_csgo_item_previewmodel;
			class C_WeaponM4A1Silencer;
			class C_Sun;
			class C_CSGO_EndOfMatchLineupEndpoint;
			class C_DynamicProp;
			class CHitboxComponent;
			class C_BulletHitModel;
			class C_MapVetoPickController;
			class C_FireCrackerBlast;
			class C_WeaponMP9;
			class C_PointCommentaryNode;
			class C_AK47;
			class C_SensorGrenade;
			class C_FuncLadder;
			class C_CSGO_PreviewModel;
			class C_SoundOpvarSetOBBEntity;
			class C_FuncElectrifiedVolume;
			class C_BaseGrenade;
			class C_EnvVolumetricFogController;
			class C_WeaponTec9;
			class C_Breakable;
			class C_SoundAreaEntityBase;
			class CCSClientPointScriptEntity;
			class C_CS2WeaponModuleBase;
			class C_InfoVisibilityBox;
			class C_BaseViewModel;
			class C_BaseClientUIEntity;
			class C_CSWeaponBase;
			class C_FuncTrackTrain;
			class CBaseProp;
			class C_WeaponHKP2000;
			class C_WeaponXM1014;
			class C_MapPreviewParticleSystem;
			class CBreachCharge;
			class C_EnvCubemap;
			class C_PredictedViewModel;
			class C_WeaponBizon;
			class C_PortraitWorldCallbackHandler;
			class C_PointValueRemapper;
			class C_EnvCubemapBox;
			class C_CSGO_EndOfMatchCamera;
			class C_SoundOpvarSetPointBase;
			class C_PhysBox;
			class C_WeaponTaser;
			class C_LightEntity;
			class C_Fists;
			class C_PhysicsPropMultiplayer;
			class CInfoDynamicShadowHintBox;
			class C_EnvCubemapFog;
			class C_ShatterGlassShardPhysics;
			class C_WeaponElite;
			class C_PlayerVisibility;
			class CPropDataComponent;
			class C_WeaponSCAR20;
			class C_DecoyGrenade;
			class C_LocalTempEntity;
			class C_MolotovProjectile;
			class C_LightEnvironmentEntity;
			class CInfoOffscreenPanoramaTexture;
			class C_DynamicLight;
			class C_TriggerVolume;
			class C_StattrakModule;
			class C_PhysicsProp;
			class C_Beam;
			class C_CSGO_TeamPreviewCharacterPosition;
			class C_EnvScreenOverlay;
			class C_PointWorldText;
			class CBumpMineProjectile;
			class C_WeaponFiveSeven;
			class C_BasePropDoor;
			class C_NametagModule;
			class C_PhysPropClientside;
			class C_VoteController;
			class C_FogController;
			class C_FuncBrush;
			class C_FuncConveyor;
			class CHostageRescueZone;
			class CTablet;
			class CCSPointScript;
			class C_EntityFlame;
			class C_Sprite;
			class C_CSGO_TerroristTeamIntroCamera;
			class CPulseCell_Step_EntFire;
			class CPulseCell_PlaySequence;
			class CPulseCell_LerpCameraSettings;
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class C_BaseCombatCharacter_WaterWakeMode_t : std::uint32_t {
				WATER_WAKE_NONE = 0x0,
				WATER_WAKE_IDLE = 0x1,
				WATER_WAKE_WALKING = 0x2,
				WATER_WAKE_RUNNING = 0x3,
				WATER_WAKE_WATER_OVERHEAD = 0x4,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class TimelineCompression_t : std::uint32_t {
				TIMELINE_COMPRESSION_SUM = 0x0,
				TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
				TIMELINE_COMPRESSION_AVERAGE = 0x2,
				TIMELINE_COMPRESSION_AVERAGE_BLEND = 0x3,
				TIMELINE_COMPRESSION_TOTAL = 0x4,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class CSWeaponMode : std::uint32_t {
				Primary_Mode = 0x0,
				Secondary_Mode = 0x1,
				WeaponMode_MAX = 0x2,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class IChoreoServices_ScriptState_t : std::uint32_t {
				SCRIPT_PLAYING = 0x0,
				SCRIPT_WAIT = 0x1,
				SCRIPT_POST_IDLE = 0x2,
				SCRIPT_CLEANUP = 0x3,
				SCRIPT_MOVE_TO_MARK = 0x4,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class SubclassVDataChangeType_t : std::uint32_t {
				SUBCLASS_VDATA_CREATED = 0x0,
				SUBCLASS_VDATA_SUBCLASS_CHANGED = 0x1,
				SUBCLASS_VDATA_RELOADED = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class C4LightEffect_t : std::uint32_t {
				eLightEffectNone = 0x0,
				eLightEffectDropped = 0x1,
				eLightEffectThirdPersonHeld = 0x2,
			};
			// Enumerator count: 74
			// Alignment: 
			// Size: 0x4
			enum class loadout_slot_t : std::uint32_t {
				LOADOUT_SLOT_PROMOTED = 0xfffffffe,
				LOADOUT_SLOT_INVALID = 0xffffffff,
				LOADOUT_SLOT_MELEE = 0x0,
				LOADOUT_SLOT_C4 = 0x1,
				LOADOUT_SLOT_FIRST_AUTO_BUY_WEAPON = 0x0,
				LOADOUT_SLOT_LAST_AUTO_BUY_WEAPON = 0x1,
				LOADOUT_SLOT_SECONDARY0 = 0x2,
				LOADOUT_SLOT_SECONDARY1 = 0x3,
				LOADOUT_SLOT_SECONDARY2 = 0x4,
				LOADOUT_SLOT_SECONDARY3 = 0x5,
				LOADOUT_SLOT_SECONDARY4 = 0x6,
				LOADOUT_SLOT_SECONDARY5 = 0x7,
				LOADOUT_SLOT_SMG0 = 0x8,
				LOADOUT_SLOT_SMG1 = 0x9,
				LOADOUT_SLOT_SMG2 = 0xa,
				LOADOUT_SLOT_SMG3 = 0xb,
				LOADOUT_SLOT_SMG4 = 0xc,
				LOADOUT_SLOT_SMG5 = 0xd,
				LOADOUT_SLOT_RIFLE0 = 0xe,
				LOADOUT_SLOT_RIFLE1 = 0xf,
				LOADOUT_SLOT_RIFLE2 = 0x10,
				LOADOUT_SLOT_RIFLE3 = 0x11,
				LOADOUT_SLOT_RIFLE4 = 0x12,
				LOADOUT_SLOT_RIFLE5 = 0x13,
				LOADOUT_SLOT_HEAVY0 = 0x14,
				LOADOUT_SLOT_HEAVY1 = 0x15,
				LOADOUT_SLOT_HEAVY2 = 0x16,
				LOADOUT_SLOT_HEAVY3 = 0x17,
				LOADOUT_SLOT_HEAVY4 = 0x18,
				LOADOUT_SLOT_HEAVY5 = 0x19,
				LOADOUT_SLOT_FIRST_WHEEL_WEAPON = 0x2,
				LOADOUT_SLOT_LAST_WHEEL_WEAPON = 0x19,
				LOADOUT_SLOT_FIRST_PRIMARY_WEAPON = 0x8,
				LOADOUT_SLOT_LAST_PRIMARY_WEAPON = 0x19,
				LOADOUT_SLOT_FIRST_WHEEL_GRENADE = 0x1a,
				LOADOUT_SLOT_GRENADE0 = 0x1a,
				LOADOUT_SLOT_GRENADE1 = 0x1b,
				LOADOUT_SLOT_GRENADE2 = 0x1c,
				LOADOUT_SLOT_GRENADE3 = 0x1d,
				LOADOUT_SLOT_GRENADE4 = 0x1e,
				LOADOUT_SLOT_GRENADE5 = 0x1f,
				LOADOUT_SLOT_LAST_WHEEL_GRENADE = 0x1f,
				LOADOUT_SLOT_EQUIPMENT0 = 0x20,
				LOADOUT_SLOT_EQUIPMENT1 = 0x21,
				LOADOUT_SLOT_EQUIPMENT2 = 0x22,
				LOADOUT_SLOT_EQUIPMENT3 = 0x23,
				LOADOUT_SLOT_EQUIPMENT4 = 0x24,
				LOADOUT_SLOT_EQUIPMENT5 = 0x25,
				LOADOUT_SLOT_FIRST_WHEEL_EQUIPMENT = 0x20,
				LOADOUT_SLOT_LAST_WHEEL_EQUIPMENT = 0x25,
				LOADOUT_SLOT_CLOTHING_CUSTOMPLAYER = 0x26,
				LOADOUT_SLOT_CLOTHING_CUSTOMHEAD = 0x27,
				LOADOUT_SLOT_CLOTHING_FACEMASK = 0x28,
				LOADOUT_SLOT_CLOTHING_HANDS = 0x29,
				LOADOUT_SLOT_FIRST_COSMETIC = 0x29,
				LOADOUT_SLOT_LAST_COSMETIC = 0x29,
				LOADOUT_SLOT_CLOTHING_EYEWEAR = 0x2a,
				LOADOUT_SLOT_CLOTHING_HAT = 0x2b,
				LOADOUT_SLOT_CLOTHING_LOWERBODY = 0x2c,
				LOADOUT_SLOT_CLOTHING_TORSO = 0x2d,
				LOADOUT_SLOT_CLOTHING_APPEARANCE = 0x2e,
				LOADOUT_SLOT_MISC0 = 0x2f,
				LOADOUT_SLOT_MISC1 = 0x30,
				LOADOUT_SLOT_MISC2 = 0x31,
				LOADOUT_SLOT_MISC3 = 0x32,
				LOADOUT_SLOT_MISC4 = 0x33,
				LOADOUT_SLOT_MISC5 = 0x34,
				LOADOUT_SLOT_MISC6 = 0x35,
				LOADOUT_SLOT_MUSICKIT = 0x36,
				LOADOUT_SLOT_FLAIR0 = 0x37,
				LOADOUT_SLOT_SPRAY0 = 0x38,
				LOADOUT_SLOT_FIRST_ALL_CHARACTER = 0x36,
				LOADOUT_SLOT_LAST_ALL_CHARACTER = 0x38,
				LOADOUT_SLOT_COUNT = 0x39,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class StanceType_t : std::uint32_t {
				// MPropertySuppressEnumerator
				STANCE_CURRENT = 0xffffffff,
				// MPropertyFriendlyName "Default"
				STANCE_DEFAULT = 0x0,
				// MPropertyFriendlyName "Crouching"
				STANCE_CROUCHING = 0x1,
				// MPropertyFriendlyName "Prone"
				STANCE_PRONE = 0x2,
				// MPropertySuppressEnumerator
				NUM_STANCES = 0x3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ObserverInterpState_t : std::uint32_t {
				OBSERVER_INTERP_NONE = 0x0,
				OBSERVER_INTERP_TRAVELING = 0x1,
				OBSERVER_INTERP_SETTLING = 0x2,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class DoorState_t : std::uint32_t {
				DOOR_STATE_CLOSED = 0x0,
				DOOR_STATE_OPENING = 0x1,
				DOOR_STATE_OPEN = 0x2,
				DOOR_STATE_CLOSING = 0x3,
				DOOR_STATE_AJAR = 0x4,
			};
			// Enumerator count: 12
			// Alignment: 
			// Size: 0x4
			enum class Hull_t : std::uint32_t {
				HULL_HUMAN = 0x0,
				HULL_SMALL_CENTERED = 0x1,
				HULL_WIDE_HUMAN = 0x2,
				HULL_TINY = 0x3,
				HULL_MEDIUM = 0x4,
				HULL_TINY_CENTERED = 0x5,
				HULL_LARGE = 0x6,
				HULL_LARGE_CENTERED = 0x7,
				HULL_MEDIUM_TALL = 0x8,
				HULL_SMALL = 0x9,
				NUM_HULLS = 0xa,
				HULL_NONE = 0xb,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class PointTemplateClientOnlyEntityBehavior_t : std::uint32_t {
				CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
				CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1,
			};
			// Enumerator count: 18
			// Alignment: 
			// Size: 0x4
			enum class CSPlayerBlockingUseAction_t : std::uint32_t {
				k_CSPlayerBlockingUseAction_None = 0x0,
				k_CSPlayerBlockingUseAction_DefusingDefault = 0x1,
				k_CSPlayerBlockingUseAction_DefusingWithKit = 0x2,
				k_CSPlayerBlockingUseAction_HostageGrabbing = 0x3,
				k_CSPlayerBlockingUseAction_HostageDropping = 0x4,
				k_CSPlayerBlockingUseAction_OpeningSafe = 0x5,
				k_CSPlayerBlockingUseAction_EquippingParachute = 0x6,
				k_CSPlayerBlockingUseAction_EquippingHeavyArmor = 0x7,
				k_CSPlayerBlockingUseAction_EquippingContract = 0x8,
				k_CSPlayerBlockingUseAction_EquippingTabletUpgrade = 0x9,
				k_CSPlayerBlockingUseAction_TakingOffHeavyArmor = 0xa,
				k_CSPlayerBlockingUseAction_PayingToOpenDoor = 0xb,
				k_CSPlayerBlockingUseAction_CancelingSpawnRappelling = 0xc,
				k_CSPlayerBlockingUseAction_EquippingExoJump = 0xd,
				k_CSPlayerBlockingUseAction_PickingUpBumpMine = 0xe,
				k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 0xf,
				k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 0x10,
				k_CSPlayerBlockingUseAction_MaxCount = 0x11,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x4
			enum class PreviewCharacterMode : std::uint32_t {
				DIORAMA = 0x0,
				MAIN_MENU = 0x1,
				BUY_MENU = 0x2,
				TEAM_SELECT = 0x3,
				END_OF_MATCH = 0x4,
				INVENTORY_INSPECT = 0x5,
				WALKING = 0x6,
				TEAM_INTRO = 0x7,
				WINGMAN_INTRO = 0x8,
				BANNER = 0x9,
			};
			// Enumerator count: 17
			// Alignment: 
			// Size: 0x4
			enum class BaseExplosionTypes_t : std::uint32_t {
				// MPropertyFriendlyName "Default"
				EXPLOSION_TYPE_DEFAULT = 0x0,
				// MPropertyFriendlyName "Grenade"
				EXPLOSION_TYPE_GRENADE = 0x1,
				// MPropertyFriendlyName "Molotov"
				EXPLOSION_TYPE_MOLOTOV = 0x2,
				// MPropertyFriendlyName "Fireworks"
				EXPLOSION_TYPE_FIREWORKS = 0x3,
				// MPropertyFriendlyName "Gascan"
				EXPLOSION_TYPE_GASCAN = 0x4,
				// MPropertyFriendlyName "Gas Cylinder"
				EXPLOSION_TYPE_GASCYLINDER = 0x5,
				// MPropertyFriendlyName "Explosive Barrel"
				EXPLOSION_TYPE_EXPLOSIVEBARREL = 0x6,
				// MPropertyFriendlyName "Electrical"
				EXPLOSION_TYPE_ELECTRICAL = 0x7,
				// MPropertyFriendlyName "EMP"
				EXPLOSION_TYPE_EMP = 0x8,
				// MPropertyFriendlyName "Shrapnel"
				EXPLOSION_TYPE_SHRAPNEL = 0x9,
				// MPropertyFriendlyName "Smoke Grenade"
				EXPLOSION_TYPE_SMOKEGRENADE = 0xa,
				// MPropertyFriendlyName "Flashbang"
				EXPLOSION_TYPE_FLASHBANG = 0xb,
				// MPropertyFriendlyName "Tripmine"
				EXPLOSION_TYPE_TRIPMINE = 0xc,
				// MPropertyFriendlyName "Ice"
				EXPLOSION_TYPE_ICE = 0xd,
				// MPropertyFriendlyName "None"
				EXPLOSION_TYPE_NONE = 0xe,
				// MPropertyFriendlyName "Custom"
				EXPLOSION_TYPE_CUSTOM = 0xf,
				// MPropertySuppressEnumerator
				EXPLOSION_TYPE_COUNT = 0x10,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class WorldTextPanelOrientation_t : std::uint32_t {
				WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
				WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
				WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x1
			enum class SurroundingBoundsType_t : std::uint8_t {
				USE_OBB_COLLISION_BOUNDS = 0,
				USE_BEST_COLLISION_BOUNDS = 1,
				USE_HITBOXES = 2,
				USE_SPECIFIED_BOUNDS = 3,
				USE_GAME_CODE = 4,
				USE_ROTATION_EXPANDED_BOUNDS = 5,
				USE_ROTATION_EXPANDED_ORIENTED_BOUNDS = 6,
				USE_COLLISION_BOUNDS_NEVER_VPHYSICS = 7,
				USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 8,
				SURROUNDING_TYPE_BIT_COUNT = 3,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class EntityDisolveType_t : std::uint32_t {
				ENTITY_DISSOLVE_INVALID = 0xffffffff,
				ENTITY_DISSOLVE_NORMAL = 0x0,
				ENTITY_DISSOLVE_ELECTRICAL = 0x1,
				ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
				ENTITY_DISSOLVE_CORE = 0x3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class WorldTextPanelHorizontalAlign_t : std::uint32_t {
				WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0x0,
				WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
				WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class SequenceFinishNotifyState_t : std::uint8_t {
				eDoNotNotify = 0,
				eNotifyWhenFinished = 1,
				eNotifyTriggered = 2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class CSWeaponSilencerType : std::uint32_t {
				WEAPONSILENCER_NONE = 0x0,
				WEAPONSILENCER_DETACHABLE = 0x1,
				WEAPONSILENCER_INTEGRATED = 0x2,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x4
			enum class CompMatPropertyMutatorType_t : std::uint32_t {
				// MPropertyFriendlyName "Init With"
				COMP_MAT_PROPERTY_MUTATOR_INIT = 0x0,
				// MPropertyFriendlyName "Copy Matching Keys From"
				COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 0x1,
				// MPropertyFriendlyName "Copy Keys with Suffix"
				COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 0x2,
				// MPropertyFriendlyName "Copy Property From"
				COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 0x3,
				// MPropertyFriendlyName "Set Value"
				COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 0x4,
				// MPropertyFriendlyName "Generate Texture"
				COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 0x5,
				// MPropertyFriendlyName "Mutators"
				COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 0x6,
				// MPropertyFriendlyName "Pop Input Variable Queue"
				COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 0x7,
				// MPropertyFriendlyName "Draw Text"
				COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 0x8,
				// MPropertyFriendlyName "Random Roll Input Variables"
				COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 0x9,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x1
			enum class ItemFlagTypes_t : std::uint8_t {
				ITEM_FLAG_NONE = 0,
				ITEM_FLAG_CAN_SELECT_WITHOUT_AMMO = 1,
				ITEM_FLAG_NOAUTORELOAD = 2,
				ITEM_FLAG_NOAUTOSWITCHEMPTY = 4,
				ITEM_FLAG_LIMITINWORLD = 8,
				ITEM_FLAG_EXHAUSTIBLE = 16,
				ITEM_FLAG_DOHITLOCATIONDMG = 32,
				ITEM_FLAG_NOAMMOPICKUPS = 64,
				ITEM_FLAG_NOITEMPICKUP = 128,
			};
			// Enumerator count: 15
			// Alignment: 
			// Size: 0x4
			enum class CompositeMaterialInputLooseVariableType_t : std::uint32_t {
				// MPropertyFriendlyName "Boolean"
				LOOSE_VARIABLE_TYPE_BOOLEAN = 0x0,
				// MPropertyFriendlyName "Integer"
				LOOSE_VARIABLE_TYPE_INTEGER1 = 0x1,
				// MPropertyFriendlyName "Integer2"
				LOOSE_VARIABLE_TYPE_INTEGER2 = 0x2,
				// MPropertyFriendlyName "Integer3"
				LOOSE_VARIABLE_TYPE_INTEGER3 = 0x3,
				// MPropertyFriendlyName "Integer4"
				LOOSE_VARIABLE_TYPE_INTEGER4 = 0x4,
				// MPropertyFriendlyName "Float"
				LOOSE_VARIABLE_TYPE_FLOAT1 = 0x5,
				// MPropertyFriendlyName "Float2"
				LOOSE_VARIABLE_TYPE_FLOAT2 = 0x6,
				// MPropertyFriendlyName "Float3"
				LOOSE_VARIABLE_TYPE_FLOAT3 = 0x7,
				// MPropertyFriendlyName "Float4"
				LOOSE_VARIABLE_TYPE_FLOAT4 = 0x8,
				// MPropertyFriendlyName "Color4"
				LOOSE_VARIABLE_TYPE_COLOR4 = 0x9,
				// MPropertyFriendlyName "String"
				LOOSE_VARIABLE_TYPE_STRING = 0xa,
				// MPropertyFriendlyName "System Variable"
				LOOSE_VARIABLE_TYPE_SYSTEMVAR = 0xb,
				// MPropertyFriendlyName "Material"
				LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 0xc,
				// MPropertyFriendlyName "Texture"
				LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 0xd,
				// MPropertyFriendlyName "Panorama Render"
				LOOSE_VARIABLE_TYPE_PANORAMA_RENDER = 0xe,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class WorldTextPanelVerticalAlign_t : std::uint32_t {
				WORLDTEXT_VERTICAL_ALIGN_TOP = 0x0,
				WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
				WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class CSWeaponCategory : std::uint32_t {
				WEAPONCATEGORY_OTHER = 0x0,
				WEAPONCATEGORY_MELEE = 0x1,
				WEAPONCATEGORY_SECONDARY = 0x2,
				WEAPONCATEGORY_SMG = 0x3,
				WEAPONCATEGORY_RIFLE = 0x4,
				WEAPONCATEGORY_HEAVY = 0x5,
				WEAPONCATEGORY_COUNT = 0x6,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class BeginDeathLifeStateTransition_t : std::uint8_t {
				NO_CHANGE_IN_LIFESTATE = 0,
				TRANSITION_TO_LIFESTATE_DYING = 1,
				TRANSITION_TO_LIFESTATE_DEAD = 2,
			};
			// Enumerator count: 24
			// Alignment: 
			// Size: 0x4
			enum class PlayerAnimEvent_t : std::uint32_t {
				PLAYERANIMEVENT_FIRE_GUN_PRIMARY = 0x0,
				PLAYERANIMEVENT_FIRE_GUN_SECONDARY = 0x1,
				PLAYERANIMEVENT_GRENADE_PULL_PIN = 0x2,
				PLAYERANIMEVENT_THROW_GRENADE = 0x3,
				PLAYERANIMEVENT_JUMP = 0x4,
				PLAYERANIMEVENT_RELOAD = 0x5,
				PLAYERANIMEVENT_CLEAR_FIRING = 0x6,
				PLAYERANIMEVENT_DEPLOY = 0x7,
				PLAYERANIMEVENT_SILENCER_STATE = 0x8,
				PLAYERANIMEVENT_SILENCER_TOGGLE = 0x9,
				PLAYERANIMEVENT_THROW_GRENADE_UNDERHAND = 0xa,
				PLAYERANIMEVENT_CATCH_WEAPON = 0xb,
				PLAYERANIMEVENT_LOOKATWEAPON_REQUEST = 0xc,
				PLAYERANIMEVENT_RELOAD_CANCEL_LOOKATWEAPON = 0xd,
				PLAYERANIMEVENT_HAULBACK = 0xe,
				PLAYERANIMEVENT_IDLE = 0xf,
				PLAYERANIMEVENT_STRIKE_HIT = 0x10,
				PLAYERANIMEVENT_STRIKE_MISS = 0x11,
				PLAYERANIMEVENT_BACKSTAB = 0x12,
				PLAYERANIMEVENT_DRYFIRE = 0x13,
				PLAYERANIMEVENT_FIDGET = 0x14,
				PLAYERANIMEVENT_RELEASE = 0x15,
				PLAYERANIMEVENT_TAUNT = 0x16,
				PLAYERANIMEVENT_COUNT = 0x17,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class LifeState_t : std::uint32_t {
				LIFE_ALIVE = 0x0,
				LIFE_DYING = 0x1,
				LIFE_DEAD = 0x2,
				LIFE_RESPAWNABLE = 0x3,
				LIFE_RESPAWNING = 0x4,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class FixAngleSet_t : std::uint8_t {
				None = 0,
				Absolute = 1,
				Relative = 2,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class CompositeMaterialInputTextureType_t : std::uint32_t {
				// MPropertyFriendlyName "Default"
				INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
				// MPropertyFriendlyName "Normal Map"
				INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
				// MPropertyFriendlyName "Color"
				INPUT_TEXTURE_TYPE_COLOR = 0x2,
				// MPropertyFriendlyName "Masks"
				INPUT_TEXTURE_TYPE_MASKS = 0x3,
				// MPropertyFriendlyName "Roughness"
				INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
				// MPropertyFriendlyName "Pearlescence Mask"
				INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
				// MPropertyFriendlyName "Ambient Occlusion"
				INPUT_TEXTURE_TYPE_AO = 0x6,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class OnFrame : std::uint8_t {
				ONFRAME_UNKNOWN = 0,
				ONFRAME_TRUE = 1,
				ONFRAME_FALSE = 2,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x4
			enum class BloodType : std::uint32_t {
				None = 0xffffffff,
				ColorRed = 0x0,
				ColorYellow = 0x1,
				ColorGreen = 0x2,
				ColorRedLVL2 = 0x3,
				ColorRedLVL3 = 0x4,
				ColorRedLVL4 = 0x5,
				ColorRedLVL5 = 0x6,
				ColorRedLVL6 = 0x7,
			};
			// Enumerator count: 47
			// Alignment: 
			// Size: 0x4
			enum class GameAnimEventIndex_t : std::uint32_t {
				AE_EMPTY = 0x0,
				AE_CL_PLAYSOUND = 0x1,
				AE_CL_PLAYSOUND_ATTACHMENT = 0x2,
				AE_CL_PLAYSOUND_POSITION = 0x3,
				AE_SV_PLAYSOUND = 0x4,
				AE_CL_STOPSOUND = 0x5,
				AE_CL_PLAYSOUND_LOOPING = 0x6,
				AE_CL_CREATE_PARTICLE_EFFECT = 0x7,
				AE_CL_STOP_PARTICLE_EFFECT = 0x8,
				AE_CL_CREATE_PARTICLE_EFFECT_CFG = 0x9,
				AE_SV_CREATE_PARTICLE_EFFECT_CFG = 0xa,
				AE_SV_STOP_PARTICLE_EFFECT = 0xb,
				AE_FOOTSTEP = 0xc,
				AE_RAGDOLL = 0xd,
				AE_CL_STOP_RAGDOLL_CONTROL = 0xe,
				AE_CL_ENABLE_BODYGROUP = 0xf,
				AE_CL_DISABLE_BODYGROUP = 0x10,
				AE_BODYGROUP_SET_VALUE = 0x11,
				AE_CL_BODYGROUP_SET_VALUE_CMODEL_WPN = 0x12,
				AE_WEAPON_PERFORM_ATTACK = 0x13,
				AE_FIRE_INPUT = 0x14,
				AE_CL_CLOTH_ATTR = 0x15,
				AE_CL_CLOTH_GROUND_OFFSET = 0x16,
				AE_CL_CLOTH_STIFFEN = 0x17,
				AE_CL_CLOTH_EFFECT = 0x18,
				AE_CL_CREATE_ANIM_SCOPE_PROP = 0x19,
				AE_SV_IKLOCK = 0x1a,
				AE_PULSE_GRAPH = 0x1b,
				AE_PULSE_GRAPH_LOOKAT = 0x1c,
				AE_PULSE_GRAPH_AIMAT = 0x1d,
				AE_PULSE_GRAPH_IKLOCKLEFTARM = 0x1e,
				AE_PULSE_GRAPH_IKLOCKRIGHTARM = 0x1f,
				AE_DISABLE_PLATFORM = 0x20,
				AE_ENABLE_PLATFORM = 0x21,
				AE_ANIMGRAPH_SET_PARAM = 0x22,
				AE_CL_WEAPON_TRANSITION_INTO_HAND = 0x23,
				AE_CL_BODYGROUP_SET_TO_CLIP = 0x24,
				AE_CL_BODYGROUP_SET_TO_NEXTCLIP = 0x25,
				AE_SV_SHOW_SILENCER = 0x26,
				AE_SV_ATTACH_SILENCER_COMPLETE = 0x27,
				AE_SV_HIDE_SILENCER = 0x28,
				AE_SV_DETACH_SILENCER_COMPLETE = 0x29,
				AE_CL_EJECT_MAG = 0x2a,
				AE_WPN_COMPLETE_RELOAD = 0x2b,
				AE_WPN_HEALTHSHOT_INJECT = 0x2c,
				AE_CL_C4_SCREEN_TEXT = 0x2d,
				AE_GRENADE_THROW_COMPLETE = 0x2e,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class BreakableContentsType_t : std::uint32_t {
				BC_DEFAULT = 0x0,
				BC_EMPTY = 0x1,
				BC_PROP_GROUP_OVERRIDE = 0x2,
				BC_PARTICLE_SYSTEM_OVERRIDE = 0x3,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class EDestructiblePartDamagePassThroughType : std::uint32_t {
				Normal = 0x0,
				Absorb = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class PointWorldTextReorientMode_t : std::uint32_t {
				POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
				POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class ScriptedMoveTo_t : std::uint32_t {
				eWait = 0x0,
				eMoveWithGait = 0x3,
				eTeleport = 0x4,
				eWaitFacing = 0x5,
				// MPropertySuppressEnumerator
				eObsoleteBackCompat1 = 0x1,
				// MPropertySuppressEnumerator
				eObsoleteBackCompat2 = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class WeaponAttackType_t : std::uint32_t {
				eInvalid = 0xffffffff,
				ePrimary = 0x0,
				eSecondary = 0x1,
				eCount = 0x2,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class AnimLoopMode_t : std::uint32_t {
				// MPropertySuppressEnumerator
				ANIM_LOOP_MODE_INVALID = 0xffffffff,
				ANIM_LOOP_MODE_NOT_LOOPING = 0x0,
				ANIM_LOOP_MODE_LOOPING = 0x1,
				ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
				// MPropertySuppressEnumerator
				ANIM_LOOP_MODE_COUNT = 0x3,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x4
			enum class Class_T : std::uint32_t {
				CLASS_NONE = 0x0,
				CLASS_PLAYER = 0x1,
				CLASS_PLAYER_ALLY = 0x2,
				CLASS_BOMB = 0x3,
				CLASS_FOOT_CONTACT_SHADOW = 0x4,
				CLASS_WEAPON = 0x5,
				CLASS_WATER_SPLASHER = 0x6,
				CLASS_WEAPON_VIEWMODEL = 0x7,
				CLASS_DOOR = 0x8,
				NUM_CLASSIFY_CLASSES = 0x9,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class PreviewWeaponState : std::uint32_t {
				DROPPED = 0x0,
				HOLSTERED = 0x1,
				DEPLOYED = 0x2,
				PLANTED = 0x3,
				INSPECT = 0x4,
				ICON = 0x5,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class EProceduralRagdollWeightIndexPropagationMethod : std::uint32_t {
				Bone = 0x0,
				BoneAndChildren = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class CommandEntitySpecType_t : std::uint32_t {
				SPEC_SEARCH = 0x0,
				SPEC_TYPES_COUNT = 0x1,
			};
			// Enumerator count: 20
			// Alignment: 
			// Size: 0x4
			enum class CSWeaponType : std::uint32_t {
				WEAPONTYPE_KNIFE = 0x0,
				WEAPONTYPE_PISTOL = 0x1,
				WEAPONTYPE_SUBMACHINEGUN = 0x2,
				WEAPONTYPE_RIFLE = 0x3,
				WEAPONTYPE_SHOTGUN = 0x4,
				WEAPONTYPE_SNIPER_RIFLE = 0x5,
				WEAPONTYPE_MACHINEGUN = 0x6,
				WEAPONTYPE_C4 = 0x7,
				WEAPONTYPE_TASER = 0x8,
				WEAPONTYPE_GRENADE = 0x9,
				WEAPONTYPE_EQUIPMENT = 0xa,
				WEAPONTYPE_STACKABLEITEM = 0xb,
				WEAPONTYPE_FISTS = 0xc,
				WEAPONTYPE_BREACHCHARGE = 0xd,
				WEAPONTYPE_BUMPMINE = 0xe,
				WEAPONTYPE_TABLET = 0xf,
				WEAPONTYPE_MELEE = 0x10,
				WEAPONTYPE_SHIELD = 0x11,
				WEAPONTYPE_ZONE_REPULSOR = 0x12,
				WEAPONTYPE_UNKNOWN = 0x13,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class WeaponSwitchReason_t : std::uint32_t {
				eDrawn = 0x0,
				eEquipped = 0x1,
				eUserInitiatedSwitchToLast = 0x2,
				eUserInitiatedSwitchHands = 0x3,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x1
			enum class ShardSolid_t : std::uint8_t {
				SHARD_SOLID = 0,
				SHARD_DEBRIS = 1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class EntityPlatformTypes_t : std::uint8_t {
				ENTITY_NOT_PLATFORM = 0,
				ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 1,
				ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 2,
			};
			// Enumerator count: 13
			// Alignment: 
			// Size: 0x1
			enum class RenderMode_t : std::uint8_t {
				kRenderNormal = 0,
				kRenderTransColor = 1,
				kRenderTransTexture = 2,
				kRenderGlow = 3,
				kRenderTransAlpha = 4,
				kRenderTransAdd = 5,
				kRenderEnvironmental = 6,
				kRenderTransAddFrameBlend = 7,
				kRenderTransAlphaAdd = 8,
				kRenderWorldGlow = 9,
				kRenderNone = 10,
				kRenderDevVisualizer = 11,
				kRenderModeCount = 12,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class PerformanceMode_t : std::uint32_t {
				PM_NORMAL = 0x0,
				PM_NO_GIBS = 0x1,
				PM_FULL_GIBS = 0x2,
				PM_REDUCED_GIBS = 0x3,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ValueRemapperMomentumType_t : std::uint32_t {
				MomentumType_None = 0x0,
				MomentumType_Friction = 0x1,
				MomentumType_SpringTowardSnapValue = 0x2,
				MomentumType_SpringAwayFromSnapValue = 0x3,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class HierarchyType_t : std::uint32_t {
				HIERARCHY_NONE = 0x0,
				HIERARCHY_BONE_MERGE = 0x1,
				HIERARCHY_ATTACHMENT = 0x2,
				HIERARCHY_ABSORIGIN = 0x3,
				HIERARCHY_BONE = 0x4,
				HIERARCHY_TYPE_COUNT = 0x5,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x4
			enum class EInButtonState : std::uint32_t {
				IN_BUTTON_UP = 0x0,
				IN_BUTTON_DOWN = 0x1,
				IN_BUTTON_DOWN_UP = 0x2,
				IN_BUTTON_UP_DOWN = 0x3,
				IN_BUTTON_UP_DOWN_UP = 0x4,
				IN_BUTTON_DOWN_UP_DOWN = 0x5,
				IN_BUTTON_DOWN_UP_DOWN_UP = 0x6,
				IN_BUTTON_UP_DOWN_UP_DOWN = 0x7,
				IN_BUTTON_STATE_COUNT = 0x8,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class BeamClipStyle_t : std::uint32_t {
				kNOCLIP = 0x0,
				kGEOCLIP = 0x1,
				kMODELCLIP = 0x2,
				kBEAMCLIPSTYLE_NUMBITS = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class CSWeaponState_t : std::uint32_t {
				WEAPON_NOT_CARRIED = 0x0,
				WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
				WEAPON_IS_ACTIVE = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ScriptedOnDeath_t : std::uint32_t {
				SS_ONDEATH_NOT_APPLICABLE = 0xffffffff,
				SS_ONDEATH_UNDEFINED = 0x0,
				SS_ONDEATH_RAGDOLL = 0x1,
				SS_ONDEATH_ANIMATED_DEATH = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class CommandExecMode_t : std::uint32_t {
				EXEC_MANUAL = 0x0,
				EXEC_LEVELSTART = 0x1,
				EXEC_PERIODIC = 0x2,
				EXEC_MODES_COUNT = 0x3,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x1
			enum class ShatterDamageCause : std::uint8_t {
				SHATTERDAMAGE_BULLET = 0,
				SHATTERDAMAGE_MELEE = 1,
				SHATTERDAMAGE_THROWN = 2,
				SHATTERDAMAGE_SCRIPT = 3,
				SHATTERDAMAGE_EXPLOSIVE = 4,
			};
			// Enumerator count: 17
			// Alignment: 
			// Size: 0x4
			enum class gear_slot_t : std::uint32_t {
				GEAR_SLOT_INVALID = 0xffffffff,
				GEAR_SLOT_RIFLE = 0x0,
				GEAR_SLOT_PISTOL = 0x1,
				GEAR_SLOT_KNIFE = 0x2,
				GEAR_SLOT_GRENADES = 0x3,
				GEAR_SLOT_C4 = 0x4,
				GEAR_SLOT_RESERVED_SLOT6 = 0x5,
				GEAR_SLOT_RESERVED_SLOT7 = 0x6,
				GEAR_SLOT_RESERVED_SLOT8 = 0x7,
				GEAR_SLOT_RESERVED_SLOT9 = 0x8,
				GEAR_SLOT_RESERVED_SLOT10 = 0x9,
				GEAR_SLOT_RESERVED_SLOT11 = 0xa,
				GEAR_SLOT_BOOSTS = 0xb,
				GEAR_SLOT_UTILITY = 0xc,
				GEAR_SLOT_COUNT = 0xd,
				GEAR_SLOT_FIRST = 0x0,
				GEAR_SLOT_LAST = 0xc,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ChoreoLookAtSpeed_t : std::uint32_t {
				// MPropertySuppressEnumerator
				eInvalid = 0xffffffff,
				// MPropertyFriendlyName "Slow"
				eSlow = 0x0,
				// MPropertyFriendlyName "Medium"
				eMedium = 0x1,
				// MPropertyFriendlyName "Fast"
				eFast = 0x2,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class ObserverMode_t : std::uint32_t {
				OBS_MODE_NONE = 0x0,
				OBS_MODE_FIXED = 0x1,
				OBS_MODE_IN_EYE = 0x2,
				OBS_MODE_CHASE = 0x3,
				OBS_MODE_ROAMING = 0x4,
				OBS_MODE_DIRECTED = 0x5,
				NUM_OBSERVER_MODES = 0x6,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x4
			enum class CSPlayerState : std::uint32_t {
				STATE_ACTIVE = 0x0,
				STATE_WELCOME = 0x1,
				STATE_PICKINGTEAM = 0x2,
				STATE_PICKINGCLASS = 0x3,
				STATE_DEATH_ANIM = 0x4,
				STATE_DEATH_WAIT_FOR_KEY = 0x5,
				STATE_OBSERVER_MODE = 0x6,
				STATE_GUNGAME_RESPAWN = 0x7,
				STATE_DORMANT = 0x8,
				NUM_PLAYER_STATES = 0x9,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x1
			enum class WaterLevel_t : std::uint8_t {
				WL_NotInWater = 0,
				WL_Feet = 1,
				WL_Knees = 2,
				WL_Waist = 3,
				WL_Chest = 4,
				WL_FullyUnderwater = 5,
				WL_Count = 6,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class AmmoPosition_t : std::uint32_t {
				AMMO_POSITION_INVALID = 0xffffffff,
				AMMO_POSITION_PRIMARY = 0x0,
				AMMO_POSITION_SECONDARY = 0x1,
				AMMO_POSITION_COUNT = 0x2,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x4
			enum class CDebugOverlayFilterType_t : std::uint32_t {
				NONE = 0x0,
				TEXT = 0x1,
				ENTITY = 0x2,
				COUNT = 0x3,
				TACTICAL_SEARCH = 0x4,
				AI_SCHEDULE = 0x5,
				AI_TASK = 0x6,
				AI_EVENT = 0x7,
				END_SIM_HISTORY_TYPES = 0x8,
				COMBINED = 0xffffffff,
			};
			// Enumerator count: 23
			// Alignment: 
			// Size: 0x4
			enum class PreviewEOMCelebration : std::uint32_t {
				WALKUP = 0x0,
				PUNCHING = 0x1,
				SWAGGER = 0x2,
				DROPDOWN = 0x3,
				STRETCH = 0x4,
				SWAT_FEMALE = 0x5,
				MASK_F = 0x6,
				GUERILLA = 0x7,
				GUERILLA02 = 0x8,
				GENDARMERIE = 0x9,
				SCUBA_FEMALE = 0xa,
				SCUBA_MALE = 0xb,
				AVA_DEFEAT = 0xc,
				GENDARMERIE_DEFEAT = 0xd,
				MAE_DEFEAT = 0xe,
				RICKSAW_DEFEAT = 0xf,
				SCUBA_FEMALE_DEFEAT = 0x10,
				SCUBA_MALE_DEFEAT = 0x11,
				CRASSWATER_DEFEAT = 0x12,
				DARRYL_DEFEAT = 0x13,
				DOCTOR_DEFEAT = 0x14,
				MUHLIK_DEFEAT = 0x15,
				VYPA_DEFEAT = 0x16,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class CompositeMaterialInputContainerSourceType_t : std::uint32_t {
				// MPropertyFriendlyName "Target Material"
				CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
				// MPropertyFriendlyName "Material from Target Material Attr"
				CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
				// MPropertyFriendlyName "Specified Material"
				CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
				// MPropertyFriendlyName "Loose Variables"
				CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
				// MPropertyFriendlyName "Variable from Target Material Attr"
				CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
				// MPropertyFriendlyName "Target Instance Material"
				CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5,
			};
			// Enumerator count: 27
			// Alignment: 
			// Size: 0x4
			enum class RumbleEffect_t : std::uint32_t {
				RUMBLE_INVALID = 0xffffffff,
				// MPropertySuppressEnumerator
				RUMBLE_STOP_ALL = 0x0,
				RUMBLE_PISTOL = 0x1,
				RUMBLE_357 = 0x2,
				RUMBLE_SMG1 = 0x3,
				RUMBLE_AR2 = 0x4,
				RUMBLE_SHOTGUN_SINGLE = 0x5,
				RUMBLE_SHOTGUN_DOUBLE = 0x6,
				RUMBLE_AR2_ALT_FIRE = 0x7,
				RUMBLE_RPG_MISSILE = 0x8,
				RUMBLE_CROWBAR_SWING = 0x9,
				RUMBLE_AIRBOAT_GUN = 0xa,
				RUMBLE_JEEP_ENGINE_LOOP = 0xb,
				RUMBLE_FLAT_LEFT = 0xc,
				RUMBLE_FLAT_RIGHT = 0xd,
				RUMBLE_FLAT_BOTH = 0xe,
				RUMBLE_DMG_LOW = 0xf,
				RUMBLE_DMG_MED = 0x10,
				RUMBLE_DMG_HIGH = 0x11,
				RUMBLE_FALL_LONG = 0x12,
				RUMBLE_FALL_SHORT = 0x13,
				RUMBLE_PHYSCANNON_OPEN = 0x14,
				RUMBLE_PHYSCANNON_PUNT = 0x15,
				RUMBLE_PHYSCANNON_LOW = 0x16,
				RUMBLE_PHYSCANNON_MEDIUM = 0x17,
				RUMBLE_PHYSCANNON_HIGH = 0x18,
				// MPropertySuppressEnumerator
				NUM_RUMBLE_EFFECTS = 0x19,
			};
			// Enumerator count: 21
			// Alignment: 
			// Size: 0x8
			enum class InputBitMask_t : std::uint64_t {
				// MEnumeratorIsNotAFlag
				IN_NONE = 0x0,
				// MEnumeratorIsNotAFlag
				IN_ALL = 0xffffffffffffffff,
				IN_ATTACK = 0x1,
				IN_JUMP = 0x2,
				IN_DUCK = 0x4,
				IN_FORWARD = 0x8,
				IN_BACK = 0x10,
				IN_USE = 0x20,
				IN_TURNLEFT = 0x80,
				IN_TURNRIGHT = 0x100,
				IN_MOVELEFT = 0x200,
				IN_MOVERIGHT = 0x400,
				IN_ATTACK2 = 0x800,
				IN_RELOAD = 0x2000,
				IN_SPEED = 0x10000,
				IN_JOYAUTOSPRINT = 0x20000,
				// MEnumeratorIsNotAFlag
				IN_FIRST_MOD_SPECIFIC_BIT = 0x100000000,
				IN_USEORRELOAD = 0x100000000,
				IN_SCORE = 0x200000000,
				IN_ZOOM = 0x400000000,
				IN_LOOK_AT_WEAPON = 0x800000000,
			};
			// Enumerator count: 14
			// Alignment: 
			// Size: 0x4
			enum class HitGroup_t : std::uint32_t {
				HITGROUP_INVALID = 0xffffffff,
				HITGROUP_GENERIC = 0x0,
				HITGROUP_HEAD = 0x1,
				HITGROUP_CHEST = 0x2,
				HITGROUP_STOMACH = 0x3,
				HITGROUP_LEFTARM = 0x4,
				HITGROUP_RIGHTARM = 0x5,
				HITGROUP_LEFTLEG = 0x6,
				HITGROUP_RIGHTLEG = 0x7,
				HITGROUP_NECK = 0x8,
				HITGROUP_UNUSED = 0x9,
				HITGROUP_GEAR = 0xa,
				HITGROUP_SPECIAL = 0xb,
				HITGROUP_COUNT = 0xc,
			};
			// Enumerator count: 40
			// Alignment: 
			// Size: 0x8
			enum class DebugOverlayBits_t : std::uint64_t {
				// MPropertyFriendlyName "Ent Text"
				// MPropertyDescription "show text debug overlay for this entity"
				OVERLAY_TEXT_BIT = 0x1,
				// MPropertyFriendlyName "Name"
				// MPropertyDescription "show name debug overlay for this entity"
				OVERLAY_NAME_BIT = 0x2,
				// MPropertyFriendlyName "Bounding Box"
				// MPropertyDescription "show bounding box overlay for this entity"
				OVERLAY_BBOX_BIT = 0x4,
				// MPropertyFriendlyName "Pivot"
				// MPropertyDescription "show pivot for this entity"
				OVERLAY_PIVOT_BIT = 0x8,
				// MPropertyFriendlyName "Message"
				// MPropertyDescription "TODO show messages for this entity"
				OVERLAY_MESSAGE_BIT = 0x10,
				// MPropertyFriendlyName "ABS BBox"
				// MPropertyDescription "show abs bounding box overlay"
				OVERLAY_ABSBOX_BIT = 0x20,
				// MPropertyFriendlyName "RBox"
				// MPropertyDescription "show the rbox overlay"
				OVERLAY_RBOX_BIT = 0x40,
				// MPropertyFriendlyName "Entities That Block LOS"
				// MPropertyDescription "TODO show entities that block NPC LOS"
				OVERLAY_SHOW_BLOCKSLOS = 0x80,
				// MPropertyFriendlyName "Attachment Points"
				// MPropertyDescription "show attachment points"
				OVERLAY_ATTACHMENTS_BIT = 0x100,
				// MPropertyFriendlyName "Interpolated Attachment Points"
				// MPropertyDescription "show interpolated attachment points"
				OVERLAY_INTERPOLATED_ATTACHMENTS_BIT = 0x200,
				// MPropertyFriendlyName "Interpolated Pivot"
				// MPropertyDescription "show interpolated pivot for this entity"
				OVERLAY_INTERPOLATED_PIVOT_BIT = 0x400,
				// MPropertyFriendlyName "Skeleton"
				// MPropertyDescription "show skeleton for this entity"
				OVERLAY_SKELETON_BIT = 0x800,
				// MPropertyFriendlyName "Interpolated Skeleton"
				// MPropertyDescription "show interpolated skeleton"
				OVERLAY_INTERPOLATED_SKELETON_BIT = 0x1000,
				// MPropertyFriendlyName "Trigger Bounds"
				// MPropertyDescription "show trigger bounds"
				OVERLAY_TRIGGER_BOUNDS_BIT = 0x2000,
				// MPropertyFriendlyName "Hitboxes"
				// MPropertyDescription "show hitboxes for this entity"
				OVERLAY_HITBOX_BIT = 0x4000,
				// MPropertyFriendlyName "Interpolated Hitboxes"
				// MPropertyDescription "show interpolated hitboxes"
				OVERLAY_INTERPOLATED_HITBOX_BIT = 0x8000,
				// MPropertyFriendlyName "Autoaim Radius"
				// MPropertyDescription "TODO Display autoaim radius"
				OVERLAY_AUTOAIM_BIT = 0x10000,
				// MPropertyFriendlyName "NPC Selected"
				// MPropertyDescription "TODO the npc is current selected SOURCE2_UNSUPPORTED?"
				OVERLAY_NPC_SELECTED_BIT = 0x20000,
				// MPropertyFriendlyName "Joint Info"
				// MPropertyDescription "hows joint info for this entity"
				OVERLAY_JOINT_INFO_BIT = 0x40000,
				// MPropertyFriendlyName "NPC Route"
				// MPropertyDescription "draw the route for this npc"
				OVERLAY_NPC_ROUTE_BIT = 0x80000,
				OVERLAY_VISIBILITY_TRACES_BIT = 0x100000,
				// MPropertyFriendlyName "NPC Enemies"
				// MPropertyDescription "show npc's enemies"
				OVERLAY_NPC_ENEMIES_BIT = 0x400000,
				// MPropertyFriendlyName "NPC Conditions"
				// MPropertyDescription "show NPC's current conditions"
				OVERLAY_NPC_CONDITIONS_BIT = 0x800000,
				// MPropertyFriendlyName "NPC Combat"
				// MPropertyDescription "show npc combat related information (squads/slots/etc)"
				OVERLAY_NPC_COMBAT_BIT = 0x1000000,
				// MPropertyFriendlyName "NPC Schedule Tasks"
				// MPropertyDescription "show npc schedule task details"
				OVERLAY_NPC_TASK_BIT = 0x2000000,
				// MPropertyFriendlyName "NPC Body Locations"
				// MPropertyDescription "show npc body locations"
				OVERLAY_NPC_BODYLOCATIONS = 0x4000000,
				// MPropertyFriendlyName "NPC View Conde"
				// MPropertyDescription "show npc's viewcone"
				OVERLAY_NPC_VIEWCONE_BIT = 0x8000000,
				// MPropertyFriendlyName "NPC Kill"
				// MPropertyDescription "kill the NPC, running all appropriate AI."
				OVERLAY_NPC_KILL_BIT = 0x10000000,
				// MPropertyFriendlyName "OVERLAY_WC_CHANGE_ENTITY"
				// MPropertyDescription "object changed during WC edit (probably unused)"
				OVERLAY_WC_CHANGE_ENTITY = 0x20000000,
				// MPropertyFriendlyName "Buddha Mode"
				// MPropertyDescription "TODO take damage but don't die"
				OVERLAY_BUDDHA_MODE = 0x40000000,
				// MPropertyFriendlyName "NPC Steering"
				// MPropertyDescription "Show the steering regulations associated with the NPC"
				OVERLAY_NPC_STEERING_REGULATIONS = 0x80000000,
				// MPropertyFriendlyName "NPC Task Console Text"
				// MPropertyDescription "show task and schedule names when they start"
				OVERLAY_NPC_TASK_TEXT_BIT = 0x100000000,
				// MPropertyFriendlyName "Prop Debug"
				// MPropertyDescription "Show prop health and bounds"
				OVERLAY_PROP_DEBUG = 0x200000000,
				// MPropertyFriendlyName "NPC Relationships"
				// MPropertyDescription "show relationships between target and all children"
				OVERLAY_NPC_RELATION_BIT = 0x400000000,
				// MPropertyFriendlyName "View Offset"
				// MPropertyDescription "TODO show view offset"
				OVERLAY_VIEWOFFSET = 0x800000000,
				// MPropertyFriendlyName "Collision Wireframe"
				// MPropertyDescription "show collision wireframe"
				OVERLAY_VCOLLIDE_WIREFRAME_BIT = 0x1000000000,
				// MPropertyFriendlyName "NPC Scripted Commands"
				// MPropertyDescription "show the state of scripted commands"
				OVERLAY_NPC_SCRIPTED_COMMANDS_BIT = 0x2000000000,
				// MPropertyFriendlyName "Actor Name"
				// MPropertyDescription "show fancy actor name over head of actors (entities which return ShouldDisplayInActorNames() == true)"
				OVERLAY_ACTORNAME_BIT = 0x4000000000,
				// MPropertyFriendlyName "NPC Gather Conditions"
				// MPropertyDescription "show condition gathering text info"
				OVERLAY_NPC_CONDITIONS_TEXT_BIT = 0x8000000000,
				// MPropertyFriendlyName "NPC Ability Ranges"
				// MPropertyDescription "draw range indicators for all abilities on the NPC"
				OVERLAY_NPC_ABILITY_RANGE_DEBUG_BIT = 0x10000000000,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class AmmoFlags_t : std::uint32_t {
				AMMO_FORCE_DROP_IF_CARRIED = 0x1,
				AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
				// MPropertySuppressEnumerator
				// MEnumeratorIsNotAFlag
				AMMO_FLAG_MAX = 0x2,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class BeamType_t : std::uint32_t {
				BEAM_INVALID = 0x0,
				BEAM_POINTS = 0x1,
				BEAM_ENTPOINT = 0x2,
				BEAM_ENTS = 0x3,
				BEAM_HOSE = 0x4,
				BEAM_SPLINE = 0x5,
				BEAM_LASER = 0x6,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class EntitySubclassScope_t : std::uint32_t {
				SUBCLASS_SCOPE_NONE = 0xffffffff,
				// MPropertyFriendlyName "Precipitation"
				// MEntitySubclassScopeFile
				SUBCLASS_SCOPE_PRECIPITATION = 0x0,
				// MPropertyFriendlyName "PlayerWeapon"
				// MEntitySubclassScopeFile
				SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x1,
				SUBCLASS_SCOPE_COUNT = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ShadowType_t : std::uint32_t {
				SHADOWS_NONE = 0x0,
				SHADOWS_SIMPLE = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class CDebugOverlayCombinedTypes_t : std::uint32_t {
				ALL = 0x0,
				ANY = 0x1,
				COUNT = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class CompositeMaterialVarSystemVar_t : std::uint32_t {
				// MPropertyFriendlyName "Composite Generation Time"
				COMPMATSYSVAR_COMPOSITETIME = 0x0,
				// MPropertyFriendlyName "Empty Resource Spacer"
				COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x1
			enum class ShatterGlassStressType : std::uint8_t {
				SHATTERGLASS_BLUNT = 0,
				SHATTERGLASS_BALLISTIC = 1,
				SHATTERGLASS_PULSE = 2,
				SHATTERGLASS_EXPLOSIVE = 3,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ValueRemapperRatchetType_t : std::uint32_t {
				RatchetType_Absolute = 0x0,
				RatchetType_EachEngage = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class CRR_Response_ResponseEnum_t : std::uint32_t {
				MAX_RESPONSE_NAME = 0xc0,
				MAX_RULE_NAME = 0x80,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class MoveMountingAmount_t : std::uint32_t {
				MOVE_MOUNT_NONE = 0x0,
				MOVE_MOUNT_LOW = 0x1,
				MOVE_MOUNT_HIGH = 0x2,
				MOVE_MOUNT_MAXCOUNT = 0x3,
			};
			// Enumerator count: 20
			// Alignment: 
			// Size: 0x1
			enum class RenderFx_t : std::uint8_t {
				kRenderFxNone = 0,
				kRenderFxPulseSlow = 1,
				kRenderFxPulseFast = 2,
				kRenderFxPulseSlowWide = 3,
				kRenderFxPulseFastWide = 4,
				kRenderFxFadeSlow = 5,
				kRenderFxFadeFast = 6,
				kRenderFxSolidSlow = 7,
				kRenderFxSolidFast = 8,
				kRenderFxStrobeSlow = 9,
				kRenderFxStrobeFast = 10,
				kRenderFxStrobeFaster = 11,
				kRenderFxFlickerSlow = 12,
				kRenderFxFlickerFast = 13,
				kRenderFxNoDissipation = 14,
				kRenderFxFadeOut = 15,
				kRenderFxFadeIn = 16,
				kRenderFxPulseFastWider = 17,
				kRenderFxGlowShell = 18,
				kRenderFxMax = 19,
			};
			// Enumerator count: 35
			// Alignment: 
			// Size: 0x4
			enum class vote_create_failed_t : std::uint32_t {
				VOTE_FAILED_GENERIC = 0x0,
				VOTE_FAILED_TRANSITIONING_PLAYERS = 0x1,
				VOTE_FAILED_RATE_EXCEEDED = 0x2,
				VOTE_FAILED_YES_MUST_EXCEED_NO = 0x3,
				VOTE_FAILED_QUORUM_FAILURE = 0x4,
				VOTE_FAILED_ISSUE_DISABLED = 0x5,
				VOTE_FAILED_MAP_NOT_FOUND = 0x6,
				VOTE_FAILED_MAP_NAME_REQUIRED = 0x7,
				VOTE_FAILED_FAILED_RECENTLY = 0x8,
				VOTE_FAILED_TEAM_CANT_CALL = 0x9,
				VOTE_FAILED_WAITINGFORPLAYERS = 0xa,
				VOTE_FAILED_PLAYERNOTFOUND = 0xb,
				VOTE_FAILED_CANNOT_KICK_ADMIN = 0xc,
				VOTE_FAILED_SCRAMBLE_IN_PROGRESS = 0xd,
				VOTE_FAILED_SPECTATOR = 0xe,
				VOTE_FAILED_FAILED_RECENT_KICK = 0xf,
				VOTE_FAILED_FAILED_RECENT_CHANGEMAP = 0x10,
				VOTE_FAILED_FAILED_RECENT_SWAPTEAMS = 0x11,
				VOTE_FAILED_FAILED_RECENT_SCRAMBLETEAMS = 0x12,
				VOTE_FAILED_FAILED_RECENT_RESTART = 0x13,
				VOTE_FAILED_SWAP_IN_PROGRESS = 0x14,
				VOTE_FAILED_DISABLED = 0x15,
				VOTE_FAILED_NEXTLEVEL_SET = 0x16,
				VOTE_FAILED_TOO_EARLY_SURRENDER = 0x17,
				VOTE_FAILED_MATCH_PAUSED = 0x18,
				VOTE_FAILED_MATCH_NOT_PAUSED = 0x19,
				VOTE_FAILED_NOT_IN_WARMUP = 0x1a,
				VOTE_FAILED_NOT_10_PLAYERS = 0x1b,
				VOTE_FAILED_TIMEOUT_ACTIVE = 0x1c,
				VOTE_FAILED_TIMEOUT_INACTIVE = 0x1d,
				VOTE_FAILED_TIMEOUT_EXHAUSTED = 0x1e,
				VOTE_FAILED_CANT_ROUND_END = 0x1f,
				VOTE_FAILED_REMATCH = 0x20,
				VOTE_FAILED_CONTINUE = 0x21,
				VOTE_FAILED_MAX = 0x22,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class LatchDirtyPermission_t : std::uint32_t {
				LATCH_DIRTY_DISALLOW = 0x0,
				LATCH_DIRTY_SERVER_CONTROLLED = 0x1,
				LATCH_DIRTY_CLIENT_SIMULATED = 0x2,
				LATCH_DIRTY_PREDICTION = 0x3,
				LATCH_DIRTY_FRAMESIMULATE = 0x4,
				LATCH_DIRTY_PARTICLE_SIMULATE = 0x5,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ChoreoLookAtMode_t : std::uint32_t {
				// MPropertySuppressEnumerator
				eInvalid = 0xffffffff,
				// MPropertyFriendlyName "Chest"
				eChest = 0x0,
				// MPropertyFriendlyName "Head"
				eHead = 0x1,
				// MPropertyFriendlyName "Eyes"
				eEyesOnly = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ChatIgnoreType_t : std::uint32_t {
				CHAT_IGNORE_NONE = 0x0,
				CHAT_IGNORE_ALL = 0x1,
				CHAT_IGNORE_TEAM = 0x2,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class PlayerConnectedState : std::uint32_t {
				PlayerNeverConnected = 0xffffffff,
				PlayerConnected = 0x0,
				PlayerConnecting = 0x1,
				PlayerReconnecting = 0x2,
				PlayerDisconnecting = 0x3,
				PlayerDisconnected = 0x4,
				PlayerReserved = 0x5,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x1
			enum class SolidType_t : std::uint8_t {
				SOLID_NONE = 0,
				SOLID_BSP = 1,
				SOLID_BBOX = 2,
				SOLID_OBB = 3,
				SOLID_SPHERE = 4,
				SOLID_POINT = 5,
				SOLID_VPHYSICS = 6,
				SOLID_CAPSULE = 7,
				SOLID_LAST = 8,
			};
			// Enumerator count: 24
			// Alignment: 
			// Size: 0x4
			enum class DamageTypes_t : std::uint32_t {
				DMG_GENERIC = 0x0,
				DMG_CRUSH = 0x1,
				DMG_BULLET = 0x2,
				DMG_SLASH = 0x4,
				DMG_BURN = 0x8,
				DMG_VEHICLE = 0x10,
				DMG_FALL = 0x20,
				DMG_BLAST = 0x40,
				DMG_CLUB = 0x80,
				DMG_SHOCK = 0x100,
				DMG_SONIC = 0x200,
				DMG_ENERGYBEAM = 0x400,
				DMG_DROWN = 0x4000,
				DMG_POISON = 0x8000,
				DMG_RADIATION = 0x10000,
				DMG_DROWNRECOVER = 0x20000,
				DMG_ACID = 0x40000,
				DMG_PHYSGUN = 0x100000,
				DMG_DISSOLVE = 0x200000,
				DMG_BLAST_SURFACE = 0x400000,
				DMG_BUCKSHOT = 0x1000000,
				// MPropertySuppressEnumerator
				// MEnumeratorIsNotAFlag
				DMG_LASTGENERICFLAG = 0x1000000,
				DMG_HEADSHOT = 0x2000000,
				DMG_DANGERZONE = 0x4000000,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class PointWorldTextJustifyVertical_t : std::uint32_t {
				POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
				POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
				POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class attributeprovidertypes_t : std::uint32_t {
				PROVIDER_GENERIC = 0x0,
				PROVIDER_WEAPON = 0x1,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x1
			enum class MoveCollide_t : std::uint8_t {
				MOVECOLLIDE_DEFAULT = 0,
				MOVECOLLIDE_FLY_BOUNCE = 1,
				MOVECOLLIDE_FLY_CUSTOM = 2,
				MOVECOLLIDE_FLY_SLIDE = 3,
				MOVECOLLIDE_COUNT = 4,
				MOVECOLLIDE_MAX_BITS = 3,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class ShakeCommand_t : std::uint32_t {
				SHAKE_START = 0x0,
				SHAKE_STOP = 0x1,
				SHAKE_AMPLITUDE = 0x2,
				SHAKE_FREQUENCY = 0x3,
				SHAKE_START_RUMBLEONLY = 0x4,
				SHAKE_START_NORUMBLE = 0x5,
			};
			// Enumerator count: 7
			// Alignment: 
			// Size: 0x4
			enum class IChoreoServices_ChoreoState_t : std::uint32_t {
				STATE_PRE_SCRIPT = 0x0,
				STATE_WAIT_FOR_SCRIPT = 0x1,
				STATE_WALK_TO_MARK = 0x2,
				STATE_SYNCHRONIZE_SCRIPT = 0x3,
				STATE_PLAY_SCRIPT = 0x4,
				STATE_PLAY_SCRIPT_POST_IDLE = 0x5,
				STATE_PLAY_SCRIPT_POST_IDLE_DONE = 0x6,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ValueRemapperOutputType_t : std::uint32_t {
				OutputType_AnimationCycle = 0x0,
				OutputType_RotationX = 0x1,
				OutputType_RotationY = 0x2,
				OutputType_RotationZ = 0x3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class PointTemplateOwnerSpawnGroupType_t : std::uint32_t {
				INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
				INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
				INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x1
			enum class EContributionScoreFlag_t : std::uint8_t {
				k_EContributionScoreFlag_Default = 0,
				k_EContributionScoreFlag_Objective = 1,
				k_EContributionScoreFlag_Bullets = 2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class EntityDistanceMode_t : std::uint32_t {
				eOriginToOrigin = 0x0,
				eCenterToCenter = 0x1,
				eAxisToAxis = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class PointWorldTextJustifyHorizontal_t : std::uint32_t {
				POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0x0,
				POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
				POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class BrushSolidities_e : std::uint32_t {
				BRUSHSOLID_TOGGLE = 0x0,
				BRUSHSOLID_NEVER = 0x1,
				BRUSHSOLID_ALWAYS = 0x2,
			};
			// Enumerator count: 13
			// Alignment: 
			// Size: 0x4
			enum class QuestProgress_Reason : std::uint32_t {
				QUEST_NONINITIALIZED = 0x0,
				QUEST_OK = 0x1,
				QUEST_NOT_ENOUGH_PLAYERS = 0x2,
				QUEST_WARMUP = 0x3,
				QUEST_NOT_CONNECTED_TO_STEAM = 0x4,
				QUEST_NONOFFICIAL_SERVER = 0x5,
				QUEST_NO_ENTITLEMENT = 0x6,
				QUEST_NO_QUEST = 0x7,
				QUEST_PLAYER_IS_BOT = 0x8,
				QUEST_WRONG_MAP = 0x9,
				QUEST_WRONG_MODE = 0xa,
				QUEST_NOT_SYNCED_WITH_SERVER = 0xb,
				QUEST_REASON_MAX = 0xc,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ModifyDamageReturn_t : std::uint32_t {
				CONTINUE_TO_APPLY_DAMAGE = 0x0,
				ABORT_DO_NOT_APPLY_DAMAGE = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class CompMatPropertyMutatorConditionType_t : std::uint32_t {
				// MPropertyFriendlyName "Input Container Exists"
				COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
				// MPropertyFriendlyName "Input Container Variable Exists"
				COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
				// MPropertyFriendlyName "Input Container Variable Exists and Equals"
				COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ScriptedHeldWeaponBehavior_t : std::uint32_t {
				eInvalid = 0xffffffff,
				eHolster = 0x0,
				eDeploy = 0x1,
				eDrop = 0x2,
			};
			// Enumerator count: 8
			// Alignment: 
			// Size: 0x4
			enum class GrenadeType_t : std::uint32_t {
				GRENADE_TYPE_EXPLOSIVE = 0x0,
				GRENADE_TYPE_FLASH = 0x1,
				GRENADE_TYPE_FIRE = 0x2,
				GRENADE_TYPE_DECOY = 0x3,
				GRENADE_TYPE_SMOKE = 0x4,
				GRENADE_TYPE_SENSOR = 0x5,
				GRENADE_TYPE_SNOWBALL = 0x6,
				GRENADE_TYPE_TOTAL = 0x7,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ValueRemapperInputType_t : std::uint32_t {
				InputType_PlayerShootPosition = 0x0,
				InputType_PlayerShootPositionAroundAxis = 0x1,
			};
			// Enumerator count: 8
			// Alignment: 
			// Size: 0x1
			enum class EKillTypes_t : std::uint8_t {
				KILL_NONE = 0,
				KILL_DEFAULT = 1,
				KILL_HEADSHOT = 2,
				KILL_BLAST = 3,
				KILL_BURN = 4,
				KILL_SLASH = 5,
				KILL_SHOCK = 6,
				KILLTYPE_COUNT = 7,
			};
			// Enumerator count: 25
			// Alignment: 
			// Size: 0x4
			enum class WeaponSound_t : std::uint32_t {
				WEAPON_SOUND_EMPTY = 0x0,
				WEAPON_SOUND_SECONDARY_EMPTY = 0x1,
				WEAPON_SOUND_SINGLE = 0x2,
				WEAPON_SOUND_SECONDARY_ATTACK = 0x3,
				WEAPON_SOUND_MELEE_MISS = 0x4,
				WEAPON_SOUND_MELEE_HIT = 0x5,
				WEAPON_SOUND_MELEE_HIT_WORLD = 0x6,
				WEAPON_SOUND_MELEE_HIT_PLAYER = 0x7,
				WEAPON_SOUND_MELEE_HIT_NPC = 0x8,
				WEAPON_SOUND_SPECIAL1 = 0x9,
				WEAPON_SOUND_SPECIAL2 = 0xa,
				WEAPON_SOUND_SPECIAL3 = 0xb,
				WEAPON_SOUND_NEARLYEMPTY = 0xc,
				WEAPON_SOUND_IMPACT = 0xd,
				WEAPON_SOUND_REFLECT = 0xe,
				WEAPON_SOUND_SECONDARY_IMPACT = 0xf,
				WEAPON_SOUND_SECONDARY_REFLECT = 0x10,
				WEAPON_SOUND_RELOAD = 0x11,
				WEAPON_SOUND_SINGLE_ACCURATE = 0x12,
				WEAPON_SOUND_ZOOM_IN = 0x13,
				WEAPON_SOUND_ZOOM_OUT = 0x14,
				WEAPON_SOUND_MOUSE_PRESSED = 0x15,
				WEAPON_SOUND_DROP = 0x16,
				WEAPON_SOUND_RADIO_USE = 0x17,
				// MPropertySuppressEnumerator
				WEAPON_SOUND_NUM_TYPES = 0x18,
			};
			// Enumerator count: 17
			// Alignment: 
			// Size: 0x8
			enum class TakeDamageFlags_t : std::uint64_t {
				DFLAG_NONE = 0x0,
				DFLAG_SUPPRESS_HEALTH_CHANGES = 0x1,
				DFLAG_SUPPRESS_PHYSICS_FORCE = 0x2,
				DFLAG_SUPPRESS_EFFECTS = 0x4,
				DFLAG_PREVENT_DEATH = 0x8,
				DFLAG_FORCE_DEATH = 0x10,
				DFLAG_ALWAYS_GIB = 0x20,
				DFLAG_NEVER_GIB = 0x40,
				DFLAG_REMOVE_NO_RAGDOLL = 0x80,
				DFLAG_SUPPRESS_DAMAGE_MODIFICATION = 0x100,
				DFLAG_ALWAYS_FIRE_DAMAGE_EVENTS = 0x200,
				DFLAG_RADIUS_DMG = 0x400,
				DFLAG_FORCEREDUCEARMOR_DMG = 0x800,
				DFLAG_SUPPRESS_INTERRUPT_FLINCH = 0x1000,
				// MPropertySuppressEnumerator
				// MEnumeratorIsNotAFlag
				DMG_LASTDFLAG = 0x1000,
				DFLAG_IGNORE_ARMOR = 0x2000,
				DFLAG_SUPPRESS_UTILREMOVE = 0x4000,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ValueRemapperHapticsType_t : std::uint32_t {
				HaticsType_Default = 0x0,
				HaticsType_None = 0x1,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x4
			enum class Disposition_t : std::uint32_t {
				D_ER = 0x0,
				D_HT = 0x1,
				D_FR = 0x2,
				D_LI = 0x3,
				D_NU = 0x4,
				D_ERROR = 0x0,
				D_HATE = 0x1,
				D_FEAR = 0x2,
				D_LIKE = 0x3,
				D_NEUTRAL = 0x4,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class CanPlaySequence_t : std::uint32_t {
				CANNOT_PLAY = 0x0,
				CAN_PLAY_NOW = 0x1,
				CAN_PLAY_ENQUEUED = 0x2,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class MedalRank_t : std::uint32_t {
				MEDAL_RANK_NONE = 0x0,
				MEDAL_RANK_BRONZE = 0x1,
				MEDAL_RANK_SILVER = 0x2,
				MEDAL_RANK_GOLD = 0x3,
				MEDAL_RANK_COUNT = 0x4,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class CompositeMaterialMatchFilterType_t : std::uint32_t {
				// MPropertyFriendlyName "Target Material Attribute Exists"
				MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
				// MPropertyFriendlyName "Target Material Shader Name"
				MATCH_FILTER_MATERIAL_SHADER = 0x1,
				// MPropertyFriendlyName "Target Material Name SubStr"
				MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
				// MPropertyFriendlyName "Target Material Attribute Equals"
				MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
				// MPropertyFriendlyName "Target Material Property Exists"
				MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
				// MPropertyFriendlyName "Target Material Property Equals"
				MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5,
			};
			// Enumerator count: 14
			// Alignment: 
			// Size: 0x1
			enum class MoveType_t : std::uint8_t {
				MOVETYPE_NONE = 0,
				MOVETYPE_OBSOLETE = 1,
				MOVETYPE_WALK = 2,
				MOVETYPE_FLY = 3,
				MOVETYPE_FLYGRAVITY = 4,
				MOVETYPE_VPHYSICS = 5,
				MOVETYPE_PUSH = 6,
				MOVETYPE_NOCLIP = 7,
				MOVETYPE_OBSERVER = 8,
				MOVETYPE_LADDER = 9,
				MOVETYPE_CUSTOM = 10,
				MOVETYPE_LAST = 11,
				MOVETYPE_INVALID = 11,
				MOVETYPE_MAX_BITS = 5,
			};
			class CNetworkVelocityVector {
				MEMBER(vec_x, client::CNetworkVelocityVector, CNetworkedQuantizedFloat);
				MEMBER(vec_y, client::CNetworkVelocityVector, CNetworkedQuantizedFloat);
				MEMBER(vec_z, client::CNetworkVelocityVector, CNetworkedQuantizedFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNetworkVelocityVector

			class CAnimGraphControllerBase {
				MEMBER(s_destructible_part_destroyed_hit_group, client::CAnimGraphControllerBase, CAnimGraphParamOptionalRef<char*>);
				MEMBER(n_destructible_part_destroyed_part_index, client::CAnimGraphControllerBase, CAnimGraphParamOptionalRef<int32_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimGraphControllerBase

			class C_CSGO_PreviewPlayer_GraphController : public client::CAnimGraphControllerBase {
				MEMBER(psz_character_mode, client::C_CSGO_PreviewPlayer_GraphController, CAnimGraphParamOptionalRef<char*>);
				MEMBER(psz_team_preview_variant, client::C_CSGO_PreviewPlayer_GraphController, CAnimGraphParamOptionalRef<char*>);
				MEMBER(psz_team_preview_position, client::C_CSGO_PreviewPlayer_GraphController, CAnimGraphParamOptionalRef<char*>);
				MEMBER(psz_end_of_match_celebration, client::C_CSGO_PreviewPlayer_GraphController, CAnimGraphParamOptionalRef<char*>);
				MEMBER(n_team_preview_random, client::C_CSGO_PreviewPlayer_GraphController, CAnimGraphParamOptionalRef<int32_t>);
				MEMBER(psz_weapon_state, client::C_CSGO_PreviewPlayer_GraphController, CAnimGraphParamOptionalRef<char*>);
				MEMBER(psz_weapon_type, client::C_CSGO_PreviewPlayer_GraphController, CAnimGraphParamOptionalRef<char*>);
				MEMBER(b_ct, client::C_CSGO_PreviewPlayer_GraphController, CAnimGraphParamOptionalRef<bool>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_PreviewPlayer_GraphController

			class C_CSGO_PreviewModel_GraphController : public client::CAnimGraphControllerBase {
				MEMBER(psz_character_mode, client::C_CSGO_PreviewModel_GraphController, CAnimGraphParamOptionalRef<char*>);
				MEMBER(psz_weapon_state, client::C_CSGO_PreviewModel_GraphController, CAnimGraphParamOptionalRef<char*>);
				MEMBER(psz_weapon_type, client::C_CSGO_PreviewModel_GraphController, CAnimGraphParamOptionalRef<char*>);
				MEMBER(psz_end_of_match_celebration, client::C_CSGO_PreviewModel_GraphController, CAnimGraphParamOptionalRef<char*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_PreviewModel_GraphController

			class CCSGOViewModel_GraphController : public client::CAnimGraphControllerBase {
				////MEMBER(s_reload_complete, client::CCSGOViewModel_GraphController, CAnimGraphTagOptionalRef);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGOViewModel_GraphController

			class C_Chicken_GraphController : public client::CAnimGraphControllerBase {
				MEMBER(param_activity, client::C_Chicken_GraphController, CAnimGraphParamRef<char*>);
				MEMBER(param_end_activity_immediately, client::C_Chicken_GraphController, CAnimGraphParamRef<bool>);
				MEMBER(param_snap_to_squatting, client::C_Chicken_GraphController, CAnimGraphParamRef<bool>);
				////MEMBER(s_activity_finished, client::C_Chicken_GraphController, CAnimGraphTagRef);
				MEMBER(fl_squat_probability, client::C_Chicken_GraphController, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Chicken_GraphController

			class IRagdoll {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IRagdoll

			struct CompositeMaterialMatchFilter_t {
				MEMBER(n_composite_material_match_filter_type, client::CompositeMaterialMatchFilter_t, client::CompositeMaterialMatchFilterType_t);
				MEMBER(str_match_filter, client::CompositeMaterialMatchFilter_t, CUtlString);
				MEMBER(str_match_value, client::CompositeMaterialMatchFilter_t, CUtlString);
				MEMBER(b_pass_when_true, client::CompositeMaterialMatchFilter_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CompositeMaterialMatchFilter_t

			class CFiringModeInt {
				MEMBER_ARR(n_values, client::CFiringModeInt, 2, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFiringModeInt

			struct EventClientProcessInput_t {
				MEMBER(loop_state, client::EventClientProcessInput_t, client::EngineLoopState_t);
				MEMBER(fl_real_time, client::EventClientProcessInput_t, float);
				MEMBER(fl_tick_interval, client::EventClientProcessInput_t, float);
				MEMBER(fl_tick_start_time, client::EventClientProcessInput_t, double);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientProcessInput_t

			struct EventClientPollNetworking_t {
				MEMBER(n_tick_count, client::EventClientPollNetworking_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientPollNetworking_t

			class CInButtonState {
				MEMBER_ARR(p_button_states, client::CInButtonState, 3, uint64_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInButtonState

			class IClientAlphaProperty {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IClientAlphaProperty

			class CClientAlphaProperty : public client::IClientAlphaProperty {
				MEMBER(n_render_fx, client::CClientAlphaProperty, uint8_t);
				MEMBER(n_render_mode, client::CClientAlphaProperty, uint8_t);
				MEMBER(b_alpha_override, client::CClientAlphaProperty, uint8_t);
				MEMBER(b_shadow_alpha_override, client::CClientAlphaProperty, uint8_t);
				MEMBER(n_reserved, client::CClientAlphaProperty, uint8_t);
				MEMBER(n_alpha, client::CClientAlphaProperty, uint8_t);
				MEMBER(n_desync_offset, client::CClientAlphaProperty, uint16_t);
				MEMBER(n_reserved2, client::CClientAlphaProperty, uint16_t);
				MEMBER(n_dist_fade_start, client::CClientAlphaProperty, uint16_t);
				MEMBER(n_dist_fade_end, client::CClientAlphaProperty, uint16_t);
				MEMBER(fl_fade_scale, client::CClientAlphaProperty, float);
				MEMBER(fl_render_fx_start_time, client::CClientAlphaProperty, entity2::GameTime_t);
				MEMBER(fl_render_fx_duration, client::CClientAlphaProperty, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CClientAlphaProperty

			class CTakeDamageSummaryScopeGuard {
				MEMBER(vec_summaries, client::CTakeDamageSummaryScopeGuard, cutl_vector<client::SummaryTakeDamageInfo_t*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTakeDamageSummaryScopeGuard

			struct ParticleIndex_t {
				MEMBER(value, client::ParticleIndex_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ParticleIndex_t

			class QuestProgress {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class QuestProgress

			struct EventSetTime_t {
				MEMBER(loop_state, client::EventSetTime_t, client::EngineLoopState_t);
				MEMBER(n_client_output_frames, client::EventSetTime_t, int32_t);
				MEMBER(fl_real_time, client::EventSetTime_t, double);
				MEMBER(fl_render_time, client::EventSetTime_t, double);
				MEMBER(fl_render_frame_time, client::EventSetTime_t, double);
				MEMBER(fl_render_frame_time_unbounded, client::EventSetTime_t, double);
				MEMBER(fl_render_frame_time_unscaled, client::EventSetTime_t, double);
				MEMBER(fl_tick_remainder, client::EventSetTime_t, double);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventSetTime_t

			class IEconItemInterface {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IEconItemInterface

			class C_EconItemView : public client::IEconItemInterface {
				MEMBER(b_inventory_image_rgba_requested, client::C_EconItemView, bool);
				MEMBER(b_inventory_image_tried_cache, client::C_EconItemView, bool);
				MEMBER(n_inventory_image_rgba_width, client::C_EconItemView, int32_t);
				MEMBER(n_inventory_image_rgba_height, client::C_EconItemView, int32_t);
				MEMBER_ARR(sz_current_load_cached_file_name, client::C_EconItemView, 260, char);
				MEMBER(b_restore_custom_material_after_precache, client::C_EconItemView, bool);
				MEMBER(i_item_definition_index, client::C_EconItemView, uint16_t);
				MEMBER(i_entity_quality, client::C_EconItemView, int32_t);
				MEMBER(i_entity_level, client::C_EconItemView, uint32_t);
				MEMBER(i_item_id, client::C_EconItemView, uint64_t);
				MEMBER(i_item_idhigh, client::C_EconItemView, uint32_t);
				MEMBER(i_item_idlow, client::C_EconItemView, uint32_t);
				MEMBER(i_account_id, client::C_EconItemView, uint32_t);
				MEMBER(i_inventory_position, client::C_EconItemView, uint32_t);
				MEMBER(b_initialized, client::C_EconItemView, bool);
				MEMBER(b_disallow_soc, client::C_EconItemView, bool);
				MEMBER(b_is_store_item, client::C_EconItemView, bool);
				MEMBER(b_is_trade_item, client::C_EconItemView, bool);
				MEMBER(i_entity_quantity, client::C_EconItemView, int32_t);
				MEMBER(i_rarity_override, client::C_EconItemView, int32_t);
				MEMBER(i_quality_override, client::C_EconItemView, int32_t);
				MEMBER(i_origin_override, client::C_EconItemView, int32_t);
				MEMBER(un_client_flags, client::C_EconItemView, uint8_t);
				MEMBER(un_override_style, client::C_EconItemView, uint8_t);
				MEMBER(attribute_list, client::C_EconItemView, client::CAttributeList);
				MEMBER(networked_dynamic_attributes, client::C_EconItemView, client::CAttributeList);
				MEMBER_ARR(sz_custom_name, client::C_EconItemView, 161, char);
				MEMBER_ARR(sz_custom_name_override, client::C_EconItemView, 161, char);
				MEMBER(b_initialized_tags, client::C_EconItemView, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EconItemView

			struct sndopvarlatchdata_t {
				MEMBER(isz_stack, client::sndopvarlatchdata_t, CUtlSymbolLarge);
				MEMBER(isz_operator, client::sndopvarlatchdata_t, CUtlSymbolLarge);
				MEMBER(isz_opvar, client::sndopvarlatchdata_t, CUtlSymbolLarge);
				MEMBER(fl_val, client::sndopvarlatchdata_t, float);
				MEMBER(v_pos, client::sndopvarlatchdata_t, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct sndopvarlatchdata_t

			class CTakeDamageInfo {
				MEMBER(vec_damage_force, client::CTakeDamageInfo, Vector);
				MEMBER(vec_damage_position, client::CTakeDamageInfo, Vector);
				MEMBER(vec_reported_position, client::CTakeDamageInfo, Vector);
				MEMBER(vec_damage_direction, client::CTakeDamageInfo, Vector);
				MEMBER(h_inflictor, client::CTakeDamageInfo, chandle<client::C_BaseEntity>);
				MEMBER(h_attacker, client::CTakeDamageInfo, chandle<client::C_BaseEntity>);
				MEMBER(h_ability, client::CTakeDamageInfo, chandle<client::C_BaseEntity>);
				MEMBER(fl_damage, client::CTakeDamageInfo, float);
				MEMBER(fl_totalled_damage, client::CTakeDamageInfo, float);
				MEMBER(fl_totalled_damage_absorbed, client::CTakeDamageInfo, float);
				MEMBER(bits_damage_type, client::CTakeDamageInfo, client::DamageTypes_t);
				MEMBER(i_damage_custom, client::CTakeDamageInfo, int32_t);
				MEMBER(i_ammo_type, client::CTakeDamageInfo, client::AmmoIndex_t);
				MEMBER(fl_original_damage, client::CTakeDamageInfo, float);
				MEMBER(b_should_bleed, client::CTakeDamageInfo, bool);
				MEMBER(b_should_spark, client::CTakeDamageInfo, bool);
				MEMBER(fl_damage_absorbed, client::CTakeDamageInfo, float);
				MEMBER(n_damage_flags, client::CTakeDamageInfo, client::TakeDamageFlags_t);
				MEMBER(n_num_objects_penetrated, client::CTakeDamageInfo, int32_t);
				MEMBER(fl_friendly_fire_damage_reduction_ratio, client::CTakeDamageInfo, float);
				////MEMBER(h_script_instance, client::CTakeDamageInfo, HSCRIPT);
				MEMBER(b_in_take_damage_flow, client::CTakeDamageInfo, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTakeDamageInfo

			struct WaterWheelDrag_t {
				MEMBER(fl_fraction_of_wheel_submerged, client::WaterWheelDrag_t, float);
				MEMBER(fl_wheel_drag, client::WaterWheelDrag_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct WaterWheelDrag_t

			class CCompositeMaterialEditorDoc {
				MEMBER(n_version, client::CCompositeMaterialEditorDoc, int32_t);
				MEMBER(points, client::CCompositeMaterialEditorDoc, cutl_vector<client::CompositeMaterialEditorPoint_t>);
				MEMBER(kvthumbnail, client::CCompositeMaterialEditorDoc, KeyValues3);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCompositeMaterialEditorDoc

			struct SummaryTakeDamageInfo_t {
				MEMBER(n_summarised_count, client::SummaryTakeDamageInfo_t, int32_t);
				MEMBER(info, client::SummaryTakeDamageInfo_t, client::CTakeDamageInfo);
				MEMBER(result, client::SummaryTakeDamageInfo_t, client::CTakeDamageResult);
				MEMBER(h_target, client::SummaryTakeDamageInfo_t, chandle<client::C_BaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SummaryTakeDamageInfo_t

			struct EventClientFrameSimulate_t {
				MEMBER(loop_state, client::EventClientFrameSimulate_t, client::EngineLoopState_t);
				MEMBER(fl_real_time, client::EventClientFrameSimulate_t, float);
				MEMBER(fl_frame_time, client::EventClientFrameSimulate_t, float);
				MEMBER(b_schedule_send_tick_packet, client::EventClientFrameSimulate_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientFrameSimulate_t

			struct CompMatPropertyMutator_t {
				MEMBER(b_enabled, client::CompMatPropertyMutator_t, bool);
				MEMBER(n_mutator_command_type, client::CompMatPropertyMutator_t, client::CompMatPropertyMutatorType_t);
				MEMBER(str_init_with__container, client::CompMatPropertyMutator_t, CUtlString);
				MEMBER(str_copy_property__input_container_src, client::CompMatPropertyMutator_t, CUtlString);
				MEMBER(str_copy_property__input_container_property, client::CompMatPropertyMutator_t, CUtlString);
				MEMBER(str_copy_property__target_property, client::CompMatPropertyMutator_t, CUtlString);
				MEMBER(str_random_roll_input_vars__seed_input_var, client::CompMatPropertyMutator_t, CUtlString);
				MEMBER(vec_random_roll_input_vars__input_vars_to_roll, client::CompMatPropertyMutator_t, cutl_vector<CUtlString>);
				MEMBER(str_copy_matching_keys__input_container_src, client::CompMatPropertyMutator_t, CUtlString);
				MEMBER(str_copy_keys_with_suffix__input_container_src, client::CompMatPropertyMutator_t, CUtlString);
				MEMBER(str_copy_keys_with_suffix__find_suffix, client::CompMatPropertyMutator_t, CUtlString);
				MEMBER(str_copy_keys_with_suffix__replace_suffix, client::CompMatPropertyMutator_t, CUtlString);
				MEMBER(n_set_value__value, client::CompMatPropertyMutator_t, client::CompositeMaterialInputLooseVariable_t);
				MEMBER(str_generate_texture__target_param, client::CompMatPropertyMutator_t, CUtlString);
				MEMBER(str_generate_texture__initial_container, client::CompMatPropertyMutator_t, CUtlString);
				MEMBER(n_resolution, client::CompMatPropertyMutator_t, int32_t);
				MEMBER(b_is_scratch_target, client::CompMatPropertyMutator_t, bool);
				MEMBER(b_splat_debug_info, client::CompMatPropertyMutator_t, bool);
				MEMBER(b_capture_in_render_doc, client::CompMatPropertyMutator_t, bool);
				MEMBER(vec_tex_gen_instructions, client::CompMatPropertyMutator_t, cutl_vector<client::CompMatPropertyMutator_t>);
				MEMBER(vec_conditional_mutators, client::CompMatPropertyMutator_t, cutl_vector<client::CompMatPropertyMutator_t>);
				MEMBER(str_pop_input_queue__container, client::CompMatPropertyMutator_t, CUtlString);
				MEMBER(str_draw_text__input_container_src, client::CompMatPropertyMutator_t, CUtlString);
				MEMBER(str_draw_text__input_container_property, client::CompMatPropertyMutator_t, CUtlString);
				MEMBER(vec_draw_text__position, client::CompMatPropertyMutator_t, Vector2D);
				MEMBER(col_draw_text__color, client::CompMatPropertyMutator_t, Color);
				MEMBER(str_draw_text__font, client::CompMatPropertyMutator_t, CUtlString);
				MEMBER(vec_conditions, client::CompMatPropertyMutator_t, cutl_vector<client::CompMatMutatorCondition_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CompMatPropertyMutator_t

			struct EventClientPreOutput_t {
				MEMBER(loop_state, client::EventClientPreOutput_t, client::EngineLoopState_t);
				MEMBER(fl_render_time, client::EventClientPreOutput_t, double);
				MEMBER(fl_render_frame_time, client::EventClientPreOutput_t, double);
				MEMBER(fl_render_frame_time_unbounded, client::EventClientPreOutput_t, double);
				MEMBER(fl_real_time, client::EventClientPreOutput_t, float);
				MEMBER(b_render_only, client::EventClientPreOutput_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientPreOutput_t

			struct EventModInitialized_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventModInitialized_t

			struct CompMatMutatorCondition_t {
				MEMBER(n_mutator_condition, client::CompMatMutatorCondition_t, client::CompMatPropertyMutatorConditionType_t);
				MEMBER(str_mutator_condition_container_name, client::CompMatMutatorCondition_t, CUtlString);
				MEMBER(str_mutator_condition_container_var_name, client::CompMatMutatorCondition_t, CUtlString);
				MEMBER(str_mutator_condition_container_var_value, client::CompMatMutatorCondition_t, CUtlString);
				MEMBER(b_pass_when_true, client::CompMatMutatorCondition_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CompMatMutatorCondition_t

			struct SoundeventPathCornerPairNetworked_t {
				MEMBER(v_p1, client::SoundeventPathCornerPairNetworked_t, Vector);
				MEMBER(v_p2, client::SoundeventPathCornerPairNetworked_t, Vector);
				MEMBER(fl_path_length_sqr, client::SoundeventPathCornerPairNetworked_t, float);
				MEMBER(fl_p1_pct, client::SoundeventPathCornerPairNetworked_t, float);
				MEMBER(fl_p2_pct, client::SoundeventPathCornerPairNetworked_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SoundeventPathCornerPairNetworked_t

			class C_IronSightController {
				MEMBER(b_iron_sight_available, client::C_IronSightController, bool);
				MEMBER(fl_iron_sight_amount, client::C_IronSightController, float);
				MEMBER(fl_iron_sight_amount_gained, client::C_IronSightController, float);
				MEMBER(fl_iron_sight_amount_biased, client::C_IronSightController, float);
				MEMBER(fl_iron_sight_amount__interpolated, client::C_IronSightController, float);
				MEMBER(fl_iron_sight_amount_gained__interpolated, client::C_IronSightController, float);
				MEMBER(fl_iron_sight_amount_biased__interpolated, client::C_IronSightController, float);
				MEMBER(fl_interpolation_last_updated, client::C_IronSightController, float);
				MEMBER_ARR(ang_delta_average, client::C_IronSightController, 8, QAngle);
				MEMBER(ang_view_last, client::C_IronSightController, QAngle);
				MEMBER(vec_dot_coords, client::C_IronSightController, Vector2D);
				MEMBER(fl_dot_blur, client::C_IronSightController, float);
				MEMBER(fl_speed_ratio, client::C_IronSightController, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_IronSightController

			class CSceneEventInfo {
				MEMBER(i_layer, client::CSceneEventInfo, int32_t);
				MEMBER(i_priority, client::CSceneEventInfo, int32_t);
				MEMBER(h_sequence, client::CSceneEventInfo, animationsystem::HSequence);
				MEMBER(fl_weight, client::CSceneEventInfo, float);
				MEMBER(b_has_arrived, client::CSceneEventInfo, bool);
				MEMBER(n_type, client::CSceneEventInfo, int32_t);
				MEMBER(fl_next, client::CSceneEventInfo, entity2::GameTime_t);
				MEMBER(b_is_gesture, client::CSceneEventInfo, bool);
				MEMBER(b_should_remove, client::CSceneEventInfo, bool);
				MEMBER(h_target, client::CSceneEventInfo, chandle<client::C_BaseEntity>);
				MEMBER(n_scene_event_id, client::CSceneEventInfo, client::SceneEventId_t);
				MEMBER(b_client_side, client::CSceneEventInfo, bool);
				MEMBER(b_started, client::CSceneEventInfo, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSceneEventInfo

			struct CommandToolCommand_t {
				MEMBER(b_enabled, client::CommandToolCommand_t, bool);
				MEMBER(b_opened, client::CommandToolCommand_t, bool);
				MEMBER(internal_id, client::CommandToolCommand_t, uint32_t);
				MEMBER(short_name, client::CommandToolCommand_t, CUtlString);
				MEMBER(exec_mode, client::CommandToolCommand_t, client::CommandExecMode_t);
				MEMBER(spawn_group, client::CommandToolCommand_t, CUtlString);
				MEMBER(periodic_exec_delay, client::CommandToolCommand_t, float);
				MEMBER(spec_type, client::CommandToolCommand_t, client::CommandEntitySpecType_t);
				MEMBER(entity_spec, client::CommandToolCommand_t, CUtlString);
				MEMBER(commands, client::CommandToolCommand_t, CUtlString);
				MEMBER(set_debug_bits, client::CommandToolCommand_t, client::DebugOverlayBits_t);
				MEMBER(clear_debug_bits, client::CommandToolCommand_t, client::DebugOverlayBits_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CommandToolCommand_t

			class C_CommandContext {
				MEMBER(needsprocessing, client::C_CommandContext, bool);
				MEMBER(command_number, client::C_CommandContext, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CommandContext

			class CNavLinkAnimgraphVar {
				MEMBER(s_anim_graph_navlink_type, client::CNavLinkAnimgraphVar, CGlobalSymbol);
				MEMBER(un_alignment_degrees, client::CNavLinkAnimgraphVar, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNavLinkAnimgraphVar

			struct AmmoTypeInfo_t {
				MEMBER(n_max_carry, client::AmmoTypeInfo_t, int32_t);
				MEMBER(n_splash_size, client::AmmoTypeInfo_t, tier2::CRangeInt);
				MEMBER(n_flags, client::AmmoTypeInfo_t, client::AmmoFlags_t);
				MEMBER(fl_mass, client::AmmoTypeInfo_t, float);
				MEMBER(fl_speed, client::AmmoTypeInfo_t, tier2::CRangeFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct AmmoTypeInfo_t

			struct GameAmmoTypeInfo_t : public client::AmmoTypeInfo_t {
				MEMBER(n_buy_size, client::GameAmmoTypeInfo_t, int32_t);
				MEMBER(n_cost, client::GameAmmoTypeInfo_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct GameAmmoTypeInfo_t

			struct EventFrameBoundary_t {
				MEMBER(fl_frame_time, client::EventFrameBoundary_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventFrameBoundary_t

			struct EventClientProcessGameInput_t {
				MEMBER(loop_state, client::EventClientProcessGameInput_t, client::EngineLoopState_t);
				MEMBER(fl_real_time, client::EventClientProcessGameInput_t, float);
				MEMBER(fl_frame_time, client::EventClientProcessGameInput_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientProcessGameInput_t

			class TimedEvent {
				MEMBER(time_between_events, client::TimedEvent, float);
				MEMBER(f_next_event, client::TimedEvent, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class TimedEvent

			struct EventPreDataUpdate_t {
				MEMBER(n_count, client::EventPreDataUpdate_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventPreDataUpdate_t

			class CInterpolatedValue {
				MEMBER(fl_start_time, client::CInterpolatedValue, float);
				MEMBER(fl_end_time, client::CInterpolatedValue, float);
				MEMBER(fl_start_value, client::CInterpolatedValue, float);
				MEMBER(fl_end_value, client::CInterpolatedValue, float);
				MEMBER(n_interp_type, client::CInterpolatedValue, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInterpolatedValue

			class IChoreoServices {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IChoreoServices

			class CNetworkOriginQuantizedVector {
				MEMBER(vec_x, client::CNetworkOriginQuantizedVector, CNetworkedQuantizedFloat);
				MEMBER(vec_y, client::CNetworkOriginQuantizedVector, CNetworkedQuantizedFloat);
				MEMBER(vec_z, client::CNetworkOriginQuantizedVector, CNetworkedQuantizedFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNetworkOriginQuantizedVector

			class CGlowOverlay {
				MEMBER(v_pos, client::CGlowOverlay, Vector);
				MEMBER(b_directional, client::CGlowOverlay, bool);
				MEMBER(v_direction, client::CGlowOverlay, Vector);
				MEMBER(b_in_sky, client::CGlowOverlay, bool);
				MEMBER(sky_obstruction_scale, client::CGlowOverlay, float);
				MEMBER_ARR(sprites, client::CGlowOverlay, 4, client::CGlowSprite);
				MEMBER(n_sprites, client::CGlowOverlay, int32_t);
				MEMBER(fl_proxy_radius, client::CGlowOverlay, float);
				MEMBER(fl_hdrcolor_scale, client::CGlowOverlay, float);
				MEMBER(fl_glow_obstruction_scale, client::CGlowOverlay, float);
				MEMBER(b_cache_glow_obstruction, client::CGlowOverlay, bool);
				MEMBER(b_cache_sky_obstruction, client::CGlowOverlay, bool);
				MEMBER(b_activated, client::CGlowOverlay, int16_t);
				MEMBER(list_index, client::CGlowOverlay, uint16_t);
				MEMBER(query_handle, client::CGlowOverlay, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGlowOverlay

			class C_LightGlowOverlay : public client::CGlowOverlay {
				MEMBER(vec_origin, client::C_LightGlowOverlay, Vector);
				MEMBER(vec_direction, client::C_LightGlowOverlay, Vector);
				MEMBER(n_min_dist, client::C_LightGlowOverlay, int32_t);
				MEMBER(n_max_dist, client::C_LightGlowOverlay, int32_t);
				MEMBER(n_outer_max_dist, client::C_LightGlowOverlay, int32_t);
				MEMBER(b_one_sided, client::C_LightGlowOverlay, bool);
				MEMBER(b_modulate_by_dot, client::C_LightGlowOverlay, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_LightGlowOverlay

			class CFireOverlay : public client::CGlowOverlay {
				MEMBER(p_owner, client::CFireOverlay, client::C_FireSmoke*);
				MEMBER_ARR(v_base_colors, client::CFireOverlay, 4, Vector);
				MEMBER(fl_scale, client::CFireOverlay, float);
				MEMBER(n_guid, client::CFireOverlay, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFireOverlay

			class C_SunGlowOverlay : public client::CGlowOverlay {
				MEMBER(b_modulate_by_dot, client::C_SunGlowOverlay, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SunGlowOverlay

			struct EventServerEndAsyncPostTickWork_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventServerEndAsyncPostTickWork_t

			class CRopeOverlapHit {
				MEMBER(h_entity, client::CRopeOverlapHit, chandle<client::C_BaseEntity>);
				MEMBER(vec_overlapping_links, client::CRopeOverlapHit, cutl_vector<int32_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRopeOverlapHit

			class CDestructiblePartsSystemData {
				MEMBER(destructible_parts_data_by_hit_group, client::CDestructiblePartsSystemData, CUtlOrderedMap<client::HitGroup_t,client::CDestructiblePartsSystemData_HitGroupInfoAndPartData>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDestructiblePartsSystemData

			class CAnimEventListenerBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimEventListenerBase

			class CAnimEventListener : public client::CAnimEventListenerBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimEventListener

			class CAnimEventQueueListener : public client::CAnimEventListenerBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimEventQueueListener

			struct CompositeMaterialInputLooseVariable_t {
				MEMBER(str_name, client::CompositeMaterialInputLooseVariable_t, CUtlString);
				MEMBER(b_expose_externally, client::CompositeMaterialInputLooseVariable_t, bool);
				MEMBER(str_exposed_friendly_name, client::CompositeMaterialInputLooseVariable_t, CUtlString);
				MEMBER(str_exposed_friendly_group_name, client::CompositeMaterialInputLooseVariable_t, CUtlString);
				MEMBER(b_exposed_variable_is_fixed_range, client::CompositeMaterialInputLooseVariable_t, bool);
				MEMBER(str_exposed_visible_when_true, client::CompositeMaterialInputLooseVariable_t, CUtlString);
				MEMBER(str_exposed_hidden_when_true, client::CompositeMaterialInputLooseVariable_t, CUtlString);
				MEMBER(n_variable_type, client::CompositeMaterialInputLooseVariable_t, client::CompositeMaterialInputLooseVariableType_t);
				MEMBER(b_value_boolean, client::CompositeMaterialInputLooseVariable_t, bool);
				MEMBER(n_value_int_x, client::CompositeMaterialInputLooseVariable_t, int32_t);
				MEMBER(n_value_int_y, client::CompositeMaterialInputLooseVariable_t, int32_t);
				MEMBER(n_value_int_z, client::CompositeMaterialInputLooseVariable_t, int32_t);
				MEMBER(n_value_int_w, client::CompositeMaterialInputLooseVariable_t, int32_t);
				MEMBER(b_has_float_bounds, client::CompositeMaterialInputLooseVariable_t, bool);
				MEMBER(fl_value_float_x, client::CompositeMaterialInputLooseVariable_t, float);
				MEMBER(fl_value_float_x__min, client::CompositeMaterialInputLooseVariable_t, float);
				MEMBER(fl_value_float_x__max, client::CompositeMaterialInputLooseVariable_t, float);
				MEMBER(fl_value_float_y, client::CompositeMaterialInputLooseVariable_t, float);
				MEMBER(fl_value_float_y__min, client::CompositeMaterialInputLooseVariable_t, float);
				MEMBER(fl_value_float_y__max, client::CompositeMaterialInputLooseVariable_t, float);
				MEMBER(fl_value_float_z, client::CompositeMaterialInputLooseVariable_t, float);
				MEMBER(fl_value_float_z__min, client::CompositeMaterialInputLooseVariable_t, float);
				MEMBER(fl_value_float_z__max, client::CompositeMaterialInputLooseVariable_t, float);
				MEMBER(fl_value_float_w, client::CompositeMaterialInputLooseVariable_t, float);
				MEMBER(fl_value_float_w__min, client::CompositeMaterialInputLooseVariable_t, float);
				MEMBER(fl_value_float_w__max, client::CompositeMaterialInputLooseVariable_t, float);
				MEMBER(c_value_color4, client::CompositeMaterialInputLooseVariable_t, Color);
				MEMBER(n_value_system_var, client::CompositeMaterialInputLooseVariable_t, client::CompositeMaterialVarSystemVar_t);
				MEMBER(str_resource_material, client::CompositeMaterialInputLooseVariable_t, CResourceName);
				MEMBER(str_texture_content_asset_path, client::CompositeMaterialInputLooseVariable_t, CUtlString);
				MEMBER(str_texture_runtime_resource_path, client::CompositeMaterialInputLooseVariable_t, CResourceName);
				MEMBER(str_texture_compilation_vtex_template, client::CompositeMaterialInputLooseVariable_t, CUtlString);
				MEMBER(n_texture_type, client::CompositeMaterialInputLooseVariable_t, client::CompositeMaterialInputTextureType_t);
				MEMBER(str_string, client::CompositeMaterialInputLooseVariable_t, CUtlString);
				MEMBER(str_panorama_panel_path, client::CompositeMaterialInputLooseVariable_t, CUtlString);
				MEMBER(n_panorama_render_res, client::CompositeMaterialInputLooseVariable_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CompositeMaterialInputLooseVariable_t

			class CSimpleSimTimer {
				MEMBER(next, client::CSimpleSimTimer, entity2::GameTime_t);
				MEMBER(n_world_group_id, client::CSimpleSimTimer, WorldGroupId_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSimpleSimTimer

			class CRandSimTimer : public client::CSimpleSimTimer {
				MEMBER(min_interval, client::CRandSimTimer, float);
				MEMBER(max_interval, client::CRandSimTimer, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRandSimTimer

			class CSimTimer : public client::CSimpleSimTimer {
				MEMBER(interval, client::CSimTimer, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSimTimer

			class CStopwatchBase : public client::CSimpleSimTimer {
				MEMBER(f_is_running, client::CStopwatchBase, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CStopwatchBase

			class CSimpleStopwatch : public client::CStopwatchBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSimpleStopwatch

			class CRandStopwatch : public client::CStopwatchBase {
				MEMBER(min_interval, client::CRandStopwatch, float);
				MEMBER(max_interval, client::CRandStopwatch, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRandStopwatch

			class CStopwatch : public client::CStopwatchBase {
				MEMBER(interval, client::CStopwatch, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CStopwatch

			struct EventClientSceneSystemThreadStateChange_t {
				MEMBER(b_threads_active, client::EventClientSceneSystemThreadStateChange_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientSceneSystemThreadStateChange_t

			class CPlayerControllerComponent {
				MEMBER(_m_p_chain_entity, client::CPlayerControllerComponent, entity2::CNetworkVarChainer);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayerControllerComponent

			class CCSPlayerController_ActionTrackingServices : public client::CPlayerControllerComponent {
				MEMBER(per_round_stats, client::CCSPlayerController_ActionTrackingServices, C_UtlVectorEmbeddedNetworkVar<client::CSPerRoundStats_t>);
				MEMBER(match_stats, client::CCSPlayerController_ActionTrackingServices, client::CSMatchStats_t);
				MEMBER(i_num_round_kills, client::CCSPlayerController_ActionTrackingServices, int32_t);
				MEMBER(i_num_round_kills_headshots, client::CCSPlayerController_ActionTrackingServices, int32_t);
				MEMBER(un_total_round_damage_dealt, client::CCSPlayerController_ActionTrackingServices, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerController_ActionTrackingServices

			class CCSPlayerController_InGameMoneyServices : public client::CPlayerControllerComponent {
				MEMBER(i_account, client::CCSPlayerController_InGameMoneyServices, int32_t);
				MEMBER(i_start_account, client::CCSPlayerController_InGameMoneyServices, int32_t);
				MEMBER(i_total_cash_spent, client::CCSPlayerController_InGameMoneyServices, int32_t);
				MEMBER(i_cash_spent_this_round, client::CCSPlayerController_InGameMoneyServices, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerController_InGameMoneyServices

			class CCSPlayerController_InventoryServices : public client::CPlayerControllerComponent {
				MEMBER(un_music_id, client::CCSPlayerController_InventoryServices, uint16_t);
				MEMBER_ARR(rank, client::CCSPlayerController_InventoryServices, 6, client::MedalRank_t);
				MEMBER(n_persona_data_public_level, client::CCSPlayerController_InventoryServices, int32_t);
				MEMBER(n_persona_data_public_commends_leader, client::CCSPlayerController_InventoryServices, int32_t);
				MEMBER(n_persona_data_public_commends_teacher, client::CCSPlayerController_InventoryServices, int32_t);
				MEMBER(n_persona_data_public_commends_friendly, client::CCSPlayerController_InventoryServices, int32_t);
				MEMBER(n_persona_data_xp_trail_level, client::CCSPlayerController_InventoryServices, int32_t);
				MEMBER(vec_server_authoritative_weapon_slots, client::CCSPlayerController_InventoryServices, C_UtlVectorEmbeddedNetworkVar<client::ServerAuthoritativeWeaponSlot_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerController_InventoryServices

			class CCSPlayerController_DamageServices : public client::CPlayerControllerComponent {
				MEMBER(n_send_update, client::CCSPlayerController_DamageServices, int32_t);
				MEMBER(damage_list, client::CCSPlayerController_DamageServices, C_UtlVectorEmbeddedNetworkVar<client::CDamageRecord>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerController_DamageServices

			class CDecalInfo {
				MEMBER(fl_animation_scale, client::CDecalInfo, float);
				MEMBER(fl_animation_life_span, client::CDecalInfo, float);
				MEMBER(fl_place_time, client::CDecalInfo, float);
				MEMBER(fl_fade_start_time, client::CDecalInfo, float);
				MEMBER(fl_fade_duration, client::CDecalInfo, float);
				MEMBER(n_vbslot, client::CDecalInfo, int32_t);
				MEMBER(n_bone_index, client::CDecalInfo, int32_t);
				MEMBER(v_position, client::CDecalInfo, Vector);
				MEMBER(fl_bounding_radius_sqr, client::CDecalInfo, float);
				MEMBER(p_next, client::CDecalInfo, client::CDecalInfo*);
				MEMBER(p_prev, client::CDecalInfo, client::CDecalInfo*);
				MEMBER(n_decal_material_index, client::CDecalInfo, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDecalInfo

			class IGapHost_GameEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IGapHost_GameEntity

			class CSoundEnvelope {
				MEMBER(current, client::CSoundEnvelope, float);
				MEMBER(target, client::CSoundEnvelope, float);
				MEMBER(rate, client::CSoundEnvelope, float);
				MEMBER(forceupdate, client::CSoundEnvelope, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundEnvelope

			struct ragdollelement_t {
				MEMBER(origin_parent_space, client::ragdollelement_t, Vector);
				MEMBER(parent_index, client::ragdollelement_t, int32_t);
				MEMBER(fl_radius, client::ragdollelement_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ragdollelement_t

			class CCSGOPlayerAnimGraphState {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGOPlayerAnimGraphState

			class CNetworkViewOffsetVector {
				MEMBER(vec_x, client::CNetworkViewOffsetVector, CNetworkedQuantizedFloat);
				MEMBER(vec_y, client::CNetworkViewOffsetVector, CNetworkedQuantizedFloat);
				MEMBER(vec_z, client::CNetworkViewOffsetVector, CNetworkedQuantizedFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNetworkViewOffsetVector

			struct EventClientPollInput_t {
				MEMBER(loop_state, client::EventClientPollInput_t, client::EngineLoopState_t);
				MEMBER(fl_real_time, client::EventClientPollInput_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientPollInput_t

			struct EventSimulate_t {
				MEMBER(loop_state, client::EventSimulate_t, client::EngineLoopState_t);
				MEMBER(b_first_tick, client::EventSimulate_t, bool);
				MEMBER(b_last_tick, client::EventSimulate_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventSimulate_t

			struct EventAdvanceTick_t : public client::EventSimulate_t {
				MEMBER(n_current_tick, client::EventAdvanceTick_t, int32_t);
				MEMBER(n_current_tick_this_frame, client::EventAdvanceTick_t, int32_t);
				MEMBER(n_total_ticks_this_frame, client::EventAdvanceTick_t, int32_t);
				MEMBER(n_total_ticks, client::EventAdvanceTick_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventAdvanceTick_t

			struct EventClientAdvanceTick_t : public client::EventAdvanceTick_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientAdvanceTick_t

			struct EventServerAdvanceTick_t : public client::EventAdvanceTick_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventServerAdvanceTick_t

			struct EventClientPauseSimulate_t : public client::EventSimulate_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientPauseSimulate_t

			struct EventServerSimulate_t : public client::EventSimulate_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventServerSimulate_t

			struct EventServerProcessNetworking_t : public client::EventSimulate_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventServerProcessNetworking_t

			struct EventClientSimulate_t : public client::EventSimulate_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientSimulate_t

			struct EventServerPostSimulate_t : public client::EventSimulate_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventServerPostSimulate_t

			struct EventPostAdvanceTick_t : public client::EventSimulate_t {
				MEMBER(n_current_tick, client::EventPostAdvanceTick_t, int32_t);
				MEMBER(n_current_tick_this_frame, client::EventPostAdvanceTick_t, int32_t);
				MEMBER(n_total_ticks_this_frame, client::EventPostAdvanceTick_t, int32_t);
				MEMBER(n_total_ticks, client::EventPostAdvanceTick_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventPostAdvanceTick_t

			struct EventClientPostAdvanceTick_t : public client::EventPostAdvanceTick_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientPostAdvanceTick_t

			struct EventServerPostAdvanceTick_t : public client::EventPostAdvanceTick_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventServerPostAdvanceTick_t

			struct EventServerBeginAsyncPostTickWork_t : public client::EventPostAdvanceTick_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventServerBeginAsyncPostTickWork_t

			struct EventClientPostSimulate_t : public client::EventSimulate_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientPostSimulate_t

			struct EventClientPreSimulate_t : public client::EventSimulate_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientPreSimulate_t

			struct EventServerPollNetworking_t : public client::EventSimulate_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventServerPollNetworking_t

			class CGlobalLightBase {
				MEMBER(b_spot_light, client::CGlobalLightBase, bool);
				MEMBER(spot_light_origin, client::CGlobalLightBase, Vector);
				MEMBER(spot_light_angles, client::CGlobalLightBase, QAngle);
				MEMBER(shadow_direction, client::CGlobalLightBase, Vector);
				MEMBER(ambient_direction, client::CGlobalLightBase, Vector);
				MEMBER(specular_direction, client::CGlobalLightBase, Vector);
				MEMBER(inspector_specular_direction, client::CGlobalLightBase, Vector);
				MEMBER(fl_specular_power, client::CGlobalLightBase, float);
				MEMBER(fl_specular_independence, client::CGlobalLightBase, float);
				MEMBER(specular_color, client::CGlobalLightBase, Color);
				MEMBER(b_start_disabled, client::CGlobalLightBase, bool);
				MEMBER(b_enabled, client::CGlobalLightBase, bool);
				MEMBER(light_color, client::CGlobalLightBase, Color);
				MEMBER(ambient_color1, client::CGlobalLightBase, Color);
				MEMBER(ambient_color2, client::CGlobalLightBase, Color);
				MEMBER(ambient_color3, client::CGlobalLightBase, Color);
				MEMBER(fl_sun_distance, client::CGlobalLightBase, float);
				MEMBER(fl_fov, client::CGlobalLightBase, float);
				MEMBER(fl_near_z, client::CGlobalLightBase, float);
				MEMBER(fl_far_z, client::CGlobalLightBase, float);
				MEMBER(b_enable_shadows, client::CGlobalLightBase, bool);
				MEMBER(b_old_enable_shadows, client::CGlobalLightBase, bool);
				MEMBER(b_background_clear_not_required, client::CGlobalLightBase, bool);
				MEMBER(fl_cloud_scale, client::CGlobalLightBase, float);
				MEMBER(fl_cloud1_speed, client::CGlobalLightBase, float);
				MEMBER(fl_cloud1_direction, client::CGlobalLightBase, float);
				MEMBER(fl_cloud2_speed, client::CGlobalLightBase, float);
				MEMBER(fl_cloud2_direction, client::CGlobalLightBase, float);
				MEMBER(fl_ambient_scale1, client::CGlobalLightBase, float);
				MEMBER(fl_ambient_scale2, client::CGlobalLightBase, float);
				MEMBER(fl_ground_scale, client::CGlobalLightBase, float);
				MEMBER(fl_light_scale, client::CGlobalLightBase, float);
				MEMBER(fl_fo_wdarkness, client::CGlobalLightBase, float);
				MEMBER(b_enable_separate_skybox_fog, client::CGlobalLightBase, bool);
				MEMBER(v_fow_color, client::CGlobalLightBase, Vector);
				MEMBER(view_origin, client::CGlobalLightBase, Vector);
				MEMBER(view_angles, client::CGlobalLightBase, QAngle);
				MEMBER(fl_view_fo_v, client::CGlobalLightBase, float);
				MEMBER_ARR(world_points, client::CGlobalLightBase, 8, Vector);
				MEMBER(v_fog_offset_layer0, client::CGlobalLightBase, Vector2D);
				MEMBER(v_fog_offset_layer1, client::CGlobalLightBase, Vector2D);
				MEMBER(h_env_wind, client::CGlobalLightBase, chandle<client::C_BaseEntity>);
				MEMBER(h_env_sky, client::CGlobalLightBase, chandle<client::C_BaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGlobalLightBase

			struct ModelConfigHandle_t {
				MEMBER(value, client::ModelConfigHandle_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ModelConfigHandle_t

			struct C_EnvWindShared_WindAveEvent_t {
				MEMBER(fl_start_wind_speed, client::C_EnvWindShared_WindAveEvent_t, float);
				MEMBER(fl_ave_wind_speed, client::C_EnvWindShared_WindAveEvent_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct C_EnvWindShared_WindAveEvent_t

			struct SellbackPurchaseEntry_t {
				MEMBER(un_def_idx, client::SellbackPurchaseEntry_t, uint16_t);
				MEMBER(n_cost, client::SellbackPurchaseEntry_t, int32_t);
				MEMBER(n_prev_armor, client::SellbackPurchaseEntry_t, int32_t);
				MEMBER(b_prev_helmet, client::SellbackPurchaseEntry_t, bool);
				MEMBER(h_item, client::SellbackPurchaseEntry_t, CEntityHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SellbackPurchaseEntry_t

			class CGlowSprite {
				MEMBER(v_color, client::CGlowSprite, Vector);
				MEMBER(fl_horz_size, client::CGlowSprite, float);
				MEMBER(fl_vert_size, client::CGlowSprite, float);
				MEMBER(h_material, client::CGlowSprite, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGlowSprite

			class CGameSceneNode {
				MEMBER(node_to_world, client::CGameSceneNode, CTransform);
				MEMBER(p_owner, client::CGameSceneNode, entity2::CEntityInstance*);
				MEMBER(p_parent, client::CGameSceneNode, client::CGameSceneNode*);
				MEMBER(p_child, client::CGameSceneNode, client::CGameSceneNode*);
				MEMBER(p_next_sibling, client::CGameSceneNode, client::CGameSceneNode*);
				MEMBER(h_parent, client::CGameSceneNode, client::CGameSceneNodeHandle);
				MEMBER(vec_origin, client::CGameSceneNode, client::CNetworkOriginCellCoordQuantizedVector);
				MEMBER(ang_rotation, client::CGameSceneNode, QAngle);
				MEMBER(fl_scale, client::CGameSceneNode, float);
				MEMBER(vec_abs_origin, client::CGameSceneNode, Vector);
				MEMBER(ang_abs_rotation, client::CGameSceneNode, QAngle);
				MEMBER(fl_abs_scale, client::CGameSceneNode, float);
				MEMBER(n_parent_attachment_or_bone, client::CGameSceneNode, int16_t);
				MEMBER(b_debug_abs_origin_changes, client::CGameSceneNode, bool);
				MEMBER(b_dormant, client::CGameSceneNode, bool);
				MEMBER(b_force_parent_to_be_networked, client::CGameSceneNode, bool);
				MEMBER(b_dirty_hierarchy, client::CGameSceneNode, uint8_t);
				MEMBER(b_dirty_bone_merge_info, client::CGameSceneNode, uint8_t);
				MEMBER(b_networked_position_changed, client::CGameSceneNode, uint8_t);
				MEMBER(b_networked_angles_changed, client::CGameSceneNode, uint8_t);
				MEMBER(b_networked_scale_changed, client::CGameSceneNode, uint8_t);
				MEMBER(b_will_be_calling_post_data_update, client::CGameSceneNode, uint8_t);
				MEMBER(b_bone_merge_flex, client::CGameSceneNode, uint8_t);
				MEMBER(n_latch_abs_origin, client::CGameSceneNode, uint8_t);
				MEMBER(b_dirty_bone_merge_bone_to_root, client::CGameSceneNode, uint8_t);
				MEMBER(n_hierarchical_depth, client::CGameSceneNode, uint8_t);
				MEMBER(n_hierarchy_type, client::CGameSceneNode, uint8_t);
				MEMBER(n_do_not_set_anim_time_in_invalidate_physics_count, client::CGameSceneNode, uint8_t);
				MEMBER(name, client::CGameSceneNode, CUtlStringToken);
				MEMBER(hierarchy_attach_name, client::CGameSceneNode, CUtlStringToken);
				MEMBER(fl_zoffset, client::CGameSceneNode, float);
				MEMBER(fl_client_local_scale, client::CGameSceneNode, float);
				MEMBER(v_render_origin, client::CGameSceneNode, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGameSceneNode

			class CSkeletonInstance : public client::CGameSceneNode {
				MEMBER(model_state, client::CSkeletonInstance, client::CModelState);
				MEMBER(b_is_animation_enabled, client::CSkeletonInstance, bool);
				MEMBER(b_use_parent_render_bounds, client::CSkeletonInstance, bool);
				MEMBER(b_disable_solid_collisions_for_hierarchy, client::CSkeletonInstance, bool);
				MEMBER(b_dirty_motion_type, client::CSkeletonInstance, uint8_t);
				MEMBER(b_is_generating_latched_parent_space_state, client::CSkeletonInstance, uint8_t);
				MEMBER(material_group, client::CSkeletonInstance, CUtlStringToken);
				MEMBER(n_hitbox_set, client::CSkeletonInstance, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSkeletonInstance

			class CNavLinkMovementVData {
				MEMBER(s_tools_only_owner_model_name, client::CNavLinkMovementVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(b_is_interpolated, client::CNavLinkMovementVData, bool);
				MEMBER(un_recommended_distance, client::CNavLinkMovementVData, uint32_t);
				MEMBER(vec_animgraph_vars, client::CNavLinkMovementVData, cutl_vector<client::CNavLinkAnimgraphVar>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNavLinkMovementVData

			struct fogparams_t {
				MEMBER(dir_primary, client::fogparams_t, Vector);
				MEMBER(color_primary, client::fogparams_t, Color);
				MEMBER(color_secondary, client::fogparams_t, Color);
				MEMBER(color_primary_lerp_to, client::fogparams_t, Color);
				MEMBER(color_secondary_lerp_to, client::fogparams_t, Color);
				MEMBER(start, client::fogparams_t, float);
				MEMBER(end, client::fogparams_t, float);
				MEMBER(farz, client::fogparams_t, float);
				MEMBER(maxdensity, client::fogparams_t, float);
				MEMBER(exponent, client::fogparams_t, float);
				MEMBER(hdrcolor_scale, client::fogparams_t, float);
				MEMBER(skybox_fog_factor, client::fogparams_t, float);
				MEMBER(skybox_fog_factor_lerp_to, client::fogparams_t, float);
				MEMBER(start_lerp_to, client::fogparams_t, float);
				MEMBER(end_lerp_to, client::fogparams_t, float);
				MEMBER(maxdensity_lerp_to, client::fogparams_t, float);
				MEMBER(lerptime, client::fogparams_t, entity2::GameTime_t);
				MEMBER(duration, client::fogparams_t, float);
				MEMBER(blendtobackground, client::fogparams_t, float);
				MEMBER(scattering, client::fogparams_t, float);
				MEMBER(locallightscale, client::fogparams_t, float);
				MEMBER(enable, client::fogparams_t, bool);
				MEMBER(blend, client::fogparams_t, bool);
				MEMBER(b_no_reflection_fog, client::fogparams_t, bool);
				MEMBER(b_padding, client::fogparams_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct fogparams_t

			class CNetworkOriginCellCoordQuantizedVector {
				MEMBER(cell_x, client::CNetworkOriginCellCoordQuantizedVector, uint16_t);
				MEMBER(cell_y, client::CNetworkOriginCellCoordQuantizedVector, uint16_t);
				MEMBER(cell_z, client::CNetworkOriginCellCoordQuantizedVector, uint16_t);
				MEMBER(n_outside_world, client::CNetworkOriginCellCoordQuantizedVector, uint16_t);
				MEMBER(vec_x, client::CNetworkOriginCellCoordQuantizedVector, CNetworkedQuantizedFloat);
				MEMBER(vec_y, client::CNetworkOriginCellCoordQuantizedVector, CNetworkedQuantizedFloat);
				MEMBER(vec_z, client::CNetworkOriginCellCoordQuantizedVector, CNetworkedQuantizedFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNetworkOriginCellCoordQuantizedVector

			struct EntityRenderAttribute_t {
				MEMBER(id, client::EntityRenderAttribute_t, CUtlStringToken);
				MEMBER(values, client::EntityRenderAttribute_t, Vector4D);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EntityRenderAttribute_t

			class CNetworkedSequenceOperation {
				MEMBER(h_sequence, client::CNetworkedSequenceOperation, animationsystem::HSequence);
				MEMBER(fl_prev_cycle, client::CNetworkedSequenceOperation, float);
				MEMBER(fl_cycle, client::CNetworkedSequenceOperation, float);
				MEMBER(fl_weight, client::CNetworkedSequenceOperation, CNetworkedQuantizedFloat);
				MEMBER(b_sequence_change_networked, client::CNetworkedSequenceOperation, bool);
				MEMBER(b_discontinuity, client::CNetworkedSequenceOperation, bool);
				MEMBER(fl_prev_cycle_from_discontinuity, client::CNetworkedSequenceOperation, float);
				MEMBER(fl_prev_cycle_for_anim_event_detection, client::CNetworkedSequenceOperation, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNetworkedSequenceOperation

			struct ServerAuthoritativeWeaponSlot_t {
				MEMBER(un_class, client::ServerAuthoritativeWeaponSlot_t, uint16_t);
				MEMBER(un_slot, client::ServerAuthoritativeWeaponSlot_t, uint16_t);
				MEMBER(un_item_def_idx, client::ServerAuthoritativeWeaponSlot_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ServerAuthoritativeWeaponSlot_t

			class C_BaseEntityAPI {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseEntityAPI

			class CTakeDamageInfoAPI {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTakeDamageInfoAPI

			struct CompositeMaterialAssemblyProcedure_t {
				MEMBER(vec_comp_mat_includes, client::CompositeMaterialAssemblyProcedure_t, cutl_vector<CResourceName>);
				MEMBER(vec_match_filters, client::CompositeMaterialAssemblyProcedure_t, cutl_vector<client::CompositeMaterialMatchFilter_t>);
				MEMBER(vec_composite_input_containers, client::CompositeMaterialAssemblyProcedure_t, cutl_vector<client::CompositeMaterialInputContainer_t>);
				MEMBER(vec_property_mutators, client::CompositeMaterialAssemblyProcedure_t, cutl_vector<client::CompMatPropertyMutator_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CompositeMaterialAssemblyProcedure_t

			struct C_SceneEntity_QueuedEvents_t {
				MEMBER(starttime, client::C_SceneEntity_QueuedEvents_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct C_SceneEntity_QueuedEvents_t

			struct shard_model_desc_t {
				MEMBER(n_model_id, client::shard_model_desc_t, int32_t);
				MEMBER(h_material_base, client::shard_model_desc_t, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(h_material_damage_overlay, client::shard_model_desc_t, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(solid, client::shard_model_desc_t, client::ShardSolid_t);
				MEMBER(vec_panel_size, client::shard_model_desc_t, Vector2D);
				MEMBER(vec_stress_position_a, client::shard_model_desc_t, Vector2D);
				MEMBER(vec_stress_position_b, client::shard_model_desc_t, Vector2D);
				MEMBER(vec_panel_vertices, client::shard_model_desc_t, C_NetworkUtlVectorBase<Vector2D>);
				MEMBER(v_initial_panel_vertices, client::shard_model_desc_t, C_NetworkUtlVectorBase<Vector4D>);
				MEMBER(fl_glass_half_thickness, client::shard_model_desc_t, float);
				MEMBER(b_has_parent, client::shard_model_desc_t, bool);
				MEMBER(b_parent_frozen, client::shard_model_desc_t, bool);
				MEMBER(surface_prop_string_token, client::shard_model_desc_t, CUtlStringToken);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct shard_model_desc_t

			class CRR_Response {
				MEMBER(type, client::CRR_Response, uint8_t);
				MEMBER_ARR(sz_response_name, client::CRR_Response, 192, char);
				MEMBER_ARR(sz_matching_rule, client::CRR_Response, 128, char);
				MEMBER(params, client::CRR_Response, client::ResponseParams);
				MEMBER(f_match_score, client::CRR_Response, float);
				MEMBER(sz_speaker_context, client::CRR_Response, char*);
				MEMBER(sz_world_context, client::CRR_Response, char*);
				MEMBER(followup, client::CRR_Response, client::ResponseFollowup);
				MEMBER(recipient_filter, client::CRR_Response, CUtlSymbol);
				MEMBER(pch_criteria_names, client::CRR_Response, cutl_vector<CUtlSymbol>);
				MEMBER(pch_criteria_values, client::CRR_Response, cutl_vector<char*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRR_Response

			class CSoundPatch {
				MEMBER(pitch, client::CSoundPatch, client::CSoundEnvelope);
				MEMBER(volume, client::CSoundPatch, client::CSoundEnvelope);
				MEMBER(shutdown_time, client::CSoundPatch, float);
				MEMBER(fl_last_time, client::CSoundPatch, float);
				MEMBER(isz_sound_script_name, client::CSoundPatch, CUtlSymbolLarge);
				MEMBER(h_ent, client::CSoundPatch, chandle<client::C_BaseEntity>);
				MEMBER(sound_entity_index, client::CSoundPatch, CEntityIndex);
				MEMBER(sound_origin, client::CSoundPatch, Vector);
				MEMBER(is_playing, client::CSoundPatch, int32_t);
				MEMBER(filter, client::CSoundPatch, client::CCopyRecipientFilter);
				MEMBER(fl_close_caption_duration, client::CSoundPatch, float);
				MEMBER(b_updated_sound_origin, client::CSoundPatch, bool);
				MEMBER(isz_class_name, client::CSoundPatch, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundPatch

			struct GeneratedTextureHandle_t {
				MEMBER(str_bitmap_name, client::GeneratedTextureHandle_t, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct GeneratedTextureHandle_t

			class CSkillDamage {
				MEMBER(fl_damage, client::CSkillDamage, client::CSkillFloat);
				MEMBER(fl_npcdamage_scalar_vs_npc, client::CSkillDamage, float);
				MEMBER(fl_physics_force_damage, client::CSkillDamage, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSkillDamage

			struct audioparams_t {
				MEMBER_ARR(local_sound, client::audioparams_t, 8, Vector);
				MEMBER(soundscape_index, client::audioparams_t, int32_t);
				MEMBER(local_bits, client::audioparams_t, uint8_t);
				MEMBER(soundscape_entity_list_index, client::audioparams_t, int32_t);
				MEMBER(sound_event_hash, client::audioparams_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct audioparams_t

			struct CWorldCompositionChunkReferenceElement_t {
				MEMBER(str_map_to_load, client::CWorldCompositionChunkReferenceElement_t, CUtlString);
				MEMBER(str_landmark_name, client::CWorldCompositionChunkReferenceElement_t, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CWorldCompositionChunkReferenceElement_t

			struct CAttributeManager_cached_attribute_float_t {
				MEMBER(fl_in, client::CAttributeManager_cached_attribute_float_t, float);
				MEMBER(i_attrib_hook, client::CAttributeManager_cached_attribute_float_t, CUtlSymbolLarge);
				MEMBER(fl_out, client::CAttributeManager_cached_attribute_float_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CAttributeManager_cached_attribute_float_t

			class CBuoyancyHelper {
				MEMBER(n_fluid_type, client::CBuoyancyHelper, CUtlStringToken);
				MEMBER(fl_fluid_density, client::CBuoyancyHelper, float);
				MEMBER(vec_fraction_of_wheel_submerged_for_wheel_friction, client::CBuoyancyHelper, cutl_vector<float>);
				MEMBER(vec_wheel_friction_scales, client::CBuoyancyHelper, cutl_vector<float>);
				MEMBER(vec_fraction_of_wheel_submerged_for_wheel_drag, client::CBuoyancyHelper, cutl_vector<float>);
				MEMBER(vec_wheel_drag, client::CBuoyancyHelper, cutl_vector<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBuoyancyHelper

			class IntervalTimer {
				MEMBER(timestamp, client::IntervalTimer, entity2::GameTime_t);
				MEMBER(n_world_group_id, client::IntervalTimer, WorldGroupId_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IntervalTimer

			class CTimeline : public client::IntervalTimer {
				MEMBER_ARR(fl_values, client::CTimeline, 64, float);
				MEMBER_ARR(n_value_counts, client::CTimeline, 64, int32_t);
				MEMBER(n_bucket_count, client::CTimeline, int32_t);
				MEMBER(fl_interval, client::CTimeline, float);
				MEMBER(fl_final_value, client::CTimeline, float);
				MEMBER(n_compression_type, client::CTimeline, client::TimelineCompression_t);
				MEMBER(b_stopped, client::CTimeline, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTimeline

			class C_BaseFlex_Emphasized_Phoneme {
				MEMBER(s_class_name, client::C_BaseFlex_Emphasized_Phoneme, CUtlString);
				MEMBER(fl_amount, client::C_BaseFlex_Emphasized_Phoneme, float);
				MEMBER(b_required, client::C_BaseFlex_Emphasized_Phoneme, bool);
				MEMBER(b_basechecked, client::C_BaseFlex_Emphasized_Phoneme, bool);
				MEMBER(b_valid, client::C_BaseFlex_Emphasized_Phoneme, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseFlex_Emphasized_Phoneme

			class EngineCountdownTimer {
				MEMBER(duration, client::EngineCountdownTimer, float);
				MEMBER(timestamp, client::EngineCountdownTimer, float);
				MEMBER(timescale, client::EngineCountdownTimer, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class EngineCountdownTimer

			class C_RetakeGameRules {
				MEMBER(n_match_seed, client::C_RetakeGameRules, int32_t);
				MEMBER(b_blockers_present, client::C_RetakeGameRules, bool);
				MEMBER(b_round_in_progress, client::C_RetakeGameRules, bool);
				MEMBER(i_first_second_half_round, client::C_RetakeGameRules, int32_t);
				MEMBER(i_bomb_site, client::C_RetakeGameRules, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_RetakeGameRules

			struct SceneEventId_t {
				MEMBER(value, client::SceneEventId_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SceneEventId_t

			struct WeaponPurchaseTracker_t {
				MEMBER(weapon_purchases, client::WeaponPurchaseTracker_t, C_UtlVectorEmbeddedNetworkVar<client::WeaponPurchaseCount_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct WeaponPurchaseTracker_t

			class ResponseParams {
				MEMBER(odds, client::ResponseParams, int16_t);
				MEMBER(flags, client::ResponseParams, int16_t);
				MEMBER(p_followup, client::ResponseParams, client::ResponseFollowup*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class ResponseParams

			struct ragdoll_t {
				MEMBER(list, client::ragdoll_t, cutl_vector<client::ragdollelement_t>);
				MEMBER(bone_index, client::ragdoll_t, cutl_vector<int32_t>);
				MEMBER(allow_stretch, client::ragdoll_t, bool);
				MEMBER(unused, client::ragdoll_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ragdoll_t

			class CNetworkTransmitComponent {
				MEMBER(n_transmit_state_owned_counter, client::CNetworkTransmitComponent, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNetworkTransmitComponent

			struct CompositeMaterial_t {
				MEMBER(target_kvs, client::CompositeMaterial_t, KeyValues3);
				MEMBER(pre_generation_kvs, client::CompositeMaterial_t, KeyValues3);
				MEMBER(final_kvs, client::CompositeMaterial_t, KeyValues3);
				MEMBER(vec_generated_textures, client::CompositeMaterial_t, cutl_vector<client::GeneratedTextureHandle_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CompositeMaterial_t

			class ISkeletonAnimationController {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class ISkeletonAnimationController

			class CSkeletonAnimationController : public client::ISkeletonAnimationController {
				MEMBER(p_skeleton_instance, client::CSkeletonAnimationController, client::CSkeletonInstance*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSkeletonAnimationController

			class CBaseAnimGraphController : public client::CSkeletonAnimationController {
				MEMBER(anim_graph_networked_vars, client::CBaseAnimGraphController, client::CAnimGraphNetworkedVariables);
				MEMBER(b_sequence_finished, client::CBaseAnimGraphController, bool);
				MEMBER(fl_sound_sync_time, client::CBaseAnimGraphController, float);
				MEMBER(n_active_ikchain_mask, client::CBaseAnimGraphController, uint32_t);
				MEMBER(h_sequence, client::CBaseAnimGraphController, animationsystem::HSequence);
				MEMBER(fl_seq_start_time, client::CBaseAnimGraphController, entity2::GameTime_t);
				MEMBER(fl_seq_fixed_cycle, client::CBaseAnimGraphController, float);
				MEMBER(n_anim_loop_mode, client::CBaseAnimGraphController, client::AnimLoopMode_t);
				MEMBER(fl_playback_rate, client::CBaseAnimGraphController, CNetworkedQuantizedFloat);
				MEMBER(n_notify_state, client::CBaseAnimGraphController, client::SequenceFinishNotifyState_t);
				MEMBER(b_networked_animation_inputs_changed, client::CBaseAnimGraphController, bool);
				MEMBER(b_networked_sequence_changed, client::CBaseAnimGraphController, bool);
				MEMBER(b_last_update_skipped, client::CBaseAnimGraphController, bool);
				MEMBER(fl_prev_anim_update_time, client::CBaseAnimGraphController, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseAnimGraphController

			struct EventAppShutdown_t {
				MEMBER(n_dummy0, client::EventAppShutdown_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventAppShutdown_t

			struct C_EnvWindShared_WindVariationEvent_t {
				MEMBER(fl_wind_angle_variation, client::C_EnvWindShared_WindVariationEvent_t, float);
				MEMBER(fl_wind_speed_variation, client::C_EnvWindShared_WindVariationEvent_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct C_EnvWindShared_WindVariationEvent_t

			class CDamageRecord {
				MEMBER(player_damager, client::CDamageRecord, chandle<client::C_CSPlayerPawn>);
				MEMBER(player_recipient, client::CDamageRecord, chandle<client::C_CSPlayerPawn>);
				MEMBER(h_player_controller_damager, client::CDamageRecord, chandle<client::CCSPlayerController>);
				MEMBER(h_player_controller_recipient, client::CDamageRecord, chandle<client::CCSPlayerController>);
				MEMBER(sz_player_damager_name, client::CDamageRecord, CUtlString);
				MEMBER(sz_player_recipient_name, client::CDamageRecord, CUtlString);
				MEMBER(damager_xuid, client::CDamageRecord, uint64_t);
				MEMBER(recipient_xuid, client::CDamageRecord, uint64_t);
				MEMBER(i_bullets_damage, client::CDamageRecord, int32_t);
				MEMBER(i_damage, client::CDamageRecord, int32_t);
				MEMBER(i_actual_health_removed, client::CDamageRecord, int32_t);
				MEMBER(i_num_hits, client::CDamageRecord, int32_t);
				MEMBER(i_last_bullet_update, client::CDamageRecord, int32_t);
				MEMBER(b_is_other_enemy, client::CDamageRecord, bool);
				MEMBER(kill_type, client::CDamageRecord, client::EKillTypes_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDamageRecord

			struct EventClientAdvanceNonRenderedFrame_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientAdvanceNonRenderedFrame_t

			class CAttributeList {
				MEMBER(attributes, client::CAttributeList, C_UtlVectorEmbeddedNetworkVar<client::CEconItemAttribute>);
				MEMBER(p_manager, client::CAttributeList, client::CAttributeManager*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAttributeList

			struct C_EconEntity_AttachedModelData_t {
				MEMBER(i_model_display_flags, client::C_EconEntity_AttachedModelData_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct C_EconEntity_AttachedModelData_t

			class CPlayerSprayDecalRenderHelper {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayerSprayDecalRenderHelper

			class CModelState {
				MEMBER(h_model, client::CModelState, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);
				MEMBER(model_name, client::CModelState, CUtlSymbolLarge);
				MEMBER(b_client_cloth_creation_suppressed, client::CModelState, bool);
				MEMBER(mesh_group_mask, client::CModelState, uint64_t);
				MEMBER(n_ideal_motion_type, client::CModelState, int8_t);
				MEMBER(n_force_lod, client::CModelState, int8_t);
				MEMBER(n_cloth_update_flags, client::CModelState, int8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelState

			struct SequenceHistory_t {
				MEMBER(h_sequence, client::SequenceHistory_t, animationsystem::HSequence);
				MEMBER(fl_seq_start_time, client::SequenceHistory_t, entity2::GameTime_t);
				MEMBER(fl_seq_fixed_cycle, client::SequenceHistory_t, float);
				MEMBER(n_seq_loop_mode, client::SequenceHistory_t, client::AnimLoopMode_t);
				MEMBER(fl_playback_rate, client::SequenceHistory_t, float);
				MEMBER(fl_cycles_per_second, client::SequenceHistory_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SequenceHistory_t

			class CEntitySubclassVDataBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEntitySubclassVDataBase

			class CPrecipitationVData : public client::CEntitySubclassVDataBase {
				MEMBER(sz_particle_precipitation_effect, client::CPrecipitationVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(fl_inner_distance, client::CPrecipitationVData, float);
				MEMBER(n_attach_type, client::CPrecipitationVData, animationsystem::ParticleAttachment_t);
				MEMBER(b_batch_same_volume_type, client::CPrecipitationVData, bool);
				MEMBER(n_rtenv_cp, client::CPrecipitationVData, int32_t);
				MEMBER(n_rtenv_cpcomponent, client::CPrecipitationVData, int32_t);
				MEMBER(sz_modifier, client::CPrecipitationVData, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPrecipitationVData

			class CBasePlayerWeaponVData : public client::CEntitySubclassVDataBase {
				MEMBER(sz_world_model, client::CBasePlayerWeaponVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(s_tools_only_owner_model_name, client::CBasePlayerWeaponVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(b_built_right_handed, client::CBasePlayerWeaponVData, bool);
				MEMBER(b_allow_flipping, client::CBasePlayerWeaponVData, bool);
				////MEMBER(s_muzzle_attachment, client::CBasePlayerWeaponVData, CAttachmentNameSymbolWithStorage);
				MEMBER(sz_muzzle_flash_particle, client::CBasePlayerWeaponVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(b_linked_cooldowns, client::CBasePlayerWeaponVData, bool);
				MEMBER(i_flags, client::CBasePlayerWeaponVData, client::ItemFlagTypes_t);
				MEMBER(n_primary_ammo_type, client::CBasePlayerWeaponVData, client::AmmoIndex_t);
				MEMBER(n_secondary_ammo_type, client::CBasePlayerWeaponVData, client::AmmoIndex_t);
				MEMBER(i_max_clip1, client::CBasePlayerWeaponVData, int32_t);
				MEMBER(i_max_clip2, client::CBasePlayerWeaponVData, int32_t);
				MEMBER(i_default_clip1, client::CBasePlayerWeaponVData, int32_t);
				MEMBER(i_default_clip2, client::CBasePlayerWeaponVData, int32_t);
				MEMBER(b_reserve_ammo_as_clips, client::CBasePlayerWeaponVData, bool);
				MEMBER(i_weight, client::CBasePlayerWeaponVData, int32_t);
				MEMBER(b_auto_switch_to, client::CBasePlayerWeaponVData, bool);
				MEMBER(b_auto_switch_from, client::CBasePlayerWeaponVData, bool);
				MEMBER(i_rumble_effect, client::CBasePlayerWeaponVData, client::RumbleEffect_t);
				MEMBER(i_slot, client::CBasePlayerWeaponVData, int32_t);
				MEMBER(i_position, client::CBasePlayerWeaponVData, int32_t);
				MEMBER(a_shoot_sounds, client::CBasePlayerWeaponVData, CUtlOrderedMap<client::WeaponSound_t,CSoundEventName>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBasePlayerWeaponVData

			class CCSWeaponBaseVData : public client::CBasePlayerWeaponVData {
				MEMBER(weapon_type, client::CCSWeaponBaseVData, client::CSWeaponType);
				MEMBER(weapon_category, client::CCSWeaponBaseVData, client::CSWeaponCategory);
				MEMBER(sz_view_model, client::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(sz_player_model, client::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(sz_world_dropped_model, client::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(sz_aimsight_lens_mask_model, client::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(sz_magazine_model, client::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(sz_heat_effect, client::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(sz_eject_brass_effect, client::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(sz_muzzle_flash_particle_alt, client::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(sz_muzzle_flash_third_person_particle, client::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(sz_muzzle_flash_third_person_particle_alt, client::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(sz_tracer_particle, client::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(gear_slot, client::CCSWeaponBaseVData, client::gear_slot_t);
				MEMBER(gear_slot_position, client::CCSWeaponBaseVData, int32_t);
				MEMBER(default_loadout_slot, client::CCSWeaponBaseVData, client::loadout_slot_t);
				MEMBER(s_wrong_team_msg, client::CCSWeaponBaseVData, CUtlString);
				MEMBER(n_price, client::CCSWeaponBaseVData, int32_t);
				MEMBER(n_kill_award, client::CCSWeaponBaseVData, int32_t);
				MEMBER(n_primary_reserve_ammo_max, client::CCSWeaponBaseVData, int32_t);
				MEMBER(n_secondary_reserve_ammo_max, client::CCSWeaponBaseVData, int32_t);
				MEMBER(b_melee_weapon, client::CCSWeaponBaseVData, bool);
				MEMBER(b_has_burst_mode, client::CCSWeaponBaseVData, bool);
				MEMBER(b_is_revolver, client::CCSWeaponBaseVData, bool);
				MEMBER(b_cannot_shoot_underwater, client::CCSWeaponBaseVData, bool);
				MEMBER(sz_name, client::CCSWeaponBaseVData, CGlobalSymbol);
				MEMBER(sz_anim_extension, client::CCSWeaponBaseVData, CUtlString);
				MEMBER(e_silencer_type, client::CCSWeaponBaseVData, client::CSWeaponSilencerType);
				MEMBER(n_crosshair_min_distance, client::CCSWeaponBaseVData, int32_t);
				MEMBER(n_crosshair_delta_distance, client::CCSWeaponBaseVData, int32_t);
				MEMBER(b_is_full_auto, client::CCSWeaponBaseVData, bool);
				MEMBER(n_num_bullets, client::CCSWeaponBaseVData, int32_t);
				MEMBER(fl_cycle_time, client::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_max_speed, client::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_spread, client::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_inaccuracy_crouch, client::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_inaccuracy_stand, client::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_inaccuracy_jump, client::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_inaccuracy_land, client::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_inaccuracy_ladder, client::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_inaccuracy_fire, client::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_inaccuracy_move, client::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_recoil_angle, client::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_recoil_angle_variance, client::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_recoil_magnitude, client::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_recoil_magnitude_variance, client::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(n_tracer_frequency, client::CCSWeaponBaseVData, client::CFiringModeInt);
				MEMBER(fl_inaccuracy_jump_initial, client::CCSWeaponBaseVData, float);
				MEMBER(fl_inaccuracy_jump_apex, client::CCSWeaponBaseVData, float);
				MEMBER(fl_inaccuracy_reload, client::CCSWeaponBaseVData, float);
				MEMBER(n_recoil_seed, client::CCSWeaponBaseVData, int32_t);
				MEMBER(n_spread_seed, client::CCSWeaponBaseVData, int32_t);
				MEMBER(fl_time_to_idle_after_fire, client::CCSWeaponBaseVData, float);
				MEMBER(fl_idle_interval, client::CCSWeaponBaseVData, float);
				MEMBER(fl_attack_movespeed_factor, client::CCSWeaponBaseVData, float);
				MEMBER(fl_heat_per_shot, client::CCSWeaponBaseVData, float);
				MEMBER(fl_inaccuracy_pitch_shift, client::CCSWeaponBaseVData, float);
				MEMBER(fl_inaccuracy_alt_sound_threshold, client::CCSWeaponBaseVData, float);
				MEMBER(fl_bot_audible_range, client::CCSWeaponBaseVData, float);
				MEMBER(sz_use_radio_subtitle, client::CCSWeaponBaseVData, CUtlString);
				MEMBER(b_unzooms_after_shot, client::CCSWeaponBaseVData, bool);
				MEMBER(b_hide_view_model_when_zoomed, client::CCSWeaponBaseVData, bool);
				MEMBER(n_zoom_levels, client::CCSWeaponBaseVData, int32_t);
				MEMBER(n_zoom_fov1, client::CCSWeaponBaseVData, int32_t);
				MEMBER(n_zoom_fov2, client::CCSWeaponBaseVData, int32_t);
				MEMBER(fl_zoom_time0, client::CCSWeaponBaseVData, float);
				MEMBER(fl_zoom_time1, client::CCSWeaponBaseVData, float);
				MEMBER(fl_zoom_time2, client::CCSWeaponBaseVData, float);
				MEMBER(fl_iron_sight_pull_up_speed, client::CCSWeaponBaseVData, float);
				MEMBER(fl_iron_sight_put_down_speed, client::CCSWeaponBaseVData, float);
				MEMBER(fl_iron_sight_fov, client::CCSWeaponBaseVData, float);
				MEMBER(fl_iron_sight_pivot_forward, client::CCSWeaponBaseVData, float);
				MEMBER(fl_iron_sight_looseness, client::CCSWeaponBaseVData, float);
				MEMBER(ang_pivot_angle, client::CCSWeaponBaseVData, QAngle);
				MEMBER(vec_iron_sight_eye_pos, client::CCSWeaponBaseVData, Vector);
				MEMBER(n_damage, client::CCSWeaponBaseVData, int32_t);
				MEMBER(fl_headshot_multiplier, client::CCSWeaponBaseVData, float);
				MEMBER(fl_armor_ratio, client::CCSWeaponBaseVData, float);
				MEMBER(fl_penetration, client::CCSWeaponBaseVData, float);
				MEMBER(fl_range, client::CCSWeaponBaseVData, float);
				MEMBER(fl_range_modifier, client::CCSWeaponBaseVData, float);
				MEMBER(fl_flinch_velocity_modifier_large, client::CCSWeaponBaseVData, float);
				MEMBER(fl_flinch_velocity_modifier_small, client::CCSWeaponBaseVData, float);
				MEMBER(fl_recovery_time_crouch, client::CCSWeaponBaseVData, float);
				MEMBER(fl_recovery_time_stand, client::CCSWeaponBaseVData, float);
				MEMBER(fl_recovery_time_crouch_final, client::CCSWeaponBaseVData, float);
				MEMBER(fl_recovery_time_stand_final, client::CCSWeaponBaseVData, float);
				MEMBER(n_recovery_transition_start_bullet, client::CCSWeaponBaseVData, int32_t);
				MEMBER(n_recovery_transition_end_bullet, client::CCSWeaponBaseVData, int32_t);
				MEMBER(fl_throw_velocity, client::CCSWeaponBaseVData, float);
				MEMBER(v_smoke_color, client::CCSWeaponBaseVData, Vector);
				MEMBER(sz_anim_class, client::CCSWeaponBaseVData, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSWeaponBaseVData

			class CBasePlayerVData : public client::CEntitySubclassVDataBase {
				MEMBER(s_model_name, client::CBasePlayerVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(fl_head_damage_multiplier, client::CBasePlayerVData, client::CSkillFloat);
				MEMBER(fl_chest_damage_multiplier, client::CBasePlayerVData, client::CSkillFloat);
				MEMBER(fl_stomach_damage_multiplier, client::CBasePlayerVData, client::CSkillFloat);
				MEMBER(fl_arm_damage_multiplier, client::CBasePlayerVData, client::CSkillFloat);
				MEMBER(fl_leg_damage_multiplier, client::CBasePlayerVData, client::CSkillFloat);
				MEMBER(fl_hold_breath_time, client::CBasePlayerVData, float);
				MEMBER(fl_drowning_damage_interval, client::CBasePlayerVData, float);
				MEMBER(n_drowning_damage_initial, client::CBasePlayerVData, int32_t);
				MEMBER(n_drowning_damage_max, client::CBasePlayerVData, int32_t);
				MEMBER(n_water_speed, client::CBasePlayerVData, int32_t);
				MEMBER(fl_use_range, client::CBasePlayerVData, float);
				MEMBER(fl_use_angle_tolerance, client::CBasePlayerVData, float);
				MEMBER(fl_crouch_time, client::CBasePlayerVData, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBasePlayerVData

			class CPlayerPawnComponent {
				MEMBER(_m_p_chain_entity, client::CPlayerPawnComponent, entity2::CNetworkVarChainer);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayerPawnComponent

			class CCSPlayer_DamageReactServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_DamageReactServices

			class CPlayer_ItemServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_ItemServices

			class CCSPlayer_ItemServices : public client::CPlayer_ItemServices {
				MEMBER(b_has_defuser, client::CCSPlayer_ItemServices, bool);
				MEMBER(b_has_helmet, client::CCSPlayer_ItemServices, bool);
				MEMBER(b_has_heavy_armor, client::CCSPlayer_ItemServices, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_ItemServices

			class CPlayer_AutoaimServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_AutoaimServices

			class CCSPlayer_BuyServices : public client::CPlayerPawnComponent {
				MEMBER(vec_sellback_purchase_entries, client::CCSPlayer_BuyServices, C_UtlVectorEmbeddedNetworkVar<client::SellbackPurchaseEntry_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_BuyServices

			class CCSPlayer_ActionTrackingServices : public client::CPlayerPawnComponent {
				MEMBER(h_last_weapon_before_c4_auto_switch, client::CCSPlayer_ActionTrackingServices, chandle<client::C_BasePlayerWeapon>);
				MEMBER(b_is_rescuing, client::CCSPlayer_ActionTrackingServices, bool);
				MEMBER(weapon_purchases_this_match, client::CCSPlayer_ActionTrackingServices, client::WeaponPurchaseTracker_t);
				MEMBER(weapon_purchases_this_round, client::CCSPlayer_ActionTrackingServices, client::WeaponPurchaseTracker_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_ActionTrackingServices

			class CCSPlayer_GlowServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_GlowServices

			class CPlayer_MovementServices : public client::CPlayerPawnComponent {
				MEMBER(n_impulse, client::CPlayer_MovementServices, int32_t);
				MEMBER(n_buttons, client::CPlayer_MovementServices, client::CInButtonState);
				MEMBER(n_queued_button_down_mask, client::CPlayer_MovementServices, uint64_t);
				MEMBER(n_queued_button_change_mask, client::CPlayer_MovementServices, uint64_t);
				MEMBER(n_button_double_pressed, client::CPlayer_MovementServices, uint64_t);
				MEMBER_ARR(p_button_pressed_cmd_number, client::CPlayer_MovementServices, 64, uint32_t);
				MEMBER(n_last_command_number_processed, client::CPlayer_MovementServices, uint32_t);
				MEMBER(n_toggle_button_down_mask, client::CPlayer_MovementServices, uint64_t);
				MEMBER(fl_maxspeed, client::CPlayer_MovementServices, float);
				MEMBER_ARR(arr_force_subtick_move_when, client::CPlayer_MovementServices, 4, float);
				MEMBER(fl_forward_move, client::CPlayer_MovementServices, float);
				MEMBER(fl_left_move, client::CPlayer_MovementServices, float);
				MEMBER(fl_up_move, client::CPlayer_MovementServices, float);
				MEMBER(vec_last_movement_impulses, client::CPlayer_MovementServices, Vector);
				MEMBER(vec_old_view_angles, client::CPlayer_MovementServices, QAngle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_MovementServices

			class CPlayer_MovementServices_Humanoid : public client::CPlayer_MovementServices {
				MEMBER(fl_step_sound_time, client::CPlayer_MovementServices_Humanoid, float);
				MEMBER(fl_fall_velocity, client::CPlayer_MovementServices_Humanoid, float);
				MEMBER(b_in_crouch, client::CPlayer_MovementServices_Humanoid, bool);
				MEMBER(n_crouch_state, client::CPlayer_MovementServices_Humanoid, uint32_t);
				MEMBER(fl_crouch_transition_start_time, client::CPlayer_MovementServices_Humanoid, entity2::GameTime_t);
				MEMBER(b_ducked, client::CPlayer_MovementServices_Humanoid, bool);
				MEMBER(b_ducking, client::CPlayer_MovementServices_Humanoid, bool);
				MEMBER(b_in_duck_jump, client::CPlayer_MovementServices_Humanoid, bool);
				MEMBER(ground_normal, client::CPlayer_MovementServices_Humanoid, Vector);
				MEMBER(fl_surface_friction, client::CPlayer_MovementServices_Humanoid, float);
				MEMBER(surface_props, client::CPlayer_MovementServices_Humanoid, CUtlStringToken);
				MEMBER(n_stepside, client::CPlayer_MovementServices_Humanoid, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_MovementServices_Humanoid

			class CCSPlayer_MovementServices : public client::CPlayer_MovementServices_Humanoid {
				MEMBER(vec_ladder_normal, client::CCSPlayer_MovementServices, Vector);
				MEMBER(n_ladder_surface_prop_index, client::CCSPlayer_MovementServices, int32_t);
				MEMBER(fl_duck_amount, client::CCSPlayer_MovementServices, float);
				MEMBER(fl_duck_speed, client::CCSPlayer_MovementServices, float);
				MEMBER(b_duck_override, client::CCSPlayer_MovementServices, bool);
				MEMBER(b_desires_duck, client::CCSPlayer_MovementServices, bool);
				MEMBER(fl_duck_offset, client::CCSPlayer_MovementServices, float);
				MEMBER(n_duck_time_msecs, client::CCSPlayer_MovementServices, uint32_t);
				MEMBER(n_duck_jump_time_msecs, client::CCSPlayer_MovementServices, uint32_t);
				MEMBER(n_jump_time_msecs, client::CCSPlayer_MovementServices, uint32_t);
				MEMBER(fl_last_duck_time, client::CCSPlayer_MovementServices, float);
				MEMBER(vec_last_position_at_full_crouch_speed, client::CCSPlayer_MovementServices, Vector2D);
				MEMBER(duck_until_on_ground, client::CCSPlayer_MovementServices, bool);
				MEMBER(b_has_walk_moved_since_last_jump, client::CCSPlayer_MovementServices, bool);
				MEMBER(b_in_stuck_test, client::CCSPlayer_MovementServices, bool);
				MEMBER_ARR(fl_stuck_check_time, client::CCSPlayer_MovementServices, 2, float);
				MEMBER(n_trace_count, client::CCSPlayer_MovementServices, int32_t);
				MEMBER(stuck_last, client::CCSPlayer_MovementServices, int32_t);
				MEMBER(b_speed_cropped, client::CCSPlayer_MovementServices, bool);
				MEMBER(fl_ground_move_efficiency, client::CCSPlayer_MovementServices, float);
				MEMBER(n_old_water_level, client::CCSPlayer_MovementServices, int32_t);
				MEMBER(fl_water_entry_time, client::CCSPlayer_MovementServices, float);
				MEMBER(vec_forward, client::CCSPlayer_MovementServices, Vector);
				MEMBER(vec_left, client::CCSPlayer_MovementServices, Vector);
				MEMBER(vec_up, client::CCSPlayer_MovementServices, Vector);
				MEMBER(n_game_code_has_moved_player_after_command, client::CCSPlayer_MovementServices, int32_t);
				MEMBER(b_old_jump_pressed, client::CCSPlayer_MovementServices, bool);
				MEMBER(fl_jump_pressed_time, client::CCSPlayer_MovementServices, float);
				MEMBER(f_stash_grenade_parameter_when, client::CCSPlayer_MovementServices, entity2::GameTime_t);
				MEMBER(n_button_down_mask_prev, client::CCSPlayer_MovementServices, uint64_t);
				MEMBER(fl_offset_tick_complete_time, client::CCSPlayer_MovementServices, float);
				MEMBER(fl_offset_tick_stashed_speed, client::CCSPlayer_MovementServices, float);
				MEMBER(fl_stamina, client::CCSPlayer_MovementServices, float);
				MEMBER(fl_height_at_jump_start, client::CCSPlayer_MovementServices, float);
				MEMBER(fl_max_jump_height_this_jump, client::CCSPlayer_MovementServices, float);
				MEMBER(fl_max_jump_height_last_jump, client::CCSPlayer_MovementServices, float);
				MEMBER(fl_stamina_at_jump_start, client::CCSPlayer_MovementServices, float);
				MEMBER(fl_accumulated_jump_error, client::CCSPlayer_MovementServices, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_MovementServices

			class CCSObserver_MovementServices : public client::CPlayer_MovementServices {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSObserver_MovementServices

			class CPlayer_WaterServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_WaterServices

			class CCSPlayer_WaterServices : public client::CPlayer_WaterServices {
				MEMBER(fl_water_jump_time, client::CCSPlayer_WaterServices, float);
				MEMBER(vec_water_jump_vel, client::CCSPlayer_WaterServices, Vector);
				MEMBER(fl_swim_sound_time, client::CCSPlayer_WaterServices, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_WaterServices

			class CPlayer_ObserverServices : public client::CPlayerPawnComponent {
				MEMBER(i_observer_mode, client::CPlayer_ObserverServices, uint8_t);
				MEMBER(h_observer_target, client::CPlayer_ObserverServices, chandle<client::C_BaseEntity>);
				MEMBER(i_observer_last_mode, client::CPlayer_ObserverServices, client::ObserverMode_t);
				MEMBER(b_forced_observer_mode, client::CPlayer_ObserverServices, bool);
				MEMBER(fl_observer_chase_distance, client::CPlayer_ObserverServices, float);
				MEMBER(fl_observer_chase_distance_calc_time, client::CPlayer_ObserverServices, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_ObserverServices

			class CCSObserver_ObserverServices : public client::CPlayer_ObserverServices {
				MEMBER(h_last_observer_target, client::CCSObserver_ObserverServices, CEntityHandle);
				MEMBER(vec_observer_interpolate_offset, client::CCSObserver_ObserverServices, Vector);
				MEMBER(vec_observer_interp_start_pos, client::CCSObserver_ObserverServices, Vector);
				MEMBER(fl_obs_interp__path_length, client::CCSObserver_ObserverServices, float);
				MEMBER(q_obs_interp__orientation_start, client::CCSObserver_ObserverServices, Quaternion);
				MEMBER(q_obs_interp__orientation_travel_dir, client::CCSObserver_ObserverServices, Quaternion);
				MEMBER(obs_interp_state, client::CCSObserver_ObserverServices, client::ObserverInterpState_t);
				MEMBER(b_observer_interpolation_needs_deferred_setup, client::CCSObserver_ObserverServices, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSObserver_ObserverServices

			class CCSPlayer_HostageServices : public client::CPlayerPawnComponent {
				MEMBER(h_carried_hostage, client::CCSPlayer_HostageServices, chandle<client::C_BaseEntity>);
				MEMBER(h_carried_hostage_prop, client::CCSPlayer_HostageServices, chandle<client::C_BaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_HostageServices

			class CCSPlayer_BulletServices : public client::CPlayerPawnComponent {
				MEMBER(total_hits_on_server, client::CCSPlayer_BulletServices, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_BulletServices

			class CPlayer_FlashlightServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_FlashlightServices

			class CCSPlayer_PingServices : public client::CPlayerPawnComponent {
				MEMBER(h_player_ping, client::CCSPlayer_PingServices, chandle<client::C_BaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_PingServices

			class CPlayer_UseServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_UseServices

			class CCSPlayer_UseServices : public client::CPlayer_UseServices {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_UseServices

			class CCSObserver_UseServices : public client::CPlayer_UseServices {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSObserver_UseServices

			class CPlayer_WeaponServices : public client::CPlayerPawnComponent {
				MEMBER(h_my_weapons, client::CPlayer_WeaponServices, C_NetworkUtlVectorBase<chandle<client::C_BasePlayerWeapon>>);
				MEMBER(h_active_weapon, client::CPlayer_WeaponServices, chandle<client::C_BasePlayerWeapon>);
				MEMBER(h_last_weapon, client::CPlayer_WeaponServices, chandle<client::C_BasePlayerWeapon>);
				MEMBER_ARR(i_ammo, client::CPlayer_WeaponServices, 32, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_WeaponServices

			class CCSPlayer_WeaponServices : public client::CPlayer_WeaponServices {
				MEMBER(fl_next_attack, client::CCSPlayer_WeaponServices, entity2::GameTime_t);
				MEMBER(b_is_looking_at_weapon, client::CCSPlayer_WeaponServices, bool);
				MEMBER(b_is_holding_look_at_weapon, client::CCSPlayer_WeaponServices, bool);
				MEMBER(n_old_shoot_position_history_count, client::CCSPlayer_WeaponServices, uint32_t);
				MEMBER(n_old_input_history_count, client::CCSPlayer_WeaponServices, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_WeaponServices

			class CPlayer_CameraServices : public client::CPlayerPawnComponent {
				MEMBER(vec_cs_view_punch_angle, client::CPlayer_CameraServices, QAngle);
				MEMBER(n_cs_view_punch_angle_tick, client::CPlayer_CameraServices, entity2::GameTick_t);
				MEMBER(fl_cs_view_punch_angle_tick_ratio, client::CPlayer_CameraServices, float);
				MEMBER(player_fog, client::CPlayer_CameraServices, client::C_fogplayerparams_t);
				MEMBER(h_color_correction_ctrl, client::CPlayer_CameraServices, chandle<client::C_ColorCorrection>);
				MEMBER(h_view_entity, client::CPlayer_CameraServices, chandle<client::C_BaseEntity>);
				MEMBER(h_tonemap_controller, client::CPlayer_CameraServices, chandle<client::C_TonemapController2>);
				MEMBER(audio, client::CPlayer_CameraServices, client::audioparams_t);
				MEMBER(post_processing_volumes, client::CPlayer_CameraServices, C_NetworkUtlVectorBase<chandle<client::C_PostProcessingVolume>>);
				MEMBER(fl_old_player_z, client::CPlayer_CameraServices, float);
				MEMBER(fl_old_player_view_offset_z, client::CPlayer_CameraServices, float);
				MEMBER(current_fog, client::CPlayer_CameraServices, client::fogparams_t);
				MEMBER(h_old_fog_controller, client::CPlayer_CameraServices, chandle<client::C_FogController>);
				MEMBER_ARR(b_override_fog_color, client::CPlayer_CameraServices, 5, bool);
				MEMBER_ARR(override_fog_color, client::CPlayer_CameraServices, 5, Color);
				MEMBER_ARR(b_override_fog_start_end, client::CPlayer_CameraServices, 5, bool);
				MEMBER_ARR(f_override_fog_start, client::CPlayer_CameraServices, 5, float);
				MEMBER_ARR(f_override_fog_end, client::CPlayer_CameraServices, 5, float);
				MEMBER(h_active_post_processing_volume, client::CPlayer_CameraServices, chandle<client::C_PostProcessingVolume>);
				MEMBER(ang_demo_view_angles, client::CPlayer_CameraServices, QAngle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_CameraServices

			class CCSPlayerBase_CameraServices : public client::CPlayer_CameraServices {
				MEMBER(i_fov, client::CCSPlayerBase_CameraServices, uint32_t);
				MEMBER(i_fovstart, client::CCSPlayerBase_CameraServices, uint32_t);
				MEMBER(fl_fovtime, client::CCSPlayerBase_CameraServices, entity2::GameTime_t);
				MEMBER(fl_fovrate, client::CCSPlayerBase_CameraServices, float);
				MEMBER(h_zoom_owner, client::CCSPlayerBase_CameraServices, chandle<client::C_BaseEntity>);
				MEMBER(fl_last_shot_fov, client::CCSPlayerBase_CameraServices, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerBase_CameraServices

			class CCSObserver_CameraServices : public client::CCSPlayerBase_CameraServices {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSObserver_CameraServices

			class CCSPlayer_CameraServices : public client::CCSPlayerBase_CameraServices {
				MEMBER(fl_death_cam_tilt, client::CCSPlayer_CameraServices, float);
				MEMBER(v_client_scope_inaccuracy, client::CCSPlayer_CameraServices, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_CameraServices

			class CPlayer_ViewModelServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_ViewModelServices

			class CCSObserver_ViewModelServices : public client::CPlayer_ViewModelServices {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSObserver_ViewModelServices

			class CCSPlayer_ViewModelServices : public client::CPlayer_ViewModelServices {
				MEMBER_ARR(h_view_model, client::CCSPlayer_ViewModelServices, 3, chandle<client::C_BaseViewModel>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_ViewModelServices

			class CSkillInt {
				MEMBER_ARR(p_value, client::CSkillInt, 4, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSkillInt

			struct EventSplitScreenStateChanged_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventSplitScreenStateChanged_t

			class CCSPointScriptExtensions_observer {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScriptExtensions_observer

			class CSkillFloat {
				MEMBER_ARR(p_value, client::CSkillFloat, 4, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSkillFloat

			struct ActiveModelConfig_t {
				MEMBER(handle, client::ActiveModelConfig_t, client::ModelConfigHandle_t);
				MEMBER(name, client::ActiveModelConfig_t, CUtlSymbolLarge);
				MEMBER(associated_entities, client::ActiveModelConfig_t, C_NetworkUtlVectorBase<chandle<client::C_BaseModelEntity>>);
				MEMBER(associated_entity_names, client::ActiveModelConfig_t, C_NetworkUtlVectorBase<CUtlSymbolLarge>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ActiveModelConfig_t

			struct RagdollCreationParams_t {
				MEMBER(v_force, client::RagdollCreationParams_t, Vector);
				MEMBER(n_force_bone, client::RagdollCreationParams_t, int32_t);
				MEMBER(b_force_current_world_transform, client::RagdollCreationParams_t, bool);
				MEMBER(n_health_to_grant, client::RagdollCreationParams_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RagdollCreationParams_t

			class CTakeDamageResult {
				MEMBER(p_originating_info, client::CTakeDamageResult, client::CTakeDamageInfo*);
				MEMBER(n_health_lost, client::CTakeDamageResult, int32_t);
				MEMBER(n_damage_taken, client::CTakeDamageResult, int32_t);
				MEMBER(n_totalled_health_lost, client::CTakeDamageResult, int32_t);
				MEMBER(n_totalled_damage_taken, client::CTakeDamageResult, int32_t);
				MEMBER(fl_totalled_damage_absorbed, client::CTakeDamageResult, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTakeDamageResult

			struct hudtextparms_t {
				MEMBER(color1, client::hudtextparms_t, Color);
				MEMBER(color2, client::hudtextparms_t, Color);
				MEMBER(effect, client::hudtextparms_t, uint8_t);
				MEMBER(channel, client::hudtextparms_t, uint8_t);
				MEMBER(x, client::hudtextparms_t, float);
				MEMBER(y, client::hudtextparms_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct hudtextparms_t

			struct EventPostDataUpdate_t {
				MEMBER(n_count, client::EventPostDataUpdate_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventPostDataUpdate_t

			struct EventClientProcessNetworking_t {
				MEMBER(n_tick_count, client::EventClientProcessNetworking_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientProcessNetworking_t

			class CAnimGraphNetworkedVariables {
				MEMBER(pred_net_bool_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<uint32_t>);
				MEMBER(pred_net_byte_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<uint8_t>);
				MEMBER(pred_net_uint16_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<uint16_t>);
				MEMBER(pred_net_int_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<int32_t>);
				MEMBER(pred_net_uint32_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<uint32_t>);
				MEMBER(pred_net_uint64_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<uint64_t>);
				MEMBER(pred_net_float_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<float>);
				MEMBER(pred_net_vector_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<Vector>);
				MEMBER(pred_net_quaternion_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<Quaternion>);
				MEMBER(pred_net_global_symbol_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<CGlobalSymbol>);
				MEMBER(owner_only_pred_net_bool_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<uint32_t>);
				MEMBER(owner_only_pred_net_byte_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<uint8_t>);
				MEMBER(owner_only_pred_net_uint16_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<uint16_t>);
				MEMBER(owner_only_pred_net_int_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<int32_t>);
				MEMBER(owner_only_pred_net_uint32_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<uint32_t>);
				MEMBER(owner_only_pred_net_uint64_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<uint64_t>);
				MEMBER(owner_only_pred_net_float_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<float>);
				MEMBER(owner_only_pred_net_vector_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<Vector>);
				MEMBER(owner_only_pred_net_quaternion_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<Quaternion>);
				MEMBER(owner_only_pred_net_global_symbol_variables, client::CAnimGraphNetworkedVariables, C_NetworkUtlVectorBase<CGlobalSymbol>);
				MEMBER(n_bool_variables_count, client::CAnimGraphNetworkedVariables, int32_t);
				MEMBER(n_owner_only_bool_variables_count, client::CAnimGraphNetworkedVariables, int32_t);
				MEMBER(n_random_seed_offset, client::CAnimGraphNetworkedVariables, int32_t);
				MEMBER(fl_last_teleport_time, client::CAnimGraphNetworkedVariables, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimGraphNetworkedVariables

			class CResponseCriteriaSet {
				MEMBER(n_num_prefixed_contexts, client::CResponseCriteriaSet, int32_t);
				MEMBER(b_override_on_append, client::CResponseCriteriaSet, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CResponseCriteriaSet

			class CAttributeManager {
				MEMBER(providers, client::CAttributeManager, cutl_vector<chandle<client::C_BaseEntity>>);
				MEMBER(i_reapply_provision_parity, client::CAttributeManager, int32_t);
				MEMBER(h_outer, client::CAttributeManager, chandle<client::C_BaseEntity>);
				MEMBER(b_prevent_loopback, client::CAttributeManager, bool);
				MEMBER(provider_type, client::CAttributeManager, client::attributeprovidertypes_t);
				MEMBER(cached_results, client::CAttributeManager, cutl_vector<client::CAttributeManager_cached_attribute_float_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAttributeManager

			class C_AttributeContainer : public client::CAttributeManager {
				MEMBER(item, client::C_AttributeContainer, client::C_EconItemView);
				MEMBER(i_external_item_provider_registered_token, client::C_AttributeContainer, int32_t);
				MEMBER(ull_registered_as_item_id, client::C_AttributeContainer, uint64_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_AttributeContainer

			struct WaterWheelFrictionScale_t {
				MEMBER(fl_fraction_of_wheel_submerged, client::WaterWheelFrictionScale_t, float);
				MEMBER(fl_friction_scale, client::WaterWheelFrictionScale_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct WaterWheelFrictionScale_t

			struct ViewAngleServerChange_t {
				MEMBER(n_type, client::ViewAngleServerChange_t, client::FixAngleSet_t);
				MEMBER(q_angle, client::ViewAngleServerChange_t, QAngle);
				MEMBER(n_index, client::ViewAngleServerChange_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ViewAngleServerChange_t

			struct CPulseCell_PlaySequence_CursorState_t {
				MEMBER(h_target, client::CPulseCell_PlaySequence_CursorState_t, chandle<client::CBaseAnimGraph>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CPulseCell_PlaySequence_CursorState_t

			class CBasePlayerControllerAPI {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBasePlayerControllerAPI

			class CCSPointScriptExtensions_player {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScriptExtensions_player

			class CRemapFloat {
				MEMBER_ARR(p_value, client::CRemapFloat, 4, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRemapFloat

			class CFiringModeFloat {
				MEMBER_ARR(fl_values, client::CFiringModeFloat, 2, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFiringModeFloat

			struct CompositeMaterialInputContainer_t {
				MEMBER(b_enabled, client::CompositeMaterialInputContainer_t, bool);
				MEMBER(n_composite_material_input_container_source_type, client::CompositeMaterialInputContainer_t, client::CompositeMaterialInputContainerSourceType_t);
				MEMBER(str_specific_container_material, client::CompositeMaterialInputContainer_t, CResourceName);
				MEMBER(str_attr_name, client::CompositeMaterialInputContainer_t, CUtlString);
				MEMBER(str_alias, client::CompositeMaterialInputContainer_t, CUtlString);
				MEMBER(vec_loose_variables, client::CompositeMaterialInputContainer_t, cutl_vector<client::CompositeMaterialInputLooseVariable_t>);
				MEMBER(str_attr_name_for_var, client::CompositeMaterialInputContainer_t, CUtlString);
				MEMBER(b_expose_externally, client::CompositeMaterialInputContainer_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CompositeMaterialInputContainer_t

			class CPointTemplateAPI {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointTemplateAPI

			class CCSPointScriptExtensions_CCSWeaponBaseVData {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScriptExtensions_CCSWeaponBaseVData

			struct C_fogplayerparams_t {
				MEMBER(h_ctrl, client::C_fogplayerparams_t, chandle<client::C_FogController>);
				MEMBER(fl_transition_time, client::C_fogplayerparams_t, float);
				MEMBER(old_color, client::C_fogplayerparams_t, Color);
				MEMBER(fl_old_start, client::C_fogplayerparams_t, float);
				MEMBER(fl_old_end, client::C_fogplayerparams_t, float);
				MEMBER(fl_old_max_density, client::C_fogplayerparams_t, float);
				MEMBER(fl_old_hdrcolor_scale, client::C_fogplayerparams_t, float);
				MEMBER(fl_old_far_z, client::C_fogplayerparams_t, float);
				MEMBER(new_color, client::C_fogplayerparams_t, Color);
				MEMBER(fl_new_start, client::C_fogplayerparams_t, float);
				MEMBER(fl_new_end, client::C_fogplayerparams_t, float);
				MEMBER(fl_new_max_density, client::C_fogplayerparams_t, float);
				MEMBER(fl_new_hdrcolor_scale, client::C_fogplayerparams_t, float);
				MEMBER(fl_new_far_z, client::C_fogplayerparams_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct C_fogplayerparams_t

			class CDestructiblePartsSystemData_HitGroupInfoAndPartData {
				MEMBER(s_name, client::CDestructiblePartsSystemData_HitGroupInfoAndPartData, CUtlString);
				MEMBER(destructible_parts_data, client::CDestructiblePartsSystemData_HitGroupInfoAndPartData, cutl_vector<client::CDestructiblePartsSystemData_PartData>);
				MEMBER(b_disable_hit_group_when_destroyed, client::CDestructiblePartsSystemData_HitGroupInfoAndPartData, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDestructiblePartsSystemData_HitGroupInfoAndPartData

			class CCSPointScriptExtensions_entity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScriptExtensions_entity

			struct EventClientPostOutput_t {
				MEMBER(loop_state, client::EventClientPostOutput_t, client::EngineLoopState_t);
				MEMBER(fl_render_time, client::EventClientPostOutput_t, double);
				MEMBER(fl_render_frame_time, client::EventClientPostOutput_t, float);
				MEMBER(fl_render_frame_time_unbounded, client::EventClientPostOutput_t, float);
				MEMBER(b_render_only, client::EventClientPostOutput_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientPostOutput_t

			struct WeaponPurchaseCount_t {
				MEMBER(n_item_def_index, client::WeaponPurchaseCount_t, uint16_t);
				MEMBER(n_count, client::WeaponPurchaseCount_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct WeaponPurchaseCount_t

			class CSharedGapTypeQueryRegistration {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSharedGapTypeQueryRegistration

			class IHasAttributes {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IHasAttributes

			struct CSPerRoundStats_t {
				MEMBER(i_kills, client::CSPerRoundStats_t, int32_t);
				MEMBER(i_deaths, client::CSPerRoundStats_t, int32_t);
				MEMBER(i_assists, client::CSPerRoundStats_t, int32_t);
				MEMBER(i_damage, client::CSPerRoundStats_t, int32_t);
				MEMBER(i_equipment_value, client::CSPerRoundStats_t, int32_t);
				MEMBER(i_money_saved, client::CSPerRoundStats_t, int32_t);
				MEMBER(i_kill_reward, client::CSPerRoundStats_t, int32_t);
				MEMBER(i_live_time, client::CSPerRoundStats_t, int32_t);
				MEMBER(i_head_shot_kills, client::CSPerRoundStats_t, int32_t);
				MEMBER(i_objective, client::CSPerRoundStats_t, int32_t);
				MEMBER(i_cash_earned, client::CSPerRoundStats_t, int32_t);
				MEMBER(i_utility_damage, client::CSPerRoundStats_t, int32_t);
				MEMBER(i_enemies_flashed, client::CSPerRoundStats_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CSPerRoundStats_t

			struct CSMatchStats_t : public client::CSPerRoundStats_t {
				MEMBER(i_enemy5_ks, client::CSMatchStats_t, int32_t);
				MEMBER(i_enemy4_ks, client::CSMatchStats_t, int32_t);
				MEMBER(i_enemy3_ks, client::CSMatchStats_t, int32_t);
				MEMBER(i_enemy_knife_kills, client::CSMatchStats_t, int32_t);
				MEMBER(i_enemy_taser_kills, client::CSMatchStats_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CSMatchStats_t

			struct PhysicsRagdollPose_t {
				MEMBER(transforms, client::PhysicsRagdollPose_t, C_NetworkUtlVectorBase<CTransform>);
				MEMBER(h_owner, client::PhysicsRagdollPose_t, chandle<client::C_BaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PhysicsRagdollPose_t

			class CCSPointScriptExtensions_player_controller {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScriptExtensions_player_controller

			class CCollisionProperty {
				MEMBER(collision_attribute, client::CCollisionProperty, client::VPhysicsCollisionAttribute_t);
				MEMBER(vec_mins, client::CCollisionProperty, Vector);
				MEMBER(vec_maxs, client::CCollisionProperty, Vector);
				MEMBER(us_solid_flags, client::CCollisionProperty, uint8_t);
				MEMBER(n_solid_type, client::CCollisionProperty, client::SolidType_t);
				MEMBER(trigger_bloat, client::CCollisionProperty, uint8_t);
				MEMBER(n_surround_type, client::CCollisionProperty, client::SurroundingBoundsType_t);
				MEMBER(collision_group, client::CCollisionProperty, uint8_t);
				MEMBER(n_enable_physics, client::CCollisionProperty, uint8_t);
				MEMBER(fl_bounding_radius, client::CCollisionProperty, float);
				MEMBER(vec_specified_surrounding_mins, client::CCollisionProperty, Vector);
				MEMBER(vec_specified_surrounding_maxs, client::CCollisionProperty, Vector);
				MEMBER(vec_surrounding_maxs, client::CCollisionProperty, Vector);
				MEMBER(vec_surrounding_mins, client::CCollisionProperty, Vector);
				MEMBER(v_capsule_center1, client::CCollisionProperty, Vector);
				MEMBER(v_capsule_center2, client::CCollisionProperty, Vector);
				MEMBER(fl_capsule_radius, client::CCollisionProperty, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCollisionProperty

			class CGlowProperty {
				MEMBER(f_glow_color, client::CGlowProperty, Vector);
				MEMBER(i_glow_type, client::CGlowProperty, int32_t);
				MEMBER(i_glow_team, client::CGlowProperty, int32_t);
				MEMBER(n_glow_range, client::CGlowProperty, int32_t);
				MEMBER(n_glow_range_min, client::CGlowProperty, int32_t);
				MEMBER(glow_color_override, client::CGlowProperty, Color);
				MEMBER(b_flashing, client::CGlowProperty, bool);
				MEMBER(fl_glow_time, client::CGlowProperty, float);
				MEMBER(fl_glow_start_time, client::CGlowProperty, float);
				MEMBER(b_eligible_for_screen_highlight, client::CGlowProperty, bool);
				MEMBER(b_glowing, client::CGlowProperty, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGlowProperty

			class CDestructiblePartsSystemData_PartData {
				MEMBER(s_name, client::CDestructiblePartsSystemData_PartData, CUtlString);
				MEMBER(s_breakable_piece_name, client::CDestructiblePartsSystemData_PartData, CGlobalSymbol);
				MEMBER(s_body_group_name, client::CDestructiblePartsSystemData_PartData, CGlobalSymbol);
				MEMBER(n_body_group_value, client::CDestructiblePartsSystemData_PartData, int32_t);
				MEMBER(s_anim_graph_param_name__part_destroyed, client::CDestructiblePartsSystemData_PartData, CGlobalSymbol);
				MEMBER(s_anim_graph_param_name__part_normalized_health, client::CDestructiblePartsSystemData_PartData, CGlobalSymbol);
				MEMBER(n_health, client::CDestructiblePartsSystemData_PartData, client::CSkillInt);
				MEMBER(n_damage_passthrough_type, client::CDestructiblePartsSystemData_PartData, client::EDestructiblePartDamagePassThroughType);
				MEMBER(b_kill_npcon_destruction, client::CDestructiblePartsSystemData_PartData, bool);
				MEMBER(s_custom_death_handshake, client::CDestructiblePartsSystemData_PartData, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDestructiblePartsSystemData_PartData

			class CProjectedTextureBase {
				MEMBER(h_target_entity, client::CProjectedTextureBase, chandle<client::C_BaseEntity>);
				MEMBER(b_state, client::CProjectedTextureBase, bool);
				MEMBER(b_always_update, client::CProjectedTextureBase, bool);
				MEMBER(fl_light_fov, client::CProjectedTextureBase, float);
				MEMBER(b_enable_shadows, client::CProjectedTextureBase, bool);
				MEMBER(b_simple_projection, client::CProjectedTextureBase, bool);
				MEMBER(b_light_only_target, client::CProjectedTextureBase, bool);
				MEMBER(b_light_world, client::CProjectedTextureBase, bool);
				MEMBER(b_camera_space, client::CProjectedTextureBase, bool);
				MEMBER(fl_brightness_scale, client::CProjectedTextureBase, float);
				MEMBER(light_color, client::CProjectedTextureBase, Color);
				MEMBER(fl_intensity, client::CProjectedTextureBase, float);
				MEMBER(fl_linear_attenuation, client::CProjectedTextureBase, float);
				MEMBER(fl_quadratic_attenuation, client::CProjectedTextureBase, float);
				MEMBER(b_volumetric, client::CProjectedTextureBase, bool);
				MEMBER(fl_volumetric_intensity, client::CProjectedTextureBase, float);
				MEMBER(fl_noise_strength, client::CProjectedTextureBase, float);
				MEMBER(fl_flashlight_time, client::CProjectedTextureBase, float);
				MEMBER(n_num_planes, client::CProjectedTextureBase, uint32_t);
				MEMBER(fl_plane_offset, client::CProjectedTextureBase, float);
				MEMBER(fl_color_transition_time, client::CProjectedTextureBase, float);
				MEMBER(fl_ambient, client::CProjectedTextureBase, float);
				MEMBER_ARR(spotlight_texture_name, client::CProjectedTextureBase, 512, char);
				MEMBER(n_spotlight_texture_frame, client::CProjectedTextureBase, int32_t);
				MEMBER(n_shadow_quality, client::CProjectedTextureBase, uint32_t);
				MEMBER(fl_near_z, client::CProjectedTextureBase, float);
				MEMBER(fl_far_z, client::CProjectedTextureBase, float);
				MEMBER(fl_projection_size, client::CProjectedTextureBase, float);
				MEMBER(fl_rotation, client::CProjectedTextureBase, float);
				MEMBER(b_flip_horizontal, client::CProjectedTextureBase, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CProjectedTextureBase

			struct VPhysicsCollisionAttribute_t {
				MEMBER(n_interacts_as, client::VPhysicsCollisionAttribute_t, uint64_t);
				MEMBER(n_interacts_with, client::VPhysicsCollisionAttribute_t, uint64_t);
				MEMBER(n_interacts_exclude, client::VPhysicsCollisionAttribute_t, uint64_t);
				MEMBER(n_entity_id, client::VPhysicsCollisionAttribute_t, uint32_t);
				MEMBER(n_owner_id, client::VPhysicsCollisionAttribute_t, uint32_t);
				MEMBER(n_hierarchy_id, client::VPhysicsCollisionAttribute_t, uint16_t);
				MEMBER(n_collision_group, client::VPhysicsCollisionAttribute_t, uint8_t);
				MEMBER(n_collision_function_mask, client::VPhysicsCollisionAttribute_t, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VPhysicsCollisionAttribute_t

			class C_GameRules {
				MEMBER(_m_p_chain_entity, client::C_GameRules, entity2::CNetworkVarChainer);
				MEMBER(n_total_paused_ticks, client::C_GameRules, int32_t);
				MEMBER(n_pause_start_tick, client::C_GameRules, int32_t);
				MEMBER(b_game_paused, client::C_GameRules, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_GameRules

			class C_SingleplayRules : public client::C_GameRules {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SingleplayRules

			class C_MultiplayRules : public client::C_GameRules {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_MultiplayRules

			class C_TeamplayRules : public client::C_MultiplayRules {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_TeamplayRules

			class C_CSGameRules : public client::C_TeamplayRules {
				MEMBER(b_freeze_period, client::C_CSGameRules, bool);
				MEMBER(b_warmup_period, client::C_CSGameRules, bool);
				MEMBER(f_warmup_period_end, client::C_CSGameRules, entity2::GameTime_t);
				MEMBER(f_warmup_period_start, client::C_CSGameRules, entity2::GameTime_t);
				MEMBER(b_server_paused, client::C_CSGameRules, bool);
				MEMBER(b_terrorist_time_out_active, client::C_CSGameRules, bool);
				MEMBER(b_cttime_out_active, client::C_CSGameRules, bool);
				MEMBER(fl_terrorist_time_out_remaining, client::C_CSGameRules, float);
				MEMBER(fl_cttime_out_remaining, client::C_CSGameRules, float);
				MEMBER(n_terrorist_time_outs, client::C_CSGameRules, int32_t);
				MEMBER(n_cttime_outs, client::C_CSGameRules, int32_t);
				MEMBER(b_technical_time_out, client::C_CSGameRules, bool);
				MEMBER(b_match_waiting_for_resume, client::C_CSGameRules, bool);
				MEMBER(i_round_time, client::C_CSGameRules, int32_t);
				MEMBER(f_match_start_time, client::C_CSGameRules, float);
				MEMBER(f_round_start_time, client::C_CSGameRules, entity2::GameTime_t);
				MEMBER(fl_restart_round_time, client::C_CSGameRules, entity2::GameTime_t);
				MEMBER(b_game_restart, client::C_CSGameRules, bool);
				MEMBER(fl_game_start_time, client::C_CSGameRules, float);
				MEMBER(time_until_next_phase_starts, client::C_CSGameRules, float);
				MEMBER(game_phase, client::C_CSGameRules, int32_t);
				MEMBER(total_rounds_played, client::C_CSGameRules, int32_t);
				MEMBER(n_rounds_played_this_phase, client::C_CSGameRules, int32_t);
				MEMBER(n_overtime_playing, client::C_CSGameRules, int32_t);
				MEMBER(i_hostages_remaining, client::C_CSGameRules, int32_t);
				MEMBER(b_any_hostage_reached, client::C_CSGameRules, bool);
				MEMBER(b_map_has_bomb_target, client::C_CSGameRules, bool);
				MEMBER(b_map_has_rescue_zone, client::C_CSGameRules, bool);
				MEMBER(b_map_has_buy_zone, client::C_CSGameRules, bool);
				MEMBER(b_is_queued_matchmaking, client::C_CSGameRules, bool);
				MEMBER(n_queued_matchmaking_mode, client::C_CSGameRules, int32_t);
				MEMBER(b_is_valve_ds, client::C_CSGameRules, bool);
				MEMBER(b_logo_map, client::C_CSGameRules, bool);
				MEMBER(b_play_all_step_sounds_on_server, client::C_CSGameRules, bool);
				MEMBER(i_spectator_slot_count, client::C_CSGameRules, int32_t);
				MEMBER(match_device, client::C_CSGameRules, int32_t);
				MEMBER(b_has_match_started, client::C_CSGameRules, bool);
				MEMBER(n_next_map_in_mapgroup, client::C_CSGameRules, int32_t);
				MEMBER_ARR(sz_tournament_event_name, client::C_CSGameRules, 512, char);
				MEMBER_ARR(sz_tournament_event_stage, client::C_CSGameRules, 512, char);
				MEMBER_ARR(sz_match_stat_txt, client::C_CSGameRules, 512, char);
				MEMBER_ARR(sz_tournament_predictions_txt, client::C_CSGameRules, 512, char);
				MEMBER(n_tournament_predictions_pct, client::C_CSGameRules, int32_t);
				MEMBER(fl_cmmitem_drop_reveal_start_time, client::C_CSGameRules, entity2::GameTime_t);
				MEMBER(fl_cmmitem_drop_reveal_end_time, client::C_CSGameRules, entity2::GameTime_t);
				MEMBER(b_is_dropping_items, client::C_CSGameRules, bool);
				MEMBER(b_is_quest_eligible, client::C_CSGameRules, bool);
				MEMBER(b_is_hltv_active, client::C_CSGameRules, bool);
				MEMBER_ARR(arr_prohibited_item_indices, client::C_CSGameRules, 100, uint16_t);
				MEMBER_ARR(arr_tournament_active_caster_accounts, client::C_CSGameRules, 4, uint32_t);
				MEMBER(num_best_of_maps, client::C_CSGameRules, int32_t);
				MEMBER(n_halloween_mask_list_seed, client::C_CSGameRules, int32_t);
				MEMBER(b_bomb_dropped, client::C_CSGameRules, bool);
				MEMBER(b_bomb_planted, client::C_CSGameRules, bool);
				MEMBER(i_round_win_status, client::C_CSGameRules, int32_t);
				MEMBER(e_round_win_reason, client::C_CSGameRules, int32_t);
				MEMBER(b_tcant_buy, client::C_CSGameRules, bool);
				MEMBER(b_ctcant_buy, client::C_CSGameRules, bool);
				MEMBER_ARR(i_match_stats__round_results, client::C_CSGameRules, 30, int32_t);
				MEMBER_ARR(i_match_stats__players_alive__ct, client::C_CSGameRules, 30, int32_t);
				MEMBER_ARR(i_match_stats__players_alive__t, client::C_CSGameRules, 30, int32_t);
				MEMBER_ARR(team_respawn_wave_times, client::C_CSGameRules, 32, float);
				MEMBER_ARR(fl_next_respawn_wave, client::C_CSGameRules, 32, entity2::GameTime_t);
				MEMBER(n_server_quest_id, client::C_CSGameRules, int32_t);
				MEMBER(v_minimap_mins, client::C_CSGameRules, Vector);
				MEMBER(v_minimap_maxs, client::C_CSGameRules, Vector);
				MEMBER_ARR(minimap_vertical_section_heights, client::C_CSGameRules, 8, float);
				MEMBER(b_spawned_terror_hunt_heavy, client::C_CSGameRules, bool);
				MEMBER_ARR(n_end_match_map_group_vote_types, client::C_CSGameRules, 10, int32_t);
				MEMBER_ARR(n_end_match_map_group_vote_options, client::C_CSGameRules, 10, int32_t);
				MEMBER(n_end_match_map_vote_winner, client::C_CSGameRules, int32_t);
				MEMBER(i_num_consecutive_ctloses, client::C_CSGameRules, int32_t);
				MEMBER(i_num_consecutive_terrorist_loses, client::C_CSGameRules, int32_t);
				MEMBER(b_mark_client_stop_record_at_round_end, client::C_CSGameRules, bool);
				MEMBER(n_match_aborted_early_reason, client::C_CSGameRules, int32_t);
				MEMBER(b_has_triggered_round_start_music, client::C_CSGameRules, bool);
				MEMBER(b_switching_teams_at_round_reset, client::C_CSGameRules, bool);
				MEMBER(p_game_mode_rules, client::C_CSGameRules, client::CCSGameModeRules*);
				MEMBER(retake_rules, client::C_CSGameRules, client::C_RetakeGameRules);
				MEMBER(n_match_end_count, client::C_CSGameRules, uint8_t);
				MEMBER(n_tteam_intro_variant, client::C_CSGameRules, int32_t);
				MEMBER(n_ctteam_intro_variant, client::C_CSGameRules, int32_t);
				MEMBER(b_team_intro_period, client::C_CSGameRules, bool);
				MEMBER(i_round_end_winner_team, client::C_CSGameRules, int32_t);
				MEMBER(e_round_end_reason, client::C_CSGameRules, int32_t);
				MEMBER(b_round_end_show_timer_defend, client::C_CSGameRules, bool);
				MEMBER(i_round_end_timer_time, client::C_CSGameRules, int32_t);
				MEMBER(s_round_end_fun_fact_token, client::C_CSGameRules, CUtlString);
				MEMBER(i_round_end_fun_fact_player_slot, client::C_CSGameRules, CPlayerSlot);
				MEMBER(i_round_end_fun_fact_data1, client::C_CSGameRules, int32_t);
				MEMBER(i_round_end_fun_fact_data2, client::C_CSGameRules, int32_t);
				MEMBER(i_round_end_fun_fact_data3, client::C_CSGameRules, int32_t);
				MEMBER(s_round_end_message, client::C_CSGameRules, CUtlString);
				MEMBER(i_round_end_player_count, client::C_CSGameRules, int32_t);
				MEMBER(b_round_end_no_music, client::C_CSGameRules, bool);
				MEMBER(i_round_end_legacy, client::C_CSGameRules, int32_t);
				MEMBER(n_round_end_count, client::C_CSGameRules, uint8_t);
				MEMBER(i_round_start_round_number, client::C_CSGameRules, int32_t);
				MEMBER(n_round_start_count, client::C_CSGameRules, uint8_t);
				MEMBER(fl_last_perf_sample_time, client::C_CSGameRules, double);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGameRules

			class C_EnvWindShared {
				MEMBER(fl_start_time, client::C_EnvWindShared, entity2::GameTime_t);
				MEMBER(i_wind_seed, client::C_EnvWindShared, uint32_t);
				MEMBER(i_min_wind, client::C_EnvWindShared, uint16_t);
				MEMBER(i_max_wind, client::C_EnvWindShared, uint16_t);
				MEMBER(wind_radius, client::C_EnvWindShared, int32_t);
				MEMBER(i_min_gust, client::C_EnvWindShared, uint16_t);
				MEMBER(i_max_gust, client::C_EnvWindShared, uint16_t);
				MEMBER(fl_min_gust_delay, client::C_EnvWindShared, float);
				MEMBER(fl_max_gust_delay, client::C_EnvWindShared, float);
				MEMBER(fl_gust_duration, client::C_EnvWindShared, float);
				MEMBER(i_gust_dir_change, client::C_EnvWindShared, uint16_t);
				MEMBER(location, client::C_EnvWindShared, Vector);
				MEMBER(isz_gust_sound, client::C_EnvWindShared, int32_t);
				MEMBER(i_wind_dir, client::C_EnvWindShared, int32_t);
				MEMBER(fl_wind_speed, client::C_EnvWindShared, float);
				MEMBER(current_wind_vector, client::C_EnvWindShared, Vector);
				MEMBER(current_sway_vector, client::C_EnvWindShared, Vector);
				MEMBER(prev_sway_vector, client::C_EnvWindShared, Vector);
				MEMBER(i_initial_wind_dir, client::C_EnvWindShared, uint16_t);
				MEMBER(fl_initial_wind_speed, client::C_EnvWindShared, float);
				MEMBER(fl_variation_time, client::C_EnvWindShared, entity2::GameTime_t);
				MEMBER(fl_sway_time, client::C_EnvWindShared, entity2::GameTime_t);
				MEMBER(fl_sim_time, client::C_EnvWindShared, entity2::GameTime_t);
				MEMBER(fl_switch_time, client::C_EnvWindShared, entity2::GameTime_t);
				MEMBER(fl_ave_wind_speed, client::C_EnvWindShared, float);
				MEMBER(b_gusting, client::C_EnvWindShared, bool);
				MEMBER(fl_wind_angle_variation, client::C_EnvWindShared, float);
				MEMBER(fl_wind_speed_variation, client::C_EnvWindShared, float);
				MEMBER(h_ent_owner, client::C_EnvWindShared, chandle<client::C_BaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvWindShared

			struct EngineLoopState_t {
				MEMBER(n_plat_window_width, client::EngineLoopState_t, int32_t);
				MEMBER(n_plat_window_height, client::EngineLoopState_t, int32_t);
				MEMBER(n_render_width, client::EngineLoopState_t, int32_t);
				MEMBER(n_render_height, client::EngineLoopState_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EngineLoopState_t

			class CPathSimpleAPI {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathSimpleAPI

			class CFlashlightEffect {
				MEMBER(b_is_on, client::CFlashlightEffect, bool);
				MEMBER(b_muzzle_flash_enabled, client::CFlashlightEffect, bool);
				MEMBER(fl_muzzle_flash_brightness, client::CFlashlightEffect, float);
				MEMBER(quat_muzzle_flash_orientation, client::CFlashlightEffect, Quaternion);
				MEMBER(vec_muzzle_flash_origin, client::CFlashlightEffect, Vector);
				MEMBER(fl_fov, client::CFlashlightEffect, float);
				MEMBER(fl_far_z, client::CFlashlightEffect, float);
				MEMBER(fl_linear_atten, client::CFlashlightEffect, float);
				MEMBER(b_casts_shadows, client::CFlashlightEffect, bool);
				MEMBER(fl_current_pull_back_dist, client::CFlashlightEffect, float);
				MEMBER(flashlight_texture, client::CFlashlightEffect, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(muzzle_flash_texture, client::CFlashlightEffect, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER_ARR(texture_name, client::CFlashlightEffect, 64, char);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFlashlightEffect

			class CEffectData {
				MEMBER(v_origin, client::CEffectData, Vector);
				MEMBER(v_start, client::CEffectData, Vector);
				MEMBER(v_normal, client::CEffectData, Vector);
				MEMBER(v_angles, client::CEffectData, QAngle);
				MEMBER(h_entity, client::CEffectData, CEntityHandle);
				MEMBER(h_other_entity, client::CEffectData, CEntityHandle);
				MEMBER(fl_scale, client::CEffectData, float);
				MEMBER(fl_magnitude, client::CEffectData, float);
				MEMBER(fl_radius, client::CEffectData, float);
				MEMBER(n_surface_prop, client::CEffectData, CUtlStringToken);
				MEMBER(n_effect_index, client::CEffectData, CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(n_damage_type, client::CEffectData, uint32_t);
				MEMBER(n_penetrate, client::CEffectData, uint8_t);
				MEMBER(n_material, client::CEffectData, uint16_t);
				MEMBER(n_hit_box, client::CEffectData, uint16_t);
				MEMBER(n_color, client::CEffectData, uint8_t);
				MEMBER(f_flags, client::CEffectData, uint8_t);
				MEMBER(n_attachment_index, client::CEffectData, modellib::AttachmentHandle_t);
				MEMBER(n_attachment_name, client::CEffectData, CUtlStringToken);
				MEMBER(i_effect_name, client::CEffectData, uint16_t);
				MEMBER(n_explosion_type, client::CEffectData, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEffectData

			class CFootstepTableHandle {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootstepTableHandle

			struct HullFlags_t {
				MEMBER(b_hull__human, client::HullFlags_t, bool);
				MEMBER(b_hull__small_centered, client::HullFlags_t, bool);
				MEMBER(b_hull__wide_human, client::HullFlags_t, bool);
				MEMBER(b_hull__tiny, client::HullFlags_t, bool);
				MEMBER(b_hull__medium, client::HullFlags_t, bool);
				MEMBER(b_hull__tiny_centered, client::HullFlags_t, bool);
				MEMBER(b_hull__large, client::HullFlags_t, bool);
				MEMBER(b_hull__large_centered, client::HullFlags_t, bool);
				MEMBER(b_hull__medium_tall, client::HullFlags_t, bool);
				MEMBER(b_hull__small, client::HullFlags_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct HullFlags_t

			struct PointCameraSettings_t {
				MEMBER(fl_near_blurry_distance, client::PointCameraSettings_t, float);
				MEMBER(fl_near_crisp_distance, client::PointCameraSettings_t, float);
				MEMBER(fl_far_crisp_distance, client::PointCameraSettings_t, float);
				MEMBER(fl_far_blurry_distance, client::PointCameraSettings_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PointCameraSettings_t

			class CClientGapTypeQueryRegistration {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CClientGapTypeQueryRegistration

			struct EventClientOutput_t {
				MEMBER(loop_state, client::EventClientOutput_t, client::EngineLoopState_t);
				MEMBER(fl_render_time, client::EventClientOutput_t, float);
				MEMBER(fl_real_time, client::EventClientOutput_t, float);
				MEMBER(fl_render_frame_time_unbounded, client::EventClientOutput_t, float);
				MEMBER(b_render_only, client::EventClientOutput_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventClientOutput_t

			class CPulseAnimFuncs {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseAnimFuncs

			struct EventSimpleLoopFrameUpdate_t {
				MEMBER(loop_state, client::EventSimpleLoopFrameUpdate_t, client::EngineLoopState_t);
				MEMBER(fl_real_time, client::EventSimpleLoopFrameUpdate_t, float);
				MEMBER(fl_frame_time, client::EventSimpleLoopFrameUpdate_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventSimpleLoopFrameUpdate_t

			struct WrappedPhysicsJoint_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct WrappedPhysicsJoint_t

			class CCopyRecipientFilter {
				MEMBER(flags, client::CCopyRecipientFilter, int32_t);
				MEMBER(recipients, client::CCopyRecipientFilter, cutl_vector<CPlayerSlot>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCopyRecipientFilter

			struct PredictedDamageTag_t {
				MEMBER(n_tag_tick, client::PredictedDamageTag_t, entity2::GameTick_t);
				MEMBER(fl_flinch_mod_small, client::PredictedDamageTag_t, float);
				MEMBER(fl_flinch_mod_large, client::PredictedDamageTag_t, float);
				MEMBER(fl_friendly_fire_damage_reduction_ratio, client::PredictedDamageTag_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PredictedDamageTag_t

			class CDestructiblePartRuntimeData {
				MEMBER(n_health_remaining, client::CDestructiblePartRuntimeData, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDestructiblePartRuntimeData

			class CGameSceneNodeHandle {
				MEMBER(h_owner, client::CGameSceneNodeHandle, CEntityHandle);
				MEMBER(name, client::CGameSceneNodeHandle, CUtlStringToken);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGameSceneNodeHandle

			struct EntitySpottedState_t {
				MEMBER(b_spotted, client::EntitySpottedState_t, bool);
				MEMBER_ARR(b_spotted_by_mask, client::EntitySpottedState_t, 2, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EntitySpottedState_t

			class C_RopeKeyframe_CPhysicsDelegate {
				MEMBER(p_keyframe, client::C_RopeKeyframe_CPhysicsDelegate, client::C_RopeKeyframe*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_RopeKeyframe_CPhysicsDelegate

			struct AmmoIndex_t {
				MEMBER(value, client::AmmoIndex_t, int8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct AmmoIndex_t

			class CountdownTimer {
				MEMBER(duration, client::CountdownTimer, float);
				MEMBER(timestamp, client::CountdownTimer, entity2::GameTime_t);
				MEMBER(timescale, client::CountdownTimer, float);
				MEMBER(n_world_group_id, client::CountdownTimer, WorldGroupId_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CountdownTimer

			class CCSGameModeRules {
				MEMBER(_m_p_chain_entity, client::CCSGameModeRules, entity2::CNetworkVarChainer);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGameModeRules

			class CCSGameModeRules_Noop : public client::CCSGameModeRules {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGameModeRules_Noop

			class CCSGameModeRules_ArmsRace : public client::CCSGameModeRules {
				MEMBER(weapon_sequence, client::CCSGameModeRules_ArmsRace, C_NetworkUtlVectorBase<CUtlString>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGameModeRules_ArmsRace

			class CCSGameModeRules_Deathmatch : public client::CCSGameModeRules {
				MEMBER(fl_dmbonus_start_time, client::CCSGameModeRules_Deathmatch, entity2::GameTime_t);
				MEMBER(fl_dmbonus_time_length, client::CCSGameModeRules_Deathmatch, float);
				MEMBER(s_dmbonus_weapon, client::CCSGameModeRules_Deathmatch, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGameModeRules_Deathmatch

			class CScriptUniformRandomStream {
				///MEMBER(h_script_scope, client::CScriptUniformRandomStream, HSCRIPT);
				MEMBER(n_initial_seed, client::CScriptUniformRandomStream, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CScriptUniformRandomStream

			class CCSPointScriptExtensions_weapon_cs_base {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScriptExtensions_weapon_cs_base

			class CEconItemAttribute {
				MEMBER(i_attribute_definition_index, client::CEconItemAttribute, uint16_t);
				MEMBER(fl_value, client::CEconItemAttribute, float);
				MEMBER(fl_initial_value, client::CEconItemAttribute, float);
				MEMBER(n_refundable_currency, client::CEconItemAttribute, int32_t);
				MEMBER(b_set_bonus, client::CEconItemAttribute, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEconItemAttribute

			struct EventProfileStorageAvailable_t {
				MEMBER(n_split_screen_slot, client::EventProfileStorageAvailable_t, CSplitScreenSlot);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EventProfileStorageAvailable_t

			struct sky3dparams_t {
				MEMBER(scale, client::sky3dparams_t, int16_t);
				MEMBER(origin, client::sky3dparams_t, Vector);
				MEMBER(b_clip3_dsky_box_near_to_world_far, client::sky3dparams_t, bool);
				MEMBER(fl_clip3_dsky_box_near_to_world_far_offset, client::sky3dparams_t, float);
				MEMBER(fog, client::sky3dparams_t, client::fogparams_t);
				MEMBER(n_world_group_id, client::sky3dparams_t, WorldGroupId_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct sky3dparams_t

			struct thinkfunc_t {
				///MEMBER(h_fn, client::thinkfunc_t, HSCRIPT);
				MEMBER(n_context, client::thinkfunc_t, CUtlStringToken);
				MEMBER(n_next_think_tick, client::thinkfunc_t, entity2::GameTick_t);
				MEMBER(n_last_think_tick, client::thinkfunc_t, entity2::GameTick_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct thinkfunc_t

			class CBreakableStageHelper {
				MEMBER(n_current_stage, client::CBreakableStageHelper, int32_t);
				MEMBER(n_stage_count, client::CBreakableStageHelper, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBreakableStageHelper

			class CDestructiblePartRuntimeDataVector {
				MEMBER(destructible_parts_runtime_data, client::CDestructiblePartRuntimeDataVector, cutl_vector<client::CDestructiblePartRuntimeData>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDestructiblePartRuntimeDataVector

			struct CompositeMaterialEditorPoint_t {
				MEMBER(model_name, client::CompositeMaterialEditorPoint_t, CResourceName);
				MEMBER(n_sequence_index, client::CompositeMaterialEditorPoint_t, int32_t);
				MEMBER(fl_cycle, client::CompositeMaterialEditorPoint_t, float);
				MEMBER(kvmodel_state_choices, client::CompositeMaterialEditorPoint_t, KeyValues3);
				MEMBER(b_enable_child_model, client::CompositeMaterialEditorPoint_t, bool);
				MEMBER(child_model_name, client::CompositeMaterialEditorPoint_t, CResourceName);
				MEMBER(vec_composite_material_assembly_procedures, client::CompositeMaterialEditorPoint_t, cutl_vector<client::CompositeMaterialAssemblyProcedure_t>);
				MEMBER(vec_composite_materials, client::CompositeMaterialEditorPoint_t, cutl_vector<client::CompositeMaterial_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CompositeMaterialEditorPoint_t

			class ResponseFollowup {
				MEMBER(followup_concept, client::ResponseFollowup, char*);
				MEMBER(followup_contexts, client::ResponseFollowup, char*);
				MEMBER(followup_delay, client::ResponseFollowup, float);
				MEMBER(followup_target, client::ResponseFollowup, char*);
				MEMBER(followup_entityiotarget, client::ResponseFollowup, char*);
				MEMBER(followup_entityioinput, client::ResponseFollowup, char*);
				MEMBER(followup_entityiodelay, client::ResponseFollowup, float);
				MEMBER(b_fired, client::ResponseFollowup, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class ResponseFollowup

			class CLogicRelay : public client::CLogicalEntity {
				MEMBER(on_trigger, client::CLogicRelay, entity2::CEntityIOOutput);
				MEMBER(on_spawn, client::CLogicRelay, entity2::CEntityIOOutput);
				MEMBER(b_disabled, client::CLogicRelay, bool);
				MEMBER(b_wait_for_refire, client::CLogicRelay, bool);
				MEMBER(b_trigger_once, client::CLogicRelay, bool);
				MEMBER(b_fast_retrigger, client::CLogicRelay, bool);
				MEMBER(b_passthough_caller, client::CLogicRelay, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicRelay

			class C_CSGO_TeamSelectCharacterPosition : public client::C_CSGO_TeamPreviewCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_TeamSelectCharacterPosition

			class C_InfoInstructorHintHostageRescueZone : public client::C_PointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_InfoInstructorHintHostageRescueZone

			class C_Item : public client::C_EconEntity {
				MEMBER_ARR(p_reticle_hint_text_name, client::C_Item, 256, char);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Item

			class CBodyComponentBaseAnimGraph : public client::CBodyComponentSkeletonInstance {
				MEMBER(animation_controller, client::CBodyComponentBaseAnimGraph, client::CBaseAnimGraphController);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBodyComponentBaseAnimGraph

			class C_PointClientUIHUD : public client::C_BaseClientUIEntity {
				MEMBER(b_check_cssclasses, client::C_PointClientUIHUD, bool);
				MEMBER(b_ignore_input, client::C_PointClientUIHUD, bool);
				MEMBER(fl_width, client::C_PointClientUIHUD, float);
				MEMBER(fl_height, client::C_PointClientUIHUD, float);
				MEMBER(fl_dpi, client::C_PointClientUIHUD, float);
				MEMBER(fl_interact_distance, client::C_PointClientUIHUD, float);
				MEMBER(fl_depth_offset, client::C_PointClientUIHUD, float);
				MEMBER(un_owner_context, client::C_PointClientUIHUD, uint32_t);
				MEMBER(un_horizontal_align, client::C_PointClientUIHUD, uint32_t);
				MEMBER(un_vertical_align, client::C_PointClientUIHUD, uint32_t);
				MEMBER(un_orientation, client::C_PointClientUIHUD, uint32_t);
				MEMBER(b_allow_interaction_from_all_scene_worlds, client::C_PointClientUIHUD, bool);
				MEMBER(vec_cssclasses, client::C_PointClientUIHUD, C_NetworkUtlVectorBase<CUtlSymbolLarge>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PointClientUIHUD

			class C_SoundOpvarSetPathCornerEntity : public client::C_SoundOpvarSetPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundOpvarSetPathCornerEntity

			class C_HEGrenade : public client::C_BaseCSGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_HEGrenade

			class C_FuncMover : public client::C_BaseToggle {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FuncMover

			class C_WeaponM4A1 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponM4A1

			class C_TriggerLerpObject : public client::C_BaseTrigger {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_TriggerLerpObject

			class C_SoundEventPathCornerEntity : public client::C_SoundEventEntity {
				MEMBER(vec_corner_pairs_networked, client::C_SoundEventPathCornerEntity, C_NetworkUtlVectorBase<client::SoundeventPathCornerPairNetworked_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundEventPathCornerEntity

			class CEnvSoundscapeTriggerable : public client::CEnvSoundscape {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvSoundscapeTriggerable

			class C_HostageCarriableProp : public client::CBaseAnimGraph {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_HostageCarriableProp

			class C_WeaponM249 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponM249

			class C_PlayerPing : public client::C_BaseEntity {
				MEMBER(h_player, client::C_PlayerPing, chandle<client::C_CSPlayerPawn>);
				MEMBER(h_pinged_entity, client::C_PlayerPing, chandle<client::C_BaseEntity>);
				MEMBER(i_type, client::C_PlayerPing, int32_t);
				MEMBER(b_urgent, client::C_PlayerPing, bool);
				MEMBER_ARR(sz_place_name, client::C_PlayerPing, 18, char);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PlayerPing

			class C_Chicken : public client::C_DynamicProp {
				MEMBER(h_holiday_hat_addon, client::C_Chicken, chandle<client::CBaseAnimGraph>);
				MEMBER(jumped_this_frame, client::C_Chicken, bool);
				MEMBER(leader, client::C_Chicken, chandle<client::C_CSPlayerPawn>);
				MEMBER(attribute_manager, client::C_Chicken, client::C_AttributeContainer);
				MEMBER(b_attributes_initialized, client::C_Chicken, bool);
				MEMBER(h_water_wake_particles, client::C_Chicken, client::ParticleIndex_t);
				MEMBER(b_is_preview_model, client::C_Chicken, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Chicken

			class C_BaseCSGrenade : public client::C_CSWeaponBase {
				MEMBER(b_client_predict_delete, client::C_BaseCSGrenade, bool);
				MEMBER(b_redraw, client::C_BaseCSGrenade, bool);
				MEMBER(b_is_held_by_player, client::C_BaseCSGrenade, bool);
				MEMBER(b_pin_pulled, client::C_BaseCSGrenade, bool);
				MEMBER(b_jump_throw, client::C_BaseCSGrenade, bool);
				MEMBER(b_throw_animating, client::C_BaseCSGrenade, bool);
				MEMBER(f_throw_time, client::C_BaseCSGrenade, entity2::GameTime_t);
				MEMBER(fl_throw_strength, client::C_BaseCSGrenade, float);
				MEMBER(fl_throw_strength_approach, client::C_BaseCSGrenade, float);
				MEMBER(f_drop_time, client::C_BaseCSGrenade, entity2::GameTime_t);
				MEMBER(f_pin_pull_time, client::C_BaseCSGrenade, entity2::GameTime_t);
				MEMBER(b_just_pulled_pin, client::C_BaseCSGrenade, bool);
				MEMBER(n_next_hold_tick, client::C_BaseCSGrenade, entity2::GameTick_t);
				MEMBER(fl_next_hold_frac, client::C_BaseCSGrenade, float);
				MEMBER(h_switch_to_weapon_after_throw, client::C_BaseCSGrenade, chandle<client::C_CSWeaponBase>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseCSGrenade

			class C_Fish : public client::CBaseAnimGraph {
				MEMBER(pos, client::C_Fish, Vector);
				MEMBER(vel, client::C_Fish, Vector);
				MEMBER(angles, client::C_Fish, QAngle);
				MEMBER(local_life_state, client::C_Fish, int32_t);
				MEMBER(death_depth, client::C_Fish, float);
				MEMBER(death_angle, client::C_Fish, float);
				MEMBER(buoyancy, client::C_Fish, float);
				MEMBER(wiggle_timer, client::C_Fish, client::CountdownTimer);
				MEMBER(wiggle_phase, client::C_Fish, float);
				MEMBER(wiggle_rate, client::C_Fish, float);
				MEMBER(actual_pos, client::C_Fish, Vector);
				MEMBER(actual_angles, client::C_Fish, QAngle);
				MEMBER(pool_origin, client::C_Fish, Vector);
				MEMBER(water_level, client::C_Fish, float);
				MEMBER(got_update, client::C_Fish, bool);
				MEMBER(x, client::C_Fish, float);
				MEMBER(y, client::C_Fish, float);
				MEMBER(z, client::C_Fish, float);
				MEMBER(angle, client::C_Fish, float);
				MEMBER_ARR(error_history, client::C_Fish, 20, float);
				MEMBER(error_history_index, client::C_Fish, int32_t);
				MEMBER(error_history_count, client::C_Fish, int32_t);
				MEMBER(average_error, client::C_Fish, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Fish

			class C_GameRulesProxy : public client::C_BaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_GameRulesProxy

			class C_EnvProjectedTexture : public client::C_ModelPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvProjectedTexture

			class CBodyComponentSkeletonInstance : public client::CBodyComponent {
				MEMBER(skeleton_instance, client::CBodyComponentSkeletonInstance, client::CSkeletonInstance);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBodyComponentSkeletonInstance

			class C_WeaponCZ75a : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponCZ75a

			class C_EnvCombinedLightProbeVolume : public client::C_BaseEntity {
				MEMBER(entity__color, client::C_EnvCombinedLightProbeVolume, Color);
				MEMBER(entity_fl_brightness, client::C_EnvCombinedLightProbeVolume, float);
				MEMBER(entity_h_cubemap_texture, client::C_EnvCombinedLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_b_custom_cubemap_texture, client::C_EnvCombinedLightProbeVolume, bool);
				MEMBER(entity_h_light_probe_texture, client::C_EnvCombinedLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_h_light_probe_direct_light_indices_texture, client::C_EnvCombinedLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_h_light_probe_direct_light_scalars_texture, client::C_EnvCombinedLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_h_light_probe_direct_light_shadows_texture, client::C_EnvCombinedLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_v_box_mins, client::C_EnvCombinedLightProbeVolume, Vector);
				MEMBER(entity_v_box_maxs, client::C_EnvCombinedLightProbeVolume, Vector);
				MEMBER(entity_b_moveable, client::C_EnvCombinedLightProbeVolume, bool);
				MEMBER(entity_n_handshake, client::C_EnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_n_env_cube_map_array_index, client::C_EnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_n_priority, client::C_EnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_b_start_disabled, client::C_EnvCombinedLightProbeVolume, bool);
				MEMBER(entity_fl_edge_fade_dist, client::C_EnvCombinedLightProbeVolume, float);
				MEMBER(entity_v_edge_fade_dists, client::C_EnvCombinedLightProbeVolume, Vector);
				MEMBER(entity_n_light_probe_size_x, client::C_EnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_size_y, client::C_EnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_size_z, client::C_EnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_atlas_x, client::C_EnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_atlas_y, client::C_EnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_atlas_z, client::C_EnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_b_enabled, client::C_EnvCombinedLightProbeVolume, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvCombinedLightProbeVolume

			class CBasePlayerController : public client::C_BaseEntity {
				MEMBER(n_final_predicted_tick, client::CBasePlayerController, int32_t);
				MEMBER(command_context, client::CBasePlayerController, client::C_CommandContext);
				MEMBER(n_in_buttons_which_are_toggles, client::CBasePlayerController, uint64_t);
				MEMBER(n_tick_base, client::CBasePlayerController, uint32_t);
				MEMBER(h_pawn, client::CBasePlayerController, chandle<client::C_BasePlayerPawn>);
				MEMBER(b_known_team_mismatch, client::CBasePlayerController, bool);
				MEMBER(h_predicted_pawn, client::CBasePlayerController, chandle<client::C_BasePlayerPawn>);
				MEMBER(n_split_screen_slot, client::CBasePlayerController, CSplitScreenSlot);
				MEMBER(h_split_owner, client::CBasePlayerController, chandle<client::CBasePlayerController>);
				MEMBER(h_split_screen_players, client::CBasePlayerController, cutl_vector<chandle<client::CBasePlayerController>>);
				MEMBER(b_is_hltv, client::CBasePlayerController, bool);
				MEMBER(i_connected, client::CBasePlayerController, client::PlayerConnectedState);
				MEMBER_ARR(isz_player_name, client::CBasePlayerController, 128, char);
				MEMBER(steam_id, client::CBasePlayerController, uint64_t);
				MEMBER(b_is_local_player_controller, client::CBasePlayerController, bool);
				MEMBER(i_desired_fov, client::CBasePlayerController, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBasePlayerController

			class C_BaseModelEntity : public client::C_BaseEntity {
				MEMBER(crender_component, client::C_BaseModelEntity, client::CRenderComponent*);
				MEMBER(chitbox_component, client::C_BaseModelEntity, client::CHitboxComponent);
				MEMBER(last_hit_group, client::C_BaseModelEntity, client::HitGroup_t);
				MEMBER(b_init_model_effects, client::C_BaseModelEntity, bool);
				MEMBER(b_is_static_prop, client::C_BaseModelEntity, bool);
				MEMBER(n_last_add_decal, client::C_BaseModelEntity, int32_t);
				MEMBER(n_decals_added, client::C_BaseModelEntity, int32_t);
				MEMBER(i_old_health, client::C_BaseModelEntity, int32_t);
				MEMBER(n_render_mode, client::C_BaseModelEntity, client::RenderMode_t);
				MEMBER(n_render_fx, client::C_BaseModelEntity, client::RenderFx_t);
				MEMBER(b_allow_fade_in_view, client::C_BaseModelEntity, bool);
				MEMBER(clr_render, client::C_BaseModelEntity, Color);
				MEMBER(vec_render_attributes, client::C_BaseModelEntity, C_UtlVectorEmbeddedNetworkVar<client::EntityRenderAttribute_t>);
				MEMBER(b_render_to_cubemaps, client::C_BaseModelEntity, bool);
				MEMBER(b_no_interpolate, client::C_BaseModelEntity, bool);
				MEMBER(collision, client::C_BaseModelEntity, client::CCollisionProperty);
				MEMBER(glow, client::C_BaseModelEntity, client::CGlowProperty);
				MEMBER(fl_glow_backface_mult, client::C_BaseModelEntity, float);
				MEMBER(fade_min_dist, client::C_BaseModelEntity, float);
				MEMBER(fade_max_dist, client::C_BaseModelEntity, float);
				MEMBER(fl_fade_scale, client::C_BaseModelEntity, float);
				MEMBER(fl_shadow_strength, client::C_BaseModelEntity, float);
				MEMBER(n_object_culling, client::C_BaseModelEntity, uint8_t);
				MEMBER(n_add_decal, client::C_BaseModelEntity, int32_t);
				MEMBER(v_decal_position, client::C_BaseModelEntity, Vector);
				MEMBER(v_decal_forward_axis, client::C_BaseModelEntity, Vector);
				MEMBER(fl_decal_heal_blood_rate, client::C_BaseModelEntity, float);
				MEMBER(fl_decal_heal_height_rate, client::C_BaseModelEntity, float);
				MEMBER(config_entities_to_propagate_material_decals_to, client::C_BaseModelEntity, C_NetworkUtlVectorBase<chandle<client::C_BaseModelEntity>>);
				MEMBER(vec_view_offset, client::C_BaseModelEntity, client::CNetworkViewOffsetVector);
				MEMBER(p_client_alpha_property, client::C_BaseModelEntity, client::CClientAlphaProperty*);
				MEMBER(client_override_tint, client::C_BaseModelEntity, Color);
				MEMBER(b_use_client_override_tint, client::C_BaseModelEntity, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseModelEntity

			class CCSGO_WingmanIntroCounterTerroristPosition : public client::CCSGO_WingmanIntroCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGO_WingmanIntroCounterTerroristPosition

			class C_SoundEventEntityAlias_snd_event_point : public client::C_SoundEventEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundEventEntityAlias_snd_event_point

			class C_FootstepControl : public client::C_BaseTrigger {
				MEMBER(source, client::C_FootstepControl, CUtlSymbolLarge);
				MEMBER(destination, client::C_FootstepControl, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FootstepControl

			class CTripWireFireProjectile : public client::C_BaseGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTripWireFireProjectile

			class C_LightSpotEntity : public client::C_LightEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_LightSpotEntity

			class C_EnvDetailController : public client::C_BaseEntity {
				MEMBER(fl_fade_start_dist, client::C_EnvDetailController, float);
				MEMBER(fl_fade_end_dist, client::C_EnvDetailController, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvDetailController

			class C_SpotlightEnd : public client::C_BaseModelEntity {
				MEMBER(fl_light_scale, client::C_SpotlightEnd, float);
				MEMBER(radius, client::C_SpotlightEnd, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SpotlightEnd

			class C_EnvDecal : public client::C_BaseModelEntity {
				MEMBER(h_decal_material, client::C_EnvDecal, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(fl_width, client::C_EnvDecal, float);
				MEMBER(fl_height, client::C_EnvDecal, float);
				MEMBER(fl_depth, client::C_EnvDecal, float);
				MEMBER(n_render_order, client::C_EnvDecal, uint32_t);
				MEMBER(b_project_on_world, client::C_EnvDecal, bool);
				MEMBER(b_project_on_characters, client::C_EnvDecal, bool);
				MEMBER(b_project_on_water, client::C_EnvDecal, bool);
				MEMBER(fl_depth_sort_bias, client::C_EnvDecal, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvDecal

			class C_PointCamera : public client::C_BaseEntity {
				MEMBER(fov, client::C_PointCamera, float);
				MEMBER(resolution, client::C_PointCamera, float);
				MEMBER(b_fog_enable, client::C_PointCamera, bool);
				MEMBER(fog_color, client::C_PointCamera, Color);
				MEMBER(fl_fog_start, client::C_PointCamera, float);
				MEMBER(fl_fog_end, client::C_PointCamera, float);
				MEMBER(fl_fog_max_density, client::C_PointCamera, float);
				MEMBER(b_active, client::C_PointCamera, bool);
				MEMBER(b_use_screen_aspect_ratio, client::C_PointCamera, bool);
				MEMBER(fl_aspect_ratio, client::C_PointCamera, float);
				MEMBER(b_no_sky, client::C_PointCamera, bool);
				MEMBER(f_brightness, client::C_PointCamera, float);
				MEMBER(fl_zfar, client::C_PointCamera, float);
				MEMBER(fl_znear, client::C_PointCamera, float);
				MEMBER(b_can_hltvuse, client::C_PointCamera, bool);
				MEMBER(b_align_with_parent, client::C_PointCamera, bool);
				MEMBER(b_dof_enabled, client::C_PointCamera, bool);
				MEMBER(fl_dof_near_blurry, client::C_PointCamera, float);
				MEMBER(fl_dof_near_crisp, client::C_PointCamera, float);
				MEMBER(fl_dof_far_crisp, client::C_PointCamera, float);
				MEMBER(fl_dof_far_blurry, client::C_PointCamera, float);
				MEMBER(fl_dof_tilt_to_ground, client::C_PointCamera, float);
				MEMBER(target_fov, client::C_PointCamera, float);
				MEMBER(degrees_per_second, client::C_PointCamera, float);
				MEMBER(b_is_on, client::C_PointCamera, bool);
				MEMBER(p_next, client::C_PointCamera, client::C_PointCamera*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PointCamera

			class C_LightDirectionalEntity : public client::C_LightEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_LightDirectionalEntity

			class C_BarnLight : public client::C_BaseModelEntity {
				MEMBER(b_enabled, client::C_BarnLight, bool);
				MEMBER(n_color_mode, client::C_BarnLight, int32_t);
				MEMBER(color, client::C_BarnLight, Color);
				MEMBER(fl_color_temperature, client::C_BarnLight, float);
				MEMBER(fl_brightness, client::C_BarnLight, float);
				MEMBER(fl_brightness_scale, client::C_BarnLight, float);
				MEMBER(n_direct_light, client::C_BarnLight, int32_t);
				MEMBER(n_baked_shadow_index, client::C_BarnLight, int32_t);
				MEMBER(n_luminaire_shape, client::C_BarnLight, int32_t);
				MEMBER(fl_luminaire_size, client::C_BarnLight, float);
				MEMBER(fl_luminaire_anisotropy, client::C_BarnLight, float);
				MEMBER(light_style_string, client::C_BarnLight, CUtlString);
				MEMBER(fl_light_style_start_time, client::C_BarnLight, entity2::GameTime_t);
				MEMBER(queued_light_style_strings, client::C_BarnLight, C_NetworkUtlVectorBase<CUtlString>);
				MEMBER(light_style_events, client::C_BarnLight, C_NetworkUtlVectorBase<CUtlString>);
				MEMBER(light_style_targets, client::C_BarnLight, C_NetworkUtlVectorBase<chandle<client::C_BaseModelEntity>>);
				MEMBER_ARR(style_event, client::C_BarnLight, 4, entity2::CEntityIOOutput);
				MEMBER(h_light_cookie, client::C_BarnLight, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(fl_shape, client::C_BarnLight, float);
				MEMBER(fl_soft_x, client::C_BarnLight, float);
				MEMBER(fl_soft_y, client::C_BarnLight, float);
				MEMBER(fl_skirt, client::C_BarnLight, float);
				MEMBER(fl_skirt_near, client::C_BarnLight, float);
				MEMBER(v_size_params, client::C_BarnLight, Vector);
				MEMBER(fl_range, client::C_BarnLight, float);
				MEMBER(v_shear, client::C_BarnLight, Vector);
				MEMBER(n_bake_specular_to_cubemaps, client::C_BarnLight, int32_t);
				MEMBER(v_bake_specular_to_cubemaps_size, client::C_BarnLight, Vector);
				MEMBER(n_cast_shadows, client::C_BarnLight, int32_t);
				MEMBER(n_shadow_map_size, client::C_BarnLight, int32_t);
				MEMBER(n_shadow_priority, client::C_BarnLight, int32_t);
				MEMBER(b_contact_shadow, client::C_BarnLight, bool);
				MEMBER(n_bounce_light, client::C_BarnLight, int32_t);
				MEMBER(fl_bounce_scale, client::C_BarnLight, float);
				MEMBER(fl_min_roughness, client::C_BarnLight, float);
				MEMBER(v_alternate_color, client::C_BarnLight, Vector);
				MEMBER(f_alternate_color_brightness, client::C_BarnLight, float);
				MEMBER(n_fog, client::C_BarnLight, int32_t);
				MEMBER(fl_fog_strength, client::C_BarnLight, float);
				MEMBER(n_fog_shadows, client::C_BarnLight, int32_t);
				MEMBER(fl_fog_scale, client::C_BarnLight, float);
				MEMBER(b_fog_mixed_shadows, client::C_BarnLight, bool);
				MEMBER(fl_fade_size_start, client::C_BarnLight, float);
				MEMBER(fl_fade_size_end, client::C_BarnLight, float);
				MEMBER(fl_shadow_fade_size_start, client::C_BarnLight, float);
				MEMBER(fl_shadow_fade_size_end, client::C_BarnLight, float);
				MEMBER(b_precomputed_fields_valid, client::C_BarnLight, bool);
				MEMBER(v_precomputed_bounds_mins, client::C_BarnLight, Vector);
				MEMBER(v_precomputed_bounds_maxs, client::C_BarnLight, Vector);
				MEMBER(v_precomputed_obborigin, client::C_BarnLight, Vector);
				MEMBER(v_precomputed_obbangles, client::C_BarnLight, QAngle);
				MEMBER(v_precomputed_obbextent, client::C_BarnLight, Vector);
				MEMBER(n_precomputed_sub_frusta, client::C_BarnLight, int32_t);
				MEMBER(v_precomputed_obborigin0, client::C_BarnLight, Vector);
				MEMBER(v_precomputed_obbangles0, client::C_BarnLight, QAngle);
				MEMBER(v_precomputed_obbextent0, client::C_BarnLight, Vector);
				MEMBER(v_precomputed_obborigin1, client::C_BarnLight, Vector);
				MEMBER(v_precomputed_obbangles1, client::C_BarnLight, QAngle);
				MEMBER(v_precomputed_obbextent1, client::C_BarnLight, Vector);
				MEMBER(v_precomputed_obborigin2, client::C_BarnLight, Vector);
				MEMBER(v_precomputed_obbangles2, client::C_BarnLight, QAngle);
				MEMBER(v_precomputed_obbextent2, client::C_BarnLight, Vector);
				MEMBER(v_precomputed_obborigin3, client::C_BarnLight, Vector);
				MEMBER(v_precomputed_obbangles3, client::C_BarnLight, QAngle);
				MEMBER(v_precomputed_obbextent3, client::C_BarnLight, Vector);
				MEMBER(v_precomputed_obborigin4, client::C_BarnLight, Vector);
				MEMBER(v_precomputed_obbangles4, client::C_BarnLight, QAngle);
				MEMBER(v_precomputed_obbextent4, client::C_BarnLight, Vector);
				MEMBER(v_precomputed_obborigin5, client::C_BarnLight, Vector);
				MEMBER(v_precomputed_obbangles5, client::C_BarnLight, QAngle);
				MEMBER(v_precomputed_obbextent5, client::C_BarnLight, Vector);
				MEMBER(b_initial_bone_setup, client::C_BarnLight, bool);
				MEMBER(vis_clusters, client::C_BarnLight, C_NetworkUtlVectorBase<uint16_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BarnLight

			class C_EnvWind : public client::C_BaseEntity {
				MEMBER(env_wind_shared, client::C_EnvWind, client::C_EnvWindShared);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvWind

			class C_TriggerPhysics : public client::C_BaseTrigger {
				MEMBER(gravity_scale, client::C_TriggerPhysics, float);
				MEMBER(linear_limit, client::C_TriggerPhysics, float);
				MEMBER(linear_damping, client::C_TriggerPhysics, float);
				MEMBER(angular_limit, client::C_TriggerPhysics, float);
				MEMBER(angular_damping, client::C_TriggerPhysics, float);
				MEMBER(linear_force, client::C_TriggerPhysics, float);
				MEMBER(fl_frequency, client::C_TriggerPhysics, float);
				MEMBER(fl_damping_ratio, client::C_TriggerPhysics, float);
				MEMBER(vec_linear_force_point_at, client::C_TriggerPhysics, Vector);
				MEMBER(b_collapse_to_force_point, client::C_TriggerPhysics, bool);
				MEMBER(vec_linear_force_point_at_world, client::C_TriggerPhysics, Vector);
				MEMBER(vec_linear_force_direction, client::C_TriggerPhysics, Vector);
				MEMBER(b_convert_to_debris_when_possible, client::C_TriggerPhysics, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_TriggerPhysics

			class C_BaseCombatCharacter : public client::C_BaseFlex {
				MEMBER(h_my_wearables, client::C_BaseCombatCharacter, C_NetworkUtlVectorBase<chandle<client::C_EconWearable>>);
				MEMBER(left_foot_attachment, client::C_BaseCombatCharacter, modellib::AttachmentHandle_t);
				MEMBER(right_foot_attachment, client::C_BaseCombatCharacter, modellib::AttachmentHandle_t);
				MEMBER(n_water_wake_mode, client::C_BaseCombatCharacter, client::C_BaseCombatCharacter_WaterWakeMode_t);
				MEMBER(fl_water_world_z, client::C_BaseCombatCharacter, float);
				MEMBER(fl_water_next_trace_time, client::C_BaseCombatCharacter, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseCombatCharacter

			class C_FlashbangProjectile : public client::C_BaseCSGrenadeProjectile {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FlashbangProjectile

			class C_SoundEventSphereEntity : public client::C_SoundEventEntity {
				MEMBER(fl_radius, client::C_SoundEventSphereEntity, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundEventSphereEntity

			class C_BaseEntity : public entity2::CEntityInstance {
				MEMBER(cbody_component, client::C_BaseEntity, client::CBodyComponent*);
				MEMBER(network_transmit_component, client::C_BaseEntity, client::CNetworkTransmitComponent);
				MEMBER(n_last_think_tick, client::C_BaseEntity, entity2::GameTick_t);
				MEMBER(p_game_scene_node, client::C_BaseEntity, client::CGameSceneNode*);
				MEMBER(p_render_component, client::C_BaseEntity, client::CRenderComponent*);
				MEMBER(p_collision, client::C_BaseEntity, client::CCollisionProperty*);
				MEMBER(i_max_health, client::C_BaseEntity, int32_t);
				MEMBER(i_health, client::C_BaseEntity, int32_t);
				MEMBER(life_state, client::C_BaseEntity, uint8_t);
				MEMBER(b_takes_damage, client::C_BaseEntity, bool);
				MEMBER(n_take_damage_flags, client::C_BaseEntity, client::TakeDamageFlags_t);
				MEMBER(n_platform_type, client::C_BaseEntity, client::EntityPlatformTypes_t);
				MEMBER(ub_interpolation_frame, client::C_BaseEntity, uint8_t);
				MEMBER(h_scene_object_controller, client::C_BaseEntity, chandle<client::C_BaseEntity>);
				MEMBER(n_no_interpolation_tick, client::C_BaseEntity, int32_t);
				MEMBER(n_visibility_no_interpolation_tick, client::C_BaseEntity, int32_t);
				MEMBER(fl_proxy_random_value, client::C_BaseEntity, float);
				MEMBER(i_eflags, client::C_BaseEntity, int32_t);
				MEMBER(n_water_type, client::C_BaseEntity, uint8_t);
				MEMBER(b_interpolate_even_with_no_model, client::C_BaseEntity, bool);
				MEMBER(b_prediction_eligible, client::C_BaseEntity, bool);
				MEMBER(b_apply_layer_match_idto_model, client::C_BaseEntity, bool);
				MEMBER(tok_layer_match_id, client::C_BaseEntity, CUtlStringToken);
				MEMBER(n_subclass_id, client::C_BaseEntity, CUtlStringToken);
				MEMBER(n_simulation_tick, client::C_BaseEntity, int32_t);
				MEMBER(i_current_think_context, client::C_BaseEntity, int32_t);
				MEMBER(a_think_functions, client::C_BaseEntity, cutl_vector<client::thinkfunc_t>);
				MEMBER(b_disabled_context_thinks, client::C_BaseEntity, bool);
				MEMBER(fl_anim_time, client::C_BaseEntity, float);
				MEMBER(fl_simulation_time, client::C_BaseEntity, float);
				MEMBER(n_scene_object_override_flags, client::C_BaseEntity, uint8_t);
				MEMBER(b_has_successfully_interpolated, client::C_BaseEntity, bool);
				MEMBER(b_has_added_vars_to_interpolation, client::C_BaseEntity, bool);
				MEMBER(b_render_even_when_not_successfully_interpolated, client::C_BaseEntity, bool);
				MEMBER_ARR(n_interpolation_latch_dirty_flags, client::C_BaseEntity, 2, int32_t);
				MEMBER_ARR(list_entry, client::C_BaseEntity, 11, uint16_t);
				MEMBER(fl_create_time, client::C_BaseEntity, entity2::GameTime_t);
				MEMBER(fl_speed, client::C_BaseEntity, float);
				MEMBER(ent_client_flags, client::C_BaseEntity, uint16_t);
				MEMBER(b_client_side_ragdoll, client::C_BaseEntity, bool);
				MEMBER(i_team_num, client::C_BaseEntity, uint8_t);
				MEMBER(spawnflags, client::C_BaseEntity, uint32_t);
				MEMBER(n_next_think_tick, client::C_BaseEntity, entity2::GameTick_t);
				MEMBER(f_flags, client::C_BaseEntity, uint32_t);
				MEMBER(vec_abs_velocity, client::C_BaseEntity, Vector);
				MEMBER(vec_velocity, client::C_BaseEntity, client::CNetworkVelocityVector);
				MEMBER(vec_base_velocity, client::C_BaseEntity, Vector);
				MEMBER(h_effect_entity, client::C_BaseEntity, chandle<client::C_BaseEntity>);
				MEMBER(h_owner_entity, client::C_BaseEntity, chandle<client::C_BaseEntity>);
				MEMBER(move_collide, client::C_BaseEntity, client::MoveCollide_t);
				MEMBER(move_type, client::C_BaseEntity, client::MoveType_t);
				MEMBER(n_actual_move_type, client::C_BaseEntity, client::MoveType_t);
				MEMBER(fl_water_level, client::C_BaseEntity, float);
				MEMBER(f_effects, client::C_BaseEntity, uint32_t);
				MEMBER(h_ground_entity, client::C_BaseEntity, chandle<client::C_BaseEntity>);
				MEMBER(n_ground_body_index, client::C_BaseEntity, int32_t);
				MEMBER(fl_friction, client::C_BaseEntity, float);
				MEMBER(fl_elasticity, client::C_BaseEntity, float);
				MEMBER(fl_gravity_scale, client::C_BaseEntity, float);
				MEMBER(fl_time_scale, client::C_BaseEntity, float);
				MEMBER(b_animated_every_tick, client::C_BaseEntity, bool);
				MEMBER(fl_nav_ignore_until_time, client::C_BaseEntity, entity2::GameTime_t);
				MEMBER(h_think, client::C_BaseEntity, uint16_t);
				MEMBER(f_bbox_vis_flags, client::C_BaseEntity, uint8_t);
				MEMBER(b_predictable, client::C_BaseEntity, bool);
				MEMBER(b_render_with_view_models, client::C_BaseEntity, bool);
				MEMBER(n_split_user_player_prediction_slot, client::C_BaseEntity, CSplitScreenSlot);
				MEMBER(n_first_predictable_command, client::C_BaseEntity, int32_t);
				MEMBER(n_last_predictable_command, client::C_BaseEntity, int32_t);
				MEMBER(h_old_move_parent, client::C_BaseEntity, chandle<client::C_BaseEntity>);
				//////MEMBER(particles, client::C_BaseEntity, particleslib::CParticleProperty);
				MEMBER(vec_predicted_script_floats, client::C_BaseEntity, cutl_vector<float>);
				MEMBER(vec_predicted_script_float_ids, client::C_BaseEntity, cutl_vector<int32_t>);
				MEMBER(n_next_script_var_record_id, client::C_BaseEntity, int32_t);
				MEMBER(vec_ang_velocity, client::C_BaseEntity, QAngle);
				MEMBER(data_change_event_ref, client::C_BaseEntity, int32_t);
				MEMBER(dependencies, client::C_BaseEntity, cutl_vector<CEntityHandle>);
				MEMBER(n_creation_tick, client::C_BaseEntity, int32_t);
				MEMBER(b_anim_time_changed, client::C_BaseEntity, bool);
				MEMBER(b_simulation_time_changed, client::C_BaseEntity, bool);
				MEMBER(s_unique_hammer_id, client::C_BaseEntity, CUtlString);
				MEMBER(n_blood_type, client::C_BaseEntity, client::BloodType);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseEntity

			class C_MolotovGrenade : public client::C_BaseCSGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_MolotovGrenade

			class C_SoundAreaEntitySphere : public client::C_SoundAreaEntityBase {
				MEMBER(fl_radius, client::C_SoundAreaEntitySphere, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundAreaEntitySphere

			class C_DynamicPropAlias_cable_dynamic : public client::C_DynamicProp {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_DynamicPropAlias_cable_dynamic

			class C_SceneEntity : public client::C_PointEntity {
				MEMBER(b_is_playing_back, client::C_SceneEntity, bool);
				MEMBER(b_paused, client::C_SceneEntity, bool);
				MEMBER(b_multiplayer, client::C_SceneEntity, bool);
				MEMBER(b_autogenerated, client::C_SceneEntity, bool);
				MEMBER(fl_force_client_time, client::C_SceneEntity, float);
				MEMBER(n_scene_string_index, client::C_SceneEntity, uint16_t);
				MEMBER(b_client_only, client::C_SceneEntity, bool);
				MEMBER(h_owner, client::C_SceneEntity, chandle<client::C_BaseFlex>);
				MEMBER(h_actor_list, client::C_SceneEntity, C_NetworkUtlVectorBase<chandle<client::C_BaseFlex>>);
				MEMBER(b_was_playing, client::C_SceneEntity, bool);
				MEMBER(queued_events, client::C_SceneEntity, cutl_vector<client::C_SceneEntity_QueuedEvents_t>);
				MEMBER(fl_current_time, client::C_SceneEntity, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SceneEntity

			class C_FuncMonitor : public client::C_FuncBrush {
				MEMBER(target_camera, client::C_FuncMonitor, CUtlString);
				MEMBER(n_resolution_enum, client::C_FuncMonitor, int32_t);
				MEMBER(b_render_shadows, client::C_FuncMonitor, bool);
				MEMBER(b_use_unique_color_target, client::C_FuncMonitor, bool);
				MEMBER(brush_model_name, client::C_FuncMonitor, CUtlString);
				MEMBER(h_target_camera, client::C_FuncMonitor, chandle<client::C_BaseEntity>);
				MEMBER(b_enabled, client::C_FuncMonitor, bool);
				MEMBER(b_draw3_dskybox, client::C_FuncMonitor, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FuncMonitor

			class C_SoundEventAABBEntity : public client::C_SoundEventEntity {
				MEMBER(v_mins, client::C_SoundEventAABBEntity, Vector);
				MEMBER(v_maxs, client::C_SoundEventAABBEntity, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundEventAABBEntity

			class C_TriggerMultiple : public client::C_BaseTrigger {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_TriggerMultiple

			class C_EnvVolumetricFogVolume : public client::C_BaseEntity {
				MEMBER(b_active, client::C_EnvVolumetricFogVolume, bool);
				MEMBER(v_box_mins, client::C_EnvVolumetricFogVolume, Vector);
				MEMBER(v_box_maxs, client::C_EnvVolumetricFogVolume, Vector);
				MEMBER(b_start_disabled, client::C_EnvVolumetricFogVolume, bool);
				MEMBER(fl_strength, client::C_EnvVolumetricFogVolume, float);
				MEMBER(n_falloff_shape, client::C_EnvVolumetricFogVolume, int32_t);
				MEMBER(fl_falloff_exponent, client::C_EnvVolumetricFogVolume, float);
				MEMBER(fl_height_fog_depth, client::C_EnvVolumetricFogVolume, float);
				MEMBER(f_height_fog_edge_width, client::C_EnvVolumetricFogVolume, float);
				MEMBER(f_indirect_light_strength, client::C_EnvVolumetricFogVolume, float);
				MEMBER(f_sun_light_strength, client::C_EnvVolumetricFogVolume, float);
				MEMBER(f_noise_strength, client::C_EnvVolumetricFogVolume, float);
				MEMBER(b_override_indirect_light_strength, client::C_EnvVolumetricFogVolume, bool);
				MEMBER(b_override_sun_light_strength, client::C_EnvVolumetricFogVolume, bool);
				MEMBER(b_override_noise_strength, client::C_EnvVolumetricFogVolume, bool);
				MEMBER(b_allow_lpvindirect, client::C_EnvVolumetricFogVolume, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvVolumetricFogVolume

			class C_GlobalLight : public client::C_BaseEntity {
				MEMBER(wind_cloth_force_handle, client::C_GlobalLight, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_GlobalLight

			class C_Inferno : public client::C_BaseModelEntity {
				MEMBER(nfx_fire_damage_effect, client::C_Inferno, client::ParticleIndex_t);
				MEMBER(h_inferno_points_snapshot, client::C_Inferno, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSnapshot>);
				MEMBER(h_inferno_filler_points_snapshot, client::C_Inferno, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSnapshot>);
				MEMBER(h_inferno_outline_points_snapshot, client::C_Inferno, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSnapshot>);
				MEMBER(h_inferno_climbing_outline_points_snapshot, client::C_Inferno, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSnapshot>);
				MEMBER(h_inferno_decals_snapshot, client::C_Inferno, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSnapshot>);
				MEMBER_ARR(fire_positions, client::C_Inferno, 64, Vector);
				MEMBER_ARR(fire_parent_positions, client::C_Inferno, 64, Vector);
				MEMBER_ARR(b_fire_is_burning, client::C_Inferno, 64, bool);
				MEMBER_ARR(burn_normal, client::C_Inferno, 64, Vector);
				MEMBER(fire_count, client::C_Inferno, int32_t);
				MEMBER(n_inferno_type, client::C_Inferno, int32_t);
				MEMBER(n_fire_lifetime, client::C_Inferno, float);
				MEMBER(b_in_post_effect_time, client::C_Inferno, bool);
				MEMBER(last_fire_count, client::C_Inferno, int32_t);
				MEMBER(n_fire_effect_tick_begin, client::C_Inferno, int32_t);
				MEMBER(drawable_count, client::C_Inferno, int32_t);
				MEMBER(blos_check, client::C_Inferno, bool);
				MEMBER(nlosperiod, client::C_Inferno, int32_t);
				MEMBER(max_fire_half_width, client::C_Inferno, float);
				MEMBER(max_fire_height, client::C_Inferno, float);
				MEMBER(min_bounds, client::C_Inferno, Vector);
				MEMBER(max_bounds, client::C_Inferno, Vector);
				MEMBER(fl_last_grass_burn_think, client::C_Inferno, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Inferno

			class CBodyComponent : public entity2::CEntityComponent {
				MEMBER(p_scene_node, client::CBodyComponent, client::CGameSceneNode*);
				MEMBER(_m_p_chain_entity, client::CBodyComponent, entity2::CNetworkVarChainer);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBodyComponent

			class C_LightGlow : public client::C_BaseModelEntity {
				MEMBER(n_horizontal_size, client::C_LightGlow, uint32_t);
				MEMBER(n_vertical_size, client::C_LightGlow, uint32_t);
				MEMBER(n_min_dist, client::C_LightGlow, uint32_t);
				MEMBER(n_max_dist, client::C_LightGlow, uint32_t);
				MEMBER(n_outer_max_dist, client::C_LightGlow, uint32_t);
				MEMBER(fl_glow_proxy_size, client::C_LightGlow, float);
				MEMBER(fl_hdrcolor_scale, client::C_LightGlow, float);
				MEMBER(glow_overlay, client::C_LightGlow, client::C_LightGlowOverlay);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_LightGlow

			class C_PlayerSprayDecal : public client::C_ModelPointEntity {
				MEMBER(n_unique_id, client::C_PlayerSprayDecal, int32_t);
				MEMBER(un_account_id, client::C_PlayerSprayDecal, uint32_t);
				MEMBER(un_trace_id, client::C_PlayerSprayDecal, uint32_t);
				MEMBER(rt_gc_time, client::C_PlayerSprayDecal, uint32_t);
				MEMBER(vec_end_pos, client::C_PlayerSprayDecal, Vector);
				MEMBER(vec_start, client::C_PlayerSprayDecal, Vector);
				MEMBER(vec_left, client::C_PlayerSprayDecal, Vector);
				MEMBER(vec_normal, client::C_PlayerSprayDecal, Vector);
				MEMBER(n_player, client::C_PlayerSprayDecal, int32_t);
				MEMBER(n_entity, client::C_PlayerSprayDecal, int32_t);
				MEMBER(n_hitbox, client::C_PlayerSprayDecal, int32_t);
				MEMBER(fl_creation_time, client::C_PlayerSprayDecal, float);
				MEMBER(n_tint_id, client::C_PlayerSprayDecal, int32_t);
				MEMBER(n_version, client::C_PlayerSprayDecal, uint8_t);
				MEMBER_ARR(ub_signature, client::C_PlayerSprayDecal, 128, uint8_t);
				MEMBER(spray_render_helper, client::C_PlayerSprayDecal, client::CPlayerSprayDecalRenderHelper);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PlayerSprayDecal

			class C_CSTeam : public client::C_Team {
				MEMBER_ARR(sz_team_match_stat, client::C_CSTeam, 512, char);
				MEMBER(num_map_victories, client::C_CSTeam, int32_t);
				MEMBER(b_surrendered, client::C_CSTeam, bool);
				MEMBER(score_first_half, client::C_CSTeam, int32_t);
				MEMBER(score_second_half, client::C_CSTeam, int32_t);
				MEMBER(score_overtime, client::C_CSTeam, int32_t);
				MEMBER_ARR(sz_clan_teamname, client::C_CSTeam, 129, char);
				MEMBER(i_clan_id, client::C_CSTeam, uint32_t);
				MEMBER_ARR(sz_team_flag_image, client::C_CSTeam, 8, char);
				MEMBER_ARR(sz_team_logo_image, client::C_CSTeam, 8, char);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSTeam

			class C_ClientRagdoll : public client::CBaseAnimGraph {
				MEMBER(b_fade_out, client::C_ClientRagdoll, bool);
				MEMBER(b_important, client::C_ClientRagdoll, bool);
				MEMBER(fl_effect_time, client::C_ClientRagdoll, entity2::GameTime_t);
				MEMBER(gib_despawn_time, client::C_ClientRagdoll, entity2::GameTime_t);
				MEMBER(i_current_friction, client::C_ClientRagdoll, int32_t);
				MEMBER(i_min_friction, client::C_ClientRagdoll, int32_t);
				MEMBER(i_max_friction, client::C_ClientRagdoll, int32_t);
				MEMBER(i_friction_anim_state, client::C_ClientRagdoll, int32_t);
				MEMBER(b_release_ragdoll, client::C_ClientRagdoll, bool);
				MEMBER(i_eye_attachment, client::C_ClientRagdoll, modellib::AttachmentHandle_t);
				MEMBER(b_fading_out, client::C_ClientRagdoll, bool);
				MEMBER_ARR(fl_scale_end, client::C_ClientRagdoll, 10, float);
				MEMBER_ARR(fl_scale_time_start, client::C_ClientRagdoll, 10, entity2::GameTime_t);
				MEMBER_ARR(fl_scale_time_end, client::C_ClientRagdoll, 10, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_ClientRagdoll

			class C_InfoLadderDismount : public client::C_BaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_InfoLadderDismount

			class C_CSPlayerResource : public client::C_BaseEntity {
				MEMBER_ARR(b_hostage_alive, client::C_CSPlayerResource, 12, bool);
				MEMBER_ARR(is_hostage_following_someone, client::C_CSPlayerResource, 12, bool);
				MEMBER_ARR(i_hostage_entity_ids, client::C_CSPlayerResource, 12, CEntityIndex);
				MEMBER(bombsite_center_a, client::C_CSPlayerResource, Vector);
				MEMBER(bombsite_center_b, client::C_CSPlayerResource, Vector);
				MEMBER_ARR(hostage_rescue_x, client::C_CSPlayerResource, 4, int32_t);
				MEMBER_ARR(hostage_rescue_y, client::C_CSPlayerResource, 4, int32_t);
				MEMBER_ARR(hostage_rescue_z, client::C_CSPlayerResource, 4, int32_t);
				MEMBER(b_end_match_next_map_all_voted, client::C_CSPlayerResource, bool);
				MEMBER(found_goal_positions, client::C_CSPlayerResource, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSPlayerResource

			class CBodyComponentPoint : public client::CBodyComponent {
				MEMBER(scene_node, client::CBodyComponentPoint, client::CGameSceneNode);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBodyComponentPoint

			class C_SmokeGrenadeProjectile : public client::C_BaseCSGrenadeProjectile {
				MEMBER(n_smoke_effect_tick_begin, client::C_SmokeGrenadeProjectile, int32_t);
				MEMBER(b_did_smoke_effect, client::C_SmokeGrenadeProjectile, bool);
				MEMBER(n_random_seed, client::C_SmokeGrenadeProjectile, int32_t);
				MEMBER(v_smoke_color, client::C_SmokeGrenadeProjectile, Vector);
				MEMBER(v_smoke_detonation_pos, client::C_SmokeGrenadeProjectile, Vector);
				MEMBER(voxel_frame_data, client::C_SmokeGrenadeProjectile, C_NetworkUtlVectorBase<uint8_t>);
				MEMBER(n_voxel_frame_data_size, client::C_SmokeGrenadeProjectile, int32_t);
				MEMBER(n_voxel_update, client::C_SmokeGrenadeProjectile, int32_t);
				MEMBER(b_smoke_volume_data_received, client::C_SmokeGrenadeProjectile, bool);
				MEMBER(b_smoke_effect_spawned, client::C_SmokeGrenadeProjectile, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SmokeGrenadeProjectile

			class C_CSGO_MapPreviewCameraPath : public client::C_BaseEntity {
				MEMBER(fl_zfar, client::C_CSGO_MapPreviewCameraPath, float);
				MEMBER(fl_znear, client::C_CSGO_MapPreviewCameraPath, float);
				MEMBER(b_loop, client::C_CSGO_MapPreviewCameraPath, bool);
				MEMBER(b_vertical_fov, client::C_CSGO_MapPreviewCameraPath, bool);
				MEMBER(b_constant_speed, client::C_CSGO_MapPreviewCameraPath, bool);
				MEMBER(fl_duration, client::C_CSGO_MapPreviewCameraPath, float);
				MEMBER(fl_path_length, client::C_CSGO_MapPreviewCameraPath, float);
				MEMBER(fl_path_duration, client::C_CSGO_MapPreviewCameraPath, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_MapPreviewCameraPath

			class CCSGO_WingmanIntroTerroristPosition : public client::CCSGO_WingmanIntroCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGO_WingmanIntroTerroristPosition

			class C_CSGO_TerroristWingmanIntroCamera : public client::C_CSGO_TeamPreviewCamera {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_TerroristWingmanIntroCamera

			class C_WeaponSawedoff : public client::C_CSWeaponBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponSawedoff

			class C_WeaponMP7 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponMP7

			class CCSPlayerController : public client::CBasePlayerController {
				MEMBER(p_in_game_money_services, client::CCSPlayerController, client::CCSPlayerController_InGameMoneyServices*);
				MEMBER(p_inventory_services, client::CCSPlayerController, client::CCSPlayerController_InventoryServices*);
				MEMBER(p_action_tracking_services, client::CCSPlayerController, client::CCSPlayerController_ActionTrackingServices*);
				MEMBER(p_damage_services, client::CCSPlayerController, client::CCSPlayerController_DamageServices*);
				MEMBER(i_ping, client::CCSPlayerController, uint32_t);
				MEMBER(b_has_communication_abuse_mute, client::CCSPlayerController, bool);
				MEMBER(sz_crosshair_codes, client::CCSPlayerController, CUtlSymbolLarge);
				MEMBER(i_pending_team_num, client::CCSPlayerController, uint8_t);
				MEMBER(fl_force_team_time, client::CCSPlayerController, entity2::GameTime_t);
				MEMBER(i_comp_teammate_color, client::CCSPlayerController, int32_t);
				MEMBER(b_ever_played_on_team, client::CCSPlayerController, bool);
				MEMBER(fl_previous_force_join_team_time, client::CCSPlayerController, entity2::GameTime_t);
				MEMBER(sz_clan, client::CCSPlayerController, CUtlSymbolLarge);
				MEMBER(s_sanitized_player_name, client::CCSPlayerController, CUtlString);
				MEMBER(i_coaching_team, client::CCSPlayerController, int32_t);
				MEMBER(n_player_dominated, client::CCSPlayerController, uint64_t);
				MEMBER(n_player_dominating_me, client::CCSPlayerController, uint64_t);
				MEMBER(i_competitive_ranking, client::CCSPlayerController, int32_t);
				MEMBER(i_competitive_wins, client::CCSPlayerController, int32_t);
				MEMBER(i_competitive_rank_type, client::CCSPlayerController, int8_t);
				MEMBER(i_competitive_ranking_predicted__win, client::CCSPlayerController, int32_t);
				MEMBER(i_competitive_ranking_predicted__loss, client::CCSPlayerController, int32_t);
				MEMBER(i_competitive_ranking_predicted__tie, client::CCSPlayerController, int32_t);
				MEMBER(n_end_match_next_map_vote, client::CCSPlayerController, int32_t);
				MEMBER(un_active_quest_id, client::CCSPlayerController, uint16_t);
				MEMBER(n_quest_progress_reason, client::CCSPlayerController, client::QuestProgress_Reason);
				MEMBER(un_player_tv_control_flags, client::CCSPlayerController, uint32_t);
				MEMBER(i_draft_index, client::CCSPlayerController, int32_t);
				MEMBER(ms_queued_mode_disconnection_timestamp, client::CCSPlayerController, uint32_t);
				MEMBER(ui_abandon_recorded_reason, client::CCSPlayerController, uint32_t);
				MEMBER(b_cannot_be_kicked, client::CCSPlayerController, bool);
				MEMBER(b_ever_fully_connected, client::CCSPlayerController, bool);
				MEMBER(b_abandon_allows_surrender, client::CCSPlayerController, bool);
				MEMBER(b_abandon_offers_instant_surrender, client::CCSPlayerController, bool);
				MEMBER(b_disconnection1_min_warning_printed, client::CCSPlayerController, bool);
				MEMBER(b_score_reported, client::CCSPlayerController, bool);
				MEMBER(n_disconnection_tick, client::CCSPlayerController, int32_t);
				MEMBER(b_controlling_bot, client::CCSPlayerController, bool);
				MEMBER(b_has_controlled_bot_this_round, client::CCSPlayerController, bool);
				MEMBER(b_has_been_controlled_by_player_this_round, client::CCSPlayerController, bool);
				MEMBER(n_bots_controlled_this_round, client::CCSPlayerController, int32_t);
				MEMBER(b_can_control_observed_bot, client::CCSPlayerController, bool);
				MEMBER(h_player_pawn, client::CCSPlayerController, chandle<client::C_CSPlayerPawn>);
				MEMBER(h_observer_pawn, client::CCSPlayerController, chandle<client::C_CSObserverPawn>);
				MEMBER(b_pawn_is_alive, client::CCSPlayerController, bool);
				MEMBER(i_pawn_health, client::CCSPlayerController, uint32_t);
				MEMBER(i_pawn_armor, client::CCSPlayerController, int32_t);
				MEMBER(b_pawn_has_defuser, client::CCSPlayerController, bool);
				MEMBER(b_pawn_has_helmet, client::CCSPlayerController, bool);
				MEMBER(n_pawn_character_def_index, client::CCSPlayerController, uint16_t);
				MEMBER(i_pawn_lifetime_start, client::CCSPlayerController, int32_t);
				MEMBER(i_pawn_lifetime_end, client::CCSPlayerController, int32_t);
				MEMBER(i_pawn_bot_difficulty, client::CCSPlayerController, int32_t);
				MEMBER(h_original_controller_of_current_pawn, client::CCSPlayerController, chandle<client::CCSPlayerController>);
				MEMBER(i_score, client::CCSPlayerController, int32_t);
				MEMBER_ARR(recent_kill_queue, client::CCSPlayerController, 8, uint8_t);
				MEMBER(n_first_kill, client::CCSPlayerController, uint8_t);
				MEMBER(n_kill_count, client::CCSPlayerController, uint8_t);
				MEMBER(b_mvp_no_music, client::CCSPlayerController, bool);
				MEMBER(e_mvp_reason, client::CCSPlayerController, int32_t);
				MEMBER(i_music_kit_id, client::CCSPlayerController, int32_t);
				MEMBER(i_music_kit_mvps, client::CCSPlayerController, int32_t);
				MEMBER(i_mvps, client::CCSPlayerController, int32_t);
				MEMBER(b_is_player_name_dirty, client::CCSPlayerController, bool);
				MEMBER(b_fire_bullets_seed_synchronized, client::CCSPlayerController, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerController

			class C_WeaponMag7 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponMag7

			class C_CSGO_MapPreviewCameraPathNode : public client::C_BaseEntity {
				MEMBER(sz_parent_path_unique_id, client::C_CSGO_MapPreviewCameraPathNode, CUtlSymbolLarge);
				MEMBER(n_path_index, client::C_CSGO_MapPreviewCameraPathNode, int32_t);
				MEMBER(v_in_tangent_local, client::C_CSGO_MapPreviewCameraPathNode, Vector);
				MEMBER(v_out_tangent_local, client::C_CSGO_MapPreviewCameraPathNode, Vector);
				MEMBER(fl_fov, client::C_CSGO_MapPreviewCameraPathNode, float);
				MEMBER(fl_camera_speed, client::C_CSGO_MapPreviewCameraPathNode, float);
				MEMBER(fl_ease_in, client::C_CSGO_MapPreviewCameraPathNode, float);
				MEMBER(fl_ease_out, client::C_CSGO_MapPreviewCameraPathNode, float);
				MEMBER(v_in_tangent_world, client::C_CSGO_MapPreviewCameraPathNode, Vector);
				MEMBER(v_out_tangent_world, client::C_CSGO_MapPreviewCameraPathNode, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_MapPreviewCameraPathNode

			class C_DEagle : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_DEagle

			class C_CSPlayerPawn : public client::C_CSPlayerPawnBase {
				MEMBER(p_bullet_services, client::C_CSPlayerPawn, client::CCSPlayer_BulletServices*);
				MEMBER(p_hostage_services, client::C_CSPlayerPawn, client::CCSPlayer_HostageServices*);
				MEMBER(p_buy_services, client::C_CSPlayerPawn, client::CCSPlayer_BuyServices*);
				MEMBER(p_glow_services, client::C_CSPlayerPawn, client::CCSPlayer_GlowServices*);
				MEMBER(p_action_tracking_services, client::C_CSPlayerPawn, client::CCSPlayer_ActionTrackingServices*);
				MEMBER(p_damage_react_services, client::C_CSPlayerPawn, client::CCSPlayer_DamageReactServices*);
				MEMBER(fl_health_shot_boost_expiration_time, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(fl_last_fired_weapon_time, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(b_has_female_voice, client::C_CSPlayerPawn, bool);
				MEMBER(fl_landing_time_seconds, client::C_CSPlayerPawn, float);
				MEMBER(fl_old_fall_velocity, client::C_CSPlayerPawn, float);
				MEMBER_ARR(sz_last_place_name, client::C_CSPlayerPawn, 18, char);
				MEMBER(b_prev_defuser, client::C_CSPlayerPawn, bool);
				MEMBER(b_prev_helmet, client::C_CSPlayerPawn, bool);
				MEMBER(n_prev_armor_val, client::C_CSPlayerPawn, int32_t);
				MEMBER(n_prev_grenade_ammo_count, client::C_CSPlayerPawn, int32_t);
				MEMBER(un_previous_weapon_hash, client::C_CSPlayerPawn, uint32_t);
				MEMBER(un_weapon_hash, client::C_CSPlayerPawn, uint32_t);
				MEMBER(b_in_buy_zone, client::C_CSPlayerPawn, bool);
				MEMBER(b_previously_in_buy_zone, client::C_CSPlayerPawn, bool);
				MEMBER(aim_punch_angle, client::C_CSPlayerPawn, QAngle);
				MEMBER(aim_punch_angle_vel, client::C_CSPlayerPawn, QAngle);
				MEMBER(aim_punch_tick_base, client::C_CSPlayerPawn, int32_t);
				MEMBER(aim_punch_tick_fraction, client::C_CSPlayerPawn, float);
				MEMBER(aim_punch_cache, client::C_CSPlayerPawn, cutl_vector<QAngle>);
				MEMBER(b_in_landing, client::C_CSPlayerPawn, bool);
				MEMBER(fl_landing_start_time, client::C_CSPlayerPawn, float);
				MEMBER(b_in_hostage_rescue_zone, client::C_CSPlayerPawn, bool);
				MEMBER(b_in_bomb_zone, client::C_CSPlayerPawn, bool);
				MEMBER(b_is_buy_menu_open, client::C_CSPlayerPawn, bool);
				MEMBER(fl_time_of_last_injury, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(fl_next_spray_decal_time, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(i_retakes_offering, client::C_CSPlayerPawn, int32_t);
				MEMBER(i_retakes_offering_card, client::C_CSPlayerPawn, int32_t);
				MEMBER(b_retakes_has_defuse_kit, client::C_CSPlayerPawn, bool);
				MEMBER(b_retakes_mvplast_round, client::C_CSPlayerPawn, bool);
				MEMBER(i_retakes_mvpboost_item, client::C_CSPlayerPawn, int32_t);
				MEMBER(retakes_mvpboost_extra_utility, client::C_CSPlayerPawn, client::loadout_slot_t);
				MEMBER(b_need_to_re_apply_gloves, client::C_CSPlayerPawn, bool);
				MEMBER(econ_gloves, client::C_CSPlayerPawn, client::C_EconItemView);
				MEMBER(n_econ_gloves_changed, client::C_CSPlayerPawn, uint8_t);
				MEMBER(b_must_sync_ragdoll_state, client::C_CSPlayerPawn, bool);
				MEMBER(n_ragdoll_damage_bone, client::C_CSPlayerPawn, int32_t);
				MEMBER(v_ragdoll_damage_force, client::C_CSPlayerPawn, Vector);
				MEMBER(v_ragdoll_damage_position, client::C_CSPlayerPawn, Vector);
				MEMBER_ARR(sz_ragdoll_damage_weapon_name, client::C_CSPlayerPawn, 64, char);
				MEMBER(b_ragdoll_damage_headshot, client::C_CSPlayerPawn, bool);
				MEMBER(v_ragdoll_server_origin, client::C_CSPlayerPawn, Vector);
				MEMBER(b_last_head_bone_transform_is_valid, client::C_CSPlayerPawn, bool);
				MEMBER(last_land_time, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(b_on_ground_last_tick, client::C_CSPlayerPawn, bool);
				MEMBER(q_death_eye_angles, client::C_CSPlayerPawn, QAngle);
				MEMBER(b_skip_one_head_constraint_update, client::C_CSPlayerPawn, bool);
				MEMBER(b_left_handed, client::C_CSPlayerPawn, bool);
				MEMBER(f_switched_handedness_time, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(fl_viewmodel_offset_x, client::C_CSPlayerPawn, float);
				MEMBER(fl_viewmodel_offset_y, client::C_CSPlayerPawn, float);
				MEMBER(fl_viewmodel_offset_z, client::C_CSPlayerPawn, float);
				MEMBER(fl_viewmodel_fov, client::C_CSPlayerPawn, float);
				MEMBER_ARR(vec_player_patch_econ_indices, client::C_CSPlayerPawn, 5, uint32_t);
				MEMBER(gun_game_immunity_color, client::C_CSPlayerPawn, Color);
				MEMBER(vec_bullet_hit_models, client::C_CSPlayerPawn, cutl_vector<client::C_BulletHitModel*>);
				MEMBER(b_is_walking, client::C_CSPlayerPawn, bool);
				MEMBER(third_person_heading, client::C_CSPlayerPawn, QAngle);
				MEMBER(fl_slope_drop_offset, client::C_CSPlayerPawn, float);
				MEMBER(fl_slope_drop_height, client::C_CSPlayerPawn, float);
				MEMBER(v_head_constraint_offset, client::C_CSPlayerPawn, Vector);
				MEMBER(entity_spotted_state, client::C_CSPlayerPawn, client::EntitySpottedState_t);
				MEMBER(b_is_scoped, client::C_CSPlayerPawn, bool);
				MEMBER(b_resume_zoom, client::C_CSPlayerPawn, bool);
				MEMBER(b_is_defusing, client::C_CSPlayerPawn, bool);
				MEMBER(b_is_grabbing_hostage, client::C_CSPlayerPawn, bool);
				MEMBER(i_blocking_use_action_in_progress, client::C_CSPlayerPawn, client::CSPlayerBlockingUseAction_t);
				MEMBER(fl_emit_sound_time, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(b_in_no_defuse_area, client::C_CSPlayerPawn, bool);
				MEMBER(n_which_bomb_zone, client::C_CSPlayerPawn, int32_t);
				MEMBER(i_shots_fired, client::C_CSPlayerPawn, int32_t);
				MEMBER(fl_flinch_stack, client::C_CSPlayerPawn, float);
				MEMBER(fl_velocity_modifier, client::C_CSPlayerPawn, float);
				MEMBER(fl_hit_heading, client::C_CSPlayerPawn, float);
				MEMBER(n_hit_body_part, client::C_CSPlayerPawn, int32_t);
				MEMBER(b_wait_for_no_attack, client::C_CSPlayerPawn, bool);
				MEMBER(ignore_ladder_jump_time, client::C_CSPlayerPawn, float);
				MEMBER(b_killed_by_headshot, client::C_CSPlayerPawn, bool);
				MEMBER(armor_value, client::C_CSPlayerPawn, int32_t);
				MEMBER(un_current_equipment_value, client::C_CSPlayerPawn, uint16_t);
				MEMBER(un_round_start_equipment_value, client::C_CSPlayerPawn, uint16_t);
				MEMBER(un_freezetime_end_equipment_value, client::C_CSPlayerPawn, uint16_t);
				MEMBER(n_last_killer_index, client::C_CSPlayerPawn, CEntityIndex);
				MEMBER(b_old_is_scoped, client::C_CSPlayerPawn, bool);
				MEMBER(b_has_death_info, client::C_CSPlayerPawn, bool);
				MEMBER(fl_death_info_time, client::C_CSPlayerPawn, float);
				MEMBER(vec_death_info_origin, client::C_CSPlayerPawn, Vector);
				MEMBER(grenade_parameter_stash_time, client::C_CSPlayerPawn, entity2::GameTime_t);
				MEMBER(b_grenade_parameters_stashed, client::C_CSPlayerPawn, bool);
				MEMBER(ang_stashed_shoot_angles, client::C_CSPlayerPawn, QAngle);
				MEMBER(vec_stashed_grenade_throw_position, client::C_CSPlayerPawn, Vector);
				MEMBER(vec_stashed_velocity, client::C_CSPlayerPawn, Vector);
				MEMBER_ARR(ang_shoot_angle_history, client::C_CSPlayerPawn, 2, QAngle);
				MEMBER_ARR(vec_throw_position_history, client::C_CSPlayerPawn, 2, Vector);
				MEMBER_ARR(vec_velocity_history, client::C_CSPlayerPawn, 2, Vector);
				MEMBER(predicted_damage_tags, client::C_CSPlayerPawn, C_UtlVectorEmbeddedNetworkVar<client::PredictedDamageTag_t>);
				MEMBER(n_prev_highest_received_damage_tag_tick, client::C_CSPlayerPawn, entity2::GameTick_t);
				MEMBER(n_highest_applied_damage_tag_tick, client::C_CSPlayerPawn, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSPlayerPawn

			class C_Melee : public client::C_CSWeaponBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Melee

			class C_RagdollPropAttached : public client::C_RagdollProp {
				MEMBER(bone_index_attached, client::C_RagdollPropAttached, uint32_t);
				MEMBER(ragdoll_attached_object_index, client::C_RagdollPropAttached, uint32_t);
				MEMBER(attachment_point_bone_space, client::C_RagdollPropAttached, Vector);
				MEMBER(attachment_point_ragdoll_space, client::C_RagdollPropAttached, Vector);
				MEMBER(vec_offset, client::C_RagdollPropAttached, Vector);
				MEMBER(parent_time, client::C_RagdollPropAttached, float);
				MEMBER(b_has_parent, client::C_RagdollPropAttached, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_RagdollPropAttached

			class CInfoDynamicShadowHint : public client::C_PointEntity {
				MEMBER(b_disabled, client::CInfoDynamicShadowHint, bool);
				MEMBER(fl_range, client::CInfoDynamicShadowHint, float);
				MEMBER(n_importance, client::CInfoDynamicShadowHint, int32_t);
				MEMBER(n_light_choice, client::CInfoDynamicShadowHint, int32_t);
				MEMBER(h_light, client::CInfoDynamicShadowHint, chandle<client::C_BaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoDynamicShadowHint

			class C_BaseCSGrenadeProjectile : public client::C_BaseGrenade {
				MEMBER(v_initial_position, client::C_BaseCSGrenadeProjectile, Vector);
				MEMBER(v_initial_velocity, client::C_BaseCSGrenadeProjectile, Vector);
				MEMBER(n_bounces, client::C_BaseCSGrenadeProjectile, int32_t);
				MEMBER(n_explode_effect_index, client::C_BaseCSGrenadeProjectile, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(n_explode_effect_tick_begin, client::C_BaseCSGrenadeProjectile, int32_t);
				MEMBER(vec_explode_effect_origin, client::C_BaseCSGrenadeProjectile, Vector);
				MEMBER(fl_spawn_time, client::C_BaseCSGrenadeProjectile, entity2::GameTime_t);
				MEMBER(vec_last_trail_line_pos, client::C_BaseCSGrenadeProjectile, Vector);
				MEMBER(fl_next_trail_line_time, client::C_BaseCSGrenadeProjectile, entity2::GameTime_t);
				MEMBER(b_explode_effect_began, client::C_BaseCSGrenadeProjectile, bool);
				MEMBER(b_can_create_grenade_trail, client::C_BaseCSGrenadeProjectile, bool);
				MEMBER(n_snapshot_trajectory_effect_index, client::C_BaseCSGrenadeProjectile, client::ParticleIndex_t);
				MEMBER(h_snapshot_trajectory_particle_snapshot, client::C_BaseCSGrenadeProjectile, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSnapshot>);
				MEMBER(arr_trajectory_trail_points, client::C_BaseCSGrenadeProjectile, cutl_vector<Vector>);
				MEMBER(arr_trajectory_trail_point_creation_times, client::C_BaseCSGrenadeProjectile, cutl_vector<float>);
				MEMBER(fl_trajectory_trail_effect_creation_time, client::C_BaseCSGrenadeProjectile, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseCSGrenadeProjectile

			class C_BaseTrigger : public client::C_BaseToggle {
				MEMBER(b_disabled, client::C_BaseTrigger, bool);
				MEMBER(b_client_side_predicted, client::C_BaseTrigger, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseTrigger

			class C_WeaponBaseItem : public client::C_CSWeaponBase {
				MEMBER(sequence_complete_timer, client::C_WeaponBaseItem, client::CountdownTimer);
				MEMBER(b_redraw, client::C_WeaponBaseItem, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponBaseItem

			class C_SensorGrenadeProjectile : public client::C_BaseCSGrenadeProjectile {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SensorGrenadeProjectile

			class C_BreakableProp : public client::CBaseProp {
				MEMBER(cprop_data_component, client::C_BreakableProp, client::CPropDataComponent);
				MEMBER(on_break, client::C_BreakableProp, entity2::CEntityIOOutput);
				MEMBER(on_health_changed, client::C_BreakableProp, CEntityOutputTemplate<float>);
				MEMBER(on_take_damage, client::C_BreakableProp, entity2::CEntityIOOutput);
				MEMBER(impact_energy_scale, client::C_BreakableProp, float);
				MEMBER(i_min_health_dmg, client::C_BreakableProp, int32_t);
				MEMBER(fl_pressure_delay, client::C_BreakableProp, float);
				MEMBER(fl_def_burst_scale, client::C_BreakableProp, float);
				MEMBER(v_def_burst_offset, client::C_BreakableProp, Vector);
				MEMBER(h_breaker, client::C_BreakableProp, chandle<client::C_BaseEntity>);
				MEMBER(performance_mode, client::C_BreakableProp, client::PerformanceMode_t);
				MEMBER(fl_prevent_damage_before_time, client::C_BreakableProp, entity2::GameTime_t);
				MEMBER(breakable_contents_type, client::C_BreakableProp, client::BreakableContentsType_t);
				MEMBER(str_breakable_contents_prop_group_override, client::C_BreakableProp, CUtlString);
				MEMBER(str_breakable_contents_particle_override, client::C_BreakableProp, CUtlString);
				MEMBER(b_has_break_pieces_or_commands, client::C_BreakableProp, bool);
				MEMBER(explode_damage, client::C_BreakableProp, float);
				MEMBER(explode_radius, client::C_BreakableProp, float);
				MEMBER(explosion_delay, client::C_BreakableProp, float);
				MEMBER(explosion_buildup_sound, client::C_BreakableProp, CUtlSymbolLarge);
				MEMBER(explosion_custom_effect, client::C_BreakableProp, CUtlSymbolLarge);
				MEMBER(explosion_custom_sound, client::C_BreakableProp, CUtlSymbolLarge);
				MEMBER(explosion_modifier, client::C_BreakableProp, CUtlSymbolLarge);
				MEMBER(h_physics_attacker, client::C_BreakableProp, chandle<client::C_BasePlayerPawn>);
				MEMBER(fl_last_physics_influence_time, client::C_BreakableProp, entity2::GameTime_t);
				MEMBER(fl_default_fade_scale, client::C_BreakableProp, float);
				MEMBER(h_last_attacker, client::C_BreakableProp, chandle<client::C_BaseEntity>);
				MEMBER(h_flare_ent, client::C_BreakableProp, chandle<client::C_BaseEntity>);
				MEMBER(no_ghost_collision, client::C_BreakableProp, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BreakableProp

			class C_BaseButton : public client::C_BaseToggle {
				MEMBER(glow_entity, client::C_BaseButton, chandle<client::C_BaseModelEntity>);
				MEMBER(usable, client::C_BaseButton, bool);
				MEMBER(sz_display_text, client::C_BaseButton, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseButton

			class CInfoParticleTarget : public client::C_PointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoParticleTarget

			class C_Item_Healthshot : public client::C_WeaponBaseItem {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Item_Healthshot

			class C_WeaponAug : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponAug

			class CEnvSoundscapeProxyAlias_snd_soundscape_proxy : public client::CEnvSoundscapeProxy {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvSoundscapeProxyAlias_snd_soundscape_proxy

			class C_ColorCorrectionVolume : public client::C_BaseTrigger {
				MEMBER(last_enter_weight, client::C_ColorCorrectionVolume, float);
				MEMBER(last_enter_time, client::C_ColorCorrectionVolume, float);
				MEMBER(last_exit_weight, client::C_ColorCorrectionVolume, float);
				MEMBER(last_exit_time, client::C_ColorCorrectionVolume, float);
				MEMBER(b_enabled, client::C_ColorCorrectionVolume, bool);
				MEMBER(max_weight, client::C_ColorCorrectionVolume, float);
				MEMBER(fade_duration, client::C_ColorCorrectionVolume, float);
				MEMBER(weight, client::C_ColorCorrectionVolume, float);
				MEMBER_ARR(lookup_filename, client::C_ColorCorrectionVolume, 512, char);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_ColorCorrectionVolume

			class C_CSGO_TeamIntroTerroristPosition : public client::C_CSGO_TeamIntroCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_TeamIntroTerroristPosition

			class C_PointClientUIWorldPanel : public client::C_BaseClientUIEntity {
				MEMBER(b_force_recreate_next_update, client::C_PointClientUIWorldPanel, bool);
				MEMBER(b_move_view_to_player_next_think, client::C_PointClientUIWorldPanel, bool);
				MEMBER(b_check_cssclasses, client::C_PointClientUIWorldPanel, bool);
				MEMBER(anchor_delta_transform, client::C_PointClientUIWorldPanel, CTransform);
				MEMBER(p_off_screen_indicator, client::C_PointClientUIWorldPanel, client::CPointOffScreenIndicatorUi*);
				MEMBER(b_ignore_input, client::C_PointClientUIWorldPanel, bool);
				MEMBER(b_lit, client::C_PointClientUIWorldPanel, bool);
				MEMBER(b_follow_player_across_teleport, client::C_PointClientUIWorldPanel, bool);
				MEMBER(fl_width, client::C_PointClientUIWorldPanel, float);
				MEMBER(fl_height, client::C_PointClientUIWorldPanel, float);
				MEMBER(fl_dpi, client::C_PointClientUIWorldPanel, float);
				MEMBER(fl_interact_distance, client::C_PointClientUIWorldPanel, float);
				MEMBER(fl_depth_offset, client::C_PointClientUIWorldPanel, float);
				MEMBER(un_owner_context, client::C_PointClientUIWorldPanel, uint32_t);
				MEMBER(un_horizontal_align, client::C_PointClientUIWorldPanel, uint32_t);
				MEMBER(un_vertical_align, client::C_PointClientUIWorldPanel, uint32_t);
				MEMBER(un_orientation, client::C_PointClientUIWorldPanel, uint32_t);
				MEMBER(b_allow_interaction_from_all_scene_worlds, client::C_PointClientUIWorldPanel, bool);
				MEMBER(vec_cssclasses, client::C_PointClientUIWorldPanel, C_NetworkUtlVectorBase<CUtlSymbolLarge>);
				MEMBER(b_opaque, client::C_PointClientUIWorldPanel, bool);
				MEMBER(b_no_depth, client::C_PointClientUIWorldPanel, bool);
				MEMBER(b_render_backface, client::C_PointClientUIWorldPanel, bool);
				MEMBER(b_use_off_screen_indicator, client::C_PointClientUIWorldPanel, bool);
				MEMBER(b_exclude_from_save_games, client::C_PointClientUIWorldPanel, bool);
				MEMBER(b_grabbable, client::C_PointClientUIWorldPanel, bool);
				MEMBER(b_only_render_to_texture, client::C_PointClientUIWorldPanel, bool);
				MEMBER(b_disable_mip_gen, client::C_PointClientUIWorldPanel, bool);
				MEMBER(n_explicit_image_layout, client::C_PointClientUIWorldPanel, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PointClientUIWorldPanel

			class C_CSMinimapBoundary : public client::C_BaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSMinimapBoundary

			class C_CSGO_EndOfMatchCharacterPosition : public client::C_CSGO_TeamPreviewCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_EndOfMatchCharacterPosition

			class C_Knife : public client::C_CSWeaponBase {
				MEMBER(b_first_attack, client::C_Knife, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Knife

			class CMapInfo : public client::C_PointEntity {
				MEMBER(i_buying_status, client::CMapInfo, int32_t);
				MEMBER(fl_bomb_radius, client::CMapInfo, float);
				MEMBER(i_pet_population, client::CMapInfo, int32_t);
				MEMBER(b_use_normal_spawns_for_dm, client::CMapInfo, bool);
				MEMBER(b_disable_auto_generated_dmspawns, client::CMapInfo, bool);
				MEMBER(fl_bot_max_vision_distance, client::CMapInfo, float);
				MEMBER(i_hostage_count, client::CMapInfo, int32_t);
				MEMBER(b_fade_player_visibility_far_z, client::CMapInfo, bool);
				MEMBER(b_rain_trace_to_sky_enabled, client::CMapInfo, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMapInfo

			class C_SoundOpvarSetAABBEntity : public client::C_SoundOpvarSetPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundOpvarSetAABBEntity

			class C_PropDoorRotating : public client::C_BasePropDoor {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PropDoorRotating

			class CCitadelSoundOpvarSetOBB : public client::C_BaseEntity {
				MEMBER(isz_stack_name, client::CCitadelSoundOpvarSetOBB, CUtlSymbolLarge);
				MEMBER(isz_operator_name, client::CCitadelSoundOpvarSetOBB, CUtlSymbolLarge);
				MEMBER(isz_opvar_name, client::CCitadelSoundOpvarSetOBB, CUtlSymbolLarge);
				MEMBER(v_distance_inner_mins, client::CCitadelSoundOpvarSetOBB, Vector);
				MEMBER(v_distance_inner_maxs, client::CCitadelSoundOpvarSetOBB, Vector);
				MEMBER(v_distance_outer_mins, client::CCitadelSoundOpvarSetOBB, Vector);
				MEMBER(v_distance_outer_maxs, client::CCitadelSoundOpvarSetOBB, Vector);
				MEMBER(n_aabbdirection, client::CCitadelSoundOpvarSetOBB, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCitadelSoundOpvarSetOBB

			class C_Team : public client::C_BaseEntity {
				MEMBER(a_player_controllers, client::C_Team, C_NetworkUtlVectorBase<chandle<client::CBasePlayerController>>);
				MEMBER(a_players, client::C_Team, C_NetworkUtlVectorBase<chandle<client::C_BasePlayerPawn>>);
				MEMBER(i_score, client::C_Team, int32_t);
				MEMBER_ARR(sz_teamname, client::C_Team, 129, char);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Team

			class C_CSGO_EndOfMatchLineupStart : public client::C_CSGO_EndOfMatchLineupEndpoint {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_EndOfMatchLineupStart

			class C_SoundAreaEntityOrientedBox : public client::C_SoundAreaEntityBase {
				MEMBER(v_min, client::C_SoundAreaEntityOrientedBox, Vector);
				MEMBER(v_max, client::C_SoundAreaEntityOrientedBox, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundAreaEntityOrientedBox

			class C_FuncMoveLinear : public client::C_BaseToggle {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FuncMoveLinear

			class C_TextureBasedAnimatable : public client::C_BaseModelEntity {
				MEMBER(b_loop, client::C_TextureBasedAnimatable, bool);
				MEMBER(fl_fps, client::C_TextureBasedAnimatable, float);
				MEMBER(h_position_keys, client::C_TextureBasedAnimatable, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(h_rotation_keys, client::C_TextureBasedAnimatable, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(v_animation_bounds_min, client::C_TextureBasedAnimatable, Vector);
				MEMBER(v_animation_bounds_max, client::C_TextureBasedAnimatable, Vector);
				MEMBER(fl_start_time, client::C_TextureBasedAnimatable, float);
				MEMBER(fl_start_frame, client::C_TextureBasedAnimatable, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_TextureBasedAnimatable

			class C_DynamicPropAlias_prop_dynamic_override : public client::C_DynamicProp {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_DynamicPropAlias_prop_dynamic_override

			class C_SoundOpvarSetPointEntity : public client::C_SoundOpvarSetPointBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundOpvarSetPointEntity

			class C_CSPlayerPawnBase : public client::C_BasePlayerPawn {
				MEMBER(p_ping_services, client::C_CSPlayerPawnBase, client::CCSPlayer_PingServices*);
				MEMBER(p_view_model_services, client::C_CSPlayerPawnBase, client::CPlayer_ViewModelServices*);
				MEMBER_ARR(f_rendering_clip_plane, client::C_CSPlayerPawnBase, 4, float);
				MEMBER(n_last_clip_plane_setup_frame, client::C_CSPlayerPawnBase, int32_t);
				MEMBER(vec_last_clip_camera_pos, client::C_CSPlayerPawnBase, Vector);
				MEMBER(vec_last_clip_camera_forward, client::C_CSPlayerPawnBase, Vector);
				MEMBER(b_clip_hit_static_world, client::C_CSPlayerPawnBase, bool);
				MEMBER(b_cached_plane_is_valid, client::C_CSPlayerPawnBase, bool);
				MEMBER(p_clipping_weapon, client::C_CSPlayerPawnBase, client::C_CSWeaponBase*);
				MEMBER(previous_player_state, client::C_CSPlayerPawnBase, client::CSPlayerState);
				MEMBER(i_player_state, client::C_CSPlayerPawnBase, client::CSPlayerState);
				MEMBER(b_is_rescuing, client::C_CSPlayerPawnBase, bool);
				MEMBER(f_immune_to_gun_game_damage_time, client::C_CSPlayerPawnBase, entity2::GameTime_t);
				MEMBER(f_immune_to_gun_game_damage_time_last, client::C_CSPlayerPawnBase, entity2::GameTime_t);
				MEMBER(b_gun_game_immunity, client::C_CSPlayerPawnBase, bool);
				MEMBER(b_has_moved_since_spawn, client::C_CSPlayerPawnBase, bool);
				MEMBER(f_molotov_use_time, client::C_CSPlayerPawnBase, float);
				MEMBER(f_molotov_damage_time, client::C_CSPlayerPawnBase, float);
				MEMBER(i_throw_grenade_counter, client::C_CSPlayerPawnBase, int32_t);
				MEMBER(fl_last_spawn_time_index, client::C_CSPlayerPawnBase, entity2::GameTime_t);
				MEMBER(i_progress_bar_duration, client::C_CSPlayerPawnBase, int32_t);
				MEMBER(fl_progress_bar_start_time, client::C_CSPlayerPawnBase, float);
				MEMBER(vec_intro_start_eye_position, client::C_CSPlayerPawnBase, Vector);
				MEMBER(vec_intro_start_player_forward, client::C_CSPlayerPawnBase, Vector);
				MEMBER(fl_client_death_time, client::C_CSPlayerPawnBase, entity2::GameTime_t);
				MEMBER(b_screen_tear_frame_captured, client::C_CSPlayerPawnBase, bool);
				MEMBER(fl_flash_bang_time, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_flash_screenshot_alpha, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_flash_overlay_alpha, client::C_CSPlayerPawnBase, float);
				MEMBER(b_flash_build_up, client::C_CSPlayerPawnBase, bool);
				MEMBER(b_flash_dsp_has_been_cleared, client::C_CSPlayerPawnBase, bool);
				MEMBER(b_flash_screenshot_has_been_grabbed, client::C_CSPlayerPawnBase, bool);
				MEMBER(fl_flash_max_alpha, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_flash_duration, client::C_CSPlayerPawnBase, float);
				MEMBER(i_health_bar_render_mask_index, client::C_CSPlayerPawnBase, int32_t);
				MEMBER(fl_health_fade_value, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_health_fade_alpha, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_death_ccweight, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_prev_round_end_time, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_prev_match_end_time, client::C_CSPlayerPawnBase, float);
				MEMBER(ang_eye_angles, client::C_CSPlayerPawnBase, QAngle);
				MEMBER(f_next_think_push_away, client::C_CSPlayerPawnBase, float);
				MEMBER(b_should_autobuy_dmweapons, client::C_CSPlayerPawnBase, bool);
				MEMBER(b_should_autobuy_now, client::C_CSPlayerPawnBase, bool);
				MEMBER(i_ident_index, client::C_CSPlayerPawnBase, CEntityIndex);
				MEMBER(delay_target_idtimer, client::C_CSPlayerPawnBase, client::CountdownTimer);
				MEMBER(i_target_item_ent_idx, client::C_CSPlayerPawnBase, CEntityIndex);
				MEMBER(i_old_ident_index, client::C_CSPlayerPawnBase, CEntityIndex);
				MEMBER(hold_target_idtimer, client::C_CSPlayerPawnBase, client::CountdownTimer);
				MEMBER(fl_current_music_start_time, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_music_round_start_time, client::C_CSPlayerPawnBase, float);
				MEMBER(b_defer_start_music_on_warmup, client::C_CSPlayerPawnBase, bool);
				MEMBER(cycle_latch, client::C_CSPlayerPawnBase, int32_t);
				MEMBER(server_intended_cycle, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_last_smoke_overlay_alpha, client::C_CSPlayerPawnBase, float);
				MEMBER(fl_last_smoke_age, client::C_CSPlayerPawnBase, float);
				MEMBER(v_last_smoke_overlay_color, client::C_CSPlayerPawnBase, Vector);
				MEMBER(n_player_smoked_fx, client::C_CSPlayerPawnBase, client::ParticleIndex_t);
				MEMBER(n_player_inferno_body_fx, client::C_CSPlayerPawnBase, client::ParticleIndex_t);
				MEMBER(n_player_inferno_foot_fx, client::C_CSPlayerPawnBase, client::ParticleIndex_t);
				MEMBER(fl_next_mag_drop_time, client::C_CSPlayerPawnBase, float);
				MEMBER(n_last_mag_drop_attachment_index, client::C_CSPlayerPawnBase, int32_t);
				MEMBER(vec_last_alive_local_velocity, client::C_CSPlayerPawnBase, Vector);
				MEMBER(b_guardian_should_spray_custom_xmark, client::C_CSPlayerPawnBase, bool);
				MEMBER(h_original_controller, client::C_CSPlayerPawnBase, chandle<client::CCSPlayerController>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSPlayerPawnBase

			class C_LightOrthoEntity : public client::C_LightEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_LightOrthoEntity

			class C_CSGO_PreviewPlayer : public client::C_CSPlayerPawn {
				MEMBER(animgraph, client::C_CSGO_PreviewPlayer, CUtlString);
				MEMBER(animgraph_character_mode_string, client::C_CSGO_PreviewPlayer, CGlobalSymbol);
				MEMBER(fl_initial_model_scale, client::C_CSGO_PreviewPlayer, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_PreviewPlayer

			class CSkyboxReference : public client::C_BaseEntity {
				MEMBER(world_group_id, client::CSkyboxReference, WorldGroupId_t);
				MEMBER(h_sky_camera, client::CSkyboxReference, chandle<client::C_SkyCamera>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSkyboxReference

			class C_TonemapController2Alias_env_tonemap_controller2 : public client::C_TonemapController2 {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_TonemapController2Alias_env_tonemap_controller2

			class CRenderComponent : public entity2::CEntityComponent {
				MEMBER(_m_p_chain_entity, client::CRenderComponent, entity2::CNetworkVarChainer);
				MEMBER(b_is_rendering_with_view_models, client::CRenderComponent, bool);
				MEMBER(n_splitscreen_flags, client::CRenderComponent, uint32_t);
				MEMBER(b_enable_rendering, client::CRenderComponent, bool);
				MEMBER(b_interpolation_ready_to_draw, client::CRenderComponent, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRenderComponent

			class C_PathParticleRopeAlias_path_particle_rope_clientside : public client::C_PathParticleRope {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PathParticleRopeAlias_path_particle_rope_clientside

			class C_CSGOViewModel : public client::C_PredictedViewModel {
				MEMBER(b_should_ignore_offset_and_accuracy, client::C_CSGOViewModel, bool);
				MEMBER(n_last_known_associated_weapon_ent_index, client::C_CSGOViewModel, CEntityIndex);
				MEMBER(b_need_to_queue_high_res_composite, client::C_CSGOViewModel, bool);
				MEMBER(v_lowered_weapon_offset, client::C_CSGOViewModel, QAngle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGOViewModel

			class C_WeaponSSG08 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponSSG08

			class C_EnvLightProbeVolume : public client::C_BaseEntity {
				MEMBER(entity_h_light_probe_texture, client::C_EnvLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_h_light_probe_direct_light_indices_texture, client::C_EnvLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_h_light_probe_direct_light_scalars_texture, client::C_EnvLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_h_light_probe_direct_light_shadows_texture, client::C_EnvLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_v_box_mins, client::C_EnvLightProbeVolume, Vector);
				MEMBER(entity_v_box_maxs, client::C_EnvLightProbeVolume, Vector);
				MEMBER(entity_b_moveable, client::C_EnvLightProbeVolume, bool);
				MEMBER(entity_n_handshake, client::C_EnvLightProbeVolume, int32_t);
				MEMBER(entity_n_priority, client::C_EnvLightProbeVolume, int32_t);
				MEMBER(entity_b_start_disabled, client::C_EnvLightProbeVolume, bool);
				MEMBER(entity_n_light_probe_size_x, client::C_EnvLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_size_y, client::C_EnvLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_size_z, client::C_EnvLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_atlas_x, client::C_EnvLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_atlas_y, client::C_EnvLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_atlas_z, client::C_EnvLightProbeVolume, int32_t);
				MEMBER(entity_b_enabled, client::C_EnvLightProbeVolume, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvLightProbeVolume

			class C_PointClientUIWorldTextPanel : public client::C_PointClientUIWorldPanel {
				MEMBER_ARR(message_text, client::C_PointClientUIWorldTextPanel, 512, char);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PointClientUIWorldTextPanel

			class C_ViewmodelAttachmentModel : public client::CBaseAnimGraph {
				MEMBER(b_should_front_face_cull_left_handed, client::C_ViewmodelAttachmentModel, bool);
				MEMBER(b_created_left_handed, client::C_ViewmodelAttachmentModel, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_ViewmodelAttachmentModel

			class C_CSGO_TeamSelectCamera : public client::C_CSGO_TeamPreviewCamera {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_TeamSelectCamera

			class C_Flashbang : public client::C_BaseCSGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Flashbang

			class CBumpMine : public client::C_CSWeaponBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBumpMine

			class C_BaseDoor : public client::C_BaseToggle {
				MEMBER(b_is_usable, client::C_BaseDoor, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseDoor

			class CRagdollManager : public client::C_BaseEntity {
				MEMBER(i_current_max_ragdoll_count, client::CRagdollManager, int8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRagdollManager

			class CPointOffScreenIndicatorUi : public client::C_PointClientUIWorldPanel {
				MEMBER(b_been_enabled, client::CPointOffScreenIndicatorUi, bool);
				MEMBER(b_hide, client::CPointOffScreenIndicatorUi, bool);
				MEMBER(fl_seen_target_time, client::CPointOffScreenIndicatorUi, float);
				MEMBER(p_target_panel, client::CPointOffScreenIndicatorUi, client::C_PointClientUIWorldPanel*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointOffScreenIndicatorUi

			class C_TeamRoundTimer : public client::C_BaseEntity {
				MEMBER(b_timer_paused, client::C_TeamRoundTimer, bool);
				MEMBER(fl_time_remaining, client::C_TeamRoundTimer, float);
				MEMBER(fl_timer_end_time, client::C_TeamRoundTimer, entity2::GameTime_t);
				MEMBER(b_is_disabled, client::C_TeamRoundTimer, bool);
				MEMBER(b_show_in_hud, client::C_TeamRoundTimer, bool);
				MEMBER(n_timer_length, client::C_TeamRoundTimer, int32_t);
				MEMBER(n_timer_initial_length, client::C_TeamRoundTimer, int32_t);
				MEMBER(n_timer_max_length, client::C_TeamRoundTimer, int32_t);
				MEMBER(b_auto_countdown, client::C_TeamRoundTimer, bool);
				MEMBER(n_setup_time_length, client::C_TeamRoundTimer, int32_t);
				MEMBER(n_state, client::C_TeamRoundTimer, int32_t);
				MEMBER(b_start_paused, client::C_TeamRoundTimer, bool);
				MEMBER(b_in_capture_watch_state, client::C_TeamRoundTimer, bool);
				MEMBER(fl_total_time, client::C_TeamRoundTimer, float);
				MEMBER(b_stop_watch_timer, client::C_TeamRoundTimer, bool);
				MEMBER(b_fire_finished, client::C_TeamRoundTimer, bool);
				MEMBER(b_fire5_min_remain, client::C_TeamRoundTimer, bool);
				MEMBER(b_fire4_min_remain, client::C_TeamRoundTimer, bool);
				MEMBER(b_fire3_min_remain, client::C_TeamRoundTimer, bool);
				MEMBER(b_fire2_min_remain, client::C_TeamRoundTimer, bool);
				MEMBER(b_fire1_min_remain, client::C_TeamRoundTimer, bool);
				MEMBER(b_fire30_sec_remain, client::C_TeamRoundTimer, bool);
				MEMBER(b_fire10_sec_remain, client::C_TeamRoundTimer, bool);
				MEMBER(b_fire5_sec_remain, client::C_TeamRoundTimer, bool);
				MEMBER(b_fire4_sec_remain, client::C_TeamRoundTimer, bool);
				MEMBER(b_fire3_sec_remain, client::C_TeamRoundTimer, bool);
				MEMBER(b_fire2_sec_remain, client::C_TeamRoundTimer, bool);
				MEMBER(b_fire1_sec_remain, client::C_TeamRoundTimer, bool);
				MEMBER(n_old_timer_length, client::C_TeamRoundTimer, int32_t);
				MEMBER(n_old_timer_state, client::C_TeamRoundTimer, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_TeamRoundTimer

			class C_WeaponGlock : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponGlock

			class C_SmokeGrenade : public client::C_BaseCSGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SmokeGrenade

			class C_WeaponGalilAR : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponGalilAR

			class C_WorldModelGloves : public client::CBaseAnimGraph {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WorldModelGloves

			class CPathSimple : public client::C_BaseEntity {
				MEMBER(path_string, client::CPathSimple, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathSimple

			class CInfoWorldLayer : public client::C_BaseEntity {
				MEMBER(p_output_on_entities_spawned, client::CInfoWorldLayer, entity2::CEntityIOOutput);
				MEMBER(world_name, client::CInfoWorldLayer, CUtlSymbolLarge);
				MEMBER(layer_name, client::CInfoWorldLayer, CUtlSymbolLarge);
				MEMBER(b_world_layer_visible, client::CInfoWorldLayer, bool);
				MEMBER(b_entities_spawned, client::CInfoWorldLayer, bool);
				MEMBER(b_create_as_child_spawn_group, client::CInfoWorldLayer, bool);
				MEMBER(h_layer_spawn_group, client::CInfoWorldLayer, uint32_t);
				MEMBER(b_world_layer_actually_visible, client::CInfoWorldLayer, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoWorldLayer

			class C_CSObserverPawn : public client::C_CSPlayerPawnBase {
				MEMBER(h_detect_parent_change, client::C_CSObserverPawn, CEntityHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSObserverPawn

			class CBodyComponentBaseModelEntity : public client::CBodyComponentSkeletonInstance {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBodyComponentBaseModelEntity

			class CTripWireFire : public client::C_BaseCSGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTripWireFire

			class C_CSWeaponBaseGun : public client::C_CSWeaponBase {
				MEMBER(zoom_level, client::C_CSWeaponBaseGun, int32_t);
				MEMBER(i_burst_shots_remaining, client::C_CSWeaponBaseGun, int32_t);
				MEMBER(i_silencer_bodygroup, client::C_CSWeaponBaseGun, int32_t);
				MEMBER(silenced_model_index, client::C_CSWeaponBaseGun, int32_t);
				MEMBER(in_precache, client::C_CSWeaponBaseGun, bool);
				MEMBER(b_needs_bolt_action, client::C_CSWeaponBaseGun, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSWeaponBaseGun

			class CEnvSoundscapeProxy : public client::CEnvSoundscape {
				MEMBER(main_soundscape_name, client::CEnvSoundscapeProxy, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvSoundscapeProxy

			class C_SkyCamera : public client::C_BaseEntity {
				MEMBER(skybox_data, client::C_SkyCamera, client::sky3dparams_t);
				MEMBER(skybox_slot_token, client::C_SkyCamera, CUtlStringToken);
				MEMBER(b_use_angles, client::C_SkyCamera, bool);
				MEMBER(p_next, client::C_SkyCamera, client::C_SkyCamera*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SkyCamera

			class C_World : public client::C_BaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_World

			class CEnvSoundscape : public client::C_BaseEntity {
				MEMBER(on_play, client::CEnvSoundscape, entity2::CEntityIOOutput);
				MEMBER(fl_radius, client::CEnvSoundscape, float);
				MEMBER(sound_event_name, client::CEnvSoundscape, CUtlSymbolLarge);
				MEMBER(b_override_with_event, client::CEnvSoundscape, bool);
				MEMBER(soundscape_index, client::CEnvSoundscape, int32_t);
				MEMBER(soundscape_entity_list_id, client::CEnvSoundscape, int32_t);
				MEMBER_ARR(position_names, client::CEnvSoundscape, 8, CUtlSymbolLarge);
				MEMBER(h_proxy_soundscape, client::CEnvSoundscape, chandle<client::CEnvSoundscape>);
				MEMBER(b_disabled, client::CEnvSoundscape, bool);
				MEMBER(soundscape_name, client::CEnvSoundscape, CUtlSymbolLarge);
				MEMBER(sound_event_hash, client::CEnvSoundscape, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvSoundscape

			class C_EntityDissolve : public client::C_BaseModelEntity {
				MEMBER(fl_start_time, client::C_EntityDissolve, entity2::GameTime_t);
				MEMBER(fl_fade_in_start, client::C_EntityDissolve, float);
				MEMBER(fl_fade_in_length, client::C_EntityDissolve, float);
				MEMBER(fl_fade_out_model_start, client::C_EntityDissolve, float);
				MEMBER(fl_fade_out_model_length, client::C_EntityDissolve, float);
				MEMBER(fl_fade_out_start, client::C_EntityDissolve, float);
				MEMBER(fl_fade_out_length, client::C_EntityDissolve, float);
				MEMBER(fl_next_spark_time, client::C_EntityDissolve, entity2::GameTime_t);
				MEMBER(n_dissolve_type, client::C_EntityDissolve, client::EntityDisolveType_t);
				MEMBER(v_dissolver_origin, client::C_EntityDissolve, Vector);
				MEMBER(n_magnitude, client::C_EntityDissolve, uint32_t);
				MEMBER(b_core_explode, client::C_EntityDissolve, bool);
				MEMBER(b_linked_to_server_ent, client::C_EntityDissolve, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EntityDissolve

			class C_CSGO_TeamIntroCounterTerroristPosition : public client::C_CSGO_TeamIntroCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_TeamIntroCounterTerroristPosition

			class C_PostProcessingVolume : public client::C_BaseTrigger {
				MEMBER(h_post_settings, client::C_PostProcessingVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCPostProcessingResource>);
				MEMBER(fl_fade_duration, client::C_PostProcessingVolume, float);
				MEMBER(fl_min_log_exposure, client::C_PostProcessingVolume, float);
				MEMBER(fl_max_log_exposure, client::C_PostProcessingVolume, float);
				MEMBER(fl_min_exposure, client::C_PostProcessingVolume, float);
				MEMBER(fl_max_exposure, client::C_PostProcessingVolume, float);
				MEMBER(fl_exposure_compensation, client::C_PostProcessingVolume, float);
				MEMBER(fl_exposure_fade_speed_up, client::C_PostProcessingVolume, float);
				MEMBER(fl_exposure_fade_speed_down, client::C_PostProcessingVolume, float);
				MEMBER(fl_tonemap_evsmoothing_range, client::C_PostProcessingVolume, float);
				MEMBER(b_master, client::C_PostProcessingVolume, bool);
				MEMBER(b_exposure_control, client::C_PostProcessingVolume, bool);
				MEMBER(fl_rate, client::C_PostProcessingVolume, float);
				MEMBER(fl_tonemap_percent_target, client::C_PostProcessingVolume, float);
				MEMBER(fl_tonemap_percent_bright_pixels, client::C_PostProcessingVolume, float);
				MEMBER(fl_tonemap_min_avg_lum, client::C_PostProcessingVolume, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PostProcessingVolume

			class CServerOnlyModelEntity : public client::C_BaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CServerOnlyModelEntity

			class C_FuncRotating : public client::C_BaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FuncRotating

			class C_CSGO_TeamSelectCounterTerroristPosition : public client::C_CSGO_TeamSelectCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_TeamSelectCounterTerroristPosition

			struct CPulseCell_LerpCameraSettings_CursorState_t : public pulse_runtime_lib::CPulseCell_BaseLerp_CursorState_t {
				MEMBER(h_camera, client::CPulseCell_LerpCameraSettings_CursorState_t, chandle<client::C_PointCamera>);
				MEMBER(overlaid_start, client::CPulseCell_LerpCameraSettings_CursorState_t, client::PointCameraSettings_t);
				MEMBER(overlaid_end, client::CPulseCell_LerpCameraSettings_CursorState_t, client::PointCameraSettings_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CPulseCell_LerpCameraSettings_CursorState_t

			class C_BaseFire : public client::C_BaseEntity {
				MEMBER(fl_scale, client::C_BaseFire, float);
				MEMBER(fl_start_scale, client::C_BaseFire, float);
				MEMBER(fl_scale_time, client::C_BaseFire, float);
				MEMBER(n_flags, client::C_BaseFire, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseFire

			class C_ItemDogtags : public client::C_Item {
				MEMBER(owning_player, client::C_ItemDogtags, chandle<client::C_CSPlayerPawn>);
				MEMBER(killing_player, client::C_ItemDogtags, chandle<client::C_CSPlayerPawn>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_ItemDogtags

			class C_DecoyProjectile : public client::C_BaseCSGrenadeProjectile {
				MEMBER(n_decoy_shot_tick, client::C_DecoyProjectile, int32_t);
				MEMBER(n_client_last_known_decoy_shot_tick, client::C_DecoyProjectile, int32_t);
				MEMBER(fl_time_particle_effect_spawn, client::C_DecoyProjectile, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_DecoyProjectile

			class C_WaterBullet : public client::CBaseAnimGraph {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WaterBullet

			class CCSPointScriptEntity : public client::C_BaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScriptEntity

			class C_C4 : public client::C_CSWeaponBase {
				MEMBER_ARR(sz_screen_text, client::C_C4, 32, char);
				MEMBER(active_light_particle_index, client::C_C4, client::ParticleIndex_t);
				MEMBER(e_active_light_effect, client::C_C4, client::C4LightEffect_t);
				MEMBER(b_started_arming, client::C_C4, bool);
				MEMBER(f_armed_time, client::C_C4, entity2::GameTime_t);
				MEMBER(b_bomb_placed_animation, client::C_C4, bool);
				MEMBER(b_is_planting_via_use, client::C_C4, bool);
				MEMBER(entity_spotted_state, client::C_C4, client::EntitySpottedState_t);
				MEMBER(n_spot_rules, client::C_C4, int32_t);
				MEMBER_ARR(b_played_arming_beeps, client::C_C4, 7, bool);
				MEMBER(b_bomb_planted, client::C_C4, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_C4

			class CBaseAnimGraph : public client::C_BaseModelEntity {
				MEMBER(b_initially_populate_interp_history, client::CBaseAnimGraph, bool);
				MEMBER(b_suppress_anim_event_sounds, client::CBaseAnimGraph, bool);
				MEMBER(b_anim_graph_update_enabled, client::CBaseAnimGraph, bool);
				MEMBER(fl_max_slope_distance, client::CBaseAnimGraph, float);
				MEMBER(v_last_slope_check_pos, client::CBaseAnimGraph, Vector);
				MEMBER(b_animation_update_scheduled, client::CBaseAnimGraph, bool);
				MEMBER(vec_force, client::CBaseAnimGraph, Vector);
				MEMBER(n_force_bone, client::CBaseAnimGraph, int32_t);
				MEMBER(p_clientside_ragdoll, client::CBaseAnimGraph, client::CBaseAnimGraph*);
				MEMBER(b_built_ragdoll, client::CBaseAnimGraph, bool);
				MEMBER(ragdoll_pose, client::CBaseAnimGraph, client::PhysicsRagdollPose_t);
				MEMBER(b_ragdoll_client_side, client::CBaseAnimGraph, bool);
				MEMBER(b_has_animated_material_attributes, client::CBaseAnimGraph, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseAnimGraph

			class CBreachChargeProjectile : public client::C_BaseGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBreachChargeProjectile

			class C_PointEntity : public client::C_BaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PointEntity

			class C_PathParticleRope : public client::C_BaseEntity {
				MEMBER(b_start_active, client::C_PathParticleRope, bool);
				MEMBER(fl_max_simulation_time, client::C_PathParticleRope, float);
				MEMBER(isz_effect_name, client::C_PathParticleRope, CUtlSymbolLarge);
				MEMBER(path_nodes__name, client::C_PathParticleRope, cutl_vector<CUtlSymbolLarge>);
				MEMBER(fl_particle_spacing, client::C_PathParticleRope, float);
				MEMBER(fl_slack, client::C_PathParticleRope, float);
				MEMBER(fl_radius, client::C_PathParticleRope, float);
				MEMBER(color_tint, client::C_PathParticleRope, Color);
				MEMBER(n_effect_state, client::C_PathParticleRope, int32_t);
				MEMBER(i_effect_index, client::C_PathParticleRope, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(path_nodes__position, client::C_PathParticleRope, C_NetworkUtlVectorBase<Vector>);
				MEMBER(path_nodes__tangent_in, client::C_PathParticleRope, C_NetworkUtlVectorBase<Vector>);
				MEMBER(path_nodes__tangent_out, client::C_PathParticleRope, C_NetworkUtlVectorBase<Vector>);
				MEMBER(path_nodes__color, client::C_PathParticleRope, C_NetworkUtlVectorBase<Vector>);
				MEMBER(path_nodes__pin_enabled, client::C_PathParticleRope, C_NetworkUtlVectorBase<bool>);
				MEMBER(path_nodes__radius_scale, client::C_PathParticleRope, C_NetworkUtlVectorBase<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PathParticleRope

			class C_WeaponP90 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponP90

			class CEnvSoundscapeAlias_snd_soundscape : public client::CEnvSoundscape {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvSoundscapeAlias_snd_soundscape

			class C_BasePlayerWeapon : public client::C_EconEntity {
				MEMBER(n_next_primary_attack_tick, client::C_BasePlayerWeapon, entity2::GameTick_t);
				MEMBER(fl_next_primary_attack_tick_ratio, client::C_BasePlayerWeapon, float);
				MEMBER(n_next_secondary_attack_tick, client::C_BasePlayerWeapon, entity2::GameTick_t);
				MEMBER(fl_next_secondary_attack_tick_ratio, client::C_BasePlayerWeapon, float);
				MEMBER(i_clip1, client::C_BasePlayerWeapon, int32_t);
				MEMBER(i_clip2, client::C_BasePlayerWeapon, int32_t);
				MEMBER_ARR(p_reserve_ammo, client::C_BasePlayerWeapon, 2, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BasePlayerWeapon

			class C_RagdollProp : public client::CBaseAnimGraph {
				MEMBER(rag_pos, client::C_RagdollProp, C_NetworkUtlVectorBase<Vector>);
				MEMBER(rag_angles, client::C_RagdollProp, C_NetworkUtlVectorBase<QAngle>);
				MEMBER(fl_blend_weight, client::C_RagdollProp, float);
				MEMBER(h_ragdoll_source, client::C_RagdollProp, chandle<client::C_BaseEntity>);
				MEMBER(i_eye_attachment, client::C_RagdollProp, modellib::AttachmentHandle_t);
				MEMBER(fl_blend_weight_current, client::C_RagdollProp, float);
				MEMBER(parent_physics_bone_indices, client::C_RagdollProp, cutl_vector<int32_t>);
				MEMBER(world_space_bone_computation_order, client::C_RagdollProp, cutl_vector<int32_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_RagdollProp

			class C_EnvSky : public client::C_BaseModelEntity {
				MEMBER(h_sky_material, client::C_EnvSky, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(h_sky_material_lighting_only, client::C_EnvSky, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(b_start_disabled, client::C_EnvSky, bool);
				MEMBER(v_tint_color, client::C_EnvSky, Color);
				MEMBER(v_tint_color_lighting_only, client::C_EnvSky, Color);
				MEMBER(fl_brightness_scale, client::C_EnvSky, float);
				MEMBER(n_fog_type, client::C_EnvSky, int32_t);
				MEMBER(fl_fog_min_start, client::C_EnvSky, float);
				MEMBER(fl_fog_min_end, client::C_EnvSky, float);
				MEMBER(fl_fog_max_start, client::C_EnvSky, float);
				MEMBER(fl_fog_max_end, client::C_EnvSky, float);
				MEMBER(b_enabled, client::C_EnvSky, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvSky

			class C_WeaponAWP : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponAWP

			class C_BasePlayerPawn : public client::C_BaseCombatCharacter {
				MEMBER(p_weapon_services, client::C_BasePlayerPawn, client::CPlayer_WeaponServices*);
				MEMBER(p_item_services, client::C_BasePlayerPawn, client::CPlayer_ItemServices*);
				MEMBER(p_autoaim_services, client::C_BasePlayerPawn, client::CPlayer_AutoaimServices*);
				MEMBER(p_observer_services, client::C_BasePlayerPawn, client::CPlayer_ObserverServices*);
				MEMBER(p_water_services, client::C_BasePlayerPawn, client::CPlayer_WaterServices*);
				MEMBER(p_use_services, client::C_BasePlayerPawn, client::CPlayer_UseServices*);
				MEMBER(p_flashlight_services, client::C_BasePlayerPawn, client::CPlayer_FlashlightServices*);
				MEMBER(p_camera_services, client::C_BasePlayerPawn, client::CPlayer_CameraServices*);
				MEMBER(p_movement_services, client::C_BasePlayerPawn, client::CPlayer_MovementServices*);
				MEMBER(server_view_angle_changes, client::C_BasePlayerPawn, C_UtlVectorEmbeddedNetworkVar<client::ViewAngleServerChange_t>);
				MEMBER(n_highest_consumed_server_view_angle_change_index, client::C_BasePlayerPawn, uint32_t);
				MEMBER(v_angle, client::C_BasePlayerPawn, QAngle);
				MEMBER(v_angle_previous, client::C_BasePlayerPawn, QAngle);
				MEMBER(i_hide_hud, client::C_BasePlayerPawn, uint32_t);
				MEMBER(skybox3d, client::C_BasePlayerPawn, client::sky3dparams_t);
				MEMBER(fl_death_time, client::C_BasePlayerPawn, entity2::GameTime_t);
				MEMBER(vec_prediction_error, client::C_BasePlayerPawn, Vector);
				MEMBER(fl_prediction_error_time, client::C_BasePlayerPawn, entity2::GameTime_t);
				MEMBER(vec_last_camera_setup_local_origin, client::C_BasePlayerPawn, Vector);
				MEMBER(fl_last_camera_setup_time, client::C_BasePlayerPawn, entity2::GameTime_t);
				MEMBER(fl_fovsensitivity_adjust, client::C_BasePlayerPawn, float);
				MEMBER(fl_mouse_sensitivity, client::C_BasePlayerPawn, float);
				MEMBER(v_old_origin, client::C_BasePlayerPawn, Vector);
				MEMBER(fl_old_simulation_time, client::C_BasePlayerPawn, float);
				MEMBER(n_last_executed_command_number, client::C_BasePlayerPawn, int32_t);
				MEMBER(n_last_executed_command_tick, client::C_BasePlayerPawn, int32_t);
				MEMBER(h_controller, client::C_BasePlayerPawn, chandle<client::CBasePlayerController>);
				MEMBER(b_is_swapping_to_predictable_controller, client::C_BasePlayerPawn, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BasePlayerPawn

			class CLogicalEntity : public client::C_BaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicalEntity

			class C_SoundEventOBBEntity : public client::C_SoundEventEntity {
				MEMBER(v_mins, client::C_SoundEventOBBEntity, Vector);
				MEMBER(v_maxs, client::C_SoundEventOBBEntity, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundEventOBBEntity

			class C_TriggerBuoyancy : public client::C_BaseTrigger {
				MEMBER(buoyancy_helper, client::C_TriggerBuoyancy, client::CBuoyancyHelper);
				MEMBER(fl_fluid_density, client::C_TriggerBuoyancy, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_TriggerBuoyancy

			class C_Hostage : public client::C_BaseCombatCharacter {
				MEMBER(entity_spotted_state, client::C_Hostage, client::EntitySpottedState_t);
				MEMBER(leader, client::C_Hostage, chandle<client::C_BaseEntity>);
				MEMBER(reuse_timer, client::C_Hostage, client::CountdownTimer);
				MEMBER(vel, client::C_Hostage, Vector);
				MEMBER(is_rescued, client::C_Hostage, bool);
				MEMBER(jumped_this_frame, client::C_Hostage, bool);
				MEMBER(n_hostage_state, client::C_Hostage, int32_t);
				MEMBER(b_hands_have_been_cut, client::C_Hostage, bool);
				MEMBER(h_hostage_grabber, client::C_Hostage, chandle<client::C_CSPlayerPawn>);
				MEMBER(f_last_grab_time, client::C_Hostage, entity2::GameTime_t);
				MEMBER(vec_grabbed_pos, client::C_Hostage, Vector);
				MEMBER(fl_rescue_start_time, client::C_Hostage, entity2::GameTime_t);
				MEMBER(fl_grab_success_time, client::C_Hostage, entity2::GameTime_t);
				MEMBER(fl_drop_start_time, client::C_Hostage, entity2::GameTime_t);
				MEMBER(fl_dead_or_rescued_time, client::C_Hostage, entity2::GameTime_t);
				MEMBER(blink_timer, client::C_Hostage, client::CountdownTimer);
				MEMBER(look_at, client::C_Hostage, Vector);
				MEMBER(look_around_timer, client::C_Hostage, client::CountdownTimer);
				MEMBER(is_init, client::C_Hostage, bool);
				MEMBER(eye_attachment, client::C_Hostage, modellib::AttachmentHandle_t);
				MEMBER(chest_attachment, client::C_Hostage, modellib::AttachmentHandle_t);
				MEMBER(p_prediction_owner, client::C_Hostage, client::CBasePlayerController*);
				MEMBER(f_newest_alpha_think_time, client::C_Hostage, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Hostage

			class C_RopeKeyframe : public client::C_BaseModelEntity {
				MEMBER(links_touching_something, client::C_RopeKeyframe, CBitVec<10>);
				MEMBER(n_links_touching_something, client::C_RopeKeyframe, int32_t);
				MEMBER(b_apply_wind, client::C_RopeKeyframe, bool);
				MEMBER(f_prev_locked_points, client::C_RopeKeyframe, int32_t);
				MEMBER(i_force_point_move_counter, client::C_RopeKeyframe, int32_t);
				MEMBER_ARR(b_prev_end_point_pos, client::C_RopeKeyframe, 2, bool);
				MEMBER_ARR(v_prev_end_point_pos, client::C_RopeKeyframe, 2, Vector);
				MEMBER(fl_cur_scroll, client::C_RopeKeyframe, float);
				MEMBER(fl_scroll_speed, client::C_RopeKeyframe, float);
				MEMBER(rope_flags, client::C_RopeKeyframe, uint16_t);
				MEMBER(i_rope_material_model_index, client::C_RopeKeyframe, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER_ARR(light_values, client::C_RopeKeyframe, 10, Vector);
				MEMBER(n_segments, client::C_RopeKeyframe, uint8_t);
				MEMBER(h_start_point, client::C_RopeKeyframe, chandle<client::C_BaseEntity>);
				MEMBER(h_end_point, client::C_RopeKeyframe, chandle<client::C_BaseEntity>);
				MEMBER(i_start_attachment, client::C_RopeKeyframe, modellib::AttachmentHandle_t);
				MEMBER(i_end_attachment, client::C_RopeKeyframe, modellib::AttachmentHandle_t);
				MEMBER(subdiv, client::C_RopeKeyframe, uint8_t);
				MEMBER(rope_length, client::C_RopeKeyframe, int16_t);
				MEMBER(slack, client::C_RopeKeyframe, int16_t);
				MEMBER(texture_scale, client::C_RopeKeyframe, float);
				MEMBER(f_locked_points, client::C_RopeKeyframe, uint8_t);
				MEMBER(n_change_count, client::C_RopeKeyframe, uint8_t);
				MEMBER(width, client::C_RopeKeyframe, float);
				MEMBER(physics_delegate, client::C_RopeKeyframe, client::C_RopeKeyframe_CPhysicsDelegate);
				MEMBER(h_material, client::C_RopeKeyframe, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(texture_height, client::C_RopeKeyframe, int32_t);
				MEMBER(vec_impulse, client::C_RopeKeyframe, Vector);
				MEMBER(vec_previous_impulse, client::C_RopeKeyframe, Vector);
				MEMBER(fl_current_gust_timer, client::C_RopeKeyframe, float);
				MEMBER(fl_current_gust_lifetime, client::C_RopeKeyframe, float);
				MEMBER(fl_time_to_next_gust, client::C_RopeKeyframe, float);
				MEMBER(v_wind_dir, client::C_RopeKeyframe, Vector);
				MEMBER(v_color_mod, client::C_RopeKeyframe, Vector);
				MEMBER_ARR(v_cached_end_point_attachment_pos, client::C_RopeKeyframe, 2, Vector);
				MEMBER_ARR(v_cached_end_point_attachment_angle, client::C_RopeKeyframe, 2, QAngle);
				MEMBER(b_constrain_between_endpoints, client::C_RopeKeyframe, bool);
				MEMBER(b_end_point_attachment_positions_dirty, client::C_RopeKeyframe, uint8_t);
				MEMBER(b_end_point_attachment_angles_dirty, client::C_RopeKeyframe, uint8_t);
				MEMBER(b_new_data_this_frame, client::C_RopeKeyframe, uint8_t);
				MEMBER(b_physics_initted, client::C_RopeKeyframe, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_RopeKeyframe

			class C_GradientFog : public client::C_BaseEntity {
				MEMBER(h_gradient_fog_texture, client::C_GradientFog, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(fl_fog_start_distance, client::C_GradientFog, float);
				MEMBER(fl_fog_end_distance, client::C_GradientFog, float);
				MEMBER(b_height_fog_enabled, client::C_GradientFog, bool);
				MEMBER(fl_fog_start_height, client::C_GradientFog, float);
				MEMBER(fl_fog_end_height, client::C_GradientFog, float);
				MEMBER(fl_far_z, client::C_GradientFog, float);
				MEMBER(fl_fog_max_opacity, client::C_GradientFog, float);
				MEMBER(fl_fog_falloff_exponent, client::C_GradientFog, float);
				MEMBER(fl_fog_vertical_exponent, client::C_GradientFog, float);
				MEMBER(fog_color, client::C_GradientFog, Color);
				MEMBER(fl_fog_strength, client::C_GradientFog, float);
				MEMBER(fl_fade_time, client::C_GradientFog, float);
				MEMBER(b_start_disabled, client::C_GradientFog, bool);
				MEMBER(b_is_enabled, client::C_GradientFog, bool);
				MEMBER(b_gradient_fog_needs_textures, client::C_GradientFog, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_GradientFog

			class C_CSGO_TeamPreviewCamera : public client::C_CSGO_MapPreviewCameraPath {
				MEMBER(n_variant, client::C_CSGO_TeamPreviewCamera, int32_t);
				MEMBER(b_dof_enabled, client::C_CSGO_TeamPreviewCamera, bool);
				MEMBER(fl_dof_near_blurry, client::C_CSGO_TeamPreviewCamera, float);
				MEMBER(fl_dof_near_crisp, client::C_CSGO_TeamPreviewCamera, float);
				MEMBER(fl_dof_far_crisp, client::C_CSGO_TeamPreviewCamera, float);
				MEMBER(fl_dof_far_blurry, client::C_CSGO_TeamPreviewCamera, float);
				MEMBER(fl_dof_tilt_to_ground, client::C_CSGO_TeamPreviewCamera, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_TeamPreviewCamera

			class C_EconWearable : public client::C_EconEntity {
				MEMBER(n_force_skin, client::C_EconWearable, int32_t);
				MEMBER(b_always_allow, client::C_EconWearable, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EconWearable

			class CCSGO_WingmanIntroCharacterPosition : public client::C_CSGO_TeamIntroCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGO_WingmanIntroCharacterPosition

			class C_HEGrenadeProjectile : public client::C_BaseCSGrenadeProjectile {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_HEGrenadeProjectile

			class CInfoTarget : public client::C_PointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoTarget

			class C_BaseToggle : public client::C_BaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseToggle

			class C_NetTestBaseCombatCharacter : public client::C_BaseCombatCharacter {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_NetTestBaseCombatCharacter

			class CWaterSplasher : public client::C_BaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWaterSplasher

			class C_KeychainModule : public client::C_CS2WeaponModuleBase {
				MEMBER(n_keychain_def_id, client::C_KeychainModule, uint32_t);
				MEMBER(n_keychain_seed, client::C_KeychainModule, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_KeychainModule

			class C_ModelPointEntity : public client::C_BaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_ModelPointEntity

			class C_FireSmoke : public client::C_BaseFire {
				MEMBER(n_flame_model_index, client::C_FireSmoke, int32_t);
				MEMBER(n_flame_from_above_model_index, client::C_FireSmoke, int32_t);
				MEMBER(fl_scale_register, client::C_FireSmoke, float);
				MEMBER(fl_scale_start, client::C_FireSmoke, float);
				MEMBER(fl_scale_end, client::C_FireSmoke, float);
				MEMBER(fl_scale_time_start, client::C_FireSmoke, entity2::GameTime_t);
				MEMBER(fl_scale_time_end, client::C_FireSmoke, entity2::GameTime_t);
				MEMBER(fl_child_flame_spread, client::C_FireSmoke, float);
				MEMBER(fl_clip_perc, client::C_FireSmoke, float);
				MEMBER(b_clip_tested, client::C_FireSmoke, bool);
				MEMBER(b_fading_out, client::C_FireSmoke, bool);
				MEMBER(t_particle_spawn, client::C_FireSmoke, client::TimedEvent);
				MEMBER(p_fire_overlay, client::C_FireSmoke, client::CFireOverlay*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FireSmoke

			class C_WeaponRevolver : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponRevolver

			class CPointTemplate : public client::CLogicalEntity {
				MEMBER(isz_world_name, client::CPointTemplate, CUtlSymbolLarge);
				MEMBER(isz_source2_entity_lump_name, client::CPointTemplate, CUtlSymbolLarge);
				MEMBER(isz_entity_filter_name, client::CPointTemplate, CUtlSymbolLarge);
				MEMBER(fl_timeout_interval, client::CPointTemplate, float);
				MEMBER(b_asynchronously_spawn_entities, client::CPointTemplate, bool);
				MEMBER(p_output_on_spawned, client::CPointTemplate, entity2::CEntityIOOutput);
				MEMBER(client_only_entity_behavior, client::CPointTemplate, client::PointTemplateClientOnlyEntityBehavior_t);
				MEMBER(owner_spawn_group_type, client::CPointTemplate, client::PointTemplateOwnerSpawnGroupType_t);
				MEMBER(created_spawn_group_handles, client::CPointTemplate, cutl_vector<uint32_t>);
				MEMBER(spawned_entity_handles, client::CPointTemplate, cutl_vector<CEntityHandle>);
				////MEMBER(script_spawn_callback, client::CPointTemplate, HSCRIPT);
				///MEMBER(script_callback_scope, client::CPointTemplate, HSCRIPT);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointTemplate

			class C_FireFromAboveSprite : public client::C_Sprite {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FireFromAboveSprite

			class C_SoundOpvarSetOBBWindEntity : public client::C_SoundOpvarSetPointBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundOpvarSetOBBWindEntity

			class C_WeaponMP5SD : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponMP5SD

			class C_WeaponShield : public client::C_CSWeaponBaseGun {
				MEMBER(fl_display_health, client::C_WeaponShield, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponShield

			class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel : public client::C_CSGO_PreviewPlayer {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel

			class C_DynamicPropAlias_dynamic_prop : public client::C_DynamicProp {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_DynamicPropAlias_dynamic_prop

			class CPointChildModifier : public client::C_PointEntity {
				MEMBER(b_orphan_instead_of_deleting_children_on_remove, client::CPointChildModifier, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointChildModifier

			class C_PointCameraVFOV : public client::C_PointCamera {
				MEMBER(fl_vertical_fov, client::C_PointCameraVFOV, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PointCameraVFOV

			class C_CSGO_TeamSelectTerroristPosition : public client::C_CSGO_TeamSelectCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_TeamSelectTerroristPosition

			class C_TonemapController2 : public client::C_BaseEntity {
				MEMBER(fl_auto_exposure_min, client::C_TonemapController2, float);
				MEMBER(fl_auto_exposure_max, client::C_TonemapController2, float);
				MEMBER(fl_tonemap_percent_target, client::C_TonemapController2, float);
				MEMBER(fl_tonemap_percent_bright_pixels, client::C_TonemapController2, float);
				MEMBER(fl_tonemap_min_avg_lum, client::C_TonemapController2, float);
				MEMBER(fl_exposure_adaptation_speed_up, client::C_TonemapController2, float);
				MEMBER(fl_exposure_adaptation_speed_down, client::C_TonemapController2, float);
				MEMBER(fl_tonemap_evsmoothing_range, client::C_TonemapController2, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_TonemapController2

			class C_WeaponG3SG1 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponG3SG1

			class CFuncWater : public client::C_BaseModelEntity {
				MEMBER(buoyancy_helper, client::CFuncWater, client::CBuoyancyHelper);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncWater

			class C_SoundOpvarSetAutoRoomEntity : public client::C_SoundOpvarSetPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundOpvarSetAutoRoomEntity

			class C_EconEntity : public client::C_BaseFlex {
				MEMBER(fl_flex_delay_time, client::C_EconEntity, float);
				MEMBER(fl_flex_delayed_weight, client::C_EconEntity, float32*);
				MEMBER(b_attributes_initialized, client::C_EconEntity, bool);
				MEMBER(attribute_manager, client::C_EconEntity, client::C_AttributeContainer);
				MEMBER(original_owner_xuid_low, client::C_EconEntity, uint32_t);
				MEMBER(original_owner_xuid_high, client::C_EconEntity, uint32_t);
				MEMBER(n_fallback_paint_kit, client::C_EconEntity, int32_t);
				MEMBER(n_fallback_seed, client::C_EconEntity, int32_t);
				MEMBER(fl_fallback_wear, client::C_EconEntity, float);
				MEMBER(n_fallback_stat_trak, client::C_EconEntity, int32_t);
				MEMBER(b_clientside, client::C_EconEntity, bool);
				MEMBER(b_particle_systems_created, client::C_EconEntity, bool);
				MEMBER(vec_attached_particles, client::C_EconEntity, cutl_vector<int32_t>);
				MEMBER(h_viewmodel_attachment, client::C_EconEntity, chandle<client::CBaseAnimGraph>);
				MEMBER(i_old_team, client::C_EconEntity, int32_t);
				MEMBER(b_attachment_dirty, client::C_EconEntity, bool);
				MEMBER(n_unloaded_model_index, client::C_EconEntity, int32_t);
				MEMBER(i_num_owner_validation_retries, client::C_EconEntity, int32_t);
				MEMBER(h_old_providee, client::C_EconEntity, chandle<client::C_BaseEntity>);
				MEMBER(vec_attached_models, client::C_EconEntity, cutl_vector<client::C_EconEntity_AttachedModelData_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EconEntity

			class C_WeaponSG556 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponSG556

			class C_RectLight : public client::C_BarnLight {
				MEMBER(b_show_light, client::C_RectLight, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_RectLight

			class C_WeaponNegev : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponNegev

			class C_ParticleSystem : public client::C_BaseModelEntity {
				MEMBER_ARR(sz_snapshot_file_name, client::C_ParticleSystem, 512, char);
				MEMBER(b_active, client::C_ParticleSystem, bool);
				MEMBER(b_frozen, client::C_ParticleSystem, bool);
				MEMBER(fl_freeze_transition_duration, client::C_ParticleSystem, float);
				MEMBER(n_stop_type, client::C_ParticleSystem, int32_t);
				MEMBER(b_animate_during_gameplay_pause, client::C_ParticleSystem, bool);
				MEMBER(i_effect_index, client::C_ParticleSystem, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(fl_start_time, client::C_ParticleSystem, entity2::GameTime_t);
				MEMBER(fl_pre_sim_time, client::C_ParticleSystem, float);
				MEMBER_ARR(v_server_control_points, client::C_ParticleSystem, 4, Vector);
				MEMBER_ARR(i_server_control_point_assignments, client::C_ParticleSystem, 4, uint8_t);
				MEMBER_ARR(h_control_point_ents, client::C_ParticleSystem, 64, chandle<client::C_BaseEntity>);
				MEMBER(b_no_save, client::C_ParticleSystem, bool);
				MEMBER(b_no_freeze, client::C_ParticleSystem, bool);
				MEMBER(b_no_ramp, client::C_ParticleSystem, bool);
				MEMBER(b_start_active, client::C_ParticleSystem, bool);
				MEMBER(isz_effect_name, client::C_ParticleSystem, CUtlSymbolLarge);
				MEMBER_ARR(isz_control_point_names, client::C_ParticleSystem, 64, CUtlSymbolLarge);
				MEMBER(n_data_cp, client::C_ParticleSystem, int32_t);
				MEMBER(vec_data_cpvalue, client::C_ParticleSystem, Vector);
				MEMBER(n_tint_cp, client::C_ParticleSystem, int32_t);
				MEMBER(clr_tint, client::C_ParticleSystem, Color);
				MEMBER(b_old_active, client::C_ParticleSystem, bool);
				MEMBER(b_old_frozen, client::C_ParticleSystem, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_ParticleSystem

			class C_CSGO_TeamPreviewModel : public client::C_CSGO_PreviewPlayer {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_TeamPreviewModel

			class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable : public client::CEnvSoundscapeTriggerable {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable

			class C_CSGameRulesProxy : public client::C_GameRulesProxy {
				MEMBER(p_game_rules, client::C_CSGameRulesProxy, client::C_CSGameRules*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGameRulesProxy

			class CBombTarget : public client::C_BaseTrigger {
				MEMBER(b_bomb_planted_here, client::CBombTarget, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBombTarget

			class CWeaponZoneRepulsor : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponZoneRepulsor

			class C_BaseFlex : public client::CBaseAnimGraph {
				MEMBER(flex_weight, client::C_BaseFlex, C_NetworkUtlVectorBase<float>);
				MEMBER(v_look_target_position, client::C_BaseFlex, Vector);
				MEMBER(blinktoggle, client::C_BaseFlex, bool);
				MEMBER(n_last_flex_update_frame_count, client::C_BaseFlex, int32_t);
				MEMBER(cached_view_target, client::C_BaseFlex, Vector);
				MEMBER(n_next_scene_event_id, client::C_BaseFlex, client::SceneEventId_t);
				MEMBER(i_blink, client::C_BaseFlex, int32_t);
				MEMBER(blinktime, client::C_BaseFlex, float);
				MEMBER(prevblinktoggle, client::C_BaseFlex, bool);
				MEMBER(i_jaw_open, client::C_BaseFlex, int32_t);
				MEMBER(fl_jaw_open_amount, client::C_BaseFlex, float);
				MEMBER(fl_blink_amount, client::C_BaseFlex, float);
				MEMBER(i_mouth_attachment, client::C_BaseFlex, modellib::AttachmentHandle_t);
				MEMBER(i_eye_attachment, client::C_BaseFlex, modellib::AttachmentHandle_t);
				MEMBER(b_reset_flex_weights_on_model_change, client::C_BaseFlex, bool);
				MEMBER(n_eye_occlusion_renderer_bone, client::C_BaseFlex, int32_t);
				MEMBER(m_eye_occlusion_renderer_camera_to_bone_transform, client::C_BaseFlex, matrix3x4_t);
				MEMBER(v_eye_occlusion_renderer_half_extent, client::C_BaseFlex, Vector);
				MEMBER_ARR(phoneme_classes, client::C_BaseFlex, 3, client::C_BaseFlex_Emphasized_Phoneme);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseFlex

			class C_CSGO_EndOfMatchLineupEnd : public client::C_CSGO_EndOfMatchLineupEndpoint {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_EndOfMatchLineupEnd

			class C_Multimeter : public client::CBaseAnimGraph {
				MEMBER(h_target_c4, client::C_Multimeter, chandle<client::C_PlantedC4>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Multimeter

			class C_OmniLight : public client::C_BarnLight {
				MEMBER(fl_inner_angle, client::C_OmniLight, float);
				MEMBER(fl_outer_angle, client::C_OmniLight, float);
				MEMBER(b_show_light, client::C_OmniLight, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_OmniLight

			class C_CsmFovOverride : public client::C_BaseEntity {
				MEMBER(camera_name, client::C_CsmFovOverride, CUtlString);
				MEMBER(fl_csm_fov_override_value, client::C_CsmFovOverride, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CsmFovOverride

			class C_PlantedC4 : public client::CBaseAnimGraph {
				MEMBER(b_bomb_ticking, client::C_PlantedC4, bool);
				MEMBER(n_bomb_site, client::C_PlantedC4, int32_t);
				MEMBER(n_source_soundscape_hash, client::C_PlantedC4, int32_t);
				MEMBER(entity_spotted_state, client::C_PlantedC4, client::EntitySpottedState_t);
				MEMBER(fl_next_glow, client::C_PlantedC4, entity2::GameTime_t);
				MEMBER(fl_next_beep, client::C_PlantedC4, entity2::GameTime_t);
				MEMBER(fl_c4_blow, client::C_PlantedC4, entity2::GameTime_t);
				MEMBER(b_cannot_be_defused, client::C_PlantedC4, bool);
				MEMBER(b_has_exploded, client::C_PlantedC4, bool);
				MEMBER(fl_timer_length, client::C_PlantedC4, float);
				MEMBER(b_being_defused, client::C_PlantedC4, bool);
				MEMBER(b_trigger_warning, client::C_PlantedC4, float);
				MEMBER(b_explode_warning, client::C_PlantedC4, float);
				MEMBER(b_c4_activated, client::C_PlantedC4, bool);
				MEMBER(b_ten_sec_warning, client::C_PlantedC4, bool);
				MEMBER(fl_defuse_length, client::C_PlantedC4, float);
				MEMBER(fl_defuse_count_down, client::C_PlantedC4, entity2::GameTime_t);
				MEMBER(b_bomb_defused, client::C_PlantedC4, bool);
				MEMBER(h_bomb_defuser, client::C_PlantedC4, chandle<client::C_CSPlayerPawn>);
				MEMBER(h_control_panel, client::C_PlantedC4, chandle<client::C_BaseEntity>);
				MEMBER(attribute_manager, client::C_PlantedC4, client::C_AttributeContainer);
				MEMBER(h_defuser_multimeter, client::C_PlantedC4, chandle<client::C_Multimeter>);
				MEMBER(fl_next_radar_flash_time, client::C_PlantedC4, entity2::GameTime_t);
				MEMBER(b_radar_flash, client::C_PlantedC4, bool);
				MEMBER(p_bomb_defuser, client::C_PlantedC4, chandle<client::C_CSPlayerPawn>);
				MEMBER(f_last_defuse_time, client::C_PlantedC4, entity2::GameTime_t);
				MEMBER(p_prediction_owner, client::C_PlantedC4, client::CBasePlayerController*);
				MEMBER(vec_c4_explode_spectate_pos, client::C_PlantedC4, Vector);
				MEMBER(vec_c4_explode_spectate_ang, client::C_PlantedC4, QAngle);
				MEMBER(fl_c4_explode_spectate_duration, client::C_PlantedC4, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PlantedC4

			class C_Precipitation : public client::C_BaseTrigger {
				MEMBER(fl_density, client::C_Precipitation, float);
				MEMBER(fl_particle_inner_dist, client::C_Precipitation, float);
				MEMBER(p_particle_def, client::C_Precipitation, char*);
				MEMBER_ARR(t_particle_precip_trace_timer, client::C_Precipitation, 1, client::TimedEvent);
				MEMBER_ARR(b_active_particle_precip_emitter, client::C_Precipitation, 1, bool);
				MEMBER(b_particle_precip_initialized, client::C_Precipitation, bool);
				MEMBER(b_has_simulated_since_last_scene_object_update, client::C_Precipitation, bool);
				MEMBER(n_available_sheet_sequences_max_index, client::C_Precipitation, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Precipitation

			class C_PhysMagnet : public client::CBaseAnimGraph {
				MEMBER(a_attached_objects_from_server, client::C_PhysMagnet, cutl_vector<int32_t>);
				MEMBER(a_attached_objects, client::C_PhysMagnet, cutl_vector<chandle<client::C_BaseEntity>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PhysMagnet

			class C_ColorCorrection : public client::C_BaseEntity {
				MEMBER(vec_origin, client::C_ColorCorrection, Vector);
				MEMBER(min_falloff, client::C_ColorCorrection, float);
				MEMBER(max_falloff, client::C_ColorCorrection, float);
				MEMBER(fl_fade_in_duration, client::C_ColorCorrection, float);
				MEMBER(fl_fade_out_duration, client::C_ColorCorrection, float);
				MEMBER(fl_max_weight, client::C_ColorCorrection, float);
				MEMBER(fl_cur_weight, client::C_ColorCorrection, float);
				MEMBER_ARR(netlookup_filename, client::C_ColorCorrection, 512, char);
				MEMBER(b_enabled, client::C_ColorCorrection, bool);
				MEMBER(b_master, client::C_ColorCorrection, bool);
				MEMBER(b_client_side, client::C_ColorCorrection, bool);
				MEMBER(b_exclusive, client::C_ColorCorrection, bool);
				MEMBER_ARR(b_enabled_on_client, client::C_ColorCorrection, 1, bool);
				MEMBER_ARR(fl_cur_weight_on_client, client::C_ColorCorrection, 1, float);
				MEMBER_ARR(b_fading_in, client::C_ColorCorrection, 1, bool);
				MEMBER_ARR(fl_fade_start_weight, client::C_ColorCorrection, 1, float);
				MEMBER_ARR(fl_fade_start_time, client::C_ColorCorrection, 1, float);
				MEMBER_ARR(fl_fade_duration, client::C_ColorCorrection, 1, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_ColorCorrection

			class C_WeaponUMP45 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponUMP45

			class CHostageRescueZoneShim : public client::C_BaseTrigger {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHostageRescueZoneShim

			class CLightComponent : public entity2::CEntityComponent {
				MEMBER(_m_p_chain_entity, client::CLightComponent, entity2::CNetworkVarChainer);
				MEMBER(color, client::CLightComponent, Color);
				MEMBER(secondary_color, client::CLightComponent, Color);
				MEMBER(fl_brightness, client::CLightComponent, float);
				MEMBER(fl_brightness_scale, client::CLightComponent, float);
				MEMBER(fl_brightness_mult, client::CLightComponent, float);
				MEMBER(fl_range, client::CLightComponent, float);
				MEMBER(fl_falloff, client::CLightComponent, float);
				MEMBER(fl_attenuation0, client::CLightComponent, float);
				MEMBER(fl_attenuation1, client::CLightComponent, float);
				MEMBER(fl_attenuation2, client::CLightComponent, float);
				MEMBER(fl_theta, client::CLightComponent, float);
				MEMBER(fl_phi, client::CLightComponent, float);
				MEMBER(h_light_cookie, client::CLightComponent, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(n_cascades, client::CLightComponent, int32_t);
				MEMBER(n_cast_shadows, client::CLightComponent, int32_t);
				MEMBER(n_shadow_width, client::CLightComponent, int32_t);
				MEMBER(n_shadow_height, client::CLightComponent, int32_t);
				MEMBER(b_render_diffuse, client::CLightComponent, bool);
				MEMBER(n_render_specular, client::CLightComponent, int32_t);
				MEMBER(b_render_transmissive, client::CLightComponent, bool);
				MEMBER(fl_ortho_light_width, client::CLightComponent, float);
				MEMBER(fl_ortho_light_height, client::CLightComponent, float);
				MEMBER(n_style, client::CLightComponent, int32_t);
				MEMBER(pattern, client::CLightComponent, CUtlString);
				MEMBER(n_cascade_render_static_objects, client::CLightComponent, int32_t);
				MEMBER(fl_shadow_cascade_cross_fade, client::CLightComponent, float);
				MEMBER(fl_shadow_cascade_distance_fade, client::CLightComponent, float);
				MEMBER(fl_shadow_cascade_distance0, client::CLightComponent, float);
				MEMBER(fl_shadow_cascade_distance1, client::CLightComponent, float);
				MEMBER(fl_shadow_cascade_distance2, client::CLightComponent, float);
				MEMBER(fl_shadow_cascade_distance3, client::CLightComponent, float);
				MEMBER(n_shadow_cascade_resolution0, client::CLightComponent, int32_t);
				MEMBER(n_shadow_cascade_resolution1, client::CLightComponent, int32_t);
				MEMBER(n_shadow_cascade_resolution2, client::CLightComponent, int32_t);
				MEMBER(n_shadow_cascade_resolution3, client::CLightComponent, int32_t);
				MEMBER(b_uses_baked_shadowing, client::CLightComponent, bool);
				MEMBER(n_shadow_priority, client::CLightComponent, int32_t);
				MEMBER(n_baked_shadow_index, client::CLightComponent, int32_t);
				MEMBER(b_render_to_cubemaps, client::CLightComponent, bool);
				MEMBER(n_direct_light, client::CLightComponent, int32_t);
				MEMBER(n_indirect_light, client::CLightComponent, int32_t);
				MEMBER(fl_fade_min_dist, client::CLightComponent, float);
				MEMBER(fl_fade_max_dist, client::CLightComponent, float);
				MEMBER(fl_shadow_fade_min_dist, client::CLightComponent, float);
				MEMBER(fl_shadow_fade_max_dist, client::CLightComponent, float);
				MEMBER(b_enabled, client::CLightComponent, bool);
				MEMBER(b_flicker, client::CLightComponent, bool);
				MEMBER(b_precomputed_fields_valid, client::CLightComponent, bool);
				MEMBER(v_precomputed_bounds_mins, client::CLightComponent, Vector);
				MEMBER(v_precomputed_bounds_maxs, client::CLightComponent, Vector);
				MEMBER(v_precomputed_obborigin, client::CLightComponent, Vector);
				MEMBER(v_precomputed_obbangles, client::CLightComponent, QAngle);
				MEMBER(v_precomputed_obbextent, client::CLightComponent, Vector);
				MEMBER(fl_precomputed_max_range, client::CLightComponent, float);
				MEMBER(n_fog_lighting_mode, client::CLightComponent, int32_t);
				MEMBER(fl_fog_contribution_stength, client::CLightComponent, float);
				MEMBER(fl_near_clip_plane, client::CLightComponent, float);
				MEMBER(sky_color, client::CLightComponent, Color);
				MEMBER(fl_sky_intensity, client::CLightComponent, float);
				MEMBER(sky_ambient_bounce, client::CLightComponent, Color);
				MEMBER(b_use_secondary_color, client::CLightComponent, bool);
				MEMBER(b_mixed_shadows, client::CLightComponent, bool);
				MEMBER(fl_light_style_start_time, client::CLightComponent, entity2::GameTime_t);
				MEMBER(fl_capsule_length, client::CLightComponent, float);
				MEMBER(fl_min_roughness, client::CLightComponent, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLightComponent

			class C_TintController : public client::C_BaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_TintController

			class C_WeaponP250 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponP250

			class C_CSGO_CounterTerroristWingmanIntroCamera : public client::C_CSGO_TeamPreviewCamera {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_CounterTerroristWingmanIntroCamera

			class C_WeaponNOVA : public client::C_CSWeaponBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponNOVA

			class CGrenadeTracer : public client::C_BaseModelEntity {
				MEMBER(fl_tracer_duration, client::CGrenadeTracer, float);
				MEMBER(n_type, client::CGrenadeTracer, client::GrenadeType_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGrenadeTracer

			class C_WeaponUSPSilencer : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponUSPSilencer

			class C_PointClientUIDialog : public client::C_BaseClientUIEntity {
				MEMBER(h_activator, client::C_PointClientUIDialog, chandle<client::C_BaseEntity>);
				MEMBER(b_start_enabled, client::C_PointClientUIDialog, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PointClientUIDialog

			class C_PrecipitationBlocker : public client::C_BaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PrecipitationBlocker

			class C_CSGO_CounterTerroristTeamIntroCamera : public client::C_CSGO_TeamPreviewCamera {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_CounterTerroristTeamIntroCamera

			class C_HandleTest : public client::C_BaseEntity {
				MEMBER(handle, client::C_HandleTest, chandle<client::C_BaseEntity>);
				MEMBER(b_send_handle, client::C_HandleTest, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_HandleTest

			class C_EnvWindClientside : public client::C_BaseEntity {
				MEMBER(env_wind_shared, client::C_EnvWindClientside, client::C_EnvWindShared);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvWindClientside

			class C_WeaponMAC10 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponMAC10

			class CSpriteOriented : public client::C_Sprite {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSpriteOriented

			class C_IncendiaryGrenade : public client::C_MolotovGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_IncendiaryGrenade

			class C_WeaponFamas : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponFamas

			class C_FireSprite : public client::C_Sprite {
				MEMBER(vec_move_dir, client::C_FireSprite, Vector);
				MEMBER(b_fade_from_above, client::C_FireSprite, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FireSprite

			class C_EnvParticleGlow : public client::C_ParticleSystem {
				MEMBER(fl_alpha_scale, client::C_EnvParticleGlow, float);
				MEMBER(fl_radius_scale, client::C_EnvParticleGlow, float);
				MEMBER(fl_self_illum_scale, client::C_EnvParticleGlow, float);
				MEMBER(color_tint, client::C_EnvParticleGlow, Color);
				MEMBER(h_texture_override, client::C_EnvParticleGlow, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvParticleGlow

			class C_SoundEventEntity : public client::C_BaseEntity {
				MEMBER(b_start_on_spawn, client::C_SoundEventEntity, bool);
				MEMBER(b_to_local_player, client::C_SoundEventEntity, bool);
				MEMBER(b_stop_on_new, client::C_SoundEventEntity, bool);
				MEMBER(b_save_restore, client::C_SoundEventEntity, bool);
				MEMBER(b_saved_is_playing, client::C_SoundEventEntity, bool);
				MEMBER(fl_saved_elapsed_time, client::C_SoundEventEntity, float);
				MEMBER(isz_source_entity_name, client::C_SoundEventEntity, CUtlSymbolLarge);
				MEMBER(isz_attachment_name, client::C_SoundEventEntity, CUtlSymbolLarge);
				MEMBER(on_guidchanged, client::C_SoundEventEntity, CEntityOutputTemplate<uint64_t>);
				MEMBER(on_sound_finished, client::C_SoundEventEntity, entity2::CEntityIOOutput);
				MEMBER(fl_client_cull_radius, client::C_SoundEventEntity, float);
				MEMBER(isz_sound_name, client::C_SoundEventEntity, CUtlSymbolLarge);
				MEMBER(h_source, client::C_SoundEventEntity, CEntityHandle);
				MEMBER(n_entity_index_selection, client::C_SoundEventEntity, int32_t);
				MEMBER(b_client_side_only, client::C_SoundEventEntity, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundEventEntity

			class C_CSGO_TeamIntroCharacterPosition : public client::C_CSGO_TeamPreviewCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_TeamIntroCharacterPosition

			class C_CSGO_PreviewModelAlias_csgo_item_previewmodel : public client::C_CSGO_PreviewModel {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_PreviewModelAlias_csgo_item_previewmodel

			class C_WeaponM4A1Silencer : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponM4A1Silencer

			class C_Sun : public client::C_BaseModelEntity {
				MEMBER(fx_sssun_flare_effect_index, client::C_Sun, client::ParticleIndex_t);
				MEMBER(fx_sun_flare_effect_index, client::C_Sun, client::ParticleIndex_t);
				MEMBER(fdist_normalize, client::C_Sun, float);
				MEMBER(v_sun_pos, client::C_Sun, Vector);
				MEMBER(v_direction, client::C_Sun, Vector);
				MEMBER(isz_effect_name, client::C_Sun, CUtlSymbolLarge);
				MEMBER(isz_sseffect_name, client::C_Sun, CUtlSymbolLarge);
				MEMBER(clr_overlay, client::C_Sun, Color);
				MEMBER(b_on, client::C_Sun, bool);
				MEMBER(bmax_color, client::C_Sun, bool);
				MEMBER(fl_size, client::C_Sun, float);
				MEMBER(fl_haze_scale, client::C_Sun, float);
				MEMBER(fl_rotation, client::C_Sun, float);
				MEMBER(fl_hdrcolor_scale, client::C_Sun, float);
				MEMBER(fl_alpha_haze, client::C_Sun, float);
				MEMBER(fl_alpha_scale, client::C_Sun, float);
				MEMBER(fl_alpha_hdr, client::C_Sun, float);
				MEMBER(fl_far_zscale, client::C_Sun, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Sun

			class C_CSGO_EndOfMatchLineupEndpoint : public client::C_BaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_EndOfMatchLineupEndpoint

			class C_DynamicProp : public client::C_BreakableProp {
				MEMBER(b_use_hitboxes_for_render_box, client::C_DynamicProp, bool);
				MEMBER(b_use_anim_graph, client::C_DynamicProp, bool);
				MEMBER(p_output_anim_begun, client::C_DynamicProp, entity2::CEntityIOOutput);
				MEMBER(p_output_anim_over, client::C_DynamicProp, entity2::CEntityIOOutput);
				MEMBER(p_output_anim_loop_cycle_over, client::C_DynamicProp, entity2::CEntityIOOutput);
				MEMBER(on_anim_reached_start, client::C_DynamicProp, entity2::CEntityIOOutput);
				MEMBER(on_anim_reached_end, client::C_DynamicProp, entity2::CEntityIOOutput);
				MEMBER(isz_idle_anim, client::C_DynamicProp, CUtlSymbolLarge);
				MEMBER(n_idle_anim_loop_mode, client::C_DynamicProp, client::AnimLoopMode_t);
				MEMBER(b_randomize_cycle, client::C_DynamicProp, bool);
				MEMBER(b_start_disabled, client::C_DynamicProp, bool);
				MEMBER(b_fired_start_end_output, client::C_DynamicProp, bool);
				MEMBER(b_force_npc_exclude, client::C_DynamicProp, bool);
				MEMBER(b_create_non_solid, client::C_DynamicProp, bool);
				MEMBER(b_is_override_prop, client::C_DynamicProp, bool);
				MEMBER(i_initial_glow_state, client::C_DynamicProp, int32_t);
				MEMBER(n_glow_range, client::C_DynamicProp, int32_t);
				MEMBER(n_glow_range_min, client::C_DynamicProp, int32_t);
				MEMBER(glow_color, client::C_DynamicProp, Color);
				MEMBER(n_glow_team, client::C_DynamicProp, int32_t);
				MEMBER(i_cached_frame_count, client::C_DynamicProp, int32_t);
				MEMBER(vec_cached_render_mins, client::C_DynamicProp, Vector);
				MEMBER(vec_cached_render_maxs, client::C_DynamicProp, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_DynamicProp

			class CHitboxComponent : public entity2::CEntityComponent {
				MEMBER_ARR(bv_disabled_hit_groups, client::CHitboxComponent, 1, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHitboxComponent

			class C_BulletHitModel : public client::CBaseAnimGraph {
				MEMBER(mat_local, client::C_BulletHitModel, matrix3x4_t);
				MEMBER(i_bone_index, client::C_BulletHitModel, int32_t);
				MEMBER(h_player_parent, client::C_BulletHitModel, chandle<client::C_BaseEntity>);
				MEMBER(b_is_hit, client::C_BulletHitModel, bool);
				MEMBER(fl_time_created, client::C_BulletHitModel, float);
				MEMBER(vec_start_pos, client::C_BulletHitModel, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BulletHitModel

			class C_MapVetoPickController : public client::C_BaseEntity {
				MEMBER(n_draft_type, client::C_MapVetoPickController, int32_t);
				MEMBER(n_team_winning_coin_toss, client::C_MapVetoPickController, int32_t);
				MEMBER_ARR(n_team_with_first_choice, client::C_MapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_vote_map_ids_list, client::C_MapVetoPickController, 7, int32_t);
				MEMBER_ARR(n_account_ids, client::C_MapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_map_id0, client::C_MapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_map_id1, client::C_MapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_map_id2, client::C_MapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_map_id3, client::C_MapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_map_id4, client::C_MapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_map_id5, client::C_MapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_starting_side0, client::C_MapVetoPickController, 64, int32_t);
				MEMBER(n_current_phase, client::C_MapVetoPickController, int32_t);
				MEMBER(n_phase_start_tick, client::C_MapVetoPickController, int32_t);
				MEMBER(n_phase_duration_ticks, client::C_MapVetoPickController, int32_t);
				MEMBER(n_post_data_update_tick, client::C_MapVetoPickController, int32_t);
				MEMBER(b_disabled_hud, client::C_MapVetoPickController, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_MapVetoPickController

			class C_FireCrackerBlast : public client::C_Inferno {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FireCrackerBlast

			class C_WeaponMP9 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponMP9

			class C_PointCommentaryNode : public client::CBaseAnimGraph {
				MEMBER(b_active, client::C_PointCommentaryNode, bool);
				MEMBER(b_was_active, client::C_PointCommentaryNode, bool);
				MEMBER(fl_end_time, client::C_PointCommentaryNode, entity2::GameTime_t);
				MEMBER(fl_start_time, client::C_PointCommentaryNode, entity2::GameTime_t);
				MEMBER(fl_start_time_in_commentary, client::C_PointCommentaryNode, float);
				MEMBER(isz_commentary_file, client::C_PointCommentaryNode, CUtlSymbolLarge);
				MEMBER(isz_title, client::C_PointCommentaryNode, CUtlSymbolLarge);
				MEMBER(isz_speakers, client::C_PointCommentaryNode, CUtlSymbolLarge);
				MEMBER(i_node_number, client::C_PointCommentaryNode, int32_t);
				MEMBER(i_node_number_max, client::C_PointCommentaryNode, int32_t);
				MEMBER(b_listened_to, client::C_PointCommentaryNode, bool);
				MEMBER(h_view_position, client::C_PointCommentaryNode, chandle<client::C_BaseEntity>);
				MEMBER(b_restart_after_restore, client::C_PointCommentaryNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PointCommentaryNode

			class C_AK47 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_AK47

			class C_SensorGrenade : public client::C_BaseCSGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SensorGrenade

			class C_FuncLadder : public client::C_BaseModelEntity {
				MEMBER(vec_ladder_dir, client::C_FuncLadder, Vector);
				MEMBER(dismounts, client::C_FuncLadder, cutl_vector<chandle<client::C_InfoLadderDismount>>);
				MEMBER(vec_local_top, client::C_FuncLadder, Vector);
				MEMBER(vec_player_mount_position_top, client::C_FuncLadder, Vector);
				MEMBER(vec_player_mount_position_bottom, client::C_FuncLadder, Vector);
				MEMBER(fl_auto_ride_speed, client::C_FuncLadder, float);
				MEMBER(b_disabled, client::C_FuncLadder, bool);
				MEMBER(b_fake_ladder, client::C_FuncLadder, bool);
				MEMBER(b_has_slack, client::C_FuncLadder, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FuncLadder

			class C_CSGO_PreviewModel : public client::C_BaseFlex {
				MEMBER(animgraph, client::C_CSGO_PreviewModel, CUtlString);
				MEMBER(animgraph_character_mode_string, client::C_CSGO_PreviewModel, CGlobalSymbol);
				MEMBER(default_anim, client::C_CSGO_PreviewModel, CUtlString);
				MEMBER(n_default_anim_loop_mode, client::C_CSGO_PreviewModel, client::AnimLoopMode_t);
				MEMBER(fl_initial_model_scale, client::C_CSGO_PreviewModel, float);
				MEMBER(s_initial_weapon_state, client::C_CSGO_PreviewModel, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_PreviewModel

			class C_SoundOpvarSetOBBEntity : public client::C_SoundOpvarSetAABBEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundOpvarSetOBBEntity

			class C_FuncElectrifiedVolume : public client::C_FuncBrush {
				MEMBER(n_ambient_effect, client::C_FuncElectrifiedVolume, client::ParticleIndex_t);
				MEMBER(effect_name, client::C_FuncElectrifiedVolume, CUtlSymbolLarge);
				MEMBER(b_state, client::C_FuncElectrifiedVolume, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FuncElectrifiedVolume

			class C_BaseGrenade : public client::C_BaseFlex {
				MEMBER(b_has_warned_ai, client::C_BaseGrenade, bool);
				MEMBER(b_is_smoke_grenade, client::C_BaseGrenade, bool);
				MEMBER(b_is_live, client::C_BaseGrenade, bool);
				MEMBER(dmg_radius, client::C_BaseGrenade, float);
				MEMBER(fl_detonate_time, client::C_BaseGrenade, entity2::GameTime_t);
				MEMBER(fl_warn_aitime, client::C_BaseGrenade, float);
				MEMBER(fl_damage, client::C_BaseGrenade, float);
				MEMBER(isz_bounce_sound, client::C_BaseGrenade, CUtlSymbolLarge);
				MEMBER(explosion_sound, client::C_BaseGrenade, CUtlString);
				MEMBER(h_thrower, client::C_BaseGrenade, chandle<client::C_CSPlayerPawn>);
				MEMBER(fl_next_attack, client::C_BaseGrenade, entity2::GameTime_t);
				MEMBER(h_original_thrower, client::C_BaseGrenade, chandle<client::C_CSPlayerPawn>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseGrenade

			class C_EnvVolumetricFogController : public client::C_BaseEntity {
				MEMBER(fl_scattering, client::C_EnvVolumetricFogController, float);
				MEMBER(fl_anisotropy, client::C_EnvVolumetricFogController, float);
				MEMBER(fl_fade_speed, client::C_EnvVolumetricFogController, float);
				MEMBER(fl_draw_distance, client::C_EnvVolumetricFogController, float);
				MEMBER(fl_fade_in_start, client::C_EnvVolumetricFogController, float);
				MEMBER(fl_fade_in_end, client::C_EnvVolumetricFogController, float);
				MEMBER(fl_indirect_strength, client::C_EnvVolumetricFogController, float);
				MEMBER(n_volume_depth, client::C_EnvVolumetricFogController, int32_t);
				MEMBER(f_first_volume_slice_thickness, client::C_EnvVolumetricFogController, float);
				MEMBER(n_indirect_texture_dim_x, client::C_EnvVolumetricFogController, int32_t);
				MEMBER(n_indirect_texture_dim_y, client::C_EnvVolumetricFogController, int32_t);
				MEMBER(n_indirect_texture_dim_z, client::C_EnvVolumetricFogController, int32_t);
				MEMBER(v_box_mins, client::C_EnvVolumetricFogController, Vector);
				MEMBER(v_box_maxs, client::C_EnvVolumetricFogController, Vector);
				MEMBER(b_active, client::C_EnvVolumetricFogController, bool);
				MEMBER(fl_start_aniso_time, client::C_EnvVolumetricFogController, entity2::GameTime_t);
				MEMBER(fl_start_scatter_time, client::C_EnvVolumetricFogController, entity2::GameTime_t);
				MEMBER(fl_start_draw_distance_time, client::C_EnvVolumetricFogController, entity2::GameTime_t);
				MEMBER(fl_start_anisotropy, client::C_EnvVolumetricFogController, float);
				MEMBER(fl_start_scattering, client::C_EnvVolumetricFogController, float);
				MEMBER(fl_start_draw_distance, client::C_EnvVolumetricFogController, float);
				MEMBER(fl_default_anisotropy, client::C_EnvVolumetricFogController, float);
				MEMBER(fl_default_scattering, client::C_EnvVolumetricFogController, float);
				MEMBER(fl_default_draw_distance, client::C_EnvVolumetricFogController, float);
				MEMBER(b_start_disabled, client::C_EnvVolumetricFogController, bool);
				MEMBER(b_enable_indirect, client::C_EnvVolumetricFogController, bool);
				MEMBER(b_indirect_use_lpvs, client::C_EnvVolumetricFogController, bool);
				MEMBER(b_is_master, client::C_EnvVolumetricFogController, bool);
				MEMBER(h_fog_indirect_texture, client::C_EnvVolumetricFogController, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(n_force_refresh_count, client::C_EnvVolumetricFogController, int32_t);
				MEMBER(f_noise_speed, client::C_EnvVolumetricFogController, float);
				MEMBER(f_noise_strength, client::C_EnvVolumetricFogController, float);
				MEMBER(v_noise_scale, client::C_EnvVolumetricFogController, Vector);
				MEMBER(b_first_time, client::C_EnvVolumetricFogController, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvVolumetricFogController

			class C_WeaponTec9 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponTec9

			class C_Breakable : public client::C_BaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Breakable

			class C_SoundAreaEntityBase : public client::C_BaseEntity {
				MEMBER(b_disabled, client::C_SoundAreaEntityBase, bool);
				MEMBER(b_was_enabled, client::C_SoundAreaEntityBase, bool);
				MEMBER(isz_sound_area_type, client::C_SoundAreaEntityBase, CUtlSymbolLarge);
				MEMBER(v_pos, client::C_SoundAreaEntityBase, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundAreaEntityBase

			class CCSClientPointScriptEntity : public client::CCSPointScriptEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSClientPointScriptEntity

			class C_CS2WeaponModuleBase : public client::CBaseAnimGraph {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CS2WeaponModuleBase

			class C_InfoVisibilityBox : public client::C_BaseEntity {
				MEMBER(n_mode, client::C_InfoVisibilityBox, int32_t);
				MEMBER(v_box_size, client::C_InfoVisibilityBox, Vector);
				MEMBER(b_enabled, client::C_InfoVisibilityBox, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_InfoVisibilityBox

			class C_BaseViewModel : public client::CBaseAnimGraph {
				MEMBER(vec_last_facing, client::C_BaseViewModel, Vector);
				MEMBER(n_view_model_index, client::C_BaseViewModel, uint32_t);
				MEMBER(n_animation_parity, client::C_BaseViewModel, uint32_t);
				MEMBER(fl_animation_start_time, client::C_BaseViewModel, float);
				MEMBER(h_weapon, client::C_BaseViewModel, chandle<client::C_BasePlayerWeapon>);
				MEMBER(s_vmname, client::C_BaseViewModel, CUtlSymbolLarge);
				MEMBER(s_animation_prefix, client::C_BaseViewModel, CUtlSymbolLarge);
				MEMBER(i_camera_attachment, client::C_BaseViewModel, modellib::AttachmentHandle_t);
				MEMBER(vec_last_camera_angles, client::C_BaseViewModel, QAngle);
				MEMBER(previous_elapsed_duration, client::C_BaseViewModel, float);
				MEMBER(previous_cycle, client::C_BaseViewModel, float);
				MEMBER(n_old_animation_parity, client::C_BaseViewModel, int32_t);
				MEMBER(h_old_layer_sequence, client::C_BaseViewModel, animationsystem::HSequence);
				MEMBER(old_layer, client::C_BaseViewModel, int32_t);
				MEMBER(old_layer_start_time, client::C_BaseViewModel, float);
				MEMBER(h_control_panel, client::C_BaseViewModel, chandle<client::C_BaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseViewModel

			class C_BaseClientUIEntity : public client::C_BaseModelEntity {
				MEMBER(b_enabled, client::C_BaseClientUIEntity, bool);
				MEMBER(dialog_xmlname, client::C_BaseClientUIEntity, CUtlSymbolLarge);
				MEMBER(panel_class_name, client::C_BaseClientUIEntity, CUtlSymbolLarge);
				MEMBER(panel_id, client::C_BaseClientUIEntity, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BaseClientUIEntity

			class C_CSWeaponBase : public client::C_BasePlayerWeapon {
				MEMBER(fl_fire_sequence_start_time, client::C_CSWeaponBase, float);
				MEMBER(n_fire_sequence_start_time_change, client::C_CSWeaponBase, int32_t);
				MEMBER(n_fire_sequence_start_time_ack, client::C_CSWeaponBase, int32_t);
				MEMBER(e_player_fire_event, client::C_CSWeaponBase, client::PlayerAnimEvent_t);
				MEMBER(e_player_fire_event_attack_type, client::C_CSWeaponBase, client::WeaponAttackType_t);
				MEMBER(seq_idle, client::C_CSWeaponBase, animationsystem::HSequence);
				MEMBER(seq_fire_primary, client::C_CSWeaponBase, animationsystem::HSequence);
				MEMBER(seq_fire_secondary, client::C_CSWeaponBase, animationsystem::HSequence);
				MEMBER(third_person_fire_sequences, client::C_CSWeaponBase, cutl_vector<animationsystem::HSequence>);
				MEMBER(h_current_third_person_sequence, client::C_CSWeaponBase, animationsystem::HSequence);
				MEMBER(n_silencer_bone_index, client::C_CSWeaponBase, int32_t);
				MEMBER_ARR(third_person_sequences, client::C_CSWeaponBase, 7, animationsystem::HSequence);
				MEMBER(client_previous_weapon_state, client::C_CSWeaponBase, client::CSWeaponState_t);
				MEMBER(i_state, client::C_CSWeaponBase, client::CSWeaponState_t);
				MEMBER(fl_crosshair_distance, client::C_CSWeaponBase, float);
				MEMBER(i_ammo_last_check, client::C_CSWeaponBase, int32_t);
				MEMBER(i_alpha, client::C_CSWeaponBase, int32_t);
				MEMBER(i_scope_texture_id, client::C_CSWeaponBase, int32_t);
				MEMBER(i_crosshair_texture_id, client::C_CSWeaponBase, int32_t);
				MEMBER(fl_gun_accuracy_position_deprecated, client::C_CSWeaponBase, float);
				MEMBER(n_last_empty_sound_cmd_num, client::C_CSWeaponBase, int32_t);
				MEMBER(n_view_model_index, client::C_CSWeaponBase, uint32_t);
				MEMBER(b_reloads_with_clips, client::C_CSWeaponBase, bool);
				MEMBER(fl_time_weapon_idle, client::C_CSWeaponBase, entity2::GameTime_t);
				MEMBER(b_fire_on_empty, client::C_CSWeaponBase, bool);
				MEMBER(on_player_pickup, client::C_CSWeaponBase, entity2::CEntityIOOutput);
				MEMBER(weapon_mode, client::C_CSWeaponBase, client::CSWeaponMode);
				MEMBER(fl_turning_inaccuracy_delta, client::C_CSWeaponBase, float);
				MEMBER(vec_turning_inaccuracy_eye_dir_last, client::C_CSWeaponBase, Vector);
				MEMBER(fl_turning_inaccuracy, client::C_CSWeaponBase, float);
				MEMBER(f_accuracy_penalty, client::C_CSWeaponBase, float);
				MEMBER(fl_last_accuracy_update_time, client::C_CSWeaponBase, entity2::GameTime_t);
				MEMBER(f_accuracy_smoothed_for_zoom, client::C_CSWeaponBase, float);
				MEMBER(f_scope_zoom_end_time, client::C_CSWeaponBase, entity2::GameTime_t);
				MEMBER(i_recoil_index, client::C_CSWeaponBase, int32_t);
				MEMBER(fl_recoil_index, client::C_CSWeaponBase, float);
				MEMBER(b_burst_mode, client::C_CSWeaponBase, bool);
				MEMBER(fl_last_burst_mode_change_time, client::C_CSWeaponBase, entity2::GameTime_t);
				MEMBER(n_postpone_fire_ready_ticks, client::C_CSWeaponBase, entity2::GameTick_t);
				MEMBER(fl_postpone_fire_ready_frac, client::C_CSWeaponBase, float);
				MEMBER(b_in_reload, client::C_CSWeaponBase, bool);
				MEMBER(b_reload_visually_complete, client::C_CSWeaponBase, bool);
				MEMBER(fl_dropped_at_time, client::C_CSWeaponBase, entity2::GameTime_t);
				MEMBER(b_is_hauled_back, client::C_CSWeaponBase, bool);
				MEMBER(b_silencer_on, client::C_CSWeaponBase, bool);
				MEMBER(fl_time_silencer_switch_complete, client::C_CSWeaponBase, entity2::GameTime_t);
				MEMBER(i_original_team_number, client::C_CSWeaponBase, int32_t);
				MEMBER(i_most_recent_team_number, client::C_CSWeaponBase, int32_t);
				MEMBER(b_dropped_near_buy_zone, client::C_CSWeaponBase, bool);
				MEMBER(fl_next_attack_render_time_offset, client::C_CSWeaponBase, float);
				MEMBER(b_clear_weapon_identifying_ugc, client::C_CSWeaponBase, bool);
				MEMBER(b_visuals_data_set, client::C_CSWeaponBase, bool);
				MEMBER(b_old_first_person_spectated_state, client::C_CSWeaponBase, bool);
				MEMBER(b_uiweapon, client::C_CSWeaponBase, bool);
				MEMBER(n_custom_econ_reload_event_id, client::C_CSWeaponBase, int32_t);
				MEMBER(next_prev_owner_use_time, client::C_CSWeaponBase, entity2::GameTime_t);
				MEMBER(h_prev_owner, client::C_CSWeaponBase, chandle<client::C_CSPlayerPawn>);
				MEMBER(n_drop_tick, client::C_CSWeaponBase, entity2::GameTick_t);
				MEMBER(donated, client::C_CSWeaponBase, bool);
				MEMBER(f_last_shot_time, client::C_CSWeaponBase, entity2::GameTime_t);
				MEMBER(b_was_owned_by_ct, client::C_CSWeaponBase, bool);
				MEMBER(b_was_owned_by_terrorist, client::C_CSWeaponBase, bool);
				MEMBER(gun_heat, client::C_CSWeaponBase, float);
				MEMBER(smoke_attachments, client::C_CSWeaponBase, uint32_t);
				MEMBER(last_smoke_time, client::C_CSWeaponBase, entity2::GameTime_t);
				MEMBER(fl_next_client_fire_bullet_time, client::C_CSWeaponBase, float);
				MEMBER(fl_next_client_fire_bullet_time__repredict, client::C_CSWeaponBase, float);
				MEMBER(iron_sight_controller, client::C_CSWeaponBase, client::C_IronSightController);
				MEMBER(i_iron_sight_mode, client::C_CSWeaponBase, int32_t);
				MEMBER(fl_last_lostrace_failure_time, client::C_CSWeaponBase, entity2::GameTime_t);
				MEMBER(i_num_empty_attacks, client::C_CSWeaponBase, int32_t);
				MEMBER(fl_last_mag_drop_request_time, client::C_CSWeaponBase, entity2::GameTime_t);
				MEMBER(fl_wat_tick_offset, client::C_CSWeaponBase, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSWeaponBase

			class C_FuncTrackTrain : public client::C_BaseModelEntity {
				MEMBER(n_long_axis, client::C_FuncTrackTrain, int32_t);
				MEMBER(fl_radius, client::C_FuncTrackTrain, float);
				MEMBER(fl_line_length, client::C_FuncTrackTrain, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FuncTrackTrain

			class CBaseProp : public client::CBaseAnimGraph {
				MEMBER(b_model_overrode_block_los, client::CBaseProp, bool);
				MEMBER(i_shape_type, client::CBaseProp, int32_t);
				MEMBER(b_conform_to_collision_bounds, client::CBaseProp, bool);
				MEMBER(m_preferred_catch_transform, client::CBaseProp, matrix3x4_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseProp

			class C_WeaponHKP2000 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponHKP2000

			class C_WeaponXM1014 : public client::C_CSWeaponBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponXM1014

			class C_MapPreviewParticleSystem : public client::C_ParticleSystem {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_MapPreviewParticleSystem

			class CBreachCharge : public client::C_CSWeaponBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBreachCharge

			class C_EnvCubemap : public client::C_BaseEntity {
				MEMBER(entity_h_cubemap_texture, client::C_EnvCubemap, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_b_custom_cubemap_texture, client::C_EnvCubemap, bool);
				MEMBER(entity_fl_influence_radius, client::C_EnvCubemap, float);
				MEMBER(entity_v_box_project_mins, client::C_EnvCubemap, Vector);
				MEMBER(entity_v_box_project_maxs, client::C_EnvCubemap, Vector);
				MEMBER(entity_b_moveable, client::C_EnvCubemap, bool);
				MEMBER(entity_n_handshake, client::C_EnvCubemap, int32_t);
				MEMBER(entity_n_env_cube_map_array_index, client::C_EnvCubemap, int32_t);
				MEMBER(entity_n_priority, client::C_EnvCubemap, int32_t);
				MEMBER(entity_fl_edge_fade_dist, client::C_EnvCubemap, float);
				MEMBER(entity_v_edge_fade_dists, client::C_EnvCubemap, Vector);
				MEMBER(entity_fl_diffuse_scale, client::C_EnvCubemap, float);
				MEMBER(entity_b_start_disabled, client::C_EnvCubemap, bool);
				MEMBER(entity_b_default_env_map, client::C_EnvCubemap, bool);
				MEMBER(entity_b_default_spec_env_map, client::C_EnvCubemap, bool);
				MEMBER(entity_b_indoor_cube_map, client::C_EnvCubemap, bool);
				MEMBER(entity_b_copy_diffuse_from_default_cubemap, client::C_EnvCubemap, bool);
				MEMBER(entity_b_enabled, client::C_EnvCubemap, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvCubemap

			class C_PredictedViewModel : public client::C_BaseViewModel {
				MEMBER(v_predicted_lag_offset, client::C_PredictedViewModel, Vector);
				MEMBER(target_speed, client::C_PredictedViewModel, QAngle);
				MEMBER(current_speed, client::C_PredictedViewModel, QAngle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PredictedViewModel

			class C_WeaponBizon : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponBizon

			class C_PortraitWorldCallbackHandler : public client::C_BaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PortraitWorldCallbackHandler

			class C_PointValueRemapper : public client::C_BaseEntity {
				MEMBER(b_disabled, client::C_PointValueRemapper, bool);
				MEMBER(b_disabled_old, client::C_PointValueRemapper, bool);
				MEMBER(b_update_on_client, client::C_PointValueRemapper, bool);
				MEMBER(n_input_type, client::C_PointValueRemapper, client::ValueRemapperInputType_t);
				MEMBER(h_remap_line_start, client::C_PointValueRemapper, chandle<client::C_BaseEntity>);
				MEMBER(h_remap_line_end, client::C_PointValueRemapper, chandle<client::C_BaseEntity>);
				MEMBER(fl_maximum_change_per_second, client::C_PointValueRemapper, float);
				MEMBER(fl_disengage_distance, client::C_PointValueRemapper, float);
				MEMBER(fl_engage_distance, client::C_PointValueRemapper, float);
				MEMBER(b_requires_use_key, client::C_PointValueRemapper, bool);
				MEMBER(n_output_type, client::C_PointValueRemapper, client::ValueRemapperOutputType_t);
				MEMBER(h_output_entities, client::C_PointValueRemapper, C_NetworkUtlVectorBase<chandle<client::C_BaseEntity>>);
				MEMBER(n_haptics_type, client::C_PointValueRemapper, client::ValueRemapperHapticsType_t);
				MEMBER(n_momentum_type, client::C_PointValueRemapper, client::ValueRemapperMomentumType_t);
				MEMBER(fl_momentum_modifier, client::C_PointValueRemapper, float);
				MEMBER(fl_snap_value, client::C_PointValueRemapper, float);
				MEMBER(fl_current_momentum, client::C_PointValueRemapper, float);
				MEMBER(n_ratchet_type, client::C_PointValueRemapper, client::ValueRemapperRatchetType_t);
				MEMBER(fl_ratchet_offset, client::C_PointValueRemapper, float);
				MEMBER(fl_input_offset, client::C_PointValueRemapper, float);
				MEMBER(b_engaged, client::C_PointValueRemapper, bool);
				MEMBER(b_first_update, client::C_PointValueRemapper, bool);
				MEMBER(fl_previous_value, client::C_PointValueRemapper, float);
				MEMBER(fl_previous_update_tick_time, client::C_PointValueRemapper, entity2::GameTime_t);
				MEMBER(vec_previous_test_point, client::C_PointValueRemapper, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PointValueRemapper

			class C_EnvCubemapBox : public client::C_EnvCubemap {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvCubemapBox

			class C_CSGO_EndOfMatchCamera : public client::C_CSGO_TeamPreviewCamera {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_EndOfMatchCamera

			class C_SoundOpvarSetPointBase : public client::C_BaseEntity {
				MEMBER(isz_stack_name, client::C_SoundOpvarSetPointBase, CUtlSymbolLarge);
				MEMBER(isz_operator_name, client::C_SoundOpvarSetPointBase, CUtlSymbolLarge);
				MEMBER(isz_opvar_name, client::C_SoundOpvarSetPointBase, CUtlSymbolLarge);
				MEMBER(i_opvar_index, client::C_SoundOpvarSetPointBase, int32_t);
				MEMBER(b_use_auto_compare, client::C_SoundOpvarSetPointBase, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_SoundOpvarSetPointBase

			class C_PhysBox : public client::C_Breakable {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PhysBox

			class C_WeaponTaser : public client::C_CSWeaponBaseGun {
				MEMBER(f_fire_time, client::C_WeaponTaser, entity2::GameTime_t);
				MEMBER(n_last_attack_tick, client::C_WeaponTaser, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponTaser

			class C_LightEntity : public client::C_BaseModelEntity {
				MEMBER(clight_component, client::C_LightEntity, client::CLightComponent*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_LightEntity

			class C_Fists : public client::C_CSWeaponBase {
				MEMBER(b_playing_uninterruptable_act, client::C_Fists, bool);
				MEMBER(n_uninterruptable_activity, client::C_Fists, client::PlayerAnimEvent_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Fists

			class C_PhysicsPropMultiplayer : public client::C_PhysicsProp {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PhysicsPropMultiplayer

			class CInfoDynamicShadowHintBox : public client::CInfoDynamicShadowHint {
				MEMBER(v_box_mins, client::CInfoDynamicShadowHintBox, Vector);
				MEMBER(v_box_maxs, client::CInfoDynamicShadowHintBox, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoDynamicShadowHintBox

			class C_EnvCubemapFog : public client::C_BaseEntity {
				MEMBER(fl_end_distance, client::C_EnvCubemapFog, float);
				MEMBER(fl_start_distance, client::C_EnvCubemapFog, float);
				MEMBER(fl_fog_falloff_exponent, client::C_EnvCubemapFog, float);
				MEMBER(b_height_fog_enabled, client::C_EnvCubemapFog, bool);
				MEMBER(fl_fog_height_width, client::C_EnvCubemapFog, float);
				MEMBER(fl_fog_height_end, client::C_EnvCubemapFog, float);
				MEMBER(fl_fog_height_start, client::C_EnvCubemapFog, float);
				MEMBER(fl_fog_height_exponent, client::C_EnvCubemapFog, float);
				MEMBER(fl_lodbias, client::C_EnvCubemapFog, float);
				MEMBER(b_active, client::C_EnvCubemapFog, bool);
				MEMBER(b_start_disabled, client::C_EnvCubemapFog, bool);
				MEMBER(fl_fog_max_opacity, client::C_EnvCubemapFog, float);
				MEMBER(n_cubemap_source_type, client::C_EnvCubemapFog, int32_t);
				MEMBER(h_sky_material, client::C_EnvCubemapFog, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(isz_sky_entity, client::C_EnvCubemapFog, CUtlSymbolLarge);
				MEMBER(h_fog_cubemap_texture, client::C_EnvCubemapFog, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(b_has_height_fog_end, client::C_EnvCubemapFog, bool);
				MEMBER(b_first_time, client::C_EnvCubemapFog, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvCubemapFog

			class C_ShatterGlassShardPhysics : public client::C_PhysicsProp {
				MEMBER(shard_desc, client::C_ShatterGlassShardPhysics, client::shard_model_desc_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_ShatterGlassShardPhysics

			class C_WeaponElite : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponElite

			class C_PlayerVisibility : public client::C_BaseEntity {
				MEMBER(fl_visibility_strength, client::C_PlayerVisibility, float);
				MEMBER(fl_fog_distance_multiplier, client::C_PlayerVisibility, float);
				MEMBER(fl_fog_max_density_multiplier, client::C_PlayerVisibility, float);
				MEMBER(fl_fade_time, client::C_PlayerVisibility, float);
				MEMBER(b_start_disabled, client::C_PlayerVisibility, bool);
				MEMBER(b_is_enabled, client::C_PlayerVisibility, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PlayerVisibility

			class CPropDataComponent : public entity2::CEntityComponent {
				MEMBER(fl_dmg_mod_bullet, client::CPropDataComponent, float);
				MEMBER(fl_dmg_mod_club, client::CPropDataComponent, float);
				MEMBER(fl_dmg_mod_explosive, client::CPropDataComponent, float);
				MEMBER(fl_dmg_mod_fire, client::CPropDataComponent, float);
				MEMBER(isz_physics_damage_table_name, client::CPropDataComponent, CUtlSymbolLarge);
				MEMBER(isz_base_prop_data, client::CPropDataComponent, CUtlSymbolLarge);
				MEMBER(n_interactions, client::CPropDataComponent, int32_t);
				MEMBER(b_spawn_motion_disabled, client::CPropDataComponent, bool);
				MEMBER(n_disable_take_physics_damage_spawn_flag, client::CPropDataComponent, int32_t);
				MEMBER(n_motion_disabled_spawn_flag, client::CPropDataComponent, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPropDataComponent

			class C_WeaponSCAR20 : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponSCAR20

			class C_DecoyGrenade : public client::C_BaseCSGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_DecoyGrenade

			class C_LocalTempEntity : public client::CBaseAnimGraph {
				MEMBER(flags, client::C_LocalTempEntity, int32_t);
				MEMBER(die, client::C_LocalTempEntity, entity2::GameTime_t);
				MEMBER(fl_frame_max, client::C_LocalTempEntity, float);
				MEMBER(x, client::C_LocalTempEntity, float);
				MEMBER(y, client::C_LocalTempEntity, float);
				MEMBER(fade_speed, client::C_LocalTempEntity, float);
				MEMBER(bounce_factor, client::C_LocalTempEntity, float);
				MEMBER(hit_sound, client::C_LocalTempEntity, int32_t);
				MEMBER(priority, client::C_LocalTempEntity, int32_t);
				MEMBER(tent_offset, client::C_LocalTempEntity, Vector);
				MEMBER(vec_temp_ent_ang_velocity, client::C_LocalTempEntity, QAngle);
				MEMBER(tempent_renderamt, client::C_LocalTempEntity, int32_t);
				MEMBER(vec_normal, client::C_LocalTempEntity, Vector);
				MEMBER(fl_sprite_scale, client::C_LocalTempEntity, float);
				MEMBER(n_flicker_frame, client::C_LocalTempEntity, int32_t);
				MEMBER(fl_frame_rate, client::C_LocalTempEntity, float);
				MEMBER(fl_frame, client::C_LocalTempEntity, float);
				MEMBER(psz_impact_effect, client::C_LocalTempEntity, char*);
				MEMBER(psz_particle_effect, client::C_LocalTempEntity, char*);
				MEMBER(b_particle_collision, client::C_LocalTempEntity, bool);
				MEMBER(i_last_collision_frame, client::C_LocalTempEntity, int32_t);
				MEMBER(v_last_collision_origin, client::C_LocalTempEntity, Vector);
				MEMBER(vec_temp_ent_velocity, client::C_LocalTempEntity, Vector);
				MEMBER(vec_prev_abs_origin, client::C_LocalTempEntity, Vector);
				MEMBER(vec_temp_ent_acceleration, client::C_LocalTempEntity, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_LocalTempEntity

			class C_MolotovProjectile : public client::C_BaseCSGrenadeProjectile {
				MEMBER(b_is_inc_grenade, client::C_MolotovProjectile, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_MolotovProjectile

			class C_LightEnvironmentEntity : public client::C_LightDirectionalEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_LightEnvironmentEntity

			class CInfoOffscreenPanoramaTexture : public client::C_PointEntity {
				MEMBER(b_disabled, client::CInfoOffscreenPanoramaTexture, bool);
				MEMBER(n_resolution_x, client::CInfoOffscreenPanoramaTexture, int32_t);
				MEMBER(n_resolution_y, client::CInfoOffscreenPanoramaTexture, int32_t);
				MEMBER(sz_layout_file_name, client::CInfoOffscreenPanoramaTexture, CUtlSymbolLarge);
				MEMBER(render_attr_name, client::CInfoOffscreenPanoramaTexture, CUtlSymbolLarge);
				MEMBER(target_entities, client::CInfoOffscreenPanoramaTexture, C_NetworkUtlVectorBase<chandle<client::C_BaseModelEntity>>);
				MEMBER(n_target_change_count, client::CInfoOffscreenPanoramaTexture, int32_t);
				MEMBER(vec_cssclasses, client::CInfoOffscreenPanoramaTexture, C_NetworkUtlVectorBase<CUtlSymbolLarge>);
				MEMBER(b_check_cssclasses, client::CInfoOffscreenPanoramaTexture, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoOffscreenPanoramaTexture

			class C_DynamicLight : public client::C_BaseModelEntity {
				MEMBER(flags, client::C_DynamicLight, uint8_t);
				MEMBER(light_style, client::C_DynamicLight, uint8_t);
				MEMBER(radius, client::C_DynamicLight, float);
				MEMBER(exponent, client::C_DynamicLight, int32_t);
				MEMBER(inner_angle, client::C_DynamicLight, float);
				MEMBER(outer_angle, client::C_DynamicLight, float);
				MEMBER(spot_radius, client::C_DynamicLight, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_DynamicLight

			class C_TriggerVolume : public client::C_BaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_TriggerVolume

			class C_StattrakModule : public client::C_CS2WeaponModuleBase {
				MEMBER(b_knife, client::C_StattrakModule, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_StattrakModule

			class C_PhysicsProp : public client::C_BreakableProp {
				MEMBER(b_awake, client::C_PhysicsProp, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PhysicsProp

			class C_Beam : public client::C_BaseModelEntity {
				MEMBER(fl_frame_rate, client::C_Beam, float);
				MEMBER(fl_hdrcolor_scale, client::C_Beam, float);
				MEMBER(fl_fire_time, client::C_Beam, entity2::GameTime_t);
				MEMBER(fl_damage, client::C_Beam, float);
				MEMBER(n_num_beam_ents, client::C_Beam, uint8_t);
				MEMBER(query_handle_halo, client::C_Beam, int32_t);
				MEMBER(h_base_material, client::C_Beam, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(n_halo_index, client::C_Beam, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(n_beam_type, client::C_Beam, client::BeamType_t);
				MEMBER(n_beam_flags, client::C_Beam, uint32_t);
				MEMBER_ARR(h_attach_entity, client::C_Beam, 10, chandle<client::C_BaseEntity>);
				MEMBER_ARR(n_attach_index, client::C_Beam, 10, modellib::AttachmentHandle_t);
				MEMBER(f_width, client::C_Beam, float);
				MEMBER(f_end_width, client::C_Beam, float);
				MEMBER(f_fade_length, client::C_Beam, float);
				MEMBER(f_halo_scale, client::C_Beam, float);
				MEMBER(f_amplitude, client::C_Beam, float);
				MEMBER(f_start_frame, client::C_Beam, float);
				MEMBER(f_speed, client::C_Beam, float);
				MEMBER(fl_frame, client::C_Beam, float);
				MEMBER(n_clip_style, client::C_Beam, client::BeamClipStyle_t);
				MEMBER(b_turned_off, client::C_Beam, bool);
				MEMBER(vec_end_pos, client::C_Beam, Vector);
				MEMBER(h_end_entity, client::C_Beam, chandle<client::C_BaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Beam

			class C_CSGO_TeamPreviewCharacterPosition : public client::C_BaseEntity {
				MEMBER(n_variant, client::C_CSGO_TeamPreviewCharacterPosition, int32_t);
				MEMBER(n_random, client::C_CSGO_TeamPreviewCharacterPosition, int32_t);
				MEMBER(n_ordinal, client::C_CSGO_TeamPreviewCharacterPosition, int32_t);
				MEMBER(s_weapon_name, client::C_CSGO_TeamPreviewCharacterPosition, CUtlString);
				MEMBER(xuid, client::C_CSGO_TeamPreviewCharacterPosition, uint64_t);
				MEMBER(agent_item, client::C_CSGO_TeamPreviewCharacterPosition, client::C_EconItemView);
				MEMBER(gloves_item, client::C_CSGO_TeamPreviewCharacterPosition, client::C_EconItemView);
				MEMBER(weapon_item, client::C_CSGO_TeamPreviewCharacterPosition, client::C_EconItemView);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_TeamPreviewCharacterPosition

			class C_EnvScreenOverlay : public client::C_PointEntity {
				MEMBER_ARR(isz_overlay_names, client::C_EnvScreenOverlay, 10, CUtlSymbolLarge);
				MEMBER_ARR(fl_overlay_times, client::C_EnvScreenOverlay, 10, float);
				MEMBER(fl_start_time, client::C_EnvScreenOverlay, entity2::GameTime_t);
				MEMBER(i_desired_overlay, client::C_EnvScreenOverlay, int32_t);
				MEMBER(b_is_active, client::C_EnvScreenOverlay, bool);
				MEMBER(b_was_active, client::C_EnvScreenOverlay, bool);
				MEMBER(i_cached_desired_overlay, client::C_EnvScreenOverlay, int32_t);
				MEMBER(i_current_overlay, client::C_EnvScreenOverlay, int32_t);
				MEMBER(fl_current_overlay_time, client::C_EnvScreenOverlay, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EnvScreenOverlay

			class C_PointWorldText : public client::C_ModelPointEntity {
				MEMBER(b_force_recreate_next_update, client::C_PointWorldText, bool);
				MEMBER_ARR(message_text, client::C_PointWorldText, 512, char);
				MEMBER_ARR(font_name, client::C_PointWorldText, 64, char);
				MEMBER_ARR(background_material_name, client::C_PointWorldText, 64, char);
				MEMBER(b_enabled, client::C_PointWorldText, bool);
				MEMBER(b_fullbright, client::C_PointWorldText, bool);
				MEMBER(fl_world_units_per_px, client::C_PointWorldText, float);
				MEMBER(fl_font_size, client::C_PointWorldText, float);
				MEMBER(fl_depth_offset, client::C_PointWorldText, float);
				MEMBER(b_draw_background, client::C_PointWorldText, bool);
				MEMBER(fl_background_border_width, client::C_PointWorldText, float);
				MEMBER(fl_background_border_height, client::C_PointWorldText, float);
				MEMBER(fl_background_world_to_uv, client::C_PointWorldText, float);
				MEMBER(color, client::C_PointWorldText, Color);
				MEMBER(n_justify_horizontal, client::C_PointWorldText, client::PointWorldTextJustifyHorizontal_t);
				MEMBER(n_justify_vertical, client::C_PointWorldText, client::PointWorldTextJustifyVertical_t);
				MEMBER(n_reorient_mode, client::C_PointWorldText, client::PointWorldTextReorientMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PointWorldText

			class CBumpMineProjectile : public client::C_BaseGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBumpMineProjectile

			class C_WeaponFiveSeven : public client::C_CSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_WeaponFiveSeven

			class C_BasePropDoor : public client::C_DynamicProp {
				MEMBER(e_door_state, client::C_BasePropDoor, client::DoorState_t);
				MEMBER(model_changed, client::C_BasePropDoor, bool);
				MEMBER(b_locked, client::C_BasePropDoor, bool);
				MEMBER(closed_position, client::C_BasePropDoor, Vector);
				MEMBER(closed_angles, client::C_BasePropDoor, QAngle);
				MEMBER(h_master, client::C_BasePropDoor, chandle<client::C_BasePropDoor>);
				MEMBER(v_where_to_set_lighting_origin, client::C_BasePropDoor, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_BasePropDoor

			class C_NametagModule : public client::C_CS2WeaponModuleBase {
				MEMBER(str_nametag_string, client::C_NametagModule, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_NametagModule

			class C_PhysPropClientside : public client::C_BreakableProp {
				MEMBER(fl_touch_delta, client::C_PhysPropClientside, entity2::GameTime_t);
				MEMBER(f_death_time, client::C_PhysPropClientside, entity2::GameTime_t);
				MEMBER(inertia_scale, client::C_PhysPropClientside, float);
				MEMBER(vec_damage_position, client::C_PhysPropClientside, Vector);
				MEMBER(vec_damage_direction, client::C_PhysPropClientside, Vector);
				MEMBER(n_damage_type, client::C_PhysPropClientside, client::DamageTypes_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_PhysPropClientside

			class C_VoteController : public client::C_BaseEntity {
				MEMBER(i_active_issue_index, client::C_VoteController, int32_t);
				MEMBER(i_only_team_to_vote, client::C_VoteController, int32_t);
				MEMBER_ARR(n_vote_option_count, client::C_VoteController, 5, int32_t);
				MEMBER(n_potential_votes, client::C_VoteController, int32_t);
				MEMBER(b_votes_dirty, client::C_VoteController, bool);
				MEMBER(b_type_dirty, client::C_VoteController, bool);
				MEMBER(b_is_yes_no_vote, client::C_VoteController, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_VoteController

			class C_FogController : public client::C_BaseEntity {
				MEMBER(fog, client::C_FogController, client::fogparams_t);
				MEMBER(b_use_angles, client::C_FogController, bool);
				MEMBER(i_changed_variables, client::C_FogController, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FogController

			class C_FuncBrush : public client::C_BaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FuncBrush

			class C_FuncConveyor : public client::C_BaseModelEntity {
				MEMBER(vec_move_dir_entity_space, client::C_FuncConveyor, Vector);
				MEMBER(fl_target_speed, client::C_FuncConveyor, float);
				MEMBER(n_transition_start_tick, client::C_FuncConveyor, entity2::GameTick_t);
				MEMBER(n_transition_duration_ticks, client::C_FuncConveyor, int32_t);
				MEMBER(fl_transition_start_speed, client::C_FuncConveyor, float);
				MEMBER(h_conveyor_models, client::C_FuncConveyor, C_NetworkUtlVectorBase<chandle<client::C_BaseEntity>>);
				MEMBER(fl_current_conveyor_offset, client::C_FuncConveyor, float);
				MEMBER(fl_current_conveyor_speed, client::C_FuncConveyor, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_FuncConveyor

			class CHostageRescueZone : public client::CHostageRescueZoneShim {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHostageRescueZone

			class CTablet : public client::C_CSWeaponBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTablet

			class CCSPointScript : public pulse_runtime_lib::CBasePulseGraphInstance {
				MEMBER(p_parent, client::CCSPointScript, client::CCSPointScriptEntity*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScript

			class C_EntityFlame : public client::C_BaseEntity {
				MEMBER(h_ent_attached, client::C_EntityFlame, chandle<client::C_BaseEntity>);
				MEMBER(h_old_attached, client::C_EntityFlame, chandle<client::C_BaseEntity>);
				MEMBER(b_cheap_effect, client::C_EntityFlame, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_EntityFlame

			class C_Sprite : public client::C_BaseModelEntity {
				MEMBER(h_sprite_material, client::C_Sprite, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(h_attached_to_entity, client::C_Sprite, chandle<client::C_BaseEntity>);
				MEMBER(n_attachment, client::C_Sprite, modellib::AttachmentHandle_t);
				MEMBER(fl_sprite_framerate, client::C_Sprite, float);
				MEMBER(fl_frame, client::C_Sprite, float);
				MEMBER(fl_die_time, client::C_Sprite, entity2::GameTime_t);
				MEMBER(n_brightness, client::C_Sprite, uint32_t);
				MEMBER(fl_brightness_duration, client::C_Sprite, float);
				MEMBER(fl_sprite_scale, client::C_Sprite, float);
				MEMBER(fl_scale_duration, client::C_Sprite, float);
				MEMBER(b_world_space_scale, client::C_Sprite, bool);
				MEMBER(fl_glow_proxy_size, client::C_Sprite, float);
				MEMBER(fl_hdrcolor_scale, client::C_Sprite, float);
				MEMBER(fl_last_time, client::C_Sprite, entity2::GameTime_t);
				MEMBER(fl_max_frame, client::C_Sprite, float);
				MEMBER(fl_start_scale, client::C_Sprite, float);
				MEMBER(fl_dest_scale, client::C_Sprite, float);
				MEMBER(fl_scale_time_start, client::C_Sprite, entity2::GameTime_t);
				MEMBER(n_start_brightness, client::C_Sprite, int32_t);
				MEMBER(n_dest_brightness, client::C_Sprite, int32_t);
				MEMBER(fl_brightness_time_start, client::C_Sprite, entity2::GameTime_t);
				MEMBER(h_old_sprite_material, client::C_Sprite, CWeakHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(n_sprite_width, client::C_Sprite, int32_t);
				MEMBER(n_sprite_height, client::C_Sprite, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_Sprite

			class C_CSGO_TerroristTeamIntroCamera : public client::C_CSGO_TeamPreviewCamera {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class C_CSGO_TerroristTeamIntroCamera

			class CPulseCell_Step_EntFire : public pulse_runtime_lib::CPulseCell_BaseFlow {
				MEMBER(input, client::CPulseCell_Step_EntFire, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Step_EntFire

			class CPulseCell_PlaySequence : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow {
				MEMBER(sequence_name, client::CPulseCell_PlaySequence, CUtlString);
				MEMBER(pulse_anim_events, client::CPulseCell_PlaySequence, pulse_runtime_lib::PulseNodeDynamicOutflows_t);
				MEMBER(on_finished, client::CPulseCell_PlaySequence, pulse_runtime_lib::CPulse_ResumePoint);
				MEMBER(on_canceled, client::CPulseCell_PlaySequence, pulse_runtime_lib::CPulse_ResumePoint);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_PlaySequence

			class CPulseCell_LerpCameraSettings : public pulse_runtime_lib::CPulseCell_BaseLerp {
				MEMBER(fl_seconds, client::CPulseCell_LerpCameraSettings, float);
				MEMBER(start, client::CPulseCell_LerpCameraSettings, client::PointCameraSettings_t);
				MEMBER(end, client::CPulseCell_LerpCameraSettings, client::PointCameraSettings_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_LerpCameraSettings

		} // namespace client

		*/
