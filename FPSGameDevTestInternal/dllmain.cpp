#include <windows.h>
#include <iostream>

// Fonction principale de votre thread
DWORD WINAPI MainThread(LPVOID lpReserved) {
    // Initialisation de la console pour le debug (optionnel)
    AllocConsole();
    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);

    std::cout << "[+] DLL Injectée avec succès" << std::endl;

    // Votre logique d'initialisation (Hooks, etc.) irait ici

    return TRUE;
}


BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);
    }
    return TRUE;
}