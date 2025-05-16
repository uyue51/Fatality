#include <game/game.h>
#include <sdk/client.h>

namespace sdk
{
    template <typename T>
    T* chandle<T>::get()
    {
        return !valid() ? nullptr : sdk::resource_service->game_entity_system->get_entity_by_index<T>(get_entry_index());
    }

    template <typename T>
    template <typename C>
    C* chandle<T>::get_as()
    {
        return !valid() ? nullptr : sdk::resource_service->game_entity_system->get_entity_by_index<C>(get_entry_index());
    }

    // Explicit template instantiations
    template class chandle<sdk::C_BasePlayerPawn>;
    template class chandle<sdk::C_CSPlayerPawn>;
    template class chandle<sdk::C_BasePlayerWeapon>;
    template class chandle<sdk::C_BaseEntity>;
    template class chandle<sdk::CEntityInstance>; // Add support for CEntityInstance

    // Explicit `get_as()` specializations
    template sdk::C_CSPlayerPawn* chandle<sdk::C_BasePlayerPawn>::get_as();
    template sdk::C_CSPlayerPawn* chandle<sdk::C_BasePlayerPawn>::get_as();

    // Add explicit specialization for get_as for C_CSPlayerPawn
    template sdk::C_CSPlayerPawn* chandle<sdk::C_CSPlayerPawn>::get_as();

    template sdk::CEntityInstance* chandle<sdk::C_BaseEntity>::get_as();
    template sdk::CEntityInstance* chandle<sdk::CEntityInstance>::get_as();

    //pasted
    bool IsValidWpnSrv(CPlayer_WeaponServices* ws) {
        __try {
            return ws->get_h_active_weapon().valid();
        }
        __except (EXCEPTION_EXECUTE_HANDLER) {
            return false;
        }
    }

    C_CSWeaponBase* C_CSPlayerPawn::GetActiveWeapon()
    {
        auto service = get_p_weapon_services();

        if (!IsValidWpnSrv(service))
            return nullptr;

        auto handle = service->get_h_active_weapon();

        if (!handle.valid())
            return nullptr;

        // Use CHandle<T>::get_as<T>() for type-safe access
        auto weapon = handle.get_as<C_CSWeaponBase>();

        return weapon; // Return nullptr if `get()` fails, no extra checks needed
    }
}
