#pragma once
#include <game/game.h>
#include <sdk/mem_alloc.h>
#include "schema.h"
#include "sdk/engine.h"

namespace sdk
{

	enum flags : uint32_t
	{
		fl_onground = (1 << 0),
		fl_ducking = (1 << 1),
		fl_waterjump = (1 << 3),
		fl_ontrain = (1 << 4),
		fl_inrain = (1 << 5),
		fl_frozen = (1 << 6),
		fl_atcontrols = (1 << 7),
		fl_client = (1 << 8),
		fl_fakeclient = (1 << 9),
		fl_inwater = (1 << 10),
	};

	enum weapon_id : uint32_t
	{
		weapon_deagle = 1,
		weapon_elite = 2,
		weapon_fiveseven = 3,
		weapon_glock = 4,
		weapon_ak47 = 7,
		weapon_aug = 8,
		weapon_awp = 9,
		weapon_famas = 10,
		weapon_g3sg1 = 11,
		weapon_galilar = 13,
		weapon_m249 = 14,
		weapon_m4a1 = 16,
		weapon_mac10 = 17,
		weapon_p90 = 19,
		weapon_zone_repulsor = 20,
		weapon_mp5sd = 23,
		weapon_ump45 = 24,
		weapon_xm1014 = 25,
		weapon_bizon = 26,
		weapon_mag7 = 27,
		weapon_negev = 28,
		weapon_sawedoff = 29,
		weapon_tec9 = 30,
		weapon_taser = 31,
		weapon_hkp2000 = 32,
		weapon_mp7 = 33,
		weapon_mp9 = 34,
		weapon_nova = 35,
		weapon_p250 = 36,
		weapon_shield = 37,
		weapon_scar20 = 38,
		weapon_sg556 = 39,
		weapon_ssg08 = 40,
		weapon_knifegg = 41,
		weapon_knife = 42,
		weapon_flashbang = 43,
		weapon_hegrenade = 44,
		weapon_smokegrenade = 45,
		weapon_molotov = 46,
		weapon_decoy = 47,
		weapon_incgrenade = 48,
		weapon_c4 = 49,
		weapon_healthshot = 57,
		weapon_knife_t = 59,
		weapon_m4a1_silencer = 60,
		weapon_usp_silencer = 61,
		weapon_cz75a = 63,
		weapon_revolver = 64,
		weapon_tagrenade = 68,
		weapon_fists = 69,
		weapon_breachcharge = 70,
		weapon_tablet = 72,
		weapon_melee = 74,
		weapon_axe = 75,
		weapon_hammer = 76,
		weapon_spanner = 78,
		weapon_knife_ghost = 80,
		weapon_firebomb = 81,
		weapon_diversion = 82,
		weapon_fraggrenade = 83,
		weapon_snowball = 84,
		weapon_bumpmine = 85,
		weapon_bayonet = 500,
		weapon_knife_css = 503,
		weapon_knife_flip = 505,
		weapon_knife_gut = 506,
		weapon_knife_karambit = 507,
		weapon_knife_m9bayonet = 508,
		weapon_knife_tactical = 509,
		weapon_knife_falchion = 512,
		weapon_knife_survival_bowie = 514,
		weapon_knife_butterfly = 515,
		weapon_knife_push = 516,
		weapon_knife_cord = 517,
		weapon_knife_canis = 518,
		weapon_knife_ursus = 519,
		weapon_knife_gypsy_jackknife = 520,
		weapon_knife_outdoor = 521,
		weapon_knife_stiletto = 522,
		weapon_knife_widowmaker = 523,
		weapon_knife_skeleton = 525
	};

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

