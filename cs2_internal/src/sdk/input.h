#pragma once
#include <game/game.h>

namespace sdk
{
	enum ECommandButtons : std::uint64_t
	{
		IN_ATTACK = 1 << 0,
		IN_JUMP = 1 << 1,
		IN_DUCK = 1 << 2,
		IN_FORWARD = 1 << 3,
		IN_BACK = 1 << 4,
		IN_USE = 1 << 5,
		IN_LEFT = 1 << 7,
		IN_RIGHT = 1 << 8,
		IN_MOVELEFT = 1 << 9,
		IN_MOVERIGHT = 1 << 10,
		IN_SECOND_ATTACK = 1 << 11,
		IN_RELOAD = 1 << 13,
		IN_SPRINT = 1 << 16,
		IN_JOYAUTOSPRINT = 1 << 17,
		IN_SHOWSCORES = 1ULL << 33,
		IN_ZOOM = 1ULL << 34,
		IN_LOOKATWEAPON = 1ULL << 35
	};

	// compiled protobuf messages and looked at what bits are used in them
	enum ESubtickMoveStepBits : std::uint32_t
	{
		MOVESTEP_BITS_BUTTON = 0x1U,
		MOVESTEP_BITS_PRESSED = 0x2U,
		MOVESTEP_BITS_WHEN = 0x4U,
		MOVESTEP_BITS_ANALOG_FORWARD_DELTA = 0x8U,
		MOVESTEP_BITS_ANALOG_LEFT_DELTA = 0x10U
	};

	enum EInputHistoryBits : std::uint32_t
	{
		INPUT_HISTORY_BITS_VIEWANGLES = 0x1U,
		INPUT_HISTORY_BITS_SHOOTPOSITION = 0x2U,
		INPUT_HISTORY_BITS_TARGETHEADPOSITIONCHECK = 0x4U,
		INPUT_HISTORY_BITS_TARGETABSPOSITIONCHECK = 0x8U,
		INPUT_HISTORY_BITS_TARGETANGCHECK = 0x10U,
		INPUT_HISTORY_BITS_CL_INTERP = 0x20U,
		INPUT_HISTORY_BITS_SV_INTERP0 = 0x40U,
		INPUT_HISTORY_BITS_SV_INTERP1 = 0x80U,
		INPUT_HISTORY_BITS_PLAYER_INTERP = 0x100U,
		INPUT_HISTORY_BITS_RENDERTICKCOUNT = 0x200U,
		INPUT_HISTORY_BITS_RENDERTICKFRACTION = 0x400U,
		INPUT_HISTORY_BITS_PLAYERTICKCOUNT = 0x800U,
		INPUT_HISTORY_BITS_PLAYERTICKFRACTION = 0x1000U,
		INPUT_HISTORY_BITS_FRAMENUMBER = 0x2000U,
		INPUT_HISTORY_BITS_TARGETENTINDEX = 0x4000U
	};

	enum EButtonStatePBBits : uint32_t
	{
		BUTTON_STATE_PB_BITS_BUTTONSTATE1 = 0x1U,
		BUTTON_STATE_PB_BITS_BUTTONSTATE2 = 0x2U,
		BUTTON_STATE_PB_BITS_BUTTONSTATE3 = 0x4U
	};

	enum EBaseCmdBits : std::uint32_t
	{
		BASE_BITS_MOVE_CRC = 0x1U,
		BASE_BITS_BUTTONPB = 0x2U,
		BASE_BITS_VIEWANGLES = 0x4U,
		BASE_BITS_COMMAND_NUMBER = 0x8U,
		BASE_BITS_CLIENT_TICK = 0x10U,
		BASE_BITS_FORWARDMOVE = 0x20U,
		BASE_BITS_LEFTMOVE = 0x40U,
		BASE_BITS_UPMOVE = 0x80U,
		BASE_BITS_IMPULSE = 0x100U,
		BASE_BITS_WEAPON_SELECT = 0x200U,
		BASE_BITS_RANDOM_SEED = 0x400U,
		BASE_BITS_MOUSEDX = 0x800U,
		BASE_BITS_MOUSEDY = 0x1000U,
		BASE_BITS_CONSUMED_SERVER_ANGLE = 0x2000U,
		BASE_BITS_CMD_FLAGS = 0x4000U,
		BASE_BITS_ENTITY_HANDLE = 0x8000U
	};

	enum ECSGOUserCmdBits : std::uint32_t
	{
		CSGOUSERCMD_BITS_BASECMD = 0x1U,
		CSGOUSERCMD_BITS_LEFTHAND = 0x2U,
		CSGOUSERCMD_BITS_ATTACK3START = 0x4U,
		CSGOUSERCMD_BITS_ATTACK1START = 0x8U,
		CSGOUSERCMD_BITS_ATTACK2START = 0x10U
	};

