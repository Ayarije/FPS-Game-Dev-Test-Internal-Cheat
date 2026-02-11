#include "Hooks.h"

bool containsCaseInsensitive(std::string haystack, std::string needle) {
    // Convert haystack to lowercase
    std::transform(haystack.begin(), haystack.end(), haystack.begin(),
        [](unsigned char c) { return std::tolower(c); });

    // Convert needle to lowercase
    std::transform(needle.begin(), needle.end(), needle.begin(),
        [](unsigned char c) { return std::tolower(c); });

    // Now use the standard find method
    return haystack.find(needle) != std::string::npos;
}

namespace Hooks {
    extern std::string eventFuncSearchLabel = "";
    extern bool bSearchForEventFunc = false;

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

    // Pointeur original
    ProcessEvent_t oProcessEvent = nullptr;

    void __fastcall hkProcessEvent(UObject* pObject, UFunction* pFunction, void* pParams) {

        if (pObject && pFunction) {
            UFunction_Stub* func = (UFunction_Stub*)pFunction;
            std::string funcName = func->GetName();
            
            if (Hooks::bSearchForEventFunc && funcName.find(Hooks::eventFuncSearchLabel) != std::string::npos) {
                //if (funcName.find("Canvas") == std::string::npos)
                std::cout << "Hooked: " << funcName << std::endl;
            }

            // TakeDamageHook
            if (funcName.find("ReceiveAnyDamage") != std::string::npos) {
                self::hkReceiveAnyDamage(pObject, pFunction, pParams);
            }
        }

        // Appel de l'original
        oProcessEvent(pObject, pFunction, pParams);
    }
    
    void InitProcessEventHook() {
        uintptr_t processEventAddr;

        if (Globals::GWorld) {
            // La VTable est le premier élément de l'objet (offset 0x0)
            void** vtable = *(void***)Globals::GWorld;

            // On récupère l'adresse de la fonction à l'index 68
            processEventAddr = (uintptr_t)vtable[VTABLE_INDEX_PROCESSEVENT];
        }
        else {
            // Fallback si GWorld n'est pas encore là (peu probable si injecté en jeu)
            // On peut essayer de scanner, ou juste logger une erreur
            std::cout << "[!] GWorld est null, impossible de trouver la VTable !" << std::endl;
            return;
        }

        if (processEventAddr == 0) {
            std::cout << "[!] Adresse de ProcessEvent invalide." << std::endl;
            return;
        }

        std::cout << "[+] ProcessEvent trouve via VTable[" << VTABLE_INDEX_PROCESSEVENT << "] a : " << std::hex << processEventAddr << std::endl;

        MH_CreateHook((void*)processEventAddr, &hkProcessEvent, (void**)&oProcessEvent);
    }

    void Init() {
        MH_Initialize();
        
        if (signatures::getPlayerViewPointPtr == 0x0) {
            std::cout << "[!] Failed to hook GetPlayerViewPoint: Cannot find func ptr" << std::endl;
        } else {
            MH_CreateHook((void*)signatures::getControlRotationPtr, &weapons::hkGetPlayerViewPoint, (void**)&weapons::oGetPlayerViewPoint);
            std::cout << "[+] Succesfuly hooked GetPlayerViewPoint at offset: " << std::hex << signatures::getPlayerViewPointPtr - Globals::gameBase << std::endl;
        }

        InitProcessEventHook();
        Renderer::Init();

        MH_EnableHook(MH_ALL_HOOKS);
    }

    void Shutdown() {
        Renderer::Shutdown();

        MH_DisableHook(MH_ALL_HOOKS);
        MH_Uninitialize();
    }
}