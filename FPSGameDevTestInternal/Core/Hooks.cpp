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
    bool bSearchForEventFunc = false;
    bool bSearchOnce = false;
    bool bSearchWhenKeyClicked = false;
    int keyDeltaTime = 500;
    std::string eventFuncSearchLabel = "";
    std::unordered_set<std::string> funcAlreadySeen;
    ImGuiKey key = ImGuiKey_Enter;

    // Helper pour rendre le code lisible
    void CreateHook(void* target, void* detour, void** original, std::string label) {
        if ((uintptr_t)target == 0x0) {
            std::cout << "[!] Hook Error  : " << label << " at offset " << std::hex << (uintptr_t) target - Globals::gameBase << std::endl;
        }
        MH_STATUS status = MH_CreateHook(target, detour, original);
        if (status != MH_OK) {
            std::cout << "[!] Hook Error  : " << MH_StatusToString(status) << std::endl;
        }
        else {
            std::cout << "[+] Hook Success: " << label << " at offset " << std::hex << (uintptr_t) target - Globals::gameBase << std::endl;
        }
    }

    // Pointeur original
    ProcessEvent_t oProcessEvent = nullptr;

    void __fastcall hkProcessEvent(UObject* pObject, UFunction* pFunction, void* pParams) {

        if (pObject && pFunction) {
            UFunction_Stub* func = (UFunction_Stub*)pFunction;
            std::string funcName = func->GetName();
            // TakeDamageHook
            if (funcName.find("ReceiveAnyDamage") != std::string::npos) {
                self::hkReceiveAnyDamage(pObject, pFunction, pParams);
            }
            // ReceiveBeginPlayHook (Detect Shooting)
            if (funcName.find("ReceiveBeginPlay") != std::string::npos) {
                weapons::hkReceiveBeginPlay(pObject, pFunction, pParams);
            }
            
            // [ DEBUG ]
            if (Hooks::bSearchForEventFunc && funcName.find(Hooks::eventFuncSearchLabel) != std::string::npos) {
                if (!Hooks::bSearchOnce || !funcAlreadySeen.contains(funcName)) {
                    if (Hooks::bSearchOnce && !funcAlreadySeen.contains(funcName)) funcAlreadySeen.insert(funcName);
                    std::cout << "Hooked: " << funcName << std::endl;
                }
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

            processEventAddr = (uintptr_t)vtable[VTABLE_INDEX_PROCESSEVENT];
        }
        else {
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
        
        CreateHook(signatures::getPlayerViewPointPtr, &weapons::hkGetPlayerViewPoint, (void**) &weapons::oGetPlayerViewPoint, "GetPlayerViewPoint");
        // CreateHook((void*)((uintptr_t)signatures::setShootingPtr + 0x0), &weapons::hkSetShooting, (void**)&weapons::oSetShooting, "SetShooting");

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