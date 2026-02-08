#include "pch.h"

#include <windows.h>
#include <iostream>

#include "Core/Globals.h"
#include "SDK/SDK/FPS.h"


void CheatLoop() {
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

            APlayerController* Controller = LocalPlayer->PlayerController;

            APawn* MyPawn = Controller->Pawn;
            if (!MyPawn) continue;

            ABP_PlayerCharacter_C* MyCharacter = (ABP_PlayerCharacter_C*)MyPawn;

            // -----------------------------------------------------------
        // FONCTIONNALITÉ 1 : GOD MODE (Vie Infinie)
        // -----------------------------------------------------------
            if (MyCharacter->HealthComponent) {
                // Dans UBP_HealthComponent_C, il y a "HP" et "MaxHP"
                // On force les HP à la valeur Max en permanence
                if (MyCharacter->HealthComponent->HP < MyCharacter->HealthComponent->MaxHP) {
                    MyCharacter->HealthComponent->HP = MyCharacter->HealthComponent->MaxHP;
                }
            }

            // -----------------------------------------------------------
            // FONCTIONNALITÉ 2 : MUNITIONS INFINIES
            // -----------------------------------------------------------
            if (MyCharacter->PrimaryWeapon) {
                // Dans ABP_BaseWeapon_C, il y a "ActualAmmo"
                // On écrit 999 balles dans le chargeur
                MyCharacter->PrimaryWeapon->ActualAmmo = 999;
            }

            // Petit temps de pause pour ne pas surcharger le CPU (10ms = 100 fois par seconde)
            Sleep(10);
		}
}


// Fonction principale de votre thread
DWORD WINAPI MainThread(LPVOID lpReserved) {
    // Initialisation de la console pour le debug (optionnel)
    AllocConsole();
    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);

    std::cout << "[+] DLL Injectée avec succès" << std::endl;

    Globals::Init();

    std::cout << "[+] GWorld trouve a: " << Globals::GWorld << std::endl;

    CheatLoop();

    FreeConsole();
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