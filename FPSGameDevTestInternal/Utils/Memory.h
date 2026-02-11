#pragma once
#include <vector>
#include <windows.h>
#include <iostream>

#include "../Core/Globals.h"

#include "../SDK/Signatures.h"

namespace addr {
    struct ModuleInfo {
        uint8_t* Base;
        size_t Size;
    };

    bool IsValid(void* ptr);

    ModuleInfo GetModuleInfo();
    uintptr_t FindPattern(const char* signature);
    void InitSignaturesSDK();
}

namespace tests {

    // Définition locale pour être sûr de la structure qu'on teste
    struct TestArray {
        uintptr_t Data;
        int32_t Count;
        int32_t Max;
    };

    // Fonction utilitaire pour vérifier si un pointeur est accessible
    bool IsValidPtr(void* ptr);
    void AnalyzeLevelOffsets();
    void ScanForCameraOffset(APlayerController* MyPC);
}