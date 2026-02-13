#include "Renderer.h"

// Déclaration externe pour gérer les inputs ImGui
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

// Typedef de la fonction originale Present
typedef HRESULT(__stdcall* Present_t)(IDXGISwapChain*, UINT, UINT);
Present_t oPresent = nullptr;

namespace Renderer {
    ID3D11Device* pDevice = nullptr;
    ID3D11DeviceContext* pContext = nullptr;
    ID3D11RenderTargetView* mainRenderTargetView = nullptr;
    WNDPROC oWndProc = nullptr;
    HWND window = nullptr;
    uint32_t screenWidth = 1920;
    uint32_t screenHeight = 1080;
    bool bRenderThread = false;
    bool bInit = false; // Pour savoir si ImGui est prêt
    bool bShowMenu = true; // Pour afficher/cacher le menu (Touche INSERT)
    
    // Variables de configuration (à modifier via le menu)
    bool bESP = false;
    bool bGodMode = false;
    bool bInfiniteAmmo = false;
    bool bStableWeapon = false;
    float speedModifier = 1.0f;
    bool bInstaFireRate = false;
    bool bSilentAim = false;
    float AimbotFOV = 1.0f;

    void ToggleMenuState(bool bIsVisible) {
        if (!Globals::GWorld || !Globals::GWorld->OwningGameInstance) return;

        // On récupère le contrôleur du joueur local
        auto GameInstance = Globals::GWorld->OwningGameInstance;
        if (GameInstance->LocalPlayers.Num() == 0) return;

        auto LocalPlayer = GameInstance->LocalPlayers[0];
        if (!LocalPlayer || !LocalPlayer->PlayerController) return;

        APlayerController* PC = LocalPlayer->PlayerController;

        if (bIsVisible) {
            // --- ETAT : MENU OUVERT ---
            // 1. On affiche la souris
            PC->bShowMouseCursor = true;
            // 2. On active les événements de clic (IMPORTANT pour cliquer sur les boutons)
            PC->bEnableClickEvents = true;
            PC->bEnableMouseOverEvents = true;
        }
        else {
            // --- ETAT : MENU FERMÉ ---
            // 1. On cache la souris (Le moteur va automatiquement la re-locker au centre)
            PC->bShowMouseCursor = false;
            // 2. On désactive les clics UI pour éviter les conflits en jeu
            PC->bEnableClickEvents = false;
            PC->bEnableMouseOverEvents = false;
        }
    }
    void GUIColorEdit(const char* label, ImU32& color) {
        ImVec4 tmp = ImGui::ColorConvertU32ToFloat4(color);
        if (ImGui::ColorEdit4(label, (float*)&tmp)) color = ImGui::ColorConvertFloat4ToU32(tmp);
    }

    // =============================================================
    // WNDPROC : GESTION DES ENTRÉES (SOURIS / CLAVIER)
    // =============================================================
    LRESULT __stdcall WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
        if (!bRenderThread) {
            return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
        }

        // 1. Touche INSERT pour ouvrir/fermer le menu
        if (uMsg == WM_KEYDOWN && wParam == VK_INSERT) {
            Renderer::bShowMenu = !Renderer::bShowMenu;

            ToggleMenuState(Renderer::bShowMenu);
            return 0; // On bloque la touche pour le jeu
        }

