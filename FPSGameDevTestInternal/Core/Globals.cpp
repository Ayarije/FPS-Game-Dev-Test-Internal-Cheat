#include "Globals.h"

namespace Globals {
    uintptr_t GWorldOffset = 0x4B80F70;
    UWorld* GWorld = nullptr;
    uintptr_t gameBase = 0x0;

    void Init() {
        gameBase = (uintptr_t)GetModuleHandle(NULL);

        GWorld = *(UWorld**)(gameBase + GWorldOffset);

        // GNames et GObjects servent surtout si tu veux scanner des fonctions par leur nom
        // ou itérer sur tous les objets, mais pour un cheat simple, GWorld suffit souvent.
        // uintptr_t GNamesAddr = gameBase + 0x49FC700;
        // uintptr_t GObjectsAddr = gameBase + 0x4a38a50;
    }
}