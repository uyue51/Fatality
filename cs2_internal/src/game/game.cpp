#include <filesystem>
#include <game/cfg.h>
#include <game/draw_manager.h>
#include <game/game.h>
#include <game/hook_manager.h>
#include <ren/renderer.h>
#include <resources/smallest_pixel.h>
#include <sdk/cvar.h>
#include <sdk/engine.h>
#include <sdk/inputsystem.h>
#include <sdk/interface.h>
#include <utils/mem.h>

uint32_t utils::runtime_basis = 2166136261u;

//std::unique_ptr<game_t> game;

namespace fs = std::filesystem;

namespace sdk
{
	game_t::game_t(uintptr_t _base, uint32_t tok) :
		base(_base)
	{
		game_dir = ENC2(util::get_game_dir());

		if (!fs::exists(DEC_INLINE(game_dir) + XOR("fatality")))
			fs::create_directories(DEC_INLINE(game_dir) + XOR("fatality"));
		if (!fs::exists(DEC_INLINE(game_dir) + XOR("fatality/scripts")))
			fs::create_directories(DEC_INLINE(game_dir) + XOR("fatality/scripts"));
		if (!fs::exists(DEC_INLINE(game_dir) + XOR("fatality/scripts/remote")))
			fs::create_directories(DEC_INLINE(game_dir) + XOR("fatality/scripts/remote"));
		if (!fs::exists(DEC_INLINE(game_dir) + XOR("fatality/scripts/lib")))
			fs::create_directories(DEC_INLINE(game_dir) + XOR("fatality/scripts/lib"));
	}

	void game_t::load_fonts()
	{
		std::vector<unsigned char> v;

		DWORD n_fonts;
		mem_font_handles.push_back(AddFontMemResourceEx(smallest_pixel.data(), smallest_pixel.size(), nullptr, &n_fonts));
		smallest_pixel.clear();
		auto vec = std::vector<unsigned char>(smallest_pixel);
		smallest_pixel.swap(vec);
	}

	void game_t::remove_fonts() const
	{
		for (auto& handle : mem_font_handles)
			RemoveFontMemResourceEx(handle);
	}

	void game_t::init()
	{
		using namespace utils;

		const auto pTier0Handle = get_module_base_handle(TIER0_DLL);
		if (pTier0Handle == nullptr)
			return;

		const auto pEngineRegisterList = sdk::get_register_list(ENGINE2_DLL);
		if (pEngineRegisterList == nullptr)
			return;

		const auto pClientRegister = sdk::get_register_list(CLIENT_DLL);
		if (pClientRegister == nullptr)
			return;


		const auto pTier0RegisterList = sdk::get_register_list(TIER0_DLL);
		if (pTier0RegisterList == nullptr)
			return;

		const auto pInputSystemRegisterList = sdk::get_register_list(INPUTSYSTEM_DLL);
		if (pInputSystemRegisterList == nullptr)
			return;


		static auto enwndcall = [](HWND handle, LPARAM lParam) -> BOOL CALLBACK
			{
				const auto MainWindow = [handle]()
					{
						return GetWindow(handle, GW_OWNER) == nullptr &&
							IsWindowVisible(handle) && handle != GetConsoleWindow();
					};

				DWORD nPID = 0;
				GetWindowThreadProcessId(handle, &nPID);

				if (GetCurrentProcessId() != nPID || !MainWindow())
					return TRUE;

				*reinterpret_cast<HWND*>(lParam) = handle;
				return FALSE;
			};

		// load interfaces
		sdk::client = Capture<ISource2Client>(pClientRegister, SOURCE2_CLIENT);
		sdk::resource_service = Capture<sdk::cgame_resource_service>(pEngineRegisterList, GAME_RESOURCE_SERVICE_CLIENT);
		sdk::engine = Capture<sdk::cengine_client>(pEngineRegisterList, SOURCE2_ENGINE_TO_CLIENT);
		sdk::cvar = Capture<sdk::ccvar>(pTier0RegisterList, ENGINE_CVAR);
		sdk::global_vars = *reinterpret_cast<sdk::global_vars_t**>(solve_address(find_pattern(CLIENT_DLL, XOR("48 89 15 ?? ?? ?? ?? 48 89 42")), 0x3, 0x7));
		sdk::input = *reinterpret_cast<sdk::ccsgo_input**>(solve_address(find_pattern(CLIENT_DLL, XOR("48 8B 0D ? ? ? ? 4C 8B C6 8B 10 E8")), 0x3, 0x7));
		sdk::swap_chain = **reinterpret_cast<ISwapChainDx11***>(solve_address(find_pattern(RENDERSYSTEM_DLL, XOR("66 0F 7F 0D ? ? ? ? 48 8B F7 66 0F 7F 05")), 0x4, 0x8));
		sdk::input_system = Capture<sdk::cinput_system>(pInputSystemRegisterList, INPUT_SYSTEM_VERSION);
		sdk::mem_alloc = *reinterpret_cast<sdk::cmem_alloc**>(get_export_address(pTier0Handle, XOR("g_pMemAlloc")));

		while (sdk::hWindow == nullptr)
		{
			EnumWindows(enwndcall, reinterpret_cast<LPARAM>(&sdk::hWindow));
			::Sleep(200U);
		}

		sdk::pOldWndProc = reinterpret_cast<WNDPROC>(SetWindowLongPtr(sdk::hWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(hooks::input_system::wnd_proc)));
		if (sdk::pOldWndProc == nullptr)
			return;

		load_fonts();

		// load other
		cfg.init();

#ifdef _DEBUG
		sdk::cvar->unlock();
#endif

		hook_manager.init();
	}

	void game_t::unload() const
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(200));

		std::this_thread::sleep_for(std::chrono::milliseconds(200));

		draw_mgr.destroy_objects();
		sdk::input_system->set_input(true);
		evo::ren::draw.destroy_objects();
		evo::ren::draw = {};

		FreeLibrary(reinterpret_cast<HMODULE>(base));
		FreeLibraryAndExitThread(reinterpret_cast<HMODULE>(base), 0);
	}
}
