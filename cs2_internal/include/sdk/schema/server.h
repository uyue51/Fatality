// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_server_H
#define SDK_SCHEMA_server_H

#include <cstdint>

#include <sdk/schema/client.h>
#include <sdk/schema/entity2.h>
#include <sdk/schema/animationsystem.h>
#include <sdk/schema/modellib.h>
#include <sdk/schema/resourcesystem.h>
#include <sdk/schema/vphysics2.h>
#include <sdk/schema/navlib.h>
#include <sdk/schema/pulse_runtime_lib.h>
#include <sdk/schema/physicslib.h>
#include <sdk/schema/soundsystem.h>
namespace sdk {
	namespace schema {
		/*namespace server {
			class CSAdditionalPerRoundStats_t;
			class CSAdditionalMatchStats_t;
			class SoundOpvarTraceResult_t;
			class CPulseCell_Outflow_PlaySceneBase_CursorState_t;
			class CMotorController;
			class CBtNode;
			class CBtNodeComposite;
			class CBtNodeDecorator;
			class CBtNodeCondition;
			class CBtNodeConditionInactive;
			class CBtActionMoveTo;
			class CBtActionCombatPositioning;
			class CBtActionParachutePositioning;
			class CBtActionAim;
			class locksound_t;
			class magnetted_objects_t;
			class CCommentarySystem;
			class PulseScriptedSequenceData_t;
			class VelocitySampler;
			class dynpitchvol_base_t;
			class dynpitchvol_t;
			class ConstraintSoundInfo;
			class CGameScriptedMoveData;
			class SimpleConstraintSoundProfile;
			class lerpdata_t;
			class CResponseQueue;
			class CSound;
			class CPulseCell_Outflow_ScriptedSequence_CursorState_t;
			class CHintMessage;
			class IPulseComponentEntity;
			class CGameScriptedMoveDef_t;
			class SellbackPurchaseEntry_t;
			class CCSPointScriptExtensions_player;
			class fogparams_t;
			class CCSPointPulseAPI;
			class CPathSimpleAPI;
			class CNetworkedSequenceOperation;
			class CPulseCell_Outflow_ListenForEntityOutput_CursorState_t;
			class CIronSightController;
			class ResponseContext_t;
			class audioparams_t;
			class CTakeDamageInfoAPI;
			class ServerAuthoritativeWeaponSlot_t;
			class CCSPointScriptExtensions_observer;
			class VPhysicsCollisionAttribute_t;
			class CCSGameModeRules;
			class CCSGameModeRules_Deathmatch;
			class CCSGameModeRules_Noop;
			class CCSGameModeRules_ArmsRace;
			class CBot;
			class CCSBot;
			class CHintMessageQueue;
			class WeaponPurchaseTracker_t;
			class CAttributeManager_cached_attribute_float_t;
			class CBuoyancyHelper;
			class CShatterGlassShard;
			class CPhysicsShake;
			class CRetakeGameRules;
			class CAttributeList;
			class SequenceHistory_t;
			class AISound_t;
			class CConstantForceController;
			class EngineCountdownTimer;
			class ActiveModelConfig_t;
			class CCollisionProperty;
			class PhysicsRagdollPose_t;
			class CAnimGraphNetworkedVariables;
			class CAttributeManager;
			class CAttributeContainer;
			class CBaseIssue;
			class CModelState;
			class CPulseServerFuncs;
			class CCSPointScriptExtensions_CCSWeaponBaseVData;
			class CPulseServerFuncs_Sounds;
			class CSmoothFunc;
			class CEnvWindShared_WindVariationEvent_t;
			class CBaseEntityAPI;
			class EntityRenderAttribute_t;
			class CGlowProperty;
			class CGameSceneNode;
			class CSkeletonInstance;
			class shard_model_desc_t;
			class CPointTemplateAPI;
			class WeaponPurchaseCount_t;
			class CDamageRecord;
			class CAI_Expresser;
			class CAI_ExpresserWithFollowup;
			class CMultiplayer_Expresser;
			class CCSPointScriptExtensions_player_controller;
			class CGameRules;
			class CSingleplayRules;
			class CMultiplayRules;
			class CTeamplayRules;
			class CCSGameRules;
			class CPulseGraphComponentBase;
			class CPulseGraphComponentGameBlackboard;
			class CPulseGraphComponentPointServer;
			class CSharedGapTypeQueryRegistration;
			class AutoRoomDoorwayPairs_t;
			class CBasePlayerControllerAPI;
			class CEffectData;
			class IntervalTimer;
			class CTimeline;
			class fogplayerparams_t;
			class CFuncMoverAPI;
			class CSPerRoundStats_t;
			class CSMatchStats_t;
			class CEnvWindShared;
			class CGameSceneNodeHandle;
			class EntitySpottedState_t;
			class CCSPointScriptExtensions_weapon_cs_base;
			class CEconItemAttribute;
			class PredictedDamageTag_t;
			class CEnvWindShared_WindAveEvent_t;
			class CountdownTimer;
			class CCSPointScriptExtensions_entity;
			class Relationship_t;
			class RelationshipOverride_t;
			class CResponseQueue_CDeferredResponse;
			class sky3dparams_t;
			class ViewAngleServerChange_t;
			class CRuleBrushEntity;
			class CFuncIllusionary;
			class CWeaponShield;
			class CLogicEventListener;
			class CHostageExpresserShim;
			class CRopeKeyframeAlias_move_rope;
			class CEnableMotionFixup;
			class CTriggerSoundscape;
			class CRenderComponent;
			class CDynamicProp;
			class CBaseGrenade;
			class CDecoyGrenade;
			class CTriggerBrush;
			class CCSPlayer_MovementServices;
			class CBuyZone;
			class CFists;
			class CSpriteOriented;
			class CEnvBeverage;
			class CLogicCollisionPair;
			class CInfoLandmark;
			class CPrecipitationVData;
			class CFogController;
			class CTriggerRemove;
			class CRulePointEntity;
			class CFilterName;
			class CBaseTrigger;
			class CPathMover;
			class CPointTeleport;
			class CLogicCompare;
			class CInfoInstructorHintBombTargetB;
			class CProjectedDecal;
			class CEnvLaser;
			class CHostage;
			class CItemDefuserAlias_item_defuser;
			class CEnvTracer;
			class CFuncTrackAuto;
			class CPushable;
			class FilterHealth;
			class CMelee;
			class CEnvEntityIgniter;
			class CPlantedC4;
			class CTriggerTripWire;
			class CMarkupVolumeTagged;
			class CTriggerMultiple;
			class CPointPush;
			class CBaseProp;
			class CPrecipitationBlocker;
			class CFuncElectrifiedVolume;
			class CPrecipitation;
			class CPhysicsPropOverride;
			class CBodyComponentSkeletonInstance;
			class CSoundOpvarSetPointBase;
			class CBaseAnimGraphController;
			class CTriggerPush;
			class CCSGO_TeamSelectCounterTerroristPosition;
			class CScriptTriggerHurt;
			class CTriggerProximity;
			class CCSGO_WingmanIntroCounterTerroristPosition;
			class CBaseDMStart;
			class CSoundOpvarSetEntity;
			class CScriptTriggerPush;
			class CRopeKeyframe;
			class CFuncLadder;
			class CEnvFireSensor;
			class CCSGameRulesProxy;
			class CPlayerPing;
			class CLogicPlayerProxy;
			class CEnvBeam;
			class CBaseFlexAlias_funCBaseFlex;
			class CTriggerBuoyancy;
			class CTonemapTrigger;
			class CCSWeaponBaseVData;
			class CEnvCubemapBox;
			class CItem_Healthshot;
			class CFogTrigger;
			class CWeaponSSG08;
			class CWeaponFiveSeven;
			class CPointBroadcastClientCommand;
			class CTriggerHostageReset;
			class CWeaponMP7;
			class CInfoTeleportDestination;
			class CBodyComponent;
			class CWeaponSawedoff;
			class CBaseAnimGraph;
			class CEnvSoundscapeTriggerable;
			class CBasePlatTrain;
			class CDecoyProjectile;
			class CMoverPathNode;
			class CPlayerSprayDecal;
			class CHandleTest;
			class CCitadelSoundOpvarSetOBB;
			class CCSGO_WingmanIntroTerroristPosition;
			class CSensorGrenade;
			class CPhysTorque;
			class CPlayer_ViewModelServices;
			class CItemHeavyAssaultSuit;
			class CPlayer_CameraServices;
			class CCSGO_TeamIntroCharacterPosition;
			class CCSObserver_MovementServices;
			class CPointClientUIDialog;
			class CWeaponMP9;
			class CNavVolumeMarkupVolume;
			class CPhysicsEntitySolver;
			class CCSServerPointScriptEntity;
			class CBasePlayerController;
			class CLightGlow;
			class CBodyComponentBaseAnimGraph;
			class CBaseDoor;
			class CSceneEntityAlias_logic_choreographed_scene;
			class CBodyComponentPoint;
			class CDynamicPropAlias_cable_dynamic;
			class CPointGamestatsCounter;
			class CEnvShake;
			class CBaseMoveBehavior;
			class CTablet;
			class CFuncNavObstruction;
			class CEnvTilt;
			class CBaseCSGrenade;
			class CBaseButton;
			class CPointChildModifier;
			class CItemGenericTriggerHelper;
			class CLogicBranchList;
			class CCSPlace;
			class CCSPlayer_CameraServices;
			class CRevertSaved;
			class CMultiLightProxy;
			class CItemDogtags;
			class CEntityBlocker;
			class CLogicCase;
			class CItemDefuser;
			class CSmokeGrenadeProjectile;
			class CFireCrackerBlast;
			class CRagdollPropAlias_physics_prop_ragdoll;
			class CLightEntity;
			class CCredits;
			class CMarkupVolumeTagged_NavGame;
			class CSoundEventEntity;
			class CCSPlayer_ViewModelServices;
			class CWeaponBaseItem;
			class CInfoParticleTarget;
			class CScriptTriggerOnce;
			class CEnvVolumetricFogController;
			class CPlayer_MovementServices_Humanoid;
			class CPhysicsPropRespawnable;
			class CEnvSoundscapeProxyAlias_snd_soundscape_proxy;
			class CPhysBallSocket;
			class CPointEntity;
			class CKeepUpright;
			class CInfoPlayerStart;
			class CSoundOpvarSetOBBWindEntity;
			class CRagdollPropAttached;
			class CItemGeneric;
			class CFuncTrackTrain;
			class CLightSpotEntity;
			class CEnvWind;
			class CCSPlayer_WaterServices;
			class CPulseCell_Value_FindEntByClassNameWithin;
			class CSkyboxReference;
			class CPropDoorRotating;
			class CFuncTrainControls;
			class CEnvFunnel;
			class CBarnLight;
			class CInfoDeathmatchSpawn;
			class CWeaponBizon;
			class CEnvViewPunch;
			class CInfoPlayerTerrorist;
			class CDEagle;
			class CPathCorner;
			class CSoundEventEntityAlias_snd_event_point;
			class CParticleSystem;
			class CRotDoor;
			class CCSPlayerController_InventoryServices;
			class CFuncMonitor;
			class CFuncInteractionLayerClip;
			class CHostageAlias_info_hostage_spawn;
			class CMultiSource;
			class CLogicNavigation;
			class CEconWearable;
			class CEnvEntityMaker;
			class CFilterMultiple;
			class CBaseEntity;
			class CPlayer_UseServices;
			class CPulseGraphInstance_ServerEntity;
			class CPhysicsWire;
			class CPropDoorRotatingBreakable;
			class CBasePlayerWeapon;
			class CLightEnvironmentEntity;
			class CFireSmoke;
			class CBumpMine;
			class CKnife;
			class CBasePropDoor;
			class CRagdollManager;
			class CServerOnlyModelEntity;
			class CTriggerFan;
			class CIncendiaryGrenade;
			class CPathCornerCrash;
			class CTriggerActiveWeaponDetect;
			class CPointAngleSensor;
			class CNavSpaceInfo;
			class CSoundEnt;
			class CLogicAchievement;
			class CPathSimple;
			class CWeaponNOVA;
			class CScriptItem;
			class CCSPlayerBase_CameraServices;
			class CInfoDynamicShadowHintBox;
			class CFilterLOS;
			class CTouchExpansionComponent;
			class CBaseCombatCharacter;
			class CBaseViewModel;
			class CItem;
			class CBaseClientUIEntity;
			class CWeaponNegev;
			class CEnvDecal;
			class CBodyComponentBaseModelEntity;
			class CLogicAuto;
			class CTriggerToggleSave;
			class CLightDirectionalEntity;
			class CLogicNPCCounterOBB;
			class CCSObserver_UseServices;
			class CFuncTrackChange;
			class CGamePlayerZone;
			class CInfoVisibilityBox;
			class CCSMinimapBoundary;
			class CMessageEntity;
			class CCSPlayer_HostageServices;
			class CFuncPlatRot;
			class CSmokeGrenade;
			class CCSPlayer_PingServices;
			class CPlayer_FlashlightServices;
			class CCSPlayer_BuyServices;
			class CPhysForce;
			class CCSPlayer_ItemServices;
			class CBaseFire;
			class CWeaponMAC10;
			class CWeaponGlock;
			class CPredictedViewModel;
			class CTriggerGameEvent;
			class CLogicDistanceAutosave;
			class CEnvMicrophone;
			class CPointCameraVFOV;
			class CInfoSpawnGroupLoadUnload;
			class CFogVolume;
			class CInfoPlayerCounterterrorist;
			class CInfoLadderDismount;
			class CFire;
			class CCSPointScriptEntity;
			class CFuncPlat;
			class CGenericConstraint;
			class CEnvInstructorVRHint;
			class CWeaponG3SG1;
			class CInfoInstructorHintTarget;
			class CFilterMassGreater;
			class CLogicNPCCounterAABB;
			class CSoundOpvarSetPathCornerEntity;
			class CBreachChargeProjectile;
			class CRagdollProp;
			class CTriggerLerpObject;
			class CItemSoda;
			class CBaseToggle;
			class CMarkupVolumeTagged_Nav;
			class CEnvSky;
			class CEnvDetailController;
			class CInfoSpawnGroupLandmark;
			class CFootstepControl;
			class CTriggerLook;
			class CMathRemap;
			class CInstructorEventEntity;
			class CGradientFog;
			class CTriggerVolume;
			class CSoundEventOBBEntity;
			class CEnvSoundscapeAlias_snd_soundscape;
			class CInfoInstructorHintHostageRescueZone;
			class CPulseCell_Step_SetAnimGraphParam;
			class CFishPool;
			class CTriggerOnce;
			class CPointClientCommand;
			class CFuncVPhysicsClip;
			class CCSPlayer_RadioServices;
			class CInstancedSceneEntity;
			class CNullEntity;
			class CEnvHudHint;
			class CBeam;
			class CTeam;
			class CBasePlayerWeaponVData;
			class CCSObserverPawn;
			class CWeaponSG556;
			class CAI_ChangeHintGroup;
			class CAmbientGeneric;
			class CDynamicLight;
			class CWeaponP90;
			class CRectLight;
			class CPointValueRemapper;
			class CPointServerCommand;
			class CLogicalEntity;
			class CFuncTrain;
			class CEntityDissolve;
			class CPhysicsProp;
			class CSceneListManager;
			class CPlayer_ItemServices;
			class CWeaponSCAR20;
			class CFuncWallToggle;
			class CSensorGrenadeProjectile;
			class CLogicNPCCounter;
			class CCSGO_WingmanIntroCharacterPosition;
			class CTriggerTeleport;
			class CScriptedSequence;
			class CFuncLadderAlias_func_useableladder;
			class CEnvParticleGlow;
			class CTriggerSndSosOpvar;
			class CItemAssaultSuit;
			class CBaseFilter;
			class CTripWireFire;
			class CPulseCell_Outflow_ListenForEntityOutput;
			class CRagdollConstraint;
			class CBreakableProp;
			class CWeaponGalilAR;
			class CCSPlayer_DamageReactServices;
			class CEnvProjectedTexture;
			class CDynamicPropAlias_prop_dynamic_override;
			class CSplineConstraint;
			class CFuncTimescale;
			class CCSObserver_ViewModelServices;
			class CDynamicPropAlias_dynamic_prop;
			class CLogicScript;
			class CPhysicsPropMultiplayer;
			class CFlashbang;
			class CServerOnlyEntity;
			class CSimpleMarkupVolumeTagged;
			class CTriggerSave;
			class CPhysHingeAlias_phys_hinge_local;
			class CTankTargetChange;
			class CFilterContext;
			class CScriptNavBlocker;
			class CCSPlayer_BulletServices;
			class CPhysMotor;
			class CWeaponMP5SD;
			class CAK47;
			class CLogicRelay;
			class CGameChoreoServices;
			class CChangeLevel;
			class CSoundOpvarSetPointEntity;
			class CTriggerPhysics;
			class CModelPointEntity;
			class CPlayer_WaterServices;
			class CFuncWater;
			class CCSGO_TeamIntroTerroristPosition;
			class CTonemapController2;
			class CWeaponXM1014;
			class CPlatTrigger;
			class CFilterClass;
			class CMolotovGrenade;
			class CLightComponent;
			class CHandleDummy;
			class CPointHurt;
			class CCSPlayerPawn;
			class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable;
			class CLightOrthoEntity;
			class CSkyCamera;
			class CGameMoney;
			class CPlayer_ObserverServices;
			class CWeaponZoneRepulsor;
			class CPhysImpact;
			class CInfoTargetServerOnly;
			class CEnvGlobal;
			class CEnvCombinedLightProbeVolume;
			class CWeaponM249;
			class CFuncVehicleClip;
			class CCommentaryViewPosition;
			class CSoundAreaEntitySphere;
			class CPointAngularVelocitySensor;
			class CMolotovProjectile;
			class CMomentaryRotButton;
			class CHostageRescueZoneShim;
			class CFuncBrush;
			class CPointPulse;
			class CEnvInstructorHint;
			class CInfoGameEventProxy;
			class CPointCamera;
			class CCSWeaponBase;
			class CPathKeyFrame;
			class CCSObserver_ObserverServices;
			class CWeaponRevolver;
			class CEnvSoundscape;
			class COrnamentProp;
			class CLogicGameEvent;
			class CFuncPropRespawnZone;
			class CGameRulesProxy;
			class CMapVetoPickController;
			class CEnvMuzzleFlash;
			class CBombTarget;
			class CPhysicsSpring;
			class CEnvLightProbeVolume;
			class CFuncWall;
			class CHEGrenade;
			class CLogicAutosave;
			class CCSPlayerController_DamageServices;
			class CLogicGameEventListener;
			class CCSTeam;
			class CEnvSoundscapeProxy;
			class CSprite;
			class CHitboxComponent;
			class CSoundEventPathCornerEntity;
			class CScriptTriggerMultiple;
			class CSoundOpvarSetAutoRoomEntity;
			class CTimerEntity;
			class CPulseGraphInstance_GameBlackboard;
			class FilterDamageType;
			class CSoundAreaEntityBase;
			class CCSPlayer_WeaponServices;
			class CCSPlayer_UseServices;
			class CCSGO_TeamSelectCharacterPosition;
			class CItemKevlar;
			class CPhysThruster;
			class CPhysPulley;
			class CSoundEventAABBEntity;
			class CPhysSlideConstraint;
			class FilterTeam;
			class CBasePlayerVData;
			class CTriggerHurt;
			class CNavVolumeCalculatedVector;
			class CPhysConstraint;
			class CPlayer_MovementServices;
			class CPhysWheelConstraint;
			class CPhysFixed;
			class CNavVolumeBreadthFirstSearch;
			class CCSPlayerController_InGameMoneyServices;
			class CSoundOpvarSetOBBEntity;
			class CWeaponM4A1;
			class CTonemapController2Alias_env_tonemap_controller2;
			class CCSPlayerController_ActionTrackingServices;
			class CPointClientUIWorldTextPanel;
			class CFish;
			class CEnvFireSource;
			class CDebugHistory;
			class CInfoData;
			class CHostageCarriableProp;
			class CFuncRotating;
			class CBaseCSGrenadeProjectile;
			class CCSGO_TeamIntroCounterTerroristPosition;
			class CEnvVolumetricFogVolume;
			class CAISound;
			class CPointProximitySensor;
			class CBaseModelEntity;
			class CPhysMagnet;
			class CFuncNavBlocker;
			class CRagdollMagnet;
			class CPhysBox;
			class CHEGrenadeProjectile;
			class CPhysExplosion;
			class CCSPlayerResource;
			class CPlayer_WeaponServices;
			class CWeaponUMP45;
			class CPhysicalButton;
			class CShatterGlassShardPhysics;
			class CCSObserver_CameraServices;
			class CTriggerImpact;
			class CMapInfo;
			class CPathParticleRopeAlias_path_particle_rope_clientside;
			class CSun;
			class CTriggerDetectBulletFire;
			class CPathParticleRope;
			class CWorld;
			class CPointGiveAmmo;
			class CFuncMoveLinearAlias_momentary_door;
			class CEnvExplosion;
			class CPlayerVisibility;
			class CServerOnlyPointEntity;
			class CFuncMover;
			class CGameEnd;
			class CFlashbangProjectile;
			class CTriggerCallback;
			class CBubbling;
			class CColorCorrectionVolume;
			class CFilterEnemy;
			class CShower;
			class CWeaponTec9;
			class CEnvCubemapFog;
			class CLogicProximity;
			class CCSPlayerController;
			class CPointCommentaryNode;
			class CPointClientUIWorldPanel;
			class CFilterAttributeInt;
			class CBasePlayerPawn;
			class CCSPlayer_ActionTrackingServices;
			class CPointEntityFinder;
			class CPointVelocitySensor;
			class CFuncTankTrain;
			class CChicken;
			class CBlood;
			class CPointTemplate;
			class CInfoDynamicShadowHint;
			class CSoundOpvarSetAABBEntity;
			class CNavWalkable;
			class CBreachCharge;
			class CLogicBranch;
			class CEnvCubemap;
			class CSpriteAlias_env_glow;
			class CPulseCell_Step_FollowEntity;
			class CPhysLength;
			class CInfoOffscreenPanoramaTexture;
			class CCSGOViewModel;
			class CEnvFade;
			class CInferno;
			class CWeaponUSPSilencer;
			class CTriggerGravity;
			class CServerRagdollTrigger;
			class CWeaponAug;
			class CEconEntity;
			class CPointWorldText;
			class CSoundAreaEntityOrientedBox;
			class CFuncShatterglass;
			class CMarkupVolumeWithRef;
			class CRotButton;
			class CSoundEventSphereEntity;
			class CWeaponHKP2000;
			class CEnvSplash;
			class CCSGO_TeamSelectTerroristPosition;
			class CWeaponTaser;
			class CWaterBullet;
			class CMarkupVolume;
			class CMessage;
			class CBreakable;
			class CInfoTarget;
			class CPropDataComponent;
			class CGameText;
			class CTextureBasedAnimatable;
			class CWeaponFamas;
			class CFilterModel;
			class CCSPlayerPawnBase;
			class CPathTrack;
			class CLogicDistanceCheck;
			class CWeaponP250;
			class COmniLight;
			class CGamePlayerEquip;
			class CEntityFlame;
			class CCSWeaponBaseGun;
			class CGunTarget;
			class CSoundEventParameter;
			class CTestEffect;
			class CWeaponM4A1Silencer;
			class CConstraintAnchor;
			class CSceneEntity;
			class CMathColorBlend;
			class CLogicActiveAutosave;
			class CVoteController;
			class CWeaponCZ75a;
			class CBaseFlex;
			class CEnvScreenOverlay;
			class CBumpMineProjectile;
			class CEconItemView;
			class CWeaponMag7;
			class CInfoInstructorHintBombTargetA;
			class CWeaponAWP;
			class CPostProcessingVolume;
			class CSpotlightEnd;
			class CRuleEntity;
			class CCSGO_TeamPreviewCharacterPosition;
			class CFuncConveyor;
			class CTriggerDetectExplosion;
			class CSoundStackSave;
			class CPhysHinge;
			class CFilterProximity;
			class CMathCounter;
			class CInfoWorldLayer;
			class CLogicLineToEntity;
			class CColorCorrection;
			class CWeaponElite;
			class CC4;
			class CHostageRescueZone;
			class CPointPrefab;
			class CTankTrainAI;
			class CGameGibManager;
			class CCSPointScript;
			class CCSSprite;
			class SpawnPoint;
			class CTripWireFireProjectile;
			class CEnvSpark;
			class CPlayer_AutoaimServices;
			class CNavLinkAreaEntity;
			class CFuncMoveLinear;
			class CCommentaryAuto;
			class CTriggerBombReset;
			class CLogicMeasureMovement;
			class CPulseCell_Outflow_PlaySceneBase;
			class CPulseCell_SoundEventStart;
			class CPulseCell_Outflow_PlaySequence;
			class CPulseCell_Outflow_ScriptedSequence;
			class CChicken_GraphController;
			class CPulseCell_Outflow_PlayVCD;
			class CPulseCell_Value_FindEntByName;
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class CLogicBranchList_LogicBranchListenerLastState_t : std::uint32_t {
				LOGIC_BRANCH_LISTENER_NOT_INIT = 0x0,
				LOGIC_BRANCH_LISTENER_ALL_TRUE = 0x1,
				LOGIC_BRANCH_LISTENER_ALL_FALSE = 0x2,
				LOGIC_BRANCH_LISTENER_MIXED = 0x3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class Explosions : std::uint32_t {
				expRandom = 0x0,
				expDirected = 0x1,
				expUsePrecise = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class ScriptedConflictResponse_t : std::uint32_t {
				SS_CONFLICT_ENQUEUE = 0x0,
				SS_CONFLICT_INTERRUPT = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class TrackOrientationType_t : std::uint32_t {
				TrackOrientation_Fixed = 0x0,
				TrackOrientation_FacePath = 0x1,
				TrackOrientation_FacePathAngles = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class CPhysicsProp_CrateType_t : std::uint32_t {
				CRATE_SPECIFIC_ITEM = 0x0,
				CRATE_TYPE_COUNT = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class SceneOnPlayerDeath_t : std::uint32_t {
				SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
				SCENE_ONPLAYERDEATH_CANCEL = 0x1,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class CFuncMover_OrientationUpdate_t : std::uint32_t {
				ORIENTATION_FORWARD_PATH = 0x0,
				ORIENTATION_FORWARD_PATH_AND_FIXED_PITCH = 0x1,
				ORIENTATION_FORWARD_PATH_AND_UP_CONTROL_POINT = 0x2,
				ORIENTATION_MATCH_CONTROL_POINT = 0x3,
				ORIENTATION_FIXED = 0x4,
				ORIENTATION_FACE_PLAYER = 0x5,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class doorCheck_e : std::uint32_t {
				DOOR_CHECK_FORWARD = 0x0,
				DOOR_CHECK_BACKWARD = 0x1,
				DOOR_CHECK_FULL = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class CFuncMover_Move_t : std::uint32_t {
				MOVE_LOOP = 0x0,
				MOVE_OSCILLATE = 0x1,
				MOVE_STOP_AT_END = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class PropDoorRotatingOpenDirection_e : std::uint32_t {
				DOOR_ROTATING_OPEN_BOTH_WAYS = 0x0,
				DOOR_ROTATING_OPEN_FORWARD = 0x1,
				DOOR_ROTATING_OPEN_BACKWARD = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class filter_t : std::uint32_t {
				FILTER_AND = 0x0,
				FILTER_OR = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class LessonPanelLayoutFileTypes_t : std::uint32_t {
				LAYOUT_HAND_DEFAULT = 0x0,
				LAYOUT_WORLD_DEFAULT = 0x1,
				LAYOUT_CUSTOM = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class SoundEventStartType_t : std::uint32_t {
				// MPropertyFriendlyName "From Player"
				SOUNDEVENT_START_PLAYER = 0x0,
				// MPropertyFriendlyName "From World"
				SOUNDEVENT_START_WORLD = 0x1,
				// MPropertyFriendlyName "From Entity"
				SOUNDEVENT_START_ENTITY = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class TrainOrientationType_t : std::uint32_t {
				TrainOrientation_Fixed = 0x0,
				TrainOrientation_AtPathTracks = 0x1,
				TrainOrientation_LinearBlend = 0x2,
				TrainOrientation_EaseInEaseOut = 0x3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class TrainVelocityType_t : std::uint32_t {
				TrainVelocity_Instantaneous = 0x0,
				TrainVelocity_LinearBlend = 0x1,
				TrainVelocity_EaseInEaseOut = 0x2,
			};
			// Enumerator count: 14
			// Alignment: 
			// Size: 0x2
			enum class SoundTypes_t : std::uint16_t {
				SOUND_NONE = 0x0,
				SOUND_COMBAT = 0x1,
				SOUND_PLAYER = 0x2,
				SOUND_DANGER = 0x3,
				SOUND_BULLET_IMPACT = 0x4,
				SOUND_THUMPER = 0x5,
				SOUND_PHYSICS_DANGER = 0x6,
				SOUND_MOVE_AWAY = 0x7,
				SOUND_PLAYER_VEHICLE = 0x8,
				SOUND_GLASS_BREAK = 0x9,
				SOUND_PHYSICS_OBJECT = 0xa,
				SOUND_WARN_FRIENDS = 0xb,
				SOUND_FOOD = 0xc,
				NUM_AI_SOUND_TYPES = 0xd,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class NPCFollowFormation_t : std::uint32_t {
				// MPropertyFriendlyName "Default"
				Default = 0xffffffff,
				// MPropertyFriendlyName "Close Circle"
				CloseCircle = 0x0,
				// MPropertyFriendlyName "Wide Circle"
				WideCircle = 0x1,
				// MPropertyFriendlyName "Medium Circle"
				MediumCircle = 0x5,
				// MPropertyFriendlyName "Sidekick"
				Sidekick = 0x6,
			};
			// Enumerator count: 12
			// Alignment: 
			// Size: 0x4
			enum class Materials : std::uint32_t {
				matGlass = 0x0,
				matWood = 0x1,
				matMetal = 0x2,
				matFlesh = 0x3,
				matCinderBlock = 0x4,
				matCeilingTile = 0x5,
				matComputer = 0x6,
				matUnbreakableGlass = 0x7,
				matRocks = 0x8,
				matWeb = 0x9,
				matNone = 0xa,
				matLastMaterial = 0xb,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class MoveLinearAuthoredPos_t : std::uint32_t {
				MOVELINEAR_AUTHORED_AT_START_POSITION = 0x0,
				MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 0x1,
				MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 0x2,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x2
			enum class SoundFlags_t : std::uint16_t {
				// MPropertySuppressEnumerator
				// MEnumeratorIsNotAFlag
				SOUND_FLAGS_NONE = 0x0,
				SOUND_FLAG_GUNFIRE = 0x1,
				SOUND_FLAG_COMBINE_ONLY = 0x2,
				SOUND_FLAG_REACT_TO_SOURCE = 0x4,
				SOUND_FLAG_EXPLOSION = 0x8,
				SOUND_FLAG_EXCLUDE_COMBINE = 0x10,
				SOUND_FLAG_DANGER_APPROACH = 0x20,
				SOUND_FLAG_ALLIES_ONLY = 0x40,
				SOUND_FLAG_PANIC_NPCS = 0x80,
				SOUND_FLAG_SQUAD_ONLY = 0x100,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class Touch_t : std::uint32_t {
				touch_none = 0x0,
				touch_player_only = 0x1,
				touch_npc_only = 0x2,
				touch_player_or_npc = 0x3,
				touch_player_or_npc_or_physicsprop = 0x4,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class EntFinderMethod_t : std::uint32_t {
				ENT_FIND_METHOD_NEAREST = 0x0,
				ENT_FIND_METHOD_FARTHEST = 0x1,
				ENT_FIND_METHOD_RANDOM = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class PropDoorRotatingSpawnPos_t : std::uint32_t {
				DOOR_SPAWN_CLOSED = 0x0,
				DOOR_SPAWN_OPEN_FORWARD = 0x1,
				DOOR_SPAWN_OPEN_BACK = 0x2,
				DOOR_SPAWN_AJAR = 0x3,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class PulseNPCCondition_t : std::uint32_t {
				// MPropertyFriendlyName "Can See the Player"
				COND_SEE_PLAYER = 0x1,
				// MPropertyFriendlyName "Lost Sight of the Player"
				COND_LOST_PLAYER = 0x2,
				// MPropertyFriendlyName "Can Hear the Player"
				COND_HEAR_PLAYER = 0x3,
				// MPropertyFriendlyName "Is Being Pushed by the Player"
				COND_PLAYER_PUSHING = 0x4,
				// MPropertyFriendlyName "No Primary Ammo"
				COND_NO_PRIMARY_AMMO = 0x5,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ForcedCrouchState_t : std::uint32_t {
				FORCEDCROUCH_NONE = 0x0,
				FORCEDCROUCH_CROUCHED = 0x1,
				FORCEDCROUCH_UNCROUCHED = 0x2,
			};
			// Enumerator count: 8
			// Alignment: 
			// Size: 0x4
			enum class TOGGLE_STATE : std::uint32_t {
				TS_AT_TOP = 0x0,
				TS_AT_BOTTOM = 0x1,
				TS_GOING_UP = 0x2,
				TS_GOING_DOWN = 0x3,
				DOOR_OPEN = 0x0,
				DOOR_CLOSED = 0x1,
				DOOR_OPENING = 0x2,
				DOOR_CLOSING = 0x3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class SimpleConstraintSoundProfile_SimpleConstraintsSoundProfileKeypoints_t : std::uint32_t {
				kMIN_THRESHOLD = 0x0,
				kMIN_FULL = 0x1,
				kHIGHWATER = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ScriptedMoveType_t : std::uint32_t {
				SCRIPTED_MOVETYPE_NONE = 0x0,
				SCRIPTED_MOVETYPE_TO_WITH_DURATION = 0x1,
				SCRIPTED_MOVETYPE_TO_WITH_MOVESPEED = 0x2,
				SCRIPTED_MOVETYPE_SWEEP_TO_AT_MOVEMENT_SPEED = 0x3,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x4
			enum class ChickenActivity : std::uint32_t {
				IDLE = 0x0,
				SQUAT = 0x1,
				WALK = 0x2,
				RUN = 0x3,
				GLIDE = 0x4,
				LAND = 0x5,
				PANIC = 0x6,
				TRICK = 0x7,
				TURN_IN_PLACE = 0x8,
			};
			// Enumerator count: 1
			// Alignment: 
			// Size: 0x4
			enum class navproperties_t : std::uint32_t {
				NAV_IGNORE = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class eSplinePushType : std::uint32_t {
				// MPropertyFriendlyName "Along Spline Direction"
				k_eSplinePushAlong = 0x0,
				// MPropertyFriendlyName "Away from closest point"
				k_eSplinePushAway = 0x1,
				// MPropertyFriendlyName "Towards closest point"
				k_eSplinePushTowards = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class TRAIN_CODE : std::uint32_t {
				TRAIN_SAFE = 0x0,
				TRAIN_BLOCKING = 0x1,
				TRAIN_FOLLOWING = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class FuncDoorSpawnPos_t : std::uint32_t {
				FUNC_DOOR_SPAWN_CLOSED = 0x0,
				FUNC_DOOR_SPAWN_OPEN = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class EOverrideBlockLOS_t : std::uint32_t {
				BLOCK_LOS_DEFAULT = 0x0,
				BLOCK_LOS_FORCE_FALSE = 0x1,
				BLOCK_LOS_FORCE_TRUE = 0x2,
			};
			struct CSAdditionalPerRoundStats_t {
				MEMBER(num_chickens_killed, server::CSAdditionalPerRoundStats_t, int32_t);
				MEMBER(kills_while_blind, server::CSAdditionalPerRoundStats_t, int32_t);
				MEMBER(bomb_carrierkills, server::CSAdditionalPerRoundStats_t, int32_t);
				MEMBER(i_burn_damage_inflicted, server::CSAdditionalPerRoundStats_t, int32_t);
				MEMBER(i_blast_damage_inflicted, server::CSAdditionalPerRoundStats_t, int32_t);
				MEMBER(i_dinks, server::CSAdditionalPerRoundStats_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CSAdditionalPerRoundStats_t

			struct CSAdditionalMatchStats_t : public server::CSAdditionalPerRoundStats_t {
				MEMBER(num_rounds_survived, server::CSAdditionalMatchStats_t, int32_t);
				MEMBER(max_num_rounds_survived, server::CSAdditionalMatchStats_t, int32_t);
				MEMBER(num_rounds_survived_total, server::CSAdditionalMatchStats_t, int32_t);
				MEMBER(i_rounds_won_without_purchase, server::CSAdditionalMatchStats_t, int32_t);
				MEMBER(i_rounds_won_without_purchase_total, server::CSAdditionalMatchStats_t, int32_t);
				MEMBER(num_first_kills, server::CSAdditionalMatchStats_t, int32_t);
				MEMBER(num_clutch_kills, server::CSAdditionalMatchStats_t, int32_t);
				MEMBER(num_pistol_kills, server::CSAdditionalMatchStats_t, int32_t);
				MEMBER(num_sniper_kills, server::CSAdditionalMatchStats_t, int32_t);
				MEMBER(i_num_suicides, server::CSAdditionalMatchStats_t, int32_t);
				MEMBER(i_num_team_kills, server::CSAdditionalMatchStats_t, int32_t);
				MEMBER(i_team_damage, server::CSAdditionalMatchStats_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CSAdditionalMatchStats_t

			struct SoundOpvarTraceResult_t {
				MEMBER(v_pos, server::SoundOpvarTraceResult_t, Vector);
				MEMBER(b_did_hit, server::SoundOpvarTraceResult_t, bool);
				MEMBER(fl_dist_sqr_to_center, server::SoundOpvarTraceResult_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SoundOpvarTraceResult_t

			struct CPulseCell_Outflow_PlaySceneBase_CursorState_t {
				MEMBER(scene_instance, server::CPulseCell_Outflow_PlaySceneBase_CursorState_t, chandle<server::CBaseEntity>);
				MEMBER(main_actor, server::CPulseCell_Outflow_PlaySceneBase_CursorState_t, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CPulseCell_Outflow_PlaySceneBase_CursorState_t

			class CMotorController {
				MEMBER(speed, server::CMotorController, float);
				MEMBER(max_torque, server::CMotorController, float);
				MEMBER(axis, server::CMotorController, Vector);
				MEMBER(inertia_factor, server::CMotorController, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMotorController

			class CBtNode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBtNode

			class CBtNodeComposite : public server::CBtNode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBtNodeComposite

			class CBtNodeDecorator : public server::CBtNode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBtNodeDecorator

			class CBtNodeCondition : public server::CBtNodeDecorator {
				MEMBER(b_negated, server::CBtNodeCondition, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBtNodeCondition

			class CBtNodeConditionInactive : public server::CBtNodeCondition {
				MEMBER(fl_round_start_threshold_seconds, server::CBtNodeConditionInactive, float);
				MEMBER(fl_sensor_inactivity_threshold_seconds, server::CBtNodeConditionInactive, float);
				MEMBER(sensor_inactivity_timer, server::CBtNodeConditionInactive, server::CountdownTimer);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBtNodeConditionInactive

			class CBtActionMoveTo : public server::CBtNode {
				MEMBER(sz_destination_input_key, server::CBtActionMoveTo, CUtlString);
				MEMBER(sz_hiding_spot_input_key, server::CBtActionMoveTo, CUtlString);
				MEMBER(sz_threat_input_key, server::CBtActionMoveTo, CUtlString);
				MEMBER(vec_destination, server::CBtActionMoveTo, Vector);
				MEMBER(b_auto_look_adjust, server::CBtActionMoveTo, bool);
				MEMBER(b_compute_path, server::CBtActionMoveTo, bool);
				MEMBER(fl_damaging_areas_penalty_cost, server::CBtActionMoveTo, float);
				MEMBER(check_approximate_corners_timer, server::CBtActionMoveTo, server::CountdownTimer);
				MEMBER(check_high_priority_item, server::CBtActionMoveTo, server::CountdownTimer);
				MEMBER(repath_timer, server::CBtActionMoveTo, server::CountdownTimer);
				MEMBER(fl_arrival_epsilon, server::CBtActionMoveTo, float);
				MEMBER(fl_additional_arrival_epsilon2_d, server::CBtActionMoveTo, float);
				MEMBER(fl_hiding_spot_check_distance_threshold, server::CBtActionMoveTo, float);
				MEMBER(fl_nearest_area_distance_threshold, server::CBtActionMoveTo, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBtActionMoveTo

			class CBtActionCombatPositioning : public server::CBtNode {
				MEMBER(sz_sensor_input_key, server::CBtActionCombatPositioning, CUtlString);
				MEMBER(sz_is_attacking_key, server::CBtActionCombatPositioning, CUtlString);
				MEMBER(action_timer, server::CBtActionCombatPositioning, server::CountdownTimer);
				MEMBER(b_crouching, server::CBtActionCombatPositioning, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBtActionCombatPositioning

			class CBtActionParachutePositioning : public server::CBtNode {
				MEMBER(action_timer, server::CBtActionParachutePositioning, server::CountdownTimer);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBtActionParachutePositioning

			class CBtActionAim : public server::CBtNode {
				MEMBER(sz_sensor_input_key, server::CBtActionAim, CUtlString);
				MEMBER(sz_aim_ready_key, server::CBtActionAim, CUtlString);
				MEMBER(fl_zoom_cooldown_timestamp, server::CBtActionAim, float);
				MEMBER(b_done_aiming, server::CBtActionAim, bool);
				MEMBER(fl_lerp_start_time, server::CBtActionAim, float);
				MEMBER(fl_next_look_target_lerp_time, server::CBtActionAim, float);
				MEMBER(fl_penalty_reduction_ratio, server::CBtActionAim, float);
				MEMBER(next_look_target, server::CBtActionAim, QAngle);
				MEMBER(aim_timer, server::CBtActionAim, server::CountdownTimer);
				MEMBER(sniper_hold_timer, server::CBtActionAim, server::CountdownTimer);
				MEMBER(focus_interval_timer, server::CBtActionAim, server::CountdownTimer);
				MEMBER(b_acquired, server::CBtActionAim, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBtActionAim

			struct locksound_t {
				MEMBER(s_locked_sound, server::locksound_t, CUtlSymbolLarge);
				MEMBER(s_unlocked_sound, server::locksound_t, CUtlSymbolLarge);
				MEMBER(flwait_sound, server::locksound_t, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct locksound_t

			struct magnetted_objects_t {
				MEMBER(h_entity, server::magnetted_objects_t, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct magnetted_objects_t

			class CCommentarySystem {
				MEMBER(b_commentary_convars_changing, server::CCommentarySystem, bool);
				MEMBER(b_commentary_enabled_mid_game, server::CCommentarySystem, bool);
				MEMBER(fl_next_teleport_time, server::CCommentarySystem, entity2::GameTime_t);
				MEMBER(i_teleport_stage, server::CCommentarySystem, int32_t);
				MEMBER(b_cheat_state, server::CCommentarySystem, bool);
				MEMBER(b_is_first_spawn_group_to_load, server::CCommentarySystem, bool);
				MEMBER(h_current_node, server::CCommentarySystem, chandle<server::CPointCommentaryNode>);
				MEMBER(h_active_commentary_node, server::CCommentarySystem, chandle<server::CPointCommentaryNode>);
				MEMBER(h_last_commentary_node, server::CCommentarySystem, chandle<server::CPointCommentaryNode>);
				MEMBER(vec_nodes, server::CCommentarySystem, cutl_vector<chandle<server::CPointCommentaryNode>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCommentarySystem

			struct PulseScriptedSequenceData_t {
				MEMBER(n_actor_id, server::PulseScriptedSequenceData_t, int32_t);
				MEMBER(sz_pre_idle_sequence, server::PulseScriptedSequenceData_t, CUtlString);
				MEMBER(sz_entry_sequence, server::PulseScriptedSequenceData_t, CUtlString);
				MEMBER(sz_sequence, server::PulseScriptedSequenceData_t, CUtlString);
				MEMBER(sz_exit_sequence, server::PulseScriptedSequenceData_t, CUtlString);
				MEMBER(n_move_to, server::PulseScriptedSequenceData_t, client::ScriptedMoveTo_t);
				MEMBER(n_move_to_gait, server::PulseScriptedSequenceData_t, modellib::MovementGait_t);
				MEMBER(n_held_weapon_behavior, server::PulseScriptedSequenceData_t, client::ScriptedHeldWeaponBehavior_t);
				MEMBER(b_loop_pre_idle_sequence, server::PulseScriptedSequenceData_t, bool);
				MEMBER(b_loop_action_sequence, server::PulseScriptedSequenceData_t, bool);
				MEMBER(b_loop_post_idle_sequence, server::PulseScriptedSequenceData_t, bool);
				MEMBER(b_ignore_look_at, server::PulseScriptedSequenceData_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseScriptedSequenceData_t

			class VelocitySampler {
				MEMBER(prev_sample, server::VelocitySampler, Vector);
				MEMBER(f_prev_sample_time, server::VelocitySampler, entity2::GameTime_t);
				MEMBER(f_ideal_sample_rate, server::VelocitySampler, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class VelocitySampler

			struct dynpitchvol_base_t {
				MEMBER(preset, server::dynpitchvol_base_t, int32_t);
				MEMBER(pitchrun, server::dynpitchvol_base_t, int32_t);
				MEMBER(pitchstart, server::dynpitchvol_base_t, int32_t);
				MEMBER(spinup, server::dynpitchvol_base_t, int32_t);
				MEMBER(spindown, server::dynpitchvol_base_t, int32_t);
				MEMBER(volrun, server::dynpitchvol_base_t, int32_t);
				MEMBER(volstart, server::dynpitchvol_base_t, int32_t);
				MEMBER(fadein, server::dynpitchvol_base_t, int32_t);
				MEMBER(fadeout, server::dynpitchvol_base_t, int32_t);
				MEMBER(lfotype, server::dynpitchvol_base_t, int32_t);
				MEMBER(lforate, server::dynpitchvol_base_t, int32_t);
				MEMBER(lfomodpitch, server::dynpitchvol_base_t, int32_t);
				MEMBER(lfomodvol, server::dynpitchvol_base_t, int32_t);
				MEMBER(cspinup, server::dynpitchvol_base_t, int32_t);
				MEMBER(cspincount, server::dynpitchvol_base_t, int32_t);
				MEMBER(pitch, server::dynpitchvol_base_t, int32_t);
				MEMBER(spinupsav, server::dynpitchvol_base_t, int32_t);
				MEMBER(spindownsav, server::dynpitchvol_base_t, int32_t);
				MEMBER(pitchfrac, server::dynpitchvol_base_t, int32_t);
				MEMBER(vol, server::dynpitchvol_base_t, int32_t);
				MEMBER(fadeinsav, server::dynpitchvol_base_t, int32_t);
				MEMBER(fadeoutsav, server::dynpitchvol_base_t, int32_t);
				MEMBER(volfrac, server::dynpitchvol_base_t, int32_t);
				MEMBER(lfofrac, server::dynpitchvol_base_t, int32_t);
				MEMBER(lfomult, server::dynpitchvol_base_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct dynpitchvol_base_t

			struct dynpitchvol_t : public server::dynpitchvol_base_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct dynpitchvol_t

			class ConstraintSoundInfo {
				MEMBER(v_sampler, server::ConstraintSoundInfo, server::VelocitySampler);
				MEMBER(sound_profile, server::ConstraintSoundInfo, server::SimpleConstraintSoundProfile);
				MEMBER(forward_axis, server::ConstraintSoundInfo, Vector);
				MEMBER(isz_travel_sound_fwd, server::ConstraintSoundInfo, CUtlSymbolLarge);
				MEMBER(isz_travel_sound_back, server::ConstraintSoundInfo, CUtlSymbolLarge);
				MEMBER_ARR(isz_reversal_sounds, server::ConstraintSoundInfo, 3, CUtlSymbolLarge);
				MEMBER(b_play_travel_sound, server::ConstraintSoundInfo, bool);
				MEMBER(b_play_reversal_sound, server::ConstraintSoundInfo, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class ConstraintSoundInfo

			class CGameScriptedMoveData {
				MEMBER(v_accumulated_root_motion, server::CGameScriptedMoveData, Vector);
				MEMBER(v_dest, server::CGameScriptedMoveData, Vector);
				MEMBER(v_src, server::CGameScriptedMoveData, Vector);
				MEMBER(ang_src, server::CGameScriptedMoveData, QAngle);
				MEMBER(ang_dst, server::CGameScriptedMoveData, QAngle);
				MEMBER(ang_current, server::CGameScriptedMoveData, QAngle);
				MEMBER(h_dest_entity, server::CGameScriptedMoveData, chandle<server::CBaseEntity>);
				MEMBER(fl_locked_speed, server::CGameScriptedMoveData, float);
				MEMBER(fl_ang_rate, server::CGameScriptedMoveData, float);
				MEMBER(fl_duration, server::CGameScriptedMoveData, float);
				MEMBER(fl_start_time, server::CGameScriptedMoveData, entity2::GameTime_t);
				MEMBER(b_active, server::CGameScriptedMoveData, bool);
				MEMBER(b_teleport_on_end, server::CGameScriptedMoveData, bool);
				MEMBER(b_ignore_rotation, server::CGameScriptedMoveData, bool);
				MEMBER(n_type, server::CGameScriptedMoveData, server::ScriptedMoveType_t);
				MEMBER(b_success, server::CGameScriptedMoveData, bool);
				MEMBER(n_forced_crouch_state, server::CGameScriptedMoveData, server::ForcedCrouchState_t);
				MEMBER(b_ignore_collisions, server::CGameScriptedMoveData, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGameScriptedMoveData

			class SimpleConstraintSoundProfile {
				MEMBER(e_keypoints, server::SimpleConstraintSoundProfile, server::SimpleConstraintSoundProfile_SimpleConstraintsSoundProfileKeypoints_t);
				MEMBER_ARR(key_points, server::SimpleConstraintSoundProfile, 2, float);
				MEMBER_ARR(reversal_sound_thresholds, server::SimpleConstraintSoundProfile, 3, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class SimpleConstraintSoundProfile

			struct lerpdata_t {
				MEMBER(h_ent, server::lerpdata_t, chandle<server::CBaseEntity>);
				MEMBER(move_type, server::lerpdata_t, client::MoveType_t);
				MEMBER(fl_start_time, server::lerpdata_t, entity2::GameTime_t);
				MEMBER(vec_start_origin, server::lerpdata_t, Vector);
				MEMBER(q_start_rot, server::lerpdata_t, Quaternion);
				MEMBER(n_fxindex, server::lerpdata_t, client::ParticleIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct lerpdata_t

			class CResponseQueue {
				MEMBER(expresser_targets, server::CResponseQueue, cutl_vector<server::CAI_Expresser*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CResponseQueue

			class CSound {
				MEMBER(h_owner, server::CSound, chandle<server::CBaseEntity>);
				MEMBER(h_target, server::CSound, chandle<server::CBaseEntity>);
				MEMBER(i_volume, server::CSound, int32_t);
				MEMBER(fl_occlusion_scale, server::CSound, float);
				MEMBER(sound, server::CSound, server::AISound_t);
				MEMBER(i_next_audible, server::CSound, int32_t);
				MEMBER(fl_expire_time, server::CSound, entity2::GameTime_t);
				MEMBER(i_next, server::CSound, int16_t);
				MEMBER(b_no_expiration_time, server::CSound, bool);
				MEMBER(owner_channel_index, server::CSound, int32_t);
				MEMBER(vec_origin, server::CSound, Vector);
				MEMBER(b_has_owner, server::CSound, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSound

			struct CPulseCell_Outflow_ScriptedSequence_CursorState_t {
				MEMBER(scripted_sequence, server::CPulseCell_Outflow_ScriptedSequence_CursorState_t, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CPulseCell_Outflow_ScriptedSequence_CursorState_t

			class CHintMessage {
				MEMBER(hint_string, server::CHintMessage, char*);
				MEMBER(args, server::CHintMessage, cutl_vector<char*>);
				MEMBER(duration, server::CHintMessage, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHintMessage

			class IPulseComponentEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IPulseComponentEntity

			struct CGameScriptedMoveDef_t {
				MEMBER(n_type, server::CGameScriptedMoveDef_t, server::ScriptedMoveType_t);
				MEMBER(v_dest_offset, server::CGameScriptedMoveDef_t, Vector);
				MEMBER(h_dest_entity, server::CGameScriptedMoveDef_t, chandle<server::CBaseEntity>);
				MEMBER(ang_dest, server::CGameScriptedMoveDef_t, QAngle);
				MEMBER(fl_duration, server::CGameScriptedMoveDef_t, float);
				MEMBER(fl_ang_rate, server::CGameScriptedMoveDef_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CGameScriptedMoveDef_t

			struct SellbackPurchaseEntry_t {
				MEMBER(un_def_idx, server::SellbackPurchaseEntry_t, uint16_t);
				MEMBER(n_cost, server::SellbackPurchaseEntry_t, int32_t);
				MEMBER(n_prev_armor, server::SellbackPurchaseEntry_t, int32_t);
				MEMBER(b_prev_helmet, server::SellbackPurchaseEntry_t, bool);
				MEMBER(h_item, server::SellbackPurchaseEntry_t, CEntityHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SellbackPurchaseEntry_t

			class CCSPointScriptExtensions_player {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScriptExtensions_player

			struct fogparams_t {
				MEMBER(dir_primary, server::fogparams_t, Vector);
				MEMBER(color_primary, server::fogparams_t, Color);
				MEMBER(color_secondary, server::fogparams_t, Color);
				MEMBER(color_primary_lerp_to, server::fogparams_t, Color);
				MEMBER(color_secondary_lerp_to, server::fogparams_t, Color);
				MEMBER(start, server::fogparams_t, float);
				MEMBER(end, server::fogparams_t, float);
				MEMBER(farz, server::fogparams_t, float);
				MEMBER(maxdensity, server::fogparams_t, float);
				MEMBER(exponent, server::fogparams_t, float);
				MEMBER(hdrcolor_scale, server::fogparams_t, float);
				MEMBER(skybox_fog_factor, server::fogparams_t, float);
				MEMBER(skybox_fog_factor_lerp_to, server::fogparams_t, float);
				MEMBER(start_lerp_to, server::fogparams_t, float);
				MEMBER(end_lerp_to, server::fogparams_t, float);
				MEMBER(maxdensity_lerp_to, server::fogparams_t, float);
				MEMBER(lerptime, server::fogparams_t, entity2::GameTime_t);
				MEMBER(duration, server::fogparams_t, float);
				MEMBER(blendtobackground, server::fogparams_t, float);
				MEMBER(scattering, server::fogparams_t, float);
				MEMBER(locallightscale, server::fogparams_t, float);
				MEMBER(enable, server::fogparams_t, bool);
				MEMBER(blend, server::fogparams_t, bool);
				MEMBER(b_no_reflection_fog, server::fogparams_t, bool);
				MEMBER(b_padding, server::fogparams_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct fogparams_t

			class CCSPointPulseAPI {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointPulseAPI

			class CPathSimpleAPI {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathSimpleAPI

			class CNetworkedSequenceOperation {
				MEMBER(h_sequence, server::CNetworkedSequenceOperation, animationsystem::HSequence);
				MEMBER(fl_prev_cycle, server::CNetworkedSequenceOperation, float);
				MEMBER(fl_cycle, server::CNetworkedSequenceOperation, float);
				MEMBER(fl_weight, server::CNetworkedSequenceOperation, CNetworkedQuantizedFloat);
				MEMBER(b_sequence_change_networked, server::CNetworkedSequenceOperation, bool);
				MEMBER(b_discontinuity, server::CNetworkedSequenceOperation, bool);
				MEMBER(fl_prev_cycle_from_discontinuity, server::CNetworkedSequenceOperation, float);
				MEMBER(fl_prev_cycle_for_anim_event_detection, server::CNetworkedSequenceOperation, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNetworkedSequenceOperation

			struct CPulseCell_Outflow_ListenForEntityOutput_CursorState_t {
				MEMBER(entity, server::CPulseCell_Outflow_ListenForEntityOutput_CursorState_t, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CPulseCell_Outflow_ListenForEntityOutput_CursorState_t

			class CIronSightController {
				MEMBER(b_iron_sight_available, server::CIronSightController, bool);
				MEMBER(fl_iron_sight_amount, server::CIronSightController, float);
				MEMBER(fl_iron_sight_amount_gained, server::CIronSightController, float);
				MEMBER(fl_iron_sight_amount_biased, server::CIronSightController, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CIronSightController

			struct ResponseContext_t {
				MEMBER(isz_name, server::ResponseContext_t, CUtlSymbolLarge);
				MEMBER(isz_value, server::ResponseContext_t, CUtlSymbolLarge);
				MEMBER(f_expiration_time, server::ResponseContext_t, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ResponseContext_t

			struct audioparams_t {
				MEMBER_ARR(local_sound, server::audioparams_t, 8, Vector);
				MEMBER(soundscape_index, server::audioparams_t, int32_t);
				MEMBER(local_bits, server::audioparams_t, uint8_t);
				MEMBER(soundscape_entity_list_index, server::audioparams_t, int32_t);
				MEMBER(sound_event_hash, server::audioparams_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct audioparams_t

			class CTakeDamageInfoAPI {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTakeDamageInfoAPI

			struct ServerAuthoritativeWeaponSlot_t {
				MEMBER(un_class, server::ServerAuthoritativeWeaponSlot_t, uint16_t);
				MEMBER(un_slot, server::ServerAuthoritativeWeaponSlot_t, uint16_t);
				MEMBER(un_item_def_idx, server::ServerAuthoritativeWeaponSlot_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ServerAuthoritativeWeaponSlot_t

			class CCSPointScriptExtensions_observer {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScriptExtensions_observer

			struct VPhysicsCollisionAttribute_t {
				MEMBER(n_interacts_as, server::VPhysicsCollisionAttribute_t, uint64_t);
				MEMBER(n_interacts_with, server::VPhysicsCollisionAttribute_t, uint64_t);
				MEMBER(n_interacts_exclude, server::VPhysicsCollisionAttribute_t, uint64_t);
				MEMBER(n_entity_id, server::VPhysicsCollisionAttribute_t, uint32_t);
				MEMBER(n_owner_id, server::VPhysicsCollisionAttribute_t, uint32_t);
				MEMBER(n_hierarchy_id, server::VPhysicsCollisionAttribute_t, uint16_t);
				MEMBER(n_collision_group, server::VPhysicsCollisionAttribute_t, uint8_t);
				MEMBER(n_collision_function_mask, server::VPhysicsCollisionAttribute_t, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VPhysicsCollisionAttribute_t

			class CCSGameModeRules {
				MEMBER(_m_p_chain_entity, server::CCSGameModeRules, entity2::CNetworkVarChainer);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGameModeRules

			class CCSGameModeRules_Deathmatch : public server::CCSGameModeRules {
				MEMBER(fl_dmbonus_start_time, server::CCSGameModeRules_Deathmatch, entity2::GameTime_t);
				MEMBER(fl_dmbonus_time_length, server::CCSGameModeRules_Deathmatch, float);
				MEMBER(s_dmbonus_weapon, server::CCSGameModeRules_Deathmatch, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGameModeRules_Deathmatch

			class CCSGameModeRules_Noop : public server::CCSGameModeRules {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGameModeRules_Noop

			class CCSGameModeRules_ArmsRace : public server::CCSGameModeRules {
				MEMBER(weapon_sequence, server::CCSGameModeRules_ArmsRace, CNetworkUtlVectorBase<CUtlString>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGameModeRules_ArmsRace

			class CBot {
				MEMBER(p_controller, server::CBot, server::CCSPlayerController*);
				MEMBER(p_player, server::CBot, server::CCSPlayerPawn*);
				MEMBER(b_has_spawned, server::CBot, bool);
				MEMBER(id, server::CBot, uint32_t);
				MEMBER(is_running, server::CBot, bool);
				MEMBER(is_crouching, server::CBot, bool);
				MEMBER(forward_speed, server::CBot, float);
				MEMBER(left_speed, server::CBot, float);
				MEMBER(vertical_speed, server::CBot, float);
				MEMBER(button_flags, server::CBot, uint64_t);
				MEMBER(jump_timestamp, server::CBot, float);
				MEMBER(view_forward, server::CBot, Vector);
				MEMBER(posture_stack_index, server::CBot, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBot

			class CCSBot : public server::CBot {
				MEMBER(eye_position, server::CCSBot, Vector);
				MEMBER_ARR(name, server::CCSBot, 64, char);
				MEMBER(combat_range, server::CCSBot, float);
				MEMBER(is_rogue, server::CCSBot, bool);
				MEMBER(rogue_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(died_last_round, server::CCSBot, bool);
				MEMBER(safe_time, server::CCSBot, float);
				MEMBER(was_safe, server::CCSBot, bool);
				MEMBER(blind_fire, server::CCSBot, bool);
				MEMBER(surprise_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(b_allow_active, server::CCSBot, bool);
				MEMBER(is_following, server::CCSBot, bool);
				MEMBER(leader, server::CCSBot, chandle<server::CCSPlayerPawn>);
				MEMBER(follow_timestamp, server::CCSBot, float);
				MEMBER(allow_auto_follow_time, server::CCSBot, float);
				MEMBER(hurry_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(alert_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(sneak_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(panic_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(state_timestamp, server::CCSBot, float);
				MEMBER(is_attacking, server::CCSBot, bool);
				MEMBER(is_opening_door, server::CCSBot, bool);
				MEMBER(task_entity, server::CCSBot, chandle<server::CBaseEntity>);
				MEMBER(goal_position, server::CCSBot, Vector);
				MEMBER(goal_entity, server::CCSBot, chandle<server::CBaseEntity>);
				MEMBER(avoid, server::CCSBot, chandle<server::CBaseEntity>);
				MEMBER(avoid_timestamp, server::CCSBot, float);
				MEMBER(is_stopping, server::CCSBot, bool);
				MEMBER(has_visited_enemy_spawn, server::CCSBot, bool);
				MEMBER(still_timer, server::CCSBot, server::IntervalTimer);
				MEMBER(b_eye_angles_under_path_finder_control, server::CCSBot, bool);
				MEMBER(path_index, server::CCSBot, int32_t);
				MEMBER(area_entered_timestamp, server::CCSBot, entity2::GameTime_t);
				MEMBER(repath_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(avoid_friend_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(is_friend_in_the_way, server::CCSBot, bool);
				MEMBER(polite_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(is_waiting_behind_friend, server::CCSBot, bool);
				MEMBER(path_ladder_end, server::CCSBot, float);
				MEMBER(must_run_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(wait_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(update_travel_distance_timer, server::CCSBot, server::CountdownTimer);
				MEMBER_ARR(player_travel_distance, server::CCSBot, 64, float);
				MEMBER(travel_distance_phase, server::CCSBot, uint8_t);
				MEMBER(hostage_escort_count, server::CCSBot, uint8_t);
				MEMBER(hostage_escort_count_timestamp, server::CCSBot, float);
				MEMBER(desired_team, server::CCSBot, int32_t);
				MEMBER(has_joined, server::CCSBot, bool);
				MEMBER(is_waiting_for_hostage, server::CCSBot, bool);
				MEMBER(inhibit_waiting_for_hostage_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(wait_for_hostage_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(noise_position, server::CCSBot, Vector);
				MEMBER(noise_travel_distance, server::CCSBot, float);
				MEMBER(noise_timestamp, server::CCSBot, float);
				MEMBER(noise_source, server::CCSBot, server::CCSPlayerPawn*);
				MEMBER(noise_bend_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(bent_noise_position, server::CCSBot, Vector);
				MEMBER(bend_noise_position_valid, server::CCSBot, bool);
				MEMBER(look_around_state_timestamp, server::CCSBot, float);
				MEMBER(look_ahead_angle, server::CCSBot, float);
				MEMBER(forward_angle, server::CCSBot, float);
				MEMBER(inhibit_look_around_timestamp, server::CCSBot, float);
				MEMBER(look_at_spot, server::CCSBot, Vector);
				MEMBER(look_at_spot_duration, server::CCSBot, float);
				MEMBER(look_at_spot_timestamp, server::CCSBot, float);
				MEMBER(look_at_spot_angle_tolerance, server::CCSBot, float);
				MEMBER(look_at_spot_clear_if_close, server::CCSBot, bool);
				MEMBER(look_at_spot_attack, server::CCSBot, bool);
				MEMBER(look_at_desc, server::CCSBot, char*);
				MEMBER(peripheral_timestamp, server::CCSBot, float);
				MEMBER(approach_point_count, server::CCSBot, uint8_t);
				MEMBER(approach_point_view_position, server::CCSBot, Vector);
				MEMBER(view_steady_timer, server::CCSBot, server::IntervalTimer);
				MEMBER(toss_grenade_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(is_avoiding_grenade, server::CCSBot, server::CountdownTimer);
				MEMBER(spot_check_timestamp, server::CCSBot, float);
				MEMBER(checked_hiding_spot_count, server::CCSBot, int32_t);
				MEMBER(look_pitch, server::CCSBot, float);
				MEMBER(look_pitch_vel, server::CCSBot, float);
				MEMBER(look_yaw, server::CCSBot, float);
				MEMBER(look_yaw_vel, server::CCSBot, float);
				MEMBER(target_spot, server::CCSBot, Vector);
				MEMBER(target_spot_velocity, server::CCSBot, Vector);
				MEMBER(target_spot_predicted, server::CCSBot, Vector);
				MEMBER(aim_error, server::CCSBot, QAngle);
				MEMBER(aim_goal, server::CCSBot, QAngle);
				MEMBER(target_spot_time, server::CCSBot, entity2::GameTime_t);
				MEMBER(aim_focus, server::CCSBot, float);
				MEMBER(aim_focus_interval, server::CCSBot, float);
				MEMBER(aim_focus_next_update, server::CCSBot, entity2::GameTime_t);
				MEMBER(ignore_enemies_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(enemy, server::CCSBot, chandle<server::CCSPlayerPawn>);
				MEMBER(is_enemy_visible, server::CCSBot, bool);
				MEMBER(visible_enemy_parts, server::CCSBot, uint8_t);
				MEMBER(last_enemy_position, server::CCSBot, Vector);
				MEMBER(last_saw_enemy_timestamp, server::CCSBot, float);
				MEMBER(first_saw_enemy_timestamp, server::CCSBot, float);
				MEMBER(current_enemy_acquire_timestamp, server::CCSBot, float);
				MEMBER(enemy_death_timestamp, server::CCSBot, float);
				MEMBER(friend_death_timestamp, server::CCSBot, float);
				MEMBER(is_last_enemy_dead, server::CCSBot, bool);
				MEMBER(nearby_enemy_count, server::CCSBot, int32_t);
				MEMBER(bomber, server::CCSBot, chandle<server::CCSPlayerPawn>);
				MEMBER(nearby_friend_count, server::CCSBot, int32_t);
				MEMBER(closest_visible_friend, server::CCSBot, chandle<server::CCSPlayerPawn>);
				MEMBER(closest_visible_human_friend, server::CCSBot, chandle<server::CCSPlayerPawn>);
				MEMBER(attention_interval, server::CCSBot, server::IntervalTimer);
				MEMBER(attacker, server::CCSBot, chandle<server::CCSPlayerPawn>);
				MEMBER(attacked_timestamp, server::CCSBot, float);
				MEMBER(burned_by_flames_timer, server::CCSBot, server::IntervalTimer);
				MEMBER(last_victim_id, server::CCSBot, int32_t);
				MEMBER(is_aiming_at_enemy, server::CCSBot, bool);
				MEMBER(is_rapid_firing, server::CCSBot, bool);
				MEMBER(equip_timer, server::CCSBot, server::IntervalTimer);
				MEMBER(zoom_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(fire_weapon_timestamp, server::CCSBot, entity2::GameTime_t);
				MEMBER(look_for_weapons_on_ground_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(b_is_sleeping, server::CCSBot, bool);
				MEMBER(is_enemy_sniper_visible, server::CCSBot, bool);
				MEMBER(saw_enemy_sniper_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(enemy_queue_index, server::CCSBot, uint8_t);
				MEMBER(enemy_queue_count, server::CCSBot, uint8_t);
				MEMBER(enemy_queue_attend_index, server::CCSBot, uint8_t);
				MEMBER(is_stuck, server::CCSBot, bool);
				MEMBER(stuck_timestamp, server::CCSBot, entity2::GameTime_t);
				MEMBER(stuck_spot, server::CCSBot, Vector);
				MEMBER(wiggle_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(stuck_jump_timer, server::CCSBot, server::CountdownTimer);
				MEMBER(next_cleanup_check_timestamp, server::CCSBot, entity2::GameTime_t);
				MEMBER_ARR(avg_vel, server::CCSBot, 10, float);
				MEMBER(avg_vel_index, server::CCSBot, int32_t);
				MEMBER(avg_vel_count, server::CCSBot, int32_t);
				MEMBER(last_origin, server::CCSBot, Vector);
				MEMBER(last_radio_recieved_timestamp, server::CCSBot, float);
				MEMBER(last_radio_sent_timestamp, server::CCSBot, float);
				MEMBER(radio_subject, server::CCSBot, chandle<server::CCSPlayerPawn>);
				MEMBER(radio_position, server::CCSBot, Vector);
				MEMBER(voice_end_timestamp, server::CCSBot, float);
				MEMBER(last_valid_reaction_queue_frame, server::CCSBot, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSBot

			class CHintMessageQueue {
				MEMBER(tm_message_end, server::CHintMessageQueue, float);
				MEMBER(messages, server::CHintMessageQueue, cutl_vector<server::CHintMessage*>);
				MEMBER(p_player_controller, server::CHintMessageQueue, server::CBasePlayerController*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHintMessageQueue

			struct WeaponPurchaseTracker_t {
				MEMBER(weapon_purchases, server::WeaponPurchaseTracker_t, CUtlVectorEmbeddedNetworkVar<server::WeaponPurchaseCount_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct WeaponPurchaseTracker_t

			struct CAttributeManager_cached_attribute_float_t {
				MEMBER(fl_in, server::CAttributeManager_cached_attribute_float_t, float);
				MEMBER(i_attrib_hook, server::CAttributeManager_cached_attribute_float_t, CUtlSymbolLarge);
				MEMBER(fl_out, server::CAttributeManager_cached_attribute_float_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CAttributeManager_cached_attribute_float_t

			class CBuoyancyHelper {
				MEMBER(n_fluid_type, server::CBuoyancyHelper, CUtlStringToken);
				MEMBER(fl_fluid_density, server::CBuoyancyHelper, float);
				MEMBER(vec_fraction_of_wheel_submerged_for_wheel_friction, server::CBuoyancyHelper, cutl_vector<float>);
				MEMBER(vec_wheel_friction_scales, server::CBuoyancyHelper, cutl_vector<float>);
				MEMBER(vec_fraction_of_wheel_submerged_for_wheel_drag, server::CBuoyancyHelper, cutl_vector<float>);
				MEMBER(vec_wheel_drag, server::CBuoyancyHelper, cutl_vector<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBuoyancyHelper

			class CShatterGlassShard {
				MEMBER(h_shard_handle, server::CShatterGlassShard, uint32_t);
				MEMBER(vec_panel_vertices, server::CShatterGlassShard, cutl_vector<Vector2D>);
				MEMBER(v_local_panel_space_origin, server::CShatterGlassShard, Vector2D);
				MEMBER(h_model, server::CShatterGlassShard, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);
				MEMBER(h_physics_entity, server::CShatterGlassShard, chandle<server::CShatterGlassShardPhysics>);
				MEMBER(h_parent_panel, server::CShatterGlassShard, chandle<server::CFuncShatterglass>);
				MEMBER(h_parent_shard, server::CShatterGlassShard, uint32_t);
				MEMBER(shatter_stress_type, server::CShatterGlassShard, client::ShatterGlassStressType);
				MEMBER(vec_stress_velocity, server::CShatterGlassShard, Vector);
				MEMBER(b_created_model, server::CShatterGlassShard, bool);
				MEMBER(fl_longest_edge, server::CShatterGlassShard, float);
				MEMBER(fl_shortest_edge, server::CShatterGlassShard, float);
				MEMBER(fl_longest_across, server::CShatterGlassShard, float);
				MEMBER(fl_shortest_across, server::CShatterGlassShard, float);
				MEMBER(fl_sum_of_all_edges, server::CShatterGlassShard, float);
				MEMBER(fl_area, server::CShatterGlassShard, float);
				MEMBER(n_on_frame_edge, server::CShatterGlassShard, client::OnFrame);
				MEMBER(n_sub_shard_generation, server::CShatterGlassShard, int32_t);
				MEMBER(vec_average_vert_position, server::CShatterGlassShard, Vector2D);
				MEMBER(b_average_vert_position_is_valid, server::CShatterGlassShard, bool);
				MEMBER(vec_panel_space_stress_position_a, server::CShatterGlassShard, Vector2D);
				MEMBER(vec_panel_space_stress_position_b, server::CShatterGlassShard, Vector2D);
				MEMBER(b_stress_position_ais_valid, server::CShatterGlassShard, bool);
				MEMBER(b_stress_position_bis_valid, server::CShatterGlassShard, bool);
				MEMBER(b_flagged_for_removal, server::CShatterGlassShard, bool);
				MEMBER(fl_physics_entity_spawned_at_time, server::CShatterGlassShard, entity2::GameTime_t);
				MEMBER(h_entity_hitting_me, server::CShatterGlassShard, chandle<server::CBaseEntity>);
				MEMBER(vec_neighbors, server::CShatterGlassShard, cutl_vector<uint32_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CShatterGlassShard

			class CPhysicsShake {
				MEMBER(force, server::CPhysicsShake, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysicsShake

			class CRetakeGameRules {
				MEMBER(n_match_seed, server::CRetakeGameRules, int32_t);
				MEMBER(b_blockers_present, server::CRetakeGameRules, bool);
				MEMBER(b_round_in_progress, server::CRetakeGameRules, bool);
				MEMBER(i_first_second_half_round, server::CRetakeGameRules, int32_t);
				MEMBER(i_bomb_site, server::CRetakeGameRules, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRetakeGameRules

			class CAttributeList {
				MEMBER(attributes, server::CAttributeList, CUtlVectorEmbeddedNetworkVar<server::CEconItemAttribute>);
				MEMBER(p_manager, server::CAttributeList, server::CAttributeManager*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAttributeList

			struct SequenceHistory_t {
				MEMBER(h_sequence, server::SequenceHistory_t, animationsystem::HSequence);
				MEMBER(fl_seq_start_time, server::SequenceHistory_t, entity2::GameTime_t);
				MEMBER(fl_seq_fixed_cycle, server::SequenceHistory_t, float);
				MEMBER(n_seq_loop_mode, server::SequenceHistory_t, client::AnimLoopMode_t);
				MEMBER(fl_playback_rate, server::SequenceHistory_t, float);
				MEMBER(fl_cycles_per_second, server::SequenceHistory_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SequenceHistory_t

			struct AISound_t {
				MEMBER(n_type, server::AISound_t, uint16_t);
				MEMBER(n_flags, server::AISound_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct AISound_t

			class CConstantForceController {
				MEMBER(linear, server::CConstantForceController, Vector);
				MEMBER(angular, server::CConstantForceController, RotationVector);
				MEMBER(linear_save, server::CConstantForceController, Vector);
				MEMBER(angular_save, server::CConstantForceController, RotationVector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CConstantForceController

			class EngineCountdownTimer {
				MEMBER(duration, server::EngineCountdownTimer, float);
				MEMBER(timestamp, server::EngineCountdownTimer, float);
				MEMBER(timescale, server::EngineCountdownTimer, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class EngineCountdownTimer

			struct ActiveModelConfig_t {
				MEMBER(handle, server::ActiveModelConfig_t, client::ModelConfigHandle_t);
				MEMBER(name, server::ActiveModelConfig_t, CUtlSymbolLarge);
				MEMBER(associated_entities, server::ActiveModelConfig_t, CNetworkUtlVectorBase<chandle<server::CBaseModelEntity>>);
				MEMBER(associated_entity_names, server::ActiveModelConfig_t, CNetworkUtlVectorBase<CUtlSymbolLarge>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ActiveModelConfig_t

			class CCollisionProperty {
				MEMBER(collision_attribute, server::CCollisionProperty, server::VPhysicsCollisionAttribute_t);
				MEMBER(vec_mins, server::CCollisionProperty, Vector);
				MEMBER(vec_maxs, server::CCollisionProperty, Vector);
				MEMBER(us_solid_flags, server::CCollisionProperty, uint8_t);
				MEMBER(n_solid_type, server::CCollisionProperty, client::SolidType_t);
				MEMBER(trigger_bloat, server::CCollisionProperty, uint8_t);
				MEMBER(n_surround_type, server::CCollisionProperty, client::SurroundingBoundsType_t);
				MEMBER(collision_group, server::CCollisionProperty, uint8_t);
				MEMBER(n_enable_physics, server::CCollisionProperty, uint8_t);
				MEMBER(fl_bounding_radius, server::CCollisionProperty, float);
				MEMBER(vec_specified_surrounding_mins, server::CCollisionProperty, Vector);
				MEMBER(vec_specified_surrounding_maxs, server::CCollisionProperty, Vector);
				MEMBER(vec_surrounding_maxs, server::CCollisionProperty, Vector);
				MEMBER(vec_surrounding_mins, server::CCollisionProperty, Vector);
				MEMBER(v_capsule_center1, server::CCollisionProperty, Vector);
				MEMBER(v_capsule_center2, server::CCollisionProperty, Vector);
				MEMBER(fl_capsule_radius, server::CCollisionProperty, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCollisionProperty

			struct PhysicsRagdollPose_t {
				MEMBER(transforms, server::PhysicsRagdollPose_t, CNetworkUtlVectorBase<CTransform>);
				MEMBER(h_owner, server::PhysicsRagdollPose_t, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PhysicsRagdollPose_t

			class CAnimGraphNetworkedVariables {
				MEMBER(pred_net_bool_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<uint32_t>);
				MEMBER(pred_net_byte_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<uint8_t>);
				MEMBER(pred_net_uint16_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<uint16_t>);
				MEMBER(pred_net_int_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<int32_t>);
				MEMBER(pred_net_uint32_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<uint32_t>);
				MEMBER(pred_net_uint64_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<uint64_t>);
				MEMBER(pred_net_float_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<float>);
				MEMBER(pred_net_vector_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<Vector>);
				MEMBER(pred_net_quaternion_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<Quaternion>);
				MEMBER(pred_net_global_symbol_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<CGlobalSymbol>);
				MEMBER(owner_only_pred_net_bool_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<uint32_t>);
				MEMBER(owner_only_pred_net_byte_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<uint8_t>);
				MEMBER(owner_only_pred_net_uint16_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<uint16_t>);
				MEMBER(owner_only_pred_net_int_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<int32_t>);
				MEMBER(owner_only_pred_net_uint32_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<uint32_t>);
				MEMBER(owner_only_pred_net_uint64_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<uint64_t>);
				MEMBER(owner_only_pred_net_float_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<float>);
				MEMBER(owner_only_pred_net_vector_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<Vector>);
				MEMBER(owner_only_pred_net_quaternion_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<Quaternion>);
				MEMBER(owner_only_pred_net_global_symbol_variables, server::CAnimGraphNetworkedVariables, CNetworkUtlVectorBase<CGlobalSymbol>);
				MEMBER(n_bool_variables_count, server::CAnimGraphNetworkedVariables, int32_t);
				MEMBER(n_owner_only_bool_variables_count, server::CAnimGraphNetworkedVariables, int32_t);
				MEMBER(n_random_seed_offset, server::CAnimGraphNetworkedVariables, int32_t);
				MEMBER(fl_last_teleport_time, server::CAnimGraphNetworkedVariables, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimGraphNetworkedVariables

			class CAttributeManager {
				MEMBER(providers, server::CAttributeManager, cutl_vector<chandle<server::CBaseEntity>>);
				MEMBER(i_reapply_provision_parity, server::CAttributeManager, int32_t);
				MEMBER(h_outer, server::CAttributeManager, chandle<server::CBaseEntity>);
				MEMBER(b_prevent_loopback, server::CAttributeManager, bool);
				MEMBER(provider_type, server::CAttributeManager, client::attributeprovidertypes_t);
				MEMBER(cached_results, server::CAttributeManager, cutl_vector<server::CAttributeManager_cached_attribute_float_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAttributeManager

			class CAttributeContainer : public server::CAttributeManager {
				MEMBER(item, server::CAttributeContainer, server::CEconItemView);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAttributeContainer

			class CBaseIssue {
				MEMBER_ARR(sz_type_string, server::CBaseIssue, 64, char);
				MEMBER_ARR(sz_details_string, server::CBaseIssue, 260, char);
				MEMBER(i_num_yes_votes, server::CBaseIssue, int32_t);
				MEMBER(i_num_no_votes, server::CBaseIssue, int32_t);
				MEMBER(i_num_potential_votes, server::CBaseIssue, int32_t);
				MEMBER(p_vote_controller, server::CBaseIssue, server::CVoteController*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseIssue

			class CModelState {
				MEMBER(h_model, server::CModelState, CStrongHandle<resourcesystem::InfoForResourceTypeCModel>);
				MEMBER(model_name, server::CModelState, CUtlSymbolLarge);
				MEMBER(b_client_cloth_creation_suppressed, server::CModelState, bool);
				MEMBER(mesh_group_mask, server::CModelState, uint64_t);
				MEMBER(n_ideal_motion_type, server::CModelState, int8_t);
				MEMBER(n_force_lod, server::CModelState, int8_t);
				MEMBER(n_cloth_update_flags, server::CModelState, int8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelState

			class CPulseServerFuncs {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseServerFuncs

			class CCSPointScriptExtensions_CCSWeaponBaseVData {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScriptExtensions_CCSWeaponBaseVData

			class CPulseServerFuncs_Sounds {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseServerFuncs_Sounds

			class CSmoothFunc {
				MEMBER(fl_smooth_amplitude, server::CSmoothFunc, float);
				MEMBER(fl_smooth_bias, server::CSmoothFunc, float);
				MEMBER(fl_smooth_duration, server::CSmoothFunc, float);
				MEMBER(fl_smooth_remaining_time, server::CSmoothFunc, float);
				MEMBER(n_smooth_dir, server::CSmoothFunc, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmoothFunc

			struct CEnvWindShared_WindVariationEvent_t {
				MEMBER(fl_wind_angle_variation, server::CEnvWindShared_WindVariationEvent_t, float);
				MEMBER(fl_wind_speed_variation, server::CEnvWindShared_WindVariationEvent_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CEnvWindShared_WindVariationEvent_t

			class CBaseEntityAPI {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseEntityAPI

			struct EntityRenderAttribute_t {
				MEMBER(id, server::EntityRenderAttribute_t, CUtlStringToken);
				MEMBER(values, server::EntityRenderAttribute_t, Vector4D);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EntityRenderAttribute_t

			class CGlowProperty {
				MEMBER(f_glow_color, server::CGlowProperty, Vector);
				MEMBER(i_glow_type, server::CGlowProperty, int32_t);
				MEMBER(i_glow_team, server::CGlowProperty, int32_t);
				MEMBER(n_glow_range, server::CGlowProperty, int32_t);
				MEMBER(n_glow_range_min, server::CGlowProperty, int32_t);
				MEMBER(glow_color_override, server::CGlowProperty, Color);
				MEMBER(b_flashing, server::CGlowProperty, bool);
				MEMBER(fl_glow_time, server::CGlowProperty, float);
				MEMBER(fl_glow_start_time, server::CGlowProperty, float);
				MEMBER(b_eligible_for_screen_highlight, server::CGlowProperty, bool);
				MEMBER(b_glowing, server::CGlowProperty, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGlowProperty

			class CGameSceneNode {
				MEMBER(node_to_world, server::CGameSceneNode, CTransform);
				MEMBER(p_owner, server::CGameSceneNode, entity2::CEntityInstance*);
				MEMBER(p_parent, server::CGameSceneNode, server::CGameSceneNode*);
				MEMBER(p_child, server::CGameSceneNode, server::CGameSceneNode*);
				MEMBER(p_next_sibling, server::CGameSceneNode, server::CGameSceneNode*);
				MEMBER(h_parent, server::CGameSceneNode, server::CGameSceneNodeHandle);
				MEMBER(vec_origin, server::CGameSceneNode, client::CNetworkOriginCellCoordQuantizedVector);
				MEMBER(ang_rotation, server::CGameSceneNode, QAngle);
				MEMBER(fl_scale, server::CGameSceneNode, float);
				MEMBER(vec_abs_origin, server::CGameSceneNode, Vector);
				MEMBER(ang_abs_rotation, server::CGameSceneNode, QAngle);
				MEMBER(fl_abs_scale, server::CGameSceneNode, float);
				MEMBER(n_parent_attachment_or_bone, server::CGameSceneNode, int16_t);
				MEMBER(b_debug_abs_origin_changes, server::CGameSceneNode, bool);
				MEMBER(b_dormant, server::CGameSceneNode, bool);
				MEMBER(b_force_parent_to_be_networked, server::CGameSceneNode, bool);
				MEMBER(b_dirty_hierarchy, server::CGameSceneNode, uint8_t);
				MEMBER(b_dirty_bone_merge_info, server::CGameSceneNode, uint8_t);
				MEMBER(b_networked_position_changed, server::CGameSceneNode, uint8_t);
				MEMBER(b_networked_angles_changed, server::CGameSceneNode, uint8_t);
				MEMBER(b_networked_scale_changed, server::CGameSceneNode, uint8_t);
				MEMBER(b_will_be_calling_post_data_update, server::CGameSceneNode, uint8_t);
				MEMBER(b_bone_merge_flex, server::CGameSceneNode, uint8_t);
				MEMBER(n_latch_abs_origin, server::CGameSceneNode, uint8_t);
				MEMBER(b_dirty_bone_merge_bone_to_root, server::CGameSceneNode, uint8_t);
				MEMBER(n_hierarchical_depth, server::CGameSceneNode, uint8_t);
				MEMBER(n_hierarchy_type, server::CGameSceneNode, uint8_t);
				MEMBER(n_do_not_set_anim_time_in_invalidate_physics_count, server::CGameSceneNode, uint8_t);
				MEMBER(name, server::CGameSceneNode, CUtlStringToken);
				MEMBER(hierarchy_attach_name, server::CGameSceneNode, CUtlStringToken);
				MEMBER(fl_zoffset, server::CGameSceneNode, float);
				MEMBER(fl_client_local_scale, server::CGameSceneNode, float);
				MEMBER(v_render_origin, server::CGameSceneNode, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGameSceneNode

			class CSkeletonInstance : public server::CGameSceneNode {
				MEMBER(model_state, server::CSkeletonInstance, server::CModelState);
				MEMBER(b_is_animation_enabled, server::CSkeletonInstance, bool);
				MEMBER(b_use_parent_render_bounds, server::CSkeletonInstance, bool);
				MEMBER(b_disable_solid_collisions_for_hierarchy, server::CSkeletonInstance, bool);
				MEMBER(b_dirty_motion_type, server::CSkeletonInstance, uint8_t);
				MEMBER(b_is_generating_latched_parent_space_state, server::CSkeletonInstance, uint8_t);
				MEMBER(material_group, server::CSkeletonInstance, CUtlStringToken);
				MEMBER(n_hitbox_set, server::CSkeletonInstance, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSkeletonInstance

			struct shard_model_desc_t {
				MEMBER(n_model_id, server::shard_model_desc_t, int32_t);
				MEMBER(h_material_base, server::shard_model_desc_t, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(h_material_damage_overlay, server::shard_model_desc_t, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(solid, server::shard_model_desc_t, client::ShardSolid_t);
				MEMBER(vec_panel_size, server::shard_model_desc_t, Vector2D);
				MEMBER(vec_stress_position_a, server::shard_model_desc_t, Vector2D);
				MEMBER(vec_stress_position_b, server::shard_model_desc_t, Vector2D);
				MEMBER(vec_panel_vertices, server::shard_model_desc_t, CNetworkUtlVectorBase<Vector2D>);
				MEMBER(v_initial_panel_vertices, server::shard_model_desc_t, CNetworkUtlVectorBase<Vector4D>);
				MEMBER(fl_glass_half_thickness, server::shard_model_desc_t, float);
				MEMBER(b_has_parent, server::shard_model_desc_t, bool);
				MEMBER(b_parent_frozen, server::shard_model_desc_t, bool);
				MEMBER(surface_prop_string_token, server::shard_model_desc_t, CUtlStringToken);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct shard_model_desc_t

			class CPointTemplateAPI {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointTemplateAPI

			struct WeaponPurchaseCount_t {
				MEMBER(n_item_def_index, server::WeaponPurchaseCount_t, uint16_t);
				MEMBER(n_count, server::WeaponPurchaseCount_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct WeaponPurchaseCount_t

			class CDamageRecord {
				MEMBER(player_damager, server::CDamageRecord, chandle<server::CCSPlayerPawn>);
				MEMBER(player_recipient, server::CDamageRecord, chandle<server::CCSPlayerPawn>);
				MEMBER(h_player_controller_damager, server::CDamageRecord, chandle<server::CCSPlayerController>);
				MEMBER(h_player_controller_recipient, server::CDamageRecord, chandle<server::CCSPlayerController>);
				MEMBER(sz_player_damager_name, server::CDamageRecord, CUtlString);
				MEMBER(sz_player_recipient_name, server::CDamageRecord, CUtlString);
				MEMBER(damager_xuid, server::CDamageRecord, uint64_t);
				MEMBER(recipient_xuid, server::CDamageRecord, uint64_t);
				MEMBER(i_bullets_damage, server::CDamageRecord, int32_t);
				MEMBER(i_damage, server::CDamageRecord, int32_t);
				MEMBER(i_actual_health_removed, server::CDamageRecord, int32_t);
				MEMBER(i_num_hits, server::CDamageRecord, int32_t);
				MEMBER(i_last_bullet_update, server::CDamageRecord, int32_t);
				MEMBER(b_is_other_enemy, server::CDamageRecord, bool);
				MEMBER(kill_type, server::CDamageRecord, client::EKillTypes_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDamageRecord

			class CAI_Expresser {
				MEMBER(fl_stop_talk_time, server::CAI_Expresser, entity2::GameTime_t);
				MEMBER(fl_stop_talk_time_without_delay, server::CAI_Expresser, entity2::GameTime_t);
				MEMBER(fl_blocked_talk_time, server::CAI_Expresser, entity2::GameTime_t);
				MEMBER(voice_pitch, server::CAI_Expresser, int32_t);
				MEMBER(fl_last_time_accepted_speak, server::CAI_Expresser, entity2::GameTime_t);
				MEMBER(b_allow_speaking_interrupts, server::CAI_Expresser, bool);
				MEMBER(b_consider_scene_involvement_as_speech, server::CAI_Expresser, bool);
				MEMBER(b_scene_entity_disabled, server::CAI_Expresser, bool);
				MEMBER(n_last_spoken_priority, server::CAI_Expresser, int32_t);
				MEMBER(p_outer, server::CAI_Expresser, server::CBaseFlex*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAI_Expresser

			class CAI_ExpresserWithFollowup : public server::CAI_Expresser {
				MEMBER(p_postponed_followup, server::CAI_ExpresserWithFollowup, client::ResponseFollowup*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAI_ExpresserWithFollowup

			class CMultiplayer_Expresser : public server::CAI_ExpresserWithFollowup {
				MEMBER(b_allow_multiple_scenes, server::CMultiplayer_Expresser, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMultiplayer_Expresser

			class CCSPointScriptExtensions_player_controller {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScriptExtensions_player_controller

			class CGameRules {
				MEMBER(_m_p_chain_entity, server::CGameRules, entity2::CNetworkVarChainer);
				MEMBER_ARR(sz_quest_name, server::CGameRules, 128, char);
				MEMBER(n_quest_phase, server::CGameRules, int32_t);
				MEMBER(n_total_paused_ticks, server::CGameRules, int32_t);
				MEMBER(n_pause_start_tick, server::CGameRules, int32_t);
				MEMBER(b_game_paused, server::CGameRules, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGameRules

			class CSingleplayRules : public server::CGameRules {
				MEMBER(b_single_player_game_ending, server::CSingleplayRules, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSingleplayRules

			class CMultiplayRules : public server::CGameRules {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMultiplayRules

			class CTeamplayRules : public server::CMultiplayRules {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTeamplayRules

			class CCSGameRules : public server::CTeamplayRules {
				MEMBER(b_freeze_period, server::CCSGameRules, bool);
				MEMBER(b_warmup_period, server::CCSGameRules, bool);
				MEMBER(f_warmup_period_end, server::CCSGameRules, entity2::GameTime_t);
				MEMBER(f_warmup_period_start, server::CCSGameRules, entity2::GameTime_t);
				MEMBER(b_server_paused, server::CCSGameRules, bool);
				MEMBER(b_terrorist_time_out_active, server::CCSGameRules, bool);
				MEMBER(b_cttime_out_active, server::CCSGameRules, bool);
				MEMBER(fl_terrorist_time_out_remaining, server::CCSGameRules, float);
				MEMBER(fl_cttime_out_remaining, server::CCSGameRules, float);
				MEMBER(n_terrorist_time_outs, server::CCSGameRules, int32_t);
				MEMBER(n_cttime_outs, server::CCSGameRules, int32_t);
				MEMBER(b_technical_time_out, server::CCSGameRules, bool);
				MEMBER(b_match_waiting_for_resume, server::CCSGameRules, bool);
				MEMBER(i_round_time, server::CCSGameRules, int32_t);
				MEMBER(f_match_start_time, server::CCSGameRules, float);
				MEMBER(f_round_start_time, server::CCSGameRules, entity2::GameTime_t);
				MEMBER(fl_restart_round_time, server::CCSGameRules, entity2::GameTime_t);
				MEMBER(b_game_restart, server::CCSGameRules, bool);
				MEMBER(fl_game_start_time, server::CCSGameRules, float);
				MEMBER(time_until_next_phase_starts, server::CCSGameRules, float);
				MEMBER(game_phase, server::CCSGameRules, int32_t);
				MEMBER(total_rounds_played, server::CCSGameRules, int32_t);
				MEMBER(n_rounds_played_this_phase, server::CCSGameRules, int32_t);
				MEMBER(n_overtime_playing, server::CCSGameRules, int32_t);
				MEMBER(i_hostages_remaining, server::CCSGameRules, int32_t);
				MEMBER(b_any_hostage_reached, server::CCSGameRules, bool);
				MEMBER(b_map_has_bomb_target, server::CCSGameRules, bool);
				MEMBER(b_map_has_rescue_zone, server::CCSGameRules, bool);
				MEMBER(b_map_has_buy_zone, server::CCSGameRules, bool);
				MEMBER(b_is_queued_matchmaking, server::CCSGameRules, bool);
				MEMBER(n_queued_matchmaking_mode, server::CCSGameRules, int32_t);
				MEMBER(b_is_valve_ds, server::CCSGameRules, bool);
				MEMBER(b_logo_map, server::CCSGameRules, bool);
				MEMBER(b_play_all_step_sounds_on_server, server::CCSGameRules, bool);
				MEMBER(i_spectator_slot_count, server::CCSGameRules, int32_t);
				MEMBER(match_device, server::CCSGameRules, int32_t);
				MEMBER(b_has_match_started, server::CCSGameRules, bool);
				MEMBER(n_next_map_in_mapgroup, server::CCSGameRules, int32_t);
				MEMBER_ARR(sz_tournament_event_name, server::CCSGameRules, 512, char);
				MEMBER_ARR(sz_tournament_event_stage, server::CCSGameRules, 512, char);
				MEMBER_ARR(sz_match_stat_txt, server::CCSGameRules, 512, char);
				MEMBER_ARR(sz_tournament_predictions_txt, server::CCSGameRules, 512, char);
				MEMBER(n_tournament_predictions_pct, server::CCSGameRules, int32_t);
				MEMBER(fl_cmmitem_drop_reveal_start_time, server::CCSGameRules, entity2::GameTime_t);
				MEMBER(fl_cmmitem_drop_reveal_end_time, server::CCSGameRules, entity2::GameTime_t);
				MEMBER(b_is_dropping_items, server::CCSGameRules, bool);
				MEMBER(b_is_quest_eligible, server::CCSGameRules, bool);
				MEMBER(b_is_hltv_active, server::CCSGameRules, bool);
				MEMBER_ARR(arr_prohibited_item_indices, server::CCSGameRules, 100, uint16_t);
				MEMBER_ARR(arr_tournament_active_caster_accounts, server::CCSGameRules, 4, uint32_t);
				MEMBER(num_best_of_maps, server::CCSGameRules, int32_t);
				MEMBER(n_halloween_mask_list_seed, server::CCSGameRules, int32_t);
				MEMBER(b_bomb_dropped, server::CCSGameRules, bool);
				MEMBER(b_bomb_planted, server::CCSGameRules, bool);
				MEMBER(i_round_win_status, server::CCSGameRules, int32_t);
				MEMBER(e_round_win_reason, server::CCSGameRules, int32_t);
				MEMBER(b_tcant_buy, server::CCSGameRules, bool);
				MEMBER(b_ctcant_buy, server::CCSGameRules, bool);
				MEMBER_ARR(i_match_stats__round_results, server::CCSGameRules, 30, int32_t);
				MEMBER_ARR(i_match_stats__players_alive__ct, server::CCSGameRules, 30, int32_t);
				MEMBER_ARR(i_match_stats__players_alive__t, server::CCSGameRules, 30, int32_t);
				MEMBER_ARR(team_respawn_wave_times, server::CCSGameRules, 32, float);
				MEMBER_ARR(fl_next_respawn_wave, server::CCSGameRules, 32, entity2::GameTime_t);
				MEMBER(n_server_quest_id, server::CCSGameRules, int32_t);
				MEMBER(v_minimap_mins, server::CCSGameRules, Vector);
				MEMBER(v_minimap_maxs, server::CCSGameRules, Vector);
				MEMBER_ARR(minimap_vertical_section_heights, server::CCSGameRules, 8, float);
				MEMBER(b_spawned_terror_hunt_heavy, server::CCSGameRules, bool);
				MEMBER_ARR(n_end_match_map_group_vote_types, server::CCSGameRules, 10, int32_t);
				MEMBER_ARR(n_end_match_map_group_vote_options, server::CCSGameRules, 10, int32_t);
				MEMBER(n_end_match_map_vote_winner, server::CCSGameRules, int32_t);
				MEMBER(i_num_consecutive_ctloses, server::CCSGameRules, int32_t);
				MEMBER(i_num_consecutive_terrorist_loses, server::CCSGameRules, int32_t);
				MEMBER(b_has_hostage_been_touched, server::CCSGameRules, bool);
				MEMBER(fl_intermission_start_time, server::CCSGameRules, entity2::GameTime_t);
				MEMBER(fl_intermission_end_time, server::CCSGameRules, entity2::GameTime_t);
				MEMBER(b_level_initialized, server::CCSGameRules, bool);
				MEMBER(i_total_rounds_played, server::CCSGameRules, int32_t);
				MEMBER(i_un_balanced_rounds, server::CCSGameRules, int32_t);
				MEMBER(end_match_on_round_reset, server::CCSGameRules, bool);
				MEMBER(end_match_on_think, server::CCSGameRules, bool);
				MEMBER(i_freeze_time, server::CCSGameRules, int32_t);
				MEMBER(i_num_terrorist, server::CCSGameRules, int32_t);
				MEMBER(i_num_ct, server::CCSGameRules, int32_t);
				MEMBER(i_num_spawnable_terrorist, server::CCSGameRules, int32_t);
				MEMBER(i_num_spawnable_ct, server::CCSGameRules, int32_t);
				MEMBER(arr_selected_hostage_spawn_indices, server::CCSGameRules, cutl_vector<int32_t>);
				MEMBER(n_spawn_points_random_seed, server::CCSGameRules, int32_t);
				MEMBER(b_first_connected, server::CCSGameRules, bool);
				MEMBER(b_complete_reset, server::CCSGameRules, bool);
				MEMBER(b_pick_new_teams_on_reset, server::CCSGameRules, bool);
				MEMBER(b_scramble_teams_on_restart, server::CCSGameRules, bool);
				MEMBER(b_swap_teams_on_restart, server::CCSGameRules, bool);
				MEMBER(n_end_match_tied_votes, server::CCSGameRules, cutl_vector<int32_t>);
				MEMBER(b_need_to_ask_players_for_continue_vote, server::CCSGameRules, bool);
				MEMBER(num_queued_matchmaking_accounts, server::CCSGameRules, uint32_t);
				MEMBER(f_avg_player_rank, server::CCSGameRules, float);
				MEMBER(p_queued_matchmaking_reservation_string, server::CCSGameRules, char*);
				MEMBER(num_total_tournament_drops, server::CCSGameRules, uint32_t);
				MEMBER(num_spectators_count_max, server::CCSGameRules, uint32_t);
				MEMBER(num_spectators_count_max_tv, server::CCSGameRules, uint32_t);
				MEMBER(num_spectators_count_max_lnk, server::CCSGameRules, uint32_t);
				MEMBER(b_force_team_change_silent, server::CCSGameRules, bool);
				MEMBER(b_loading_round_backup_data, server::CCSGameRules, bool);
				MEMBER(n_match_info_show_type, server::CCSGameRules, int32_t);
				MEMBER(fl_match_info_decided_time, server::CCSGameRules, float);
				MEMBER(m_team_dmlast_winning_team_number, server::CCSGameRules, int32_t);
				MEMBER(m_team_dmlast_think_time, server::CCSGameRules, float);
				MEMBER(fl_team_dmlast_announcement_time, server::CCSGameRules, float);
				MEMBER(i_account_terrorist, server::CCSGameRules, int32_t);
				MEMBER(i_account_ct, server::CCSGameRules, int32_t);
				MEMBER(i_spawn_point_count__terrorist, server::CCSGameRules, int32_t);
				MEMBER(i_spawn_point_count__ct, server::CCSGameRules, int32_t);
				MEMBER(i_max_num_terrorists, server::CCSGameRules, int32_t);
				MEMBER(i_max_num_cts, server::CCSGameRules, int32_t);
				MEMBER(i_loser_bonus_most_recent_team, server::CCSGameRules, int32_t);
				MEMBER(tm_next_periodic_think, server::CCSGameRules, float);
				MEMBER(b_voice_won_match_brag_fired, server::CCSGameRules, bool);
				MEMBER(f_warmup_next_chat_notice_time, server::CCSGameRules, float);
				MEMBER(i_hostages_rescued, server::CCSGameRules, int32_t);
				MEMBER(i_hostages_touched, server::CCSGameRules, int32_t);
				MEMBER(fl_next_hostage_announcement, server::CCSGameRules, float);
				MEMBER(b_no_terrorists_killed, server::CCSGameRules, bool);
				MEMBER(b_no_cts_killed, server::CCSGameRules, bool);
				MEMBER(b_no_enemies_killed, server::CCSGameRules, bool);
				MEMBER(b_can_donate_weapons, server::CCSGameRules, bool);
				MEMBER(first_kill_time, server::CCSGameRules, float);
				MEMBER(first_blood_time, server::CCSGameRules, float);
				MEMBER(hostage_was_injured, server::CCSGameRules, bool);
				MEMBER(hostage_was_killed, server::CCSGameRules, bool);
				MEMBER(b_vote_called, server::CCSGameRules, bool);
				MEMBER(b_server_vote_on_reset, server::CCSGameRules, bool);
				MEMBER(fl_vote_check_throttle, server::CCSGameRules, float);
				MEMBER(b_buy_time_ended, server::CCSGameRules, bool);
				MEMBER(n_last_freeze_end_beep, server::CCSGameRules, int32_t);
				MEMBER(b_target_bombed, server::CCSGameRules, bool);
				MEMBER(b_bomb_defused, server::CCSGameRules, bool);
				MEMBER(b_map_has_bomb_zone, server::CCSGameRules, bool);
				MEMBER(vec_main_ctspawn_pos, server::CCSGameRules, Vector);
				MEMBER(ctspawn_points_master_list, server::CCSGameRules, cutl_vector<server::SpawnPoint*>);
				MEMBER(terrorist_spawn_points_master_list, server::CCSGameRules, cutl_vector<server::SpawnPoint*>);
				MEMBER(b_respawning_all_respawnable_players, server::CCSGameRules, bool);
				MEMBER(i_next_ctspawn_point, server::CCSGameRules, int32_t);
				MEMBER(fl_ctspawn_point_used_time, server::CCSGameRules, float);
				MEMBER(i_next_terrorist_spawn_point, server::CCSGameRules, int32_t);
				MEMBER(fl_terrorist_spawn_point_used_time, server::CCSGameRules, float);
				MEMBER(ctspawn_points, server::CCSGameRules, cutl_vector<server::SpawnPoint*>);
				MEMBER(terrorist_spawn_points, server::CCSGameRules, cutl_vector<server::SpawnPoint*>);
				MEMBER(b_is_unreserved_game_server, server::CCSGameRules, bool);
				MEMBER(f_autobalance_display_time, server::CCSGameRules, float);
				MEMBER(b_allow_weapon_switch, server::CCSGameRules, bool);
				MEMBER(b_round_time_warning_triggered, server::CCSGameRules, bool);
				MEMBER(phase_change_announcement_time, server::CCSGameRules, entity2::GameTime_t);
				MEMBER(f_next_update_team_clan_names_time, server::CCSGameRules, float);
				MEMBER(fl_last_think_time, server::CCSGameRules, entity2::GameTime_t);
				MEMBER(f_accumulated_round_off_damage, server::CCSGameRules, float);
				MEMBER(n_shorthanded_bonus_last_eval_round, server::CCSGameRules, int32_t);
				MEMBER(n_match_aborted_early_reason, server::CCSGameRules, int32_t);
				MEMBER(b_has_triggered_round_start_music, server::CCSGameRules, bool);
				MEMBER(b_switching_teams_at_round_reset, server::CCSGameRules, bool);
				MEMBER(p_game_mode_rules, server::CCSGameRules, server::CCSGameModeRules*);
				MEMBER(bt_global_blackboard, server::CCSGameRules, KeyValues3);
				MEMBER(h_player_resource, server::CCSGameRules, chandle<server::CBaseEntity>);
				MEMBER(retake_rules, server::CCSGameRules, server::CRetakeGameRules);
				MEMBER_ARR(arr_team_unique_kill_weapons_match, server::CCSGameRules, 4, cutl_vector<int32_t>);
				MEMBER_ARR(b_team_last_kill_used_unique_weapon_match, server::CCSGameRules, 4, bool);
				MEMBER(n_match_end_count, server::CCSGameRules, uint8_t);
				MEMBER(n_tteam_intro_variant, server::CCSGameRules, int32_t);
				MEMBER(n_ctteam_intro_variant, server::CCSGameRules, int32_t);
				MEMBER(b_team_intro_period, server::CCSGameRules, bool);
				MEMBER(f_team_intro_period_end, server::CCSGameRules, entity2::GameTime_t);
				MEMBER(b_played_team_intro_vo, server::CCSGameRules, bool);
				MEMBER(i_round_end_winner_team, server::CCSGameRules, int32_t);
				MEMBER(e_round_end_reason, server::CCSGameRules, int32_t);
				MEMBER(b_round_end_show_timer_defend, server::CCSGameRules, bool);
				MEMBER(i_round_end_timer_time, server::CCSGameRules, int32_t);
				MEMBER(s_round_end_fun_fact_token, server::CCSGameRules, CUtlString);
				MEMBER(i_round_end_fun_fact_player_slot, server::CCSGameRules, CPlayerSlot);
				MEMBER(i_round_end_fun_fact_data1, server::CCSGameRules, int32_t);
				MEMBER(i_round_end_fun_fact_data2, server::CCSGameRules, int32_t);
				MEMBER(i_round_end_fun_fact_data3, server::CCSGameRules, int32_t);
				MEMBER(s_round_end_message, server::CCSGameRules, CUtlString);
				MEMBER(i_round_end_player_count, server::CCSGameRules, int32_t);
				MEMBER(b_round_end_no_music, server::CCSGameRules, bool);
				MEMBER(i_round_end_legacy, server::CCSGameRules, int32_t);
				MEMBER(n_round_end_count, server::CCSGameRules, uint8_t);
				MEMBER(i_round_start_round_number, server::CCSGameRules, int32_t);
				MEMBER(n_round_start_count, server::CCSGameRules, uint8_t);
				MEMBER(fl_last_perf_sample_time, server::CCSGameRules, double);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGameRules

			class CPulseGraphComponentBase {
				MEMBER(h_owner, server::CPulseGraphComponentBase, chandle<server::CBaseEntity>);
				MEMBER(b_activated, server::CPulseGraphComponentBase, bool);
				MEMBER(s_name_fixup_static_prefix, server::CPulseGraphComponentBase, CUtlSymbolLarge);
				MEMBER(s_name_fixup_parent, server::CPulseGraphComponentBase, CUtlSymbolLarge);
				MEMBER(s_name_fixup_local, server::CPulseGraphComponentBase, CUtlSymbolLarge);
				MEMBER(s_procedural_world_name_for_relays, server::CPulseGraphComponentBase, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseGraphComponentBase

			class CPulseGraphComponentGameBlackboard : public server::CPulseGraphComponentBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseGraphComponentGameBlackboard

			class CPulseGraphComponentPointServer : public server::CPulseGraphComponentBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseGraphComponentPointServer

			class CSharedGapTypeQueryRegistration {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSharedGapTypeQueryRegistration

			struct AutoRoomDoorwayPairs_t {
				MEMBER(v_p1, server::AutoRoomDoorwayPairs_t, Vector);
				MEMBER(v_p2, server::AutoRoomDoorwayPairs_t, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct AutoRoomDoorwayPairs_t

			class CBasePlayerControllerAPI {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBasePlayerControllerAPI

			class CEffectData {
				MEMBER(v_origin, server::CEffectData, Vector);
				MEMBER(v_start, server::CEffectData, Vector);
				MEMBER(v_normal, server::CEffectData, Vector);
				MEMBER(v_angles, server::CEffectData, QAngle);
				MEMBER(h_entity, server::CEffectData, CEntityHandle);
				MEMBER(h_other_entity, server::CEffectData, CEntityHandle);
				MEMBER(fl_scale, server::CEffectData, float);
				MEMBER(fl_magnitude, server::CEffectData, float);
				MEMBER(fl_radius, server::CEffectData, float);
				MEMBER(n_surface_prop, server::CEffectData, CUtlStringToken);
				MEMBER(n_effect_index, server::CEffectData, CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(n_damage_type, server::CEffectData, uint32_t);
				MEMBER(n_penetrate, server::CEffectData, uint8_t);
				MEMBER(n_material, server::CEffectData, uint16_t);
				MEMBER(n_hit_box, server::CEffectData, uint16_t);
				MEMBER(n_color, server::CEffectData, uint8_t);
				MEMBER(f_flags, server::CEffectData, uint8_t);
				MEMBER(n_attachment_index, server::CEffectData, modellib::AttachmentHandle_t);
				MEMBER(n_attachment_name, server::CEffectData, CUtlStringToken);
				MEMBER(i_effect_name, server::CEffectData, uint16_t);
				MEMBER(n_explosion_type, server::CEffectData, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEffectData

			class IntervalTimer {
				MEMBER(timestamp, server::IntervalTimer, entity2::GameTime_t);
				MEMBER(n_world_group_id, server::IntervalTimer, WorldGroupId_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IntervalTimer

			class CTimeline : public server::IntervalTimer {
				MEMBER_ARR(fl_values, server::CTimeline, 64, float);
				MEMBER_ARR(n_value_counts, server::CTimeline, 64, int32_t);
				MEMBER(n_bucket_count, server::CTimeline, int32_t);
				MEMBER(fl_interval, server::CTimeline, float);
				MEMBER(fl_final_value, server::CTimeline, float);
				MEMBER(n_compression_type, server::CTimeline, client::TimelineCompression_t);
				MEMBER(b_stopped, server::CTimeline, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTimeline

			struct fogplayerparams_t {
				MEMBER(h_ctrl, server::fogplayerparams_t, chandle<server::CFogController>);
				MEMBER(fl_transition_time, server::fogplayerparams_t, float);
				MEMBER(old_color, server::fogplayerparams_t, Color);
				MEMBER(fl_old_start, server::fogplayerparams_t, float);
				MEMBER(fl_old_end, server::fogplayerparams_t, float);
				MEMBER(fl_old_max_density, server::fogplayerparams_t, float);
				MEMBER(fl_old_hdrcolor_scale, server::fogplayerparams_t, float);
				MEMBER(fl_old_far_z, server::fogplayerparams_t, float);
				MEMBER(new_color, server::fogplayerparams_t, Color);
				MEMBER(fl_new_start, server::fogplayerparams_t, float);
				MEMBER(fl_new_end, server::fogplayerparams_t, float);
				MEMBER(fl_new_max_density, server::fogplayerparams_t, float);
				MEMBER(fl_new_hdrcolor_scale, server::fogplayerparams_t, float);
				MEMBER(fl_new_far_z, server::fogplayerparams_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct fogplayerparams_t

			class CFuncMoverAPI {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncMoverAPI

			struct CSPerRoundStats_t {
				MEMBER(i_kills, server::CSPerRoundStats_t, int32_t);
				MEMBER(i_deaths, server::CSPerRoundStats_t, int32_t);
				MEMBER(i_assists, server::CSPerRoundStats_t, int32_t);
				MEMBER(i_damage, server::CSPerRoundStats_t, int32_t);
				MEMBER(i_equipment_value, server::CSPerRoundStats_t, int32_t);
				MEMBER(i_money_saved, server::CSPerRoundStats_t, int32_t);
				MEMBER(i_kill_reward, server::CSPerRoundStats_t, int32_t);
				MEMBER(i_live_time, server::CSPerRoundStats_t, int32_t);
				MEMBER(i_head_shot_kills, server::CSPerRoundStats_t, int32_t);
				MEMBER(i_objective, server::CSPerRoundStats_t, int32_t);
				MEMBER(i_cash_earned, server::CSPerRoundStats_t, int32_t);
				MEMBER(i_utility_damage, server::CSPerRoundStats_t, int32_t);
				MEMBER(i_enemies_flashed, server::CSPerRoundStats_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CSPerRoundStats_t

			struct CSMatchStats_t : public server::CSPerRoundStats_t {
				MEMBER(i_enemy5_ks, server::CSMatchStats_t, int32_t);
				MEMBER(i_enemy4_ks, server::CSMatchStats_t, int32_t);
				MEMBER(i_enemy3_ks, server::CSMatchStats_t, int32_t);
				MEMBER(i_enemy_knife_kills, server::CSMatchStats_t, int32_t);
				MEMBER(i_enemy_taser_kills, server::CSMatchStats_t, int32_t);
				MEMBER(i_enemy2_ks, server::CSMatchStats_t, int32_t);
				MEMBER(i_utility__count, server::CSMatchStats_t, int32_t);
				MEMBER(i_utility__successes, server::CSMatchStats_t, int32_t);
				MEMBER(i_utility__enemies, server::CSMatchStats_t, int32_t);
				MEMBER(i_flash__count, server::CSMatchStats_t, int32_t);
				MEMBER(i_flash__successes, server::CSMatchStats_t, int32_t);
				MEMBER(n_health_points_removed_total, server::CSMatchStats_t, int32_t);
				MEMBER(n_health_points_dealt_total, server::CSMatchStats_t, int32_t);
				MEMBER(n_shots_fired_total, server::CSMatchStats_t, int32_t);
				MEMBER(n_shots_on_target_total, server::CSMatchStats_t, int32_t);
				MEMBER(i1v1_count, server::CSMatchStats_t, int32_t);
				MEMBER(i1v1_wins, server::CSMatchStats_t, int32_t);
				MEMBER(i1v2_count, server::CSMatchStats_t, int32_t);
				MEMBER(i1v2_wins, server::CSMatchStats_t, int32_t);
				MEMBER(i_entry_count, server::CSMatchStats_t, int32_t);
				MEMBER(i_entry_wins, server::CSMatchStats_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CSMatchStats_t

			class CEnvWindShared {
				MEMBER(fl_start_time, server::CEnvWindShared, entity2::GameTime_t);
				MEMBER(i_wind_seed, server::CEnvWindShared, uint32_t);
				MEMBER(i_min_wind, server::CEnvWindShared, uint16_t);
				MEMBER(i_max_wind, server::CEnvWindShared, uint16_t);
				MEMBER(wind_radius, server::CEnvWindShared, int32_t);
				MEMBER(i_min_gust, server::CEnvWindShared, uint16_t);
				MEMBER(i_max_gust, server::CEnvWindShared, uint16_t);
				MEMBER(fl_min_gust_delay, server::CEnvWindShared, float);
				MEMBER(fl_max_gust_delay, server::CEnvWindShared, float);
				MEMBER(fl_gust_duration, server::CEnvWindShared, float);
				MEMBER(i_gust_dir_change, server::CEnvWindShared, uint16_t);
				MEMBER(location, server::CEnvWindShared, Vector);
				MEMBER(isz_gust_sound, server::CEnvWindShared, int32_t);
				MEMBER(i_wind_dir, server::CEnvWindShared, int32_t);
				MEMBER(fl_wind_speed, server::CEnvWindShared, float);
				MEMBER(current_wind_vector, server::CEnvWindShared, Vector);
				MEMBER(current_sway_vector, server::CEnvWindShared, Vector);
				MEMBER(prev_sway_vector, server::CEnvWindShared, Vector);
				MEMBER(i_initial_wind_dir, server::CEnvWindShared, uint16_t);
				MEMBER(fl_initial_wind_speed, server::CEnvWindShared, float);
				MEMBER(on_gust_start, server::CEnvWindShared, entity2::CEntityIOOutput);
				MEMBER(on_gust_end, server::CEnvWindShared, entity2::CEntityIOOutput);
				MEMBER(fl_variation_time, server::CEnvWindShared, entity2::GameTime_t);
				MEMBER(fl_sway_time, server::CEnvWindShared, entity2::GameTime_t);
				MEMBER(fl_sim_time, server::CEnvWindShared, entity2::GameTime_t);
				MEMBER(fl_switch_time, server::CEnvWindShared, entity2::GameTime_t);
				MEMBER(fl_ave_wind_speed, server::CEnvWindShared, float);
				MEMBER(b_gusting, server::CEnvWindShared, bool);
				MEMBER(fl_wind_angle_variation, server::CEnvWindShared, float);
				MEMBER(fl_wind_speed_variation, server::CEnvWindShared, float);
				MEMBER(h_ent_owner, server::CEnvWindShared, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvWindShared

			class CGameSceneNodeHandle {
				MEMBER(h_owner, server::CGameSceneNodeHandle, CEntityHandle);
				MEMBER(name, server::CGameSceneNodeHandle, CUtlStringToken);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGameSceneNodeHandle

			struct EntitySpottedState_t {
				MEMBER(b_spotted, server::EntitySpottedState_t, bool);
				MEMBER_ARR(b_spotted_by_mask, server::EntitySpottedState_t, 2, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EntitySpottedState_t

			class CCSPointScriptExtensions_weapon_cs_base {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScriptExtensions_weapon_cs_base

			class CEconItemAttribute {
				MEMBER(i_attribute_definition_index, server::CEconItemAttribute, uint16_t);
				MEMBER(fl_value, server::CEconItemAttribute, float);
				MEMBER(fl_initial_value, server::CEconItemAttribute, float);
				MEMBER(n_refundable_currency, server::CEconItemAttribute, int32_t);
				MEMBER(b_set_bonus, server::CEconItemAttribute, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEconItemAttribute

			struct PredictedDamageTag_t {
				MEMBER(n_tag_tick, server::PredictedDamageTag_t, entity2::GameTick_t);
				MEMBER(fl_flinch_mod_small, server::PredictedDamageTag_t, float);
				MEMBER(fl_flinch_mod_large, server::PredictedDamageTag_t, float);
				MEMBER(fl_friendly_fire_damage_reduction_ratio, server::PredictedDamageTag_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PredictedDamageTag_t

			struct CEnvWindShared_WindAveEvent_t {
				MEMBER(fl_start_wind_speed, server::CEnvWindShared_WindAveEvent_t, float);
				MEMBER(fl_ave_wind_speed, server::CEnvWindShared_WindAveEvent_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CEnvWindShared_WindAveEvent_t

			class CountdownTimer {
				MEMBER(duration, server::CountdownTimer, float);
				MEMBER(timestamp, server::CountdownTimer, entity2::GameTime_t);
				MEMBER(timescale, server::CountdownTimer, float);
				MEMBER(n_world_group_id, server::CountdownTimer, WorldGroupId_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CountdownTimer

			class CCSPointScriptExtensions_entity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScriptExtensions_entity

			struct Relationship_t {
				MEMBER(disposition, server::Relationship_t, client::Disposition_t);
				MEMBER(priority, server::Relationship_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct Relationship_t

			struct RelationshipOverride_t : public server::Relationship_t {
				MEMBER(entity, server::RelationshipOverride_t, chandle<server::CBaseEntity>);
				MEMBER(class_type, server::RelationshipOverride_t, client::Class_T);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RelationshipOverride_t

			class CResponseQueue_CDeferredResponse {
				MEMBER(contexts, server::CResponseQueue_CDeferredResponse, client::CResponseCriteriaSet);
				MEMBER(f_dispatch_time, server::CResponseQueue_CDeferredResponse, float);
				MEMBER(h_issuer, server::CResponseQueue_CDeferredResponse, chandle<server::CBaseEntity>);
				MEMBER(response, server::CResponseQueue_CDeferredResponse, client::CRR_Response);
				MEMBER(b_response_valid, server::CResponseQueue_CDeferredResponse, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CResponseQueue_CDeferredResponse

			struct sky3dparams_t {
				MEMBER(scale, server::sky3dparams_t, int16_t);
				MEMBER(origin, server::sky3dparams_t, Vector);
				MEMBER(b_clip3_dsky_box_near_to_world_far, server::sky3dparams_t, bool);
				MEMBER(fl_clip3_dsky_box_near_to_world_far_offset, server::sky3dparams_t, float);
				MEMBER(fog, server::sky3dparams_t, server::fogparams_t);
				MEMBER(n_world_group_id, server::sky3dparams_t, WorldGroupId_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct sky3dparams_t

			struct ViewAngleServerChange_t {
				MEMBER(n_type, server::ViewAngleServerChange_t, client::FixAngleSet_t);
				MEMBER(q_angle, server::ViewAngleServerChange_t, QAngle);
				MEMBER(n_index, server::ViewAngleServerChange_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ViewAngleServerChange_t

			class CRuleBrushEntity : public server::CRuleEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRuleBrushEntity

			class CFuncIllusionary : public server::CBaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncIllusionary

			class CWeaponShield : public server::CCSWeaponBaseGun {
				MEMBER(fl_bullet_damage_absorbed, server::CWeaponShield, float);
				MEMBER(fl_last_bullet_hit_sound_time, server::CWeaponShield, entity2::GameTime_t);
				MEMBER(fl_display_health, server::CWeaponShield, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponShield

			class CLogicEventListener : public server::CLogicalEntity {
				MEMBER(str_event_name, server::CLogicEventListener, CUtlString);
				MEMBER(b_is_enabled, server::CLogicEventListener, bool);
				MEMBER(n_team, server::CLogicEventListener, int32_t);
				MEMBER(on_event_fired, server::CLogicEventListener, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicEventListener

			class CHostageExpresserShim : public server::CBaseCombatCharacter {
				MEMBER(p_expresser, server::CHostageExpresserShim, server::CAI_Expresser*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHostageExpresserShim

			class CRopeKeyframeAlias_move_rope : public server::CRopeKeyframe {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRopeKeyframeAlias_move_rope

			class CEnableMotionFixup : public server::CBaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnableMotionFixup

			class CTriggerSoundscape : public server::CBaseTrigger {
				MEMBER(h_soundscape, server::CTriggerSoundscape, chandle<server::CEnvSoundscapeTriggerable>);
				MEMBER(soundscape_name, server::CTriggerSoundscape, CUtlSymbolLarge);
				MEMBER(spectators, server::CTriggerSoundscape, cutl_vector<chandle<server::CBasePlayerPawn>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerSoundscape

			class CRenderComponent : public entity2::CEntityComponent {
				MEMBER(_m_p_chain_entity, server::CRenderComponent, entity2::CNetworkVarChainer);
				MEMBER(b_is_rendering_with_view_models, server::CRenderComponent, bool);
				MEMBER(n_splitscreen_flags, server::CRenderComponent, uint32_t);
				MEMBER(b_enable_rendering, server::CRenderComponent, bool);
				MEMBER(b_interpolation_ready_to_draw, server::CRenderComponent, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRenderComponent

			class CDynamicProp : public server::CBreakableProp {
				MEMBER(b_create_nav_obstacle, server::CDynamicProp, bool);
				MEMBER(b_nav_obstacle_updates_overridden, server::CDynamicProp, bool);
				MEMBER(b_use_hitboxes_for_render_box, server::CDynamicProp, bool);
				MEMBER(b_use_anim_graph, server::CDynamicProp, bool);
				MEMBER(p_output_anim_begun, server::CDynamicProp, entity2::CEntityIOOutput);
				MEMBER(p_output_anim_over, server::CDynamicProp, entity2::CEntityIOOutput);
				MEMBER(p_output_anim_loop_cycle_over, server::CDynamicProp, entity2::CEntityIOOutput);
				MEMBER(on_anim_reached_start, server::CDynamicProp, entity2::CEntityIOOutput);
				MEMBER(on_anim_reached_end, server::CDynamicProp, entity2::CEntityIOOutput);
				MEMBER(isz_idle_anim, server::CDynamicProp, CUtlSymbolLarge);
				MEMBER(n_idle_anim_loop_mode, server::CDynamicProp, client::AnimLoopMode_t);
				MEMBER(b_randomize_cycle, server::CDynamicProp, bool);
				MEMBER(b_start_disabled, server::CDynamicProp, bool);
				MEMBER(b_fired_start_end_output, server::CDynamicProp, bool);
				MEMBER(b_force_npc_exclude, server::CDynamicProp, bool);
				MEMBER(b_create_non_solid, server::CDynamicProp, bool);
				MEMBER(b_is_override_prop, server::CDynamicProp, bool);
				MEMBER(i_initial_glow_state, server::CDynamicProp, int32_t);
				MEMBER(n_glow_range, server::CDynamicProp, int32_t);
				MEMBER(n_glow_range_min, server::CDynamicProp, int32_t);
				MEMBER(glow_color, server::CDynamicProp, Color);
				MEMBER(n_glow_team, server::CDynamicProp, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDynamicProp

			class CBaseGrenade : public server::CBaseFlex {
				MEMBER(on_player_pickup, server::CBaseGrenade, entity2::CEntityIOOutput);
				MEMBER(on_explode, server::CBaseGrenade, entity2::CEntityIOOutput);
				MEMBER(b_has_warned_ai, server::CBaseGrenade, bool);
				MEMBER(b_is_smoke_grenade, server::CBaseGrenade, bool);
				MEMBER(b_is_live, server::CBaseGrenade, bool);
				MEMBER(dmg_radius, server::CBaseGrenade, float);
				MEMBER(fl_detonate_time, server::CBaseGrenade, entity2::GameTime_t);
				MEMBER(fl_warn_aitime, server::CBaseGrenade, float);
				MEMBER(fl_damage, server::CBaseGrenade, float);
				MEMBER(isz_bounce_sound, server::CBaseGrenade, CUtlSymbolLarge);
				MEMBER(explosion_sound, server::CBaseGrenade, CUtlString);
				MEMBER(h_thrower, server::CBaseGrenade, chandle<server::CCSPlayerPawn>);
				MEMBER(fl_next_attack, server::CBaseGrenade, entity2::GameTime_t);
				MEMBER(h_original_thrower, server::CBaseGrenade, chandle<server::CCSPlayerPawn>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseGrenade

			class CDecoyGrenade : public server::CBaseCSGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDecoyGrenade

			class CTriggerBrush : public server::CBaseModelEntity {
				MEMBER(on_start_touch, server::CTriggerBrush, entity2::CEntityIOOutput);
				MEMBER(on_end_touch, server::CTriggerBrush, entity2::CEntityIOOutput);
				MEMBER(on_use, server::CTriggerBrush, entity2::CEntityIOOutput);
				MEMBER(i_input_filter, server::CTriggerBrush, int32_t);
				MEMBER(i_dont_message_parent, server::CTriggerBrush, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerBrush

			class CCSPlayer_MovementServices : public server::CPlayer_MovementServices_Humanoid {
				MEMBER(vec_ladder_normal, server::CCSPlayer_MovementServices, Vector);
				MEMBER(n_ladder_surface_prop_index, server::CCSPlayer_MovementServices, int32_t);
				MEMBER(fl_duck_amount, server::CCSPlayer_MovementServices, float);
				MEMBER(fl_duck_speed, server::CCSPlayer_MovementServices, float);
				MEMBER(b_duck_override, server::CCSPlayer_MovementServices, bool);
				MEMBER(b_desires_duck, server::CCSPlayer_MovementServices, bool);
				MEMBER(fl_duck_offset, server::CCSPlayer_MovementServices, float);
				MEMBER(n_duck_time_msecs, server::CCSPlayer_MovementServices, uint32_t);
				MEMBER(n_duck_jump_time_msecs, server::CCSPlayer_MovementServices, uint32_t);
				MEMBER(n_jump_time_msecs, server::CCSPlayer_MovementServices, uint32_t);
				MEMBER(fl_last_duck_time, server::CCSPlayer_MovementServices, float);
				MEMBER(vec_last_position_at_full_crouch_speed, server::CCSPlayer_MovementServices, Vector2D);
				MEMBER(duck_until_on_ground, server::CCSPlayer_MovementServices, bool);
				MEMBER(b_has_walk_moved_since_last_jump, server::CCSPlayer_MovementServices, bool);
				MEMBER(b_in_stuck_test, server::CCSPlayer_MovementServices, bool);
				MEMBER_ARR(fl_stuck_check_time, server::CCSPlayer_MovementServices, 2, float);
				MEMBER(n_trace_count, server::CCSPlayer_MovementServices, int32_t);
				MEMBER(stuck_last, server::CCSPlayer_MovementServices, int32_t);
				MEMBER(b_speed_cropped, server::CCSPlayer_MovementServices, bool);
				MEMBER(fl_ground_move_efficiency, server::CCSPlayer_MovementServices, float);
				MEMBER(n_old_water_level, server::CCSPlayer_MovementServices, int32_t);
				MEMBER(fl_water_entry_time, server::CCSPlayer_MovementServices, float);
				MEMBER(vec_forward, server::CCSPlayer_MovementServices, Vector);
				MEMBER(vec_left, server::CCSPlayer_MovementServices, Vector);
				MEMBER(vec_up, server::CCSPlayer_MovementServices, Vector);
				MEMBER(n_game_code_has_moved_player_after_command, server::CCSPlayer_MovementServices, int32_t);
				MEMBER(b_made_footstep_noise, server::CCSPlayer_MovementServices, bool);
				MEMBER(i_footsteps, server::CCSPlayer_MovementServices, int32_t);
				MEMBER(b_old_jump_pressed, server::CCSPlayer_MovementServices, bool);
				MEMBER(fl_jump_pressed_time, server::CCSPlayer_MovementServices, float);
				MEMBER(f_stash_grenade_parameter_when, server::CCSPlayer_MovementServices, entity2::GameTime_t);
				MEMBER(n_button_down_mask_prev, server::CCSPlayer_MovementServices, uint64_t);
				MEMBER(fl_offset_tick_complete_time, server::CCSPlayer_MovementServices, float);
				MEMBER(fl_offset_tick_stashed_speed, server::CCSPlayer_MovementServices, float);
				MEMBER(fl_stamina, server::CCSPlayer_MovementServices, float);
				MEMBER(fl_height_at_jump_start, server::CCSPlayer_MovementServices, float);
				MEMBER(fl_max_jump_height_this_jump, server::CCSPlayer_MovementServices, float);
				MEMBER(fl_max_jump_height_last_jump, server::CCSPlayer_MovementServices, float);
				MEMBER(fl_stamina_at_jump_start, server::CCSPlayer_MovementServices, float);
				MEMBER(fl_accumulated_jump_error, server::CCSPlayer_MovementServices, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_MovementServices

			class CBuyZone : public server::CBaseTrigger {
				MEMBER(legacy_team_num, server::CBuyZone, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBuyZone

			class CFists : public server::CCSWeaponBase {
				MEMBER(b_playing_uninterruptable_act, server::CFists, bool);
				MEMBER(n_uninterruptable_activity, server::CFists, client::PlayerAnimEvent_t);
				MEMBER(b_restore_prev_wep, server::CFists, bool);
				MEMBER(h_weapon_before_previous, server::CFists, chandle<server::CBasePlayerWeapon>);
				MEMBER(h_weapon_previous, server::CFists, chandle<server::CBasePlayerWeapon>);
				MEMBER(b_delayed_hard_punch_incoming, server::CFists, bool);
				MEMBER(b_destroy_after_taunt, server::CFists, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFists

			class CSpriteOriented : public server::CSprite {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSpriteOriented

			class CEnvBeverage : public server::CBaseEntity {
				MEMBER(can_in_dispenser, server::CEnvBeverage, bool);
				MEMBER(n_beverage_type, server::CEnvBeverage, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvBeverage

			class CLogicCollisionPair : public server::CLogicalEntity {
				MEMBER(name_attach1, server::CLogicCollisionPair, CUtlSymbolLarge);
				MEMBER(name_attach2, server::CLogicCollisionPair, CUtlSymbolLarge);
				MEMBER(support_multiple_entities_with_same_name, server::CLogicCollisionPair, bool);
				MEMBER(disabled, server::CLogicCollisionPair, bool);
				MEMBER(succeeded, server::CLogicCollisionPair, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicCollisionPair

			class CInfoLandmark : public server::CPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoLandmark

			class CPrecipitationVData : public client::CEntitySubclassVDataBase {
				MEMBER(sz_particle_precipitation_effect, server::CPrecipitationVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(fl_inner_distance, server::CPrecipitationVData, float);
				MEMBER(n_attach_type, server::CPrecipitationVData, animationsystem::ParticleAttachment_t);
				MEMBER(b_batch_same_volume_type, server::CPrecipitationVData, bool);
				MEMBER(n_rtenv_cp, server::CPrecipitationVData, int32_t);
				MEMBER(n_rtenv_cpcomponent, server::CPrecipitationVData, int32_t);
				MEMBER(sz_modifier, server::CPrecipitationVData, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPrecipitationVData

			class CFogController : public server::CBaseEntity {
				MEMBER(fog, server::CFogController, server::fogparams_t);
				MEMBER(b_use_angles, server::CFogController, bool);
				MEMBER(i_changed_variables, server::CFogController, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFogController

			class CTriggerRemove : public server::CBaseTrigger {
				MEMBER(on_remove, server::CTriggerRemove, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerRemove

			class CRulePointEntity : public server::CRuleEntity {
				MEMBER(score, server::CRulePointEntity, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRulePointEntity

			class CFilterName : public server::CBaseFilter {
				MEMBER(i_filter_name, server::CFilterName, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFilterName

			class CBaseTrigger : public server::CBaseToggle {
				MEMBER(b_disabled, server::CBaseTrigger, bool);
				MEMBER(i_filter_name, server::CBaseTrigger, CUtlSymbolLarge);
				MEMBER(h_filter, server::CBaseTrigger, chandle<server::CBaseFilter>);
				MEMBER(on_start_touch, server::CBaseTrigger, entity2::CEntityIOOutput);
				MEMBER(on_start_touch_all, server::CBaseTrigger, entity2::CEntityIOOutput);
				MEMBER(on_end_touch, server::CBaseTrigger, entity2::CEntityIOOutput);
				MEMBER(on_end_touch_all, server::CBaseTrigger, entity2::CEntityIOOutput);
				MEMBER(on_touching, server::CBaseTrigger, entity2::CEntityIOOutput);
				MEMBER(on_touching_each_entity, server::CBaseTrigger, entity2::CEntityIOOutput);
				MEMBER(on_not_touching, server::CBaseTrigger, entity2::CEntityIOOutput);
				MEMBER(h_touching_entities, server::CBaseTrigger, cutl_vector<chandle<server::CBaseEntity>>);
				MEMBER(b_client_side_predicted, server::CBaseTrigger, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseTrigger

			class CPathMover : public server::CBaseEntity {
				MEMBER(vec_path_nodes, server::CPathMover, cutl_vector<chandle<server::CMoverPathNode>>);
				MEMBER(fl_path_length, server::CPathMover, float);
				MEMBER(b_closed_loop, server::CPathMover, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathMover

			class CPointTeleport : public server::CServerOnlyPointEntity {
				MEMBER(v_save_origin, server::CPointTeleport, Vector);
				MEMBER(v_save_angles, server::CPointTeleport, QAngle);
				MEMBER(b_teleport_parented_entities, server::CPointTeleport, bool);
				MEMBER(b_teleport_use_current_angle, server::CPointTeleport, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointTeleport

			class CLogicCompare : public server::CLogicalEntity {
				MEMBER(fl_in_value, server::CLogicCompare, float);
				MEMBER(fl_compare_value, server::CLogicCompare, float);
				MEMBER(on_less_than, server::CLogicCompare, CEntityOutputTemplate<float>);
				MEMBER(on_equal_to, server::CLogicCompare, CEntityOutputTemplate<float>);
				MEMBER(on_not_equal_to, server::CLogicCompare, CEntityOutputTemplate<float>);
				MEMBER(on_greater_than, server::CLogicCompare, CEntityOutputTemplate<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicCompare

			class CInfoInstructorHintBombTargetB : public server::CPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoInstructorHintBombTargetB

			class CProjectedDecal : public server::CPointEntity {
				MEMBER(n_texture, server::CProjectedDecal, int32_t);
				MEMBER(fl_distance, server::CProjectedDecal, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CProjectedDecal

			class CEnvLaser : public server::CBeam {
				MEMBER(isz_laser_target, server::CEnvLaser, CUtlSymbolLarge);
				MEMBER(p_sprite, server::CEnvLaser, server::CSprite*);
				MEMBER(isz_sprite_name, server::CEnvLaser, CUtlSymbolLarge);
				MEMBER(fire_position, server::CEnvLaser, Vector);
				MEMBER(fl_start_frame, server::CEnvLaser, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvLaser

			class CHostage : public server::CHostageExpresserShim {
				MEMBER(on_hostage_begin_grab, server::CHostage, entity2::CEntityIOOutput);
				MEMBER(on_first_picked_up, server::CHostage, entity2::CEntityIOOutput);
				MEMBER(on_dropped_not_rescued, server::CHostage, entity2::CEntityIOOutput);
				MEMBER(on_rescued, server::CHostage, entity2::CEntityIOOutput);
				MEMBER(entity_spotted_state, server::CHostage, server::EntitySpottedState_t);
				MEMBER(n_spot_rules, server::CHostage, int32_t);
				MEMBER(ui_hostage_spawn_exclusion_group_mask, server::CHostage, uint32_t);
				MEMBER(n_hostage_spawn_random_factor, server::CHostage, uint32_t);
				MEMBER(b_remove, server::CHostage, bool);
				MEMBER(vel, server::CHostage, Vector);
				MEMBER(is_rescued, server::CHostage, bool);
				MEMBER(jumped_this_frame, server::CHostage, bool);
				MEMBER(n_hostage_state, server::CHostage, int32_t);
				MEMBER(leader, server::CHostage, chandle<server::CBaseEntity>);
				MEMBER(last_leader, server::CHostage, chandle<server::CCSPlayerPawnBase>);
				MEMBER(reuse_timer, server::CHostage, server::CountdownTimer);
				MEMBER(has_been_used, server::CHostage, bool);
				MEMBER(accel, server::CHostage, Vector);
				MEMBER(is_running, server::CHostage, bool);
				MEMBER(is_crouching, server::CHostage, bool);
				MEMBER(jump_timer, server::CHostage, server::CountdownTimer);
				MEMBER(is_waiting_for_leader, server::CHostage, bool);
				MEMBER(repath_timer, server::CHostage, server::CountdownTimer);
				MEMBER(inhibit_door_timer, server::CHostage, server::CountdownTimer);
				MEMBER(inhibit_obstacle_avoidance_timer, server::CHostage, server::CountdownTimer);
				MEMBER(wiggle_timer, server::CHostage, server::CountdownTimer);
				MEMBER(is_adjusted, server::CHostage, bool);
				MEMBER(b_hands_have_been_cut, server::CHostage, bool);
				MEMBER(h_hostage_grabber, server::CHostage, chandle<server::CCSPlayerPawn>);
				MEMBER(f_last_grab_time, server::CHostage, entity2::GameTime_t);
				MEMBER(vec_position_when_started_dropping_to_ground, server::CHostage, Vector);
				MEMBER(vec_grabbed_pos, server::CHostage, Vector);
				MEMBER(fl_rescue_start_time, server::CHostage, entity2::GameTime_t);
				MEMBER(fl_grab_success_time, server::CHostage, entity2::GameTime_t);
				MEMBER(fl_drop_start_time, server::CHostage, entity2::GameTime_t);
				MEMBER(n_approach_reward_payouts, server::CHostage, int32_t);
				MEMBER(n_pickup_event_count, server::CHostage, int32_t);
				MEMBER(vec_spawn_ground_pos, server::CHostage, Vector);
				MEMBER(vec_hostage_reset_position, server::CHostage, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHostage

			class CItemDefuserAlias_item_defuser : public server::CItemDefuser {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CItemDefuserAlias_item_defuser

			class CEnvTracer : public server::CPointEntity {
				MEMBER(vec_end, server::CEnvTracer, Vector);
				MEMBER(fl_delay, server::CEnvTracer, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvTracer

			class CFuncTrackAuto : public server::CFuncTrackChange {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncTrackAuto

			class CPushable : public server::CBreakable {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPushable

			class FilterHealth : public server::CBaseFilter {
				MEMBER(b_adrenaline_active, server::FilterHealth, bool);
				MEMBER(i_health_min, server::FilterHealth, int32_t);
				MEMBER(i_health_max, server::FilterHealth, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class FilterHealth

			class CMelee : public server::CCSWeaponBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMelee

			class CEnvEntityIgniter : public server::CBaseEntity {
				MEMBER(fl_lifetime, server::CEnvEntityIgniter, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvEntityIgniter

			class CPlantedC4 : public server::CBaseAnimGraph {
				MEMBER(b_bomb_ticking, server::CPlantedC4, bool);
				MEMBER(fl_c4_blow, server::CPlantedC4, entity2::GameTime_t);
				MEMBER(n_bomb_site, server::CPlantedC4, int32_t);
				MEMBER(n_source_soundscape_hash, server::CPlantedC4, int32_t);
				MEMBER(attribute_manager, server::CPlantedC4, server::CAttributeContainer);
				MEMBER(on_bomb_defused, server::CPlantedC4, entity2::CEntityIOOutput);
				MEMBER(on_bomb_begin_defuse, server::CPlantedC4, entity2::CEntityIOOutput);
				MEMBER(on_bomb_defuse_aborted, server::CPlantedC4, entity2::CEntityIOOutput);
				MEMBER(b_cannot_be_defused, server::CPlantedC4, bool);
				MEMBER(entity_spotted_state, server::CPlantedC4, server::EntitySpottedState_t);
				MEMBER(n_spot_rules, server::CPlantedC4, int32_t);
				MEMBER(b_training_placed_by_player, server::CPlantedC4, bool);
				MEMBER(b_has_exploded, server::CPlantedC4, bool);
				MEMBER(fl_timer_length, server::CPlantedC4, float);
				MEMBER(b_being_defused, server::CPlantedC4, bool);
				MEMBER(f_last_defuse_time, server::CPlantedC4, entity2::GameTime_t);
				MEMBER(fl_defuse_length, server::CPlantedC4, float);
				MEMBER(fl_defuse_count_down, server::CPlantedC4, entity2::GameTime_t);
				MEMBER(b_bomb_defused, server::CPlantedC4, bool);
				MEMBER(h_bomb_defuser, server::CPlantedC4, chandle<server::CCSPlayerPawn>);
				MEMBER(h_control_panel, server::CPlantedC4, chandle<server::CBaseEntity>);
				MEMBER(i_progress_bar_time, server::CPlantedC4, int32_t);
				MEMBER(b_voice_alert_fired, server::CPlantedC4, bool);
				MEMBER_ARR(b_voice_alert_played, server::CPlantedC4, 4, bool);
				MEMBER(fl_next_bot_beep_time, server::CPlantedC4, entity2::GameTime_t);
				MEMBER(ang_catch_up_to_player_eye, server::CPlantedC4, QAngle);
				MEMBER(fl_last_spin_detection_time, server::CPlantedC4, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlantedC4

			class CTriggerTripWire : public server::CBaseTrigger {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerTripWire

			class CMarkupVolumeTagged : public server::CMarkupVolume {
				MEMBER(b_is_group, server::CMarkupVolumeTagged, bool);
				MEMBER(b_group_by_prefab, server::CMarkupVolumeTagged, bool);
				MEMBER(b_group_by_volume, server::CMarkupVolumeTagged, bool);
				MEMBER(b_group_other_groups, server::CMarkupVolumeTagged, bool);
				MEMBER(b_is_in_group, server::CMarkupVolumeTagged, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMarkupVolumeTagged

			class CTriggerMultiple : public server::CBaseTrigger {
				MEMBER(on_trigger, server::CTriggerMultiple, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerMultiple

			class CPointPush : public server::CPointEntity {
				MEMBER(b_enabled, server::CPointPush, bool);
				MEMBER(fl_magnitude, server::CPointPush, float);
				MEMBER(fl_radius, server::CPointPush, float);
				MEMBER(fl_inner_radius, server::CPointPush, float);
				MEMBER(fl_cone_of_influence, server::CPointPush, float);
				MEMBER(isz_filter_name, server::CPointPush, CUtlSymbolLarge);
				MEMBER(h_filter, server::CPointPush, chandle<server::CBaseFilter>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointPush

			class CBaseProp : public server::CBaseAnimGraph {
				MEMBER(b_model_overrode_block_los, server::CBaseProp, bool);
				MEMBER(i_shape_type, server::CBaseProp, int32_t);
				MEMBER(b_conform_to_collision_bounds, server::CBaseProp, bool);
				MEMBER(m_preferred_catch_transform, server::CBaseProp, matrix3x4_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseProp

			class CPrecipitationBlocker : public server::CBaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPrecipitationBlocker

			class CFuncElectrifiedVolume : public server::CFuncBrush {
				MEMBER(effect_name, server::CFuncElectrifiedVolume, CUtlSymbolLarge);
				MEMBER(effect_interpenetrate_name, server::CFuncElectrifiedVolume, CUtlSymbolLarge);
				MEMBER(effect_zap_name, server::CFuncElectrifiedVolume, CUtlSymbolLarge);
				MEMBER(isz_effect_source, server::CFuncElectrifiedVolume, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncElectrifiedVolume

			class CPrecipitation : public server::CBaseTrigger {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPrecipitation

			class CPhysicsPropOverride : public server::CPhysicsProp {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysicsPropOverride

			class CBodyComponentSkeletonInstance : public server::CBodyComponent {
				MEMBER(skeleton_instance, server::CBodyComponentSkeletonInstance, server::CSkeletonInstance);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBodyComponentSkeletonInstance

			class CSoundOpvarSetPointBase : public server::CBaseEntity {
				MEMBER(b_disabled, server::CSoundOpvarSetPointBase, bool);
				MEMBER(h_source, server::CSoundOpvarSetPointBase, CEntityHandle);
				MEMBER(isz_source_entity_name, server::CSoundOpvarSetPointBase, CUtlSymbolLarge);
				MEMBER(v_last_position, server::CSoundOpvarSetPointBase, Vector);
				MEMBER(isz_stack_name, server::CSoundOpvarSetPointBase, CUtlSymbolLarge);
				MEMBER(isz_operator_name, server::CSoundOpvarSetPointBase, CUtlSymbolLarge);
				MEMBER(isz_opvar_name, server::CSoundOpvarSetPointBase, CUtlSymbolLarge);
				MEMBER(i_opvar_index, server::CSoundOpvarSetPointBase, int32_t);
				MEMBER(b_use_auto_compare, server::CSoundOpvarSetPointBase, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundOpvarSetPointBase

			class CBaseAnimGraphController : public client::CSkeletonAnimationController {
				MEMBER(anim_graph_networked_vars, server::CBaseAnimGraphController, server::CAnimGraphNetworkedVariables);
				MEMBER(b_sequence_finished, server::CBaseAnimGraphController, bool);
				MEMBER(fl_sound_sync_time, server::CBaseAnimGraphController, float);
				MEMBER(n_active_ikchain_mask, server::CBaseAnimGraphController, uint32_t);
				MEMBER(h_sequence, server::CBaseAnimGraphController, animationsystem::HSequence);
				MEMBER(fl_seq_start_time, server::CBaseAnimGraphController, entity2::GameTime_t);
				MEMBER(fl_seq_fixed_cycle, server::CBaseAnimGraphController, float);
				MEMBER(n_anim_loop_mode, server::CBaseAnimGraphController, client::AnimLoopMode_t);
				MEMBER(fl_playback_rate, server::CBaseAnimGraphController, CNetworkedQuantizedFloat);
				MEMBER(n_notify_state, server::CBaseAnimGraphController, client::SequenceFinishNotifyState_t);
				MEMBER(b_networked_animation_inputs_changed, server::CBaseAnimGraphController, bool);
				MEMBER(b_networked_sequence_changed, server::CBaseAnimGraphController, bool);
				MEMBER(b_last_update_skipped, server::CBaseAnimGraphController, bool);
				MEMBER(fl_prev_anim_update_time, server::CBaseAnimGraphController, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseAnimGraphController

			class CTriggerPush : public server::CBaseTrigger {
				MEMBER(ang_push_entity_space, server::CTriggerPush, QAngle);
				MEMBER(vec_push_dir_entity_space, server::CTriggerPush, Vector);
				MEMBER(b_trigger_on_start_touch, server::CTriggerPush, bool);
				MEMBER(b_use_path_simple, server::CTriggerPush, bool);
				MEMBER(isz_path_simple_name, server::CTriggerPush, CUtlSymbolLarge);
				MEMBER(path_simple, server::CTriggerPush, server::CPathSimple*);
				MEMBER(spline_push_type, server::CTriggerPush, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerPush

			class CCSGO_TeamSelectCounterTerroristPosition : public server::CCSGO_TeamSelectCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGO_TeamSelectCounterTerroristPosition

			class CScriptTriggerHurt : public server::CTriggerHurt {
				MEMBER(v_extent, server::CScriptTriggerHurt, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CScriptTriggerHurt

			class CTriggerProximity : public server::CBaseTrigger {
				MEMBER(h_measure_target, server::CTriggerProximity, chandle<server::CBaseEntity>);
				MEMBER(isz_measure_target, server::CTriggerProximity, CUtlSymbolLarge);
				MEMBER(f_radius, server::CTriggerProximity, float);
				MEMBER(n_touchers, server::CTriggerProximity, int32_t);
				MEMBER(nearest_entity_distance, server::CTriggerProximity, CEntityOutputTemplate<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerProximity

			class CCSGO_WingmanIntroCounterTerroristPosition : public server::CCSGO_WingmanIntroCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGO_WingmanIntroCounterTerroristPosition

			class CBaseDMStart : public server::CPointEntity {
				MEMBER(master, server::CBaseDMStart, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseDMStart

			class CSoundOpvarSetEntity : public server::CBaseEntity {
				MEMBER(isz_stack_name, server::CSoundOpvarSetEntity, CUtlSymbolLarge);
				MEMBER(isz_operator_name, server::CSoundOpvarSetEntity, CUtlSymbolLarge);
				MEMBER(isz_opvar_name, server::CSoundOpvarSetEntity, CUtlSymbolLarge);
				MEMBER(n_opvar_type, server::CSoundOpvarSetEntity, int32_t);
				MEMBER(n_opvar_index, server::CSoundOpvarSetEntity, int32_t);
				MEMBER(fl_opvar_value, server::CSoundOpvarSetEntity, float);
				MEMBER(opvar_value_string, server::CSoundOpvarSetEntity, CUtlSymbolLarge);
				MEMBER(b_set_on_spawn, server::CSoundOpvarSetEntity, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundOpvarSetEntity

			class CScriptTriggerPush : public server::CTriggerPush {
				MEMBER(v_extent, server::CScriptTriggerPush, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CScriptTriggerPush

			class CRopeKeyframe : public server::CBaseModelEntity {
				MEMBER(rope_flags, server::CRopeKeyframe, uint16_t);
				MEMBER(i_next_link_name, server::CRopeKeyframe, CUtlSymbolLarge);
				MEMBER(slack, server::CRopeKeyframe, int16_t);
				MEMBER(width, server::CRopeKeyframe, float);
				MEMBER(texture_scale, server::CRopeKeyframe, float);
				MEMBER(n_segments, server::CRopeKeyframe, uint8_t);
				MEMBER(b_constrain_between_endpoints, server::CRopeKeyframe, bool);
				MEMBER(str_rope_material_model, server::CRopeKeyframe, CUtlSymbolLarge);
				MEMBER(i_rope_material_model_index, server::CRopeKeyframe, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(subdiv, server::CRopeKeyframe, uint8_t);
				MEMBER(n_change_count, server::CRopeKeyframe, uint8_t);
				MEMBER(rope_length, server::CRopeKeyframe, int16_t);
				MEMBER(f_locked_points, server::CRopeKeyframe, uint8_t);
				MEMBER(b_created_from_map_file, server::CRopeKeyframe, bool);
				MEMBER(fl_scroll_speed, server::CRopeKeyframe, float);
				MEMBER(b_start_point_valid, server::CRopeKeyframe, bool);
				MEMBER(b_end_point_valid, server::CRopeKeyframe, bool);
				MEMBER(h_start_point, server::CRopeKeyframe, chandle<server::CBaseEntity>);
				MEMBER(h_end_point, server::CRopeKeyframe, chandle<server::CBaseEntity>);
				MEMBER(i_start_attachment, server::CRopeKeyframe, modellib::AttachmentHandle_t);
				MEMBER(i_end_attachment, server::CRopeKeyframe, modellib::AttachmentHandle_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRopeKeyframe

			class CFuncLadder : public server::CBaseModelEntity {
				MEMBER(vec_ladder_dir, server::CFuncLadder, Vector);
				MEMBER(dismounts, server::CFuncLadder, cutl_vector<chandle<server::CInfoLadderDismount>>);
				MEMBER(vec_local_top, server::CFuncLadder, Vector);
				MEMBER(vec_player_mount_position_top, server::CFuncLadder, Vector);
				MEMBER(vec_player_mount_position_bottom, server::CFuncLadder, Vector);
				MEMBER(fl_auto_ride_speed, server::CFuncLadder, float);
				MEMBER(b_disabled, server::CFuncLadder, bool);
				MEMBER(b_fake_ladder, server::CFuncLadder, bool);
				MEMBER(b_has_slack, server::CFuncLadder, bool);
				MEMBER(surface_prop_name, server::CFuncLadder, CUtlSymbolLarge);
				MEMBER(on_player_got_on_ladder, server::CFuncLadder, entity2::CEntityIOOutput);
				MEMBER(on_player_got_off_ladder, server::CFuncLadder, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncLadder

			class CEnvFireSensor : public server::CBaseEntity {
				MEMBER(b_enabled, server::CEnvFireSensor, bool);
				MEMBER(b_heat_at_level, server::CEnvFireSensor, bool);
				MEMBER(radius, server::CEnvFireSensor, float);
				MEMBER(target_level, server::CEnvFireSensor, float);
				MEMBER(target_time, server::CEnvFireSensor, float);
				MEMBER(level_time, server::CEnvFireSensor, float);
				MEMBER(on_heat_level_start, server::CEnvFireSensor, entity2::CEntityIOOutput);
				MEMBER(on_heat_level_end, server::CEnvFireSensor, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvFireSensor

			class CCSGameRulesProxy : public server::CGameRulesProxy {
				MEMBER(p_game_rules, server::CCSGameRulesProxy, server::CCSGameRules*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGameRulesProxy

			class CPlayerPing : public server::CBaseEntity {
				MEMBER(h_player, server::CPlayerPing, chandle<server::CCSPlayerPawn>);
				MEMBER(h_pinged_entity, server::CPlayerPing, chandle<server::CBaseEntity>);
				MEMBER(i_type, server::CPlayerPing, int32_t);
				MEMBER(b_urgent, server::CPlayerPing, bool);
				MEMBER_ARR(sz_place_name, server::CPlayerPing, 18, char);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayerPing

			class CLogicPlayerProxy : public server::CLogicalEntity {
				MEMBER(h_player, server::CLogicPlayerProxy, chandle<server::CBaseEntity>);
				MEMBER(player_has_ammo, server::CLogicPlayerProxy, entity2::CEntityIOOutput);
				MEMBER(player_has_no_ammo, server::CLogicPlayerProxy, entity2::CEntityIOOutput);
				MEMBER(player_died, server::CLogicPlayerProxy, entity2::CEntityIOOutput);
				MEMBER(requested_player_health, server::CLogicPlayerProxy, CEntityOutputTemplate<int32_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicPlayerProxy

			class CEnvBeam : public server::CBeam {
				MEMBER(active, server::CEnvBeam, int32_t);
				MEMBER(sprite_texture, server::CEnvBeam, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(isz_start_entity, server::CEnvBeam, CUtlSymbolLarge);
				MEMBER(isz_end_entity, server::CEnvBeam, CUtlSymbolLarge);
				MEMBER(life, server::CEnvBeam, float);
				MEMBER(bolt_width, server::CEnvBeam, float);
				MEMBER(noise_amplitude, server::CEnvBeam, float);
				MEMBER(speed, server::CEnvBeam, int32_t);
				MEMBER(restrike, server::CEnvBeam, float);
				MEMBER(isz_sprite_name, server::CEnvBeam, CUtlSymbolLarge);
				MEMBER(frame_start, server::CEnvBeam, int32_t);
				MEMBER(v_end_point_world, server::CEnvBeam, Vector);
				MEMBER(v_end_point_relative, server::CEnvBeam, Vector);
				MEMBER(radius, server::CEnvBeam, float);
				MEMBER(touch_type, server::CEnvBeam, server::Touch_t);
				MEMBER(i_filter_name, server::CEnvBeam, CUtlSymbolLarge);
				MEMBER(h_filter, server::CEnvBeam, chandle<server::CBaseEntity>);
				MEMBER(isz_decal, server::CEnvBeam, CUtlSymbolLarge);
				MEMBER(on_touched_by_entity, server::CEnvBeam, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvBeam

			class CBaseFlexAlias_funCBaseFlex : public server::CBaseFlex {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseFlexAlias_funCBaseFlex

			class CTriggerBuoyancy : public server::CBaseTrigger {
				MEMBER(buoyancy_helper, server::CTriggerBuoyancy, server::CBuoyancyHelper);
				MEMBER(fl_fluid_density, server::CTriggerBuoyancy, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerBuoyancy

			class CTonemapTrigger : public server::CBaseTrigger {
				MEMBER(tonemap_controller_name, server::CTonemapTrigger, CUtlSymbolLarge);
				MEMBER(h_tonemap_controller, server::CTonemapTrigger, CEntityHandle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTonemapTrigger

			class CCSWeaponBaseVData : public server::CBasePlayerWeaponVData {
				MEMBER(weapon_type, server::CCSWeaponBaseVData, client::CSWeaponType);
				MEMBER(weapon_category, server::CCSWeaponBaseVData, client::CSWeaponCategory);
				MEMBER(sz_view_model, server::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(sz_player_model, server::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(sz_world_dropped_model, server::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(sz_aimsight_lens_mask_model, server::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(sz_magazine_model, server::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(sz_heat_effect, server::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(sz_eject_brass_effect, server::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(sz_muzzle_flash_particle_alt, server::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(sz_muzzle_flash_third_person_particle, server::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(sz_muzzle_flash_third_person_particle_alt, server::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(sz_tracer_particle, server::CCSWeaponBaseVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(gear_slot, server::CCSWeaponBaseVData, client::gear_slot_t);
				MEMBER(gear_slot_position, server::CCSWeaponBaseVData, int32_t);
				MEMBER(default_loadout_slot, server::CCSWeaponBaseVData, client::loadout_slot_t);
				MEMBER(s_wrong_team_msg, server::CCSWeaponBaseVData, CUtlString);
				MEMBER(n_price, server::CCSWeaponBaseVData, int32_t);
				MEMBER(n_kill_award, server::CCSWeaponBaseVData, int32_t);
				MEMBER(n_primary_reserve_ammo_max, server::CCSWeaponBaseVData, int32_t);
				MEMBER(n_secondary_reserve_ammo_max, server::CCSWeaponBaseVData, int32_t);
				MEMBER(b_melee_weapon, server::CCSWeaponBaseVData, bool);
				MEMBER(b_has_burst_mode, server::CCSWeaponBaseVData, bool);
				MEMBER(b_is_revolver, server::CCSWeaponBaseVData, bool);
				MEMBER(b_cannot_shoot_underwater, server::CCSWeaponBaseVData, bool);
				MEMBER(sz_name, server::CCSWeaponBaseVData, CGlobalSymbol);
				MEMBER(sz_anim_extension, server::CCSWeaponBaseVData, CUtlString);
				MEMBER(e_silencer_type, server::CCSWeaponBaseVData, client::CSWeaponSilencerType);
				MEMBER(n_crosshair_min_distance, server::CCSWeaponBaseVData, int32_t);
				MEMBER(n_crosshair_delta_distance, server::CCSWeaponBaseVData, int32_t);
				MEMBER(b_is_full_auto, server::CCSWeaponBaseVData, bool);
				MEMBER(n_num_bullets, server::CCSWeaponBaseVData, int32_t);
				MEMBER(fl_cycle_time, server::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_max_speed, server::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_spread, server::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_inaccuracy_crouch, server::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_inaccuracy_stand, server::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_inaccuracy_jump, server::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_inaccuracy_land, server::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_inaccuracy_ladder, server::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_inaccuracy_fire, server::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_inaccuracy_move, server::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_recoil_angle, server::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_recoil_angle_variance, server::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_recoil_magnitude, server::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(fl_recoil_magnitude_variance, server::CCSWeaponBaseVData, client::CFiringModeFloat);
				MEMBER(n_tracer_frequency, server::CCSWeaponBaseVData, client::CFiringModeInt);
				MEMBER(fl_inaccuracy_jump_initial, server::CCSWeaponBaseVData, float);
				MEMBER(fl_inaccuracy_jump_apex, server::CCSWeaponBaseVData, float);
				MEMBER(fl_inaccuracy_reload, server::CCSWeaponBaseVData, float);
				MEMBER(n_recoil_seed, server::CCSWeaponBaseVData, int32_t);
				MEMBER(n_spread_seed, server::CCSWeaponBaseVData, int32_t);
				MEMBER(fl_time_to_idle_after_fire, server::CCSWeaponBaseVData, float);
				MEMBER(fl_idle_interval, server::CCSWeaponBaseVData, float);
				MEMBER(fl_attack_movespeed_factor, server::CCSWeaponBaseVData, float);
				MEMBER(fl_heat_per_shot, server::CCSWeaponBaseVData, float);
				MEMBER(fl_inaccuracy_pitch_shift, server::CCSWeaponBaseVData, float);
				MEMBER(fl_inaccuracy_alt_sound_threshold, server::CCSWeaponBaseVData, float);
				MEMBER(fl_bot_audible_range, server::CCSWeaponBaseVData, float);
				MEMBER(sz_use_radio_subtitle, server::CCSWeaponBaseVData, CUtlString);
				MEMBER(b_unzooms_after_shot, server::CCSWeaponBaseVData, bool);
				MEMBER(b_hide_view_model_when_zoomed, server::CCSWeaponBaseVData, bool);
				MEMBER(n_zoom_levels, server::CCSWeaponBaseVData, int32_t);
				MEMBER(n_zoom_fov1, server::CCSWeaponBaseVData, int32_t);
				MEMBER(n_zoom_fov2, server::CCSWeaponBaseVData, int32_t);
				MEMBER(fl_zoom_time0, server::CCSWeaponBaseVData, float);
				MEMBER(fl_zoom_time1, server::CCSWeaponBaseVData, float);
				MEMBER(fl_zoom_time2, server::CCSWeaponBaseVData, float);
				MEMBER(fl_iron_sight_pull_up_speed, server::CCSWeaponBaseVData, float);
				MEMBER(fl_iron_sight_put_down_speed, server::CCSWeaponBaseVData, float);
				MEMBER(fl_iron_sight_fov, server::CCSWeaponBaseVData, float);
				MEMBER(fl_iron_sight_pivot_forward, server::CCSWeaponBaseVData, float);
				MEMBER(fl_iron_sight_looseness, server::CCSWeaponBaseVData, float);
				MEMBER(ang_pivot_angle, server::CCSWeaponBaseVData, QAngle);
				MEMBER(vec_iron_sight_eye_pos, server::CCSWeaponBaseVData, Vector);
				MEMBER(n_damage, server::CCSWeaponBaseVData, int32_t);
				MEMBER(fl_headshot_multiplier, server::CCSWeaponBaseVData, float);
				MEMBER(fl_armor_ratio, server::CCSWeaponBaseVData, float);
				MEMBER(fl_penetration, server::CCSWeaponBaseVData, float);
				MEMBER(fl_range, server::CCSWeaponBaseVData, float);
				MEMBER(fl_range_modifier, server::CCSWeaponBaseVData, float);
				MEMBER(fl_flinch_velocity_modifier_large, server::CCSWeaponBaseVData, float);
				MEMBER(fl_flinch_velocity_modifier_small, server::CCSWeaponBaseVData, float);
				MEMBER(fl_recovery_time_crouch, server::CCSWeaponBaseVData, float);
				MEMBER(fl_recovery_time_stand, server::CCSWeaponBaseVData, float);
				MEMBER(fl_recovery_time_crouch_final, server::CCSWeaponBaseVData, float);
				MEMBER(fl_recovery_time_stand_final, server::CCSWeaponBaseVData, float);
				MEMBER(n_recovery_transition_start_bullet, server::CCSWeaponBaseVData, int32_t);
				MEMBER(n_recovery_transition_end_bullet, server::CCSWeaponBaseVData, int32_t);
				MEMBER(fl_throw_velocity, server::CCSWeaponBaseVData, float);
				MEMBER(v_smoke_color, server::CCSWeaponBaseVData, Vector);
				MEMBER(sz_anim_class, server::CCSWeaponBaseVData, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSWeaponBaseVData

			class CEnvCubemapBox : public server::CEnvCubemap {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvCubemapBox

			class CItem_Healthshot : public server::CWeaponBaseItem {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CItem_Healthshot

			class CFogTrigger : public server::CBaseTrigger {
				MEMBER(fog, server::CFogTrigger, server::fogparams_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFogTrigger

			class CWeaponSSG08 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponSSG08

			class CWeaponFiveSeven : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponFiveSeven

			class CPointBroadcastClientCommand : public server::CPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointBroadcastClientCommand

			class CTriggerHostageReset : public server::CBaseTrigger {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerHostageReset

			class CWeaponMP7 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponMP7

			class CInfoTeleportDestination : public server::CPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoTeleportDestination

			class CBodyComponent : public entity2::CEntityComponent {
				MEMBER(p_scene_node, server::CBodyComponent, server::CGameSceneNode*);
				MEMBER(_m_p_chain_entity, server::CBodyComponent, entity2::CNetworkVarChainer);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBodyComponent

			class CWeaponSawedoff : public server::CCSWeaponBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponSawedoff

			class CBaseAnimGraph : public server::CBaseModelEntity {
				MEMBER(b_initially_populate_interp_history, server::CBaseAnimGraph, bool);
				MEMBER(p_choreo_services, server::CBaseAnimGraph, client::IChoreoServices*);
				MEMBER(b_anim_graph_update_enabled, server::CBaseAnimGraph, bool);
				MEMBER(fl_max_slope_distance, server::CBaseAnimGraph, float);
				MEMBER(v_last_slope_check_pos, server::CBaseAnimGraph, Vector);
				MEMBER(b_animation_update_scheduled, server::CBaseAnimGraph, bool);
				MEMBER(vec_force, server::CBaseAnimGraph, Vector);
				MEMBER(n_force_bone, server::CBaseAnimGraph, int32_t);
				MEMBER(ragdoll_pose, server::CBaseAnimGraph, server::PhysicsRagdollPose_t);
				MEMBER(b_ragdoll_client_side, server::CBaseAnimGraph, bool);
				MEMBER(n_last_destructible_part_destroyed_animgraph_set_tick, server::CBaseAnimGraph, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseAnimGraph

			class CEnvSoundscapeTriggerable : public server::CEnvSoundscape {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvSoundscapeTriggerable

			class CBasePlatTrain : public server::CBaseToggle {
				MEMBER(noise_moving, server::CBasePlatTrain, CUtlSymbolLarge);
				MEMBER(noise_arrived, server::CBasePlatTrain, CUtlSymbolLarge);
				MEMBER(volume, server::CBasePlatTrain, float);
				MEMBER(fl_twidth, server::CBasePlatTrain, float);
				MEMBER(fl_tlength, server::CBasePlatTrain, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBasePlatTrain

			class CDecoyProjectile : public server::CBaseCSGrenadeProjectile {
				MEMBER(n_decoy_shot_tick, server::CDecoyProjectile, int32_t);
				MEMBER(shots_remaining, server::CDecoyProjectile, int32_t);
				MEMBER(f_expire_time, server::CDecoyProjectile, entity2::GameTime_t);
				MEMBER(decoy_weapon_def_index, server::CDecoyProjectile, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDecoyProjectile

			class CMoverPathNode : public server::CPointEntity {
				MEMBER(v_in_tangent_local, server::CMoverPathNode, Vector);
				MEMBER(v_out_tangent_local, server::CMoverPathNode, Vector);
				MEMBER(sz_parent_path_unique_id, server::CMoverPathNode, CUtlSymbolLarge);
				MEMBER(on_pass_through, server::CMoverPathNode, entity2::CEntityIOOutput);
				MEMBER(on_pass_through_forward, server::CMoverPathNode, entity2::CEntityIOOutput);
				MEMBER(on_pass_through_reverse, server::CMoverPathNode, entity2::CEntityIOOutput);
				MEMBER(h_mover, server::CMoverPathNode, chandle<server::CPathMover>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMoverPathNode

			class CPlayerSprayDecal : public server::CModelPointEntity {
				MEMBER(n_unique_id, server::CPlayerSprayDecal, int32_t);
				MEMBER(un_account_id, server::CPlayerSprayDecal, uint32_t);
				MEMBER(un_trace_id, server::CPlayerSprayDecal, uint32_t);
				MEMBER(rt_gc_time, server::CPlayerSprayDecal, uint32_t);
				MEMBER(vec_end_pos, server::CPlayerSprayDecal, Vector);
				MEMBER(vec_start, server::CPlayerSprayDecal, Vector);
				MEMBER(vec_left, server::CPlayerSprayDecal, Vector);
				MEMBER(vec_normal, server::CPlayerSprayDecal, Vector);
				MEMBER(n_player, server::CPlayerSprayDecal, int32_t);
				MEMBER(n_entity, server::CPlayerSprayDecal, int32_t);
				MEMBER(n_hitbox, server::CPlayerSprayDecal, int32_t);
				MEMBER(fl_creation_time, server::CPlayerSprayDecal, float);
				MEMBER(n_tint_id, server::CPlayerSprayDecal, int32_t);
				MEMBER(n_version, server::CPlayerSprayDecal, uint8_t);
				MEMBER_ARR(ub_signature, server::CPlayerSprayDecal, 128, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayerSprayDecal

			class CHandleTest : public server::CBaseEntity {
				MEMBER(handle, server::CHandleTest, chandle<server::CBaseEntity>);
				MEMBER(b_send_handle, server::CHandleTest, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHandleTest

			class CCitadelSoundOpvarSetOBB : public server::CBaseEntity {
				MEMBER(isz_stack_name, server::CCitadelSoundOpvarSetOBB, CUtlSymbolLarge);
				MEMBER(isz_operator_name, server::CCitadelSoundOpvarSetOBB, CUtlSymbolLarge);
				MEMBER(isz_opvar_name, server::CCitadelSoundOpvarSetOBB, CUtlSymbolLarge);
				MEMBER(v_distance_inner_mins, server::CCitadelSoundOpvarSetOBB, Vector);
				MEMBER(v_distance_inner_maxs, server::CCitadelSoundOpvarSetOBB, Vector);
				MEMBER(v_distance_outer_mins, server::CCitadelSoundOpvarSetOBB, Vector);
				MEMBER(v_distance_outer_maxs, server::CCitadelSoundOpvarSetOBB, Vector);
				MEMBER(n_aabbdirection, server::CCitadelSoundOpvarSetOBB, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCitadelSoundOpvarSetOBB

			class CCSGO_WingmanIntroTerroristPosition : public server::CCSGO_WingmanIntroCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGO_WingmanIntroTerroristPosition

			class CSensorGrenade : public server::CBaseCSGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSensorGrenade

			class CPhysTorque : public server::CPhysForce {
				MEMBER(axis, server::CPhysTorque, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysTorque

			class CPlayer_ViewModelServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_ViewModelServices

			class CItemHeavyAssaultSuit : public server::CItemAssaultSuit {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CItemHeavyAssaultSuit

			class CPlayer_CameraServices : public client::CPlayerPawnComponent {
				MEMBER(vec_cs_view_punch_angle, server::CPlayer_CameraServices, QAngle);
				MEMBER(n_cs_view_punch_angle_tick, server::CPlayer_CameraServices, entity2::GameTick_t);
				MEMBER(fl_cs_view_punch_angle_tick_ratio, server::CPlayer_CameraServices, float);
				MEMBER(player_fog, server::CPlayer_CameraServices, server::fogplayerparams_t);
				MEMBER(h_color_correction_ctrl, server::CPlayer_CameraServices, chandle<server::CColorCorrection>);
				MEMBER(h_view_entity, server::CPlayer_CameraServices, chandle<server::CBaseEntity>);
				MEMBER(h_tonemap_controller, server::CPlayer_CameraServices, chandle<server::CTonemapController2>);
				MEMBER(audio, server::CPlayer_CameraServices, server::audioparams_t);
				MEMBER(post_processing_volumes, server::CPlayer_CameraServices, CNetworkUtlVectorBase<chandle<server::CPostProcessingVolume>>);
				MEMBER(fl_old_player_z, server::CPlayer_CameraServices, float);
				MEMBER(fl_old_player_view_offset_z, server::CPlayer_CameraServices, float);
				MEMBER(h_trigger_soundscape_list, server::CPlayer_CameraServices, cutl_vector<chandle<server::CEnvSoundscapeTriggerable>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_CameraServices

			class CCSGO_TeamIntroCharacterPosition : public server::CCSGO_TeamPreviewCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGO_TeamIntroCharacterPosition

			class CCSObserver_MovementServices : public server::CPlayer_MovementServices {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSObserver_MovementServices

			class CPointClientUIDialog : public server::CBaseClientUIEntity {
				MEMBER(h_activator, server::CPointClientUIDialog, chandle<server::CBaseEntity>);
				MEMBER(b_start_enabled, server::CPointClientUIDialog, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointClientUIDialog

			class CWeaponMP9 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponMP9

			class CNavVolumeMarkupVolume : public navlib::CNavVolume {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNavVolumeMarkupVolume

			class CPhysicsEntitySolver : public server::CLogicalEntity {
				MEMBER(h_moving_entity, server::CPhysicsEntitySolver, chandle<server::CBaseEntity>);
				MEMBER(h_physics_blocker, server::CPhysicsEntitySolver, chandle<server::CBaseEntity>);
				MEMBER(separation_duration, server::CPhysicsEntitySolver, float);
				MEMBER(cancel_time, server::CPhysicsEntitySolver, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysicsEntitySolver

			class CCSServerPointScriptEntity : public server::CCSPointScriptEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSServerPointScriptEntity

			class CBasePlayerController : public server::CBaseEntity {
				MEMBER(n_in_buttons_which_are_toggles, server::CBasePlayerController, uint64_t);
				MEMBER(n_tick_base, server::CBasePlayerController, uint32_t);
				MEMBER(h_pawn, server::CBasePlayerController, chandle<server::CBasePlayerPawn>);
				MEMBER(b_known_team_mismatch, server::CBasePlayerController, bool);
				MEMBER(n_split_screen_slot, server::CBasePlayerController, CSplitScreenSlot);
				MEMBER(h_split_owner, server::CBasePlayerController, chandle<server::CBasePlayerController>);
				MEMBER(h_split_screen_players, server::CBasePlayerController, cutl_vector<chandle<server::CBasePlayerController>>);
				MEMBER(b_is_hltv, server::CBasePlayerController, bool);
				MEMBER(i_connected, server::CBasePlayerController, client::PlayerConnectedState);
				MEMBER_ARR(isz_player_name, server::CBasePlayerController, 128, char);
				MEMBER(sz_network_idstring, server::CBasePlayerController, CUtlString);
				MEMBER(f_lerp_time, server::CBasePlayerController, float);
				MEMBER(b_lag_compensation, server::CBasePlayerController, bool);
				MEMBER(b_predict, server::CBasePlayerController, bool);
				MEMBER(b_auto_kick_disabled, server::CBasePlayerController, bool);
				MEMBER(b_is_low_violence, server::CBasePlayerController, bool);
				MEMBER(b_game_paused, server::CBasePlayerController, bool);
				MEMBER(i_ignore_global_chat, server::CBasePlayerController, client::ChatIgnoreType_t);
				MEMBER(fl_last_player_talk_time, server::CBasePlayerController, float);
				MEMBER(fl_last_entity_steady_state, server::CBasePlayerController, float);
				MEMBER(n_available_entity_steady_state, server::CBasePlayerController, int32_t);
				MEMBER(b_has_any_steady_state_ents, server::CBasePlayerController, bool);
				MEMBER(steam_id, server::CBasePlayerController, uint64_t);
				MEMBER(i_desired_fov, server::CBasePlayerController, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBasePlayerController

			class CLightGlow : public server::CBaseModelEntity {
				MEMBER(n_horizontal_size, server::CLightGlow, uint32_t);
				MEMBER(n_vertical_size, server::CLightGlow, uint32_t);
				MEMBER(n_min_dist, server::CLightGlow, uint32_t);
				MEMBER(n_max_dist, server::CLightGlow, uint32_t);
				MEMBER(n_outer_max_dist, server::CLightGlow, uint32_t);
				MEMBER(fl_glow_proxy_size, server::CLightGlow, float);
				MEMBER(fl_hdrcolor_scale, server::CLightGlow, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLightGlow

			class CBodyComponentBaseAnimGraph : public server::CBodyComponentSkeletonInstance {
				MEMBER(animation_controller, server::CBodyComponentBaseAnimGraph, server::CBaseAnimGraphController);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBodyComponentBaseAnimGraph

			class CBaseDoor : public server::CBaseToggle {
				MEMBER(ang_move_entity_space, server::CBaseDoor, QAngle);
				MEMBER(vec_move_dir_parent_space, server::CBaseDoor, Vector);
				MEMBER(ls, server::CBaseDoor, server::locksound_t);
				MEMBER(b_force_closed, server::CBaseDoor, bool);
				MEMBER(b_door_group, server::CBaseDoor, bool);
				MEMBER(b_locked, server::CBaseDoor, bool);
				MEMBER(b_ignore_debris, server::CBaseDoor, bool);
				MEMBER(e_spawn_position, server::CBaseDoor, server::FuncDoorSpawnPos_t);
				MEMBER(fl_block_damage, server::CBaseDoor, float);
				MEMBER(noise_moving, server::CBaseDoor, CUtlSymbolLarge);
				MEMBER(noise_arrived, server::CBaseDoor, CUtlSymbolLarge);
				MEMBER(noise_moving_closed, server::CBaseDoor, CUtlSymbolLarge);
				MEMBER(noise_arrived_closed, server::CBaseDoor, CUtlSymbolLarge);
				MEMBER(chain_target, server::CBaseDoor, CUtlSymbolLarge);
				MEMBER(on_blocked_closing, server::CBaseDoor, entity2::CEntityIOOutput);
				MEMBER(on_blocked_opening, server::CBaseDoor, entity2::CEntityIOOutput);
				MEMBER(on_unblocked_closing, server::CBaseDoor, entity2::CEntityIOOutput);
				MEMBER(on_unblocked_opening, server::CBaseDoor, entity2::CEntityIOOutput);
				MEMBER(on_fully_closed, server::CBaseDoor, entity2::CEntityIOOutput);
				MEMBER(on_fully_open, server::CBaseDoor, entity2::CEntityIOOutput);
				MEMBER(on_close, server::CBaseDoor, entity2::CEntityIOOutput);
				MEMBER(on_open, server::CBaseDoor, entity2::CEntityIOOutput);
				MEMBER(on_locked_use, server::CBaseDoor, entity2::CEntityIOOutput);
				MEMBER(b_loop_move_sound, server::CBaseDoor, bool);
				MEMBER(b_create_nav_obstacle, server::CBaseDoor, bool);
				MEMBER(is_chaining, server::CBaseDoor, bool);
				MEMBER(b_is_usable, server::CBaseDoor, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseDoor

			class CSceneEntityAlias_logic_choreographed_scene : public server::CSceneEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSceneEntityAlias_logic_choreographed_scene

			class CBodyComponentPoint : public server::CBodyComponent {
				MEMBER(scene_node, server::CBodyComponentPoint, server::CGameSceneNode);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBodyComponentPoint

			class CDynamicPropAlias_cable_dynamic : public server::CDynamicProp {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDynamicPropAlias_cable_dynamic

			class CPointGamestatsCounter : public server::CPointEntity {
				MEMBER(str_statistic_name, server::CPointGamestatsCounter, CUtlSymbolLarge);
				MEMBER(b_disabled, server::CPointGamestatsCounter, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointGamestatsCounter

			class CEnvShake : public server::CPointEntity {
				MEMBER(limit_to_entity, server::CEnvShake, CUtlSymbolLarge);
				MEMBER(amplitude, server::CEnvShake, float);
				MEMBER(frequency, server::CEnvShake, float);
				MEMBER(duration, server::CEnvShake, float);
				MEMBER(radius, server::CEnvShake, float);
				MEMBER(stop_time, server::CEnvShake, entity2::GameTime_t);
				MEMBER(next_shake, server::CEnvShake, entity2::GameTime_t);
				MEMBER(current_amp, server::CEnvShake, float);
				MEMBER(max_force, server::CEnvShake, Vector);
				MEMBER(shake_callback, server::CEnvShake, server::CPhysicsShake);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvShake

			class CBaseMoveBehavior : public server::CPathKeyFrame {
				MEMBER(i_position_interpolator, server::CBaseMoveBehavior, int32_t);
				MEMBER(i_rotation_interpolator, server::CBaseMoveBehavior, int32_t);
				MEMBER(fl_anim_start_time, server::CBaseMoveBehavior, float);
				MEMBER(fl_anim_end_time, server::CBaseMoveBehavior, float);
				MEMBER(fl_average_speed_across_frame, server::CBaseMoveBehavior, float);
				MEMBER(p_current_key_frame, server::CBaseMoveBehavior, server::CPathKeyFrame*);
				MEMBER(p_target_key_frame, server::CBaseMoveBehavior, server::CPathKeyFrame*);
				MEMBER(p_pre_key_frame, server::CBaseMoveBehavior, server::CPathKeyFrame*);
				MEMBER(p_post_key_frame, server::CBaseMoveBehavior, server::CPathKeyFrame*);
				MEMBER(fl_time_into_frame, server::CBaseMoveBehavior, float);
				MEMBER(i_direction, server::CBaseMoveBehavior, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseMoveBehavior

			class CTablet : public server::CCSWeaponBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTablet

			class CFuncNavObstruction : public server::CBaseModelEntity {
				MEMBER(b_disabled, server::CFuncNavObstruction, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncNavObstruction

			class CEnvTilt : public server::CPointEntity {
				MEMBER(duration, server::CEnvTilt, float);
				MEMBER(radius, server::CEnvTilt, float);
				MEMBER(tilt_time, server::CEnvTilt, float);
				MEMBER(stop_time, server::CEnvTilt, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvTilt

			class CBaseCSGrenade : public server::CCSWeaponBase {
				MEMBER(b_redraw, server::CBaseCSGrenade, bool);
				MEMBER(b_is_held_by_player, server::CBaseCSGrenade, bool);
				MEMBER(b_pin_pulled, server::CBaseCSGrenade, bool);
				MEMBER(b_jump_throw, server::CBaseCSGrenade, bool);
				MEMBER(b_throw_animating, server::CBaseCSGrenade, bool);
				MEMBER(f_throw_time, server::CBaseCSGrenade, entity2::GameTime_t);
				MEMBER(fl_throw_strength, server::CBaseCSGrenade, float);
				MEMBER(fl_throw_strength_approach, server::CBaseCSGrenade, float);
				MEMBER(f_drop_time, server::CBaseCSGrenade, entity2::GameTime_t);
				MEMBER(f_pin_pull_time, server::CBaseCSGrenade, entity2::GameTime_t);
				MEMBER(b_just_pulled_pin, server::CBaseCSGrenade, bool);
				MEMBER(n_next_hold_tick, server::CBaseCSGrenade, entity2::GameTick_t);
				MEMBER(fl_next_hold_frac, server::CBaseCSGrenade, float);
				MEMBER(h_switch_to_weapon_after_throw, server::CBaseCSGrenade, chandle<server::CCSWeaponBase>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseCSGrenade

			class CBaseButton : public server::CBaseToggle {
				MEMBER(ang_move_entity_space, server::CBaseButton, QAngle);
				MEMBER(f_stay_pushed, server::CBaseButton, bool);
				MEMBER(f_rotating, server::CBaseButton, bool);
				MEMBER(ls, server::CBaseButton, server::locksound_t);
				MEMBER(s_use_sound, server::CBaseButton, CUtlSymbolLarge);
				MEMBER(s_locked_sound, server::CBaseButton, CUtlSymbolLarge);
				MEMBER(s_unlocked_sound, server::CBaseButton, CUtlSymbolLarge);
				MEMBER(s_override_anticipation_name, server::CBaseButton, CUtlSymbolLarge);
				MEMBER(b_locked, server::CBaseButton, bool);
				MEMBER(b_disabled, server::CBaseButton, bool);
				MEMBER(fl_use_locked_time, server::CBaseButton, entity2::GameTime_t);
				MEMBER(b_solid_bsp, server::CBaseButton, bool);
				MEMBER(on_damaged, server::CBaseButton, entity2::CEntityIOOutput);
				MEMBER(on_pressed, server::CBaseButton, entity2::CEntityIOOutput);
				MEMBER(on_use_locked, server::CBaseButton, entity2::CEntityIOOutput);
				MEMBER(on_in, server::CBaseButton, entity2::CEntityIOOutput);
				MEMBER(on_out, server::CBaseButton, entity2::CEntityIOOutput);
				MEMBER(n_state, server::CBaseButton, int32_t);
				MEMBER(h_constraint, server::CBaseButton, CEntityHandle);
				MEMBER(h_constraint_parent, server::CBaseButton, CEntityHandle);
				MEMBER(b_force_npc_exclude, server::CBaseButton, bool);
				MEMBER(s_glow_entity, server::CBaseButton, CUtlSymbolLarge);
				MEMBER(glow_entity, server::CBaseButton, chandle<server::CBaseModelEntity>);
				MEMBER(usable, server::CBaseButton, bool);
				MEMBER(sz_display_text, server::CBaseButton, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseButton

			class CPointChildModifier : public server::CPointEntity {
				MEMBER(b_orphan_instead_of_deleting_children_on_remove, server::CPointChildModifier, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointChildModifier

			class CItemGenericTriggerHelper : public server::CBaseModelEntity {
				MEMBER(h_parent_item, server::CItemGenericTriggerHelper, chandle<server::CItemGeneric>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CItemGenericTriggerHelper

			class CLogicBranchList : public server::CLogicalEntity {
				MEMBER_ARR(n_logic_branch_names, server::CLogicBranchList, 16, CUtlSymbolLarge);
				MEMBER(logic_branch_list, server::CLogicBranchList, cutl_vector<chandle<server::CBaseEntity>>);
				MEMBER(e_last_state, server::CLogicBranchList, server::CLogicBranchList_LogicBranchListenerLastState_t);
				MEMBER(on_all_true, server::CLogicBranchList, entity2::CEntityIOOutput);
				MEMBER(on_all_false, server::CLogicBranchList, entity2::CEntityIOOutput);
				MEMBER(on_mixed, server::CLogicBranchList, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicBranchList

			class CCSPlace : public server::CServerOnlyModelEntity {
				MEMBER(name, server::CCSPlace, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlace

			class CCSPlayer_CameraServices : public server::CCSPlayerBase_CameraServices {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_CameraServices

			class CRevertSaved : public server::CModelPointEntity {
				MEMBER(load_time, server::CRevertSaved, float);
				MEMBER(duration, server::CRevertSaved, float);
				MEMBER(hold_time, server::CRevertSaved, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRevertSaved

			class CMultiLightProxy : public server::CLogicalEntity {
				MEMBER(isz_light_name_filter, server::CMultiLightProxy, CUtlSymbolLarge);
				MEMBER(isz_light_class_filter, server::CMultiLightProxy, CUtlSymbolLarge);
				MEMBER(fl_light_radius_filter, server::CMultiLightProxy, float);
				MEMBER(fl_brightness_delta, server::CMultiLightProxy, float);
				MEMBER(b_perform_screen_fade, server::CMultiLightProxy, bool);
				MEMBER(fl_target_brightness_multiplier, server::CMultiLightProxy, float);
				MEMBER(fl_current_brightness_multiplier, server::CMultiLightProxy, float);
				MEMBER(vec_lights, server::CMultiLightProxy, cutl_vector<chandle<server::CLightEntity>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMultiLightProxy

			class CItemDogtags : public server::CItem {
				MEMBER(owning_player, server::CItemDogtags, chandle<server::CCSPlayerPawn>);
				MEMBER(killing_player, server::CItemDogtags, chandle<server::CCSPlayerPawn>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CItemDogtags

			class CEntityBlocker : public server::CBaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEntityBlocker

			class CLogicCase : public server::CLogicalEntity {
				MEMBER_ARR(n_case, server::CLogicCase, 32, CUtlSymbolLarge);
				MEMBER(n_shuffle_cases, server::CLogicCase, int32_t);
				MEMBER(n_last_shuffle_case, server::CLogicCase, int32_t);
				MEMBER_ARR(uch_shuffle_case_map, server::CLogicCase, 32, uint8_t);
				MEMBER_ARR(on_case, server::CLogicCase, 32, entity2::CEntityIOOutput);
				MEMBER(on_default, server::CLogicCase, CEntityOutputTemplate<CVariantBase<entity2::CVariantDefaultAllocator>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicCase

			class CItemDefuser : public server::CItem {
				MEMBER(entity_spotted_state, server::CItemDefuser, server::EntitySpottedState_t);
				MEMBER(n_spot_rules, server::CItemDefuser, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CItemDefuser

			class CSmokeGrenadeProjectile : public server::CBaseCSGrenadeProjectile {
				MEMBER(n_smoke_effect_tick_begin, server::CSmokeGrenadeProjectile, int32_t);
				MEMBER(b_did_smoke_effect, server::CSmokeGrenadeProjectile, bool);
				MEMBER(n_random_seed, server::CSmokeGrenadeProjectile, int32_t);
				MEMBER(v_smoke_color, server::CSmokeGrenadeProjectile, Vector);
				MEMBER(v_smoke_detonation_pos, server::CSmokeGrenadeProjectile, Vector);
				MEMBER(voxel_frame_data, server::CSmokeGrenadeProjectile, CNetworkUtlVectorBase<uint8_t>);
				MEMBER(n_voxel_frame_data_size, server::CSmokeGrenadeProjectile, int32_t);
				MEMBER(n_voxel_update, server::CSmokeGrenadeProjectile, int32_t);
				MEMBER(fl_last_bounce, server::CSmokeGrenadeProjectile, entity2::GameTime_t);
				MEMBER(fllast_simulation_time, server::CSmokeGrenadeProjectile, entity2::GameTime_t);
				MEMBER(b_explode_from_inferno, server::CSmokeGrenadeProjectile, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmokeGrenadeProjectile

			class CFireCrackerBlast : public server::CInferno {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFireCrackerBlast

			class CRagdollPropAlias_physics_prop_ragdoll : public server::CRagdollProp {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRagdollPropAlias_physics_prop_ragdoll

			class CLightEntity : public server::CBaseModelEntity {
				MEMBER(clight_component, server::CLightEntity, server::CLightComponent*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLightEntity

			class CCredits : public server::CPointEntity {
				MEMBER(on_credits_done, server::CCredits, entity2::CEntityIOOutput);
				MEMBER(b_rolled_outro_credits, server::CCredits, bool);
				MEMBER(fl_logo_length, server::CCredits, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCredits

			class CMarkupVolumeTagged_NavGame : public server::CMarkupVolumeWithRef {
				MEMBER(b_flood_fill_attribute, server::CMarkupVolumeTagged_NavGame, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMarkupVolumeTagged_NavGame

			class CSoundEventEntity : public server::CBaseEntity {
				MEMBER(b_start_on_spawn, server::CSoundEventEntity, bool);
				MEMBER(b_to_local_player, server::CSoundEventEntity, bool);
				MEMBER(b_stop_on_new, server::CSoundEventEntity, bool);
				MEMBER(b_save_restore, server::CSoundEventEntity, bool);
				MEMBER(b_saved_is_playing, server::CSoundEventEntity, bool);
				MEMBER(fl_saved_elapsed_time, server::CSoundEventEntity, float);
				MEMBER(isz_source_entity_name, server::CSoundEventEntity, CUtlSymbolLarge);
				MEMBER(isz_attachment_name, server::CSoundEventEntity, CUtlSymbolLarge);
				MEMBER(on_guidchanged, server::CSoundEventEntity, CEntityOutputTemplate<uint64_t>);
				MEMBER(on_sound_finished, server::CSoundEventEntity, entity2::CEntityIOOutput);
				MEMBER(fl_client_cull_radius, server::CSoundEventEntity, float);
				MEMBER(isz_sound_name, server::CSoundEventEntity, CUtlSymbolLarge);
				MEMBER(h_source, server::CSoundEventEntity, CEntityHandle);
				MEMBER(n_entity_index_selection, server::CSoundEventEntity, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundEventEntity

			class CCSPlayer_ViewModelServices : public server::CPlayer_ViewModelServices {
				MEMBER_ARR(h_view_model, server::CCSPlayer_ViewModelServices, 3, chandle<server::CBaseViewModel>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_ViewModelServices

			class CWeaponBaseItem : public server::CCSWeaponBase {
				MEMBER(sequence_complete_timer, server::CWeaponBaseItem, server::CountdownTimer);
				MEMBER(b_redraw, server::CWeaponBaseItem, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponBaseItem

			class CInfoParticleTarget : public server::CPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoParticleTarget

			class CScriptTriggerOnce : public server::CTriggerOnce {
				MEMBER(v_extent, server::CScriptTriggerOnce, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CScriptTriggerOnce

			class CEnvVolumetricFogController : public server::CBaseEntity {
				MEMBER(fl_scattering, server::CEnvVolumetricFogController, float);
				MEMBER(fl_anisotropy, server::CEnvVolumetricFogController, float);
				MEMBER(fl_fade_speed, server::CEnvVolumetricFogController, float);
				MEMBER(fl_draw_distance, server::CEnvVolumetricFogController, float);
				MEMBER(fl_fade_in_start, server::CEnvVolumetricFogController, float);
				MEMBER(fl_fade_in_end, server::CEnvVolumetricFogController, float);
				MEMBER(fl_indirect_strength, server::CEnvVolumetricFogController, float);
				MEMBER(n_volume_depth, server::CEnvVolumetricFogController, int32_t);
				MEMBER(f_first_volume_slice_thickness, server::CEnvVolumetricFogController, float);
				MEMBER(n_indirect_texture_dim_x, server::CEnvVolumetricFogController, int32_t);
				MEMBER(n_indirect_texture_dim_y, server::CEnvVolumetricFogController, int32_t);
				MEMBER(n_indirect_texture_dim_z, server::CEnvVolumetricFogController, int32_t);
				MEMBER(v_box_mins, server::CEnvVolumetricFogController, Vector);
				MEMBER(v_box_maxs, server::CEnvVolumetricFogController, Vector);
				MEMBER(b_active, server::CEnvVolumetricFogController, bool);
				MEMBER(fl_start_aniso_time, server::CEnvVolumetricFogController, entity2::GameTime_t);
				MEMBER(fl_start_scatter_time, server::CEnvVolumetricFogController, entity2::GameTime_t);
				MEMBER(fl_start_draw_distance_time, server::CEnvVolumetricFogController, entity2::GameTime_t);
				MEMBER(fl_start_anisotropy, server::CEnvVolumetricFogController, float);
				MEMBER(fl_start_scattering, server::CEnvVolumetricFogController, float);
				MEMBER(fl_start_draw_distance, server::CEnvVolumetricFogController, float);
				MEMBER(fl_default_anisotropy, server::CEnvVolumetricFogController, float);
				MEMBER(fl_default_scattering, server::CEnvVolumetricFogController, float);
				MEMBER(fl_default_draw_distance, server::CEnvVolumetricFogController, float);
				MEMBER(b_start_disabled, server::CEnvVolumetricFogController, bool);
				MEMBER(b_enable_indirect, server::CEnvVolumetricFogController, bool);
				MEMBER(b_indirect_use_lpvs, server::CEnvVolumetricFogController, bool);
				MEMBER(b_is_master, server::CEnvVolumetricFogController, bool);
				MEMBER(h_fog_indirect_texture, server::CEnvVolumetricFogController, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(n_force_refresh_count, server::CEnvVolumetricFogController, int32_t);
				MEMBER(f_noise_speed, server::CEnvVolumetricFogController, float);
				MEMBER(f_noise_strength, server::CEnvVolumetricFogController, float);
				MEMBER(v_noise_scale, server::CEnvVolumetricFogController, Vector);
				MEMBER(b_first_time, server::CEnvVolumetricFogController, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvVolumetricFogController

			class CPlayer_MovementServices_Humanoid : public server::CPlayer_MovementServices {
				MEMBER(fl_step_sound_time, server::CPlayer_MovementServices_Humanoid, float);
				MEMBER(fl_fall_velocity, server::CPlayer_MovementServices_Humanoid, float);
				MEMBER(b_in_crouch, server::CPlayer_MovementServices_Humanoid, bool);
				MEMBER(n_crouch_state, server::CPlayer_MovementServices_Humanoid, uint32_t);
				MEMBER(fl_crouch_transition_start_time, server::CPlayer_MovementServices_Humanoid, entity2::GameTime_t);
				MEMBER(b_ducked, server::CPlayer_MovementServices_Humanoid, bool);
				MEMBER(b_ducking, server::CPlayer_MovementServices_Humanoid, bool);
				MEMBER(b_in_duck_jump, server::CPlayer_MovementServices_Humanoid, bool);
				MEMBER(ground_normal, server::CPlayer_MovementServices_Humanoid, Vector);
				MEMBER(fl_surface_friction, server::CPlayer_MovementServices_Humanoid, float);
				MEMBER(surface_props, server::CPlayer_MovementServices_Humanoid, CUtlStringToken);
				MEMBER(n_stepside, server::CPlayer_MovementServices_Humanoid, int32_t);
				MEMBER(i_target_volume, server::CPlayer_MovementServices_Humanoid, int32_t);
				MEMBER(vec_smoothed_velocity, server::CPlayer_MovementServices_Humanoid, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_MovementServices_Humanoid

			class CPhysicsPropRespawnable : public server::CPhysicsProp {
				MEMBER(v_original_spawn_origin, server::CPhysicsPropRespawnable, Vector);
				MEMBER(v_original_spawn_angles, server::CPhysicsPropRespawnable, QAngle);
				MEMBER(v_original_mins, server::CPhysicsPropRespawnable, Vector);
				MEMBER(v_original_maxs, server::CPhysicsPropRespawnable, Vector);
				MEMBER(fl_respawn_duration, server::CPhysicsPropRespawnable, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysicsPropRespawnable

			class CEnvSoundscapeProxyAlias_snd_soundscape_proxy : public server::CEnvSoundscapeProxy {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvSoundscapeProxyAlias_snd_soundscape_proxy

			class CPhysBallSocket : public server::CPhysConstraint {
				MEMBER(fl_joint_friction, server::CPhysBallSocket, float);
				MEMBER(b_enable_swing_limit, server::CPhysBallSocket, bool);
				MEMBER(fl_swing_limit, server::CPhysBallSocket, float);
				MEMBER(b_enable_twist_limit, server::CPhysBallSocket, bool);
				MEMBER(fl_min_twist_angle, server::CPhysBallSocket, float);
				MEMBER(fl_max_twist_angle, server::CPhysBallSocket, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysBallSocket

			class CPointEntity : public server::CBaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointEntity

			class CKeepUpright : public server::CPointEntity {
				MEMBER(world_goal_axis, server::CKeepUpright, Vector);
				MEMBER(local_test_axis, server::CKeepUpright, Vector);
				MEMBER(name_attach, server::CKeepUpright, CUtlSymbolLarge);
				MEMBER(attached_object, server::CKeepUpright, chandle<server::CBaseEntity>);
				MEMBER(angular_limit, server::CKeepUpright, float);
				MEMBER(b_active, server::CKeepUpright, bool);
				MEMBER(b_damp_all_rotation, server::CKeepUpright, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CKeepUpright

			class CInfoPlayerStart : public server::CPointEntity {
				MEMBER(b_disabled, server::CInfoPlayerStart, bool);
				MEMBER(b_is_master, server::CInfoPlayerStart, bool);
				MEMBER(p_pawn_subclass, server::CInfoPlayerStart, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoPlayerStart

			class CSoundOpvarSetOBBWindEntity : public server::CSoundOpvarSetPointBase {
				MEMBER(v_mins, server::CSoundOpvarSetOBBWindEntity, Vector);
				MEMBER(v_maxs, server::CSoundOpvarSetOBBWindEntity, Vector);
				MEMBER(v_distance_mins, server::CSoundOpvarSetOBBWindEntity, Vector);
				MEMBER(v_distance_maxs, server::CSoundOpvarSetOBBWindEntity, Vector);
				MEMBER(fl_wind_min, server::CSoundOpvarSetOBBWindEntity, float);
				MEMBER(fl_wind_max, server::CSoundOpvarSetOBBWindEntity, float);
				MEMBER(fl_wind_map_min, server::CSoundOpvarSetOBBWindEntity, float);
				MEMBER(fl_wind_map_max, server::CSoundOpvarSetOBBWindEntity, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundOpvarSetOBBWindEntity

			class CRagdollPropAttached : public server::CRagdollProp {
				MEMBER(bone_index_attached, server::CRagdollPropAttached, uint32_t);
				MEMBER(ragdoll_attached_object_index, server::CRagdollPropAttached, uint32_t);
				MEMBER(attachment_point_bone_space, server::CRagdollPropAttached, Vector);
				MEMBER(attachment_point_ragdoll_space, server::CRagdollPropAttached, Vector);
				MEMBER(b_should_detach, server::CRagdollPropAttached, bool);
				MEMBER(b_should_delete_attached_activation_record, server::CRagdollPropAttached, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRagdollPropAttached

			class CItemGeneric : public server::CItem {
				MEMBER(b_has_trigger_radius, server::CItemGeneric, bool);
				MEMBER(b_has_pickup_radius, server::CItemGeneric, bool);
				MEMBER(fl_pickup_radius_sqr, server::CItemGeneric, float);
				MEMBER(fl_trigger_radius_sqr, server::CItemGeneric, float);
				MEMBER(fl_last_pickup_check, server::CItemGeneric, entity2::GameTime_t);
				MEMBER(b_player_counter_listener_added, server::CItemGeneric, bool);
				MEMBER(b_player_in_trigger_radius, server::CItemGeneric, bool);
				MEMBER(h_spawn_particle_effect, server::CItemGeneric, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(p_ambient_sound_effect, server::CItemGeneric, CUtlSymbolLarge);
				MEMBER(b_auto_start_ambient_sound, server::CItemGeneric, bool);
				MEMBER(p_spawn_script_function, server::CItemGeneric, CUtlSymbolLarge);
				MEMBER(h_pickup_particle_effect, server::CItemGeneric, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(p_pickup_sound_effect, server::CItemGeneric, CUtlSymbolLarge);
				MEMBER(p_pickup_script_function, server::CItemGeneric, CUtlSymbolLarge);
				MEMBER(h_timeout_particle_effect, server::CItemGeneric, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(p_timeout_sound_effect, server::CItemGeneric, CUtlSymbolLarge);
				MEMBER(p_timeout_script_function, server::CItemGeneric, CUtlSymbolLarge);
				MEMBER(p_pickup_filter_name, server::CItemGeneric, CUtlSymbolLarge);
				MEMBER(h_pickup_filter, server::CItemGeneric, chandle<server::CBaseFilter>);
				MEMBER(on_pickup, server::CItemGeneric, entity2::CEntityIOOutput);
				MEMBER(on_timeout, server::CItemGeneric, entity2::CEntityIOOutput);
				MEMBER(on_trigger_start_touch, server::CItemGeneric, entity2::CEntityIOOutput);
				MEMBER(on_trigger_touch, server::CItemGeneric, entity2::CEntityIOOutput);
				MEMBER(on_trigger_end_touch, server::CItemGeneric, entity2::CEntityIOOutput);
				MEMBER(p_allow_pickup_script_function, server::CItemGeneric, CUtlSymbolLarge);
				MEMBER(fl_pickup_radius, server::CItemGeneric, float);
				MEMBER(fl_trigger_radius, server::CItemGeneric, float);
				MEMBER(p_trigger_sound_effect, server::CItemGeneric, CUtlSymbolLarge);
				MEMBER(b_glow_when_in_trigger, server::CItemGeneric, bool);
				MEMBER(glow_color, server::CItemGeneric, Color);
				MEMBER(b_useable, server::CItemGeneric, bool);
				MEMBER(h_trigger_helper, server::CItemGeneric, chandle<server::CItemGenericTriggerHelper>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CItemGeneric

			class CFuncTrackTrain : public server::CBaseModelEntity {
				MEMBER(ppath, server::CFuncTrackTrain, chandle<server::CPathTrack>);
				MEMBER(length, server::CFuncTrackTrain, float);
				MEMBER(v_pos_prev, server::CFuncTrackTrain, Vector);
				MEMBER(ang_prev, server::CFuncTrackTrain, QAngle);
				MEMBER(control_mins, server::CFuncTrackTrain, Vector);
				MEMBER(control_maxs, server::CFuncTrackTrain, Vector);
				MEMBER(last_block_pos, server::CFuncTrackTrain, Vector);
				MEMBER(last_block_tick, server::CFuncTrackTrain, int32_t);
				MEMBER(fl_volume, server::CFuncTrackTrain, float);
				MEMBER(fl_bank, server::CFuncTrackTrain, float);
				MEMBER(old_speed, server::CFuncTrackTrain, float);
				MEMBER(fl_block_damage, server::CFuncTrackTrain, float);
				MEMBER(height, server::CFuncTrackTrain, float);
				MEMBER(max_speed, server::CFuncTrackTrain, float);
				MEMBER(dir, server::CFuncTrackTrain, float);
				MEMBER(isz_sound_move, server::CFuncTrackTrain, CUtlSymbolLarge);
				MEMBER(isz_sound_move_ping, server::CFuncTrackTrain, CUtlSymbolLarge);
				MEMBER(isz_sound_start, server::CFuncTrackTrain, CUtlSymbolLarge);
				MEMBER(isz_sound_stop, server::CFuncTrackTrain, CUtlSymbolLarge);
				MEMBER(str_path_target, server::CFuncTrackTrain, CUtlSymbolLarge);
				MEMBER(fl_move_sound_min_duration, server::CFuncTrackTrain, float);
				MEMBER(fl_move_sound_max_duration, server::CFuncTrackTrain, float);
				MEMBER(fl_next_move_sound_time, server::CFuncTrackTrain, entity2::GameTime_t);
				MEMBER(fl_move_sound_min_pitch, server::CFuncTrackTrain, float);
				MEMBER(fl_move_sound_max_pitch, server::CFuncTrackTrain, float);
				MEMBER(e_orientation_type, server::CFuncTrackTrain, server::TrainOrientationType_t);
				MEMBER(e_velocity_type, server::CFuncTrackTrain, server::TrainVelocityType_t);
				MEMBER(on_start, server::CFuncTrackTrain, entity2::CEntityIOOutput);
				MEMBER(on_next, server::CFuncTrackTrain, entity2::CEntityIOOutput);
				MEMBER(on_arrived_at_destination_node, server::CFuncTrackTrain, entity2::CEntityIOOutput);
				MEMBER(b_manual_speed_changes, server::CFuncTrackTrain, bool);
				MEMBER(fl_desired_speed, server::CFuncTrackTrain, float);
				MEMBER(fl_speed_change_time, server::CFuncTrackTrain, entity2::GameTime_t);
				MEMBER(fl_accel_speed, server::CFuncTrackTrain, float);
				MEMBER(fl_decel_speed, server::CFuncTrackTrain, float);
				MEMBER(b_accel_to_speed, server::CFuncTrackTrain, bool);
				MEMBER(fl_next_mpsound_time, server::CFuncTrackTrain, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncTrackTrain

			class CLightSpotEntity : public server::CLightEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLightSpotEntity

			class CEnvWind : public server::CBaseEntity {
				MEMBER(env_wind_shared, server::CEnvWind, server::CEnvWindShared);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvWind

			class CCSPlayer_WaterServices : public server::CPlayer_WaterServices {
				MEMBER(next_drown_damage_time, server::CCSPlayer_WaterServices, float);
				MEMBER(n_drown_dmg_rate, server::CCSPlayer_WaterServices, int32_t);
				MEMBER(air_finished_time, server::CCSPlayer_WaterServices, entity2::GameTime_t);
				MEMBER(fl_water_jump_time, server::CCSPlayer_WaterServices, float);
				MEMBER(vec_water_jump_vel, server::CCSPlayer_WaterServices, Vector);
				MEMBER(fl_swim_sound_time, server::CCSPlayer_WaterServices, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_WaterServices

			class CPulseCell_Value_FindEntByClassNameWithin : public pulse_runtime_lib::CPulseCell_BaseValue {
				MEMBER(entity_type, server::CPulseCell_Value_FindEntByClassNameWithin, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Value_FindEntByClassNameWithin

			class CSkyboxReference : public server::CBaseEntity {
				MEMBER(world_group_id, server::CSkyboxReference, WorldGroupId_t);
				MEMBER(h_sky_camera, server::CSkyboxReference, chandle<server::CSkyCamera>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSkyboxReference

			class CPropDoorRotating : public server::CBasePropDoor {
				MEMBER(vec_axis, server::CPropDoorRotating, Vector);
				MEMBER(fl_distance, server::CPropDoorRotating, float);
				MEMBER(e_spawn_position, server::CPropDoorRotating, server::PropDoorRotatingSpawnPos_t);
				MEMBER(e_open_direction, server::CPropDoorRotating, server::PropDoorRotatingOpenDirection_e);
				MEMBER(e_current_open_direction, server::CPropDoorRotating, server::PropDoorRotatingOpenDirection_e);
				MEMBER(fl_ajar_angle, server::CPropDoorRotating, float);
				MEMBER(ang_rotation_ajar_deprecated, server::CPropDoorRotating, QAngle);
				MEMBER(ang_rotation_closed, server::CPropDoorRotating, QAngle);
				MEMBER(ang_rotation_open_forward, server::CPropDoorRotating, QAngle);
				MEMBER(ang_rotation_open_back, server::CPropDoorRotating, QAngle);
				MEMBER(ang_goal, server::CPropDoorRotating, QAngle);
				MEMBER(vec_forward_bounds_min, server::CPropDoorRotating, Vector);
				MEMBER(vec_forward_bounds_max, server::CPropDoorRotating, Vector);
				MEMBER(vec_back_bounds_min, server::CPropDoorRotating, Vector);
				MEMBER(vec_back_bounds_max, server::CPropDoorRotating, Vector);
				MEMBER(b_ajar_door_shouldnt_always_open, server::CPropDoorRotating, bool);
				MEMBER(h_entity_blocker, server::CPropDoorRotating, chandle<server::CEntityBlocker>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPropDoorRotating

			class CFuncTrainControls : public server::CBaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncTrainControls

			class CEnvFunnel : public server::CBaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvFunnel

			class CBarnLight : public server::CBaseModelEntity {
				MEMBER(b_enabled, server::CBarnLight, bool);
				MEMBER(n_color_mode, server::CBarnLight, int32_t);
				MEMBER(color, server::CBarnLight, Color);
				MEMBER(fl_color_temperature, server::CBarnLight, float);
				MEMBER(fl_brightness, server::CBarnLight, float);
				MEMBER(fl_brightness_scale, server::CBarnLight, float);
				MEMBER(n_direct_light, server::CBarnLight, int32_t);
				MEMBER(n_baked_shadow_index, server::CBarnLight, int32_t);
				MEMBER(n_luminaire_shape, server::CBarnLight, int32_t);
				MEMBER(fl_luminaire_size, server::CBarnLight, float);
				MEMBER(fl_luminaire_anisotropy, server::CBarnLight, float);
				MEMBER(light_style_string, server::CBarnLight, CUtlString);
				MEMBER(fl_light_style_start_time, server::CBarnLight, entity2::GameTime_t);
				MEMBER(queued_light_style_strings, server::CBarnLight, CNetworkUtlVectorBase<CUtlString>);
				MEMBER(light_style_events, server::CBarnLight, CNetworkUtlVectorBase<CUtlString>);
				MEMBER(light_style_targets, server::CBarnLight, CNetworkUtlVectorBase<chandle<server::CBaseModelEntity>>);
				MEMBER_ARR(style_event, server::CBarnLight, 4, entity2::CEntityIOOutput);
				MEMBER(h_light_cookie, server::CBarnLight, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(fl_shape, server::CBarnLight, float);
				MEMBER(fl_soft_x, server::CBarnLight, float);
				MEMBER(fl_soft_y, server::CBarnLight, float);
				MEMBER(fl_skirt, server::CBarnLight, float);
				MEMBER(fl_skirt_near, server::CBarnLight, float);
				MEMBER(v_size_params, server::CBarnLight, Vector);
				MEMBER(fl_range, server::CBarnLight, float);
				MEMBER(v_shear, server::CBarnLight, Vector);
				MEMBER(n_bake_specular_to_cubemaps, server::CBarnLight, int32_t);
				MEMBER(v_bake_specular_to_cubemaps_size, server::CBarnLight, Vector);
				MEMBER(n_cast_shadows, server::CBarnLight, int32_t);
				MEMBER(n_shadow_map_size, server::CBarnLight, int32_t);
				MEMBER(n_shadow_priority, server::CBarnLight, int32_t);
				MEMBER(b_contact_shadow, server::CBarnLight, bool);
				MEMBER(n_bounce_light, server::CBarnLight, int32_t);
				MEMBER(fl_bounce_scale, server::CBarnLight, float);
				MEMBER(fl_min_roughness, server::CBarnLight, float);
				MEMBER(v_alternate_color, server::CBarnLight, Vector);
				MEMBER(f_alternate_color_brightness, server::CBarnLight, float);
				MEMBER(n_fog, server::CBarnLight, int32_t);
				MEMBER(fl_fog_strength, server::CBarnLight, float);
				MEMBER(n_fog_shadows, server::CBarnLight, int32_t);
				MEMBER(fl_fog_scale, server::CBarnLight, float);
				MEMBER(b_fog_mixed_shadows, server::CBarnLight, bool);
				MEMBER(fl_fade_size_start, server::CBarnLight, float);
				MEMBER(fl_fade_size_end, server::CBarnLight, float);
				MEMBER(fl_shadow_fade_size_start, server::CBarnLight, float);
				MEMBER(fl_shadow_fade_size_end, server::CBarnLight, float);
				MEMBER(b_precomputed_fields_valid, server::CBarnLight, bool);
				MEMBER(v_precomputed_bounds_mins, server::CBarnLight, Vector);
				MEMBER(v_precomputed_bounds_maxs, server::CBarnLight, Vector);
				MEMBER(v_precomputed_obborigin, server::CBarnLight, Vector);
				MEMBER(v_precomputed_obbangles, server::CBarnLight, QAngle);
				MEMBER(v_precomputed_obbextent, server::CBarnLight, Vector);
				MEMBER(n_precomputed_sub_frusta, server::CBarnLight, int32_t);
				MEMBER(v_precomputed_obborigin0, server::CBarnLight, Vector);
				MEMBER(v_precomputed_obbangles0, server::CBarnLight, QAngle);
				MEMBER(v_precomputed_obbextent0, server::CBarnLight, Vector);
				MEMBER(v_precomputed_obborigin1, server::CBarnLight, Vector);
				MEMBER(v_precomputed_obbangles1, server::CBarnLight, QAngle);
				MEMBER(v_precomputed_obbextent1, server::CBarnLight, Vector);
				MEMBER(v_precomputed_obborigin2, server::CBarnLight, Vector);
				MEMBER(v_precomputed_obbangles2, server::CBarnLight, QAngle);
				MEMBER(v_precomputed_obbextent2, server::CBarnLight, Vector);
				MEMBER(v_precomputed_obborigin3, server::CBarnLight, Vector);
				MEMBER(v_precomputed_obbangles3, server::CBarnLight, QAngle);
				MEMBER(v_precomputed_obbextent3, server::CBarnLight, Vector);
				MEMBER(v_precomputed_obborigin4, server::CBarnLight, Vector);
				MEMBER(v_precomputed_obbangles4, server::CBarnLight, QAngle);
				MEMBER(v_precomputed_obbextent4, server::CBarnLight, Vector);
				MEMBER(v_precomputed_obborigin5, server::CBarnLight, Vector);
				MEMBER(v_precomputed_obbangles5, server::CBarnLight, QAngle);
				MEMBER(v_precomputed_obbextent5, server::CBarnLight, Vector);
				MEMBER(b_pvs_modify_entity, server::CBarnLight, bool);
				MEMBER(vis_clusters, server::CBarnLight, CNetworkUtlVectorBase<uint16_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBarnLight

			class CInfoDeathmatchSpawn : public server::SpawnPoint {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoDeathmatchSpawn

			class CWeaponBizon : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponBizon

			class CEnvViewPunch : public server::CPointEntity {
				MEMBER(fl_radius, server::CEnvViewPunch, float);
				MEMBER(ang_view_punch, server::CEnvViewPunch, QAngle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvViewPunch

			class CInfoPlayerTerrorist : public server::SpawnPoint {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoPlayerTerrorist

			class CDEagle : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDEagle

			class CPathCorner : public server::CPointEntity {
				MEMBER(fl_wait, server::CPathCorner, float);
				MEMBER(fl_radius, server::CPathCorner, float);
				MEMBER(on_pass, server::CPathCorner, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathCorner

			class CSoundEventEntityAlias_snd_event_point : public server::CSoundEventEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundEventEntityAlias_snd_event_point

			class CParticleSystem : public server::CBaseModelEntity {
				MEMBER_ARR(sz_snapshot_file_name, server::CParticleSystem, 512, char);
				MEMBER(b_active, server::CParticleSystem, bool);
				MEMBER(b_frozen, server::CParticleSystem, bool);
				MEMBER(fl_freeze_transition_duration, server::CParticleSystem, float);
				MEMBER(n_stop_type, server::CParticleSystem, int32_t);
				MEMBER(b_animate_during_gameplay_pause, server::CParticleSystem, bool);
				MEMBER(i_effect_index, server::CParticleSystem, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(fl_start_time, server::CParticleSystem, entity2::GameTime_t);
				MEMBER(fl_pre_sim_time, server::CParticleSystem, float);
				MEMBER_ARR(v_server_control_points, server::CParticleSystem, 4, Vector);
				MEMBER_ARR(i_server_control_point_assignments, server::CParticleSystem, 4, uint8_t);
				MEMBER_ARR(h_control_point_ents, server::CParticleSystem, 64, chandle<server::CBaseEntity>);
				MEMBER(b_no_save, server::CParticleSystem, bool);
				MEMBER(b_no_freeze, server::CParticleSystem, bool);
				MEMBER(b_no_ramp, server::CParticleSystem, bool);
				MEMBER(b_start_active, server::CParticleSystem, bool);
				MEMBER(isz_effect_name, server::CParticleSystem, CUtlSymbolLarge);
				MEMBER_ARR(isz_control_point_names, server::CParticleSystem, 64, CUtlSymbolLarge);
				MEMBER(n_data_cp, server::CParticleSystem, int32_t);
				MEMBER(vec_data_cpvalue, server::CParticleSystem, Vector);
				MEMBER(n_tint_cp, server::CParticleSystem, int32_t);
				MEMBER(clr_tint, server::CParticleSystem, Color);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CParticleSystem

			class CRotDoor : public server::CBaseDoor {
				MEMBER(b_solid_bsp, server::CRotDoor, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRotDoor

			class CCSPlayerController_InventoryServices : public client::CPlayerControllerComponent {
				MEMBER(un_music_id, server::CCSPlayerController_InventoryServices, uint16_t);
				MEMBER_ARR(rank, server::CCSPlayerController_InventoryServices, 6, client::MedalRank_t);
				MEMBER(n_persona_data_public_level, server::CCSPlayerController_InventoryServices, int32_t);
				MEMBER(n_persona_data_public_commends_leader, server::CCSPlayerController_InventoryServices, int32_t);
				MEMBER(n_persona_data_public_commends_teacher, server::CCSPlayerController_InventoryServices, int32_t);
				MEMBER(n_persona_data_public_commends_friendly, server::CCSPlayerController_InventoryServices, int32_t);
				MEMBER(n_persona_data_xp_trail_level, server::CCSPlayerController_InventoryServices, int32_t);
				MEMBER_ARR(un_equipped_player_spray_ids, server::CCSPlayerController_InventoryServices, 1, uint32_t);
				MEMBER(vec_server_authoritative_weapon_slots, server::CCSPlayerController_InventoryServices, CUtlVectorEmbeddedNetworkVar<server::ServerAuthoritativeWeaponSlot_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerController_InventoryServices

			class CFuncMonitor : public server::CFuncBrush {
				MEMBER(target_camera, server::CFuncMonitor, CUtlString);
				MEMBER(n_resolution_enum, server::CFuncMonitor, int32_t);
				MEMBER(b_render_shadows, server::CFuncMonitor, bool);
				MEMBER(b_use_unique_color_target, server::CFuncMonitor, bool);
				MEMBER(brush_model_name, server::CFuncMonitor, CUtlString);
				MEMBER(h_target_camera, server::CFuncMonitor, chandle<server::CBaseEntity>);
				MEMBER(b_enabled, server::CFuncMonitor, bool);
				MEMBER(b_draw3_dskybox, server::CFuncMonitor, bool);
				MEMBER(b_start_enabled, server::CFuncMonitor, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncMonitor

			class CFuncInteractionLayerClip : public server::CBaseModelEntity {
				MEMBER(b_disabled, server::CFuncInteractionLayerClip, bool);
				MEMBER(isz_interacts_as, server::CFuncInteractionLayerClip, CUtlSymbolLarge);
				MEMBER(isz_interacts_with, server::CFuncInteractionLayerClip, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncInteractionLayerClip

			class CHostageAlias_info_hostage_spawn : public server::CHostage {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHostageAlias_info_hostage_spawn

			class CMultiSource : public server::CLogicalEntity {
				MEMBER_ARR(rg_entities, server::CMultiSource, 32, chandle<server::CBaseEntity>);
				MEMBER_ARR(rg_triggered, server::CMultiSource, 32, int32_t);
				MEMBER(on_trigger, server::CMultiSource, entity2::CEntityIOOutput);
				MEMBER(i_total, server::CMultiSource, int32_t);
				MEMBER(globalstate, server::CMultiSource, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMultiSource

			class CLogicNavigation : public server::CLogicalEntity {
				MEMBER(is_on, server::CLogicNavigation, bool);
				MEMBER(nav_property, server::CLogicNavigation, server::navproperties_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicNavigation

			class CEconWearable : public server::CEconEntity {
				MEMBER(n_force_skin, server::CEconWearable, int32_t);
				MEMBER(b_always_allow, server::CEconWearable, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEconWearable

			class CEnvEntityMaker : public server::CPointEntity {
				MEMBER(vec_entity_mins, server::CEnvEntityMaker, Vector);
				MEMBER(vec_entity_maxs, server::CEnvEntityMaker, Vector);
				MEMBER(h_current_instance, server::CEnvEntityMaker, chandle<server::CBaseEntity>);
				MEMBER(h_current_blocker, server::CEnvEntityMaker, chandle<server::CBaseEntity>);
				MEMBER(vec_blocker_origin, server::CEnvEntityMaker, Vector);
				MEMBER(ang_post_spawn_direction, server::CEnvEntityMaker, QAngle);
				MEMBER(fl_post_spawn_direction_variance, server::CEnvEntityMaker, float);
				MEMBER(fl_post_spawn_speed, server::CEnvEntityMaker, float);
				MEMBER(b_post_spawn_use_angles, server::CEnvEntityMaker, bool);
				MEMBER(isz_template, server::CEnvEntityMaker, CUtlSymbolLarge);
				MEMBER(p_output_on_spawned, server::CEnvEntityMaker, entity2::CEntityIOOutput);
				MEMBER(p_output_on_failed_spawn, server::CEnvEntityMaker, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvEntityMaker

			class CFilterMultiple : public server::CBaseFilter {
				MEMBER(n_filter_type, server::CFilterMultiple, server::filter_t);
				MEMBER_ARR(i_filter_name, server::CFilterMultiple, 10, CUtlSymbolLarge);
				MEMBER_ARR(h_filter, server::CFilterMultiple, 10, chandle<server::CBaseEntity>);
				MEMBER(n_filter_count, server::CFilterMultiple, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFilterMultiple

			class CBaseEntity : public entity2::CEntityInstance {
				MEMBER(cbody_component, server::CBaseEntity, server::CBodyComponent*);
				MEMBER(network_transmit_component, server::CBaseEntity, client::CNetworkTransmitComponent);
				MEMBER(a_think_functions, server::CBaseEntity, cutl_vector<client::thinkfunc_t>);
				MEMBER(i_current_think_context, server::CBaseEntity, int32_t);
				MEMBER(n_last_think_tick, server::CBaseEntity, entity2::GameTick_t);
				MEMBER(b_disabled_context_thinks, server::CBaseEntity, bool);
				///MEMBER(is_steady_state, server::CBaseEntity, CTypedBitVec<64>);
				MEMBER(last_network_change, server::CBaseEntity, float);
				MEMBER(response_contexts, server::CBaseEntity, cutl_vector<server::ResponseContext_t>);
				MEMBER(isz_response_context, server::CBaseEntity, CUtlSymbolLarge);
				MEMBER(i_health, server::CBaseEntity, int32_t);
				MEMBER(i_max_health, server::CBaseEntity, int32_t);
				MEMBER(life_state, server::CBaseEntity, uint8_t);
				MEMBER(fl_damage_accumulator, server::CBaseEntity, float);
				MEMBER(b_takes_damage, server::CBaseEntity, bool);
				MEMBER(n_take_damage_flags, server::CBaseEntity, client::TakeDamageFlags_t);
				MEMBER(n_platform_type, server::CBaseEntity, client::EntityPlatformTypes_t);
				MEMBER(move_collide, server::CBaseEntity, client::MoveCollide_t);
				MEMBER(move_type, server::CBaseEntity, client::MoveType_t);
				MEMBER(n_actual_move_type, server::CBaseEntity, client::MoveType_t);
				MEMBER(n_water_touch, server::CBaseEntity, uint8_t);
				MEMBER(n_slime_touch, server::CBaseEntity, uint8_t);
				MEMBER(b_restore_in_hierarchy, server::CBaseEntity, bool);
				MEMBER(target, server::CBaseEntity, CUtlSymbolLarge);
				MEMBER(h_damage_filter, server::CBaseEntity, chandle<server::CBaseFilter>);
				MEMBER(isz_damage_filter_name, server::CBaseEntity, CUtlSymbolLarge);
				MEMBER(fl_move_done_time, server::CBaseEntity, float);
				MEMBER(n_subclass_id, server::CBaseEntity, CUtlStringToken);
				MEMBER(fl_anim_time, server::CBaseEntity, float);
				MEMBER(fl_simulation_time, server::CBaseEntity, float);
				MEMBER(fl_create_time, server::CBaseEntity, entity2::GameTime_t);
				MEMBER(b_client_side_ragdoll, server::CBaseEntity, bool);
				MEMBER(ub_interpolation_frame, server::CBaseEntity, uint8_t);
				MEMBER(v_prev_vphysics_update_pos, server::CBaseEntity, Vector);
				MEMBER(i_team_num, server::CBaseEntity, uint8_t);
				MEMBER(i_globalname, server::CBaseEntity, CUtlSymbolLarge);
				MEMBER(i_sent_to_clients, server::CBaseEntity, int32_t);
				MEMBER(fl_speed, server::CBaseEntity, float);
				MEMBER(s_unique_hammer_id, server::CBaseEntity, CUtlString);
				MEMBER(spawnflags, server::CBaseEntity, uint32_t);
				MEMBER(n_next_think_tick, server::CBaseEntity, entity2::GameTick_t);
				MEMBER(n_simulation_tick, server::CBaseEntity, int32_t);
				MEMBER(on_killed, server::CBaseEntity, entity2::CEntityIOOutput);
				MEMBER(f_flags, server::CBaseEntity, uint32_t);
				MEMBER(vec_abs_velocity, server::CBaseEntity, Vector);
				MEMBER(vec_velocity, server::CBaseEntity, client::CNetworkVelocityVector);
				MEMBER(vec_base_velocity, server::CBaseEntity, Vector);
				MEMBER(n_push_enum_count, server::CBaseEntity, int32_t);
				MEMBER(p_collision, server::CBaseEntity, server::CCollisionProperty*);
				MEMBER(h_effect_entity, server::CBaseEntity, chandle<server::CBaseEntity>);
				MEMBER(h_owner_entity, server::CBaseEntity, chandle<server::CBaseEntity>);
				MEMBER(f_effects, server::CBaseEntity, uint32_t);
				MEMBER(h_ground_entity, server::CBaseEntity, chandle<server::CBaseEntity>);
				MEMBER(n_ground_body_index, server::CBaseEntity, int32_t);
				MEMBER(fl_friction, server::CBaseEntity, float);
				MEMBER(fl_elasticity, server::CBaseEntity, float);
				MEMBER(fl_gravity_scale, server::CBaseEntity, float);
				MEMBER(fl_time_scale, server::CBaseEntity, float);
				MEMBER(fl_water_level, server::CBaseEntity, float);
				MEMBER(b_animated_every_tick, server::CBaseEntity, bool);
				MEMBER(b_disable_low_violence, server::CBaseEntity, bool);
				MEMBER(n_water_type, server::CBaseEntity, uint8_t);
				MEMBER(i_eflags, server::CBaseEntity, int32_t);
				MEMBER(on_user1, server::CBaseEntity, entity2::CEntityIOOutput);
				MEMBER(on_user2, server::CBaseEntity, entity2::CEntityIOOutput);
				MEMBER(on_user3, server::CBaseEntity, entity2::CEntityIOOutput);
				MEMBER(on_user4, server::CBaseEntity, entity2::CEntityIOOutput);
				MEMBER(i_initial_team_num, server::CBaseEntity, int32_t);
				MEMBER(fl_nav_ignore_until_time, server::CBaseEntity, entity2::GameTime_t);
				MEMBER(vec_ang_velocity, server::CBaseEntity, QAngle);
				MEMBER(b_network_quantize_origin_and_angles, server::CBaseEntity, bool);
				MEMBER(b_lag_compensate, server::CBaseEntity, bool);
				MEMBER(fl_overridden_friction, server::CBaseEntity, float);
				MEMBER(p_blocker, server::CBaseEntity, chandle<server::CBaseEntity>);
				MEMBER(fl_local_time, server::CBaseEntity, float);
				MEMBER(fl_vphysics_update_local_time, server::CBaseEntity, float);
				MEMBER(n_blood_type, server::CBaseEntity, client::BloodType);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseEntity

			class CPlayer_UseServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_UseServices

			class CPulseGraphInstance_ServerEntity : public pulse_runtime_lib::CBasePulseGraphInstance {
				MEMBER(p_component, server::CPulseGraphInstance_ServerEntity, server::CPulseGraphComponentBase*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseGraphInstance_ServerEntity

			class CPhysicsWire : public server::CBaseEntity {
				MEMBER(n_density, server::CPhysicsWire, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysicsWire

			class CPropDoorRotatingBreakable : public server::CPropDoorRotating {
				MEMBER(b_breakable, server::CPropDoorRotatingBreakable, bool);
				MEMBER(is_able_to_close_area_portals, server::CPropDoorRotatingBreakable, bool);
				MEMBER(current_damage_state, server::CPropDoorRotatingBreakable, int32_t);
				MEMBER(damage_states, server::CPropDoorRotatingBreakable, cutl_vector<CUtlSymbolLarge>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPropDoorRotatingBreakable

			class CBasePlayerWeapon : public server::CEconEntity {
				MEMBER(n_next_primary_attack_tick, server::CBasePlayerWeapon, entity2::GameTick_t);
				MEMBER(fl_next_primary_attack_tick_ratio, server::CBasePlayerWeapon, float);
				MEMBER(n_next_secondary_attack_tick, server::CBasePlayerWeapon, entity2::GameTick_t);
				MEMBER(fl_next_secondary_attack_tick_ratio, server::CBasePlayerWeapon, float);
				MEMBER(i_clip1, server::CBasePlayerWeapon, int32_t);
				MEMBER(i_clip2, server::CBasePlayerWeapon, int32_t);
				MEMBER_ARR(p_reserve_ammo, server::CBasePlayerWeapon, 2, int32_t);
				MEMBER(on_player_use, server::CBasePlayerWeapon, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBasePlayerWeapon

			class CLightEnvironmentEntity : public server::CLightDirectionalEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLightEnvironmentEntity

			class CFireSmoke : public server::CBaseFire {
				MEMBER(n_flame_model_index, server::CFireSmoke, int32_t);
				MEMBER(n_flame_from_above_model_index, server::CFireSmoke, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFireSmoke

			class CBumpMine : public server::CCSWeaponBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBumpMine

			class CKnife : public server::CCSWeaponBase {
				MEMBER(b_first_attack, server::CKnife, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CKnife

			class CBasePropDoor : public server::CDynamicProp {
				MEMBER(fl_auto_return_delay, server::CBasePropDoor, float);
				MEMBER(h_door_list, server::CBasePropDoor, cutl_vector<chandle<server::CBasePropDoor>>);
				MEMBER(n_hardware_type, server::CBasePropDoor, int32_t);
				MEMBER(b_needs_hardware, server::CBasePropDoor, bool);
				MEMBER(e_door_state, server::CBasePropDoor, client::DoorState_t);
				MEMBER(b_locked, server::CBasePropDoor, bool);
				MEMBER(closed_position, server::CBasePropDoor, Vector);
				MEMBER(closed_angles, server::CBasePropDoor, QAngle);
				MEMBER(h_blocker, server::CBasePropDoor, chandle<server::CBaseEntity>);
				MEMBER(b_first_blocked, server::CBasePropDoor, bool);
				MEMBER(ls, server::CBasePropDoor, server::locksound_t);
				MEMBER(b_force_closed, server::CBasePropDoor, bool);
				MEMBER(vec_latch_world_position, server::CBasePropDoor, Vector);
				MEMBER(h_activator, server::CBasePropDoor, chandle<server::CBaseEntity>);
				MEMBER(sound_moving, server::CBasePropDoor, CUtlSymbolLarge);
				MEMBER(sound_open, server::CBasePropDoor, CUtlSymbolLarge);
				MEMBER(sound_close, server::CBasePropDoor, CUtlSymbolLarge);
				MEMBER(sound_lock, server::CBasePropDoor, CUtlSymbolLarge);
				MEMBER(sound_unlock, server::CBasePropDoor, CUtlSymbolLarge);
				MEMBER(sound_latch, server::CBasePropDoor, CUtlSymbolLarge);
				MEMBER(sound_pound, server::CBasePropDoor, CUtlSymbolLarge);
				MEMBER(sound_jiggle, server::CBasePropDoor, CUtlSymbolLarge);
				MEMBER(sound_locked_anim, server::CBasePropDoor, CUtlSymbolLarge);
				MEMBER(num_close_attempts, server::CBasePropDoor, int32_t);
				MEMBER(n_physics_material, server::CBasePropDoor, CUtlStringToken);
				MEMBER(slave_name, server::CBasePropDoor, CUtlSymbolLarge);
				MEMBER(h_master, server::CBasePropDoor, chandle<server::CBasePropDoor>);
				MEMBER(on_blocked_closing, server::CBasePropDoor, entity2::CEntityIOOutput);
				MEMBER(on_blocked_opening, server::CBasePropDoor, entity2::CEntityIOOutput);
				MEMBER(on_unblocked_closing, server::CBasePropDoor, entity2::CEntityIOOutput);
				MEMBER(on_unblocked_opening, server::CBasePropDoor, entity2::CEntityIOOutput);
				MEMBER(on_fully_closed, server::CBasePropDoor, entity2::CEntityIOOutput);
				MEMBER(on_fully_open, server::CBasePropDoor, entity2::CEntityIOOutput);
				MEMBER(on_close, server::CBasePropDoor, entity2::CEntityIOOutput);
				MEMBER(on_open, server::CBasePropDoor, entity2::CEntityIOOutput);
				MEMBER(on_locked_use, server::CBasePropDoor, entity2::CEntityIOOutput);
				MEMBER(on_ajar_open, server::CBasePropDoor, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBasePropDoor

			class CRagdollManager : public server::CBaseEntity {
				MEMBER(i_current_max_ragdoll_count, server::CRagdollManager, int8_t);
				MEMBER(i_max_ragdoll_count, server::CRagdollManager, int32_t);
				MEMBER(b_save_important, server::CRagdollManager, bool);
				MEMBER(b_can_take_damage, server::CRagdollManager, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRagdollManager

			class CServerOnlyModelEntity : public server::CBaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CServerOnlyModelEntity

			class CTriggerFan : public server::CBaseTrigger {
				MEMBER(v_fan_origin, server::CTriggerFan, Vector);
				MEMBER(v_fan_end, server::CTriggerFan, Vector);
				MEMBER(v_noise, server::CTriggerFan, Vector);
				MEMBER(fl_force, server::CTriggerFan, float);
				MEMBER(fl_rope_force_scale, server::CTriggerFan, float);
				MEMBER(fl_player_force, server::CTriggerFan, float);
				MEMBER(fl_ramp_time, server::CTriggerFan, float);
				MEMBER(b_falloff, server::CTriggerFan, bool);
				MEMBER(b_push_player, server::CTriggerFan, bool);
				MEMBER(b_ramp_down, server::CTriggerFan, bool);
				MEMBER(b_add_noise, server::CTriggerFan, bool);
				MEMBER(ramp_timer, server::CTriggerFan, server::CountdownTimer);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerFan

			class CIncendiaryGrenade : public server::CMolotovGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CIncendiaryGrenade

			class CPathCornerCrash : public server::CPathCorner {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathCornerCrash

			class CTriggerActiveWeaponDetect : public server::CBaseTrigger {
				MEMBER(on_touched_active_weapon, server::CTriggerActiveWeaponDetect, entity2::CEntityIOOutput);
				MEMBER(isz_weapon_class_name, server::CTriggerActiveWeaponDetect, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerActiveWeaponDetect

			class CPointAngleSensor : public server::CPointEntity {
				MEMBER(b_disabled, server::CPointAngleSensor, bool);
				MEMBER(n_look_at_name, server::CPointAngleSensor, CUtlSymbolLarge);
				MEMBER(h_target_entity, server::CPointAngleSensor, chandle<server::CBaseEntity>);
				MEMBER(h_look_at_entity, server::CPointAngleSensor, chandle<server::CBaseEntity>);
				MEMBER(fl_duration, server::CPointAngleSensor, float);
				MEMBER(fl_dot_tolerance, server::CPointAngleSensor, float);
				MEMBER(fl_facing_time, server::CPointAngleSensor, entity2::GameTime_t);
				MEMBER(b_fired, server::CPointAngleSensor, bool);
				MEMBER(on_facing_lookat, server::CPointAngleSensor, entity2::CEntityIOOutput);
				MEMBER(on_not_facing_lookat, server::CPointAngleSensor, entity2::CEntityIOOutput);
				MEMBER(target_dir, server::CPointAngleSensor, CEntityOutputTemplate<Vector>);
				MEMBER(facing_percentage, server::CPointAngleSensor, CEntityOutputTemplate<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointAngleSensor

			class CNavSpaceInfo : public server::CPointEntity {
				MEMBER(b_create_flight_space, server::CNavSpaceInfo, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNavSpaceInfo

			class CSoundEnt : public server::CPointEntity {
				MEMBER(i_free_sound, server::CSoundEnt, int32_t);
				MEMBER(i_active_sound, server::CSoundEnt, int32_t);
				MEMBER(c_last_active_sounds, server::CSoundEnt, int32_t);
				MEMBER_ARR(sound_pool, server::CSoundEnt, 128, server::CSound);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundEnt

			class CLogicAchievement : public server::CLogicalEntity {
				MEMBER(b_disabled, server::CLogicAchievement, bool);
				MEMBER(isz_achievement_event_id, server::CLogicAchievement, CUtlSymbolLarge);
				MEMBER(on_fired, server::CLogicAchievement, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicAchievement

			class CPathSimple : public server::CBaseEntity {
				MEMBER(path_string, server::CPathSimple, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathSimple

			class CWeaponNOVA : public server::CCSWeaponBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponNOVA

			class CScriptItem : public server::CItem {
				MEMBER(move_type_override, server::CScriptItem, client::MoveType_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CScriptItem

			class CCSPlayerBase_CameraServices : public server::CPlayer_CameraServices {
				MEMBER(i_fov, server::CCSPlayerBase_CameraServices, uint32_t);
				MEMBER(i_fovstart, server::CCSPlayerBase_CameraServices, uint32_t);
				MEMBER(fl_fovtime, server::CCSPlayerBase_CameraServices, entity2::GameTime_t);
				MEMBER(fl_fovrate, server::CCSPlayerBase_CameraServices, float);
				MEMBER(h_zoom_owner, server::CCSPlayerBase_CameraServices, chandle<server::CBaseEntity>);
				MEMBER(h_trigger_fog_list, server::CCSPlayerBase_CameraServices, cutl_vector<chandle<server::CBaseEntity>>);
				MEMBER(h_last_fog_trigger, server::CCSPlayerBase_CameraServices, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerBase_CameraServices

			class CInfoDynamicShadowHintBox : public server::CInfoDynamicShadowHint {
				MEMBER(v_box_mins, server::CInfoDynamicShadowHintBox, Vector);
				MEMBER(v_box_maxs, server::CInfoDynamicShadowHintBox, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoDynamicShadowHintBox

			class CFilterLOS : public server::CBaseFilter {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFilterLOS

			class CTouchExpansionComponent : public entity2::CEntityComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTouchExpansionComponent

			class CBaseCombatCharacter : public server::CBaseFlex {
				MEMBER(b_force_server_ragdoll, server::CBaseCombatCharacter, bool);
				MEMBER(h_my_wearables, server::CBaseCombatCharacter, CNetworkUtlVectorBase<chandle<server::CEconWearable>>);
				MEMBER(impact_energy_scale, server::CBaseCombatCharacter, float);
				MEMBER(b_apply_stress_damage, server::CBaseCombatCharacter, bool);
				MEMBER(i_damage_count, server::CBaseCombatCharacter, int32_t);
				MEMBER(p_vec_relationships, server::CBaseCombatCharacter, cutl_vector<server::RelationshipOverride_t>*);
				MEMBER(str_relationships, server::CBaseCombatCharacter, CUtlSymbolLarge);
				MEMBER(e_hull, server::CBaseCombatCharacter, client::Hull_t);
				MEMBER(n_nav_hull_idx, server::CBaseCombatCharacter, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseCombatCharacter

			class CBaseViewModel : public server::CBaseAnimGraph {
				MEMBER(vec_last_facing, server::CBaseViewModel, Vector);
				MEMBER(n_view_model_index, server::CBaseViewModel, uint32_t);
				MEMBER(n_animation_parity, server::CBaseViewModel, uint32_t);
				MEMBER(fl_animation_start_time, server::CBaseViewModel, float);
				MEMBER(h_weapon, server::CBaseViewModel, chandle<server::CBasePlayerWeapon>);
				MEMBER(s_vmname, server::CBaseViewModel, CUtlSymbolLarge);
				MEMBER(s_animation_prefix, server::CBaseViewModel, CUtlSymbolLarge);
				MEMBER(h_old_layer_sequence, server::CBaseViewModel, animationsystem::HSequence);
				MEMBER(old_layer, server::CBaseViewModel, int32_t);
				MEMBER(old_layer_start_time, server::CBaseViewModel, float);
				MEMBER(h_control_panel, server::CBaseViewModel, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseViewModel

			class CItem : public server::CBaseAnimGraph {
				MEMBER(on_player_touch, server::CItem, entity2::CEntityIOOutput);
				MEMBER(on_player_pickup, server::CItem, entity2::CEntityIOOutput);
				MEMBER(b_activate_when_at_rest, server::CItem, bool);
				MEMBER(on_cache_interaction, server::CItem, entity2::CEntityIOOutput);
				MEMBER(on_glove_pulled, server::CItem, entity2::CEntityIOOutput);
				MEMBER(v_original_spawn_origin, server::CItem, Vector);
				MEMBER(v_original_spawn_angles, server::CItem, QAngle);
				MEMBER(b_phys_start_asleep, server::CItem, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CItem

			class CBaseClientUIEntity : public server::CBaseModelEntity {
				MEMBER(b_enabled, server::CBaseClientUIEntity, bool);
				MEMBER(dialog_xmlname, server::CBaseClientUIEntity, CUtlSymbolLarge);
				MEMBER(panel_class_name, server::CBaseClientUIEntity, CUtlSymbolLarge);
				MEMBER(panel_id, server::CBaseClientUIEntity, CUtlSymbolLarge);
				MEMBER(custom_output0, server::CBaseClientUIEntity, entity2::CEntityIOOutput);
				MEMBER(custom_output1, server::CBaseClientUIEntity, entity2::CEntityIOOutput);
				MEMBER(custom_output2, server::CBaseClientUIEntity, entity2::CEntityIOOutput);
				MEMBER(custom_output3, server::CBaseClientUIEntity, entity2::CEntityIOOutput);
				MEMBER(custom_output4, server::CBaseClientUIEntity, entity2::CEntityIOOutput);
				MEMBER(custom_output5, server::CBaseClientUIEntity, entity2::CEntityIOOutput);
				MEMBER(custom_output6, server::CBaseClientUIEntity, entity2::CEntityIOOutput);
				MEMBER(custom_output7, server::CBaseClientUIEntity, entity2::CEntityIOOutput);
				MEMBER(custom_output8, server::CBaseClientUIEntity, entity2::CEntityIOOutput);
				MEMBER(custom_output9, server::CBaseClientUIEntity, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseClientUIEntity

			class CWeaponNegev : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponNegev

			class CEnvDecal : public server::CBaseModelEntity {
				MEMBER(h_decal_material, server::CEnvDecal, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(fl_width, server::CEnvDecal, float);
				MEMBER(fl_height, server::CEnvDecal, float);
				MEMBER(fl_depth, server::CEnvDecal, float);
				MEMBER(n_render_order, server::CEnvDecal, uint32_t);
				MEMBER(b_project_on_world, server::CEnvDecal, bool);
				MEMBER(b_project_on_characters, server::CEnvDecal, bool);
				MEMBER(b_project_on_water, server::CEnvDecal, bool);
				MEMBER(fl_depth_sort_bias, server::CEnvDecal, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvDecal

			class CBodyComponentBaseModelEntity : public server::CBodyComponentSkeletonInstance {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBodyComponentBaseModelEntity

			class CLogicAuto : public server::CBaseEntity {
				MEMBER(on_map_spawn, server::CLogicAuto, entity2::CEntityIOOutput);
				MEMBER(on_demo_map_spawn, server::CLogicAuto, entity2::CEntityIOOutput);
				MEMBER(on_new_game, server::CLogicAuto, entity2::CEntityIOOutput);
				MEMBER(on_load_game, server::CLogicAuto, entity2::CEntityIOOutput);
				MEMBER(on_map_transition, server::CLogicAuto, entity2::CEntityIOOutput);
				MEMBER(on_background_map, server::CLogicAuto, entity2::CEntityIOOutput);
				MEMBER(on_multi_new_map, server::CLogicAuto, entity2::CEntityIOOutput);
				MEMBER(on_multi_new_round, server::CLogicAuto, entity2::CEntityIOOutput);
				MEMBER(on_vrenabled, server::CLogicAuto, entity2::CEntityIOOutput);
				MEMBER(on_vrnot_enabled, server::CLogicAuto, entity2::CEntityIOOutput);
				MEMBER(globalstate, server::CLogicAuto, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicAuto

			class CTriggerToggleSave : public server::CBaseTrigger {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerToggleSave

			class CLightDirectionalEntity : public server::CLightEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLightDirectionalEntity

			class CLogicNPCCounterOBB : public server::CLogicNPCCounterAABB {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicNPCCounterOBB

			class CCSObserver_UseServices : public server::CPlayer_UseServices {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSObserver_UseServices

			class CFuncTrackChange : public server::CFuncPlatRot {
				MEMBER(track_top, server::CFuncTrackChange, server::CPathTrack*);
				MEMBER(track_bottom, server::CFuncTrackChange, server::CPathTrack*);
				MEMBER(train, server::CFuncTrackChange, server::CFuncTrackTrain*);
				MEMBER(track_top_name, server::CFuncTrackChange, CUtlSymbolLarge);
				MEMBER(track_bottom_name, server::CFuncTrackChange, CUtlSymbolLarge);
				MEMBER(train_name, server::CFuncTrackChange, CUtlSymbolLarge);
				MEMBER(code, server::CFuncTrackChange, server::TRAIN_CODE);
				MEMBER(target_state, server::CFuncTrackChange, int32_t);
				MEMBER(use, server::CFuncTrackChange, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncTrackChange

			class CGamePlayerZone : public server::CRuleBrushEntity {
				MEMBER(on_player_in_zone, server::CGamePlayerZone, entity2::CEntityIOOutput);
				MEMBER(on_player_out_zone, server::CGamePlayerZone, entity2::CEntityIOOutput);
				MEMBER(players_in_count, server::CGamePlayerZone, CEntityOutputTemplate<int32_t>);
				MEMBER(players_out_count, server::CGamePlayerZone, CEntityOutputTemplate<int32_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGamePlayerZone

			class CInfoVisibilityBox : public server::CBaseEntity {
				MEMBER(n_mode, server::CInfoVisibilityBox, int32_t);
				MEMBER(v_box_size, server::CInfoVisibilityBox, Vector);
				MEMBER(b_enabled, server::CInfoVisibilityBox, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoVisibilityBox

			class CCSMinimapBoundary : public server::CBaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSMinimapBoundary

			class CMessageEntity : public server::CPointEntity {
				MEMBER(radius, server::CMessageEntity, int32_t);
				MEMBER(message_text, server::CMessageEntity, CUtlSymbolLarge);
				MEMBER(draw_text, server::CMessageEntity, bool);
				MEMBER(b_developer_only, server::CMessageEntity, bool);
				MEMBER(b_enabled, server::CMessageEntity, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMessageEntity

			class CCSPlayer_HostageServices : public client::CPlayerPawnComponent {
				MEMBER(h_carried_hostage, server::CCSPlayer_HostageServices, chandle<server::CBaseEntity>);
				MEMBER(h_carried_hostage_prop, server::CCSPlayer_HostageServices, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_HostageServices

			class CFuncPlatRot : public server::CFuncPlat {
				MEMBER(end, server::CFuncPlatRot, QAngle);
				MEMBER(start, server::CFuncPlatRot, QAngle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncPlatRot

			class CSmokeGrenade : public server::CBaseCSGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmokeGrenade

			class CCSPlayer_PingServices : public client::CPlayerPawnComponent {
				MEMBER_ARR(fl_player_ping_tokens, server::CCSPlayer_PingServices, 5, entity2::GameTime_t);
				MEMBER(h_player_ping, server::CCSPlayer_PingServices, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_PingServices

			class CPlayer_FlashlightServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_FlashlightServices

			class CCSPlayer_BuyServices : public client::CPlayerPawnComponent {
				MEMBER(vec_sellback_purchase_entries, server::CCSPlayer_BuyServices, CUtlVectorEmbeddedNetworkVar<server::SellbackPurchaseEntry_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_BuyServices

			class CPhysForce : public server::CPointEntity {
				MEMBER(name_attach, server::CPhysForce, CUtlSymbolLarge);
				MEMBER(force, server::CPhysForce, float);
				MEMBER(force_time, server::CPhysForce, float);
				MEMBER(attached_object, server::CPhysForce, chandle<server::CBaseEntity>);
				MEMBER(was_restored, server::CPhysForce, bool);
				MEMBER(integrator, server::CPhysForce, server::CConstantForceController);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysForce

			class CCSPlayer_ItemServices : public server::CPlayer_ItemServices {
				MEMBER(b_has_defuser, server::CCSPlayer_ItemServices, bool);
				MEMBER(b_has_helmet, server::CCSPlayer_ItemServices, bool);
				MEMBER(b_has_heavy_armor, server::CCSPlayer_ItemServices, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_ItemServices

			class CBaseFire : public server::CBaseEntity {
				MEMBER(fl_scale, server::CBaseFire, float);
				MEMBER(fl_start_scale, server::CBaseFire, float);
				MEMBER(fl_scale_time, server::CBaseFire, float);
				MEMBER(n_flags, server::CBaseFire, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseFire

			class CWeaponMAC10 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponMAC10

			class CWeaponGlock : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponGlock

			class CPredictedViewModel : public server::CBaseViewModel {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPredictedViewModel

			class CTriggerGameEvent : public server::CBaseTrigger {
				MEMBER(str_start_touch_event_name, server::CTriggerGameEvent, CUtlString);
				MEMBER(str_end_touch_event_name, server::CTriggerGameEvent, CUtlString);
				MEMBER(str_trigger_id, server::CTriggerGameEvent, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerGameEvent

			class CLogicDistanceAutosave : public server::CLogicalEntity {
				MEMBER(isz_target_entity, server::CLogicDistanceAutosave, CUtlSymbolLarge);
				MEMBER(fl_distance_to_player, server::CLogicDistanceAutosave, float);
				MEMBER(b_force_new_level_unit, server::CLogicDistanceAutosave, bool);
				MEMBER(b_check_cough, server::CLogicDistanceAutosave, bool);
				MEMBER(b_think_dangerous, server::CLogicDistanceAutosave, bool);
				MEMBER(fl_dangerous_time, server::CLogicDistanceAutosave, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicDistanceAutosave

			class CEnvMicrophone : public server::CPointEntity {
				MEMBER(b_disabled, server::CEnvMicrophone, bool);
				MEMBER(h_measure_target, server::CEnvMicrophone, chandle<server::CBaseEntity>);
				MEMBER(n_sound_type, server::CEnvMicrophone, server::SoundTypes_t);
				MEMBER(n_sound_flags, server::CEnvMicrophone, server::SoundFlags_t);
				MEMBER(fl_sensitivity, server::CEnvMicrophone, float);
				MEMBER(fl_smooth_factor, server::CEnvMicrophone, float);
				MEMBER(fl_max_range, server::CEnvMicrophone, float);
				MEMBER(isz_speaker_name, server::CEnvMicrophone, CUtlSymbolLarge);
				MEMBER(h_speaker, server::CEnvMicrophone, chandle<server::CBaseEntity>);
				MEMBER(b_avoid_feedback, server::CEnvMicrophone, bool);
				MEMBER(i_speaker_dsppreset, server::CEnvMicrophone, int32_t);
				MEMBER(isz_listen_filter, server::CEnvMicrophone, CUtlSymbolLarge);
				MEMBER(h_listen_filter, server::CEnvMicrophone, chandle<server::CBaseFilter>);
				MEMBER(sound_level, server::CEnvMicrophone, CEntityOutputTemplate<float>);
				MEMBER(on_routed_sound, server::CEnvMicrophone, entity2::CEntityIOOutput);
				MEMBER(on_heard_sound, server::CEnvMicrophone, entity2::CEntityIOOutput);
				MEMBER_ARR(sz_last_sound, server::CEnvMicrophone, 256, char);
				MEMBER(i_last_routed_frame, server::CEnvMicrophone, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvMicrophone

			class CPointCameraVFOV : public server::CPointCamera {
				MEMBER(fl_vertical_fov, server::CPointCameraVFOV, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointCameraVFOV

			class CInfoSpawnGroupLoadUnload : public server::CLogicalEntity {
				MEMBER(on_spawn_group_load_started, server::CInfoSpawnGroupLoadUnload, entity2::CEntityIOOutput);
				MEMBER(on_spawn_group_load_finished, server::CInfoSpawnGroupLoadUnload, entity2::CEntityIOOutput);
				MEMBER(on_spawn_group_unload_started, server::CInfoSpawnGroupLoadUnload, entity2::CEntityIOOutput);
				MEMBER(on_spawn_group_unload_finished, server::CInfoSpawnGroupLoadUnload, entity2::CEntityIOOutput);
				MEMBER(isz_spawn_group_name, server::CInfoSpawnGroupLoadUnload, CUtlSymbolLarge);
				MEMBER(isz_spawn_group_filter_name, server::CInfoSpawnGroupLoadUnload, CUtlSymbolLarge);
				MEMBER(isz_landmark_name, server::CInfoSpawnGroupLoadUnload, CUtlSymbolLarge);
				MEMBER(s_fixed_spawn_group_name, server::CInfoSpawnGroupLoadUnload, CUtlString);
				MEMBER(fl_timeout_interval, server::CInfoSpawnGroupLoadUnload, float);
				MEMBER(b_streaming_started, server::CInfoSpawnGroupLoadUnload, bool);
				MEMBER(b_unloading_started, server::CInfoSpawnGroupLoadUnload, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoSpawnGroupLoadUnload

			class CFogVolume : public server::CServerOnlyModelEntity {
				MEMBER(fog_name, server::CFogVolume, CUtlSymbolLarge);
				MEMBER(post_process_name, server::CFogVolume, CUtlSymbolLarge);
				MEMBER(color_correction_name, server::CFogVolume, CUtlSymbolLarge);
				MEMBER(b_disabled, server::CFogVolume, bool);
				MEMBER(b_in_fog_volumes_list, server::CFogVolume, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFogVolume

			class CInfoPlayerCounterterrorist : public server::SpawnPoint {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoPlayerCounterterrorist

			class CInfoLadderDismount : public server::CBaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoLadderDismount

			class CFire : public server::CBaseModelEntity {
				MEMBER(h_effect, server::CFire, chandle<server::CBaseFire>);
				MEMBER(h_owner, server::CFire, chandle<server::CBaseEntity>);
				MEMBER(n_fire_type, server::CFire, int32_t);
				MEMBER(fl_fuel, server::CFire, float);
				MEMBER(fl_damage_time, server::CFire, entity2::GameTime_t);
				MEMBER(last_damage, server::CFire, entity2::GameTime_t);
				MEMBER(fl_fire_size, server::CFire, float);
				MEMBER(fl_last_nav_update_time, server::CFire, entity2::GameTime_t);
				MEMBER(fl_heat_level, server::CFire, float);
				MEMBER(fl_heat_absorb, server::CFire, float);
				MEMBER(fl_damage_scale, server::CFire, float);
				MEMBER(fl_max_heat, server::CFire, float);
				MEMBER(fl_last_heat_level, server::CFire, float);
				MEMBER(fl_attack_time, server::CFire, float);
				MEMBER(b_enabled, server::CFire, bool);
				MEMBER(b_start_disabled, server::CFire, bool);
				MEMBER(b_did_activate, server::CFire, bool);
				MEMBER(on_ignited, server::CFire, entity2::CEntityIOOutput);
				MEMBER(on_extinguished, server::CFire, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFire

			class CCSPointScriptEntity : public server::CBaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScriptEntity

			class CFuncPlat : public server::CBasePlatTrain {
				MEMBER(s_noise, server::CFuncPlat, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncPlat

			class CGenericConstraint : public server::CPhysConstraint {
				MEMBER(n_linear_motion_x, server::CGenericConstraint, physicslib::JointMotion_t);
				MEMBER(n_linear_motion_y, server::CGenericConstraint, physicslib::JointMotion_t);
				MEMBER(n_linear_motion_z, server::CGenericConstraint, physicslib::JointMotion_t);
				MEMBER(fl_linear_frequency_x, server::CGenericConstraint, float);
				MEMBER(fl_linear_frequency_y, server::CGenericConstraint, float);
				MEMBER(fl_linear_frequency_z, server::CGenericConstraint, float);
				MEMBER(fl_linear_damping_ratio_x, server::CGenericConstraint, float);
				MEMBER(fl_linear_damping_ratio_y, server::CGenericConstraint, float);
				MEMBER(fl_linear_damping_ratio_z, server::CGenericConstraint, float);
				MEMBER(fl_max_linear_impulse_x, server::CGenericConstraint, float);
				MEMBER(fl_max_linear_impulse_y, server::CGenericConstraint, float);
				MEMBER(fl_max_linear_impulse_z, server::CGenericConstraint, float);
				MEMBER(fl_break_after_time_x, server::CGenericConstraint, float);
				MEMBER(fl_break_after_time_y, server::CGenericConstraint, float);
				MEMBER(fl_break_after_time_z, server::CGenericConstraint, float);
				MEMBER(fl_break_after_time_start_time_x, server::CGenericConstraint, entity2::GameTime_t);
				MEMBER(fl_break_after_time_start_time_y, server::CGenericConstraint, entity2::GameTime_t);
				MEMBER(fl_break_after_time_start_time_z, server::CGenericConstraint, entity2::GameTime_t);
				MEMBER(fl_break_after_time_threshold_x, server::CGenericConstraint, float);
				MEMBER(fl_break_after_time_threshold_y, server::CGenericConstraint, float);
				MEMBER(fl_break_after_time_threshold_z, server::CGenericConstraint, float);
				MEMBER(fl_notify_force_x, server::CGenericConstraint, float);
				MEMBER(fl_notify_force_y, server::CGenericConstraint, float);
				MEMBER(fl_notify_force_z, server::CGenericConstraint, float);
				MEMBER(fl_notify_force_min_time_x, server::CGenericConstraint, float);
				MEMBER(fl_notify_force_min_time_y, server::CGenericConstraint, float);
				MEMBER(fl_notify_force_min_time_z, server::CGenericConstraint, float);
				MEMBER(fl_notify_force_last_time_x, server::CGenericConstraint, entity2::GameTime_t);
				MEMBER(fl_notify_force_last_time_y, server::CGenericConstraint, entity2::GameTime_t);
				MEMBER(fl_notify_force_last_time_z, server::CGenericConstraint, entity2::GameTime_t);
				MEMBER(b_axis_notified_x, server::CGenericConstraint, bool);
				MEMBER(b_axis_notified_y, server::CGenericConstraint, bool);
				MEMBER(b_axis_notified_z, server::CGenericConstraint, bool);
				MEMBER(n_angular_motion_x, server::CGenericConstraint, physicslib::JointMotion_t);
				MEMBER(n_angular_motion_y, server::CGenericConstraint, physicslib::JointMotion_t);
				MEMBER(n_angular_motion_z, server::CGenericConstraint, physicslib::JointMotion_t);
				MEMBER(fl_angular_frequency_x, server::CGenericConstraint, float);
				MEMBER(fl_angular_frequency_y, server::CGenericConstraint, float);
				MEMBER(fl_angular_frequency_z, server::CGenericConstraint, float);
				MEMBER(fl_angular_damping_ratio_x, server::CGenericConstraint, float);
				MEMBER(fl_angular_damping_ratio_y, server::CGenericConstraint, float);
				MEMBER(fl_angular_damping_ratio_z, server::CGenericConstraint, float);
				MEMBER(fl_max_angular_impulse_x, server::CGenericConstraint, float);
				MEMBER(fl_max_angular_impulse_y, server::CGenericConstraint, float);
				MEMBER(fl_max_angular_impulse_z, server::CGenericConstraint, float);
				MEMBER(notify_force_reached_x, server::CGenericConstraint, entity2::CEntityIOOutput);
				MEMBER(notify_force_reached_y, server::CGenericConstraint, entity2::CEntityIOOutput);
				MEMBER(notify_force_reached_z, server::CGenericConstraint, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGenericConstraint

			class CEnvInstructorVRHint : public server::CPointEntity {
				MEMBER(isz_name, server::CEnvInstructorVRHint, CUtlSymbolLarge);
				MEMBER(isz_hint_target_entity, server::CEnvInstructorVRHint, CUtlSymbolLarge);
				MEMBER(i_timeout, server::CEnvInstructorVRHint, int32_t);
				MEMBER(isz_caption, server::CEnvInstructorVRHint, CUtlSymbolLarge);
				MEMBER(isz_start_sound, server::CEnvInstructorVRHint, CUtlSymbolLarge);
				MEMBER(i_layout_file_type, server::CEnvInstructorVRHint, int32_t);
				MEMBER(isz_custom_layout_file, server::CEnvInstructorVRHint, CUtlSymbolLarge);
				MEMBER(i_attach_type, server::CEnvInstructorVRHint, int32_t);
				MEMBER(fl_height_offset, server::CEnvInstructorVRHint, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvInstructorVRHint

			class CWeaponG3SG1 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponG3SG1

			class CInfoInstructorHintTarget : public server::CPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoInstructorHintTarget

			class CFilterMassGreater : public server::CBaseFilter {
				MEMBER(f_filter_mass, server::CFilterMassGreater, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFilterMassGreater

			class CLogicNPCCounterAABB : public server::CLogicNPCCounter {
				MEMBER(v_distance_outer_mins, server::CLogicNPCCounterAABB, Vector);
				MEMBER(v_distance_outer_maxs, server::CLogicNPCCounterAABB, Vector);
				MEMBER(v_outer_mins, server::CLogicNPCCounterAABB, Vector);
				MEMBER(v_outer_maxs, server::CLogicNPCCounterAABB, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicNPCCounterAABB

			class CSoundOpvarSetPathCornerEntity : public server::CSoundOpvarSetPointEntity {
				MEMBER(fl_dist_min_sqr, server::CSoundOpvarSetPathCornerEntity, float);
				MEMBER(fl_dist_max_sqr, server::CSoundOpvarSetPathCornerEntity, float);
				MEMBER(isz_path_corner_entity_name, server::CSoundOpvarSetPathCornerEntity, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundOpvarSetPathCornerEntity

			class CBreachChargeProjectile : public server::CBaseGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBreachChargeProjectile

			class CRagdollProp : public server::CBaseAnimGraph {
				MEMBER(ragdoll, server::CRagdollProp, client::ragdoll_t);
				MEMBER(b_start_disabled, server::CRagdollProp, bool);
				MEMBER(rag_pos, server::CRagdollProp, CNetworkUtlVectorBase<Vector>);
				MEMBER(rag_angles, server::CRagdollProp, CNetworkUtlVectorBase<QAngle>);
				MEMBER(h_ragdoll_source, server::CRagdollProp, chandle<server::CBaseEntity>);
				MEMBER(last_update_tick_count, server::CRagdollProp, uint32_t);
				MEMBER(all_asleep, server::CRagdollProp, bool);
				MEMBER(b_first_collision_after_launch, server::CRagdollProp, bool);
				MEMBER(h_damage_entity, server::CRagdollProp, chandle<server::CBaseEntity>);
				MEMBER(h_killer, server::CRagdollProp, chandle<server::CBaseEntity>);
				MEMBER(h_physics_attacker, server::CRagdollProp, chandle<server::CBasePlayerPawn>);
				MEMBER(fl_last_physics_influence_time, server::CRagdollProp, entity2::GameTime_t);
				MEMBER(fl_fade_out_start_time, server::CRagdollProp, entity2::GameTime_t);
				MEMBER(fl_fade_time, server::CRagdollProp, float);
				MEMBER(vec_last_origin, server::CRagdollProp, Vector);
				MEMBER(fl_awake_time, server::CRagdollProp, entity2::GameTime_t);
				MEMBER(fl_last_origin_change_time, server::CRagdollProp, entity2::GameTime_t);
				MEMBER(str_origin_class_name, server::CRagdollProp, CUtlSymbolLarge);
				MEMBER(str_source_class_name, server::CRagdollProp, CUtlSymbolLarge);
				MEMBER(b_has_been_physgunned, server::CRagdollProp, bool);
				MEMBER(b_should_teleport_physics, server::CRagdollProp, bool);
				MEMBER(fl_blend_weight, server::CRagdollProp, float);
				MEMBER(fl_default_fade_scale, server::CRagdollProp, float);
				MEMBER(ragdoll_mins, server::CRagdollProp, cutl_vector<Vector>);
				MEMBER(ragdoll_maxs, server::CRagdollProp, cutl_vector<Vector>);
				MEMBER(b_should_delete_activation_record, server::CRagdollProp, bool);
				MEMBER(b_validate_powered_ragdoll_pose, server::CRagdollProp, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRagdollProp

			class CTriggerLerpObject : public server::CBaseTrigger {
				MEMBER(isz_lerp_target, server::CTriggerLerpObject, CUtlSymbolLarge);
				MEMBER(h_lerp_target, server::CTriggerLerpObject, chandle<server::CBaseEntity>);
				MEMBER(isz_lerp_target_attachment, server::CTriggerLerpObject, CUtlSymbolLarge);
				MEMBER(h_lerp_target_attachment, server::CTriggerLerpObject, modellib::AttachmentHandle_t);
				MEMBER(fl_lerp_duration, server::CTriggerLerpObject, float);
				MEMBER(b_lerp_restore_move_type, server::CTriggerLerpObject, bool);
				MEMBER(b_single_lerp_object, server::CTriggerLerpObject, bool);
				MEMBER(vec_lerping_objects, server::CTriggerLerpObject, cutl_vector<server::lerpdata_t>);
				MEMBER(isz_lerp_effect, server::CTriggerLerpObject, CUtlSymbolLarge);
				MEMBER(isz_lerp_sound, server::CTriggerLerpObject, CUtlSymbolLarge);
				MEMBER(b_attach_touching_object, server::CTriggerLerpObject, bool);
				MEMBER(h_entity_to_wait_for_disconnect, server::CTriggerLerpObject, chandle<server::CBaseEntity>);
				MEMBER(on_lerp_started, server::CTriggerLerpObject, entity2::CEntityIOOutput);
				MEMBER(on_lerp_finished, server::CTriggerLerpObject, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerLerpObject

			class CItemSoda : public server::CBaseAnimGraph {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CItemSoda

			class CBaseToggle : public server::CBaseModelEntity {
				MEMBER(toggle_state, server::CBaseToggle, server::TOGGLE_STATE);
				MEMBER(fl_move_distance, server::CBaseToggle, float);
				MEMBER(fl_wait, server::CBaseToggle, float);
				MEMBER(fl_lip, server::CBaseToggle, float);
				MEMBER(b_always_fire_blocked_outputs, server::CBaseToggle, bool);
				MEMBER(vec_position1, server::CBaseToggle, Vector);
				MEMBER(vec_position2, server::CBaseToggle, Vector);
				MEMBER(vec_move_ang, server::CBaseToggle, QAngle);
				MEMBER(vec_angle1, server::CBaseToggle, QAngle);
				MEMBER(vec_angle2, server::CBaseToggle, QAngle);
				MEMBER(fl_height, server::CBaseToggle, float);
				MEMBER(h_activator, server::CBaseToggle, chandle<server::CBaseEntity>);
				MEMBER(vec_final_dest, server::CBaseToggle, Vector);
				MEMBER(vec_final_angle, server::CBaseToggle, QAngle);
				MEMBER(movement_type, server::CBaseToggle, int32_t);
				MEMBER(s_master, server::CBaseToggle, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseToggle

			class CMarkupVolumeTagged_Nav : public server::CMarkupVolumeTagged {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMarkupVolumeTagged_Nav

			class CEnvSky : public server::CBaseModelEntity {
				MEMBER(h_sky_material, server::CEnvSky, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(h_sky_material_lighting_only, server::CEnvSky, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(b_start_disabled, server::CEnvSky, bool);
				MEMBER(v_tint_color, server::CEnvSky, Color);
				MEMBER(v_tint_color_lighting_only, server::CEnvSky, Color);
				MEMBER(fl_brightness_scale, server::CEnvSky, float);
				MEMBER(n_fog_type, server::CEnvSky, int32_t);
				MEMBER(fl_fog_min_start, server::CEnvSky, float);
				MEMBER(fl_fog_min_end, server::CEnvSky, float);
				MEMBER(fl_fog_max_start, server::CEnvSky, float);
				MEMBER(fl_fog_max_end, server::CEnvSky, float);
				MEMBER(b_enabled, server::CEnvSky, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvSky

			class CEnvDetailController : public server::CBaseEntity {
				MEMBER(fl_fade_start_dist, server::CEnvDetailController, float);
				MEMBER(fl_fade_end_dist, server::CEnvDetailController, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvDetailController

			class CInfoSpawnGroupLandmark : public server::CPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoSpawnGroupLandmark

			class CFootstepControl : public server::CBaseTrigger {
				MEMBER(source, server::CFootstepControl, CUtlSymbolLarge);
				MEMBER(destination, server::CFootstepControl, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFootstepControl

			class CTriggerLook : public server::CTriggerOnce {
				MEMBER(h_look_target, server::CTriggerLook, chandle<server::CBaseEntity>);
				MEMBER(fl_field_of_view, server::CTriggerLook, float);
				MEMBER(fl_look_time, server::CTriggerLook, float);
				MEMBER(fl_look_time_total, server::CTriggerLook, float);
				MEMBER(fl_look_time_last, server::CTriggerLook, entity2::GameTime_t);
				MEMBER(fl_timeout_duration, server::CTriggerLook, float);
				MEMBER(b_timeout_fired, server::CTriggerLook, bool);
				MEMBER(b_is_looking, server::CTriggerLook, bool);
				MEMBER(b2_dfov, server::CTriggerLook, bool);
				MEMBER(b_use_velocity, server::CTriggerLook, bool);
				MEMBER(b_test_occlusion, server::CTriggerLook, bool);
				MEMBER(on_timeout, server::CTriggerLook, entity2::CEntityIOOutput);
				MEMBER(on_start_look, server::CTriggerLook, entity2::CEntityIOOutput);
				MEMBER(on_end_look, server::CTriggerLook, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerLook

			class CMathRemap : public server::CLogicalEntity {
				MEMBER(fl_in_min, server::CMathRemap, float);
				MEMBER(fl_in_max, server::CMathRemap, float);
				MEMBER(fl_out1, server::CMathRemap, float);
				MEMBER(fl_out2, server::CMathRemap, float);
				MEMBER(fl_old_in_value, server::CMathRemap, float);
				MEMBER(b_enabled, server::CMathRemap, bool);
				MEMBER(out_value, server::CMathRemap, CEntityOutputTemplate<float>);
				MEMBER(on_rose_above_min, server::CMathRemap, entity2::CEntityIOOutput);
				MEMBER(on_rose_above_max, server::CMathRemap, entity2::CEntityIOOutput);
				MEMBER(on_fell_below_min, server::CMathRemap, entity2::CEntityIOOutput);
				MEMBER(on_fell_below_max, server::CMathRemap, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMathRemap

			class CInstructorEventEntity : public server::CPointEntity {
				MEMBER(isz_name, server::CInstructorEventEntity, CUtlSymbolLarge);
				MEMBER(isz_hint_target_entity, server::CInstructorEventEntity, CUtlSymbolLarge);
				MEMBER(h_target_player, server::CInstructorEventEntity, chandle<server::CBasePlayerPawn>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInstructorEventEntity

			class CGradientFog : public server::CBaseEntity {
				MEMBER(h_gradient_fog_texture, server::CGradientFog, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(fl_fog_start_distance, server::CGradientFog, float);
				MEMBER(fl_fog_end_distance, server::CGradientFog, float);
				MEMBER(b_height_fog_enabled, server::CGradientFog, bool);
				MEMBER(fl_fog_start_height, server::CGradientFog, float);
				MEMBER(fl_fog_end_height, server::CGradientFog, float);
				MEMBER(fl_far_z, server::CGradientFog, float);
				MEMBER(fl_fog_max_opacity, server::CGradientFog, float);
				MEMBER(fl_fog_falloff_exponent, server::CGradientFog, float);
				MEMBER(fl_fog_vertical_exponent, server::CGradientFog, float);
				MEMBER(fog_color, server::CGradientFog, Color);
				MEMBER(fl_fog_strength, server::CGradientFog, float);
				MEMBER(fl_fade_time, server::CGradientFog, float);
				MEMBER(b_start_disabled, server::CGradientFog, bool);
				MEMBER(b_is_enabled, server::CGradientFog, bool);
				MEMBER(b_gradient_fog_needs_textures, server::CGradientFog, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGradientFog

			class CTriggerVolume : public server::CBaseModelEntity {
				MEMBER(i_filter_name, server::CTriggerVolume, CUtlSymbolLarge);
				MEMBER(h_filter, server::CTriggerVolume, chandle<server::CBaseFilter>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerVolume

			class CSoundEventOBBEntity : public server::CSoundEventEntity {
				MEMBER(v_mins, server::CSoundEventOBBEntity, Vector);
				MEMBER(v_maxs, server::CSoundEventOBBEntity, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundEventOBBEntity

			class CEnvSoundscapeAlias_snd_soundscape : public server::CEnvSoundscape {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvSoundscapeAlias_snd_soundscape

			class CInfoInstructorHintHostageRescueZone : public server::CPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoInstructorHintHostageRescueZone

			class CPulseCell_Step_SetAnimGraphParam : public pulse_runtime_lib::CPulseCell_BaseFlow {
				MEMBER(param_name, server::CPulseCell_Step_SetAnimGraphParam, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Step_SetAnimGraphParam

			class CFishPool : public server::CBaseEntity {
				MEMBER(fish_count, server::CFishPool, int32_t);
				MEMBER(max_range, server::CFishPool, float);
				MEMBER(swim_depth, server::CFishPool, float);
				MEMBER(water_level, server::CFishPool, float);
				MEMBER(is_dormant, server::CFishPool, bool);
				MEMBER(fishes, server::CFishPool, cutl_vector<chandle<server::CFish>>);
				MEMBER(vis_timer, server::CFishPool, server::CountdownTimer);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFishPool

			class CTriggerOnce : public server::CTriggerMultiple {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerOnce

			class CPointClientCommand : public server::CPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointClientCommand

			class CFuncVPhysicsClip : public server::CBaseModelEntity {
				MEMBER(b_disabled, server::CFuncVPhysicsClip, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncVPhysicsClip

			class CCSPlayer_RadioServices : public client::CPlayerPawnComponent {
				MEMBER(fl_got_hostage_talk_timer, server::CCSPlayer_RadioServices, entity2::GameTime_t);
				MEMBER(fl_defusing_talk_timer, server::CCSPlayer_RadioServices, entity2::GameTime_t);
				MEMBER(fl_c4_plant_talk_timer, server::CCSPlayer_RadioServices, entity2::GameTime_t);
				MEMBER_ARR(fl_radio_token_slots, server::CCSPlayer_RadioServices, 3, entity2::GameTime_t);
				MEMBER(b_ignore_radio, server::CCSPlayer_RadioServices, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_RadioServices

			class CInstancedSceneEntity : public server::CSceneEntity {
				MEMBER(h_owner, server::CInstancedSceneEntity, chandle<server::CBaseEntity>);
				MEMBER(b_had_owner, server::CInstancedSceneEntity, bool);
				MEMBER(fl_post_speak_delay, server::CInstancedSceneEntity, float);
				MEMBER(fl_pre_delay, server::CInstancedSceneEntity, float);
				MEMBER(b_is_background, server::CInstancedSceneEntity, bool);
				MEMBER(b_remove_on_completion, server::CInstancedSceneEntity, bool);
				MEMBER(h_target, server::CInstancedSceneEntity, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInstancedSceneEntity

			class CNullEntity : public server::CBaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNullEntity

			class CEnvHudHint : public server::CPointEntity {
				MEMBER(isz_message, server::CEnvHudHint, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvHudHint

			class CBeam : public server::CBaseModelEntity {
				MEMBER(fl_frame_rate, server::CBeam, float);
				MEMBER(fl_hdrcolor_scale, server::CBeam, float);
				MEMBER(fl_fire_time, server::CBeam, entity2::GameTime_t);
				MEMBER(fl_damage, server::CBeam, float);
				MEMBER(n_num_beam_ents, server::CBeam, uint8_t);
				MEMBER(h_base_material, server::CBeam, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(n_halo_index, server::CBeam, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(n_beam_type, server::CBeam, client::BeamType_t);
				MEMBER(n_beam_flags, server::CBeam, uint32_t);
				MEMBER_ARR(h_attach_entity, server::CBeam, 10, chandle<server::CBaseEntity>);
				MEMBER_ARR(n_attach_index, server::CBeam, 10, modellib::AttachmentHandle_t);
				MEMBER(f_width, server::CBeam, float);
				MEMBER(f_end_width, server::CBeam, float);
				MEMBER(f_fade_length, server::CBeam, float);
				MEMBER(f_halo_scale, server::CBeam, float);
				MEMBER(f_amplitude, server::CBeam, float);
				MEMBER(f_start_frame, server::CBeam, float);
				MEMBER(f_speed, server::CBeam, float);
				MEMBER(fl_frame, server::CBeam, float);
				MEMBER(n_clip_style, server::CBeam, client::BeamClipStyle_t);
				MEMBER(b_turned_off, server::CBeam, bool);
				MEMBER(vec_end_pos, server::CBeam, Vector);
				MEMBER(h_end_entity, server::CBeam, chandle<server::CBaseEntity>);
				MEMBER(n_dissolve_type, server::CBeam, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBeam

			class CTeam : public server::CBaseEntity {
				MEMBER(a_player_controllers, server::CTeam, CNetworkUtlVectorBase<chandle<server::CBasePlayerController>>);
				MEMBER(a_players, server::CTeam, CNetworkUtlVectorBase<chandle<server::CBasePlayerPawn>>);
				MEMBER(i_score, server::CTeam, int32_t);
				MEMBER_ARR(sz_teamname, server::CTeam, 129, char);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTeam

			class CBasePlayerWeaponVData : public client::CEntitySubclassVDataBase {
				MEMBER(sz_world_model, server::CBasePlayerWeaponVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(s_tools_only_owner_model_name, server::CBasePlayerWeaponVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(b_built_right_handed, server::CBasePlayerWeaponVData, bool);
				MEMBER(b_allow_flipping, server::CBasePlayerWeaponVData, bool);
				///MEMBER(s_muzzle_attachment, server::CBasePlayerWeaponVData, CAttachmentNameSymbolWithStorage);
				MEMBER(sz_muzzle_flash_particle, server::CBasePlayerWeaponVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>);
				MEMBER(b_linked_cooldowns, server::CBasePlayerWeaponVData, bool);
				MEMBER(i_flags, server::CBasePlayerWeaponVData, client::ItemFlagTypes_t);
				MEMBER(n_primary_ammo_type, server::CBasePlayerWeaponVData, client::AmmoIndex_t);
				MEMBER(n_secondary_ammo_type, server::CBasePlayerWeaponVData, client::AmmoIndex_t);
				MEMBER(i_max_clip1, server::CBasePlayerWeaponVData, int32_t);
				MEMBER(i_max_clip2, server::CBasePlayerWeaponVData, int32_t);
				MEMBER(i_default_clip1, server::CBasePlayerWeaponVData, int32_t);
				MEMBER(i_default_clip2, server::CBasePlayerWeaponVData, int32_t);
				MEMBER(b_reserve_ammo_as_clips, server::CBasePlayerWeaponVData, bool);
				MEMBER(i_weight, server::CBasePlayerWeaponVData, int32_t);
				MEMBER(b_auto_switch_to, server::CBasePlayerWeaponVData, bool);
				MEMBER(b_auto_switch_from, server::CBasePlayerWeaponVData, bool);
				MEMBER(i_rumble_effect, server::CBasePlayerWeaponVData, client::RumbleEffect_t);
				MEMBER(i_slot, server::CBasePlayerWeaponVData, int32_t);
				MEMBER(i_position, server::CBasePlayerWeaponVData, int32_t);
				MEMBER(a_shoot_sounds, server::CBasePlayerWeaponVData, CUtlOrderedMap<client::WeaponSound_t,CSoundEventName>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBasePlayerWeaponVData

			class CCSObserverPawn : public server::CCSPlayerPawnBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSObserverPawn

			class CWeaponSG556 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponSG556

			class CAI_ChangeHintGroup : public server::CBaseEntity {
				MEMBER(i_search_type, server::CAI_ChangeHintGroup, int32_t);
				MEMBER(str_search_name, server::CAI_ChangeHintGroup, CUtlSymbolLarge);
				MEMBER(str_new_hint_group, server::CAI_ChangeHintGroup, CUtlSymbolLarge);
				MEMBER(fl_radius, server::CAI_ChangeHintGroup, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAI_ChangeHintGroup

			class CAmbientGeneric : public server::CPointEntity {
				MEMBER(radius, server::CAmbientGeneric, float);
				MEMBER(fl_max_radius, server::CAmbientGeneric, float);
				MEMBER(i_sound_level, server::CAmbientGeneric, soundsystem::soundlevel_t);
				MEMBER(dpv, server::CAmbientGeneric, server::dynpitchvol_t);
				MEMBER(f_active, server::CAmbientGeneric, bool);
				MEMBER(f_looping, server::CAmbientGeneric, bool);
				MEMBER(isz_sound, server::CAmbientGeneric, CUtlSymbolLarge);
				MEMBER(s_source_ent_name, server::CAmbientGeneric, CUtlSymbolLarge);
				MEMBER(h_sound_source, server::CAmbientGeneric, chandle<server::CBaseEntity>);
				MEMBER(n_sound_source_ent_index, server::CAmbientGeneric, CEntityIndex);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAmbientGeneric

			class CDynamicLight : public server::CBaseModelEntity {
				MEMBER(actual_flags, server::CDynamicLight, uint8_t);
				MEMBER(flags, server::CDynamicLight, uint8_t);
				MEMBER(light_style, server::CDynamicLight, uint8_t);
				MEMBER(on, server::CDynamicLight, bool);
				MEMBER(radius, server::CDynamicLight, float);
				MEMBER(exponent, server::CDynamicLight, int32_t);
				MEMBER(inner_angle, server::CDynamicLight, float);
				MEMBER(outer_angle, server::CDynamicLight, float);
				MEMBER(spot_radius, server::CDynamicLight, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDynamicLight

			class CWeaponP90 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponP90

			class CRectLight : public server::CBarnLight {
				MEMBER(b_show_light, server::CRectLight, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRectLight

			class CPointValueRemapper : public server::CBaseEntity {
				MEMBER(b_disabled, server::CPointValueRemapper, bool);
				MEMBER(b_update_on_client, server::CPointValueRemapper, bool);
				MEMBER(n_input_type, server::CPointValueRemapper, client::ValueRemapperInputType_t);
				MEMBER(isz_remap_line_start_name, server::CPointValueRemapper, CUtlSymbolLarge);
				MEMBER(isz_remap_line_end_name, server::CPointValueRemapper, CUtlSymbolLarge);
				MEMBER(h_remap_line_start, server::CPointValueRemapper, chandle<server::CBaseEntity>);
				MEMBER(h_remap_line_end, server::CPointValueRemapper, chandle<server::CBaseEntity>);
				MEMBER(fl_maximum_change_per_second, server::CPointValueRemapper, float);
				MEMBER(fl_disengage_distance, server::CPointValueRemapper, float);
				MEMBER(fl_engage_distance, server::CPointValueRemapper, float);
				MEMBER(b_requires_use_key, server::CPointValueRemapper, bool);
				MEMBER(n_output_type, server::CPointValueRemapper, client::ValueRemapperOutputType_t);
				MEMBER(isz_output_entity_name, server::CPointValueRemapper, CUtlSymbolLarge);
				MEMBER(isz_output_entity2_name, server::CPointValueRemapper, CUtlSymbolLarge);
				MEMBER(isz_output_entity3_name, server::CPointValueRemapper, CUtlSymbolLarge);
				MEMBER(isz_output_entity4_name, server::CPointValueRemapper, CUtlSymbolLarge);
				MEMBER(h_output_entities, server::CPointValueRemapper, CNetworkUtlVectorBase<chandle<server::CBaseEntity>>);
				MEMBER(n_haptics_type, server::CPointValueRemapper, client::ValueRemapperHapticsType_t);
				MEMBER(n_momentum_type, server::CPointValueRemapper, client::ValueRemapperMomentumType_t);
				MEMBER(fl_momentum_modifier, server::CPointValueRemapper, float);
				MEMBER(fl_snap_value, server::CPointValueRemapper, float);
				MEMBER(fl_current_momentum, server::CPointValueRemapper, float);
				MEMBER(n_ratchet_type, server::CPointValueRemapper, client::ValueRemapperRatchetType_t);
				MEMBER(fl_ratchet_offset, server::CPointValueRemapper, float);
				MEMBER(fl_input_offset, server::CPointValueRemapper, float);
				MEMBER(b_engaged, server::CPointValueRemapper, bool);
				MEMBER(b_first_update, server::CPointValueRemapper, bool);
				MEMBER(fl_previous_value, server::CPointValueRemapper, float);
				MEMBER(fl_previous_update_tick_time, server::CPointValueRemapper, entity2::GameTime_t);
				MEMBER(vec_previous_test_point, server::CPointValueRemapper, Vector);
				MEMBER(h_using_player, server::CPointValueRemapper, chandle<server::CBasePlayerPawn>);
				MEMBER(fl_custom_output_value, server::CPointValueRemapper, float);
				MEMBER(isz_sound_engage, server::CPointValueRemapper, CUtlSymbolLarge);
				MEMBER(isz_sound_disengage, server::CPointValueRemapper, CUtlSymbolLarge);
				MEMBER(isz_sound_reached_value_zero, server::CPointValueRemapper, CUtlSymbolLarge);
				MEMBER(isz_sound_reached_value_one, server::CPointValueRemapper, CUtlSymbolLarge);
				MEMBER(isz_sound_moving_loop, server::CPointValueRemapper, CUtlSymbolLarge);
				MEMBER(position, server::CPointValueRemapper, CEntityOutputTemplate<float>);
				MEMBER(position_delta, server::CPointValueRemapper, CEntityOutputTemplate<float>);
				MEMBER(on_reached_value_zero, server::CPointValueRemapper, entity2::CEntityIOOutput);
				MEMBER(on_reached_value_one, server::CPointValueRemapper, entity2::CEntityIOOutput);
				MEMBER(on_reached_value_custom, server::CPointValueRemapper, entity2::CEntityIOOutput);
				MEMBER(on_engage, server::CPointValueRemapper, entity2::CEntityIOOutput);
				MEMBER(on_disengage, server::CPointValueRemapper, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointValueRemapper

			class CPointServerCommand : public server::CPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointServerCommand

			class CLogicalEntity : public server::CServerOnlyEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicalEntity

			class CFuncTrain : public server::CBasePlatTrain {
				MEMBER(h_current_target, server::CFuncTrain, chandle<server::CBaseEntity>);
				MEMBER(activated, server::CFuncTrain, bool);
				MEMBER(h_enemy, server::CFuncTrain, chandle<server::CBaseEntity>);
				MEMBER(fl_block_damage, server::CFuncTrain, float);
				MEMBER(fl_next_block_time, server::CFuncTrain, entity2::GameTime_t);
				MEMBER(isz_last_target, server::CFuncTrain, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncTrain

			class CEntityDissolve : public server::CBaseModelEntity {
				MEMBER(fl_fade_in_start, server::CEntityDissolve, float);
				MEMBER(fl_fade_in_length, server::CEntityDissolve, float);
				MEMBER(fl_fade_out_model_start, server::CEntityDissolve, float);
				MEMBER(fl_fade_out_model_length, server::CEntityDissolve, float);
				MEMBER(fl_fade_out_start, server::CEntityDissolve, float);
				MEMBER(fl_fade_out_length, server::CEntityDissolve, float);
				MEMBER(fl_start_time, server::CEntityDissolve, entity2::GameTime_t);
				MEMBER(n_dissolve_type, server::CEntityDissolve, client::EntityDisolveType_t);
				MEMBER(v_dissolver_origin, server::CEntityDissolve, Vector);
				MEMBER(n_magnitude, server::CEntityDissolve, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEntityDissolve

			class CPhysicsProp : public server::CBreakableProp {
				MEMBER(motion_enabled, server::CPhysicsProp, entity2::CEntityIOOutput);
				MEMBER(on_awakened, server::CPhysicsProp, entity2::CEntityIOOutput);
				MEMBER(on_awake, server::CPhysicsProp, entity2::CEntityIOOutput);
				MEMBER(on_asleep, server::CPhysicsProp, entity2::CEntityIOOutput);
				MEMBER(on_player_use, server::CPhysicsProp, entity2::CEntityIOOutput);
				MEMBER(on_out_of_world, server::CPhysicsProp, entity2::CEntityIOOutput);
				MEMBER(on_player_pickup, server::CPhysicsProp, entity2::CEntityIOOutput);
				MEMBER(b_force_nav_ignore, server::CPhysicsProp, bool);
				MEMBER(b_no_navmesh_blocker, server::CPhysicsProp, bool);
				MEMBER(b_force_npc_exclude, server::CPhysicsProp, bool);
				MEMBER(mass_scale, server::CPhysicsProp, float);
				MEMBER(inertia_scale, server::CPhysicsProp, float);
				MEMBER(buoyancy_scale, server::CPhysicsProp, float);
				MEMBER(damage_type, server::CPhysicsProp, int32_t);
				MEMBER(damage_to_enable_motion, server::CPhysicsProp, int32_t);
				MEMBER(fl_force_to_enable_motion, server::CPhysicsProp, float);
				MEMBER(b_thrown_by_player, server::CPhysicsProp, bool);
				MEMBER(b_dropped_by_player, server::CPhysicsProp, bool);
				MEMBER(b_touched_by_player, server::CPhysicsProp, bool);
				MEMBER(b_first_collision_after_launch, server::CPhysicsProp, bool);
				MEMBER(i_exploitable_by_player, server::CPhysicsProp, int32_t);
				MEMBER(b_has_been_awakened, server::CPhysicsProp, bool);
				MEMBER(b_is_override_prop, server::CPhysicsProp, bool);
				MEMBER(f_next_check_disable_motion_contacts_time, server::CPhysicsProp, entity2::GameTime_t);
				MEMBER(i_initial_glow_state, server::CPhysicsProp, int32_t);
				MEMBER(n_glow_range, server::CPhysicsProp, int32_t);
				MEMBER(n_glow_range_min, server::CPhysicsProp, int32_t);
				MEMBER(glow_color, server::CPhysicsProp, Color);
				MEMBER(b_should_auto_convert_back_from_debris, server::CPhysicsProp, bool);
				MEMBER(b_mute_impact_effects, server::CPhysicsProp, bool);
				MEMBER(b_accept_damage_from_held_objects, server::CPhysicsProp, bool);
				MEMBER(b_enable_use_output, server::CPhysicsProp, bool);
				MEMBER(crate_type, server::CPhysicsProp, server::CPhysicsProp_CrateType_t);
				MEMBER_ARR(str_item_class, server::CPhysicsProp, 4, CUtlSymbolLarge);
				MEMBER_ARR(n_item_count, server::CPhysicsProp, 4, int32_t);
				MEMBER(b_removable_for_ammo_balancing, server::CPhysicsProp, bool);
				MEMBER(b_awake, server::CPhysicsProp, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysicsProp

			class CSceneListManager : public server::CLogicalEntity {
				MEMBER(h_list_managers, server::CSceneListManager, cutl_vector<chandle<server::CSceneListManager>>);
				MEMBER_ARR(isz_scenes, server::CSceneListManager, 16, CUtlSymbolLarge);
				MEMBER_ARR(h_scenes, server::CSceneListManager, 16, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSceneListManager

			class CPlayer_ItemServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_ItemServices

			class CWeaponSCAR20 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponSCAR20

			class CFuncWallToggle : public server::CFuncWall {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncWallToggle

			class CSensorGrenadeProjectile : public server::CBaseCSGrenadeProjectile {
				MEMBER(f_expire_time, server::CSensorGrenadeProjectile, entity2::GameTime_t);
				MEMBER(f_next_detect_player_sound, server::CSensorGrenadeProjectile, entity2::GameTime_t);
				MEMBER(h_display_grenade, server::CSensorGrenadeProjectile, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSensorGrenadeProjectile

			class CLogicNPCCounter : public server::CBaseEntity {
				MEMBER(on_min_count_all, server::CLogicNPCCounter, entity2::CEntityIOOutput);
				MEMBER(on_max_count_all, server::CLogicNPCCounter, entity2::CEntityIOOutput);
				MEMBER(on_factor_all, server::CLogicNPCCounter, CEntityOutputTemplate<float>);
				MEMBER(on_min_player_dist_all, server::CLogicNPCCounter, CEntityOutputTemplate<float>);
				MEMBER(on_min_count_1, server::CLogicNPCCounter, entity2::CEntityIOOutput);
				MEMBER(on_max_count_1, server::CLogicNPCCounter, entity2::CEntityIOOutput);
				MEMBER(on_factor_1, server::CLogicNPCCounter, CEntityOutputTemplate<float>);
				MEMBER(on_min_player_dist_1, server::CLogicNPCCounter, CEntityOutputTemplate<float>);
				MEMBER(on_min_count_2, server::CLogicNPCCounter, entity2::CEntityIOOutput);
				MEMBER(on_max_count_2, server::CLogicNPCCounter, entity2::CEntityIOOutput);
				MEMBER(on_factor_2, server::CLogicNPCCounter, CEntityOutputTemplate<float>);
				MEMBER(on_min_player_dist_2, server::CLogicNPCCounter, CEntityOutputTemplate<float>);
				MEMBER(on_min_count_3, server::CLogicNPCCounter, entity2::CEntityIOOutput);
				MEMBER(on_max_count_3, server::CLogicNPCCounter, entity2::CEntityIOOutput);
				MEMBER(on_factor_3, server::CLogicNPCCounter, CEntityOutputTemplate<float>);
				MEMBER(on_min_player_dist_3, server::CLogicNPCCounter, CEntityOutputTemplate<float>);
				MEMBER(h_source, server::CLogicNPCCounter, CEntityHandle);
				MEMBER(isz_source_entity_name, server::CLogicNPCCounter, CUtlSymbolLarge);
				MEMBER(fl_distance_max, server::CLogicNPCCounter, float);
				MEMBER(b_disabled, server::CLogicNPCCounter, bool);
				MEMBER(n_min_count_all, server::CLogicNPCCounter, int32_t);
				MEMBER(n_max_count_all, server::CLogicNPCCounter, int32_t);
				MEMBER(n_min_factor_all, server::CLogicNPCCounter, int32_t);
				MEMBER(n_max_factor_all, server::CLogicNPCCounter, int32_t);
				MEMBER(isz_npcclassname_1, server::CLogicNPCCounter, CUtlSymbolLarge);
				MEMBER(n_npcstate_1, server::CLogicNPCCounter, int32_t);
				MEMBER(b_invert_state_1, server::CLogicNPCCounter, bool);
				MEMBER(n_min_count_1, server::CLogicNPCCounter, int32_t);
				MEMBER(n_max_count_1, server::CLogicNPCCounter, int32_t);
				MEMBER(n_min_factor_1, server::CLogicNPCCounter, int32_t);
				MEMBER(n_max_factor_1, server::CLogicNPCCounter, int32_t);
				MEMBER(fl_default_dist_1, server::CLogicNPCCounter, float);
				MEMBER(isz_npcclassname_2, server::CLogicNPCCounter, CUtlSymbolLarge);
				MEMBER(n_npcstate_2, server::CLogicNPCCounter, int32_t);
				MEMBER(b_invert_state_2, server::CLogicNPCCounter, bool);
				MEMBER(n_min_count_2, server::CLogicNPCCounter, int32_t);
				MEMBER(n_max_count_2, server::CLogicNPCCounter, int32_t);
				MEMBER(n_min_factor_2, server::CLogicNPCCounter, int32_t);
				MEMBER(n_max_factor_2, server::CLogicNPCCounter, int32_t);
				MEMBER(fl_default_dist_2, server::CLogicNPCCounter, float);
				MEMBER(isz_npcclassname_3, server::CLogicNPCCounter, CUtlSymbolLarge);
				MEMBER(n_npcstate_3, server::CLogicNPCCounter, int32_t);
				MEMBER(b_invert_state_3, server::CLogicNPCCounter, bool);
				MEMBER(n_min_count_3, server::CLogicNPCCounter, int32_t);
				MEMBER(n_max_count_3, server::CLogicNPCCounter, int32_t);
				MEMBER(n_min_factor_3, server::CLogicNPCCounter, int32_t);
				MEMBER(n_max_factor_3, server::CLogicNPCCounter, int32_t);
				MEMBER(fl_default_dist_3, server::CLogicNPCCounter, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicNPCCounter

			class CCSGO_WingmanIntroCharacterPosition : public server::CCSGO_TeamIntroCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGO_WingmanIntroCharacterPosition

			class CTriggerTeleport : public server::CBaseTrigger {
				MEMBER(i_landmark, server::CTriggerTeleport, CUtlSymbolLarge);
				MEMBER(b_use_landmark_angles, server::CTriggerTeleport, bool);
				MEMBER(b_mirror_player, server::CTriggerTeleport, bool);
				MEMBER(b_check_dest_if_clear_for_player, server::CTriggerTeleport, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerTeleport

			class CScriptedSequence : public server::CBaseEntity {
				MEMBER(isz_entry, server::CScriptedSequence, CUtlSymbolLarge);
				MEMBER(isz_pre_idle, server::CScriptedSequence, CUtlSymbolLarge);
				MEMBER(isz_play, server::CScriptedSequence, CUtlSymbolLarge);
				MEMBER(isz_post_idle, server::CScriptedSequence, CUtlSymbolLarge);
				MEMBER(isz_modifier_to_add_on_play, server::CScriptedSequence, CUtlSymbolLarge);
				MEMBER(isz_next_script, server::CScriptedSequence, CUtlSymbolLarge);
				MEMBER(isz_entity, server::CScriptedSequence, CUtlSymbolLarge);
				MEMBER(isz_sync_group, server::CScriptedSequence, CUtlSymbolLarge);
				MEMBER(n_move_to, server::CScriptedSequence, client::ScriptedMoveTo_t);
				MEMBER(n_move_to_gait, server::CScriptedSequence, modellib::MovementGait_t);
				MEMBER(n_held_weapon_behavior, server::CScriptedSequence, client::ScriptedHeldWeaponBehavior_t);
				MEMBER(b_is_playing_pre_idle, server::CScriptedSequence, bool);
				MEMBER(b_is_playing_entry, server::CScriptedSequence, bool);
				MEMBER(b_is_playing_action, server::CScriptedSequence, bool);
				MEMBER(b_is_playing_post_idle, server::CScriptedSequence, bool);
				MEMBER(b_dont_rotate_other, server::CScriptedSequence, bool);
				MEMBER(b_is_repeatable, server::CScriptedSequence, bool);
				MEMBER(b_should_leave_corpse, server::CScriptedSequence, bool);
				MEMBER(b_start_on_spawn, server::CScriptedSequence, bool);
				MEMBER(b_disallow_interrupts, server::CScriptedSequence, bool);
				MEMBER(b_can_override_npcstate, server::CScriptedSequence, bool);
				MEMBER(b_dont_teleport_at_end, server::CScriptedSequence, bool);
				MEMBER(b_high_priority, server::CScriptedSequence, bool);
				MEMBER(b_hide_debug_complaints, server::CScriptedSequence, bool);
				MEMBER(b_continue_on_death, server::CScriptedSequence, bool);
				MEMBER(b_loop_pre_idle_sequence, server::CScriptedSequence, bool);
				MEMBER(b_loop_action_sequence, server::CScriptedSequence, bool);
				MEMBER(b_loop_post_idle_sequence, server::CScriptedSequence, bool);
				MEMBER(b_synch_post_idles, server::CScriptedSequence, bool);
				MEMBER(b_ignore_look_at, server::CScriptedSequence, bool);
				MEMBER(b_ignore_gravity, server::CScriptedSequence, bool);
				MEMBER(b_disable_npccollisions, server::CScriptedSequence, bool);
				MEMBER(b_keep_animgraph_locked_post, server::CScriptedSequence, bool);
				MEMBER(b_dont_add_modifiers, server::CScriptedSequence, bool);
				MEMBER(fl_radius, server::CScriptedSequence, float);
				MEMBER(fl_repeat, server::CScriptedSequence, float);
				MEMBER(fl_play_anim_fade_in_time, server::CScriptedSequence, float);
				MEMBER(fl_move_interp_time, server::CScriptedSequence, float);
				MEMBER(fl_ang_rate, server::CScriptedSequence, float);
				MEMBER(b_wait_until_move_completes_to_start_animation, server::CScriptedSequence, bool);
				MEMBER(n_not_ready_sequence_count, server::CScriptedSequence, int32_t);
				MEMBER(start_time, server::CScriptedSequence, entity2::GameTime_t);
				MEMBER(b_wait_for_begin_sequence, server::CScriptedSequence, bool);
				MEMBER(saved_effects, server::CScriptedSequence, int32_t);
				MEMBER(saved_flags, server::CScriptedSequence, int32_t);
				MEMBER(saved_collision_group, server::CScriptedSequence, int32_t);
				MEMBER(b_interruptable, server::CScriptedSequence, bool);
				MEMBER(sequence_started, server::CScriptedSequence, bool);
				MEMBER(b_position_relative_to_other_entity, server::CScriptedSequence, bool);
				MEMBER(h_target_ent, server::CScriptedSequence, chandle<server::CBaseEntity>);
				MEMBER(h_next_cine, server::CScriptedSequence, chandle<server::CScriptedSequence>);
				MEMBER(b_thinking, server::CScriptedSequence, bool);
				MEMBER(b_initiated_self_delete, server::CScriptedSequence, bool);
				MEMBER(b_is_teleporting_due_to_move_to, server::CScriptedSequence, bool);
				MEMBER(b_allow_custom_interrupt_conditions, server::CScriptedSequence, bool);
				MEMBER(h_forced_target, server::CScriptedSequence, chandle<server::CBaseAnimGraph>);
				MEMBER(b_dont_cancel_other_sequences, server::CScriptedSequence, bool);
				MEMBER(b_force_synch, server::CScriptedSequence, bool);
				MEMBER(b_prevent_update_yaw_on_finish, server::CScriptedSequence, bool);
				MEMBER(b_ensure_on_navmesh_on_finish, server::CScriptedSequence, bool);
				MEMBER(on_death_behavior, server::CScriptedSequence, client::ScriptedOnDeath_t);
				MEMBER(conflict_response, server::CScriptedSequence, server::ScriptedConflictResponse_t);
				MEMBER(on_begin_sequence, server::CScriptedSequence, entity2::CEntityIOOutput);
				MEMBER(on_action_start_or_loop, server::CScriptedSequence, entity2::CEntityIOOutput);
				MEMBER(on_end_sequence, server::CScriptedSequence, entity2::CEntityIOOutput);
				MEMBER(on_post_idle_end_sequence, server::CScriptedSequence, entity2::CEntityIOOutput);
				MEMBER(on_cancel_sequence, server::CScriptedSequence, entity2::CEntityIOOutput);
				MEMBER(on_cancel_failed_sequence, server::CScriptedSequence, entity2::CEntityIOOutput);
				MEMBER_ARR(on_script_event, server::CScriptedSequence, 8, entity2::CEntityIOOutput);
				MEMBER(mat_other_to_main, server::CScriptedSequence, CTransform);
				MEMBER(h_interaction_main_entity, server::CScriptedSequence, chandle<server::CBaseEntity>);
				MEMBER(i_player_death_behavior, server::CScriptedSequence, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CScriptedSequence

			class CFuncLadderAlias_func_useableladder : public server::CFuncLadder {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncLadderAlias_func_useableladder

			class CEnvParticleGlow : public server::CParticleSystem {
				MEMBER(fl_alpha_scale, server::CEnvParticleGlow, float);
				MEMBER(fl_radius_scale, server::CEnvParticleGlow, float);
				MEMBER(fl_self_illum_scale, server::CEnvParticleGlow, float);
				MEMBER(color_tint, server::CEnvParticleGlow, Color);
				MEMBER(h_texture_override, server::CEnvParticleGlow, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvParticleGlow

			class CTriggerSndSosOpvar : public server::CBaseTrigger {
				MEMBER(h_touching_players, server::CTriggerSndSosOpvar, cutl_vector<chandle<server::CBaseEntity>>);
				MEMBER(fl_position, server::CTriggerSndSosOpvar, Vector);
				MEMBER(fl_center_size, server::CTriggerSndSosOpvar, float);
				MEMBER(fl_min_val, server::CTriggerSndSosOpvar, float);
				MEMBER(fl_max_val, server::CTriggerSndSosOpvar, float);
				MEMBER(opvar_name, server::CTriggerSndSosOpvar, CUtlSymbolLarge);
				MEMBER(stack_name, server::CTriggerSndSosOpvar, CUtlSymbolLarge);
				MEMBER(operator_name, server::CTriggerSndSosOpvar, CUtlSymbolLarge);
				MEMBER(b_vol_is2_d, server::CTriggerSndSosOpvar, bool);
				MEMBER_ARR(opvar_name_char, server::CTriggerSndSosOpvar, 256, char);
				MEMBER_ARR(stack_name_char, server::CTriggerSndSosOpvar, 256, char);
				MEMBER_ARR(operator_name_char, server::CTriggerSndSosOpvar, 256, char);
				MEMBER(vec_norm_pos, server::CTriggerSndSosOpvar, Vector);
				MEMBER(fl_norm_center_size, server::CTriggerSndSosOpvar, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerSndSosOpvar

			class CItemAssaultSuit : public server::CItem {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CItemAssaultSuit

			class CBaseFilter : public server::CLogicalEntity {
				MEMBER(b_negated, server::CBaseFilter, bool);
				MEMBER(on_pass, server::CBaseFilter, entity2::CEntityIOOutput);
				MEMBER(on_fail, server::CBaseFilter, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseFilter

			class CTripWireFire : public server::CBaseCSGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTripWireFire

			class CPulseCell_Outflow_ListenForEntityOutput : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow {
				MEMBER(on_fired, server::CPulseCell_Outflow_ListenForEntityOutput, pulse_runtime_lib::SignatureOutflow_Resume);
				MEMBER(on_canceled, server::CPulseCell_Outflow_ListenForEntityOutput, pulse_runtime_lib::CPulse_ResumePoint);
				MEMBER(str_entity_output, server::CPulseCell_Outflow_ListenForEntityOutput, CGlobalSymbol);
				MEMBER(str_entity_output_param, server::CPulseCell_Outflow_ListenForEntityOutput, CUtlString);
				MEMBER(b_listen_until_canceled, server::CPulseCell_Outflow_ListenForEntityOutput, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Outflow_ListenForEntityOutput

			class CRagdollConstraint : public server::CPhysConstraint {
				MEMBER(xmin, server::CRagdollConstraint, float);
				MEMBER(xmax, server::CRagdollConstraint, float);
				MEMBER(ymin, server::CRagdollConstraint, float);
				MEMBER(ymax, server::CRagdollConstraint, float);
				MEMBER(zmin, server::CRagdollConstraint, float);
				MEMBER(zmax, server::CRagdollConstraint, float);
				MEMBER(xfriction, server::CRagdollConstraint, float);
				MEMBER(yfriction, server::CRagdollConstraint, float);
				MEMBER(zfriction, server::CRagdollConstraint, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRagdollConstraint

			class CBreakableProp : public server::CBaseProp {
				MEMBER(cprop_data_component, server::CBreakableProp, server::CPropDataComponent);
				MEMBER(on_break, server::CBreakableProp, entity2::CEntityIOOutput);
				MEMBER(on_health_changed, server::CBreakableProp, CEntityOutputTemplate<float>);
				MEMBER(on_take_damage, server::CBreakableProp, entity2::CEntityIOOutput);
				MEMBER(impact_energy_scale, server::CBreakableProp, float);
				MEMBER(i_min_health_dmg, server::CBreakableProp, int32_t);
				MEMBER(preferred_carry_angles, server::CBreakableProp, QAngle);
				MEMBER(fl_pressure_delay, server::CBreakableProp, float);
				MEMBER(fl_def_burst_scale, server::CBreakableProp, float);
				MEMBER(v_def_burst_offset, server::CBreakableProp, Vector);
				MEMBER(h_breaker, server::CBreakableProp, chandle<server::CBaseEntity>);
				MEMBER(performance_mode, server::CBreakableProp, client::PerformanceMode_t);
				MEMBER(fl_prevent_damage_before_time, server::CBreakableProp, entity2::GameTime_t);
				MEMBER(breakable_contents_type, server::CBreakableProp, client::BreakableContentsType_t);
				MEMBER(str_breakable_contents_prop_group_override, server::CBreakableProp, CUtlString);
				MEMBER(str_breakable_contents_particle_override, server::CBreakableProp, CUtlString);
				MEMBER(b_has_break_pieces_or_commands, server::CBreakableProp, bool);
				MEMBER(explode_damage, server::CBreakableProp, float);
				MEMBER(explode_radius, server::CBreakableProp, float);
				MEMBER(explosion_delay, server::CBreakableProp, float);
				MEMBER(explosion_buildup_sound, server::CBreakableProp, CUtlSymbolLarge);
				MEMBER(explosion_custom_effect, server::CBreakableProp, CUtlSymbolLarge);
				MEMBER(explosion_custom_sound, server::CBreakableProp, CUtlSymbolLarge);
				MEMBER(explosion_modifier, server::CBreakableProp, CUtlSymbolLarge);
				MEMBER(h_physics_attacker, server::CBreakableProp, chandle<server::CBasePlayerPawn>);
				MEMBER(fl_last_physics_influence_time, server::CBreakableProp, entity2::GameTime_t);
				MEMBER(b_original_block_los, server::CBreakableProp, bool);
				MEMBER(fl_default_fade_scale, server::CBreakableProp, float);
				MEMBER(h_last_attacker, server::CBreakableProp, chandle<server::CBaseEntity>);
				MEMBER(h_flare_ent, server::CBreakableProp, chandle<server::CBaseEntity>);
				MEMBER(b_use_punt_sound, server::CBreakableProp, bool);
				MEMBER(isz_punt_sound, server::CBreakableProp, CUtlSymbolLarge);
				MEMBER(no_ghost_collision, server::CBreakableProp, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBreakableProp

			class CWeaponGalilAR : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponGalilAR

			class CCSPlayer_DamageReactServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_DamageReactServices

			class CEnvProjectedTexture : public server::CModelPointEntity {
				MEMBER(h_target_entity, server::CEnvProjectedTexture, chandle<server::CBaseEntity>);
				MEMBER(b_state, server::CEnvProjectedTexture, bool);
				MEMBER(b_always_update, server::CEnvProjectedTexture, bool);
				MEMBER(fl_light_fov, server::CEnvProjectedTexture, float);
				MEMBER(b_enable_shadows, server::CEnvProjectedTexture, bool);
				MEMBER(b_simple_projection, server::CEnvProjectedTexture, bool);
				MEMBER(b_light_only_target, server::CEnvProjectedTexture, bool);
				MEMBER(b_light_world, server::CEnvProjectedTexture, bool);
				MEMBER(b_camera_space, server::CEnvProjectedTexture, bool);
				MEMBER(fl_brightness_scale, server::CEnvProjectedTexture, float);
				MEMBER(light_color, server::CEnvProjectedTexture, Color);
				MEMBER(fl_intensity, server::CEnvProjectedTexture, float);
				MEMBER(fl_linear_attenuation, server::CEnvProjectedTexture, float);
				MEMBER(fl_quadratic_attenuation, server::CEnvProjectedTexture, float);
				MEMBER(b_volumetric, server::CEnvProjectedTexture, bool);
				MEMBER(fl_noise_strength, server::CEnvProjectedTexture, float);
				MEMBER(fl_flashlight_time, server::CEnvProjectedTexture, float);
				MEMBER(n_num_planes, server::CEnvProjectedTexture, uint32_t);
				MEMBER(fl_plane_offset, server::CEnvProjectedTexture, float);
				MEMBER(fl_volumetric_intensity, server::CEnvProjectedTexture, float);
				MEMBER(fl_color_transition_time, server::CEnvProjectedTexture, float);
				MEMBER(fl_ambient, server::CEnvProjectedTexture, float);
				MEMBER_ARR(spotlight_texture_name, server::CEnvProjectedTexture, 512, char);
				MEMBER(n_spotlight_texture_frame, server::CEnvProjectedTexture, int32_t);
				MEMBER(n_shadow_quality, server::CEnvProjectedTexture, uint32_t);
				MEMBER(fl_near_z, server::CEnvProjectedTexture, float);
				MEMBER(fl_far_z, server::CEnvProjectedTexture, float);
				MEMBER(fl_projection_size, server::CEnvProjectedTexture, float);
				MEMBER(fl_rotation, server::CEnvProjectedTexture, float);
				MEMBER(b_flip_horizontal, server::CEnvProjectedTexture, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvProjectedTexture

			class CDynamicPropAlias_prop_dynamic_override : public server::CDynamicProp {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDynamicPropAlias_prop_dynamic_override

			class CSplineConstraint : public server::CPhysConstraint {
				MEMBER(v_anchor_offset_restore, server::CSplineConstraint, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSplineConstraint

			class CFuncTimescale : public server::CBaseEntity {
				MEMBER(fl_desired_timescale, server::CFuncTimescale, float);
				MEMBER(fl_acceleration, server::CFuncTimescale, float);
				MEMBER(fl_min_blend_rate, server::CFuncTimescale, float);
				MEMBER(fl_blend_delta_multiplier, server::CFuncTimescale, float);
				MEMBER(is_started, server::CFuncTimescale, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncTimescale

			class CCSObserver_ViewModelServices : public server::CPlayer_ViewModelServices {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSObserver_ViewModelServices

			class CDynamicPropAlias_dynamic_prop : public server::CDynamicProp {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDynamicPropAlias_dynamic_prop

			class CLogicScript : public server::CPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicScript

			class CPhysicsPropMultiplayer : public server::CPhysicsProp {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysicsPropMultiplayer

			class CFlashbang : public server::CBaseCSGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFlashbang

			class CServerOnlyEntity : public server::CBaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CServerOnlyEntity

			class CSimpleMarkupVolumeTagged : public server::CMarkupVolumeTagged {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSimpleMarkupVolumeTagged

			class CTriggerSave : public server::CBaseTrigger {
				MEMBER(b_force_new_level_unit, server::CTriggerSave, bool);
				MEMBER(f_dangerous_timer, server::CTriggerSave, float);
				MEMBER(min_hit_points, server::CTriggerSave, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerSave

			class CPhysHingeAlias_phys_hinge_local : public server::CPhysHinge {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysHingeAlias_phys_hinge_local

			class CTankTargetChange : public server::CPointEntity {
				MEMBER(new_target, server::CTankTargetChange, CVariantBase<entity2::CVariantDefaultAllocator>);
				MEMBER(new_target_name, server::CTankTargetChange, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTankTargetChange

			class CFilterContext : public server::CBaseFilter {
				MEMBER(i_filter_context, server::CFilterContext, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFilterContext

			class CScriptNavBlocker : public server::CFuncNavBlocker {
				MEMBER(v_extent, server::CScriptNavBlocker, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CScriptNavBlocker

			class CCSPlayer_BulletServices : public client::CPlayerPawnComponent {
				MEMBER(total_hits_on_server, server::CCSPlayer_BulletServices, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_BulletServices

			class CPhysMotor : public server::CLogicalEntity {
				MEMBER(name_attach, server::CPhysMotor, CUtlSymbolLarge);
				MEMBER(h_attached_object, server::CPhysMotor, chandle<server::CBaseEntity>);
				MEMBER(spin_up, server::CPhysMotor, float);
				MEMBER(additional_acceleration, server::CPhysMotor, float);
				MEMBER(angular_acceleration, server::CPhysMotor, float);
				MEMBER(last_time, server::CPhysMotor, entity2::GameTime_t);
				MEMBER(motor, server::CPhysMotor, server::CMotorController);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysMotor

			class CWeaponMP5SD : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponMP5SD

			class CAK47 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAK47

			class CLogicRelay : public server::CLogicalEntity {
				MEMBER(on_trigger, server::CLogicRelay, entity2::CEntityIOOutput);
				MEMBER(on_spawn, server::CLogicRelay, entity2::CEntityIOOutput);
				MEMBER(b_disabled, server::CLogicRelay, bool);
				MEMBER(b_wait_for_refire, server::CLogicRelay, bool);
				MEMBER(b_trigger_once, server::CLogicRelay, bool);
				MEMBER(b_fast_retrigger, server::CLogicRelay, bool);
				MEMBER(b_passthough_caller, server::CLogicRelay, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicRelay

			class CGameChoreoServices : public client::IChoreoServices {
				MEMBER(h_owner, server::CGameChoreoServices, chandle<server::CBaseAnimGraph>);
				MEMBER(h_scripted_sequence, server::CGameChoreoServices, chandle<server::CScriptedSequence>);
				MEMBER(script_state, server::CGameChoreoServices, client::IChoreoServices_ScriptState_t);
				MEMBER(choreo_state, server::CGameChoreoServices, client::IChoreoServices_ChoreoState_t);
				MEMBER(fl_time_started_state, server::CGameChoreoServices, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGameChoreoServices

			class CChangeLevel : public server::CBaseTrigger {
				MEMBER(s_map_name, server::CChangeLevel, CUtlString);
				MEMBER(s_landmark_name, server::CChangeLevel, CUtlString);
				MEMBER(on_change_level, server::CChangeLevel, entity2::CEntityIOOutput);
				MEMBER(b_touched, server::CChangeLevel, bool);
				MEMBER(b_no_touch, server::CChangeLevel, bool);
				MEMBER(b_new_chapter, server::CChangeLevel, bool);
				MEMBER(b_on_change_level_fired, server::CChangeLevel, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CChangeLevel

			class CSoundOpvarSetPointEntity : public server::CSoundOpvarSetPointBase {
				MEMBER(on_enter, server::CSoundOpvarSetPointEntity, entity2::CEntityIOOutput);
				MEMBER(on_exit, server::CSoundOpvarSetPointEntity, entity2::CEntityIOOutput);
				MEMBER(b_auto_disable, server::CSoundOpvarSetPointEntity, bool);
				MEMBER(fl_distance_min, server::CSoundOpvarSetPointEntity, float);
				MEMBER(fl_distance_max, server::CSoundOpvarSetPointEntity, float);
				MEMBER(fl_distance_map_min, server::CSoundOpvarSetPointEntity, float);
				MEMBER(fl_distance_map_max, server::CSoundOpvarSetPointEntity, float);
				MEMBER(fl_occlusion_radius, server::CSoundOpvarSetPointEntity, float);
				MEMBER(fl_occlusion_min, server::CSoundOpvarSetPointEntity, float);
				MEMBER(fl_occlusion_max, server::CSoundOpvarSetPointEntity, float);
				MEMBER(fl_val_set_on_disable, server::CSoundOpvarSetPointEntity, float);
				MEMBER(b_set_value_on_disable, server::CSoundOpvarSetPointEntity, bool);
				MEMBER(b_reloading, server::CSoundOpvarSetPointEntity, bool);
				MEMBER(n_simulation_mode, server::CSoundOpvarSetPointEntity, int32_t);
				MEMBER(n_visibility_samples, server::CSoundOpvarSetPointEntity, int32_t);
				MEMBER(v_dynamic_proxy_point, server::CSoundOpvarSetPointEntity, Vector);
				MEMBER(fl_dynamic_maximum_occlusion, server::CSoundOpvarSetPointEntity, float);
				MEMBER(h_dynamic_entity, server::CSoundOpvarSetPointEntity, CEntityHandle);
				MEMBER(isz_dynamic_entity_name, server::CSoundOpvarSetPointEntity, CUtlSymbolLarge);
				MEMBER(fl_pathing_distance_norm_factor, server::CSoundOpvarSetPointEntity, float);
				MEMBER(v_pathing_source_pos, server::CSoundOpvarSetPointEntity, Vector);
				MEMBER(v_pathing_listener_pos, server::CSoundOpvarSetPointEntity, Vector);
				MEMBER(v_pathing_direction, server::CSoundOpvarSetPointEntity, Vector);
				MEMBER(n_pathing_source_index, server::CSoundOpvarSetPointEntity, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundOpvarSetPointEntity

			class CTriggerPhysics : public server::CBaseTrigger {
				MEMBER(gravity_scale, server::CTriggerPhysics, float);
				MEMBER(linear_limit, server::CTriggerPhysics, float);
				MEMBER(linear_damping, server::CTriggerPhysics, float);
				MEMBER(angular_limit, server::CTriggerPhysics, float);
				MEMBER(angular_damping, server::CTriggerPhysics, float);
				MEMBER(linear_force, server::CTriggerPhysics, float);
				MEMBER(fl_frequency, server::CTriggerPhysics, float);
				MEMBER(fl_damping_ratio, server::CTriggerPhysics, float);
				MEMBER(vec_linear_force_point_at, server::CTriggerPhysics, Vector);
				MEMBER(b_collapse_to_force_point, server::CTriggerPhysics, bool);
				MEMBER(vec_linear_force_point_at_world, server::CTriggerPhysics, Vector);
				MEMBER(vec_linear_force_direction, server::CTriggerPhysics, Vector);
				MEMBER(b_convert_to_debris_when_possible, server::CTriggerPhysics, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerPhysics

			class CModelPointEntity : public server::CBaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CModelPointEntity

			class CPlayer_WaterServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_WaterServices

			class CFuncWater : public server::CBaseModelEntity {
				MEMBER(buoyancy_helper, server::CFuncWater, server::CBuoyancyHelper);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncWater

			class CCSGO_TeamIntroTerroristPosition : public server::CCSGO_TeamIntroCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGO_TeamIntroTerroristPosition

			class CTonemapController2 : public server::CBaseEntity {
				MEMBER(fl_auto_exposure_min, server::CTonemapController2, float);
				MEMBER(fl_auto_exposure_max, server::CTonemapController2, float);
				MEMBER(fl_tonemap_percent_target, server::CTonemapController2, float);
				MEMBER(fl_tonemap_percent_bright_pixels, server::CTonemapController2, float);
				MEMBER(fl_tonemap_min_avg_lum, server::CTonemapController2, float);
				MEMBER(fl_exposure_adaptation_speed_up, server::CTonemapController2, float);
				MEMBER(fl_exposure_adaptation_speed_down, server::CTonemapController2, float);
				MEMBER(fl_tonemap_evsmoothing_range, server::CTonemapController2, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTonemapController2

			class CWeaponXM1014 : public server::CCSWeaponBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponXM1014

			class CPlatTrigger : public server::CBaseModelEntity {
				MEMBER(p_platform, server::CPlatTrigger, chandle<server::CFuncPlat>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlatTrigger

			class CFilterClass : public server::CBaseFilter {
				MEMBER(i_filter_class, server::CFilterClass, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFilterClass

			class CMolotovGrenade : public server::CBaseCSGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMolotovGrenade

			class CLightComponent : public entity2::CEntityComponent {
				MEMBER(_m_p_chain_entity, server::CLightComponent, entity2::CNetworkVarChainer);
				MEMBER(color, server::CLightComponent, Color);
				MEMBER(secondary_color, server::CLightComponent, Color);
				MEMBER(fl_brightness, server::CLightComponent, float);
				MEMBER(fl_brightness_scale, server::CLightComponent, float);
				MEMBER(fl_brightness_mult, server::CLightComponent, float);
				MEMBER(fl_range, server::CLightComponent, float);
				MEMBER(fl_falloff, server::CLightComponent, float);
				MEMBER(fl_attenuation0, server::CLightComponent, float);
				MEMBER(fl_attenuation1, server::CLightComponent, float);
				MEMBER(fl_attenuation2, server::CLightComponent, float);
				MEMBER(fl_theta, server::CLightComponent, float);
				MEMBER(fl_phi, server::CLightComponent, float);
				MEMBER(h_light_cookie, server::CLightComponent, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(n_cascades, server::CLightComponent, int32_t);
				MEMBER(n_cast_shadows, server::CLightComponent, int32_t);
				MEMBER(n_shadow_width, server::CLightComponent, int32_t);
				MEMBER(n_shadow_height, server::CLightComponent, int32_t);
				MEMBER(b_render_diffuse, server::CLightComponent, bool);
				MEMBER(n_render_specular, server::CLightComponent, int32_t);
				MEMBER(b_render_transmissive, server::CLightComponent, bool);
				MEMBER(fl_ortho_light_width, server::CLightComponent, float);
				MEMBER(fl_ortho_light_height, server::CLightComponent, float);
				MEMBER(n_style, server::CLightComponent, int32_t);
				MEMBER(pattern, server::CLightComponent, CUtlString);
				MEMBER(n_cascade_render_static_objects, server::CLightComponent, int32_t);
				MEMBER(fl_shadow_cascade_cross_fade, server::CLightComponent, float);
				MEMBER(fl_shadow_cascade_distance_fade, server::CLightComponent, float);
				MEMBER(fl_shadow_cascade_distance0, server::CLightComponent, float);
				MEMBER(fl_shadow_cascade_distance1, server::CLightComponent, float);
				MEMBER(fl_shadow_cascade_distance2, server::CLightComponent, float);
				MEMBER(fl_shadow_cascade_distance3, server::CLightComponent, float);
				MEMBER(n_shadow_cascade_resolution0, server::CLightComponent, int32_t);
				MEMBER(n_shadow_cascade_resolution1, server::CLightComponent, int32_t);
				MEMBER(n_shadow_cascade_resolution2, server::CLightComponent, int32_t);
				MEMBER(n_shadow_cascade_resolution3, server::CLightComponent, int32_t);
				MEMBER(b_uses_baked_shadowing, server::CLightComponent, bool);
				MEMBER(n_shadow_priority, server::CLightComponent, int32_t);
				MEMBER(n_baked_shadow_index, server::CLightComponent, int32_t);
				MEMBER(b_render_to_cubemaps, server::CLightComponent, bool);
				MEMBER(n_direct_light, server::CLightComponent, int32_t);
				MEMBER(n_indirect_light, server::CLightComponent, int32_t);
				MEMBER(fl_fade_min_dist, server::CLightComponent, float);
				MEMBER(fl_fade_max_dist, server::CLightComponent, float);
				MEMBER(fl_shadow_fade_min_dist, server::CLightComponent, float);
				MEMBER(fl_shadow_fade_max_dist, server::CLightComponent, float);
				MEMBER(b_enabled, server::CLightComponent, bool);
				MEMBER(b_flicker, server::CLightComponent, bool);
				MEMBER(b_precomputed_fields_valid, server::CLightComponent, bool);
				MEMBER(v_precomputed_bounds_mins, server::CLightComponent, Vector);
				MEMBER(v_precomputed_bounds_maxs, server::CLightComponent, Vector);
				MEMBER(v_precomputed_obborigin, server::CLightComponent, Vector);
				MEMBER(v_precomputed_obbangles, server::CLightComponent, QAngle);
				MEMBER(v_precomputed_obbextent, server::CLightComponent, Vector);
				MEMBER(fl_precomputed_max_range, server::CLightComponent, float);
				MEMBER(n_fog_lighting_mode, server::CLightComponent, int32_t);
				MEMBER(fl_fog_contribution_stength, server::CLightComponent, float);
				MEMBER(fl_near_clip_plane, server::CLightComponent, float);
				MEMBER(sky_color, server::CLightComponent, Color);
				MEMBER(fl_sky_intensity, server::CLightComponent, float);
				MEMBER(sky_ambient_bounce, server::CLightComponent, Color);
				MEMBER(b_use_secondary_color, server::CLightComponent, bool);
				MEMBER(b_mixed_shadows, server::CLightComponent, bool);
				MEMBER(fl_light_style_start_time, server::CLightComponent, entity2::GameTime_t);
				MEMBER(fl_capsule_length, server::CLightComponent, float);
				MEMBER(fl_min_roughness, server::CLightComponent, float);
				MEMBER(b_pvs_modify_entity, server::CLightComponent, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLightComponent

			class CHandleDummy : public server::CBaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHandleDummy

			class CPointHurt : public server::CPointEntity {
				MEMBER(n_damage, server::CPointHurt, int32_t);
				MEMBER(bits_damage_type, server::CPointHurt, client::DamageTypes_t);
				MEMBER(fl_radius, server::CPointHurt, float);
				MEMBER(fl_delay, server::CPointHurt, float);
				MEMBER(str_target, server::CPointHurt, CUtlSymbolLarge);
				MEMBER(p_activator, server::CPointHurt, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointHurt

			class CCSPlayerPawn : public server::CCSPlayerPawnBase {
				MEMBER(p_bullet_services, server::CCSPlayerPawn, server::CCSPlayer_BulletServices*);
				MEMBER(p_hostage_services, server::CCSPlayerPawn, server::CCSPlayer_HostageServices*);
				MEMBER(p_buy_services, server::CCSPlayerPawn, server::CCSPlayer_BuyServices*);
				MEMBER(p_action_tracking_services, server::CCSPlayerPawn, server::CCSPlayer_ActionTrackingServices*);
				MEMBER(p_radio_services, server::CCSPlayerPawn, server::CCSPlayer_RadioServices*);
				MEMBER(p_damage_react_services, server::CCSPlayerPawn, server::CCSPlayer_DamageReactServices*);
				MEMBER(n_character_def_index, server::CCSPlayerPawn, uint16_t);
				MEMBER(b_has_female_voice, server::CCSPlayerPawn, bool);
				MEMBER(str_voprefix, server::CCSPlayerPawn, CUtlString);
				MEMBER_ARR(sz_last_place_name, server::CCSPlayerPawn, 18, char);
				MEMBER(b_in_hostage_reset_zone, server::CCSPlayerPawn, bool);
				MEMBER(b_in_buy_zone, server::CCSPlayerPawn, bool);
				MEMBER(touching_buy_zones, server::CCSPlayerPawn, cutl_vector<chandle<server::CBaseEntity>>);
				MEMBER(b_was_in_buy_zone, server::CCSPlayerPawn, bool);
				MEMBER(b_in_hostage_rescue_zone, server::CCSPlayerPawn, bool);
				MEMBER(b_in_bomb_zone, server::CCSPlayerPawn, bool);
				MEMBER(b_was_in_hostage_rescue_zone, server::CCSPlayerPawn, bool);
				MEMBER(i_retakes_offering, server::CCSPlayerPawn, int32_t);
				MEMBER(i_retakes_offering_card, server::CCSPlayerPawn, int32_t);
				MEMBER(b_retakes_has_defuse_kit, server::CCSPlayerPawn, bool);
				MEMBER(b_retakes_mvplast_round, server::CCSPlayerPawn, bool);
				MEMBER(i_retakes_mvpboost_item, server::CCSPlayerPawn, int32_t);
				MEMBER(retakes_mvpboost_extra_utility, server::CCSPlayerPawn, client::loadout_slot_t);
				MEMBER(fl_health_shot_boost_expiration_time, server::CCSPlayerPawn, entity2::GameTime_t);
				MEMBER(fl_landing_time_seconds, server::CCSPlayerPawn, float);
				MEMBER(aim_punch_angle, server::CCSPlayerPawn, QAngle);
				MEMBER(aim_punch_angle_vel, server::CCSPlayerPawn, QAngle);
				MEMBER(aim_punch_tick_base, server::CCSPlayerPawn, int32_t);
				MEMBER(aim_punch_tick_fraction, server::CCSPlayerPawn, float);
				MEMBER(aim_punch_cache, server::CCSPlayerPawn, cutl_vector<QAngle>);
				MEMBER(b_is_buy_menu_open, server::CCSPlayerPawn, bool);
				MEMBER(x_last_head_bone_transform, server::CCSPlayerPawn, CTransform);
				MEMBER(b_last_head_bone_transform_is_valid, server::CCSPlayerPawn, bool);
				MEMBER(last_land_time, server::CCSPlayerPawn, entity2::GameTime_t);
				MEMBER(b_on_ground_last_tick, server::CCSPlayerPawn, bool);
				MEMBER(i_player_locked, server::CCSPlayerPawn, int32_t);
				MEMBER(fl_time_of_last_injury, server::CCSPlayerPawn, entity2::GameTime_t);
				MEMBER(fl_next_spray_decal_time, server::CCSPlayerPawn, entity2::GameTime_t);
				MEMBER(b_next_spray_decal_time_expedited, server::CCSPlayerPawn, bool);
				MEMBER(n_ragdoll_damage_bone, server::CCSPlayerPawn, int32_t);
				MEMBER(v_ragdoll_damage_force, server::CCSPlayerPawn, Vector);
				MEMBER(v_ragdoll_damage_position, server::CCSPlayerPawn, Vector);
				MEMBER_ARR(sz_ragdoll_damage_weapon_name, server::CCSPlayerPawn, 64, char);
				MEMBER(b_ragdoll_damage_headshot, server::CCSPlayerPawn, bool);
				MEMBER(v_ragdoll_server_origin, server::CCSPlayerPawn, Vector);
				MEMBER(econ_gloves, server::CCSPlayerPawn, server::CEconItemView);
				MEMBER(n_econ_gloves_changed, server::CCSPlayerPawn, uint8_t);
				MEMBER(q_death_eye_angles, server::CCSPlayerPawn, QAngle);
				MEMBER(b_skip_one_head_constraint_update, server::CCSPlayerPawn, bool);
				MEMBER(b_left_handed, server::CCSPlayerPawn, bool);
				MEMBER(f_switched_handedness_time, server::CCSPlayerPawn, entity2::GameTime_t);
				MEMBER(fl_viewmodel_offset_x, server::CCSPlayerPawn, float);
				MEMBER(fl_viewmodel_offset_y, server::CCSPlayerPawn, float);
				MEMBER(fl_viewmodel_offset_z, server::CCSPlayerPawn, float);
				MEMBER(fl_viewmodel_fov, server::CCSPlayerPawn, float);
				MEMBER(b_is_walking, server::CCSPlayerPawn, bool);
				MEMBER(f_last_given_defuser_time, server::CCSPlayerPawn, float);
				MEMBER(f_last_given_bomb_time, server::CCSPlayerPawn, float);
				MEMBER(fl_dealt_damage_to_enemy_most_recent_timestamp, server::CCSPlayerPawn, float);
				MEMBER(i_display_history_bits, server::CCSPlayerPawn, uint32_t);
				MEMBER(fl_last_attacked_teammate, server::CCSPlayerPawn, float);
				MEMBER(allow_auto_follow_time, server::CCSPlayerPawn, entity2::GameTime_t);
				MEMBER(b_reset_armor_next_spawn, server::CCSPlayerPawn, bool);
				MEMBER(n_last_killer_index, server::CCSPlayerPawn, CEntityIndex);
				MEMBER(entity_spotted_state, server::CCSPlayerPawn, server::EntitySpottedState_t);
				MEMBER(n_spot_rules, server::CCSPlayerPawn, int32_t);
				MEMBER(b_is_scoped, server::CCSPlayerPawn, bool);
				MEMBER(b_resume_zoom, server::CCSPlayerPawn, bool);
				MEMBER(b_is_defusing, server::CCSPlayerPawn, bool);
				MEMBER(b_is_grabbing_hostage, server::CCSPlayerPawn, bool);
				MEMBER(i_blocking_use_action_in_progress, server::CCSPlayerPawn, client::CSPlayerBlockingUseAction_t);
				MEMBER(fl_emit_sound_time, server::CCSPlayerPawn, entity2::GameTime_t);
				MEMBER(b_in_no_defuse_area, server::CCSPlayerPawn, bool);
				MEMBER(i_bomb_site_index, server::CCSPlayerPawn, CEntityIndex);
				MEMBER(n_which_bomb_zone, server::CCSPlayerPawn, int32_t);
				MEMBER(b_in_bomb_zone_trigger, server::CCSPlayerPawn, bool);
				MEMBER(b_was_in_bomb_zone_trigger, server::CCSPlayerPawn, bool);
				MEMBER(i_shots_fired, server::CCSPlayerPawn, int32_t);
				MEMBER(fl_flinch_stack, server::CCSPlayerPawn, float);
				MEMBER(fl_velocity_modifier, server::CCSPlayerPawn, float);
				MEMBER(fl_hit_heading, server::CCSPlayerPawn, float);
				MEMBER(n_hit_body_part, server::CCSPlayerPawn, int32_t);
				MEMBER(vec_total_bullet_force, server::CCSPlayerPawn, Vector);
				MEMBER(b_wait_for_no_attack, server::CCSPlayerPawn, bool);
				MEMBER(ignore_ladder_jump_time, server::CCSPlayerPawn, float);
				MEMBER(b_killed_by_headshot, server::CCSPlayerPawn, bool);
				MEMBER(last_hit_box, server::CCSPlayerPawn, int32_t);
				MEMBER(last_health, server::CCSPlayerPawn, int32_t);
				MEMBER(p_bot, server::CCSPlayerPawn, server::CCSBot*);
				MEMBER(b_bot_allow_active, server::CCSPlayerPawn, bool);
				MEMBER(third_person_heading, server::CCSPlayerPawn, QAngle);
				MEMBER(fl_slope_drop_offset, server::CCSPlayerPawn, float);
				MEMBER(fl_slope_drop_height, server::CCSPlayerPawn, float);
				MEMBER(v_head_constraint_offset, server::CCSPlayerPawn, Vector);
				MEMBER(n_last_pickup_priority, server::CCSPlayerPawn, int32_t);
				MEMBER(fl_last_pickup_priority_time, server::CCSPlayerPawn, float);
				MEMBER(armor_value, server::CCSPlayerPawn, int32_t);
				MEMBER(un_current_equipment_value, server::CCSPlayerPawn, uint16_t);
				MEMBER(un_round_start_equipment_value, server::CCSPlayerPawn, uint16_t);
				MEMBER(un_freezetime_end_equipment_value, server::CCSPlayerPawn, uint16_t);
				MEMBER(i_last_weapon_fire_usercmd, server::CCSPlayerPawn, int32_t);
				MEMBER(b_is_spawning, server::CCSPlayerPawn, bool);
				MEMBER(i_death_flags, server::CCSPlayerPawn, int32_t);
				MEMBER(b_has_death_info, server::CCSPlayerPawn, bool);
				MEMBER(fl_death_info_time, server::CCSPlayerPawn, float);
				MEMBER(vec_death_info_origin, server::CCSPlayerPawn, Vector);
				MEMBER_ARR(vec_player_patch_econ_indices, server::CCSPlayerPawn, 5, uint32_t);
				MEMBER(gun_game_immunity_color, server::CCSPlayerPawn, Color);
				MEMBER(grenade_parameter_stash_time, server::CCSPlayerPawn, entity2::GameTime_t);
				MEMBER(b_grenade_parameters_stashed, server::CCSPlayerPawn, bool);
				MEMBER(ang_stashed_shoot_angles, server::CCSPlayerPawn, QAngle);
				MEMBER(vec_stashed_grenade_throw_position, server::CCSPlayerPawn, Vector);
				MEMBER(vec_stashed_velocity, server::CCSPlayerPawn, Vector);
				MEMBER_ARR(ang_shoot_angle_history, server::CCSPlayerPawn, 2, QAngle);
				MEMBER_ARR(vec_throw_position_history, server::CCSPlayerPawn, 2, Vector);
				MEMBER_ARR(vec_velocity_history, server::CCSPlayerPawn, 2, Vector);
				MEMBER(predicted_damage_tags, server::CCSPlayerPawn, CUtlVectorEmbeddedNetworkVar<server::PredictedDamageTag_t>);
				MEMBER(n_highest_applied_damage_tag_tick, server::CCSPlayerPawn, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerPawn

			class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable : public server::CEnvSoundscapeTriggerable {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable

			class CLightOrthoEntity : public server::CLightEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLightOrthoEntity

			class CSkyCamera : public server::CBaseEntity {
				MEMBER(skybox_data, server::CSkyCamera, server::sky3dparams_t);
				MEMBER(skybox_slot_token, server::CSkyCamera, CUtlStringToken);
				MEMBER(b_use_angles, server::CSkyCamera, bool);
				MEMBER(p_next, server::CSkyCamera, server::CSkyCamera*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSkyCamera

			class CGameMoney : public server::CRulePointEntity {
				MEMBER(on_money_spent, server::CGameMoney, entity2::CEntityIOOutput);
				MEMBER(on_money_spent_fail, server::CGameMoney, entity2::CEntityIOOutput);
				MEMBER(n_money, server::CGameMoney, int32_t);
				MEMBER(str_award_text, server::CGameMoney, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGameMoney

			class CPlayer_ObserverServices : public client::CPlayerPawnComponent {
				MEMBER(i_observer_mode, server::CPlayer_ObserverServices, uint8_t);
				MEMBER(h_observer_target, server::CPlayer_ObserverServices, chandle<server::CBaseEntity>);
				MEMBER(i_observer_last_mode, server::CPlayer_ObserverServices, client::ObserverMode_t);
				MEMBER(b_forced_observer_mode, server::CPlayer_ObserverServices, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_ObserverServices

			class CWeaponZoneRepulsor : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponZoneRepulsor

			class CPhysImpact : public server::CPointEntity {
				MEMBER(damage, server::CPhysImpact, float);
				MEMBER(distance, server::CPhysImpact, float);
				MEMBER(direction_entity_name, server::CPhysImpact, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysImpact

			class CInfoTargetServerOnly : public server::CServerOnlyPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoTargetServerOnly

			class CEnvGlobal : public server::CLogicalEntity {
				MEMBER(out_counter, server::CEnvGlobal, CEntityOutputTemplate<int32_t>);
				MEMBER(globalstate, server::CEnvGlobal, CUtlSymbolLarge);
				MEMBER(triggermode, server::CEnvGlobal, int32_t);
				MEMBER(initialstate, server::CEnvGlobal, int32_t);
				MEMBER(counter, server::CEnvGlobal, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvGlobal

			class CEnvCombinedLightProbeVolume : public server::CBaseEntity {
				MEMBER(entity__color, server::CEnvCombinedLightProbeVolume, Color);
				MEMBER(entity_fl_brightness, server::CEnvCombinedLightProbeVolume, float);
				MEMBER(entity_h_cubemap_texture, server::CEnvCombinedLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_b_custom_cubemap_texture, server::CEnvCombinedLightProbeVolume, bool);
				MEMBER(entity_h_light_probe_texture, server::CEnvCombinedLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_h_light_probe_direct_light_indices_texture, server::CEnvCombinedLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_h_light_probe_direct_light_scalars_texture, server::CEnvCombinedLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_h_light_probe_direct_light_shadows_texture, server::CEnvCombinedLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_v_box_mins, server::CEnvCombinedLightProbeVolume, Vector);
				MEMBER(entity_v_box_maxs, server::CEnvCombinedLightProbeVolume, Vector);
				MEMBER(entity_b_moveable, server::CEnvCombinedLightProbeVolume, bool);
				MEMBER(entity_n_handshake, server::CEnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_n_env_cube_map_array_index, server::CEnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_n_priority, server::CEnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_b_start_disabled, server::CEnvCombinedLightProbeVolume, bool);
				MEMBER(entity_fl_edge_fade_dist, server::CEnvCombinedLightProbeVolume, float);
				MEMBER(entity_v_edge_fade_dists, server::CEnvCombinedLightProbeVolume, Vector);
				MEMBER(entity_n_light_probe_size_x, server::CEnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_size_y, server::CEnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_size_z, server::CEnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_atlas_x, server::CEnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_atlas_y, server::CEnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_atlas_z, server::CEnvCombinedLightProbeVolume, int32_t);
				MEMBER(entity_b_enabled, server::CEnvCombinedLightProbeVolume, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvCombinedLightProbeVolume

			class CWeaponM249 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponM249

			class CFuncVehicleClip : public server::CBaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncVehicleClip

			class CCommentaryViewPosition : public server::CSprite {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCommentaryViewPosition

			class CSoundAreaEntitySphere : public server::CSoundAreaEntityBase {
				MEMBER(fl_radius, server::CSoundAreaEntitySphere, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundAreaEntitySphere

			class CPointAngularVelocitySensor : public server::CPointEntity {
				MEMBER(h_target_entity, server::CPointAngularVelocitySensor, chandle<server::CBaseEntity>);
				MEMBER(fl_threshold, server::CPointAngularVelocitySensor, float);
				MEMBER(n_last_compare_result, server::CPointAngularVelocitySensor, int32_t);
				MEMBER(n_last_fire_result, server::CPointAngularVelocitySensor, int32_t);
				MEMBER(fl_fire_time, server::CPointAngularVelocitySensor, entity2::GameTime_t);
				MEMBER(fl_fire_interval, server::CPointAngularVelocitySensor, float);
				MEMBER(fl_last_ang_velocity, server::CPointAngularVelocitySensor, float);
				MEMBER(last_orientation, server::CPointAngularVelocitySensor, QAngle);
				MEMBER(vec_axis, server::CPointAngularVelocitySensor, Vector);
				MEMBER(b_use_helper, server::CPointAngularVelocitySensor, bool);
				MEMBER(angular_velocity, server::CPointAngularVelocitySensor, CEntityOutputTemplate<float>);
				MEMBER(on_less_than, server::CPointAngularVelocitySensor, entity2::CEntityIOOutput);
				MEMBER(on_less_than_or_equal_to, server::CPointAngularVelocitySensor, entity2::CEntityIOOutput);
				MEMBER(on_greater_than, server::CPointAngularVelocitySensor, entity2::CEntityIOOutput);
				MEMBER(on_greater_than_or_equal_to, server::CPointAngularVelocitySensor, entity2::CEntityIOOutput);
				MEMBER(on_equal_to, server::CPointAngularVelocitySensor, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointAngularVelocitySensor

			class CMolotovProjectile : public server::CBaseCSGrenadeProjectile {
				MEMBER(b_is_inc_grenade, server::CMolotovProjectile, bool);
				MEMBER(b_detonated, server::CMolotovProjectile, bool);
				MEMBER(still_timer, server::CMolotovProjectile, server::IntervalTimer);
				MEMBER(b_has_bounced_off_player, server::CMolotovProjectile, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMolotovProjectile

			class CMomentaryRotButton : public server::CRotButton {
				MEMBER(position, server::CMomentaryRotButton, CEntityOutputTemplate<float>);
				MEMBER(on_unpressed, server::CMomentaryRotButton, entity2::CEntityIOOutput);
				MEMBER(on_fully_open, server::CMomentaryRotButton, entity2::CEntityIOOutput);
				MEMBER(on_fully_closed, server::CMomentaryRotButton, entity2::CEntityIOOutput);
				MEMBER(on_reached_position, server::CMomentaryRotButton, entity2::CEntityIOOutput);
				MEMBER(last_used, server::CMomentaryRotButton, int32_t);
				MEMBER(start, server::CMomentaryRotButton, QAngle);
				MEMBER(end, server::CMomentaryRotButton, QAngle);
				MEMBER(ideal_yaw, server::CMomentaryRotButton, float);
				MEMBER(s_noise, server::CMomentaryRotButton, CUtlSymbolLarge);
				MEMBER(b_update_target, server::CMomentaryRotButton, bool);
				MEMBER(direction, server::CMomentaryRotButton, int32_t);
				MEMBER(return_speed, server::CMomentaryRotButton, float);
				MEMBER(fl_start_position, server::CMomentaryRotButton, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMomentaryRotButton

			class CHostageRescueZoneShim : public server::CBaseTrigger {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHostageRescueZoneShim

			class CFuncBrush : public server::CBaseModelEntity {
				MEMBER(i_solidity, server::CFuncBrush, client::BrushSolidities_e);
				MEMBER(i_disabled, server::CFuncBrush, int32_t);
				MEMBER(b_solid_bsp, server::CFuncBrush, bool);
				MEMBER(isz_excluded_class, server::CFuncBrush, CUtlSymbolLarge);
				MEMBER(b_invert_exclusion, server::CFuncBrush, bool);
				MEMBER(b_scripted_movement, server::CFuncBrush, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncBrush

			class CPointPulse : public server::CBaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointPulse

			class CEnvInstructorHint : public server::CPointEntity {
				MEMBER(isz_name, server::CEnvInstructorHint, CUtlSymbolLarge);
				MEMBER(isz_replace__key, server::CEnvInstructorHint, CUtlSymbolLarge);
				MEMBER(isz_hint_target_entity, server::CEnvInstructorHint, CUtlSymbolLarge);
				MEMBER(i_timeout, server::CEnvInstructorHint, int32_t);
				MEMBER(i_display_limit, server::CEnvInstructorHint, int32_t);
				MEMBER(isz_icon__onscreen, server::CEnvInstructorHint, CUtlSymbolLarge);
				MEMBER(isz_icon__offscreen, server::CEnvInstructorHint, CUtlSymbolLarge);
				MEMBER(isz_caption, server::CEnvInstructorHint, CUtlSymbolLarge);
				MEMBER(isz_activator_caption, server::CEnvInstructorHint, CUtlSymbolLarge);
				MEMBER(color, server::CEnvInstructorHint, Color);
				MEMBER(f_icon_offset, server::CEnvInstructorHint, float);
				MEMBER(f_range, server::CEnvInstructorHint, float);
				MEMBER(i_pulse_option, server::CEnvInstructorHint, uint8_t);
				MEMBER(i_alpha_option, server::CEnvInstructorHint, uint8_t);
				MEMBER(i_shake_option, server::CEnvInstructorHint, uint8_t);
				MEMBER(b_static, server::CEnvInstructorHint, bool);
				MEMBER(b_no_offscreen, server::CEnvInstructorHint, bool);
				MEMBER(b_force_caption, server::CEnvInstructorHint, bool);
				MEMBER(i_instance_type, server::CEnvInstructorHint, int32_t);
				MEMBER(b_suppress_rest, server::CEnvInstructorHint, bool);
				MEMBER(isz_binding, server::CEnvInstructorHint, CUtlSymbolLarge);
				MEMBER(b_allow_no_draw_target, server::CEnvInstructorHint, bool);
				MEMBER(b_auto_start, server::CEnvInstructorHint, bool);
				MEMBER(b_local_player_only, server::CEnvInstructorHint, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvInstructorHint

			class CInfoGameEventProxy : public server::CPointEntity {
				MEMBER(isz_event_name, server::CInfoGameEventProxy, CUtlSymbolLarge);
				MEMBER(fl_range, server::CInfoGameEventProxy, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoGameEventProxy

			class CPointCamera : public server::CBaseEntity {
				MEMBER(fov, server::CPointCamera, float);
				MEMBER(resolution, server::CPointCamera, float);
				MEMBER(b_fog_enable, server::CPointCamera, bool);
				MEMBER(fog_color, server::CPointCamera, Color);
				MEMBER(fl_fog_start, server::CPointCamera, float);
				MEMBER(fl_fog_end, server::CPointCamera, float);
				MEMBER(fl_fog_max_density, server::CPointCamera, float);
				MEMBER(b_active, server::CPointCamera, bool);
				MEMBER(b_use_screen_aspect_ratio, server::CPointCamera, bool);
				MEMBER(fl_aspect_ratio, server::CPointCamera, float);
				MEMBER(b_no_sky, server::CPointCamera, bool);
				MEMBER(f_brightness, server::CPointCamera, float);
				MEMBER(fl_zfar, server::CPointCamera, float);
				MEMBER(fl_znear, server::CPointCamera, float);
				MEMBER(b_can_hltvuse, server::CPointCamera, bool);
				MEMBER(b_align_with_parent, server::CPointCamera, bool);
				MEMBER(b_dof_enabled, server::CPointCamera, bool);
				MEMBER(fl_dof_near_blurry, server::CPointCamera, float);
				MEMBER(fl_dof_near_crisp, server::CPointCamera, float);
				MEMBER(fl_dof_far_crisp, server::CPointCamera, float);
				MEMBER(fl_dof_far_blurry, server::CPointCamera, float);
				MEMBER(fl_dof_tilt_to_ground, server::CPointCamera, float);
				MEMBER(target_fov, server::CPointCamera, float);
				MEMBER(degrees_per_second, server::CPointCamera, float);
				MEMBER(b_is_on, server::CPointCamera, bool);
				MEMBER(p_next, server::CPointCamera, server::CPointCamera*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointCamera

			class CCSWeaponBase : public server::CBasePlayerWeapon {
				MEMBER(b_removeable, server::CCSWeaponBase, bool);
				MEMBER(fl_fire_sequence_start_time, server::CCSWeaponBase, float);
				MEMBER(n_fire_sequence_start_time_change, server::CCSWeaponBase, int32_t);
				MEMBER(n_fire_sequence_start_time_ack, server::CCSWeaponBase, int32_t);
				MEMBER(e_player_fire_event, server::CCSWeaponBase, client::PlayerAnimEvent_t);
				MEMBER(e_player_fire_event_attack_type, server::CCSWeaponBase, client::WeaponAttackType_t);
				MEMBER(seq_idle, server::CCSWeaponBase, animationsystem::HSequence);
				MEMBER(seq_fire_primary, server::CCSWeaponBase, animationsystem::HSequence);
				MEMBER(seq_fire_secondary, server::CCSWeaponBase, animationsystem::HSequence);
				MEMBER(third_person_fire_sequences, server::CCSWeaponBase, cutl_vector<animationsystem::HSequence>);
				MEMBER(h_current_third_person_sequence, server::CCSWeaponBase, animationsystem::HSequence);
				MEMBER(n_silencer_bone_index, server::CCSWeaponBase, int32_t);
				MEMBER_ARR(third_person_sequences, server::CCSWeaponBase, 7, animationsystem::HSequence);
				MEMBER(b_player_ammo_stock_on_pickup, server::CCSWeaponBase, bool);
				MEMBER(b_require_use_to_touch, server::CCSWeaponBase, bool);
				MEMBER(i_state, server::CCSWeaponBase, client::CSWeaponState_t);
				MEMBER(fl_last_time_in_air, server::CCSWeaponBase, entity2::GameTime_t);
				MEMBER(fl_last_deploy_time, server::CCSWeaponBase, entity2::GameTime_t);
				MEMBER(n_last_empty_sound_cmd_num, server::CCSWeaponBase, int32_t);
				MEMBER(n_view_model_index, server::CCSWeaponBase, uint32_t);
				MEMBER(b_reloads_with_clips, server::CCSWeaponBase, bool);
				MEMBER(fl_time_weapon_idle, server::CCSWeaponBase, entity2::GameTime_t);
				MEMBER(b_fire_on_empty, server::CCSWeaponBase, bool);
				MEMBER(on_player_pickup, server::CCSWeaponBase, entity2::CEntityIOOutput);
				MEMBER(weapon_mode, server::CCSWeaponBase, client::CSWeaponMode);
				MEMBER(fl_turning_inaccuracy_delta, server::CCSWeaponBase, float);
				MEMBER(vec_turning_inaccuracy_eye_dir_last, server::CCSWeaponBase, Vector);
				MEMBER(fl_turning_inaccuracy, server::CCSWeaponBase, float);
				MEMBER(f_accuracy_penalty, server::CCSWeaponBase, float);
				MEMBER(fl_last_accuracy_update_time, server::CCSWeaponBase, entity2::GameTime_t);
				MEMBER(f_accuracy_smoothed_for_zoom, server::CCSWeaponBase, float);
				MEMBER(f_scope_zoom_end_time, server::CCSWeaponBase, entity2::GameTime_t);
				MEMBER(i_recoil_index, server::CCSWeaponBase, int32_t);
				MEMBER(fl_recoil_index, server::CCSWeaponBase, float);
				MEMBER(b_burst_mode, server::CCSWeaponBase, bool);
				MEMBER(n_postpone_fire_ready_ticks, server::CCSWeaponBase, entity2::GameTick_t);
				MEMBER(fl_postpone_fire_ready_frac, server::CCSWeaponBase, float);
				MEMBER(b_in_reload, server::CCSWeaponBase, bool);
				MEMBER(b_reload_visually_complete, server::CCSWeaponBase, bool);
				MEMBER(fl_dropped_at_time, server::CCSWeaponBase, entity2::GameTime_t);
				MEMBER(b_is_hauled_back, server::CCSWeaponBase, bool);
				MEMBER(b_silencer_on, server::CCSWeaponBase, bool);
				MEMBER(fl_time_silencer_switch_complete, server::CCSWeaponBase, entity2::GameTime_t);
				MEMBER(i_original_team_number, server::CCSWeaponBase, int32_t);
				MEMBER(i_most_recent_team_number, server::CCSWeaponBase, int32_t);
				MEMBER(b_dropped_near_buy_zone, server::CCSWeaponBase, bool);
				MEMBER(fl_next_attack_render_time_offset, server::CCSWeaponBase, float);
				MEMBER(b_can_be_picked_up, server::CCSWeaponBase, bool);
				MEMBER(b_use_can_override_next_owner_touch_time, server::CCSWeaponBase, bool);
				MEMBER(next_owner_touch_time, server::CCSWeaponBase, entity2::GameTime_t);
				MEMBER(next_prev_owner_touch_time, server::CCSWeaponBase, entity2::GameTime_t);
				MEMBER(next_prev_owner_use_time, server::CCSWeaponBase, entity2::GameTime_t);
				MEMBER(h_prev_owner, server::CCSWeaponBase, chandle<server::CCSPlayerPawn>);
				MEMBER(n_drop_tick, server::CCSWeaponBase, entity2::GameTick_t);
				MEMBER(donated, server::CCSWeaponBase, bool);
				MEMBER(f_last_shot_time, server::CCSWeaponBase, entity2::GameTime_t);
				MEMBER(b_was_owned_by_ct, server::CCSWeaponBase, bool);
				MEMBER(b_was_owned_by_terrorist, server::CCSWeaponBase, bool);
				MEMBER(b_fired_out_of_ammo_event, server::CCSWeaponBase, bool);
				MEMBER(num_remove_unowned_weapon_think, server::CCSWeaponBase, int32_t);
				MEMBER(iron_sight_controller, server::CCSWeaponBase, server::CIronSightController);
				MEMBER(i_iron_sight_mode, server::CCSWeaponBase, int32_t);
				MEMBER(fl_last_lostrace_failure_time, server::CCSWeaponBase, entity2::GameTime_t);
				MEMBER(i_num_empty_attacks, server::CCSWeaponBase, int32_t);
				MEMBER(fl_wat_tick_offset, server::CCSWeaponBase, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSWeaponBase

			class CPathKeyFrame : public server::CLogicalEntity {
				MEMBER(origin, server::CPathKeyFrame, Vector);
				MEMBER(angles, server::CPathKeyFrame, QAngle);
				MEMBER(q_angle, server::CPathKeyFrame, Quaternion);
				MEMBER(i_next_key, server::CPathKeyFrame, CUtlSymbolLarge);
				MEMBER(fl_next_time, server::CPathKeyFrame, float);
				MEMBER(p_next_key, server::CPathKeyFrame, server::CPathKeyFrame*);
				MEMBER(p_prev_key, server::CPathKeyFrame, server::CPathKeyFrame*);
				MEMBER(fl_move_speed, server::CPathKeyFrame, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathKeyFrame

			class CCSObserver_ObserverServices : public server::CPlayer_ObserverServices {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSObserver_ObserverServices

			class CWeaponRevolver : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponRevolver

			class CEnvSoundscape : public server::CBaseEntity {
				MEMBER(on_play, server::CEnvSoundscape, entity2::CEntityIOOutput);
				MEMBER(fl_radius, server::CEnvSoundscape, float);
				MEMBER(sound_event_name, server::CEnvSoundscape, CUtlSymbolLarge);
				MEMBER(b_override_with_event, server::CEnvSoundscape, bool);
				MEMBER(soundscape_index, server::CEnvSoundscape, int32_t);
				MEMBER(soundscape_entity_list_id, server::CEnvSoundscape, int32_t);
				MEMBER_ARR(position_names, server::CEnvSoundscape, 8, CUtlSymbolLarge);
				MEMBER(h_proxy_soundscape, server::CEnvSoundscape, chandle<server::CEnvSoundscape>);
				MEMBER(b_disabled, server::CEnvSoundscape, bool);
				MEMBER(soundscape_name, server::CEnvSoundscape, CUtlSymbolLarge);
				MEMBER(sound_event_hash, server::CEnvSoundscape, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvSoundscape

			class COrnamentProp : public server::CDynamicProp {
				MEMBER(initial_owner, server::COrnamentProp, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class COrnamentProp

			class CLogicGameEvent : public server::CLogicalEntity {
				MEMBER(isz_event_name, server::CLogicGameEvent, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicGameEvent

			class CFuncPropRespawnZone : public server::CBaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncPropRespawnZone

			class CGameRulesProxy : public server::CBaseEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGameRulesProxy

			class CMapVetoPickController : public server::CBaseEntity {
				MEMBER(b_played_intro_vcd, server::CMapVetoPickController, bool);
				MEMBER(b_need_to_play_five_seconds_remaining, server::CMapVetoPickController, bool);
				MEMBER(dbl_pre_match_draft_sequence_time, server::CMapVetoPickController, double);
				MEMBER(b_pre_match_draft_state_changed, server::CMapVetoPickController, bool);
				MEMBER(n_draft_type, server::CMapVetoPickController, int32_t);
				MEMBER(n_team_winning_coin_toss, server::CMapVetoPickController, int32_t);
				MEMBER_ARR(n_team_with_first_choice, server::CMapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_vote_map_ids_list, server::CMapVetoPickController, 7, int32_t);
				MEMBER_ARR(n_account_ids, server::CMapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_map_id0, server::CMapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_map_id1, server::CMapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_map_id2, server::CMapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_map_id3, server::CMapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_map_id4, server::CMapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_map_id5, server::CMapVetoPickController, 64, int32_t);
				MEMBER_ARR(n_starting_side0, server::CMapVetoPickController, 64, int32_t);
				MEMBER(n_current_phase, server::CMapVetoPickController, int32_t);
				MEMBER(n_phase_start_tick, server::CMapVetoPickController, int32_t);
				MEMBER(n_phase_duration_ticks, server::CMapVetoPickController, int32_t);
				MEMBER(on_map_vetoed, server::CMapVetoPickController, CEntityOutputTemplate<CUtlSymbolLarge>);
				MEMBER(on_map_picked, server::CMapVetoPickController, CEntityOutputTemplate<CUtlSymbolLarge>);
				MEMBER(on_sides_picked, server::CMapVetoPickController, CEntityOutputTemplate<int32_t>);
				MEMBER(on_new_phase_started, server::CMapVetoPickController, CEntityOutputTemplate<int32_t>);
				MEMBER(on_level_transition, server::CMapVetoPickController, CEntityOutputTemplate<int32_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMapVetoPickController

			class CEnvMuzzleFlash : public server::CPointEntity {
				MEMBER(fl_scale, server::CEnvMuzzleFlash, float);
				MEMBER(isz_parent_attachment, server::CEnvMuzzleFlash, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvMuzzleFlash

			class CBombTarget : public server::CBaseTrigger {
				MEMBER(on_bomb_explode, server::CBombTarget, entity2::CEntityIOOutput);
				MEMBER(on_bomb_planted, server::CBombTarget, entity2::CEntityIOOutput);
				MEMBER(on_bomb_defused, server::CBombTarget, entity2::CEntityIOOutput);
				MEMBER(b_is_bomb_site_b, server::CBombTarget, bool);
				MEMBER(b_is_heist_bomb_target, server::CBombTarget, bool);
				MEMBER(b_bomb_planted_here, server::CBombTarget, bool);
				MEMBER(sz_mount_target, server::CBombTarget, CUtlSymbolLarge);
				MEMBER(h_instructor_hint, server::CBombTarget, chandle<server::CBaseEntity>);
				MEMBER(n_bomb_site_designation, server::CBombTarget, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBombTarget

			class CPhysicsSpring : public server::CBaseEntity {
				MEMBER(fl_frequency, server::CPhysicsSpring, float);
				MEMBER(fl_damping_ratio, server::CPhysicsSpring, float);
				MEMBER(fl_rest_length, server::CPhysicsSpring, float);
				MEMBER(name_attach_start, server::CPhysicsSpring, CUtlSymbolLarge);
				MEMBER(name_attach_end, server::CPhysicsSpring, CUtlSymbolLarge);
				MEMBER(start, server::CPhysicsSpring, Vector);
				MEMBER(end, server::CPhysicsSpring, Vector);
				MEMBER(teleport_tick, server::CPhysicsSpring, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysicsSpring

			class CEnvLightProbeVolume : public server::CBaseEntity {
				MEMBER(entity_h_light_probe_texture, server::CEnvLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_h_light_probe_direct_light_indices_texture, server::CEnvLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_h_light_probe_direct_light_scalars_texture, server::CEnvLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_h_light_probe_direct_light_shadows_texture, server::CEnvLightProbeVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_v_box_mins, server::CEnvLightProbeVolume, Vector);
				MEMBER(entity_v_box_maxs, server::CEnvLightProbeVolume, Vector);
				MEMBER(entity_b_moveable, server::CEnvLightProbeVolume, bool);
				MEMBER(entity_n_handshake, server::CEnvLightProbeVolume, int32_t);
				MEMBER(entity_n_priority, server::CEnvLightProbeVolume, int32_t);
				MEMBER(entity_b_start_disabled, server::CEnvLightProbeVolume, bool);
				MEMBER(entity_n_light_probe_size_x, server::CEnvLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_size_y, server::CEnvLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_size_z, server::CEnvLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_atlas_x, server::CEnvLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_atlas_y, server::CEnvLightProbeVolume, int32_t);
				MEMBER(entity_n_light_probe_atlas_z, server::CEnvLightProbeVolume, int32_t);
				MEMBER(entity_b_enabled, server::CEnvLightProbeVolume, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvLightProbeVolume

			class CFuncWall : public server::CBaseModelEntity {
				MEMBER(n_state, server::CFuncWall, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncWall

			class CHEGrenade : public server::CBaseCSGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHEGrenade

			class CLogicAutosave : public server::CLogicalEntity {
				MEMBER(b_force_new_level_unit, server::CLogicAutosave, bool);
				MEMBER(min_hit_points, server::CLogicAutosave, int32_t);
				MEMBER(min_hit_points_to_commit, server::CLogicAutosave, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicAutosave

			class CCSPlayerController_DamageServices : public client::CPlayerControllerComponent {
				MEMBER(n_send_update, server::CCSPlayerController_DamageServices, int32_t);
				MEMBER(damage_list, server::CCSPlayerController_DamageServices, CUtlVectorEmbeddedNetworkVar<server::CDamageRecord>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerController_DamageServices

			class CLogicGameEventListener : public server::CLogicalEntity {
				MEMBER(on_event_fired, server::CLogicGameEventListener, entity2::CEntityIOOutput);
				MEMBER(isz_game_event_name, server::CLogicGameEventListener, CUtlSymbolLarge);
				MEMBER(isz_game_event_item, server::CLogicGameEventListener, CUtlSymbolLarge);
				MEMBER(b_enabled, server::CLogicGameEventListener, bool);
				MEMBER(b_start_disabled, server::CLogicGameEventListener, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicGameEventListener

			class CCSTeam : public server::CTeam {
				MEMBER(n_last_recieved_shorthanded_round_bonus, server::CCSTeam, int32_t);
				MEMBER(n_shorthanded_round_bonus_start_round, server::CCSTeam, int32_t);
				MEMBER(b_surrendered, server::CCSTeam, bool);
				MEMBER_ARR(sz_team_match_stat, server::CCSTeam, 512, char);
				MEMBER(num_map_victories, server::CCSTeam, int32_t);
				MEMBER(score_first_half, server::CCSTeam, int32_t);
				MEMBER(score_second_half, server::CCSTeam, int32_t);
				MEMBER(score_overtime, server::CCSTeam, int32_t);
				MEMBER_ARR(sz_clan_teamname, server::CCSTeam, 129, char);
				MEMBER(i_clan_id, server::CCSTeam, uint32_t);
				MEMBER_ARR(sz_team_flag_image, server::CCSTeam, 8, char);
				MEMBER_ARR(sz_team_logo_image, server::CCSTeam, 8, char);
				MEMBER(fl_next_resource_time, server::CCSTeam, float);
				MEMBER(i_last_update_sent_at, server::CCSTeam, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSTeam

			class CEnvSoundscapeProxy : public server::CEnvSoundscape {
				MEMBER(main_soundscape_name, server::CEnvSoundscapeProxy, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvSoundscapeProxy

			class CSprite : public server::CBaseModelEntity {
				MEMBER(h_sprite_material, server::CSprite, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(h_attached_to_entity, server::CSprite, chandle<server::CBaseEntity>);
				MEMBER(n_attachment, server::CSprite, modellib::AttachmentHandle_t);
				MEMBER(fl_sprite_framerate, server::CSprite, float);
				MEMBER(fl_frame, server::CSprite, float);
				MEMBER(fl_die_time, server::CSprite, entity2::GameTime_t);
				MEMBER(n_brightness, server::CSprite, uint32_t);
				MEMBER(fl_brightness_duration, server::CSprite, float);
				MEMBER(fl_sprite_scale, server::CSprite, float);
				MEMBER(fl_scale_duration, server::CSprite, float);
				MEMBER(b_world_space_scale, server::CSprite, bool);
				MEMBER(fl_glow_proxy_size, server::CSprite, float);
				MEMBER(fl_hdrcolor_scale, server::CSprite, float);
				MEMBER(fl_last_time, server::CSprite, entity2::GameTime_t);
				MEMBER(fl_max_frame, server::CSprite, float);
				MEMBER(fl_start_scale, server::CSprite, float);
				MEMBER(fl_dest_scale, server::CSprite, float);
				MEMBER(fl_scale_time_start, server::CSprite, entity2::GameTime_t);
				MEMBER(n_start_brightness, server::CSprite, int32_t);
				MEMBER(n_dest_brightness, server::CSprite, int32_t);
				MEMBER(fl_brightness_time_start, server::CSprite, entity2::GameTime_t);
				MEMBER(n_sprite_width, server::CSprite, int32_t);
				MEMBER(n_sprite_height, server::CSprite, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSprite

			class CHitboxComponent : public entity2::CEntityComponent {
				MEMBER_ARR(bv_disabled_hit_groups, server::CHitboxComponent, 1, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHitboxComponent

			class CSoundEventPathCornerEntity : public server::CSoundEventEntity {
				MEMBER(isz_path_corner, server::CSoundEventPathCornerEntity, CUtlSymbolLarge);
				MEMBER(i_count_max, server::CSoundEventPathCornerEntity, int32_t);
				MEMBER(fl_distance_max, server::CSoundEventPathCornerEntity, float);
				MEMBER(fl_dist_max_sqr, server::CSoundEventPathCornerEntity, float);
				MEMBER(fl_dot_product_max, server::CSoundEventPathCornerEntity, float);
				MEMBER(b_playing, server::CSoundEventPathCornerEntity, bool);
				MEMBER(vec_corner_pairs_networked, server::CSoundEventPathCornerEntity, CNetworkUtlVectorBase<client::SoundeventPathCornerPairNetworked_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundEventPathCornerEntity

			class CScriptTriggerMultiple : public server::CTriggerMultiple {
				MEMBER(v_extent, server::CScriptTriggerMultiple, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CScriptTriggerMultiple

			class CSoundOpvarSetAutoRoomEntity : public server::CSoundOpvarSetPointEntity {
				MEMBER(trace_results, server::CSoundOpvarSetAutoRoomEntity, cutl_vector<server::SoundOpvarTraceResult_t>);
				MEMBER(doorway_pairs, server::CSoundOpvarSetAutoRoomEntity, cutl_vector<server::AutoRoomDoorwayPairs_t>);
				MEMBER(fl_size, server::CSoundOpvarSetAutoRoomEntity, float);
				MEMBER(fl_height_tolerance, server::CSoundOpvarSetAutoRoomEntity, float);
				MEMBER(fl_size_sqr, server::CSoundOpvarSetAutoRoomEntity, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundOpvarSetAutoRoomEntity

			class CTimerEntity : public server::CLogicalEntity {
				MEMBER(on_timer, server::CTimerEntity, entity2::CEntityIOOutput);
				MEMBER(on_timer_high, server::CTimerEntity, entity2::CEntityIOOutput);
				MEMBER(on_timer_low, server::CTimerEntity, entity2::CEntityIOOutput);
				MEMBER(i_disabled, server::CTimerEntity, int32_t);
				MEMBER(fl_initial_delay, server::CTimerEntity, float);
				MEMBER(fl_refire_time, server::CTimerEntity, float);
				MEMBER(b_up_down_state, server::CTimerEntity, bool);
				MEMBER(i_use_random_time, server::CTimerEntity, int32_t);
				MEMBER(b_pause_after_firing, server::CTimerEntity, bool);
				MEMBER(fl_lower_random_bound, server::CTimerEntity, float);
				MEMBER(fl_upper_random_bound, server::CTimerEntity, float);
				MEMBER(fl_remaining_time, server::CTimerEntity, float);
				MEMBER(b_paused, server::CTimerEntity, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTimerEntity

			class CPulseGraphInstance_GameBlackboard : public server::CPulseGraphInstance_ServerEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseGraphInstance_GameBlackboard

			class FilterDamageType : public server::CBaseFilter {
				MEMBER(i_damage_type, server::FilterDamageType, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class FilterDamageType

			class CSoundAreaEntityBase : public server::CBaseEntity {
				MEMBER(b_disabled, server::CSoundAreaEntityBase, bool);
				MEMBER(isz_sound_area_type, server::CSoundAreaEntityBase, CUtlSymbolLarge);
				MEMBER(v_pos, server::CSoundAreaEntityBase, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundAreaEntityBase

			class CCSPlayer_WeaponServices : public server::CPlayer_WeaponServices {
				MEMBER(fl_next_attack, server::CCSPlayer_WeaponServices, entity2::GameTime_t);
				MEMBER(b_is_looking_at_weapon, server::CCSPlayer_WeaponServices, bool);
				MEMBER(b_is_holding_look_at_weapon, server::CCSPlayer_WeaponServices, bool);
				MEMBER(h_saved_weapon, server::CCSPlayer_WeaponServices, chandle<server::CBasePlayerWeapon>);
				MEMBER(n_time_to_melee, server::CCSPlayer_WeaponServices, int32_t);
				MEMBER(n_time_to_secondary, server::CCSPlayer_WeaponServices, int32_t);
				MEMBER(n_time_to_primary, server::CCSPlayer_WeaponServices, int32_t);
				MEMBER(n_time_to_sniper_rifle, server::CCSPlayer_WeaponServices, int32_t);
				MEMBER(b_is_being_given_item, server::CCSPlayer_WeaponServices, bool);
				MEMBER(b_is_picking_up_item_with_use, server::CCSPlayer_WeaponServices, bool);
				MEMBER(b_picked_up_weapon, server::CCSPlayer_WeaponServices, bool);
				MEMBER(b_disable_auto_deploy, server::CCSPlayer_WeaponServices, bool);
				MEMBER(b_is_picking_up_ground_weapon, server::CCSPlayer_WeaponServices, bool);
				MEMBER(n_old_shoot_position_history_count, server::CCSPlayer_WeaponServices, uint32_t);
				MEMBER(n_old_input_history_count, server::CCSPlayer_WeaponServices, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_WeaponServices

			class CCSPlayer_UseServices : public server::CPlayer_UseServices {
				MEMBER(h_last_known_use_entity, server::CCSPlayer_UseServices, chandle<server::CBaseEntity>);
				MEMBER(fl_last_use_time_stamp, server::CCSPlayer_UseServices, entity2::GameTime_t);
				MEMBER(fl_time_last_used_window, server::CCSPlayer_UseServices, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_UseServices

			class CCSGO_TeamSelectCharacterPosition : public server::CCSGO_TeamPreviewCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGO_TeamSelectCharacterPosition

			class CItemKevlar : public server::CItem {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CItemKevlar

			class CPhysThruster : public server::CPhysForce {
				MEMBER(local_origin, server::CPhysThruster, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysThruster

			class CPhysPulley : public server::CPhysConstraint {
				MEMBER(position2, server::CPhysPulley, Vector);
				MEMBER_ARR(offset, server::CPhysPulley, 2, Vector);
				MEMBER(add_length, server::CPhysPulley, float);
				MEMBER(gear_ratio, server::CPhysPulley, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysPulley

			class CSoundEventAABBEntity : public server::CSoundEventEntity {
				MEMBER(v_mins, server::CSoundEventAABBEntity, Vector);
				MEMBER(v_maxs, server::CSoundEventAABBEntity, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundEventAABBEntity

			class CPhysSlideConstraint : public server::CPhysConstraint {
				MEMBER(axis_end, server::CPhysSlideConstraint, Vector);
				MEMBER(slide_friction, server::CPhysSlideConstraint, float);
				MEMBER(system_load_scale, server::CPhysSlideConstraint, float);
				MEMBER(initial_offset, server::CPhysSlideConstraint, float);
				MEMBER(b_enable_linear_constraint, server::CPhysSlideConstraint, bool);
				MEMBER(b_enable_angular_constraint, server::CPhysSlideConstraint, bool);
				MEMBER(fl_motor_frequency, server::CPhysSlideConstraint, float);
				MEMBER(fl_motor_damping_ratio, server::CPhysSlideConstraint, float);
				MEMBER(b_use_entity_pivot, server::CPhysSlideConstraint, bool);
				MEMBER(sound_info, server::CPhysSlideConstraint, server::ConstraintSoundInfo);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysSlideConstraint

			class FilterTeam : public server::CBaseFilter {
				MEMBER(i_filter_team, server::FilterTeam, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class FilterTeam

			class CBasePlayerVData : public client::CEntitySubclassVDataBase {
				MEMBER(s_model_name, server::CBasePlayerVData, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(fl_head_damage_multiplier, server::CBasePlayerVData, client::CSkillFloat);
				MEMBER(fl_chest_damage_multiplier, server::CBasePlayerVData, client::CSkillFloat);
				MEMBER(fl_stomach_damage_multiplier, server::CBasePlayerVData, client::CSkillFloat);
				MEMBER(fl_arm_damage_multiplier, server::CBasePlayerVData, client::CSkillFloat);
				MEMBER(fl_leg_damage_multiplier, server::CBasePlayerVData, client::CSkillFloat);
				MEMBER(fl_hold_breath_time, server::CBasePlayerVData, float);
				MEMBER(fl_drowning_damage_interval, server::CBasePlayerVData, float);
				MEMBER(n_drowning_damage_initial, server::CBasePlayerVData, int32_t);
				MEMBER(n_drowning_damage_max, server::CBasePlayerVData, int32_t);
				MEMBER(n_water_speed, server::CBasePlayerVData, int32_t);
				MEMBER(fl_use_range, server::CBasePlayerVData, float);
				MEMBER(fl_use_angle_tolerance, server::CBasePlayerVData, float);
				MEMBER(fl_crouch_time, server::CBasePlayerVData, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBasePlayerVData

			class CTriggerHurt : public server::CBaseTrigger {
				MEMBER(fl_original_damage, server::CTriggerHurt, float);
				MEMBER(fl_damage, server::CTriggerHurt, float);
				MEMBER(fl_damage_cap, server::CTriggerHurt, float);
				MEMBER(fl_last_dmg_time, server::CTriggerHurt, entity2::GameTime_t);
				MEMBER(fl_forgiveness_delay, server::CTriggerHurt, float);
				MEMBER(bits_damage_inflict, server::CTriggerHurt, client::DamageTypes_t);
				MEMBER(damage_model, server::CTriggerHurt, int32_t);
				MEMBER(b_no_dmg_force, server::CTriggerHurt, bool);
				MEMBER(v_damage_force, server::CTriggerHurt, Vector);
				MEMBER(think_always, server::CTriggerHurt, bool);
				MEMBER(hurt_think_period, server::CTriggerHurt, float);
				MEMBER(on_hurt, server::CTriggerHurt, entity2::CEntityIOOutput);
				MEMBER(on_hurt_player, server::CTriggerHurt, entity2::CEntityIOOutput);
				MEMBER(hurt_entities, server::CTriggerHurt, cutl_vector<chandle<server::CBaseEntity>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerHurt

			class CNavVolumeCalculatedVector : public navlib::CNavVolume {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNavVolumeCalculatedVector

			class CPhysConstraint : public server::CLogicalEntity {
				MEMBER(name_attach1, server::CPhysConstraint, CUtlSymbolLarge);
				MEMBER(name_attach2, server::CPhysConstraint, CUtlSymbolLarge);
				MEMBER(h_attach1, server::CPhysConstraint, chandle<server::CBaseEntity>);
				MEMBER(h_attach2, server::CPhysConstraint, chandle<server::CBaseEntity>);
				MEMBER(name_attachment1, server::CPhysConstraint, CUtlSymbolLarge);
				MEMBER(name_attachment2, server::CPhysConstraint, CUtlSymbolLarge);
				MEMBER(break_sound, server::CPhysConstraint, CUtlSymbolLarge);
				MEMBER(force_limit, server::CPhysConstraint, float);
				MEMBER(torque_limit, server::CPhysConstraint, float);
				MEMBER(teleport_tick, server::CPhysConstraint, uint32_t);
				MEMBER(min_teleport_distance, server::CPhysConstraint, float);
				MEMBER(b_snap_object_positions, server::CPhysConstraint, bool);
				MEMBER(on_break, server::CPhysConstraint, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysConstraint

			class CPlayer_MovementServices : public client::CPlayerPawnComponent {
				MEMBER(n_impulse, server::CPlayer_MovementServices, int32_t);
				MEMBER(n_buttons, server::CPlayer_MovementServices, client::CInButtonState);
				MEMBER(n_queued_button_down_mask, server::CPlayer_MovementServices, uint64_t);
				MEMBER(n_queued_button_change_mask, server::CPlayer_MovementServices, uint64_t);
				MEMBER(n_button_double_pressed, server::CPlayer_MovementServices, uint64_t);
				MEMBER_ARR(p_button_pressed_cmd_number, server::CPlayer_MovementServices, 64, uint32_t);
				MEMBER(n_last_command_number_processed, server::CPlayer_MovementServices, uint32_t);
				MEMBER(n_toggle_button_down_mask, server::CPlayer_MovementServices, uint64_t);
				MEMBER(fl_maxspeed, server::CPlayer_MovementServices, float);
				MEMBER_ARR(arr_force_subtick_move_when, server::CPlayer_MovementServices, 4, float);
				MEMBER(fl_forward_move, server::CPlayer_MovementServices, float);
				MEMBER(fl_left_move, server::CPlayer_MovementServices, float);
				MEMBER(fl_up_move, server::CPlayer_MovementServices, float);
				MEMBER(vec_last_movement_impulses, server::CPlayer_MovementServices, Vector);
				MEMBER(vec_old_view_angles, server::CPlayer_MovementServices, QAngle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_MovementServices

			class CPhysWheelConstraint : public server::CPhysConstraint {
				MEMBER(fl_suspension_frequency, server::CPhysWheelConstraint, float);
				MEMBER(fl_suspension_damping_ratio, server::CPhysWheelConstraint, float);
				MEMBER(fl_suspension_height_offset, server::CPhysWheelConstraint, float);
				MEMBER(b_enable_suspension_limit, server::CPhysWheelConstraint, bool);
				MEMBER(fl_min_suspension_offset, server::CPhysWheelConstraint, float);
				MEMBER(fl_max_suspension_offset, server::CPhysWheelConstraint, float);
				MEMBER(b_enable_steering_limit, server::CPhysWheelConstraint, bool);
				MEMBER(fl_min_steering_angle, server::CPhysWheelConstraint, float);
				MEMBER(fl_max_steering_angle, server::CPhysWheelConstraint, float);
				MEMBER(fl_steering_axis_friction, server::CPhysWheelConstraint, float);
				MEMBER(fl_spin_axis_friction, server::CPhysWheelConstraint, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysWheelConstraint

			class CPhysFixed : public server::CPhysConstraint {
				MEMBER(fl_linear_frequency, server::CPhysFixed, float);
				MEMBER(fl_linear_damping_ratio, server::CPhysFixed, float);
				MEMBER(fl_angular_frequency, server::CPhysFixed, float);
				MEMBER(fl_angular_damping_ratio, server::CPhysFixed, float);
				MEMBER(b_enable_linear_constraint, server::CPhysFixed, bool);
				MEMBER(b_enable_angular_constraint, server::CPhysFixed, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysFixed

			class CNavVolumeBreadthFirstSearch : public server::CNavVolumeCalculatedVector {
				MEMBER(v_start_pos, server::CNavVolumeBreadthFirstSearch, Vector);
				MEMBER(fl_search_dist, server::CNavVolumeBreadthFirstSearch, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNavVolumeBreadthFirstSearch

			class CCSPlayerController_InGameMoneyServices : public client::CPlayerControllerComponent {
				MEMBER(b_receives_money_next_round, server::CCSPlayerController_InGameMoneyServices, bool);
				MEMBER(i_money_earned_for_next_round, server::CCSPlayerController_InGameMoneyServices, int32_t);
				MEMBER(i_account, server::CCSPlayerController_InGameMoneyServices, int32_t);
				MEMBER(i_start_account, server::CCSPlayerController_InGameMoneyServices, int32_t);
				MEMBER(i_total_cash_spent, server::CCSPlayerController_InGameMoneyServices, int32_t);
				MEMBER(i_cash_spent_this_round, server::CCSPlayerController_InGameMoneyServices, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerController_InGameMoneyServices

			class CSoundOpvarSetOBBEntity : public server::CSoundOpvarSetAABBEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundOpvarSetOBBEntity

			class CWeaponM4A1 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponM4A1

			class CTonemapController2Alias_env_tonemap_controller2 : public server::CTonemapController2 {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTonemapController2Alias_env_tonemap_controller2

			class CCSPlayerController_ActionTrackingServices : public client::CPlayerControllerComponent {
				MEMBER(per_round_stats, server::CCSPlayerController_ActionTrackingServices, CUtlVectorEmbeddedNetworkVar<server::CSPerRoundStats_t>);
				MEMBER(match_stats, server::CCSPlayerController_ActionTrackingServices, server::CSMatchStats_t);
				MEMBER(i_num_round_kills, server::CCSPlayerController_ActionTrackingServices, int32_t);
				MEMBER(i_num_round_kills_headshots, server::CCSPlayerController_ActionTrackingServices, int32_t);
				MEMBER(un_total_round_damage_dealt, server::CCSPlayerController_ActionTrackingServices, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerController_ActionTrackingServices

			class CPointClientUIWorldTextPanel : public server::CPointClientUIWorldPanel {
				MEMBER_ARR(message_text, server::CPointClientUIWorldTextPanel, 512, char);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointClientUIWorldTextPanel

			class CFish : public server::CBaseAnimGraph {
				MEMBER(pool, server::CFish, chandle<server::CFishPool>);
				MEMBER(id, server::CFish, uint32_t);
				MEMBER(x, server::CFish, float);
				MEMBER(y, server::CFish, float);
				MEMBER(z, server::CFish, float);
				MEMBER(angle, server::CFish, float);
				MEMBER(angle_change, server::CFish, float);
				MEMBER(forward, server::CFish, Vector);
				MEMBER(perp, server::CFish, Vector);
				MEMBER(pool_origin, server::CFish, Vector);
				MEMBER(water_level, server::CFish, float);
				MEMBER(speed, server::CFish, float);
				MEMBER(desired_speed, server::CFish, float);
				MEMBER(calm_speed, server::CFish, float);
				MEMBER(panic_speed, server::CFish, float);
				MEMBER(avoid_range, server::CFish, float);
				MEMBER(turn_timer, server::CFish, server::CountdownTimer);
				MEMBER(turn_clockwise, server::CFish, bool);
				MEMBER(go_timer, server::CFish, server::CountdownTimer);
				MEMBER(move_timer, server::CFish, server::CountdownTimer);
				MEMBER(panic_timer, server::CFish, server::CountdownTimer);
				MEMBER(disperse_timer, server::CFish, server::CountdownTimer);
				MEMBER(proximity_timer, server::CFish, server::CountdownTimer);
				MEMBER(visible, server::CFish, cutl_vector<server::CFish*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFish

			class CEnvFireSource : public server::CBaseEntity {
				MEMBER(b_enabled, server::CEnvFireSource, bool);
				MEMBER(radius, server::CEnvFireSource, float);
				MEMBER(damage, server::CEnvFireSource, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvFireSource

			class CDebugHistory : public server::CBaseEntity {
				MEMBER(n_npc_events, server::CDebugHistory, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CDebugHistory

			class CInfoData : public server::CServerOnlyEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoData

			class CHostageCarriableProp : public server::CBaseAnimGraph {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHostageCarriableProp

			class CFuncRotating : public server::CBaseModelEntity {
				MEMBER(on_stopped, server::CFuncRotating, entity2::CEntityIOOutput);
				MEMBER(on_started, server::CFuncRotating, entity2::CEntityIOOutput);
				MEMBER(on_reached_start, server::CFuncRotating, entity2::CEntityIOOutput);
				MEMBER(local_rotation_vector, server::CFuncRotating, RotationVector);
				MEMBER(fl_fan_friction, server::CFuncRotating, float);
				MEMBER(fl_attenuation, server::CFuncRotating, float);
				MEMBER(fl_volume, server::CFuncRotating, float);
				MEMBER(fl_target_speed, server::CFuncRotating, float);
				MEMBER(fl_max_speed, server::CFuncRotating, float);
				MEMBER(fl_block_damage, server::CFuncRotating, float);
				MEMBER(noise_running, server::CFuncRotating, CUtlSymbolLarge);
				MEMBER(b_reversed, server::CFuncRotating, bool);
				MEMBER(b_accel_decel, server::CFuncRotating, bool);
				MEMBER(prev_local_angles, server::CFuncRotating, QAngle);
				MEMBER(ang_start, server::CFuncRotating, QAngle);
				MEMBER(b_stop_at_start_pos, server::CFuncRotating, bool);
				MEMBER(vec_client_origin, server::CFuncRotating, Vector);
				MEMBER(vec_client_angles, server::CFuncRotating, QAngle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncRotating

			class CBaseCSGrenadeProjectile : public server::CBaseGrenade {
				MEMBER(v_initial_position, server::CBaseCSGrenadeProjectile, Vector);
				MEMBER(v_initial_velocity, server::CBaseCSGrenadeProjectile, Vector);
				MEMBER(n_bounces, server::CBaseCSGrenadeProjectile, int32_t);
				MEMBER(n_explode_effect_index, server::CBaseCSGrenadeProjectile, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(n_explode_effect_tick_begin, server::CBaseCSGrenadeProjectile, int32_t);
				MEMBER(vec_explode_effect_origin, server::CBaseCSGrenadeProjectile, Vector);
				MEMBER(fl_spawn_time, server::CBaseCSGrenadeProjectile, entity2::GameTime_t);
				MEMBER(un_ogsextra_flags, server::CBaseCSGrenadeProjectile, uint8_t);
				MEMBER(b_detonation_recorded, server::CBaseCSGrenadeProjectile, bool);
				MEMBER(n_item_index, server::CBaseCSGrenadeProjectile, uint16_t);
				MEMBER(vec_original_spawn_location, server::CBaseCSGrenadeProjectile, Vector);
				MEMBER(fl_last_bounce_sound_time, server::CBaseCSGrenadeProjectile, entity2::GameTime_t);
				MEMBER(vec_grenade_spin, server::CBaseCSGrenadeProjectile, RotationVector);
				MEMBER(vec_last_hit_surface_normal, server::CBaseCSGrenadeProjectile, Vector);
				MEMBER(n_ticks_at_zero_velocity, server::CBaseCSGrenadeProjectile, int32_t);
				MEMBER(b_has_ever_hit_player, server::CBaseCSGrenadeProjectile, bool);
				MEMBER(b_clear_from_players, server::CBaseCSGrenadeProjectile, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseCSGrenadeProjectile

			class CCSGO_TeamIntroCounterTerroristPosition : public server::CCSGO_TeamIntroCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGO_TeamIntroCounterTerroristPosition

			class CEnvVolumetricFogVolume : public server::CBaseEntity {
				MEMBER(b_active, server::CEnvVolumetricFogVolume, bool);
				MEMBER(v_box_mins, server::CEnvVolumetricFogVolume, Vector);
				MEMBER(v_box_maxs, server::CEnvVolumetricFogVolume, Vector);
				MEMBER(b_start_disabled, server::CEnvVolumetricFogVolume, bool);
				MEMBER(fl_strength, server::CEnvVolumetricFogVolume, float);
				MEMBER(n_falloff_shape, server::CEnvVolumetricFogVolume, int32_t);
				MEMBER(fl_falloff_exponent, server::CEnvVolumetricFogVolume, float);
				MEMBER(fl_height_fog_depth, server::CEnvVolumetricFogVolume, float);
				MEMBER(f_height_fog_edge_width, server::CEnvVolumetricFogVolume, float);
				MEMBER(f_indirect_light_strength, server::CEnvVolumetricFogVolume, float);
				MEMBER(f_sun_light_strength, server::CEnvVolumetricFogVolume, float);
				MEMBER(f_noise_strength, server::CEnvVolumetricFogVolume, float);
				MEMBER(b_override_indirect_light_strength, server::CEnvVolumetricFogVolume, bool);
				MEMBER(b_override_sun_light_strength, server::CEnvVolumetricFogVolume, bool);
				MEMBER(b_override_noise_strength, server::CEnvVolumetricFogVolume, bool);
				MEMBER(b_allow_lpvindirect, server::CEnvVolumetricFogVolume, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvVolumetricFogVolume

			class CAISound : public server::CPointEntity {
				MEMBER(i_sound_type, server::CAISound, server::SoundTypes_t);
				MEMBER(i_sound_flags, server::CAISound, server::SoundFlags_t);
				MEMBER(i_volume, server::CAISound, int32_t);
				MEMBER(i_sound_index, server::CAISound, int32_t);
				MEMBER(fl_duration, server::CAISound, float);
				MEMBER(isz_proxy_entity_name, server::CAISound, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAISound

			class CPointProximitySensor : public server::CPointEntity {
				MEMBER(b_disabled, server::CPointProximitySensor, bool);
				MEMBER(h_target_entity, server::CPointProximitySensor, chandle<server::CBaseEntity>);
				MEMBER(distance, server::CPointProximitySensor, CEntityOutputTemplate<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointProximitySensor

			class CBaseModelEntity : public server::CBaseEntity {
				MEMBER(crender_component, server::CBaseModelEntity, server::CRenderComponent*);
				MEMBER(chitbox_component, server::CBaseModelEntity, server::CHitboxComponent);
				MEMBER(n_destructible_part_initial_state_destructed0, server::CBaseModelEntity, client::HitGroup_t);
				MEMBER(n_destructible_part_initial_state_destructed1, server::CBaseModelEntity, client::HitGroup_t);
				MEMBER(n_destructible_part_initial_state_destructed2, server::CBaseModelEntity, client::HitGroup_t);
				MEMBER(n_destructible_part_initial_state_destructed3, server::CBaseModelEntity, client::HitGroup_t);
				MEMBER(n_destructible_part_initial_state_destructed4, server::CBaseModelEntity, client::HitGroup_t);
				MEMBER(n_last_hit_destructible_part_index, server::CBaseModelEntity, int32_t);
				MEMBER(last_hit_group, server::CBaseModelEntity, client::HitGroup_t);
				MEMBER(fl_dissolve_start_time, server::CBaseModelEntity, entity2::GameTime_t);
				MEMBER(on_ignite, server::CBaseModelEntity, entity2::CEntityIOOutput);
				MEMBER(n_render_mode, server::CBaseModelEntity, client::RenderMode_t);
				MEMBER(n_render_fx, server::CBaseModelEntity, client::RenderFx_t);
				MEMBER(b_allow_fade_in_view, server::CBaseModelEntity, bool);
				MEMBER(clr_render, server::CBaseModelEntity, Color);
				MEMBER(vec_render_attributes, server::CBaseModelEntity, CUtlVectorEmbeddedNetworkVar<server::EntityRenderAttribute_t>);
				MEMBER(b_render_to_cubemaps, server::CBaseModelEntity, bool);
				MEMBER(b_no_interpolate, server::CBaseModelEntity, bool);
				MEMBER(collision, server::CBaseModelEntity, server::CCollisionProperty);
				MEMBER(glow, server::CBaseModelEntity, server::CGlowProperty);
				MEMBER(fl_glow_backface_mult, server::CBaseModelEntity, float);
				MEMBER(fade_min_dist, server::CBaseModelEntity, float);
				MEMBER(fade_max_dist, server::CBaseModelEntity, float);
				MEMBER(fl_fade_scale, server::CBaseModelEntity, float);
				MEMBER(fl_shadow_strength, server::CBaseModelEntity, float);
				MEMBER(n_object_culling, server::CBaseModelEntity, uint8_t);
				MEMBER(n_add_decal, server::CBaseModelEntity, int32_t);
				MEMBER(v_decal_position, server::CBaseModelEntity, Vector);
				MEMBER(v_decal_forward_axis, server::CBaseModelEntity, Vector);
				MEMBER(fl_decal_heal_blood_rate, server::CBaseModelEntity, float);
				MEMBER(fl_decal_heal_height_rate, server::CBaseModelEntity, float);
				MEMBER(config_entities_to_propagate_material_decals_to, server::CBaseModelEntity, CNetworkUtlVectorBase<chandle<server::CBaseModelEntity>>);
				MEMBER(vec_view_offset, server::CBaseModelEntity, client::CNetworkViewOffsetVector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseModelEntity

			class CPhysMagnet : public server::CBaseAnimGraph {
				MEMBER(on_magnet_attach, server::CPhysMagnet, entity2::CEntityIOOutput);
				MEMBER(on_magnet_detach, server::CPhysMagnet, entity2::CEntityIOOutput);
				MEMBER(mass_scale, server::CPhysMagnet, float);
				MEMBER(force_limit, server::CPhysMagnet, float);
				MEMBER(torque_limit, server::CPhysMagnet, float);
				MEMBER(magnetted_entities, server::CPhysMagnet, cutl_vector<server::magnetted_objects_t>);
				MEMBER(b_active, server::CPhysMagnet, bool);
				MEMBER(b_has_hit_something, server::CPhysMagnet, bool);
				MEMBER(fl_total_mass, server::CPhysMagnet, float);
				MEMBER(fl_radius, server::CPhysMagnet, float);
				MEMBER(fl_next_suck_time, server::CPhysMagnet, entity2::GameTime_t);
				MEMBER(i_max_objects_attached, server::CPhysMagnet, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysMagnet

			class CFuncNavBlocker : public server::CBaseModelEntity {
				MEMBER(b_disabled, server::CFuncNavBlocker, bool);
				MEMBER(n_blocked_team_number, server::CFuncNavBlocker, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncNavBlocker

			class CRagdollMagnet : public server::CPointEntity {
				MEMBER(b_disabled, server::CRagdollMagnet, bool);
				MEMBER(radius, server::CRagdollMagnet, float);
				MEMBER(force, server::CRagdollMagnet, float);
				MEMBER(axis, server::CRagdollMagnet, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRagdollMagnet

			class CPhysBox : public server::CBreakable {
				MEMBER(damage_type, server::CPhysBox, int32_t);
				MEMBER(damage_to_enable_motion, server::CPhysBox, int32_t);
				MEMBER(fl_force_to_enable_motion, server::CPhysBox, float);
				MEMBER(ang_preferred_carry_angles, server::CPhysBox, QAngle);
				MEMBER(b_not_solid_to_world, server::CPhysBox, bool);
				MEMBER(b_enable_use_output, server::CPhysBox, bool);
				MEMBER(i_exploitable_by_player, server::CPhysBox, int32_t);
				MEMBER(fl_touch_output_per_entity_delay, server::CPhysBox, float);
				MEMBER(on_damaged, server::CPhysBox, entity2::CEntityIOOutput);
				MEMBER(on_awakened, server::CPhysBox, entity2::CEntityIOOutput);
				MEMBER(on_motion_enabled, server::CPhysBox, entity2::CEntityIOOutput);
				MEMBER(on_player_use, server::CPhysBox, entity2::CEntityIOOutput);
				MEMBER(on_start_touch, server::CPhysBox, entity2::CEntityIOOutput);
				MEMBER(h_carrying_player, server::CPhysBox, chandle<server::CBasePlayerPawn>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysBox

			class CHEGrenadeProjectile : public server::CBaseCSGrenadeProjectile {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHEGrenadeProjectile

			class CPhysExplosion : public server::CPointEntity {
				MEMBER(b_explode_on_spawn, server::CPhysExplosion, bool);
				MEMBER(fl_magnitude, server::CPhysExplosion, float);
				MEMBER(fl_damage, server::CPhysExplosion, float);
				MEMBER(radius, server::CPhysExplosion, float);
				MEMBER(target_entity_name, server::CPhysExplosion, CUtlSymbolLarge);
				MEMBER(fl_inner_radius, server::CPhysExplosion, float);
				MEMBER(fl_push_scale, server::CPhysExplosion, float);
				MEMBER(b_convert_to_debris_when_possible, server::CPhysExplosion, bool);
				MEMBER(on_pushed_player, server::CPhysExplosion, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysExplosion

			class CCSPlayerResource : public server::CBaseEntity {
				MEMBER_ARR(b_hostage_alive, server::CCSPlayerResource, 12, bool);
				MEMBER_ARR(is_hostage_following_someone, server::CCSPlayerResource, 12, bool);
				MEMBER_ARR(i_hostage_entity_ids, server::CCSPlayerResource, 12, CEntityIndex);
				MEMBER(bombsite_center_a, server::CCSPlayerResource, Vector);
				MEMBER(bombsite_center_b, server::CCSPlayerResource, Vector);
				MEMBER_ARR(hostage_rescue_x, server::CCSPlayerResource, 4, int32_t);
				MEMBER_ARR(hostage_rescue_y, server::CCSPlayerResource, 4, int32_t);
				MEMBER_ARR(hostage_rescue_z, server::CCSPlayerResource, 4, int32_t);
				MEMBER(b_end_match_next_map_all_voted, server::CCSPlayerResource, bool);
				MEMBER(found_goal_positions, server::CCSPlayerResource, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerResource

			class CPlayer_WeaponServices : public client::CPlayerPawnComponent {
				MEMBER(h_my_weapons, server::CPlayer_WeaponServices, CNetworkUtlVectorBase<chandle<server::CBasePlayerWeapon>>);
				MEMBER(h_active_weapon, server::CPlayer_WeaponServices, chandle<server::CBasePlayerWeapon>);
				MEMBER(h_last_weapon, server::CPlayer_WeaponServices, chandle<server::CBasePlayerWeapon>);
				MEMBER_ARR(i_ammo, server::CPlayer_WeaponServices, 32, uint16_t);
				MEMBER(b_prevent_weapon_pickup, server::CPlayer_WeaponServices, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_WeaponServices

			class CWeaponUMP45 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponUMP45

			class CPhysicalButton : public server::CBaseButton {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysicalButton

			class CShatterGlassShardPhysics : public server::CPhysicsProp {
				MEMBER(b_debris, server::CShatterGlassShardPhysics, bool);
				MEMBER(h_parent_shard, server::CShatterGlassShardPhysics, uint32_t);
				MEMBER(shard_desc, server::CShatterGlassShardPhysics, server::shard_model_desc_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CShatterGlassShardPhysics

			class CCSObserver_CameraServices : public server::CCSPlayerBase_CameraServices {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSObserver_CameraServices

			class CTriggerImpact : public server::CTriggerMultiple {
				MEMBER(fl_magnitude, server::CTriggerImpact, float);
				MEMBER(fl_noise, server::CTriggerImpact, float);
				MEMBER(fl_viewkick, server::CTriggerImpact, float);
				MEMBER(p_output_force, server::CTriggerImpact, CEntityOutputTemplate<Vector>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerImpact

			class CMapInfo : public server::CPointEntity {
				MEMBER(i_buying_status, server::CMapInfo, int32_t);
				MEMBER(fl_bomb_radius, server::CMapInfo, float);
				MEMBER(i_pet_population, server::CMapInfo, int32_t);
				MEMBER(b_use_normal_spawns_for_dm, server::CMapInfo, bool);
				MEMBER(b_disable_auto_generated_dmspawns, server::CMapInfo, bool);
				MEMBER(fl_bot_max_vision_distance, server::CMapInfo, float);
				MEMBER(i_hostage_count, server::CMapInfo, int32_t);
				MEMBER(b_fade_player_visibility_far_z, server::CMapInfo, bool);
				MEMBER(b_rain_trace_to_sky_enabled, server::CMapInfo, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMapInfo

			class CPathParticleRopeAlias_path_particle_rope_clientside : public server::CPathParticleRope {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathParticleRopeAlias_path_particle_rope_clientside

			class CSun : public server::CBaseModelEntity {
				MEMBER(v_direction, server::CSun, Vector);
				MEMBER(clr_overlay, server::CSun, Color);
				MEMBER(isz_effect_name, server::CSun, CUtlSymbolLarge);
				MEMBER(isz_sseffect_name, server::CSun, CUtlSymbolLarge);
				MEMBER(b_on, server::CSun, bool);
				MEMBER(bmax_color, server::CSun, bool);
				MEMBER(fl_size, server::CSun, float);
				MEMBER(fl_rotation, server::CSun, float);
				MEMBER(fl_haze_scale, server::CSun, float);
				MEMBER(fl_alpha_haze, server::CSun, float);
				MEMBER(fl_alpha_hdr, server::CSun, float);
				MEMBER(fl_alpha_scale, server::CSun, float);
				MEMBER(fl_hdrcolor_scale, server::CSun, float);
				MEMBER(fl_far_zscale, server::CSun, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSun

			class CTriggerDetectBulletFire : public server::CBaseTrigger {
				MEMBER(b_player_fire_only, server::CTriggerDetectBulletFire, bool);
				MEMBER(on_detected_bullet_fire, server::CTriggerDetectBulletFire, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerDetectBulletFire

			class CPathParticleRope : public server::CBaseEntity {
				MEMBER(b_start_active, server::CPathParticleRope, bool);
				MEMBER(fl_max_simulation_time, server::CPathParticleRope, float);
				MEMBER(isz_effect_name, server::CPathParticleRope, CUtlSymbolLarge);
				MEMBER(path_nodes__name, server::CPathParticleRope, cutl_vector<CUtlSymbolLarge>);
				MEMBER(fl_particle_spacing, server::CPathParticleRope, float);
				MEMBER(fl_slack, server::CPathParticleRope, float);
				MEMBER(fl_radius, server::CPathParticleRope, float);
				MEMBER(color_tint, server::CPathParticleRope, Color);
				MEMBER(n_effect_state, server::CPathParticleRope, int32_t);
				MEMBER(i_effect_index, server::CPathParticleRope, CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>);
				MEMBER(path_nodes__position, server::CPathParticleRope, CNetworkUtlVectorBase<Vector>);
				MEMBER(path_nodes__tangent_in, server::CPathParticleRope, CNetworkUtlVectorBase<Vector>);
				MEMBER(path_nodes__tangent_out, server::CPathParticleRope, CNetworkUtlVectorBase<Vector>);
				MEMBER(path_nodes__color, server::CPathParticleRope, CNetworkUtlVectorBase<Vector>);
				MEMBER(path_nodes__pin_enabled, server::CPathParticleRope, CNetworkUtlVectorBase<bool>);
				MEMBER(path_nodes__radius_scale, server::CPathParticleRope, CNetworkUtlVectorBase<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathParticleRope

			class CWorld : public server::CBaseModelEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWorld

			class CPointGiveAmmo : public server::CPointEntity {
				MEMBER(p_activator, server::CPointGiveAmmo, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointGiveAmmo

			class CFuncMoveLinearAlias_momentary_door : public server::CFuncMoveLinear {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncMoveLinearAlias_momentary_door

			class CEnvExplosion : public server::CModelPointEntity {
				MEMBER(i_magnitude, server::CEnvExplosion, int32_t);
				MEMBER(fl_player_damage, server::CEnvExplosion, float);
				MEMBER(i_radius_override, server::CEnvExplosion, int32_t);
				MEMBER(fl_inner_radius, server::CEnvExplosion, float);
				MEMBER(sprite_scale, server::CEnvExplosion, int32_t);
				MEMBER(fl_damage_force, server::CEnvExplosion, float);
				MEMBER(h_inflictor, server::CEnvExplosion, chandle<server::CBaseEntity>);
				MEMBER(i_custom_damage_type, server::CEnvExplosion, client::DamageTypes_t);
				MEMBER(b_create_debris, server::CEnvExplosion, bool);
				MEMBER(isz_explosion_type, server::CEnvExplosion, CUtlSymbolLarge);
				MEMBER(isz_custom_effect_name, server::CEnvExplosion, CUtlSymbolLarge);
				MEMBER(isz_custom_sound_name, server::CEnvExplosion, CUtlSymbolLarge);
				MEMBER(i_class_ignore, server::CEnvExplosion, client::Class_T);
				MEMBER(i_class_ignore2, server::CEnvExplosion, client::Class_T);
				MEMBER(isz_entity_ignore_name, server::CEnvExplosion, CUtlSymbolLarge);
				MEMBER(h_entity_ignore, server::CEnvExplosion, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvExplosion

			class CPlayerVisibility : public server::CBaseEntity {
				MEMBER(fl_visibility_strength, server::CPlayerVisibility, float);
				MEMBER(fl_fog_distance_multiplier, server::CPlayerVisibility, float);
				MEMBER(fl_fog_max_density_multiplier, server::CPlayerVisibility, float);
				MEMBER(fl_fade_time, server::CPlayerVisibility, float);
				MEMBER(b_start_disabled, server::CPlayerVisibility, bool);
				MEMBER(b_is_enabled, server::CPlayerVisibility, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayerVisibility

			class CServerOnlyPointEntity : public server::CServerOnlyEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CServerOnlyPointEntity

			class CFuncMover : public server::CBaseModelEntity {
				MEMBER(b_create_movable_nav_mesh, server::CFuncMover, bool);
				MEMBER(isz_path_name, server::CFuncMover, CUtlSymbolLarge);
				MEMBER(h_path_mover, server::CFuncMover, chandle<server::CPathMover>);
				MEMBER(isz_path_node_start, server::CFuncMover, CUtlSymbolLarge);
				MEMBER(e_move_type, server::CFuncMover, server::CFuncMover_Move_t);
				MEMBER(b_is_reversing, server::CFuncMover, bool);
				MEMBER(v_target, server::CFuncMover, Vector);
				MEMBER(fl_start_speed, server::CFuncMover, float);
				MEMBER(fl_path_location, server::CFuncMover, float);
				MEMBER(fl_t, server::CFuncMover, float);
				MEMBER(n_current_node_index, server::CFuncMover, int32_t);
				MEMBER(n_previous_node_index, server::CFuncMover, int32_t);
				MEMBER(b_fixed_orientation, server::CFuncMover, bool);
				MEMBER(b_fixed_pitch, server::CFuncMover, bool);
				MEMBER(e_solid_type, server::CFuncMover, client::SolidType_t);
				MEMBER(b_is_moving, server::CFuncMover, bool);
				MEMBER(fl_time_to_reach_max_speed, server::CFuncMover, float);
				MEMBER(fl_distance_to_reach_max_speed, server::CFuncMover, float);
				MEMBER(fl_time_to_reach_zero_speed, server::CFuncMover, float);
				MEMBER(fl_distance_to_reach_zero_speed, server::CFuncMover, float);
				MEMBER(fl_time_movement_start, server::CFuncMover, entity2::GameTime_t);
				MEMBER(fl_time_movement_stop, server::CFuncMover, entity2::GameTime_t);
				MEMBER(h_stop_at_node, server::CFuncMover, chandle<server::CMoverPathNode>);
				MEMBER(fl_path_location_to_begin_stop, server::CFuncMover, float);
				MEMBER(isz_start_forward_sound, server::CFuncMover, CUtlSymbolLarge);
				MEMBER(isz_loop_forward_sound, server::CFuncMover, CUtlSymbolLarge);
				MEMBER(isz_stop_forward_sound, server::CFuncMover, CUtlSymbolLarge);
				MEMBER(isz_start_reverse_sound, server::CFuncMover, CUtlSymbolLarge);
				MEMBER(isz_loop_reverse_sound, server::CFuncMover, CUtlSymbolLarge);
				MEMBER(isz_stop_reverse_sound, server::CFuncMover, CUtlSymbolLarge);
				MEMBER(isz_arrive_at_destination_sound, server::CFuncMover, CUtlSymbolLarge);
				MEMBER(on_movement_end, server::CFuncMover, entity2::CEntityIOOutput);
				MEMBER(b_start_at_end, server::CFuncMover, bool);
				MEMBER(e_orientation_update, server::CFuncMover, server::CFuncMover_OrientationUpdate_t);
				MEMBER(fl_time_start_orientation_change, server::CFuncMover, entity2::GameTime_t);
				MEMBER(fl_time_to_blend_to_new_orientation, server::CFuncMover, float);
				MEMBER(fl_duration_blend_to_new_orientation_ran, server::CFuncMover, float);
				MEMBER(q_original_orientation, server::CFuncMover, Quaternion);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncMover

			class CGameEnd : public server::CRulePointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGameEnd

			class CFlashbangProjectile : public server::CBaseCSGrenadeProjectile {
				MEMBER(fl_time_to_detonate, server::CFlashbangProjectile, float);
				MEMBER(num_opponents_hit, server::CFlashbangProjectile, uint8_t);
				MEMBER(num_teammates_hit, server::CFlashbangProjectile, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFlashbangProjectile

			class CTriggerCallback : public server::CBaseTrigger {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerCallback

			class CBubbling : public server::CBaseModelEntity {
				MEMBER(density, server::CBubbling, int32_t);
				MEMBER(frequency, server::CBubbling, int32_t);
				MEMBER(state, server::CBubbling, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBubbling

			class CColorCorrectionVolume : public server::CBaseTrigger {
				MEMBER(b_enabled, server::CColorCorrectionVolume, bool);
				MEMBER(max_weight, server::CColorCorrectionVolume, float);
				MEMBER(fade_duration, server::CColorCorrectionVolume, float);
				MEMBER(b_start_disabled, server::CColorCorrectionVolume, bool);
				MEMBER(weight, server::CColorCorrectionVolume, float);
				MEMBER_ARR(lookup_filename, server::CColorCorrectionVolume, 512, char);
				MEMBER(last_enter_weight, server::CColorCorrectionVolume, float);
				MEMBER(last_enter_time, server::CColorCorrectionVolume, entity2::GameTime_t);
				MEMBER(last_exit_weight, server::CColorCorrectionVolume, float);
				MEMBER(last_exit_time, server::CColorCorrectionVolume, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CColorCorrectionVolume

			class CFilterEnemy : public server::CBaseFilter {
				MEMBER(isz_enemy_name, server::CFilterEnemy, CUtlSymbolLarge);
				MEMBER(fl_radius, server::CFilterEnemy, float);
				MEMBER(fl_outer_radius, server::CFilterEnemy, float);
				MEMBER(n_max_squadmates_per_enemy, server::CFilterEnemy, int32_t);
				MEMBER(isz_player_name, server::CFilterEnemy, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFilterEnemy

			class CShower : public server::CModelPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CShower

			class CWeaponTec9 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponTec9

			class CEnvCubemapFog : public server::CBaseEntity {
				MEMBER(fl_end_distance, server::CEnvCubemapFog, float);
				MEMBER(fl_start_distance, server::CEnvCubemapFog, float);
				MEMBER(fl_fog_falloff_exponent, server::CEnvCubemapFog, float);
				MEMBER(b_height_fog_enabled, server::CEnvCubemapFog, bool);
				MEMBER(fl_fog_height_width, server::CEnvCubemapFog, float);
				MEMBER(fl_fog_height_end, server::CEnvCubemapFog, float);
				MEMBER(fl_fog_height_start, server::CEnvCubemapFog, float);
				MEMBER(fl_fog_height_exponent, server::CEnvCubemapFog, float);
				MEMBER(fl_lodbias, server::CEnvCubemapFog, float);
				MEMBER(b_active, server::CEnvCubemapFog, bool);
				MEMBER(b_start_disabled, server::CEnvCubemapFog, bool);
				MEMBER(fl_fog_max_opacity, server::CEnvCubemapFog, float);
				MEMBER(n_cubemap_source_type, server::CEnvCubemapFog, int32_t);
				MEMBER(h_sky_material, server::CEnvCubemapFog, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);
				MEMBER(isz_sky_entity, server::CEnvCubemapFog, CUtlSymbolLarge);
				MEMBER(h_fog_cubemap_texture, server::CEnvCubemapFog, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(b_has_height_fog_end, server::CEnvCubemapFog, bool);
				MEMBER(b_first_time, server::CEnvCubemapFog, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvCubemapFog

			class CLogicProximity : public server::CPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicProximity

			class CCSPlayerController : public server::CBasePlayerController {
				MEMBER(p_in_game_money_services, server::CCSPlayerController, server::CCSPlayerController_InGameMoneyServices*);
				MEMBER(p_inventory_services, server::CCSPlayerController, server::CCSPlayerController_InventoryServices*);
				MEMBER(p_action_tracking_services, server::CCSPlayerController, server::CCSPlayerController_ActionTrackingServices*);
				MEMBER(p_damage_services, server::CCSPlayerController, server::CCSPlayerController_DamageServices*);
				MEMBER(i_ping, server::CCSPlayerController, uint32_t);
				MEMBER(b_has_communication_abuse_mute, server::CCSPlayerController, bool);
				MEMBER(sz_crosshair_codes, server::CCSPlayerController, CUtlSymbolLarge);
				MEMBER(i_pending_team_num, server::CCSPlayerController, uint8_t);
				MEMBER(fl_force_team_time, server::CCSPlayerController, entity2::GameTime_t);
				MEMBER(i_comp_teammate_color, server::CCSPlayerController, int32_t);
				MEMBER(b_ever_played_on_team, server::CCSPlayerController, bool);
				MEMBER(b_attempted_to_get_color, server::CCSPlayerController, bool);
				MEMBER(i_teammate_preferred_color, server::CCSPlayerController, int32_t);
				MEMBER(b_team_changed, server::CCSPlayerController, bool);
				MEMBER(b_in_switch_team, server::CCSPlayerController, bool);
				MEMBER(b_has_seen_join_game, server::CCSPlayerController, bool);
				MEMBER(b_just_became_spectator, server::CCSPlayerController, bool);
				MEMBER(b_switch_teams_on_next_round_reset, server::CCSPlayerController, bool);
				MEMBER(b_remove_all_items_on_next_round_reset, server::CCSPlayerController, bool);
				MEMBER(sz_clan, server::CCSPlayerController, CUtlSymbolLarge);
				MEMBER_ARR(sz_clan_name, server::CCSPlayerController, 32, char);
				MEMBER(i_coaching_team, server::CCSPlayerController, int32_t);
				MEMBER(n_player_dominated, server::CCSPlayerController, uint64_t);
				MEMBER(n_player_dominating_me, server::CCSPlayerController, uint64_t);
				MEMBER(i_competitive_ranking, server::CCSPlayerController, int32_t);
				MEMBER(i_competitive_wins, server::CCSPlayerController, int32_t);
				MEMBER(i_competitive_rank_type, server::CCSPlayerController, int8_t);
				MEMBER(i_competitive_ranking_predicted__win, server::CCSPlayerController, int32_t);
				MEMBER(i_competitive_ranking_predicted__loss, server::CCSPlayerController, int32_t);
				MEMBER(i_competitive_ranking_predicted__tie, server::CCSPlayerController, int32_t);
				MEMBER(n_end_match_next_map_vote, server::CCSPlayerController, int32_t);
				MEMBER(un_active_quest_id, server::CCSPlayerController, uint16_t);
				MEMBER(n_quest_progress_reason, server::CCSPlayerController, client::QuestProgress_Reason);
				MEMBER(un_player_tv_control_flags, server::CCSPlayerController, uint32_t);
				MEMBER(i_draft_index, server::CCSPlayerController, int32_t);
				MEMBER(ms_queued_mode_disconnection_timestamp, server::CCSPlayerController, uint32_t);
				MEMBER(ui_abandon_recorded_reason, server::CCSPlayerController, uint32_t);
				MEMBER(b_cannot_be_kicked, server::CCSPlayerController, bool);
				MEMBER(b_ever_fully_connected, server::CCSPlayerController, bool);
				MEMBER(b_abandon_allows_surrender, server::CCSPlayerController, bool);
				MEMBER(b_abandon_offers_instant_surrender, server::CCSPlayerController, bool);
				MEMBER(b_disconnection1_min_warning_printed, server::CCSPlayerController, bool);
				MEMBER(b_score_reported, server::CCSPlayerController, bool);
				MEMBER(n_disconnection_tick, server::CCSPlayerController, int32_t);
				MEMBER(b_controlling_bot, server::CCSPlayerController, bool);
				MEMBER(b_has_controlled_bot_this_round, server::CCSPlayerController, bool);
				MEMBER(b_has_been_controlled_by_player_this_round, server::CCSPlayerController, bool);
				MEMBER(n_bots_controlled_this_round, server::CCSPlayerController, int32_t);
				MEMBER(b_can_control_observed_bot, server::CCSPlayerController, bool);
				MEMBER(h_player_pawn, server::CCSPlayerController, chandle<server::CCSPlayerPawn>);
				MEMBER(h_observer_pawn, server::CCSPlayerController, chandle<server::CCSObserverPawn>);
				MEMBER(desired_observer_mode, server::CCSPlayerController, int32_t);
				MEMBER(h_desired_observer_target, server::CCSPlayerController, CEntityHandle);
				MEMBER(b_pawn_is_alive, server::CCSPlayerController, bool);
				MEMBER(i_pawn_health, server::CCSPlayerController, uint32_t);
				MEMBER(i_pawn_armor, server::CCSPlayerController, int32_t);
				MEMBER(b_pawn_has_defuser, server::CCSPlayerController, bool);
				MEMBER(b_pawn_has_helmet, server::CCSPlayerController, bool);
				MEMBER(n_pawn_character_def_index, server::CCSPlayerController, uint16_t);
				MEMBER(i_pawn_lifetime_start, server::CCSPlayerController, int32_t);
				MEMBER(i_pawn_lifetime_end, server::CCSPlayerController, int32_t);
				MEMBER(i_pawn_bot_difficulty, server::CCSPlayerController, int32_t);
				MEMBER(h_original_controller_of_current_pawn, server::CCSPlayerController, chandle<server::CCSPlayerController>);
				MEMBER(i_score, server::CCSPlayerController, int32_t);
				MEMBER(i_round_score, server::CCSPlayerController, int32_t);
				MEMBER(i_rounds_won, server::CCSPlayerController, int32_t);
				MEMBER_ARR(recent_kill_queue, server::CCSPlayerController, 8, uint8_t);
				MEMBER(n_first_kill, server::CCSPlayerController, uint8_t);
				MEMBER(n_kill_count, server::CCSPlayerController, uint8_t);
				MEMBER(b_mvp_no_music, server::CCSPlayerController, bool);
				MEMBER(e_mvp_reason, server::CCSPlayerController, int32_t);
				MEMBER(i_music_kit_id, server::CCSPlayerController, int32_t);
				MEMBER(i_music_kit_mvps, server::CCSPlayerController, int32_t);
				MEMBER(i_mvps, server::CCSPlayerController, int32_t);
				MEMBER(n_update_counter, server::CCSPlayerController, int32_t);
				MEMBER(fl_smoothed_ping, server::CCSPlayerController, float);
				MEMBER(last_held_vote_timer, server::CCSPlayerController, server::IntervalTimer);
				MEMBER(b_show_hints, server::CCSPlayerController, bool);
				MEMBER(i_next_time_check, server::CCSPlayerController, int32_t);
				MEMBER(b_just_did_team_kill, server::CCSPlayerController, bool);
				MEMBER(b_punish_for_team_kill, server::CCSPlayerController, bool);
				MEMBER(b_gave_team_damage_warning, server::CCSPlayerController, bool);
				MEMBER(b_gave_team_damage_warning_this_round, server::CCSPlayerController, bool);
				MEMBER(dbl_last_received_packet_plat_float_time, server::CCSPlayerController, double);
				MEMBER(last_team_damage_warning_time, server::CCSPlayerController, entity2::GameTime_t);
				MEMBER(last_time_player_was_disconnected_for_pawns_remove, server::CCSPlayerController, entity2::GameTime_t);
				MEMBER(n_suspicious_hit_count, server::CCSPlayerController, uint32_t);
				MEMBER(n_non_suspicious_hit_streak, server::CCSPlayerController, uint32_t);
				MEMBER(b_fire_bullets_seed_synchronized, server::CCSPlayerController, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerController

			class CPointCommentaryNode : public server::CBaseAnimGraph {
				MEMBER(isz_pre_commands, server::CPointCommentaryNode, CUtlSymbolLarge);
				MEMBER(isz_post_commands, server::CPointCommentaryNode, CUtlSymbolLarge);
				MEMBER(isz_commentary_file, server::CPointCommentaryNode, CUtlSymbolLarge);
				MEMBER(isz_view_target, server::CPointCommentaryNode, CUtlSymbolLarge);
				MEMBER(h_view_target, server::CPointCommentaryNode, chandle<server::CBaseEntity>);
				MEMBER(h_view_target_angles, server::CPointCommentaryNode, chandle<server::CBaseEntity>);
				MEMBER(isz_view_position, server::CPointCommentaryNode, CUtlSymbolLarge);
				MEMBER(h_view_position, server::CPointCommentaryNode, chandle<server::CBaseEntity>);
				MEMBER(h_view_position_mover, server::CPointCommentaryNode, chandle<server::CBaseEntity>);
				MEMBER(b_prevent_movement, server::CPointCommentaryNode, bool);
				MEMBER(b_under_crosshair, server::CPointCommentaryNode, bool);
				MEMBER(b_unstoppable, server::CPointCommentaryNode, bool);
				MEMBER(fl_finished_time, server::CPointCommentaryNode, entity2::GameTime_t);
				MEMBER(vec_finish_origin, server::CPointCommentaryNode, Vector);
				MEMBER(vec_original_angles, server::CPointCommentaryNode, QAngle);
				MEMBER(vec_finish_angles, server::CPointCommentaryNode, QAngle);
				MEMBER(b_prevent_changes_while_moving, server::CPointCommentaryNode, bool);
				MEMBER(b_disabled, server::CPointCommentaryNode, bool);
				MEMBER(vec_teleport_origin, server::CPointCommentaryNode, Vector);
				MEMBER(fl_aborted_playback_at, server::CPointCommentaryNode, entity2::GameTime_t);
				MEMBER(p_on_commentary_started, server::CPointCommentaryNode, entity2::CEntityIOOutput);
				MEMBER(p_on_commentary_stopped, server::CPointCommentaryNode, entity2::CEntityIOOutput);
				MEMBER(b_active, server::CPointCommentaryNode, bool);
				MEMBER(fl_start_time, server::CPointCommentaryNode, entity2::GameTime_t);
				MEMBER(fl_start_time_in_commentary, server::CPointCommentaryNode, float);
				MEMBER(isz_title, server::CPointCommentaryNode, CUtlSymbolLarge);
				MEMBER(isz_speakers, server::CPointCommentaryNode, CUtlSymbolLarge);
				MEMBER(i_node_number, server::CPointCommentaryNode, int32_t);
				MEMBER(i_node_number_max, server::CPointCommentaryNode, int32_t);
				MEMBER(b_listened_to, server::CPointCommentaryNode, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointCommentaryNode

			class CPointClientUIWorldPanel : public server::CBaseClientUIEntity {
				MEMBER(b_ignore_input, server::CPointClientUIWorldPanel, bool);
				MEMBER(b_lit, server::CPointClientUIWorldPanel, bool);
				MEMBER(b_follow_player_across_teleport, server::CPointClientUIWorldPanel, bool);
				MEMBER(fl_width, server::CPointClientUIWorldPanel, float);
				MEMBER(fl_height, server::CPointClientUIWorldPanel, float);
				MEMBER(fl_dpi, server::CPointClientUIWorldPanel, float);
				MEMBER(fl_interact_distance, server::CPointClientUIWorldPanel, float);
				MEMBER(fl_depth_offset, server::CPointClientUIWorldPanel, float);
				MEMBER(un_owner_context, server::CPointClientUIWorldPanel, uint32_t);
				MEMBER(un_horizontal_align, server::CPointClientUIWorldPanel, uint32_t);
				MEMBER(un_vertical_align, server::CPointClientUIWorldPanel, uint32_t);
				MEMBER(un_orientation, server::CPointClientUIWorldPanel, uint32_t);
				MEMBER(b_allow_interaction_from_all_scene_worlds, server::CPointClientUIWorldPanel, bool);
				MEMBER(vec_cssclasses, server::CPointClientUIWorldPanel, CNetworkUtlVectorBase<CUtlSymbolLarge>);
				MEMBER(b_opaque, server::CPointClientUIWorldPanel, bool);
				MEMBER(b_no_depth, server::CPointClientUIWorldPanel, bool);
				MEMBER(b_render_backface, server::CPointClientUIWorldPanel, bool);
				MEMBER(b_use_off_screen_indicator, server::CPointClientUIWorldPanel, bool);
				MEMBER(b_exclude_from_save_games, server::CPointClientUIWorldPanel, bool);
				MEMBER(b_grabbable, server::CPointClientUIWorldPanel, bool);
				MEMBER(b_only_render_to_texture, server::CPointClientUIWorldPanel, bool);
				MEMBER(b_disable_mip_gen, server::CPointClientUIWorldPanel, bool);
				MEMBER(n_explicit_image_layout, server::CPointClientUIWorldPanel, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointClientUIWorldPanel

			class CFilterAttributeInt : public server::CBaseFilter {
				MEMBER(s_attribute_name, server::CFilterAttributeInt, CUtlStringToken);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFilterAttributeInt

			class CBasePlayerPawn : public server::CBaseCombatCharacter {
				MEMBER(p_weapon_services, server::CBasePlayerPawn, server::CPlayer_WeaponServices*);
				MEMBER(p_item_services, server::CBasePlayerPawn, server::CPlayer_ItemServices*);
				MEMBER(p_autoaim_services, server::CBasePlayerPawn, server::CPlayer_AutoaimServices*);
				MEMBER(p_observer_services, server::CBasePlayerPawn, server::CPlayer_ObserverServices*);
				MEMBER(p_water_services, server::CBasePlayerPawn, server::CPlayer_WaterServices*);
				MEMBER(p_use_services, server::CBasePlayerPawn, server::CPlayer_UseServices*);
				MEMBER(p_flashlight_services, server::CBasePlayerPawn, server::CPlayer_FlashlightServices*);
				MEMBER(p_camera_services, server::CBasePlayerPawn, server::CPlayer_CameraServices*);
				MEMBER(p_movement_services, server::CBasePlayerPawn, server::CPlayer_MovementServices*);
				MEMBER(server_view_angle_changes, server::CBasePlayerPawn, CUtlVectorEmbeddedNetworkVar<server::ViewAngleServerChange_t>);
				MEMBER(n_highest_generated_server_view_angle_change_index, server::CBasePlayerPawn, uint32_t);
				MEMBER(v_angle, server::CBasePlayerPawn, QAngle);
				MEMBER(v_angle_previous, server::CBasePlayerPawn, QAngle);
				MEMBER(i_hide_hud, server::CBasePlayerPawn, uint32_t);
				MEMBER(skybox3d, server::CBasePlayerPawn, server::sky3dparams_t);
				MEMBER(f_time_last_hurt, server::CBasePlayerPawn, entity2::GameTime_t);
				MEMBER(fl_death_time, server::CBasePlayerPawn, entity2::GameTime_t);
				MEMBER(f_next_suicide_time, server::CBasePlayerPawn, entity2::GameTime_t);
				MEMBER(f_init_hud, server::CBasePlayerPawn, bool);
				MEMBER(p_expresser, server::CBasePlayerPawn, server::CAI_Expresser*);
				MEMBER(h_controller, server::CBasePlayerPawn, chandle<server::CBasePlayerController>);
				MEMBER(f_hltv_replay_delay, server::CBasePlayerPawn, float);
				MEMBER(f_hltv_replay_end, server::CBasePlayerPawn, float);
				MEMBER(i_hltv_replay_entity, server::CBasePlayerPawn, CEntityIndex);
				MEMBER(snd_opvar_latch_data, server::CBasePlayerPawn, cutl_vector<client::sndopvarlatchdata_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBasePlayerPawn

			class CCSPlayer_ActionTrackingServices : public client::CPlayerPawnComponent {
				MEMBER(h_last_weapon_before_c4_auto_switch, server::CCSPlayer_ActionTrackingServices, chandle<server::CBasePlayerWeapon>);
				MEMBER(b_is_rescuing, server::CCSPlayer_ActionTrackingServices, bool);
				MEMBER(weapon_purchases_this_match, server::CCSPlayer_ActionTrackingServices, server::WeaponPurchaseTracker_t);
				MEMBER(weapon_purchases_this_round, server::CCSPlayer_ActionTrackingServices, server::WeaponPurchaseTracker_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayer_ActionTrackingServices

			class CPointEntityFinder : public server::CBaseEntity {
				MEMBER(h_entity, server::CPointEntityFinder, chandle<server::CBaseEntity>);
				MEMBER(i_filter_name, server::CPointEntityFinder, CUtlSymbolLarge);
				MEMBER(h_filter, server::CPointEntityFinder, chandle<server::CBaseFilter>);
				MEMBER(i_ref_name, server::CPointEntityFinder, CUtlSymbolLarge);
				MEMBER(h_reference, server::CPointEntityFinder, chandle<server::CBaseEntity>);
				MEMBER(find_method, server::CPointEntityFinder, server::EntFinderMethod_t);
				MEMBER(on_found_entity, server::CPointEntityFinder, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointEntityFinder

			class CPointVelocitySensor : public server::CPointEntity {
				MEMBER(h_target_entity, server::CPointVelocitySensor, chandle<server::CBaseEntity>);
				MEMBER(vec_axis, server::CPointVelocitySensor, Vector);
				MEMBER(b_enabled, server::CPointVelocitySensor, bool);
				MEMBER(f_prev_velocity, server::CPointVelocitySensor, float);
				MEMBER(fl_avg_interval, server::CPointVelocitySensor, float);
				MEMBER(velocity, server::CPointVelocitySensor, CEntityOutputTemplate<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointVelocitySensor

			class CFuncTankTrain : public server::CFuncTrackTrain {
				MEMBER(on_death, server::CFuncTankTrain, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncTankTrain

			class CChicken : public server::CDynamicProp {
				MEMBER(attribute_manager, server::CChicken, server::CAttributeContainer);
				MEMBER(update_timer, server::CChicken, server::CountdownTimer);
				MEMBER(stuck_anchor, server::CChicken, Vector);
				MEMBER(stuck_timer, server::CChicken, server::CountdownTimer);
				MEMBER(collision_stuck_timer, server::CChicken, server::CountdownTimer);
				MEMBER(is_on_ground, server::CChicken, bool);
				MEMBER(v_fall_velocity, server::CChicken, Vector);
				MEMBER(desired_activity, server::CChicken, server::ChickenActivity);
				MEMBER(current_activity, server::CChicken, server::ChickenActivity);
				MEMBER(activity_timer, server::CChicken, server::CountdownTimer);
				MEMBER(turn_rate, server::CChicken, float);
				MEMBER(flee_from, server::CChicken, chandle<server::CBaseEntity>);
				MEMBER(move_rate_throttle_timer, server::CChicken, server::CountdownTimer);
				MEMBER(startle_timer, server::CChicken, server::CountdownTimer);
				MEMBER(vocalize_timer, server::CChicken, server::CountdownTimer);
				MEMBER(fl_when_zombified, server::CChicken, entity2::GameTime_t);
				MEMBER(jumped_this_frame, server::CChicken, bool);
				MEMBER(leader, server::CChicken, chandle<server::CCSPlayerPawn>);
				MEMBER(reuse_timer, server::CChicken, server::CountdownTimer);
				MEMBER(has_been_used, server::CChicken, bool);
				MEMBER(jump_timer, server::CChicken, server::CountdownTimer);
				MEMBER(fl_last_jump_time, server::CChicken, float);
				MEMBER(b_in_jump, server::CChicken, bool);
				MEMBER(repath_timer, server::CChicken, server::CountdownTimer);
				MEMBER(vec_path_goal, server::CChicken, Vector);
				MEMBER(fl_active_follow_start_time, server::CChicken, entity2::GameTime_t);
				MEMBER(follow_minute_timer, server::CChicken, server::CountdownTimer);
				MEMBER(block_direction_timer, server::CChicken, server::CountdownTimer);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CChicken

			class CBlood : public server::CPointEntity {
				MEMBER(vec_spray_angles, server::CBlood, QAngle);
				MEMBER(vec_spray_dir, server::CBlood, Vector);
				MEMBER(fl_amount, server::CBlood, float);
				MEMBER(color, server::CBlood, client::BloodType);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBlood

			class CPointTemplate : public server::CLogicalEntity {
				MEMBER(isz_world_name, server::CPointTemplate, CUtlSymbolLarge);
				MEMBER(isz_source2_entity_lump_name, server::CPointTemplate, CUtlSymbolLarge);
				MEMBER(isz_entity_filter_name, server::CPointTemplate, CUtlSymbolLarge);
				MEMBER(fl_timeout_interval, server::CPointTemplate, float);
				MEMBER(b_asynchronously_spawn_entities, server::CPointTemplate, bool);
				MEMBER(p_output_on_spawned, server::CPointTemplate, entity2::CEntityIOOutput);
				MEMBER(client_only_entity_behavior, server::CPointTemplate, client::PointTemplateClientOnlyEntityBehavior_t);
				MEMBER(owner_spawn_group_type, server::CPointTemplate, client::PointTemplateOwnerSpawnGroupType_t);
				MEMBER(created_spawn_group_handles, server::CPointTemplate, cutl_vector<uint32_t>);
				MEMBER(spawned_entity_handles, server::CPointTemplate, cutl_vector<CEntityHandle>);
				////MEMBER(script_spawn_callback, server::CPointTemplate, HSCRIPT);
				////MEMBER(script_callback_scope, server::CPointTemplate, HSCRIPT);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointTemplate

			class CInfoDynamicShadowHint : public server::CPointEntity {
				MEMBER(b_disabled, server::CInfoDynamicShadowHint, bool);
				MEMBER(fl_range, server::CInfoDynamicShadowHint, float);
				MEMBER(n_importance, server::CInfoDynamicShadowHint, int32_t);
				MEMBER(n_light_choice, server::CInfoDynamicShadowHint, int32_t);
				MEMBER(h_light, server::CInfoDynamicShadowHint, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoDynamicShadowHint

			class CSoundOpvarSetAABBEntity : public server::CSoundOpvarSetPointEntity {
				MEMBER(v_distance_inner_mins, server::CSoundOpvarSetAABBEntity, Vector);
				MEMBER(v_distance_inner_maxs, server::CSoundOpvarSetAABBEntity, Vector);
				MEMBER(v_distance_outer_mins, server::CSoundOpvarSetAABBEntity, Vector);
				MEMBER(v_distance_outer_maxs, server::CSoundOpvarSetAABBEntity, Vector);
				MEMBER(n_aabbdirection, server::CSoundOpvarSetAABBEntity, int32_t);
				MEMBER(v_inner_mins, server::CSoundOpvarSetAABBEntity, Vector);
				MEMBER(v_inner_maxs, server::CSoundOpvarSetAABBEntity, Vector);
				MEMBER(v_outer_mins, server::CSoundOpvarSetAABBEntity, Vector);
				MEMBER(v_outer_maxs, server::CSoundOpvarSetAABBEntity, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundOpvarSetAABBEntity

			class CNavWalkable : public server::CPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNavWalkable

			class CBreachCharge : public server::CCSWeaponBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBreachCharge

			class CLogicBranch : public server::CLogicalEntity {
				MEMBER(b_in_value, server::CLogicBranch, bool);
				MEMBER(listeners, server::CLogicBranch, cutl_vector<chandle<server::CBaseEntity>>);
				MEMBER(on_true, server::CLogicBranch, entity2::CEntityIOOutput);
				MEMBER(on_false, server::CLogicBranch, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicBranch

			class CEnvCubemap : public server::CBaseEntity {
				MEMBER(entity_h_cubemap_texture, server::CEnvCubemap, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(entity_b_custom_cubemap_texture, server::CEnvCubemap, bool);
				MEMBER(entity_fl_influence_radius, server::CEnvCubemap, float);
				MEMBER(entity_v_box_project_mins, server::CEnvCubemap, Vector);
				MEMBER(entity_v_box_project_maxs, server::CEnvCubemap, Vector);
				MEMBER(entity_b_moveable, server::CEnvCubemap, bool);
				MEMBER(entity_n_handshake, server::CEnvCubemap, int32_t);
				MEMBER(entity_n_env_cube_map_array_index, server::CEnvCubemap, int32_t);
				MEMBER(entity_n_priority, server::CEnvCubemap, int32_t);
				MEMBER(entity_fl_edge_fade_dist, server::CEnvCubemap, float);
				MEMBER(entity_v_edge_fade_dists, server::CEnvCubemap, Vector);
				MEMBER(entity_fl_diffuse_scale, server::CEnvCubemap, float);
				MEMBER(entity_b_start_disabled, server::CEnvCubemap, bool);
				MEMBER(entity_b_default_env_map, server::CEnvCubemap, bool);
				MEMBER(entity_b_default_spec_env_map, server::CEnvCubemap, bool);
				MEMBER(entity_b_indoor_cube_map, server::CEnvCubemap, bool);
				MEMBER(entity_b_copy_diffuse_from_default_cubemap, server::CEnvCubemap, bool);
				MEMBER(entity_b_enabled, server::CEnvCubemap, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvCubemap

			class CSpriteAlias_env_glow : public server::CSprite {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSpriteAlias_env_glow

			class CPulseCell_Step_FollowEntity : public pulse_runtime_lib::CPulseCell_BaseFlow {
				MEMBER(param_bone_or_attach_name, server::CPulseCell_Step_FollowEntity, CUtlString);
				MEMBER(param_bone_or_attach_name_child, server::CPulseCell_Step_FollowEntity, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Step_FollowEntity

			class CPhysLength : public server::CPhysConstraint {
				MEMBER_ARR(offset, server::CPhysLength, 2, Vector);
				MEMBER(vec_attach, server::CPhysLength, Vector);
				MEMBER(add_length, server::CPhysLength, float);
				MEMBER(min_length, server::CPhysLength, float);
				MEMBER(total_length, server::CPhysLength, float);
				MEMBER(b_enable_collision, server::CPhysLength, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysLength

			class CInfoOffscreenPanoramaTexture : public server::CPointEntity {
				MEMBER(b_disabled, server::CInfoOffscreenPanoramaTexture, bool);
				MEMBER(n_resolution_x, server::CInfoOffscreenPanoramaTexture, int32_t);
				MEMBER(n_resolution_y, server::CInfoOffscreenPanoramaTexture, int32_t);
				MEMBER(sz_layout_file_name, server::CInfoOffscreenPanoramaTexture, CUtlSymbolLarge);
				MEMBER(render_attr_name, server::CInfoOffscreenPanoramaTexture, CUtlSymbolLarge);
				MEMBER(target_entities, server::CInfoOffscreenPanoramaTexture, CNetworkUtlVectorBase<chandle<server::CBaseModelEntity>>);
				MEMBER(n_target_change_count, server::CInfoOffscreenPanoramaTexture, int32_t);
				MEMBER(vec_cssclasses, server::CInfoOffscreenPanoramaTexture, CNetworkUtlVectorBase<CUtlSymbolLarge>);
				MEMBER(sz_targets_name, server::CInfoOffscreenPanoramaTexture, CUtlSymbolLarge);
				MEMBER(additional_target_entities, server::CInfoOffscreenPanoramaTexture, cutl_vector<chandle<server::CBaseModelEntity>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoOffscreenPanoramaTexture

			class CCSGOViewModel : public server::CPredictedViewModel {
				MEMBER(b_should_ignore_offset_and_accuracy, server::CCSGOViewModel, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGOViewModel

			class CEnvFade : public server::CLogicalEntity {
				MEMBER(fade_color, server::CEnvFade, Color);
				MEMBER(duration, server::CEnvFade, float);
				MEMBER(hold_duration, server::CEnvFade, float);
				MEMBER(on_begin_fade, server::CEnvFade, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvFade

			class CInferno : public server::CBaseModelEntity {
				MEMBER_ARR(fire_positions, server::CInferno, 64, Vector);
				MEMBER_ARR(fire_parent_positions, server::CInferno, 64, Vector);
				MEMBER_ARR(b_fire_is_burning, server::CInferno, 64, bool);
				MEMBER_ARR(burn_normal, server::CInferno, 64, Vector);
				MEMBER(fire_count, server::CInferno, int32_t);
				MEMBER(n_inferno_type, server::CInferno, int32_t);
				MEMBER(n_fire_effect_tick_begin, server::CInferno, int32_t);
				MEMBER(n_fire_lifetime, server::CInferno, float);
				MEMBER(b_in_post_effect_time, server::CInferno, bool);
				MEMBER(n_fires_extinguish_count, server::CInferno, int32_t);
				MEMBER(b_was_created_in_smoke, server::CInferno, bool);
				MEMBER(extent, server::CInferno, navlib::Extent);
				MEMBER(damage_timer, server::CInferno, server::CountdownTimer);
				MEMBER(damage_ramp_timer, server::CInferno, server::CountdownTimer);
				MEMBER(splash_velocity, server::CInferno, Vector);
				MEMBER(initial_splash_velocity, server::CInferno, Vector);
				MEMBER(start_pos, server::CInferno, Vector);
				MEMBER(vec_original_spawn_location, server::CInferno, Vector);
				MEMBER(active_timer, server::CInferno, server::IntervalTimer);
				MEMBER(fire_spawn_offset, server::CInferno, int32_t);
				MEMBER(n_max_flames, server::CInferno, int32_t);
				MEMBER(n_spread_count, server::CInferno, int32_t);
				MEMBER(bookkeeping_timer, server::CInferno, server::CountdownTimer);
				MEMBER(next_spread_timer, server::CInferno, server::CountdownTimer);
				MEMBER(n_source_item_def_index, server::CInferno, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInferno

			class CWeaponUSPSilencer : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponUSPSilencer

			class CTriggerGravity : public server::CBaseTrigger {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerGravity

			class CServerRagdollTrigger : public server::CBaseTrigger {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CServerRagdollTrigger

			class CWeaponAug : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponAug

			class CEconEntity : public server::CBaseFlex {
				MEMBER(attribute_manager, server::CEconEntity, server::CAttributeContainer);
				MEMBER(original_owner_xuid_low, server::CEconEntity, uint32_t);
				MEMBER(original_owner_xuid_high, server::CEconEntity, uint32_t);
				MEMBER(n_fallback_paint_kit, server::CEconEntity, int32_t);
				MEMBER(n_fallback_seed, server::CEconEntity, int32_t);
				MEMBER(fl_fallback_wear, server::CEconEntity, float);
				MEMBER(n_fallback_stat_trak, server::CEconEntity, int32_t);
				MEMBER(h_old_providee, server::CEconEntity, chandle<server::CBaseEntity>);
				MEMBER(i_old_owner_class, server::CEconEntity, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEconEntity

			class CPointWorldText : public server::CModelPointEntity {
				MEMBER_ARR(message_text, server::CPointWorldText, 512, char);
				MEMBER_ARR(font_name, server::CPointWorldText, 64, char);
				MEMBER_ARR(background_material_name, server::CPointWorldText, 64, char);
				MEMBER(b_enabled, server::CPointWorldText, bool);
				MEMBER(b_fullbright, server::CPointWorldText, bool);
				MEMBER(fl_world_units_per_px, server::CPointWorldText, float);
				MEMBER(fl_font_size, server::CPointWorldText, float);
				MEMBER(fl_depth_offset, server::CPointWorldText, float);
				MEMBER(b_draw_background, server::CPointWorldText, bool);
				MEMBER(fl_background_border_width, server::CPointWorldText, float);
				MEMBER(fl_background_border_height, server::CPointWorldText, float);
				MEMBER(fl_background_world_to_uv, server::CPointWorldText, float);
				MEMBER(color, server::CPointWorldText, Color);
				MEMBER(n_justify_horizontal, server::CPointWorldText, client::PointWorldTextJustifyHorizontal_t);
				MEMBER(n_justify_vertical, server::CPointWorldText, client::PointWorldTextJustifyVertical_t);
				MEMBER(n_reorient_mode, server::CPointWorldText, client::PointWorldTextReorientMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointWorldText

			class CSoundAreaEntityOrientedBox : public server::CSoundAreaEntityBase {
				MEMBER(v_min, server::CSoundAreaEntityOrientedBox, Vector);
				MEMBER(v_max, server::CSoundAreaEntityOrientedBox, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundAreaEntityOrientedBox

			class CFuncShatterglass : public server::CBaseModelEntity {
				MEMBER(mat_panel_transform, server::CFuncShatterglass, matrix3x4_t);
				MEMBER(mat_panel_transform_ws_temp, server::CFuncShatterglass, matrix3x4_t);
				MEMBER(vec_shatter_glass_shards, server::CFuncShatterglass, cutl_vector<uint32_t>);
				MEMBER(panel_size, server::CFuncShatterglass, Vector2D);
				MEMBER(fl_last_shatter_sound_emit_time, server::CFuncShatterglass, entity2::GameTime_t);
				MEMBER(fl_last_cleanup_time, server::CFuncShatterglass, entity2::GameTime_t);
				MEMBER(fl_init_at_time, server::CFuncShatterglass, entity2::GameTime_t);
				MEMBER(fl_glass_thickness, server::CFuncShatterglass, float);
				MEMBER(fl_spawn_invulnerability, server::CFuncShatterglass, float);
				MEMBER(b_break_silent, server::CFuncShatterglass, bool);
				MEMBER(b_break_shardless, server::CFuncShatterglass, bool);
				MEMBER(b_broken, server::CFuncShatterglass, bool);
				MEMBER(b_glass_nav_ignore, server::CFuncShatterglass, bool);
				MEMBER(b_glass_in_frame, server::CFuncShatterglass, bool);
				MEMBER(b_start_broken, server::CFuncShatterglass, bool);
				MEMBER(i_initial_damage_type, server::CFuncShatterglass, uint8_t);
				MEMBER(sz_damage_positioning_entity_name01, server::CFuncShatterglass, CUtlSymbolLarge);
				MEMBER(sz_damage_positioning_entity_name02, server::CFuncShatterglass, CUtlSymbolLarge);
				MEMBER(sz_damage_positioning_entity_name03, server::CFuncShatterglass, CUtlSymbolLarge);
				MEMBER(sz_damage_positioning_entity_name04, server::CFuncShatterglass, CUtlSymbolLarge);
				MEMBER(v_initial_damage_positions, server::CFuncShatterglass, cutl_vector<Vector>);
				MEMBER(v_extra_damage_positions, server::CFuncShatterglass, cutl_vector<Vector>);
				MEMBER(v_initial_panel_vertices, server::CFuncShatterglass, cutl_vector<Vector4D>);
				MEMBER(on_broken, server::CFuncShatterglass, entity2::CEntityIOOutput);
				MEMBER(i_surface_type, server::CFuncShatterglass, uint8_t);
				MEMBER(h_material_damage_base, server::CFuncShatterglass, CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncShatterglass

			class CMarkupVolumeWithRef : public server::CMarkupVolumeTagged {
				MEMBER(b_use_ref, server::CMarkupVolumeWithRef, bool);
				MEMBER(v_ref_pos, server::CMarkupVolumeWithRef, Vector);
				MEMBER(fl_ref_dot, server::CMarkupVolumeWithRef, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMarkupVolumeWithRef

			class CRotButton : public server::CBaseButton {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRotButton

			class CSoundEventSphereEntity : public server::CSoundEventEntity {
				MEMBER(fl_radius, server::CSoundEventSphereEntity, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundEventSphereEntity

			class CWeaponHKP2000 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponHKP2000

			class CEnvSplash : public server::CPointEntity {
				MEMBER(fl_scale, server::CEnvSplash, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvSplash

			class CCSGO_TeamSelectTerroristPosition : public server::CCSGO_TeamSelectCharacterPosition {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGO_TeamSelectTerroristPosition

			class CWeaponTaser : public server::CCSWeaponBaseGun {
				MEMBER(f_fire_time, server::CWeaponTaser, entity2::GameTime_t);
				MEMBER(n_last_attack_tick, server::CWeaponTaser, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponTaser

			class CWaterBullet : public server::CBaseAnimGraph {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWaterBullet

			class CMarkupVolume : public server::CBaseModelEntity {
				MEMBER(b_disabled, server::CMarkupVolume, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMarkupVolume

			class CMessage : public server::CPointEntity {
				MEMBER(isz_message, server::CMessage, CUtlSymbolLarge);
				MEMBER(message_volume, server::CMessage, float);
				MEMBER(message_attenuation, server::CMessage, int32_t);
				MEMBER(radius, server::CMessage, float);
				MEMBER(s_noise, server::CMessage, CUtlSymbolLarge);
				MEMBER(on_show_message, server::CMessage, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMessage

			class CBreakable : public server::CBaseModelEntity {
				MEMBER(cprop_data_component, server::CBreakable, server::CPropDataComponent);
				MEMBER(material, server::CBreakable, server::Materials);
				MEMBER(h_breaker, server::CBreakable, chandle<server::CBaseEntity>);
				MEMBER(explosion, server::CBreakable, server::Explosions);
				MEMBER(isz_spawn_object, server::CBreakable, CUtlSymbolLarge);
				MEMBER(fl_pressure_delay, server::CBreakable, float);
				MEMBER(i_min_health_dmg, server::CBreakable, int32_t);
				MEMBER(isz_prop_data, server::CBreakable, CUtlSymbolLarge);
				MEMBER(impact_energy_scale, server::CBreakable, float);
				MEMBER(n_override_block_los, server::CBreakable, server::EOverrideBlockLOS_t);
				MEMBER(on_break, server::CBreakable, entity2::CEntityIOOutput);
				MEMBER(on_health_changed, server::CBreakable, CEntityOutputTemplate<float>);
				MEMBER(performance_mode, server::CBreakable, client::PerformanceMode_t);
				MEMBER(h_physics_attacker, server::CBreakable, chandle<server::CBasePlayerPawn>);
				MEMBER(fl_last_physics_influence_time, server::CBreakable, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBreakable

			class CInfoTarget : public server::CPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoTarget

			class CPropDataComponent : public entity2::CEntityComponent {
				MEMBER(fl_dmg_mod_bullet, server::CPropDataComponent, float);
				MEMBER(fl_dmg_mod_club, server::CPropDataComponent, float);
				MEMBER(fl_dmg_mod_explosive, server::CPropDataComponent, float);
				MEMBER(fl_dmg_mod_fire, server::CPropDataComponent, float);
				MEMBER(isz_physics_damage_table_name, server::CPropDataComponent, CUtlSymbolLarge);
				MEMBER(isz_base_prop_data, server::CPropDataComponent, CUtlSymbolLarge);
				MEMBER(n_interactions, server::CPropDataComponent, int32_t);
				MEMBER(b_spawn_motion_disabled, server::CPropDataComponent, bool);
				MEMBER(n_disable_take_physics_damage_spawn_flag, server::CPropDataComponent, int32_t);
				MEMBER(n_motion_disabled_spawn_flag, server::CPropDataComponent, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPropDataComponent

			class CGameText : public server::CRulePointEntity {
				MEMBER(isz_message, server::CGameText, CUtlSymbolLarge);
				MEMBER(text_parms, server::CGameText, client::hudtextparms_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGameText

			class CTextureBasedAnimatable : public server::CBaseModelEntity {
				MEMBER(b_loop, server::CTextureBasedAnimatable, bool);
				MEMBER(fl_fps, server::CTextureBasedAnimatable, float);
				MEMBER(h_position_keys, server::CTextureBasedAnimatable, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(h_rotation_keys, server::CTextureBasedAnimatable, CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>);
				MEMBER(v_animation_bounds_min, server::CTextureBasedAnimatable, Vector);
				MEMBER(v_animation_bounds_max, server::CTextureBasedAnimatable, Vector);
				MEMBER(fl_start_time, server::CTextureBasedAnimatable, float);
				MEMBER(fl_start_frame, server::CTextureBasedAnimatable, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTextureBasedAnimatable

			class CWeaponFamas : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponFamas

			class CFilterModel : public server::CBaseFilter {
				MEMBER(i_filter_model, server::CFilterModel, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFilterModel

			class CCSPlayerPawnBase : public server::CBasePlayerPawn {
				MEMBER(ctouch_expansion_component, server::CCSPlayerPawnBase, server::CTouchExpansionComponent);
				MEMBER(p_ping_services, server::CCSPlayerPawnBase, server::CCSPlayer_PingServices*);
				MEMBER(p_view_model_services, server::CCSPlayerPawnBase, server::CPlayer_ViewModelServices*);
				MEMBER(blind_until_time, server::CCSPlayerPawnBase, entity2::GameTime_t);
				MEMBER(blind_start_time, server::CCSPlayerPawnBase, entity2::GameTime_t);
				MEMBER(i_player_state, server::CCSPlayerPawnBase, client::CSPlayerState);
				MEMBER(b_respawning, server::CCSPlayerPawnBase, bool);
				MEMBER(f_immune_to_gun_game_damage_time, server::CCSPlayerPawnBase, entity2::GameTime_t);
				MEMBER(b_gun_game_immunity, server::CCSPlayerPawnBase, bool);
				MEMBER(f_molotov_damage_time, server::CCSPlayerPawnBase, float);
				MEMBER(b_has_moved_since_spawn, server::CCSPlayerPawnBase, bool);
				MEMBER(i_num_spawns, server::CCSPlayerPawnBase, int32_t);
				MEMBER(fl_idle_time_since_last_action, server::CCSPlayerPawnBase, float);
				MEMBER(f_next_radar_update_time, server::CCSPlayerPawnBase, float);
				MEMBER(fl_flash_duration, server::CCSPlayerPawnBase, float);
				MEMBER(fl_flash_max_alpha, server::CCSPlayerPawnBase, float);
				MEMBER(fl_progress_bar_start_time, server::CCSPlayerPawnBase, float);
				MEMBER(i_progress_bar_duration, server::CCSPlayerPawnBase, int32_t);
				MEMBER(ang_eye_angles, server::CCSPlayerPawnBase, QAngle);
				MEMBER(was_not_killed_naturally, server::CCSPlayerPawnBase, bool);
				MEMBER(b_committing_suicide_on_team_change, server::CCSPlayerPawnBase, bool);
				MEMBER(h_original_controller, server::CCSPlayerPawnBase, chandle<server::CCSPlayerController>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPlayerPawnBase

			class CPathTrack : public server::CPointEntity {
				MEMBER(pnext, server::CPathTrack, server::CPathTrack*);
				MEMBER(pprevious, server::CPathTrack, server::CPathTrack*);
				MEMBER(paltpath, server::CPathTrack, server::CPathTrack*);
				MEMBER(fl_radius, server::CPathTrack, float);
				MEMBER(length, server::CPathTrack, float);
				MEMBER(alt_name, server::CPathTrack, CUtlSymbolLarge);
				MEMBER(n_iter_val, server::CPathTrack, int32_t);
				MEMBER(e_orientation_type, server::CPathTrack, server::TrackOrientationType_t);
				MEMBER(on_pass, server::CPathTrack, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPathTrack

			class CLogicDistanceCheck : public server::CLogicalEntity {
				MEMBER(isz_entity_a, server::CLogicDistanceCheck, CUtlSymbolLarge);
				MEMBER(isz_entity_b, server::CLogicDistanceCheck, CUtlSymbolLarge);
				MEMBER(fl_zone1_distance, server::CLogicDistanceCheck, float);
				MEMBER(fl_zone2_distance, server::CLogicDistanceCheck, float);
				MEMBER(in_zone1, server::CLogicDistanceCheck, entity2::CEntityIOOutput);
				MEMBER(in_zone2, server::CLogicDistanceCheck, entity2::CEntityIOOutput);
				MEMBER(in_zone3, server::CLogicDistanceCheck, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicDistanceCheck

			class CWeaponP250 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponP250

			class COmniLight : public server::CBarnLight {
				MEMBER(fl_inner_angle, server::COmniLight, float);
				MEMBER(fl_outer_angle, server::COmniLight, float);
				MEMBER(b_show_light, server::COmniLight, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class COmniLight

			class CGamePlayerEquip : public server::CRulePointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGamePlayerEquip

			class CEntityFlame : public server::CBaseEntity {
				MEMBER(h_ent_attached, server::CEntityFlame, chandle<server::CBaseEntity>);
				MEMBER(b_cheap_effect, server::CEntityFlame, bool);
				MEMBER(fl_size, server::CEntityFlame, float);
				MEMBER(b_use_hitboxes, server::CEntityFlame, bool);
				MEMBER(i_num_hitbox_fires, server::CEntityFlame, int32_t);
				MEMBER(fl_hitbox_fire_scale, server::CEntityFlame, float);
				MEMBER(fl_lifetime, server::CEntityFlame, entity2::GameTime_t);
				MEMBER(h_attacker, server::CEntityFlame, chandle<server::CBaseEntity>);
				MEMBER(i_danger_sound, server::CEntityFlame, int32_t);
				MEMBER(fl_direct_damage_per_second, server::CEntityFlame, float);
				MEMBER(i_custom_damage_type, server::CEntityFlame, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEntityFlame

			class CCSWeaponBaseGun : public server::CCSWeaponBase {
				MEMBER(zoom_level, server::CCSWeaponBaseGun, int32_t);
				MEMBER(i_burst_shots_remaining, server::CCSWeaponBaseGun, int32_t);
				MEMBER(silenced_model_index, server::CCSWeaponBaseGun, int32_t);
				MEMBER(in_precache, server::CCSWeaponBaseGun, bool);
				MEMBER(b_needs_bolt_action, server::CCSWeaponBaseGun, bool);
				MEMBER(b_skill_reload_available, server::CCSWeaponBaseGun, bool);
				MEMBER(b_skill_reload_lifted_reload_key, server::CCSWeaponBaseGun, bool);
				MEMBER(b_skill_bolt_interrupt_available, server::CCSWeaponBaseGun, bool);
				MEMBER(b_skill_bolt_lifted_fire_key, server::CCSWeaponBaseGun, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSWeaponBaseGun

			class CGunTarget : public server::CBaseToggle {
				MEMBER(on, server::CGunTarget, bool);
				MEMBER(h_target_ent, server::CGunTarget, chandle<server::CBaseEntity>);
				MEMBER(on_death, server::CGunTarget, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGunTarget

			class CSoundEventParameter : public server::CBaseEntity {
				MEMBER(isz_param_name, server::CSoundEventParameter, CUtlSymbolLarge);
				MEMBER(fl_float_value, server::CSoundEventParameter, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundEventParameter

			class CTestEffect : public server::CBaseEntity {
				MEMBER(i_loop, server::CTestEffect, int32_t);
				MEMBER(i_beam, server::CTestEffect, int32_t);
				MEMBER_ARR(p_beam, server::CTestEffect, 24, server::CBeam*);
				MEMBER_ARR(fl_beam_time, server::CTestEffect, 24, entity2::GameTime_t);
				MEMBER(fl_start_time, server::CTestEffect, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTestEffect

			class CWeaponM4A1Silencer : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponM4A1Silencer

			class CConstraintAnchor : public server::CBaseAnimGraph {
				MEMBER(mass_scale, server::CConstraintAnchor, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CConstraintAnchor

			class CSceneEntity : public server::CPointEntity {
				MEMBER(isz_scene_file, server::CSceneEntity, CUtlSymbolLarge);
				MEMBER(isz_resume_scene_file, server::CSceneEntity, CUtlSymbolLarge);
				MEMBER(isz_target1, server::CSceneEntity, CUtlSymbolLarge);
				MEMBER(isz_target2, server::CSceneEntity, CUtlSymbolLarge);
				MEMBER(isz_target3, server::CSceneEntity, CUtlSymbolLarge);
				MEMBER(isz_target4, server::CSceneEntity, CUtlSymbolLarge);
				MEMBER(isz_target5, server::CSceneEntity, CUtlSymbolLarge);
				MEMBER(isz_target6, server::CSceneEntity, CUtlSymbolLarge);
				MEMBER(isz_target7, server::CSceneEntity, CUtlSymbolLarge);
				MEMBER(isz_target8, server::CSceneEntity, CUtlSymbolLarge);
				MEMBER(h_target1, server::CSceneEntity, chandle<server::CBaseEntity>);
				MEMBER(h_target2, server::CSceneEntity, chandle<server::CBaseEntity>);
				MEMBER(h_target3, server::CSceneEntity, chandle<server::CBaseEntity>);
				MEMBER(h_target4, server::CSceneEntity, chandle<server::CBaseEntity>);
				MEMBER(h_target5, server::CSceneEntity, chandle<server::CBaseEntity>);
				MEMBER(h_target6, server::CSceneEntity, chandle<server::CBaseEntity>);
				MEMBER(h_target7, server::CSceneEntity, chandle<server::CBaseEntity>);
				MEMBER(h_target8, server::CSceneEntity, chandle<server::CBaseEntity>);
				MEMBER(s_target_attachment, server::CSceneEntity, CUtlSymbolLarge);
				MEMBER(b_is_playing_back, server::CSceneEntity, bool);
				MEMBER(b_paused, server::CSceneEntity, bool);
				MEMBER(b_multiplayer, server::CSceneEntity, bool);
				MEMBER(b_autogenerated, server::CSceneEntity, bool);
				MEMBER(fl_force_client_time, server::CSceneEntity, float);
				MEMBER(fl_current_time, server::CSceneEntity, float);
				MEMBER(fl_frame_time, server::CSceneEntity, float);
				MEMBER(b_cancel_at_next_interrupt, server::CSceneEntity, bool);
				MEMBER(f_pitch, server::CSceneEntity, float);
				MEMBER(b_automated, server::CSceneEntity, bool);
				MEMBER(n_automated_action, server::CSceneEntity, int32_t);
				MEMBER(fl_automation_delay, server::CSceneEntity, float);
				MEMBER(fl_automation_time, server::CSceneEntity, float);
				MEMBER(h_waiting_for_this_resume_scene, server::CSceneEntity, chandle<server::CBaseEntity>);
				MEMBER(b_waiting_for_resume_scene, server::CSceneEntity, bool);
				MEMBER(b_paused_via_input, server::CSceneEntity, bool);
				MEMBER(b_pause_at_next_interrupt, server::CSceneEntity, bool);
				MEMBER(b_waiting_for_actor, server::CSceneEntity, bool);
				MEMBER(b_waiting_for_interrupt, server::CSceneEntity, bool);
				MEMBER(b_interrupted_actors_scenes, server::CSceneEntity, bool);
				MEMBER(b_break_on_non_idle, server::CSceneEntity, bool);
				MEMBER(b_scene_finished, server::CSceneEntity, bool);
				MEMBER(h_actor_list, server::CSceneEntity, CNetworkUtlVectorBase<chandle<server::CBaseFlex>>);
				MEMBER(h_remove_actor_list, server::CSceneEntity, cutl_vector<chandle<server::CBaseEntity>>);
				MEMBER(n_scene_flush_counter, server::CSceneEntity, int32_t);
				MEMBER(n_scene_string_index, server::CSceneEntity, uint16_t);
				MEMBER(on_start, server::CSceneEntity, entity2::CEntityIOOutput);
				MEMBER(on_completion, server::CSceneEntity, entity2::CEntityIOOutput);
				MEMBER(on_canceled, server::CSceneEntity, entity2::CEntityIOOutput);
				MEMBER(on_paused, server::CSceneEntity, entity2::CEntityIOOutput);
				MEMBER(on_resumed, server::CSceneEntity, entity2::CEntityIOOutput);
				MEMBER_ARR(on_trigger, server::CSceneEntity, 16, entity2::CEntityIOOutput);
				MEMBER(h_interrupt_scene, server::CSceneEntity, chandle<server::CSceneEntity>);
				MEMBER(n_interrupt_count, server::CSceneEntity, int32_t);
				MEMBER(b_scene_missing, server::CSceneEntity, bool);
				MEMBER(b_interrupted, server::CSceneEntity, bool);
				MEMBER(b_completed_early, server::CSceneEntity, bool);
				MEMBER(b_interrupt_scene_finished, server::CSceneEntity, bool);
				MEMBER(b_restoring, server::CSceneEntity, bool);
				MEMBER(h_notify_scene_completion, server::CSceneEntity, cutl_vector<chandle<server::CSceneEntity>>);
				MEMBER(h_list_managers, server::CSceneEntity, cutl_vector<chandle<server::CSceneListManager>>);
				MEMBER(isz_sound_name, server::CSceneEntity, CUtlSymbolLarge);
				MEMBER(isz_sequence_name, server::CSceneEntity, CUtlSymbolLarge);
				MEMBER(h_actor, server::CSceneEntity, chandle<server::CBaseFlex>);
				MEMBER(h_activator, server::CSceneEntity, chandle<server::CBaseEntity>);
				MEMBER(busy_actor, server::CSceneEntity, int32_t);
				MEMBER(i_player_death_behavior, server::CSceneEntity, server::SceneOnPlayerDeath_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSceneEntity

			class CMathColorBlend : public server::CLogicalEntity {
				MEMBER(fl_in_min, server::CMathColorBlend, float);
				MEMBER(fl_in_max, server::CMathColorBlend, float);
				MEMBER(out_color1, server::CMathColorBlend, Color);
				MEMBER(out_color2, server::CMathColorBlend, Color);
				MEMBER(out_value, server::CMathColorBlend, CEntityOutputTemplate<Color>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMathColorBlend

			class CLogicActiveAutosave : public server::CLogicAutosave {
				MEMBER(trigger_hit_points, server::CLogicActiveAutosave, int32_t);
				MEMBER(fl_time_to_trigger, server::CLogicActiveAutosave, float);
				MEMBER(fl_start_time, server::CLogicActiveAutosave, entity2::GameTime_t);
				MEMBER(fl_dangerous_time, server::CLogicActiveAutosave, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicActiveAutosave

			class CVoteController : public server::CBaseEntity {
				MEMBER(i_active_issue_index, server::CVoteController, int32_t);
				MEMBER(i_only_team_to_vote, server::CVoteController, int32_t);
				MEMBER_ARR(n_vote_option_count, server::CVoteController, 5, int32_t);
				MEMBER(n_potential_votes, server::CVoteController, int32_t);
				MEMBER(b_is_yes_no_vote, server::CVoteController, bool);
				MEMBER(accepting_votes_timer, server::CVoteController, server::CountdownTimer);
				MEMBER(execute_command_timer, server::CVoteController, server::CountdownTimer);
				MEMBER(reset_vote_timer, server::CVoteController, server::CountdownTimer);
				MEMBER_ARR(n_votes_cast, server::CVoteController, 64, int32_t);
				MEMBER(player_holding_vote, server::CVoteController, CPlayerSlot);
				MEMBER(player_override_for_vote, server::CVoteController, CPlayerSlot);
				MEMBER(n_highest_count_index, server::CVoteController, int32_t);
				MEMBER(potential_issues, server::CVoteController, cutl_vector<server::CBaseIssue*>);
				MEMBER(vote_options, server::CVoteController, cutl_vector<char*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoteController

			class CWeaponCZ75a : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponCZ75a

			class CBaseFlex : public server::CBaseAnimGraph {
				MEMBER(flex_weight, server::CBaseFlex, CNetworkUtlVectorBase<float>);
				MEMBER(v_look_target_position, server::CBaseFlex, Vector);
				MEMBER(blinktoggle, server::CBaseFlex, bool);
				MEMBER(fl_allow_responses_end_time, server::CBaseFlex, entity2::GameTime_t);
				MEMBER(fl_last_flex_animation_time, server::CBaseFlex, entity2::GameTime_t);
				MEMBER(n_next_scene_event_id, server::CBaseFlex, client::SceneEventId_t);
				MEMBER(b_update_layer_priorities, server::CBaseFlex, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBaseFlex

			class CEnvScreenOverlay : public server::CPointEntity {
				MEMBER_ARR(isz_overlay_names, server::CEnvScreenOverlay, 10, CUtlSymbolLarge);
				MEMBER_ARR(fl_overlay_times, server::CEnvScreenOverlay, 10, float);
				MEMBER(fl_start_time, server::CEnvScreenOverlay, entity2::GameTime_t);
				MEMBER(i_desired_overlay, server::CEnvScreenOverlay, int32_t);
				MEMBER(b_is_active, server::CEnvScreenOverlay, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvScreenOverlay

			class CBumpMineProjectile : public server::CBaseGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBumpMineProjectile

			class CEconItemView : public client::IEconItemInterface {
				MEMBER(i_item_definition_index, server::CEconItemView, uint16_t);
				MEMBER(i_entity_quality, server::CEconItemView, int32_t);
				MEMBER(i_entity_level, server::CEconItemView, uint32_t);
				MEMBER(i_item_id, server::CEconItemView, uint64_t);
				MEMBER(i_item_idhigh, server::CEconItemView, uint32_t);
				MEMBER(i_item_idlow, server::CEconItemView, uint32_t);
				MEMBER(i_account_id, server::CEconItemView, uint32_t);
				MEMBER(i_inventory_position, server::CEconItemView, uint32_t);
				MEMBER(b_initialized, server::CEconItemView, bool);
				MEMBER(attribute_list, server::CEconItemView, server::CAttributeList);
				MEMBER(networked_dynamic_attributes, server::CEconItemView, server::CAttributeList);
				MEMBER_ARR(sz_custom_name, server::CEconItemView, 161, char);
				MEMBER_ARR(sz_custom_name_override, server::CEconItemView, 161, char);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEconItemView

			class CWeaponMag7 : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponMag7

			class CInfoInstructorHintBombTargetA : public server::CPointEntity {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoInstructorHintBombTargetA

			class CWeaponAWP : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponAWP

			class CPostProcessingVolume : public server::CBaseTrigger {
				MEMBER(h_post_settings, server::CPostProcessingVolume, CStrongHandle<resourcesystem::InfoForResourceTypeCPostProcessingResource>);
				MEMBER(fl_fade_duration, server::CPostProcessingVolume, float);
				MEMBER(fl_min_log_exposure, server::CPostProcessingVolume, float);
				MEMBER(fl_max_log_exposure, server::CPostProcessingVolume, float);
				MEMBER(fl_min_exposure, server::CPostProcessingVolume, float);
				MEMBER(fl_max_exposure, server::CPostProcessingVolume, float);
				MEMBER(fl_exposure_compensation, server::CPostProcessingVolume, float);
				MEMBER(fl_exposure_fade_speed_up, server::CPostProcessingVolume, float);
				MEMBER(fl_exposure_fade_speed_down, server::CPostProcessingVolume, float);
				MEMBER(fl_tonemap_evsmoothing_range, server::CPostProcessingVolume, float);
				MEMBER(b_master, server::CPostProcessingVolume, bool);
				MEMBER(b_exposure_control, server::CPostProcessingVolume, bool);
				MEMBER(fl_rate, server::CPostProcessingVolume, float);
				MEMBER(fl_tonemap_percent_target, server::CPostProcessingVolume, float);
				MEMBER(fl_tonemap_percent_bright_pixels, server::CPostProcessingVolume, float);
				MEMBER(fl_tonemap_min_avg_lum, server::CPostProcessingVolume, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPostProcessingVolume

			class CSpotlightEnd : public server::CBaseModelEntity {
				MEMBER(fl_light_scale, server::CSpotlightEnd, float);
				MEMBER(radius, server::CSpotlightEnd, float);
				MEMBER(v_spotlight_dir, server::CSpotlightEnd, Vector);
				MEMBER(v_spotlight_org, server::CSpotlightEnd, Vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSpotlightEnd

			class CRuleEntity : public server::CBaseModelEntity {
				MEMBER(isz_master, server::CRuleEntity, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRuleEntity

			class CCSGO_TeamPreviewCharacterPosition : public server::CBaseEntity {
				MEMBER(n_variant, server::CCSGO_TeamPreviewCharacterPosition, int32_t);
				MEMBER(n_random, server::CCSGO_TeamPreviewCharacterPosition, int32_t);
				MEMBER(n_ordinal, server::CCSGO_TeamPreviewCharacterPosition, int32_t);
				MEMBER(s_weapon_name, server::CCSGO_TeamPreviewCharacterPosition, CUtlString);
				MEMBER(xuid, server::CCSGO_TeamPreviewCharacterPosition, uint64_t);
				MEMBER(agent_item, server::CCSGO_TeamPreviewCharacterPosition, server::CEconItemView);
				MEMBER(gloves_item, server::CCSGO_TeamPreviewCharacterPosition, server::CEconItemView);
				MEMBER(weapon_item, server::CCSGO_TeamPreviewCharacterPosition, server::CEconItemView);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSGO_TeamPreviewCharacterPosition

			class CFuncConveyor : public server::CBaseModelEntity {
				MEMBER(sz_conveyor_models, server::CFuncConveyor, CUtlSymbolLarge);
				MEMBER(fl_transition_duration_seconds, server::CFuncConveyor, float);
				MEMBER(ang_move_entity_space, server::CFuncConveyor, QAngle);
				MEMBER(vec_move_dir_entity_space, server::CFuncConveyor, Vector);
				MEMBER(fl_target_speed, server::CFuncConveyor, float);
				MEMBER(n_transition_start_tick, server::CFuncConveyor, entity2::GameTick_t);
				MEMBER(n_transition_duration_ticks, server::CFuncConveyor, int32_t);
				MEMBER(fl_transition_start_speed, server::CFuncConveyor, float);
				MEMBER(h_conveyor_models, server::CFuncConveyor, CNetworkUtlVectorBase<chandle<server::CBaseEntity>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncConveyor

			class CTriggerDetectExplosion : public server::CBaseTrigger {
				MEMBER(on_detected_explosion, server::CTriggerDetectExplosion, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerDetectExplosion

			class CSoundStackSave : public server::CLogicalEntity {
				MEMBER(isz_stack_name, server::CSoundStackSave, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundStackSave

			class CPhysHinge : public server::CPhysConstraint {
				MEMBER(sound_info, server::CPhysHinge, server::ConstraintSoundInfo);
				MEMBER(notify_min_limit_reached, server::CPhysHinge, entity2::CEntityIOOutput);
				MEMBER(notify_max_limit_reached, server::CPhysHinge, entity2::CEntityIOOutput);
				MEMBER(b_at_min_limit, server::CPhysHinge, bool);
				MEMBER(b_at_max_limit, server::CPhysHinge, bool);
				MEMBER(hinge, server::CPhysHinge, vphysics2::constraint_hingeparams_t);
				MEMBER(hinge_friction, server::CPhysHinge, float);
				MEMBER(system_load_scale, server::CPhysHinge, float);
				MEMBER(b_is_axis_local, server::CPhysHinge, bool);
				MEMBER(fl_min_rotation, server::CPhysHinge, float);
				MEMBER(fl_max_rotation, server::CPhysHinge, float);
				MEMBER(fl_initial_rotation, server::CPhysHinge, float);
				MEMBER(fl_motor_frequency, server::CPhysHinge, float);
				MEMBER(fl_motor_damping_ratio, server::CPhysHinge, float);
				MEMBER(fl_angle_speed, server::CPhysHinge, float);
				MEMBER(fl_angle_speed_threshold, server::CPhysHinge, float);
				MEMBER(on_start_moving, server::CPhysHinge, entity2::CEntityIOOutput);
				MEMBER(on_stop_moving, server::CPhysHinge, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPhysHinge

			class CFilterProximity : public server::CBaseFilter {
				MEMBER(fl_radius, server::CFilterProximity, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFilterProximity

			class CMathCounter : public server::CLogicalEntity {
				MEMBER(fl_min, server::CMathCounter, float);
				MEMBER(fl_max, server::CMathCounter, float);
				MEMBER(b_hit_min, server::CMathCounter, bool);
				MEMBER(b_hit_max, server::CMathCounter, bool);
				MEMBER(b_disabled, server::CMathCounter, bool);
				MEMBER(out_value, server::CMathCounter, CEntityOutputTemplate<float>);
				MEMBER(on_get_value, server::CMathCounter, CEntityOutputTemplate<float>);
				MEMBER(on_hit_min, server::CMathCounter, entity2::CEntityIOOutput);
				MEMBER(on_hit_max, server::CMathCounter, entity2::CEntityIOOutput);
				MEMBER(on_changed_from_min, server::CMathCounter, entity2::CEntityIOOutput);
				MEMBER(on_changed_from_max, server::CMathCounter, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CMathCounter

			class CInfoWorldLayer : public server::CBaseEntity {
				MEMBER(p_output_on_entities_spawned, server::CInfoWorldLayer, entity2::CEntityIOOutput);
				MEMBER(world_name, server::CInfoWorldLayer, CUtlSymbolLarge);
				MEMBER(layer_name, server::CInfoWorldLayer, CUtlSymbolLarge);
				MEMBER(b_world_layer_visible, server::CInfoWorldLayer, bool);
				MEMBER(b_entities_spawned, server::CInfoWorldLayer, bool);
				MEMBER(b_create_as_child_spawn_group, server::CInfoWorldLayer, bool);
				MEMBER(h_layer_spawn_group, server::CInfoWorldLayer, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CInfoWorldLayer

			class CLogicLineToEntity : public server::CLogicalEntity {
				MEMBER(line, server::CLogicLineToEntity, CEntityOutputTemplate<Vector>);
				MEMBER(source_name, server::CLogicLineToEntity, CUtlSymbolLarge);
				MEMBER(start_entity, server::CLogicLineToEntity, chandle<server::CBaseEntity>);
				MEMBER(end_entity, server::CLogicLineToEntity, chandle<server::CBaseEntity>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicLineToEntity

			class CColorCorrection : public server::CBaseEntity {
				MEMBER(fl_fade_in_duration, server::CColorCorrection, float);
				MEMBER(fl_fade_out_duration, server::CColorCorrection, float);
				MEMBER(fl_start_fade_in_weight, server::CColorCorrection, float);
				MEMBER(fl_start_fade_out_weight, server::CColorCorrection, float);
				MEMBER(fl_time_start_fade_in, server::CColorCorrection, entity2::GameTime_t);
				MEMBER(fl_time_start_fade_out, server::CColorCorrection, entity2::GameTime_t);
				MEMBER(fl_max_weight, server::CColorCorrection, float);
				MEMBER(b_start_disabled, server::CColorCorrection, bool);
				MEMBER(b_enabled, server::CColorCorrection, bool);
				MEMBER(b_master, server::CColorCorrection, bool);
				MEMBER(b_client_side, server::CColorCorrection, bool);
				MEMBER(b_exclusive, server::CColorCorrection, bool);
				MEMBER(min_falloff, server::CColorCorrection, float);
				MEMBER(max_falloff, server::CColorCorrection, float);
				MEMBER(fl_cur_weight, server::CColorCorrection, float);
				MEMBER_ARR(netlookup_filename, server::CColorCorrection, 512, char);
				MEMBER(lookup_filename, server::CColorCorrection, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CColorCorrection

			class CWeaponElite : public server::CCSWeaponBaseGun {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CWeaponElite

			class CC4 : public server::CCSWeaponBase {
				MEMBER(vec_last_valid_player_held_position, server::CC4, Vector);
				MEMBER(vec_last_valid_dropped_position, server::CC4, Vector);
				MEMBER(b_do_valid_dropped_position_check, server::CC4, bool);
				MEMBER(b_started_arming, server::CC4, bool);
				MEMBER(f_armed_time, server::CC4, entity2::GameTime_t);
				MEMBER(b_bomb_placed_animation, server::CC4, bool);
				MEMBER(b_is_planting_via_use, server::CC4, bool);
				MEMBER(entity_spotted_state, server::CC4, server::EntitySpottedState_t);
				MEMBER(n_spot_rules, server::CC4, int32_t);
				MEMBER_ARR(b_played_arming_beeps, server::CC4, 7, bool);
				MEMBER(b_bomb_planted, server::CC4, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CC4

			class CHostageRescueZone : public server::CHostageRescueZoneShim {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CHostageRescueZone

			class CPointPrefab : public server::CServerOnlyPointEntity {
				MEMBER(target_map_name, server::CPointPrefab, CUtlSymbolLarge);
				MEMBER(force_world_group_id, server::CPointPrefab, CUtlSymbolLarge);
				MEMBER(associated_relay_target_name, server::CPointPrefab, CUtlSymbolLarge);
				MEMBER(fixup_names, server::CPointPrefab, bool);
				MEMBER(b_load_dynamic, server::CPointPrefab, bool);
				MEMBER(associated_relay_entity, server::CPointPrefab, chandle<server::CPointPrefab>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPointPrefab

			class CTankTrainAI : public server::CPointEntity {
				MEMBER(h_train, server::CTankTrainAI, chandle<server::CFuncTrackTrain>);
				MEMBER(h_target_entity, server::CTankTrainAI, chandle<server::CBaseEntity>);
				MEMBER(sound_playing, server::CTankTrainAI, int32_t);
				MEMBER(start_sound_name, server::CTankTrainAI, CUtlSymbolLarge);
				MEMBER(engine_sound_name, server::CTankTrainAI, CUtlSymbolLarge);
				MEMBER(movement_sound_name, server::CTankTrainAI, CUtlSymbolLarge);
				MEMBER(target_entity_name, server::CTankTrainAI, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTankTrainAI

			class CGameGibManager : public server::CBaseEntity {
				MEMBER(b_allow_new_gibs, server::CGameGibManager, bool);
				MEMBER(i_current_max_pieces, server::CGameGibManager, int32_t);
				MEMBER(i_max_pieces, server::CGameGibManager, int32_t);
				MEMBER(i_last_frame, server::CGameGibManager, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CGameGibManager

			class CCSPointScript : public pulse_runtime_lib::CBasePulseGraphInstance {
				MEMBER(p_parent, server::CCSPointScript, server::CCSPointScriptEntity*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSPointScript

			class CCSSprite : public server::CSprite {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCSSprite

			class SpawnPoint : public server::CServerOnlyPointEntity {
				MEMBER(i_priority, server::SpawnPoint, int32_t);
				MEMBER(b_enabled, server::SpawnPoint, bool);
				MEMBER(n_type, server::SpawnPoint, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class SpawnPoint

			class CTripWireFireProjectile : public server::CBaseGrenade {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTripWireFireProjectile

			class CEnvSpark : public server::CPointEntity {
				MEMBER(fl_delay, server::CEnvSpark, float);
				MEMBER(n_magnitude, server::CEnvSpark, int32_t);
				MEMBER(n_trail_length, server::CEnvSpark, int32_t);
				MEMBER(n_type, server::CEnvSpark, int32_t);
				MEMBER(on_spark, server::CEnvSpark, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEnvSpark

			class CPlayer_AutoaimServices : public client::CPlayerPawnComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPlayer_AutoaimServices

			class CNavLinkAreaEntity : public server::CPointEntity {
				MEMBER(fl_width, server::CNavLinkAreaEntity, float);
				MEMBER(v_locator_offset, server::CNavLinkAreaEntity, Vector);
				MEMBER(q_locator_angles_offset, server::CNavLinkAreaEntity, QAngle);
				MEMBER(str_movement_forward, server::CNavLinkAreaEntity, CUtlSymbolLarge);
				MEMBER(str_movement_reverse, server::CNavLinkAreaEntity, CUtlSymbolLarge);
				MEMBER(n_nav_link_id_forward, server::CNavLinkAreaEntity, int32_t);
				MEMBER(n_nav_link_id_reverse, server::CNavLinkAreaEntity, int32_t);
				MEMBER(b_enabled, server::CNavLinkAreaEntity, bool);
				MEMBER(str_filter_name, server::CNavLinkAreaEntity, CUtlSymbolLarge);
				MEMBER(h_filter, server::CNavLinkAreaEntity, chandle<server::CBaseFilter>);
				MEMBER(on_nav_link_start, server::CNavLinkAreaEntity, entity2::CEntityIOOutput);
				MEMBER(on_nav_link_finish, server::CNavLinkAreaEntity, entity2::CEntityIOOutput);
				MEMBER(b_is_terminus, server::CNavLinkAreaEntity, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNavLinkAreaEntity

			class CFuncMoveLinear : public server::CBaseToggle {
				MEMBER(authored_position, server::CFuncMoveLinear, server::MoveLinearAuthoredPos_t);
				MEMBER(ang_move_entity_space, server::CFuncMoveLinear, QAngle);
				MEMBER(vec_move_dir_parent_space, server::CFuncMoveLinear, Vector);
				MEMBER(sound_start, server::CFuncMoveLinear, CUtlSymbolLarge);
				MEMBER(sound_stop, server::CFuncMoveLinear, CUtlSymbolLarge);
				MEMBER(current_sound, server::CFuncMoveLinear, CUtlSymbolLarge);
				MEMBER(fl_block_damage, server::CFuncMoveLinear, float);
				MEMBER(fl_start_position, server::CFuncMoveLinear, float);
				MEMBER(on_fully_open, server::CFuncMoveLinear, entity2::CEntityIOOutput);
				MEMBER(on_fully_closed, server::CFuncMoveLinear, entity2::CEntityIOOutput);
				MEMBER(b_create_movable_nav_mesh, server::CFuncMoveLinear, bool);
				MEMBER(b_create_nav_obstacle, server::CFuncMoveLinear, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuncMoveLinear

			class CCommentaryAuto : public server::CBaseEntity {
				MEMBER(on_commentary_new_game, server::CCommentaryAuto, entity2::CEntityIOOutput);
				MEMBER(on_commentary_mid_game, server::CCommentaryAuto, entity2::CEntityIOOutput);
				MEMBER(on_commentary_multiplayer_spawn, server::CCommentaryAuto, entity2::CEntityIOOutput);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CCommentaryAuto

			class CTriggerBombReset : public server::CBaseTrigger {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTriggerBombReset

			class CLogicMeasureMovement : public server::CLogicalEntity {
				MEMBER(str_measure_target, server::CLogicMeasureMovement, CUtlSymbolLarge);
				MEMBER(str_measure_reference, server::CLogicMeasureMovement, CUtlSymbolLarge);
				MEMBER(str_target_reference, server::CLogicMeasureMovement, CUtlSymbolLarge);
				MEMBER(h_measure_target, server::CLogicMeasureMovement, chandle<server::CBaseEntity>);
				MEMBER(h_measure_reference, server::CLogicMeasureMovement, chandle<server::CBaseEntity>);
				MEMBER(h_target, server::CLogicMeasureMovement, chandle<server::CBaseEntity>);
				MEMBER(h_target_reference, server::CLogicMeasureMovement, chandle<server::CBaseEntity>);
				MEMBER(fl_scale, server::CLogicMeasureMovement, float);
				MEMBER(n_measure_type, server::CLogicMeasureMovement, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CLogicMeasureMovement

			class CPulseCell_Outflow_PlaySceneBase : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow {
				MEMBER(on_finished, server::CPulseCell_Outflow_PlaySceneBase, pulse_runtime_lib::CPulse_ResumePoint);
				MEMBER(on_canceled, server::CPulseCell_Outflow_PlaySceneBase, pulse_runtime_lib::CPulse_ResumePoint);
				MEMBER(triggers, server::CPulseCell_Outflow_PlaySceneBase, cutl_vector<pulse_runtime_lib::CPulse_OutflowConnection>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Outflow_PlaySceneBase

			class CPulseCell_SoundEventStart : public pulse_runtime_lib::CPulseCell_BaseFlow {
				MEMBER(type, server::CPulseCell_SoundEventStart, server::SoundEventStartType_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_SoundEventStart

			class CPulseCell_Outflow_PlaySequence : public server::CPulseCell_Outflow_PlaySceneBase {
				MEMBER(param_sequence_name, server::CPulseCell_Outflow_PlaySequence, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Outflow_PlaySequence

			class CPulseCell_Outflow_ScriptedSequence : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow {
				MEMBER(sz_sync_group, server::CPulseCell_Outflow_ScriptedSequence, CUtlString);
				MEMBER(n_expected_num_sequences_in_sync_group, server::CPulseCell_Outflow_ScriptedSequence, int32_t);
				MEMBER(b_ensure_on_navmesh_on_finish, server::CPulseCell_Outflow_ScriptedSequence, bool);
				MEMBER(b_dont_teleport_at_end, server::CPulseCell_Outflow_ScriptedSequence, bool);
				MEMBER(scripted_sequence_data_main, server::CPulseCell_Outflow_ScriptedSequence, server::PulseScriptedSequenceData_t);
				MEMBER(vec_additional_actors, server::CPulseCell_Outflow_ScriptedSequence, cutl_vector<server::PulseScriptedSequenceData_t>);
				MEMBER(on_finished, server::CPulseCell_Outflow_ScriptedSequence, pulse_runtime_lib::CPulse_ResumePoint);
				MEMBER(on_canceled, server::CPulseCell_Outflow_ScriptedSequence, pulse_runtime_lib::CPulse_ResumePoint);
				MEMBER(triggers, server::CPulseCell_Outflow_ScriptedSequence, cutl_vector<pulse_runtime_lib::CPulse_OutflowConnection>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Outflow_ScriptedSequence

			class CChicken_GraphController : public client::CAnimGraphControllerBase {
				MEMBER(param_activity, server::CChicken_GraphController, CAnimGraphParamRef<char*>);
				MEMBER(param_end_activity_immediately, server::CChicken_GraphController, CAnimGraphParamRef<bool>);
			///	MEMBER(s_activity_finished, server::CChicken_GraphController, CAnimGraphTagRef);
				MEMBER(param_turn_angle, server::CChicken_GraphController, CAnimGraphParamRef<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CChicken_GraphController

			class CPulseCell_Outflow_PlayVCD : public server::CPulseCell_Outflow_PlaySceneBase {
				MEMBER(vcd_filename, server::CPulseCell_Outflow_PlayVCD, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Outflow_PlayVCD

			class CPulseCell_Value_FindEntByName : public pulse_runtime_lib::CPulseCell_BaseValue {
				MEMBER(entity_type, server::CPulseCell_Value_FindEntByName, CUtlString);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Value_FindEntByName

		} // namespace server

		*/
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_server_H
