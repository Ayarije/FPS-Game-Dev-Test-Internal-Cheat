#pragma once
#include <d3d11.h>

#include <iostream>
#include "../ImGui/imgui.h"
#include "../ImGui/imgui_stdlib.h"
#include "../ImGui/backends/imgui_impl_win32.h"
#include "../ImGui/backends/imgui_impl_dx11.h"

#include "../Core/Globals.h"
#include "../Core/Hooks.h"

#include "../Modules/Visuals.h"

#include "../SDK/SDK.h"

#pragma comment(lib, "d3d11.lib")

struct IDXGISwapChain;

namespace Renderer {
	extern ID3D11Device* pDevice;
	extern ID3D11DeviceContext* pContext;
	extern ID3D11RenderTargetView* mainRenderTargetView;
	extern WNDPROC oWndProc;
	extern HWND window;
	extern uint32_t screenWidth;
	extern uint32_t screenHeight;
	extern bool bShowMenu;

	// Initialisation du hook graphique
	void Init();
	void Shutdown();
	void ToggleMenuState(bool bIsVisible);
	void GUIColorEdit(const char* label, ImU32& color);

	// Le "Détour" de la fonction Present
	HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);

	// Le "Détour" des inputs
	LRESULT __stdcall WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	// FUNCTIONNALITY THRESHOLDS
	// WEAPONS
	extern bool bInfiniteAmmo;
	extern bool bStableWeapon;
	extern bool bInstaFireRate;
	extern bool bSilentAim;
	extern float AimbotFOV;
	
	// SELF
	extern bool bGodMode;
	extern float speedModifier;
	
	// VISUALS
	extern bool bESP;
}