	enum ProtobufSlot : uint64_t
	{
		PROTOSLOT_1 = 0x1,
		PROTOSLOT_2 = 0x2,
		PROTOSLOT_3 = 0x4,
		PROTOSLOT_4 = 0x8,
		PROTOSLOT_5 = 0x10,
		PROTOSLOT_6 = 0x20,
		PROTOSLOT_7 = 0x40,
		PROTOSLOT_8 = 0x80,
		PROTOSLOT_9 = 0x100,
		PROTOSLOT_10 = 0x200,
		PROTOSLOT_11 = 0x400,
		PROTOSLOT_12 = 0x800,
		PROTOSLOT_13 = 0x1000,
		PROTOSLOT_14 = 0x2000,
		PROTOSLOT_15 = 0x4000,
		PROTOSLOT_16 = 0x8000
	};

	template <typename T>
	struct RepeatedPtrField_t
	{
		struct Rep_t
		{
			int nAllocatedSize;
			T* tElements[(std::numeric_limits<int>::max() - 2 * sizeof(int)) / sizeof(void*)];
		};

		void* pArena;
		int nCurrentSize;
		int nTotalSize;
		Rep_t* pRep;

		T* add(T* element)
		{
			// Define the function pointer correctly
			static auto add_to_rep_addr = reinterpret_cast<T * (__fastcall*)(RepeatedPtrField_t*, T*)>(
				utils::get_absolute_address(
					utils::find_pattern(L"client.dll", "E8 ? ? ? ? 4C 8B E0 48 8B 44 24 ? 4C 8B CF"), 0x1)
				);

			// Use the function pointer to call the function
			return add_to_rep_addr(this, element);
		}
	};

	class CBasePB
	{
	public:
		MEM_PAD(0x8) // 0x0 VTABLE
		std::uint32_t nHasBits; // 0x8
		std::uint64_t nCachedBits; // 0xC

		void SetBits(std::uint64_t nBits)
		{
			// @note: you don't need to check if the bits are already set as bitwise OR will not change the value if the bit is already set
			nCachedBits |= nBits;
		}
	};

	static_assert(sizeof(CBasePB) == 0x18);

	class CMsgQAngle : public CBasePB
	{
	public:
		sdk::qangle angValue; // 0x18
	};

	static_assert(sizeof(CMsgQAngle) == 0x28);

	class CMsgVector : public CBasePB
	{
	public:
		sdk::vector4d vecValue; // 0x18
	};

	static_assert(sizeof(CMsgVector) == 0x28);

	class CCSGOInterpolationInfoPB : public CBasePB
	{
	public:
		float flFraction; // 0x18
		int nSrcTick; // 0x1C
		int nDstTick; // 0x20
	};

	static_assert(sizeof(CCSGOInterpolationInfoPB) == 0x28);

	class CCSGOInputHistoryEntryPB : public CBasePB
	{
	public:
		CMsgQAngle* pViewAngles; // 0x18
		CMsgVector* pShootPosition; // 0x20
		CMsgVector* pTargetHeadPositionCheck; // 0x28
		CMsgVector* pTargetAbsPositionCheck; // 0x30
		CMsgQAngle* pTargetAngPositionCheck; // 0x38
		CCSGOInterpolationInfoPB* cl_interp; // 0x40
		CCSGOInterpolationInfoPB* sv_interp0; // 0x48
		CCSGOInterpolationInfoPB* sv_interp1; // 0x50
		CCSGOInterpolationInfoPB* player_interp; // 0x58
		int nRenderTickCount; // 0x60
		float flRenderTickFraction; // 0x64
		int nPlayerTickCount; // 0x68
		float flPlayerTickFraction; // 0x6C
		int nFrameNumber; // 0x70
		int nTargetEntIndex; // 0x74
	};

	static_assert(sizeof(CCSGOInputHistoryEntryPB) == 0x78);

	struct CInButtonStatePB : CBasePB
	{
		std::uint64_t nValue;
		std::uint64_t nValueChanged;
		std::uint64_t nValueScroll;
	};

	static_assert(sizeof(CInButtonStatePB) == 0x30);

	struct CSubtickMoveStep : CBasePB
	{
	public:
		std::uint64_t nButton;
		bool bPressed;
		float flWhen;
		float flAnalogForwardDelta;
		float flAnalogLeftDelta;
	};

	static_assert(sizeof(CSubtickMoveStep) == 0x30);

