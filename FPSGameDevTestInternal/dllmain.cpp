#include <windows.h>
#include <iostream>

#include "Core/Globals.h"
#include "Core/Renderer.h"
#include "Core/Hooks.h"

#include "Utils/Console.h"
#include "Utils/Memory.h"

#include "Modules/Weapons.h"
#include "Modules/Self.h"

#include "SDK/SDK/FPS.h"


void CheatLoop() {
    while (true) {
        if (GetAsyncKeyState(VK_END) & 1) { // Appuyez sur END pour quitter la boucle de triche
            break;
		}
        Console::ConsoleLoop();

        if (!Globals::GWorld || !Globals::GWorld->OwningGameInstance) {
			Sleep(100); // Attendre un peu avant de vérifier à nouveau
            continue; // Si GWorld ou GameInstance n'est pas encore initialisé, on attend
		}

        UGameInstance* GameInstance = Globals::GWorld->OwningGameInstance;

        if (GameInstance->LocalPlayers.Num() == 0 || !GameInstance->LocalPlayers[0]) continue;

        ULocalPlayer* LocalPlayer = GameInstance->LocalPlayers[0];
        if (!LocalPlayer->PlayerController) continue;

        APlayerController* PC = LocalPlayer->PlayerController;

        if (GetAsyncKeyState(VK_NUMPAD1) & 1) {
            tests::ScanForCameraOffset(PC);
        }
        if (GetAsyncKeyState(VK_NUMPAD2) & 1) {
            tests::AnalyzeLevelOffsets();
        }

        APawn* MyPawn = PC->Pawn;
        if (!MyPawn) continue;

        ABP_PlayerCharacter_C* MyCharacter = (ABP_PlayerCharacter_C*) MyPawn;
        
        __try {
        if (!MyCharacter->HealthComponent) continue;
        if (MyCharacter->HealthComponent->HP <= 0) continue;

        // INIFINITE AMMO
        if (Renderer::bInfiniteAmmo) weapons::InfiniteAmmo(MyCharacter);

        // STABLE WEAPON
        if (Renderer::bStableWeapon) weapons::StableWeapon(MyCharacter);

        // INSTA FIRE RATE
        if (Renderer::bInstaFireRate) weapons::InstaFireRate(MyCharacter);

        // SPEED
        self::speedModifier(MyCharacter);

        } __except (EXCEPTION_EXECUTE_HANDLER) {}
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