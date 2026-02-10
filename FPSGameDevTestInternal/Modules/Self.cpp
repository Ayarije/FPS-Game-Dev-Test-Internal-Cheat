#include "Self.h"

namespace self {
    void hkReceiveAnyDamage(UObject* pObject, UFunction* pFunction, void* pParams) {
        if (!Renderer::bGodMode) return;
        if (!(Globals::GWorld && Globals::GWorld->OwningGameInstance)) return;

        auto LocalPlayer = Globals::GWorld->OwningGameInstance->LocalPlayers[0];
        if (!(LocalPlayer && LocalPlayer->PlayerController && LocalPlayer->PlayerController->Pawn)) return;

        if (pObject != LocalPlayer->PlayerController->Pawn) return;
        if (!pParams) return;

        auto params = (ReceiveAnyDamage_Params*)pParams;
        params->Damage = 0.0f;
    }

    void speedModifier(ABP_PlayerCharacter_C* self) {
        self->DefaultMovementSpeed = Renderer::speedModifier;
    }
}