#pragma once

#include <list>
#include <hooks/hooks.h>
#include <utils/hook.h>

struct hook_manager_t
{
	hook_manager_t() = default;

	void init();
};

extern hook_manager_t hook_manager;
