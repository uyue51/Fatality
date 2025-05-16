#pragma once

#include <macros.h>
#include <utils/value_obfuscation.h>
#include <utils/util.h>
#include <utils/mem.h>

#include "sdk/globalvars.h"
#include "sdk/math/vector.h"
#include "sdk/input.h"

struct IDXGISwapChain;
class ISource2Client;

class ISwapChainDx11
{
	MEM_PAD(0x170);
	IDXGISwapChain* pDXGISwapChain;
};


namespace sdk
{
	struct global_vars_t;
	struct cgame_resource_service;
	struct cgame_entity_system;
	struct cengine_client;
	class CCSPlayerController;
	class ccsgo_input;
	struct cinput_system;
	struct cgame_ui_funcs;
	struct ccvar;
	struct clocalize;
	struct cui_engine;
	class cmem_alloc;
	struct cprediction;
	struct cview_render;
	class engine_trace_t;
	class C_CSPlayerPawn;
	class cuser_cmd;
	struct Ray_t;
	struct SurfaceData_t;
	struct TraceHitboxData_t;
	struct GameTrace_t;
	struct TraceFilter_t;
	class game_event_manager_t;
	class network_client_service_t;

	inline HWND hWindow = nullptr;
	inline WNDPROC pOldWndProc = nullptr;

	inline sdk::global_vars_t* global_vars = nullptr;
	inline sdk::cgame_resource_service* resource_service = nullptr;
	inline sdk::cengine_client* engine = nullptr;
	inline sdk::ccsgo_input* input = nullptr;
	inline sdk::cui_engine* ui_engine = nullptr;
	inline sdk::cinput_system* input_system = nullptr;
	inline sdk::cgame_ui_funcs* game_ui_funcs = nullptr;
	inline sdk::ccvar* cvar = nullptr;
	inline sdk::clocalize* loc = nullptr;
	inline sdk::cmem_alloc* mem_alloc = nullptr;
	inline ISource2Client* client = nullptr;
	inline ISwapChainDx11* swap_chain = nullptr;
	inline sdk::CCSPlayerController* LocalPlayerController = nullptr;
	inline sdk::C_CSPlayerPawn* LocalPawn = nullptr;

	inline sdk::ViewMatrix_t ViewMatrix = sdk::ViewMatrix_t();
	inline sdk::vector CameraPosition = sdk::vector();

	namespace schema::client
	{
		class ccsweapon_base_vdata;
		class econ_item_view;
	}

	class game_t {
	public:
		game_t(uintptr_t base, uint32_t tok);

		void init();
		void unload() const;

		uintptr_t base;
		std::string version{ "1.0.0" };
		std::vector<HANDLE> mem_font_handles = {};
		std::string game_dir;

	private:
		void load_fonts();
		void remove_fonts() const;
	};

	inline std::unique_ptr<game_t> game;

}