	inline std::unordered_map<uint32_t, weapon_id> name_to_id{ {FNV1A("weapon_deagle"), weapon_deagle}, {FNV1A("weapon_elite"), weapon_elite},
															  {FNV1A("weapon_fiveseven"), weapon_fiveseven}, {FNV1A("weapon_glock"), weapon_glock},
															  {FNV1A("weapon_ak47"), weapon_ak47}, {FNV1A("weapon_aug"), weapon_aug}, {FNV1A("weapon_awp"), weapon_awp},
															  {FNV1A("weapon_famas"), weapon_famas}, {FNV1A("weapon_g3sg1"), weapon_g3sg1},
															  {FNV1A("weapon_galilar"), weapon_galilar}, {FNV1A("weapon_m249"), weapon_m249},
															  {FNV1A("weapon_m4a1"), weapon_m4a1}, {FNV1A("weapon_mac10"), weapon_mac10},
															  {FNV1A("weapon_p90"), weapon_p90}, {FNV1A("weapon_zone_repulsor"), weapon_zone_repulsor},
															  {FNV1A("weapon_mp5sd"), weapon_mp5sd}, {FNV1A("weapon_ump45"), weapon_ump45},
															  {FNV1A("weapon_xm1014"), weapon_xm1014}, {FNV1A("weapon_bizon"), weapon_bizon},
															  {FNV1A("weapon_mag7"), weapon_mag7}, {FNV1A("weapon_negev"), weapon_negev},
															  {FNV1A("weapon_sawedoff"), weapon_sawedoff}, {FNV1A("weapon_tec9"), weapon_tec9},
															  {FNV1A("weapon_taser"), weapon_taser}, {FNV1A("weapon_hkp2000"), weapon_hkp2000},
															  {FNV1A("weapon_mp7"), weapon_mp7}, {FNV1A("weapon_mp9"), weapon_mp9}, {FNV1A("weapon_nova"), weapon_nova},
															  {FNV1A("weapon_p250"), weapon_p250}, {FNV1A("weapon_shield"), weapon_shield},
															  {FNV1A("weapon_scar20"), weapon_scar20}, {FNV1A("weapon_sg556"), weapon_sg556},
															  {FNV1A("weapon_ssg08"), weapon_ssg08}, {FNV1A("weapon_knifegg"), weapon_knifegg},
															  {FNV1A("weapon_knife"), weapon_knife}, {FNV1A("weapon_flashbang"), weapon_flashbang},
															  {FNV1A("weapon_hegrenade"), weapon_hegrenade}, {FNV1A("weapon_smokegrenade"), weapon_smokegrenade},
															  {FNV1A("weapon_molotov"), weapon_molotov}, {FNV1A("weapon_decoy"), weapon_decoy},
															  {FNV1A("weapon_incgrenade"), weapon_incgrenade}, {FNV1A("weapon_c4"), weapon_c4},
															  {FNV1A("weapon_healthshot"), weapon_healthshot}, {FNV1A("weapon_knife_t"), weapon_knife_t},
															  {FNV1A("weapon_m4a1_silencer"), weapon_m4a1_silencer}, {FNV1A("weapon_usp_silencer"), weapon_usp_silencer},
															  {FNV1A("weapon_cz75a"), weapon_cz75a}, {FNV1A("weapon_revolver"), weapon_revolver},
															  {FNV1A("weapon_tagrenade"), weapon_tagrenade}, {FNV1A("weapon_fists"), weapon_fists},
															  {FNV1A("weapon_breachcharge"), weapon_breachcharge}, {FNV1A("weapon_tablet"), weapon_tablet},
															  {FNV1A("weapon_melee"), weapon_melee}, {FNV1A("weapon_axe"), weapon_axe},
															  {FNV1A("weapon_hammer"), weapon_hammer}, {FNV1A("weapon_spanner"), weapon_spanner},
															  {FNV1A("weapon_knife_ghost"), weapon_knife_ghost}, {FNV1A("weapon_firebomb"), weapon_firebomb},
															  {FNV1A("weapon_diversion"), weapon_diversion}, {FNV1A("weapon_fraggrenade"), weapon_fraggrenade},
															  {FNV1A("weapon_snowball"), weapon_snowball}, {FNV1A("weapon_bumpmine"), weapon_bumpmine},
															  {FNV1A("weapon_bayonet"), weapon_bayonet}, {FNV1A("weapon_knife_css"), weapon_knife_css},
															  {FNV1A("weapon_knife_flip"), weapon_knife_flip}, {FNV1A("weapon_knife_gut"), weapon_knife_gut},
															  {FNV1A("weapon_knife_karambit"), weapon_knife_karambit},
															  {FNV1A("weapon_knife_m9bayonet"), weapon_knife_m9bayonet},
															  {FNV1A("weapon_knife_tactical"), weapon_knife_tactical},
															  {FNV1A("weapon_knife_falchion"), weapon_knife_falchion},
															  {FNV1A("weapon_knife_survival_bowie"), weapon_knife_survival_bowie},
															  {FNV1A("weapon_knife_butterfly"), weapon_knife_butterfly}, {FNV1A("weapon_knife_push"), weapon_knife_push},
															  {FNV1A("weapon_knife_cord"), weapon_knife_cord}, {FNV1A("weapon_knife_canis"), weapon_knife_canis},
															  {FNV1A("weapon_knife_ursus"), weapon_knife_ursus},
															  {FNV1A("weapon_knife_gypsy_jackknife"), weapon_knife_gypsy_jackknife},
															  {FNV1A("weapon_knife_outdoor"), weapon_knife_outdoor},
															  {FNV1A("weapon_knife_stiletto"), weapon_knife_stiletto},
															  {FNV1A("weapon_knife_widowmaker"), weapon_knife_widowmaker},
															  {FNV1A("weapon_knife_skeleton"), weapon_knife_skeleton}, };

