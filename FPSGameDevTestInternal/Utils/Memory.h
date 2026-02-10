#pragma once
#include <vector>
#include <windows.h>
#include <iostream>

#include "../Core/Globals.h"

namespace addr {
    bool IsValid(void* ptr);

    uintptr_t FindPattern(char* signature);
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