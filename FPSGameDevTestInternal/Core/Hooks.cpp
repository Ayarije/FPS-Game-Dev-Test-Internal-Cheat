#include "pch.h"
#include "Hooks.h"
#include "MinHook.h"
#include <iostream>

namespace Hooks {

    // Helper pour rendre le code lisible
    void CreateHook(void* target, void* detour, void** original) {
        MH_STATUS status = MH_CreateHook(target, detour, original);
        if (status != MH_OK) {
            std::cout << "[!] Erreur Hook: " << MH_StatusToString(status) << std::endl;
        }
        else {
            std::cout << "[+] Hook créé avec succès." << std::endl;
        }
    }

    void Init() {
        MH_Initialize();
        uintptr_t gameBase = (uintptr_t)GetModuleHandle(NULL);


        MH_EnableHook(MH_ALL_HOOKS);
    }

    void Shutdown() {
        MH_DisableHook(MH_ALL_HOOKS);
        MH_Uninitialize();
    }
}