	struct CBoneData
	{
		sdk::vector Location;
		float Scale;
		sdk::quaternion Rotation;
	};

	struct econ_item_definition_t
	{
		MEM_PAD(8);
		void* kv_item;
		uint16_t def_index;
		cutl_vector<uint16_t> associated_items_def_indexes;
		bool enabled;
		const char* prefab;
		uint8_t min_item_level;
		uint8_t max_item_level;
		uint8_t item_rarity;
		uint8_t item_quality;
		uint8_t forced_item_quality;
		uint8_t default_drop_item_quality;
		uint8_t default_drop_quantity;
		cutl_vector<void*> static_attributes;
		uint8_t popularity_seed;
		void* portraits_kv;
		const char* item_base_name;
		bool proper_name;
		const char* item_type_name;
		uint32_t item_type_id;
		const char* item_desc;
	};

	struct cview_setup
	{
		MEM_PAD(0x490);
		float flOrthoLeft; // 0x0494
		float flOrthoTop; // 0x0498
		float flOrthoRight; // 0x049C
		float flOrthoBottom; // 0x04A0
		MEM_PAD(0x38);
		float Fov; // 0x04D8
		float fov_viewmodel; // 0x04DC
		vector origin; // 0x04E0
		MEM_PAD(0xC); // 0x04EC
		qangle view; // 0x04F8
		MEM_PAD(0x14); // 0x0504
		float aspect_ratio; // 0x0518
		MEM_PAD(0x71);
		BYTE nSomeFlags;
	};

	struct cview_render
	{
		MEM_PAD(0x10)
		cview_setup setup;
	};

	enum client_frame_stage : int
	{
		FRAME_UNDEFINED = -1,
		FRAME_START,
		FRAME_SIMULATE_START,
		FRAME_NET_UPDATE_START,
		FRAME_NET_UPDATE_PREPROCESS,
		FRAME_NET_FULL_FRAME_UPDATE_ON_REMOVE,
		FRAME_NET_UPDATE_POSTDATAUPDATE_START,
		FRAME_NET_UPDATE_POSTDATAUPDATE_END,
		FRAME_NET_UPDATE_END,
		FRAME_NET_CREATION,
		FRAME_SIMULATE_END,
	};

	class CEntityIdentity
	{
	public:
		std::uint32_t GetIndex() const {
			return *reinterpret_cast<const std::uint32_t*>(reinterpret_cast<std::uintptr_t>(this) + 0x10);
		}

		SCHEMA_MEMBER(name, schema::entity2, CEntityIdentity, CUtlSymbolLarge);
		SCHEMA_MEMBER(designer_name, schema::entity2, CEntityIdentity, CUtlSymbolLarge);
		SCHEMA_MEMBER(flags, schema::entity2, CEntityIdentity, std::uint32_t);

		bool IsValid()
		{
			return GetIndex() != invalid_ehandle_index;
		}

		int GetEntryIndex()
		{
			if (!IsValid())
				return ent_entry_mask;

			return GetIndex() & ent_entry_mask;
		}

