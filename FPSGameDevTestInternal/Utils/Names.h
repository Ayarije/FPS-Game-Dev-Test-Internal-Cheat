#pragma once
#include <Windows.h>
#include <string>
#include "../SDK/SDK/BasicType.h"

namespace Names {
    // Offset fourni
    static uintptr_t GNamesOffset = 0x49FC700;

    // --- Structures internes du moteur (ne pas toucher) ---
    struct FNameEntryHandle {
        uint32_t Block = 0;
        uint32_t Offset = 0;
    };

    struct FNameEntryHeader {
        uint16_t bIsWide : 1;
        uint16_t LowercaseProbeHash : 5;
        uint16_t Len : 10;
    };

    struct FNameEntry {
        FNameEntryHeader Header;
        union {
            char AnsiName[1024];
            wchar_t WideName[1024];
        };
    };

    struct FNamePool {
        unsigned char Lock[8];
        uint32_t CurrentBlock;
        uint32_t CurrentByteCursor;
        unsigned char* Blocks[8192]; // Table des blocs de noms

        // Fonction magique pour retrouver le nom depuis l'ID
        FNameEntry* GetEntry(FNameEntryHandle Handle) const {
            if (Handle.Block >= 8192 || !Blocks[Handle.Block]) return nullptr;

            // Calcul spécifique UE4.23+ : Block + 2 * Offset
            // (Le facteur 2 vient de l'alignement mémoire de l'allocateur)
            unsigned char* entryPtr = Blocks[Handle.Block] + (2 * (uint64_t)Handle.Offset);
            return (FNameEntry*)entryPtr;
        }
    };

    // --- Fonction Principale à utiliser ---
    inline std::string GetName(FName Name) {
        // 1. Récupérer le Pool global
        static FNamePool* Pool = nullptr;
        if (!Pool) {
            uintptr_t base = (uintptr_t)GetModuleHandle(NULL);
            Pool = (FNamePool*)(base + GNamesOffset);
        }

        // 2. Décoder l'ID du nom
        FNameEntryHandle Handle;
        Handle.Block = Name.ComparisonIndex >> 16;
        Handle.Offset = Name.ComparisonIndex & 65535;

        // 3. Récupérer l'entrée
        FNameEntry* Entry = Pool->GetEntry(Handle);
        if (!Entry) return "UNKNOWN";

        // 4. Convertir en string propre
        if (Entry->Header.bIsWide) {
            return "WideName_NotSupported"; // Simplification pour ce tuto
        }

        // On retourne la chaîne de caractères (limitée par Header.Len)
        return std::string(Entry->AnsiName, Entry->Header.Len);
    }
}