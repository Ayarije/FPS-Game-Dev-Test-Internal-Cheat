#pragma once
#include <Windows.h>

// 1. Définition de la signature de la fonction originale
// Exemple pour une fonction fictive "GetPlayerHealth"
typedef float(__fastcall* GetHealth_t)(void* pThis);

// 2. Définition de la signature pour "ProcessEvent" (LE hook le plus important sur UE4)
// ProcessEvent est la fonction par laquelle passent 99% des actions du jeu.
class UObject;
class UFunction;
typedef void(__fastcall* ProcessEvent_t)(UObject* pObject, UFunction* pFunction, void* pParams);

namespace Hooks {
    // Initialise MinHook et installe tous les hooks
    void Init();

    // Nettoie et restaure les fonctions originales (TRÈS IMPORTANT pour ne pas crash en fermant)
    void Shutdown();

    // --- Stockage des originaux ---
    // On doit stocker l'adresse de la vraie fonction pour l'appeler à la fin de notre détour
    inline ProcessEvent_t oProcessEvent = nullptr;

    // --- Les Fonctions "Détour" ---
    // C'est ici que ton code s'exécutera
    void __fastcall hkProcessEvent(UObject* pObject, UFunction* pFunction, void* pParams);
}