#include <game/game.h>
#include <game/hook_manager.h>
#include <utils/mem.h>

hook_manager_t hook_manager;

void hook_manager_t::init()
{
	if (MH_Initialize() != MH_OK)
		throw;

	hooks::steam::hkPresent.Create(utils::GetVFunc(sdk::swap_chain->pDXGISwapChain, 8U), reinterpret_cast<void*>(&hooks::steam::present));
	hooks::client::hkGetMatrixView.Create(utils::find_pattern(CLIENT_DLL, "40 53 48 81 EC ? ? ? ? 49 8B C1"), reinterpret_cast<void*>(&hooks::client::get_matrix_view));
	hooks::input_system::hkMouseInputEnabled.Create(utils::GetVFunc(sdk::input, 19U), reinterpret_cast<void*>(&hooks::input_system::mouse_input_enabled));
	hooks::input_system::hkIsRelativeMouseMode.Create(utils::GetVFunc(sdk::input_system, 79U), reinterpret_cast<void*>(&hooks::input_system::is_relative_mouse_mode));
	hooks::client::hkGetFov.Create(utils::GetVFunc(sdk::client, 13U), reinterpret_cast<void*>(&hooks::client::get_fov));
	hooks::client::hkCreateMove.Create(utils::GetVFunc(sdk::input, 21U), reinterpret_cast<void*>(&hooks::client::create_move));
	hooks::client::hkFrameStageNotify.Create(utils::GetVFunc(sdk::client, 36u), reinterpret_cast<void*>(&hooks::client::frame_stage_notify));
	hooks::client::hkOnRenderStart.Create(utils::find_pattern(CLIENT_DLL, "48 89 5C 24 ? 48 89 6C 24 ? 56 57 41 56 48 81 EC ? ? ? ? 4C 8B F1 48 8D 94 24"), reinterpret_cast<void*>(&hooks::client::on_render_start));
	hooks::client::hkOverrideView.Create(utils::GetVFunc(sdk::input, 9U), reinterpret_cast<void*>(&hooks::client::override_view));
}