	class CBaseUserCmdPB : public CBasePB
	{
	public:
		RepeatedPtrField_t<CSubtickMoveStep> subtickMovesField;
		std::string* strMoveCrc;
		CInButtonStatePB* pInButtonState;
		CMsgQAngle* pViewAngles;
		std::int32_t nLegacyCommandNumber;
		std::int32_t nClientTick;
		float flForwardMove;
		float flSideMove;
		float flUpMove;
		std::int32_t nImpulse;
		std::int32_t nWeaponSelect;
		std::int32_t nRandomSeed;
		std::int32_t nMousedX;
		std::int32_t nMousedY;
		std::uint32_t nConsumedServerAngleChanges;
		std::int32_t nCmdFlags;
		std::uint32_t nPawnEntityHandle;

		int CalculateCmdCRCSize()
		{
			return utils::CallVFunc<int, 7U>(this);
		}


		CSubtickMoveStep* AddSubTickMove()
		{
			using fndef = CSubtickMoveStep * (__fastcall*)(void*);
			static fndef fnCreateNewSubtickMoveStep = reinterpret_cast<fndef>(
				utils::get_absolute_address(
					utils::find_pattern(CLIENT_DLL, "E8 ? ? ? ? 48 8B D0 48 8D 4F 18 E8 ? ? ? ? 48 8B D0"), 0x1
				)
				);;


			if (subtickMovesField.pRep && subtickMovesField.nCurrentSize < subtickMovesField.pRep->nAllocatedSize)
				return subtickMovesField.pRep->tElements[subtickMovesField.nCurrentSize++];

			CSubtickMoveStep* subtick = fnCreateNewSubtickMoveStep(nullptr);
			subtickMovesField.add(subtick);

			return subtick;
		}

	};

	static_assert(sizeof(CBaseUserCmdPB) == 0x80);

	class CCSGOUserCmdPB
	{
	public:
		std::uint32_t nHasBits;
		std::uint64_t nCachedSize;
		RepeatedPtrField_t<CCSGOInputHistoryEntryPB> inputHistoryField;
		CBaseUserCmdPB* pBaseCmd;
		bool bLeftHandDesired;
		std::int32_t nAttack3StartHistoryIndex;
		std::int32_t nAttack1StartHistoryIndex;
		std::int32_t nAttack2StartHistoryIndex;

		// @note: this function is used to check if the bits are set and set them if they are not
		void CheckAndSetBits(std::uint32_t nBits)
		{
			if (!(nHasBits & nBits))
				nHasBits |= nBits;
		}
	};
	static_assert(sizeof(CCSGOUserCmdPB) == 0x40);

	struct CInButtonState
	{
	public:
		MEM_PAD(0x8) // 0x0 VTABLE
		std::uint64_t nValue; // 0x8
		std::uint64_t nValueChanged; // 0x10
		std::uint64_t nValueScroll; // 0x18
	};
	static_assert(sizeof(CInButtonState) == 0x20);

	class cuser_cmd
	{
		MEM_PAD(0x8); // 0x0 VTABLE
		MEM_PAD(0x10); // TODO: find out what this is, added 14.08.2024
		CCSGOUserCmdPB csgoUserCmd; // 0x18
		CInButtonState nButtons; // 0x58
		MEM_PAD(0x20); // 0x78


		CCSGOInputHistoryEntryPB* GetInputHistoryEntry(int nIndex)
		{
			if (nIndex >= csgoUserCmd.inputHistoryField.pRep->nAllocatedSize || nIndex >= csgoUserCmd.inputHistoryField.nCurrentSize)
				return nullptr;

			return csgoUserCmd.inputHistoryField.pRep->tElements[nIndex];
		}

		void SetSubTickAngle(const sdk::qangle& angView)
		{
			for (int i = 0; i < this->csgoUserCmd.inputHistoryField.pRep->nAllocatedSize; i++)
			{
				CCSGOInputHistoryEntryPB* pInputEntry = this->GetInputHistoryEntry(i);
				if (!pInputEntry || !pInputEntry->pViewAngles)
					continue;

				pInputEntry->pViewAngles->angValue = angView;
				pInputEntry->SetBits(EInputHistoryBits::INPUT_HISTORY_BITS_VIEWANGLES);
			}
		}
	};

	class ccs_input_message
	{
	public:
		int32_t m_frame_tick_count; // 0x0000
		float m_frame_tick_fraction; // 0x0004
		int32_t m_player_tick_count; // 0x0008
		float m_player_tick_fraction; // 0x000C
		qangle m_view_angles; // 0x0010
		vector m_shoot_position; // 0x001C
		int32_t m_target_index; // 0x0028
		vector m_target_head_position; // 0x002C What's this???
		vector m_target_abs_origin; // 0x0038
		vector m_target_angle; // 0x0044
		int32_t m_sv_show_hit_registration; // 0x0050
		int32_t m_entry_index_max; // 0x0054
		int32_t m_index_idk; // 0x0058
	}; // Size: 0x005C

#define MULTIPLAYER_BACKUP 150

