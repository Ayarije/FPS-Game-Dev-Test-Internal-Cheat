#pragma once

#include "../SDK/SDK.h"
#include "../Utils/Memory.h"

typedef void(__fastcall* GetPlayerViewPoint_t)(AController*, FVector*, FRotator*);
typedef void(__fastcall* SetShooting_t)(ABP_PlayerCharacter_C*, bool);

namespace weapons {

    void StableWeapon(ABP_PlayerCharacter_C* self);
    void InfiniteAmmo(ABP_PlayerCharacter_C* self);
    void InstaFireRate(ABP_PlayerCharacter_C* self);

    extern GetPlayerViewPoint_t oGetPlayerViewPoint;
    void __fastcall hkGetPlayerViewPoint(AController* context, FVector* outLoc, FRotator* outRot);

    extern SetShooting_t oSetShooting;
    void __fastcall hkSetShooting(ABP_PlayerCharacter_C* context, bool shooting);
}