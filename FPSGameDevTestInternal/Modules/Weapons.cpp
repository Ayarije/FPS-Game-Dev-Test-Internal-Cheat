#include "Weapons.h"

namespace weapons {

    void StableWeapon(ABP_PlayerCharacter_C* self) {
        if (addr::IsValid(self->PrimaryWeapon)) {
            auto weapon = self->PrimaryWeapon;
            weapon->AimingSpread = 0.0f;
            weapon->WeaponSpread = 0.0f;
            weapon->WeaponVerticalRecoilMax = 0.0f;
            weapon->WeaponVerticalRecoilMin = 0.0f;
            weapon->WeaponHorizontalRecoilMax = 0.0f;
            weapon->WeaponHorizontalRecoilMin = 0.0f;
        }
        if (addr::IsValid(self->SecondaryWeapon)) {
            auto weapon = self->SecondaryWeapon;
            weapon->AimingSpread = 0.0f;
            weapon->WeaponSpread = 0.0f;
            weapon->WeaponVerticalRecoilMax = 0.0f;
            weapon->WeaponVerticalRecoilMin = 0.0f;
            weapon->WeaponHorizontalRecoilMax = 0.0f;
            weapon->WeaponHorizontalRecoilMin = 0.0f;
        }
    }

    void InfiniteAmmo(ABP_PlayerCharacter_C* self) {
        if (addr::IsValid(self->PrimaryWeapon)) self->PrimaryWeapon->ActualAmmo = 999;
        if (addr::IsValid(self->SecondaryWeapon)) self->SecondaryWeapon->ActualAmmo = 999;
    }

    void InstaFireRate(ABP_PlayerCharacter_C* self) {
        if (addr::IsValid(self->PrimaryWeapon)) {
            auto weapon = self->PrimaryWeapon;
            weapon->FireRate = 2.0f;
        }
        if (addr::IsValid(self->SecondaryWeapon)) {
            auto weapon = self->SecondaryWeapon;
            weapon->FireRate = 5.0f;
        }
    }

    GetPlayerViewPoint_t oGetPlayerViewPoint = nullptr;
    void __fastcall hkGetPlayerViewPoint(AController* context, FVector* outLoc, FRotator* outRot) {
        std::cout << "Hooked: GetPlayerViewPoint" << std::endl;
        oGetPlayerViewPoint(context, outLoc, outRot);
    }
}