	class subtick_button
	{
	public:
		int64_t button; //0x0000
		float forward; //0x0008
		float side; //0x000C
	};

	class subtick_button_pb
	{
	public:
		char pad[0x158];
		vector angle;
	};

	class subtick_buttons
	{
	public:
		int64_t size;
		subtick_button_pb* pb;
	};

	class CTinyMoveStepData
	{
	public:
		float flWhen; //0x0000
		char pad_0000[0x4]; //0x0004
		std::uint64_t nButton; //0x0008
		bool bPressed; //0x0010
		char pad_0011[0x7]; //0x0011
	}; //Size: 0x0018

	class CMoveStepButtons
	{
	public:
		std::uint64_t nKeyboardPressed; //0x0000
		std::uint64_t nMouseWheelheelPressed; //0x0008
		std::uint64_t nUnPressed; //0x0010
		std::uint64_t nKeyboardCopy; //0x0018
	}; //Size: 0x0020

	// @credits: www.unknowncheats.me/forum/members/2943409.html
	class CExtendedMoveData : public CMoveStepButtons
	{
	public:
		float flForwardMove; //0x0020
		float flSideMove; //0x0024
		float flUpMove; //0x0028
		std::int32_t nMouseDeltaX; //0x002C
		std::int32_t nMouseDeltaY; //0x0030
		std::int32_t nAdditionalStepMovesCount; //0x0034
		CTinyMoveStepData tinyMoveStepData[12]; //0x0038
		vector vecViewAngle; //0x0158
		std::int32_t nTargetHandle; //0x0164
	}; //Size:0x0168

	class CCSInputMessage {
	public:

	};

	class CCSInputMoves {
	public:

	};

	class CSubtickMoves {
	public:

	};

	class ccsgo_input
	{
	public:
		MEM_PAD(0x250);
		cuser_cmd commands[MULTIPLAYER_BACKUP];// 0x250 (0x4FB0)
		MEM_PAD(0x99);//0x1
		bool in_third_person;
		MEM_PAD(0x6);
		qangle angThirdPersonAngles;
		MEM_PAD(0xE);//0x10
		int32_t nSequenceNumber; //0x5224
		double dbSomeTimer;
		CExtendedMoveData currentMoveData; // moveData
		std::int32_t nWeaponSwitchTick;
		MEM_PAD(0x1C4);
		CExtendedMoveData* pExtendedMoveData;
		subtick_buttons subtick_cache; //0x542C
		MEM_PAD(0x48);
		int32_t nAttackStartHistoryIndex1;
		int32_t nAttackStartHistoryIndex2;
		int32_t nAttackStartHistoryIndex3;
		//CUtlVector<CCSInputMessage> m_InputHistory;


		void set_input_angle(qangle& angView)
		{
			// @ida: this got called before GetMatricesForView
			using fnSetViewAngle = std::int64_t(__fastcall*)(void*, std::int32_t, qangle&);
			static auto oSetViewAngle = reinterpret_cast<fnSetViewAngle>(utils::find_pattern(CLIENT_DLL, ("85 D2 75 3F 48")));


			oSetViewAngle(this, 0, std::ref(angView));
		}

		sdk::qangle get_view_angles()
		{
			using fnGetViewAngles = std::int64_t(__fastcall*)(ccsgo_input*, std::int32_t);

			static auto oGetViewAngles = reinterpret_cast<fnGetViewAngles>(
				utils::find_pattern(CLIENT_DLL, "4C 8B C1 85 D2 74 ? 48 8D 05")
				);

			if (!oGetViewAngles)
				return sdk::qangle(); // Return a default QAngle if the function is not resolved.

			auto result = oGetViewAngles(this, 0);
			return *reinterpret_cast<sdk::qangle*>(&result);
		}

		MEMBER_CUSTOM(input_msg_frame_slots, ccsgo_input, ccs_input_message*);
		//MEMBER_CUSTOM(frame_command, ccsgo_input, cuser_cmd);
		//MEMBER_CUSTOM(current_command, ccsgo_input, uint32_t);
		//MFUNC(set_view_angles(sdk::qangle &ang), bool (*)(void *, int, sdk::qangle &), client, input::set_view_angles)(0, ang);
		//MFUNC(get_view_angles(), sdk::qangle& (*)(void*, int), client, input::get_view_angles)(0);//need update offset
	};
}