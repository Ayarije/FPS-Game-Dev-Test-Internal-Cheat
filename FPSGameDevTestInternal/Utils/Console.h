#include <Windows.h>
#include <iostream>
#include <streambuf> // Required for stream manipulation

namespace Console {
    FILE* fDummy;
    bool freezedConsole = false;

    // A buffer that discards everything sent to it
    class NullBuffer : public std::streambuf {
    public:
        int overflow(int c) { return c; }
    };

    NullBuffer nullBuf;
    std::streambuf* originalStdout = nullptr;

    inline void Init() {
        AllocConsole();

        freopen_s(&fDummy, "CONOUT$", "w", stdout);
        freopen_s(&fDummy, "CONIN$", "r", stdin);
        freopen_s(&fDummy, "CONOUT$", "w", stderr);

        // Save the original buffer so we can restore it later
        originalStdout = std::cout.rdbuf();

        std::cout << "[+] Console Initialisee" << std::endl;
    }

    inline void ToggleFreeze() {
        freezedConsole = !freezedConsole;

        if (freezedConsole) {
            // Switch to the Null Buffer (Discards output)
            std::cout << "[!] Console Frozen (Output Hidden)" << std::endl;
            std::cout.rdbuf(&nullBuf);
        }
        else {
            // Restore the Original Buffer (Shows output)
            std::cout.rdbuf(originalStdout);
            std::cout << "[+] Console Resumed" << std::endl;
        }
    }

    inline void ConsoleLoop() {
        // Toggle when NUMPAD0 is pressed (using & 1 for single press detection)
        if (GetAsyncKeyState(VK_NUMPAD0) & 1) {
            ToggleFreeze();
        }
    }

    inline void Free() {
        // Restore buffer before closing to avoid crashes
        if (originalStdout) std::cout.rdbuf(originalStdout);

        if (fDummy) fclose(fDummy);
        fclose(stdout);
        fclose(stdin);
        fclose(stderr);
        FreeConsole();

        HWND consoleWindow = GetConsoleWindow();
        if (consoleWindow) {
            PostMessage(consoleWindow, WM_CLOSE, 0, 0);
        }
    }
}