#pragma once

#include <D3D11.h>
#include <sdk/client.h>
#include "../minhook/minhook.h"
#include "detour_hook.h"

class CRenderGameSystem;

class IViewRender
{
public:
	sdk::vector vecOrigin; // 0x0000
	sdk::qangle vecAngles; // 0x000C
	float flFov; // 0x0018
	char pad_0x001C[0x14]; // 0x001C
	//sdk::ViewMatrix_t matUNK1; // 0x0030
	char pad_0x0070[0x30]; // 0x0070
	//sdk::ViewMatrix_t matUNK2; // 0x00A0
	char pad_0x00E0[0xC8]; // 0x00E0
	//sdk::ViewMatrix_t matUNK3; // 0x01A8
	char pad_0x01E8[0x28]; // 0x01E8
};

class CViewSetup;
class CMeshData;

namespace hooks
{
	namespace input_system
	{
		LRESULT wnd_proc(HWND wnd, UINT msg, WPARAM wparam, LPARAM lparam);
		bool mouse_input_enabled(void* rcx);
		void* is_relative_mouse_mode(void* thisptr, bool active);
		inline CBaseHookObject<decltype(&mouse_input_enabled)> hkMouseInputEnabled = {};
		inline CBaseHookObject<decltype(&is_relative_mouse_mode)> hkIsRelativeMouseMode = {};
	}

	namespace steam
	{
		HRESULT present(IDXGISwapChain *chain, UINT sync, UINT flags);

		inline CBaseHookObject<decltype(&present)> hkPresent = {};
	}

	namespace client
	{
		bool __fastcall create_move(sdk::ccsgo_input* input, int slot, sdk::cuser_cmd* pUserCmd);
		void prediction_update(void* pred, int a, int b);
		void frame_stage_notify(void* rcx, sdk::client_frame_stage stage);
		void override_view(void* rcx, sdk::cview_setup* view_setup);
		void on_render_start(sdk::cview_render* view_render);
		float get_fov(void* rcx);
		sdk::ViewMatrix_t* get_matrix_view(CRenderGameSystem* pRenderGameSystem, IViewRender* pViewRender, sdk::ViewMatrix_t* pOutWorldToView, sdk::ViewMatrix_t* pOutViewToProjection, sdk::ViewMatrix_t* pOutWorldToProjection, sdk::ViewMatrix_t* pOutWorldToPixels);

		inline CBaseHookObject<decltype(&get_matrix_view)> hkGetMatrixView = {};
		inline CBaseHookObject<decltype(&frame_stage_notify)> hkFrameStageNotify = {};
		inline CBaseHookObject<decltype(&override_view)> hkOverrideView = {};
		inline CBaseHookObject<decltype(&get_fov)> hkGetFov = {};
		inline CBaseHookObject<decltype(&on_render_start)> hkOnRenderStart = {};
		inline CBaseHookObject<decltype(&create_move)> hkCreateMove = {};
	}
} // namespace hooks
