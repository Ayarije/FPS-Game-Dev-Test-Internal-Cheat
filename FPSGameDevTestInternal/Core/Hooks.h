#pragma once
#include <Windows.h>

namespace Hooks {
    void Init();
    void Shutdown();
    void CreateHook(void* target, void* detour, void** original);

    // --- Stockage des originaux ---


    // --- Les Fonctions hooked ---

}