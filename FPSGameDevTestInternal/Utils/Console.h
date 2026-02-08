#include <Windows.h>
#include <iostream>

namespace Console {
    FILE* fDummy;

    void Init() {
        AllocConsole();

        // Redirection des flux vers la nouvelle console
        freopen_s(&fDummy, "CONOUT$", "w", stdout);
        freopen_s(&fDummy, "CONIN$", "r", stdin);
        freopen_s(&fDummy, "CONOUT$", "w", stderr);

        std::cout << "[+] Console Initialisee" << std::endl;
    }

    void Free() {
        // Fermeture des flux
        if (fDummy) fclose(fDummy);
        fclose(stdout);
        fclose(stdin);
        fclose(stderr);

        // Destruction de la fenêtre
        FreeConsole();

        // Optionnel : Trouver la fenêtre et forcer la fermeture si FreeConsole échoue (rare)
        HWND consoleWindow = GetConsoleWindow();
        if (consoleWindow) {
            PostMessage(consoleWindow, WM_CLOSE, 0, 0);
        }
    }
}