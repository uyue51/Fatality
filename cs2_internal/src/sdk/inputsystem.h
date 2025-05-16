#pragma once

#include <game/game.h>

namespace sdk
{
	struct cinput_system
	{
		MEMBER_CUSTOM(relative_mouse_mode, cinput_system, bool);
		MEMBER_CUSTOM(sdl_window, cinput_system, void*);

		void set_input(const bool enabled)
		{
			if (!get_relative_mouse_mode())
				return;



		}
	};
}