		int GetSerialNumber()
		{
			return GetIndex() >> num_serial_num_shift_bits;
		}

		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }
	};

	class CEntityInstance
	{
	public:
		void get_schema_class_info(sdk::schema_class_info_data_t** pReturn)
		{
			return utils::CallVFunc<void, 38U>(this, pReturn);
		}

		chandle<CEntityIdentity> GetRefEHandle() {
			CEntityIdentity* pIdentity = get_p_entity();
			if (pIdentity == nullptr)
				return chandle<CEntityIdentity>();

			return chandle<CEntityIdentity>(
				pIdentity->GetEntryIndex(),
				pIdentity->GetSerialNumber() - (pIdentity->get_flags() & 1)
			);
		}

		SCHEMA_MEMBER(p_entity, schema::entity2, CEntityInstance, CEntityIdentity*);

		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }
	};

	class CCollisionProperty {
	public:
		SCHEMA_MEMBER(vec_mins, schema::client, CCollisionProperty, vector);
		SCHEMA_MEMBER(vec_maxs, schema::client, CCollisionProperty, vector);
		SCHEMA_MEMBER(us_solid_flags, schema::client, CCollisionProperty, uint8_t);
		SCHEMA_MEMBER(trigger_bloat, schema::client, CCollisionProperty, uint8_t);
		SCHEMA_MEMBER(collision_group, schema::client, CCollisionProperty, uint8_t);
		SCHEMA_MEMBER(n_enable_physics, schema::client, CCollisionProperty, uint8_t);
		SCHEMA_MEMBER(fl_bounding_radius, schema::client, CCollisionProperty, float);
		SCHEMA_MEMBER(vec_specified_surrounding_mins, schema::client, CCollisionProperty, vector);
		SCHEMA_MEMBER(vec_specified_surrounding_maxs, schema::client, CCollisionProperty, vector);
		SCHEMA_MEMBER(vec_surrounding_maxs, schema::client, CCollisionProperty, vector);
		SCHEMA_MEMBER(vec_surrounding_mins, schema::client, CCollisionProperty, vector);
		SCHEMA_MEMBER(v_capsule_center1, schema::client, CCollisionProperty, vector);
		SCHEMA_MEMBER(v_capsule_center2, schema::client, CCollisionProperty, vector);
		SCHEMA_MEMBER(fl_capsule_radius, schema::client, CCollisionProperty, float);

		std::uint16_t CollisionMask() const {
			return *reinterpret_cast<const std::uint16_t*>(reinterpret_cast<std::uintptr_t>(this) + 0x38);
		}

		// Method to cast to a specific type
		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }

	};

	struct cgame_entity_system;

	//struct cgame_entity_system;
	//class C_CSPlayerPawn;
	struct cgame_resource_service
	{
		MEM_PAD(0x58);
		cgame_entity_system* game_entity_system;
	};

	class CPlayerPawnComponent {
	public:
		// Method to cast to a specific type
		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }
	}; // class CPlayerPawnComponent

	// forward decleration
	class C_BasePlayerWeapon;
	class CPlayer_WeaponServices : public CPlayerPawnComponent {
	public:
		SCHEMA_MEMBER(h_my_weapons, schema::client, CPlayer_WeaponServices, cnetwork_utl_vector_base<chandle<C_BasePlayerWeapon>>);
		SCHEMA_MEMBER(h_active_weapon, schema::client, CPlayer_WeaponServices, chandle<C_BasePlayerWeapon>);
		SCHEMA_MEMBER(h_last_weapon, schema::client, CPlayer_WeaponServices, chandle<C_BasePlayerWeapon>);
		//MEMBER_ARR(i_ammo, client::CPlayer_WeaponServices, 32, uint16_t);

		// Method to cast to a specific type
		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }
	}; // class CPlayer_WeaponServices

	class CCSPlayer_WeaponServices : public CPlayer_WeaponServices {
	public:
		SCHEMA_MEMBER(fl_next_attack, schema::client, CCSPlayer_WeaponServices, schema::entity2::GameTime_t);
		SCHEMA_MEMBER(b_is_looking_at_weapon, schema::client, CCSPlayer_WeaponServices, bool);
		SCHEMA_MEMBER(b_is_holding_look_at_weapon, schema::client, CCSPlayer_WeaponServices, bool);
		SCHEMA_MEMBER(n_old_shoot_position_history_count, schema::client, CCSPlayer_WeaponServices, uint32_t);
		SCHEMA_MEMBER(n_old_input_history_count, schema::client, CCSPlayer_WeaponServices, uint32_t);

		// Method to cast to a specific type
		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }
	}; // class CCSPlayer_WeaponServices

	class CModel
	{
	public:

	};

	class CModelState
	{
	public:
		std::uint8_t padding_0[0x80];
		CBoneData* bones;
		std::uint8_t padding_1[0x18];
		CStrongHandle<CModel> modelHandle;
		CUtlSymbolLarge modelName;
	};

	//foward
	class CSkeletonInstance;

	class CGameSceneNode
	{
	public:
		SCHEMA_MEMBER(vec_abs_origin, schema::client, CGameSceneNode, vector);
		SCHEMA_MEMBER(vec_origin, schema::client, CGameSceneNode, vector);
		SCHEMA_MEMBER(ang_rotation, schema::client, CGameSceneNode, qangle);
		SCHEMA_MEMBER(ang_abs_rotation, schema::client, CGameSceneNode, qangle);

		// Method to cast to a specific type
		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }
	};

	class CSkeletonInstance : public CGameSceneNode
	{
	public:
		MEM_PAD(0x1CC); //0x0000
		int nBoneCount; //0x01CC
		MEM_PAD(0x18); //0x01D0
		int nMask; //0x01E8
		MEM_PAD(0x4); //0x01EC
		//Matrix2x4_t* pBoneCache; //0x01F0

		SCHEMA_MEMBER(model_state, schema::client, CSkeletonInstance, CModelState);
	};


	class C_BaseEntity : public CEntityInstance
	{
	public:
		SCHEMA_MEMBER(p_game_scene_node, schema::client, C_BaseEntity, CGameSceneNode*);
		SCHEMA_MEMBER(p_collision, schema::client, C_BaseEntity, CCollisionProperty*);
		SCHEMA_MEMBER(h_owner_entity, schema::client, C_BaseEntity, chandle<C_BaseEntity>);
		SCHEMA_MEMBER(i_team_num, schema::client, C_BaseEntity, uint8_t);
		SCHEMA_MEMBER(life_state, schema::client, C_BaseEntity, uint8_t);
		SCHEMA_MEMBER(i_max_health, schema::client, C_BaseEntity, int32_t);
		SCHEMA_MEMBER(i_health, schema::client, C_BaseEntity, int32_t);
		SCHEMA_MEMBER(n_subclass_id, schema::client, C_BaseEntity, uint64_t);
		SCHEMA_MEMBER(f_flags, schema::client, C_BaseEntity, uint32_t);
		SCHEMA_MEMBER(move_type, schema::client, C_BaseEntity, MoveType_t);
		SCHEMA_MEMBER(fl_water_level, schema::client, C_BaseEntity, float);
		SCHEMA_MEMBER(fl_simulation_time, schema::client, C_BaseEntity, float);
		SCHEMA_MEMBER(vec_abs_velocity, schema::client, C_BaseEntity, vector);

		//fl_water_level
		//MEMBER(move_type, client::C_BaseEntity, client::MoveType_t);

		const vector& get_computed_abs_origin()
		{
			if (this->get_p_game_scene_node())
				return get_p_game_scene_node()->get_vec_abs_origin();

			return vector(0.f, 0.f, 0.f);
		}

		bool find_class(std::uint64_t name)
		{
			sdk::schema_class_info_data_t* info = nullptr;

			this->get_schema_class_info(&info);
			if (info == nullptr)
				return false;

			if (FNV1A_CMP_IM(info->name, name))
				return true;

			return false;
		}

		// Method to cast to a specific type
		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }

	};


	class C_BaseModelEntity : public C_BaseEntity
	{
	public:
		SCHEMA_MEMBER(vec_view_offset, schema::client, C_BaseModelEntity, vector);


		vector get_eye_pos() noexcept {
			const auto game_scene_node = get_p_game_scene_node();

			return game_scene_node->get_vec_origin() + get_vec_view_offset();
		}

		// Method to cast to a specific type
		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }

	};

	class CBaseAnimGraph : public C_BaseModelEntity {
	public:


		// Method to cast to a specific type
		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }
	}; // class CBaseAnimGraph

	struct cs2_econ_item_view : schema::client::C_EconItemView
	{
		econ_item_definition_t* get_item_definition()
		{
			return utils::CallVFunc<econ_item_definition_t*, 13>(this);
		}

	};

	class C_BaseFlex : public CBaseAnimGraph {
	public:


	};

	class CAttributeManager
	{
	public:
		virtual ~CAttributeManager() = 0;
	};

	class C_AttributeContainer : public CAttributeManager
	{
	public:
		//CS_CLASS_NO_INITIALIZER(C_AttributeContainer);
		SCHEMA_MEMBER(item, schema::client, C_AttributeContainer, cs2_econ_item_view);

		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }
	};

	class C_EconEntity : public C_BaseFlex {
	public:
		SCHEMA_MEMBER(attribute_manager, schema::client, C_EconEntity, C_AttributeContainer);

		// Method to cast to a specific type
		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }
	}; // class C_EconEntity

	//for now atm
	class C_BasePlayerWeapon : public C_EconEntity {
	public:
		SCHEMA_MEMBER(fl_next_secondary_attack_tick_ratio, schema::client, C_BasePlayerWeapon, float);

		SCHEMA_MEMBER(i_clip1, schema::client, C_BasePlayerWeapon, int);
		SCHEMA_MEMBER(i_clip2, schema::client, C_BasePlayerWeapon, int);

		// Method to cast to a specific type
		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }
	};

	///foward
	class CCSWeaponBaseVData;

	class C_CSWeaponBase : public C_BasePlayerWeapon
	{
	public:

		//fuck me i forgot foward declare CCSWeaponBaseVData
		CCSWeaponBaseVData* weapon_vdata() {
			// Get the value of n_subclass_id (a uint64_t), which is at the offset in C_BaseEntity
			uint64_t base_value = get_n_subclass_id();

			// Add the offset 0x8 and reinterpret it as a pointer to CCSWeaponBaseVData
			return reinterpret_cast<CCSWeaponBaseVData*>(base_value + 0x8);
		}

		// Method to cast to a specific type
		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }
	};

	class C_BasePlayerPawn : public C_BaseModelEntity
	{
	public:
		SCHEMA_MEMBER(p_weapon_services, schema::client, C_BasePlayerPawn, CPlayer_WeaponServices*);
		SCHEMA_MEMBER(f_immune_to_gun_game_damage_time, schema::client, C_CSPlayerPawnBase, schema::entity2::GameTime_t);

		vector get_eye_position()
		{
			vector vecEyePosition = vector(0.0f, 0.0f, 0.0f);
			utils::CallVFunc<void, 169U>(this, &vecEyePosition);
			return vecEyePosition;
		}

		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }
	};

	class CCSPlayer_ViewModelServices;

	class C_CSPlayerPawnBase : public C_BasePlayerPawn
	{
	public:
		SCHEMA_MEMBER(fl_last_spawn_time_index, schema::client, C_CSPlayerPawnBase, schema::entity2::GameTime_t);
		SCHEMA_MEMBER(fl_flash_duration, schema::client, C_CSPlayerPawnBase, float);

		// Method to cast to a specific type
		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }

	};


	class C_CSPlayerPawn : public C_CSPlayerPawnBase
	{
	public:
		SCHEMA_MEMBER(b_prev_defuser, schema::client, C_CSPlayerPawn, bool);
		SCHEMA_MEMBER(b_prev_helmet, schema::client, C_CSPlayerPawn, bool);
		SCHEMA_MEMBER(n_prev_armor_val, schema::client, C_CSPlayerPawn, int32_t);
		SCHEMA_MEMBER(armor_value, schema::client, C_CSPlayerPawn, int32_t);
		SCHEMA_MEMBER(b_is_scoped, schema::client, C_CSPlayerPawn, bool);


		bool is_enemy()
		{
			const auto local_controller = reinterpret_cast<schema::client::CCSPlayerController*>(sdk::LocalPlayerController);
			return !local_controller || !local_controller->get_h_player_pawn().valid() ? true : get_i_team_num() != local_controller->get_i_team_num();
		}

		bool is_alive() { return get_life_state() == static_cast<uint8_t>(schema::client::LifeState_t::LIFE_ALIVE); }

		C_CSWeaponBase* GetActiveWeapon();

		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }
	};

	class CBasePlayerController : public C_BaseModelEntity
	{
	public:
		SCHEMA_MEMBER(b_is_local_player_controller, schema::client, CBasePlayerController, bool);
		//SCHEMA_MEMBER_CUSTOM(h_pawn, schema::client, CBasePlayerController, CBaseHandle);
		SCHEMA_MEMBER(h_pawn, schema::client, CBasePlayerController, chandle<C_BasePlayerPawn>);

		// Method to cast to a specific type
		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }

	};

	class CCSPlayerController : public CBasePlayerController
	{
	public:
		SCHEMA_MEMBER(p_in_game_money_services, schema::client, CCSPlayerController, schema::client::CCSPlayerController_InGameMoneyServices*);
		SCHEMA_MEMBER(h_player_pawn, schema::client, CCSPlayerController, chandle<C_CSPlayerPawn>);
		SCHEMA_MEMBER(i_ping, schema::client, CCSPlayerController, uint32_t);
		SCHEMA_MEMBER(s_sanitized_player_name, schema::client, CCSPlayerController, cutl_string);
		SCHEMA_MEMBER(n_tick_base, schema::client, CBasePlayerController, uint32_t);
		SCHEMA_MEMBER(i_pawn_health, schema::client, CCSPlayerController, uint32_t);
		SCHEMA_MEMBER(i_pawn_armor, schema::client, CCSPlayerController, int32_t);
		SCHEMA_MEMBER(b_pawn_has_defuser, schema::client, CCSPlayerController, bool);
		SCHEMA_MEMBER(b_pawn_has_helmet, schema::client, CCSPlayerController, bool);
		SCHEMA_MEMBER(b_pawn_is_alive, schema::client, CCSPlayerController, bool);

		bool is_enemy() { return !get_pawn() || get_pawn()->is_enemy(); }

		C_CSPlayerPawn* get_pawn()
		{
			return get_h_player_pawn().valid() ? get_h_player_pawn().get_as<C_CSPlayerPawn>() : nullptr;
		}

		// Method to cast to a specific type
		template <typename T>
		T* as() { return reinterpret_cast<T*>(this); }

	};

	struct cgame_entity_system
	{
		void* GetEntityByIndex(int nIndex)//GetBaseEntity
		{///40 53 48 81 EC ? ? ? ? 48 8B 0D ? ? ? ? 48 8D 94 24 ? ? ? ?
			using fnGetBaseEntity = void* (__thiscall*)(void*, int);
			static auto GetBaseEntity = reinterpret_cast<fnGetBaseEntity>(utils::find_pattern(CLIENT_DLL, "81 FA ? ? ? ? 77 ? 8B C2 C1 F8 ? 83 F8 ? 77 ? 48 98 48 8B 4C C1 ? 48 85 C9 74 ? 8B C2 25 ? ? ? ? 48 6B C0 ? 48 03 C8 74 ? 8B 41 ? 25 ? ? ? ? 3B C2 75 ? 48 8B 01"));
			return GetBaseEntity(this, nIndex);
		}

		template <typename T = C_BaseEntity>
		T* get_entity_by_index(const uint32_t nIndex)
		{
			return reinterpret_cast<T*>(this->GetEntityByIndex(nIndex));
		}

		// GetClientEntityFromHandle
		template <typename T = C_BaseEntity>
		T* Get(const chandle<T>& handle)
		{
			if (!handle.valid())
				return nullptr;

			return reinterpret_cast<T*>(this->GetEntityByIndex(handle.get_entry_index()));
		}

		CCSPlayerController* get_player_controller(const uint32_t index)
		{
			return get_entity_by_index<CCSPlayerController>(index);
		}

		int GetHighestEntityIndex()
		{
			return *reinterpret_cast<int*>(reinterpret_cast<std::uintptr_t>(this) + 0x1520);
		}

		CCSPlayerController* get_local_player_controller()
		{
			const int index = sdk::engine->get_local();
			return get_entity_by_index<CCSPlayerController>(index);
		}
	};

	struct cprediction
	{
		void update(int a2, int a3)
		{
			utils::CallVFunc<void, 11>(this, a2, a3);
		}
	};

	using CFiringModeFloat = std::float_t[2];
	using CSkillFloat = std::float_t[4];

	class CBasePlayerVData
	{
	public:


	};

	class CBasePlayerWeaponVData
	{
	public:


	};

	using CFiringModeFloat = std::float_t[2];

	class CCSWeaponBaseVData : public CBasePlayerWeaponVData
	{
	public:
		SCHEMA_MEMBER(i_max_clip1, schema::client, CBasePlayerWeaponVData, int32_t);


	};

	//inline std::string load_svg_compiled_file(const char* name)
	//{
		/*
		std::string out{};

		const auto file = load_text_file(name);
		if (!file)
			return out;

		uint8_t* i{ file };

		// locate start
		while (!std::string(reinterpret_cast<const char*>(i)).starts_with(XOR("<svg ")))
			++i;

		// read shit
		out = reinterpret_cast<const char*>(i);

		game->mem_alloc->free(file);
		return out;*/
		//}

} // namespace sdk

