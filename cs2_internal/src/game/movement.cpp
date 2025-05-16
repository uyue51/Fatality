#include <game/cfg.h>
#include <game/movement.h>
#include <game/visuals.h>
#include <sdk/cvar.h>
#include <sdk/input.h>
#include <sdk/sdk.h>
#include <utils/math.h>

movement_t movement;

void movement_t::bhop(sdk::cuser_cmd* cmd) {
	if (!cfg.misc.bhop.get())
		return;

	auto base_cmd = cmd->csgoUserCmd.pBaseCmd;
	if (!base_cmd)
		return;

	const auto move_type = sdk::LocalPawn->get_move_type();
	const auto in_water = sdk::LocalPawn->get_fl_water_level() >= 2.0f;

	// Check if the player can jump (not in water or special move types)
	const bool can_jump = !in_water && move_type != sdk::MoveType_t::MOVETYPE_LADDER &&
		move_type != sdk::MoveType_t::MOVETYPE_NOCLIP && move_type != sdk::MoveType_t::MOVETYPE_OBSERVER;

	// If we can't jump or the jump key isn't pressed, skip processing
	if (!can_jump || !(cmd->nButtons.nValue & sdk::IN_JUMP || cmd->nButtons.nValueScroll & sdk::IN_JUMP)) {
		return;
	}

	cmd->nButtons.nValue &= ~sdk::IN_JUMP;
	cmd->nButtons.nValueScroll &= ~sdk::IN_JUMP;
	cmd->nButtons.nValueChanged &= ~sdk::IN_JUMP;

	// Only process if the player is on the ground
	if (!(sdk::LocalPawn->get_f_flags() & sdk::fl_onground)) {
		return;
	}

	// Enable jump for the current frame
	cmd->nButtons.nValue |= sdk::IN_JUMP;
	cmd->nButtons.nValueScroll |= sdk::IN_JUMP;

	// Define how many subticks to split the jump into
	const int max_ticks = 12;//experoment

	// Distribute the subticks across the frame
	for (int i = 0; i < max_ticks; ++i)
	{
		auto subtick = base_cmd->AddSubTickMove();

		// Set the timing for the subtick move (even distribution)
		subtick->flWhen = static_cast<float>(i) / static_cast<float>(max_ticks);

		if (i == 0) // First subtick: Press the jump button
		{
			subtick->nButton = sdk::IN_JUMP;
			subtick->bPressed = true;
		}
		else if (i == max_ticks - 1) // Last subtick: Release the jump button
		{
			subtick->nButton = sdk::IN_JUMP;
			subtick->bPressed = false;
		}
	}
}