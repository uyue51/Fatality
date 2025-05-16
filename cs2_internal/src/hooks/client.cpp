#include <macros.h>
#include <game/cfg.h>
#include <game/draw_manager.h>
#include <game/hook_manager.h>
#include <game/movement.h>
#include <game/visuals.h>
#include <gui/controls/selectable_script.h>
#include <menu/menu.h>
#include <menu/init/init_anim.h>
#include <sdk/client.h>
#include <sdk/cvar.h>
#include <sdk/engine.h>
#include <sdk/input.h>
#include <sdk/sdk.h>
#include <utils/math.h>

namespace hooks::client
{
	void prediction_update(void* pred, int a, int b)
	{
		//hook_manager.prediction_update->call(pred, a, b);
	}

	sdk::ViewMatrix_t* get_matrix_view(CRenderGameSystem* pRenderGameSystem, IViewRender* pViewRender, sdk::ViewMatrix_t* pOutWorldToView, sdk::ViewMatrix_t* pOutViewToProjection, sdk::ViewMatrix_t* pOutWorldToProjection, sdk::ViewMatrix_t* pOutWorldToPixels)
	{
		const auto oMatrix = hkGetMatrixView.GetOriginal();

		// get view matrix
		sdk::ViewMatrix = *pOutWorldToProjection;
		// get camera position
		// @note: ida @GetMatrixForView(global_pointer, pRenderGameSystem + 16, ...)
		sdk::CameraPosition = pViewRender->vecOrigin;

		return oMatrix(pRenderGameSystem, pViewRender, pOutWorldToView, pOutViewToProjection, pOutWorldToProjection, pOutWorldToPixels);
	}

	void frame_stage_notify(void* rcx, sdk::client_frame_stage stage)
	{
		const auto oFrameStageNotify = hkFrameStageNotify.GetOriginal();

		if (stage == sdk::client_frame_stage::FRAME_NET_UPDATE_POSTDATAUPDATE_END)
		{
			visuals.store();
		}

		oFrameStageNotify(rcx, stage);
	}

	void override_view(void *rcx, sdk::cview_setup *view_setup)
	{

		const auto oOverrideView = hkOverrideView.GetOriginal();

		oOverrideView(rcx, view_setup);
	}

	float get_fov(void *rcx)
	{
		const auto oGetFov = hkGetFov.GetOriginal();
		if (cfg.misc.fov_enabled.get())
			return cfg.misc.fov.get();

		return oGetFov(rcx);
	}

	//correction angles
	static sdk::qangle correction_view = {};

