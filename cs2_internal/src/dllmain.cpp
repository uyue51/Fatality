#include "game/game.h"

BOOL APIENTRY DllMain(uintptr_t inst, uint32_t reason, uint32_t reserved)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		std::thread(
			[inst, reserved]
			{
				sdk::game = std::make_unique<sdk::game_t>(inst, reserved);
				sdk::game->init();
			}).detach();
	}

	return TRUE;
}
