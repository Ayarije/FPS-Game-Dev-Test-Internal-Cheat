#include <windows.h>
#include <iostream>

#include "Core/Globals.h"
#include "Core/Renderer.h"
#include "Core/Hooks.h"

#include "Utils/Console.h"

#include "SDK/SDK/FPS.h"


void CheatLoop() {
    static bool lastMenuState = true;

    while (true) {
        if (GetAsyncKeyState(VK_END) & 1) { // Appuyez sur END pour quitter la boucle de triche
            break;
		}

        if (!Globals::GWorld || !Globals::GWorld->OwningGameInstance) {
			Sleep(100); // Attendre un peu avant de vérifier à nouveau
            continue; // Si GWorld ou GameInstance n'est pas encore initialisé, on attend
		}

        UGameInstance* GameInstance = Globals::GWorld->OwningGameInstance;

        if (GameInstance->LocalPlayers.Num() == 0 || !GameInstance->LocalPlayers[0]) continue;

        ULocalPlayer* LocalPlayer = GameInstance->LocalPlayers[0];
        if (!LocalPlayer->PlayerController) continue;

        APlayerController* PC = LocalPlayer->PlayerController;

        APawn* MyPawn = PC->Pawn;
        if (!MyPawn) continue;

        ABP_PlayerCharacter_C* MyCharacter = (ABP_PlayerCharacter_C*)MyPawn;

        bool isDead;
        MyCharacter->IsDead(isDead);
        if (isDead) {
            Sleep(100);
            continue;
        }

        // GOD MODE
        if (MyCharacter->HealthComponent && Renderer::bGodMode) {
            if (MyCharacter->HealthComponent->HP < 150) {
                MyCharacter->HealthComponent->HP = 150;
            }
        }

        // INIFINITE AMMO
        if (Renderer::bInfiniteAmmo) {
            if (MyCharacter->PrimaryWeapon) MyCharacter->PrimaryWeapon->ActualAmmo = 999;
            if (MyCharacter->SecondaryWeapon) MyCharacter->SecondaryWeapon->ActualAmmo = 999;
        }

        // STABLE WEAPON
        if (Renderer::bStableWeapon) {
            if (MyCharacter->PrimaryWeapon) {
                auto weapon = MyCharacter->PrimaryWeapon;
                weapon->AimingSpread = 0.0f;
                weapon->WeaponVerticalRecoilMax = 0.0f;
                weapon->WeaponVerticalRecoilMin = 0.0f;
                weapon->WeaponHorizontalRecoilMax = 0.0f;
                weapon->WeaponHorizontalRecoilMin = 0.0f;
            }
            if (MyCharacter->SecondaryWeapon) {
                auto weapon = MyCharacter->SecondaryWeapon;
                weapon->AimingSpread = 0.0f;
                weapon->WeaponVerticalRecoilMax = 0.0f;
                weapon->WeaponVerticalRecoilMin = 0.0f;
                weapon->WeaponHorizontalRecoilMax = 0.0f;
                weapon->WeaponHorizontalRecoilMin = 0.0f;
            }
        }

        Sleep(10);
	}
}


// Fonction principale de votre thread
DWORD WINAPI MainThread(LPVOID lpReserved) {
    // Initialisation de la console pour le debug (optionnel)
    Console::Init();

    std::cout << "[+] DLL Injectée avec succès" << std::endl;

    Globals::Init();
    Hooks::Init();

    std::cout << "[+] GWorld trouve a: " << Globals::GWorld << std::endl;

    CheatLoop();

    Hooks::Shutdown();

    std::cout << "[+] Uninjected" << std::endl;
    Console::Free();

    Sleep(100);

    FreeLibraryAndExitThread((HMODULE)lpReserved, 0);
    return TRUE;
}


BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);
    }
    return TRUE;
}