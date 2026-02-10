#pragma once

#include "../Core/Renderer.h"
#include "../Core/Globals.h"

#include "../Utils/Memory.h"

#include "../SDK/SDK.h"

namespace self {
    struct ReceiveAnyDamage_Params {
        float Damage;                       // Offset: 0x00
        char Pad_Align[4];                  // Offset: 0x04 (Remplissage vide)
        class UObject* DamageType;          // Offset: 0x08
        class AController* InstigatedBy;    // Offset: 0x10
        class AActor* DamageCauser;         // Offset: 0x18
    };

    void hkReceiveAnyDamage(UObject* pObject, UFunction* pFunction, void* pParams);

    void speedModifier(ABP_PlayerCharacter_C* self);
}