        // 2. Si le menu est ouvert, on passe les inputs à ImGui
        if (bShowMenu) {
            ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);
            switch (uMsg) {
            case WM_LBUTTONDOWN:
            case WM_LBUTTONUP:
            case WM_RBUTTONDOWN:
            case WM_RBUTTONUP:
            case WM_MOUSEMOVE:
            case WM_KEYUP:
            case WM_KEYDOWN: // Bloque aussi les touches (Z,Q,S,D) si on écrit dans le menu
                return 1; // On retourne 1 pour dire "Message traité, ne pas envoyer au jeu"
            }
        }

        // 3. Sinon, on laisse le jeu gérer normalement
        return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
    }

    // =============================================================
    // HKPRESENT : BOUCLE DE RENDU (APPELÉE CHAQUE FRAME)
    // =============================================================
    HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags) {
        if (!bRenderThread) {
            return oPresent(pSwapChain, SyncInterval, Flags);
        }

        // --- INITIALISATION (Une seule fois) ---
        if (!bInit) {
            if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice))) {
                pDevice->GetImmediateContext(&pContext);
                DXGI_SWAP_CHAIN_DESC sd;
                pSwapChain->GetDesc(&sd);
                ID3D11Texture2D* pBackBuffer;
                pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
                pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
                pBackBuffer->Release();

                // Init ImGui
                ImGui::CreateContext();
                ImGuiIO& io = ImGui::GetIO();
                io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;

                // Important: Trouver la fenêtre du jeu pour les inputs
                window = sd.OutputWindow;

                screenWidth = sd.BufferDesc.Width;
                screenHeight = sd.BufferDesc.Height;

                // HOOK WNDPROC ICI ! (On remplace la fonction de gestion des messages de la fenêtre)
                oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);

                ImGui_ImplWin32_Init(window);
                ImGui_ImplDX11_Init(pDevice, pContext);

                bInit = true;
            }
            else {
                return oPresent(pSwapChain, SyncInterval, Flags);
            }
        }

        // --- DÉBUT DU DESSIN ---
        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();

        // ESP
        if (bESP) {
            visuals::DrawESP();
        }

        // MENU
        if (bShowMenu) {

            ImGui::Begin("Internal Cheat - FPS Test", &bShowMenu, ImGuiWindowFlags_NoCollapse);
            ImGui::Separator();

            // Tab bar: vérifier si on peut l'ouvrir
            if (ImGui::BeginTabBar("Categories")) {

                // ---- Onglet Weapons ----
                if (ImGui::BeginTabItem("Weapons")) {
                    ImGui::Checkbox("Munitions Infinies", &bInfiniteAmmo);
                    ImGui::Checkbox("No Recoil/Spread", &bStableWeapon);
                    ImGui::Checkbox("Insta Fire Rate", &bInstaFireRate);
                    ImGui::Checkbox("Silent Aim", &bSilentAim);
                    ImGui::SliderFloat("Aimbot FOV", &AimbotFOV, 0.5f, 60.0f);
                    ImGui::EndTabItem();
                }

                // ---- Onglet Self ----
                if (ImGui::BeginTabItem("Self")) {
                    ImGui::Checkbox("God Mode", &bGodMode);
                    ImGui::SliderFloat("Speed Modifier", &speedModifier, 0.5f, 10.0f);
                    ImGui::EndTabItem();
                }

                // ---- Onglet Visuals ----
                if (ImGui::BeginTabItem("Visuals")) {
                    ImGui::Checkbox("Activer ESP", &bESP);
                    ImGui::EndTabItem();
                }

                // ---- Onglet Settings ----
                if (ImGui::BeginTabItem("Settings")) {
                    ImGui::SeparatorText("ESP Colors");
                    GUIColorEdit("Default", visuals::COLOR_DEFAULT);
                    GUIColorEdit("Enemy", visuals::COLOR_ENEMY);
                    GUIColorEdit("Team", visuals::COLOR_TEAM);

                    ImGui::SeparatorText("Debug");
                    ImGui::Checkbox("Search for event func", &Hooks::bSearchForEventFunc);
                    ImGui::InputText("EventSearchLabel", &Hooks::eventFuncSearchLabel);

                    ImGui::EndTabItem();
                }

                ImGui::EndTabBar();
            }

            ImGui::End();
            // Si le menu est ouvert, on affiche la souris
            ImGui::GetIO().MouseDrawCursor = true;
        }
        else {
            ImGui::GetIO().MouseDrawCursor = false;
        }

        // END
        ImGui::Render();
        pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

        // ORIGINAL FUNCTION
        return oPresent(pSwapChain, SyncInterval, Flags);
    }

    // =============================================================
    // INIT : TROUVER ET HOOKER PRESENT
    // =============================================================
    void Init() {

        WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, DefWindowProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, L"DX", NULL };
        RegisterClassEx(&wc);
        HWND hWnd = CreateWindow(L"DX", NULL, WS_OVERLAPPEDWINDOW, 100, 100, 300, 300, NULL, NULL, wc.hInstance, NULL);

        D3D_FEATURE_LEVEL requestedLevels[] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_1 };
        D3D_FEATURE_LEVEL obtainedLevel;
        ID3D11Device* d3dDevice = nullptr;
        ID3D11DeviceContext* d3dContext = nullptr;
        IDXGISwapChain* d3dSwapChain = nullptr;

        DXGI_SWAP_CHAIN_DESC scd;
        ZeroMemory(&scd, sizeof(scd));
        scd.BufferCount = 1;
        scd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        scd.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;
        scd.BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
        scd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        scd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
        scd.OutputWindow = hWnd;
        scd.SampleDesc.Count = 1;
        scd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
        scd.Windowed = ((GetWindowLongPtr(hWnd, GWL_STYLE) & WS_POPUP) != 0) ? false : true;

        if (FAILED(D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, 0, requestedLevels, sizeof(requestedLevels) / sizeof(D3D_FEATURE_LEVEL), D3D11_SDK_VERSION, &scd, &d3dSwapChain, &d3dDevice, &obtainedLevel, &d3dContext))) {
            DestroyWindow(hWnd);
            UnregisterClass(wc.lpszClassName, wc.hInstance);
            return;
        }

        // L'adresse de Present est le 8ème pointeur dans la VTable de SwapChain
        DWORD_PTR* pSwapChainVTable = (DWORD_PTR*)d3dSwapChain;
        pSwapChainVTable = (DWORD_PTR*)pSwapChainVTable[0];
        uintptr_t presentAddr = (uintptr_t)pSwapChainVTable[8];

        // Nettoyage du Dummy
        d3dSwapChain->Release();
        d3dDevice->Release();
        d3dContext->Release();
        DestroyWindow(hWnd);
        UnregisterClass(wc.lpszClassName, wc.hInstance);

        // INSTALLER LE HOOK MINHOOK
        Hooks::CreateHook((void*)presentAddr, &hkPresent, (void**)&oPresent, "Present");
        bRenderThread = true;
    }
    
    void Shutdown() {
        bRenderThread = false;
        if (oWndProc && window) {
            SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)oWndProc);
            oWndProc = nullptr;
        }

        Sleep(100);

        if (bInit) { // Seulement si ImGui a été initialisé
            ImGui_ImplDX11_Shutdown();
            ImGui_ImplWin32_Shutdown();
            ImGui::DestroyContext();
        }

        if (mainRenderTargetView) {
            mainRenderTargetView->Release();
            mainRenderTargetView = nullptr;
        }
    }
}