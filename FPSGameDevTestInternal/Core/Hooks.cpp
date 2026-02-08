#include "Hooks.h"
#include "MinHook.h"
#include <iostream>

#include "Renderer.h"

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

        Renderer::Init();

        MH_EnableHook(MH_ALL_HOOKS);
    }

    void Shutdown() {
        Renderer::Shutdown();

        MH_DisableHook(MH_ALL_HOOKS);
        MH_Uninitialize();
    }
}