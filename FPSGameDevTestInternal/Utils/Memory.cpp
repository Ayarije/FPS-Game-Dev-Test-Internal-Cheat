#include "Memory.h"

namespace addr {
    bool IsValid(void* ptr) {
        if (!ptr) return false;
        if ((uintptr_t)ptr < 0x10000) return false; // Adresse trop basse (souvent une erreur)
        if ((uintptr_t)ptr > 0x7FFFFFFFFFFF) return false; // Adresse trop haute (kernel space)
        return true;
    }

    ModuleInfo GetModuleInfo() {
        static ModuleInfo info = { 0, 0 };
        if (info.Base == 0) {
            info.Base = (uint8_t*)GetModuleHandle(NULL);
            PIMAGE_DOS_HEADER dos = (PIMAGE_DOS_HEADER)info.Base;
            PIMAGE_NT_HEADERS nt = (PIMAGE_NT_HEADERS)(info.Base + dos->e_lfanew);
            info.Size = nt->OptionalHeader.SizeOfImage;
        }
        return info;
    }

    uintptr_t FindPattern(const char* signature) {
        // 1. Récupération rapide des infos module (Cached)
        const auto info = GetModuleInfo();
        uint8_t* start = info.Base;
        size_t size = info.Size;
        const uint8_t* end = start + size;

        // 2. Parsing du pattern "IDA Style" vers des tableaux fixes
        // On évite std::vector pour la performance, on utilise des vecteurs locaux
        // La taille max d'une signature dépasse rarement 128 octets
        uint8_t patternBytes[128];
        uint8_t wildcardMask[128]; // 1 si octet valide, 0 si wildcard (?)
        size_t patternLength = 0;

        for (const char* current = signature; *current; ++current) {
            if (*current == ' ') continue; // Ignorer les espaces
            if (*current == '?') {
                wildcardMask[patternLength] = 0; // C'est un wildcard
                patternBytes[patternLength] = 0;
                patternLength++;
                if (*(current + 1) == '?') current++; // Gérer "?? " comme "?"
            }
            else {
                wildcardMask[patternLength] = 1; // C'est un octet à vérifier
                // Conversion Hex char -> int optimisée
                char h = *current;
                char l = *(current + 1);

                uint8_t high = (h >= '0' && h <= '9') ? (h - '0') : ((h & ~0x20) - 'A' + 10);
                uint8_t low = (l >= '0' && l <= '9') ? (l - '0') : ((l & ~0x20) - 'A' + 10);

                patternBytes[patternLength] = (high << 4) | low;
                patternLength++;
                current++; // On a lu 2 caractères
            }
            if (patternLength >= 128) break; // Sécurité
        }

        // 3. Scan Mémoire Optimisé
        // On boucle sur toute la mémoire du module
        for (uint8_t* i = start; i < end - patternLength; ++i) {
            bool found = true;
            // Boucle interne de comparaison
            for (size_t j = 0; j < patternLength; ++j) {
                // Si ce n'est pas un wildcard ET que les octets ne correspondent pas
                if (wildcardMask[j] && i[j] != patternBytes[j]) {
                    found = false;
                    break;
                }
            }
            if (found) return (uintptr_t)i;
        }

        return 0;
    }
    
    void InitSignaturesSDK() {
        for (auto& it : signatures::Signatures) {
            std::string sig = it.first;
            *it.second = (void*) FindPattern((char*) sig.c_str());
        }
    }
}

namespace tests {

    // Fonction utilitaire pour vérifier si un pointeur est accessible
    bool IsValidPtr(void* ptr) {
        return !IsBadReadPtr(ptr, 8) && (uintptr_t)ptr > 0x10000 && (uintptr_t)ptr < 0x7FFFFFFFFFFF;
    }

