#pragma once
#include <sdk/client.h>

struct movement_t
{
	void bhop(sdk::cuser_cmd* cmd);
};

extern movement_t movement;
