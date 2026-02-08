#pragma once
#include <d3d11.h>

#include "../ImGui/imgui.h"
#include "../ImGui/backends/imgui_impl_win32.h"
#include "../ImGui/backends/imgui_impl_dx11.h"

#include "../Core/Globals.h"

#include "../SDK/SDK.h"

#pragma comment(lib, "d3d11.lib")

struct IDXGISwapChain;

namespace Renderer {
	extern ID3D11Device* pDevice;
	extern ID3D11DeviceContext* pContext;
	extern ID3D11RenderTargetView* mainRenderTargetView;
	extern WNDPROC oWndProc;
	extern HWND window;
	extern bool bShowMenu;

	// Initialisation du hook graphique
	void Init();
	void Shutdown();
	void ToggleMenuState(bool bIsVisible);

	// Le "Détour" de la fonction Present
	HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);

	// Le "Détour" des inputs
	LRESULT __stdcall WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	// FUNCTIONNALITY THRESHOLDS
	extern bool bESP;
	extern bool bGodMode;
	extern bool bInfiniteAmmo;
	extern bool bStableWeapon;
}