    void AnalyzeLevelOffsets() {
        if (!Globals::GWorld || !Globals::GWorld->PersistentLevel) {
            std::cout << "[SCAN] GWorld ou PersistentLevel pas encore prêt." << std::endl;
            return;
        }

        uintptr_t LevelAddr = (uintptr_t)Globals::GWorld->PersistentLevel;
        std::cout << "================ DIAGNOSTIC ULEVEL ================" << std::endl;
        std::cout << "[SCAN] ULevel Address: " << std::hex << LevelAddr << std::endl;

        // Liste des offsets potentiels à tester
        // 0x98 : Standard UE 4.20 - 4.22
        // 0xA0 : Standard UE 4.23 - 4.25
        // 0xD8 : Votre SDK (ActorCluster)
        int offsetsToTest[] = { 0x98, 0xA0, 0xD8, 0x118 /* Parfois utilisé */ };

        for (int offset : offsetsToTest) {
            std::cout << "--------------------------------------------------" << std::endl;
            std::cout << "[TEST] Testing Offset: 0x" << std::hex << offset << std::endl;

            // CAS 1 : TArray direct (Directement dans ULevel)
            // Structure : [Data*][Count][Max]
            TestArray* DirectArray = (TestArray*)(LevelAddr + offset);

            if (IsValidPtr(DirectArray)) {
                // Lecture sécurisée des valeurs
                uintptr_t DataPtr = 0;
                int32_t Count = 0;

                // Utilisation de __try pour éviter tout crash si la mémoire est corrompue
                __try {
                    DataPtr = DirectArray->Data;
                    Count = DirectArray->Count;
                }
                __except (EXCEPTION_EXECUTE_HANDLER) {
                    std::cout << "  -> [CRASH PROTECT] Lecture directe impossible." << std::endl;
                    continue;
                }

                std::cout << "  [Direct TArray Mode]" << std::endl;
                std::cout << "  -> Data Ptr: " << std::hex << DataPtr << std::endl;
                std::cout << "  -> Count:    " << std::dec << Count << std::endl;

                if (IsValidPtr((void*)DataPtr) && Count > 0 && Count < 10000) {
                    std::cout << "  >>> RESULTAT PROBABLE (Direct) ! <<<" << std::endl;
                }
            }

            // CAS 2 : Pointeur vers Container (ActorCluster)
            // Structure : ULevel -> Pointeur -> [Data*][Count][Max]
            uintptr_t ClusterPtr = 0;
            __try {
                ClusterPtr = *(uintptr_t*)(LevelAddr + offset);
            }
            __except (EXCEPTION_EXECUTE_HANDLER) { continue; }

            if (IsValidPtr((void*)ClusterPtr)) {
                TestArray* ClusterArray = (TestArray*)ClusterPtr;

                uintptr_t DataPtr = 0;
                int32_t Count = 0;

                __try {
                    DataPtr = ClusterArray->Data;
                    Count = ClusterArray->Count;
                }
                __except (EXCEPTION_EXECUTE_HANDLER) {
                    std::cout << "  -> [CRASH PROTECT] Lecture du cluster impossible." << std::endl;
                    continue;
                }

                std::cout << "  [Pointer/Cluster Mode]" << std::endl;
                std::cout << "  -> Cluster Ptr: " << std::hex << ClusterPtr << std::endl;
                std::cout << "  -> Data Ptr:    " << std::hex << DataPtr << std::endl;
                std::cout << "  -> Count:       " << std::dec << Count << std::endl;

                if (IsValidPtr((void*)DataPtr) && Count > 0 && Count < 10000) {
                    std::cout << "  >>> RESULTAT PROBABLE (Cluster) ! <<<" << std::endl;
                }
            }
        }
        std::cout << "==================================================" << std::endl;
    }

    void ScanForCameraOffset(APlayerController* MyPC) {
        if (!MyPC || !MyPC->PlayerCameraManager) {
            std::cout << "[SCAN] PlayerCameraManager manquant." << std::endl;
            return;
        }

        uintptr_t PCM = (uintptr_t)MyPC->PlayerCameraManager;
        std::cout << "================ CAM SCANNER ================" << std::endl;
        std::cout << "[SCAN] Base Address: " << std::hex << PCM << std::endl;

        // On scanne les 2000 premiers octets (0x000 à 0x800 est suffisant généralement)
        for (int i = 0; i < 0x1000; i += 4) {
            // Lecture d'un float
            float val = *(float*)(PCM + i);

            // On cherche le FOV (généralement 90.0f, ou entre 80 et 110)
            if (val > 89.9f && val < 90.1f) {

                // Si on trouve ~90.0f, on regarde ce qu'il y a juste avant (Rotation et Location)
                // Structure typique : Location(12) | Rotation(12) | pad | FOV
                // Donc FOV est souvent à +0x18 ou +0x20 après la Location

                FVector PotentialLoc = *(FVector*)(PCM + i - 0x1C); // Test hypothèse 1
                FRotator PotentialRot = *(FRotator*)(PCM + i - 0x10);

                std::cout << "[POTENTIAL] Offset FOV: 0x" << std::hex << i
                    << " (Val: " << val << ")" << std::endl;

                // Afficher les vecteurs supposés pour vérifier visuellement
                // Si PotentialLoc bouge quand vous bougez, c'est le bon !
                std::cout << "   -> Loc (-0x1C?): " << PotentialLoc.X << " " << PotentialLoc.Y << " " << PotentialLoc.Z << std::endl;

                // Autre structure commune : Location(12) | Rotation(12) | FOV(4) (Pas de padding)
                FVector Loc2 = *(FVector*)(PCM + i - 0x18);
                std::cout << "   -> Loc (-0x18?): " << Loc2.X << " " << Loc2.Y << " " << Loc2.Z << std::endl;
            }
        }
        std::cout << "=============================================" << std::endl;
    }
}