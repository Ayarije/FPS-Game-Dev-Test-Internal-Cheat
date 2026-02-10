#pragma once
#include "../SDK/SDK/BasicType.h"
#include "../Utils/Names.h" // Inclure notre nouveau fichier

// On recrée la structure de base d'un UObject
class UObject_Stub {
public:
    void** VTable;          // 0x00
    int32_t ObjectFlags;    // 0x08
    int32_t InternalIndex;  // 0x0C
    class UClass* Class;    // 0x10
    FName Name;             // 0x18

    std::string GetName() {
        return Names::GetName(this->Name);
    }
};

typedef UObject_Stub UFunction_Stub;