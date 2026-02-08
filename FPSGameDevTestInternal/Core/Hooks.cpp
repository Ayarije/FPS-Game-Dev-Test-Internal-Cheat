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
        // 1. Initialiser la librairie
        MH_Initialize();

        // 2. Récupérer les adresses (C'est là que tu utilises tes Offsets)
        // Supposons que tu as l'adresse de base du module
        uintptr_t gameBase = (uintptr_t)GetModuleHandle(NULL);

        // Exemple: Adresse de ProcessEvent trouvée via UEDumper ou IDA
        uintptr_t processEventAddr = gameBase + 0x1A2B3C;

        // 3. Création des Hooks via notre helper
        // On dit : "Quand le jeu appelle processEventAddr, appelle hkProcessEvent à la place, 
        // et sauvegarde l'original dans oProcessEvent"
        CreateHook((void*)processEventAddr, &hkProcessEvent, (void**)&oProcessEvent);

        // 4. Tout activer d'un coup
        MH_EnableHook(MH_ALL_HOOKS);
    }

    void Shutdown() {
        // Désactive les hooks et restaure le code original du jeu
        MH_DisableHook(MH_ALL_HOOKS);
        MH_Uninitialize();
    }

    // ---------------------------------------------------------
    // TON CODE "DETOUR" (C'est ici que la magie opère)
    // ---------------------------------------------------------
    void __fastcall hkProcessEvent(UObject* pObject, UFunction* pFunction, void* pParams) {

        // Exemple simple : Filtrer par nom
        // Note: Dans un vrai SDK UE4, tu aurais pFunction->GetName()
        // std::string funcName = pFunction->GetFullName();

        // if (funcName.find("Server_FireWeapon") != std::string::npos) {
        //     std::cout << "Le joueur tire !" << std::endl;
        // }

        // IMPORTANT : Toujours appeler l'original à la fin !
        // Si tu ne le fais pas, le jeu ne saura pas que l'événement s'est produit.
        return oProcessEvent(pObject, pFunction, pParams);
    }
}