	bool __fastcall create_move(sdk::ccsgo_input* input, int slot, sdk::cuser_cmd* pUserCmd)
	{
		const auto oCreateMove = hkCreateMove.GetOriginal();

		if (!sdk::engine->is_connected() || !sdk::engine->in_game())
			return oCreateMove(input, slot, pUserCmd);

		if (!pUserCmd->csgoUserCmd.pBaseCmd)
			return oCreateMove(input, slot, pUserCmd);

		auto base_cmd = pUserCmd->csgoUserCmd.pBaseCmd;
		if (!base_cmd->pViewAngles)
			return oCreateMove(input, slot, pUserCmd);

		sdk::LocalPlayerController = sdk::resource_service->game_entity_system->get_local_player_controller();
		if (sdk::LocalPlayerController == nullptr)
			return oCreateMove(input, slot, pUserCmd);

		sdk::LocalPawn = sdk::LocalPlayerController->get_pawn();
		if (sdk::LocalPawn == nullptr)
			return oCreateMove(input, slot, pUserCmd);

		movement.bhop(pUserCmd);

		//anti untrusted shit
		if (base_cmd && pUserCmd->csgoUserCmd.inputHistoryField.pRep)
		{
			for (int nSubTick = 0; nSubTick < pUserCmd->csgoUserCmd.inputHistoryField.pRep->nAllocatedSize; nSubTick++)
			{
				sdk::CCSGOInputHistoryEntryPB* pInputEntry = pUserCmd->GetInputHistoryEntry(nSubTick);
				if (pInputEntry == nullptr)
					continue;

				// save view angles for movement correction
				correction_view = pInputEntry->pViewAngles->angValue;

				// movement correction & anti-untrusted
				if (pInputEntry->pViewAngles->angValue.IsValid())
				{
					pInputEntry->pViewAngles->angValue.Clamp();
					pInputEntry->pViewAngles->angValue.z = 0.f;
				}
				else
				{
					pInputEntry->pViewAngles->angValue = {};
				}

				// correct movement buttons while player move have different to buttons values
				// clear all of the move buttons states	
				pUserCmd->nButtons.nValue &= (~sdk::IN_FORWARD | ~sdk::IN_BACK | ~sdk::IN_LEFT | ~sdk::IN_RIGHT);

				// re-store buttons by active forward/side moves
				if (base_cmd->flForwardMove > 0.0f)
					pUserCmd->nButtons.nValue |= sdk::IN_FORWARD;
				else if (base_cmd->flForwardMove < 0.0f)
					pUserCmd->nButtons.nValue |= sdk::IN_BACK;

				if (base_cmd->flSideMove > 0.0f)
					pUserCmd->nButtons.nValue |= sdk::IN_RIGHT;
				else if (base_cmd->flSideMove < 0.0f)
					pUserCmd->nButtons.nValue |= sdk::IN_LEFT;

				if (!pInputEntry->pViewAngles->angValue.is_zero())
				{
					const float flDeltaX = math::normalize_yaw(pInputEntry->pViewAngles->angValue.x - correction_view.x);
					const float flDeltaY = math::normalize_yaw(pInputEntry->pViewAngles->angValue.y - correction_view.y);

					var(m_pitch);
					var(m_yaw);
					var(sensitivity);

					float flPitch = m_pitch->value.fl;
					float flYaw = m_yaw->value.fl;

					float flSensitivity = sensitivity->value.fl;
					if (flSensitivity == 0.0f)
						flSensitivity = 1.0f;

					pUserCmd->csgoUserCmd.pBaseCmd->nMousedX = static_cast<short>(flDeltaX / (flSensitivity * flPitch));
					pUserCmd->csgoUserCmd.pBaseCmd->nMousedY = static_cast<short>(-flDeltaY / (flSensitivity * flYaw));
				}
			}
		}

		return oCreateMove(input, slot, pUserCmd);
	}

	void on_render_start(sdk::cview_render *view_render)
	{
		var(r_aspectratio);
		r_aspectratio->value.fl = cfg.misc.aspect.get() / 100.f;

		const auto oOnRenderStart = hkOnRenderStart.GetOriginal();

		oOnRenderStart(view_render);

		if (menu::init_anim.init_done && evo::ren::draw.adapter && draw_mgr.buf->vb->object && !draw_mgr.buf->is_deferred_ready)
		{
			const bool was_dirty = draw_mgr.buf->deferred_dirty;
			if (!was_dirty && !draw_mgr.dirty_ackn)
			{
				draw_mgr.buf->reset(true);
				draw_mgr.buf->lock();

				visuals.draw_debug_info();

				visuals.run(&view_render->setup);

				const auto ctx = static_cast<ID3D11DeviceContext *>(evo::ren::draw.adapter->get_deferred_context());
				ctx->ClearState();

				const auto cmd_list = reinterpret_cast<ID3D11CommandList **>(evo::ren::draw.adapter->get_deferred_list());
				if (*cmd_list)
					(*cmd_list)->Release();

				draw_mgr.buf->unlock();

				ctx->FinishCommandList(false, cmd_list);
				draw_mgr.buf->is_deferred_ready = true;

			}
			else
			{
				if (was_dirty)
					draw_mgr.dirty_ackn = true;
				draw_mgr.buf->is_deferred_ready = true;
			}
		}
	}

}
