#pragma once
#include <Windows.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <unordered_set>
#include "MinHook.h"

#include "Renderer.h"
#include "Structs.h"

#include "../Modules/Self.h"
#include "../Modules/Weapons.h"

#include "../Utils/Memory.h"

#include "../SDK/SDK.h"

#define VTABLE_INDEX_PROCESSEVENT 68
typedef void(__fastcall* ProcessEvent_t)(UObject* pObject, UFunction* pFunction, void* pParams);

namespace Hooks {
    void Init();
    void Shutdown();
    void CreateHook(void* target, void* detour, void** original, std::string label);

    // --- Variables de Debug ---
    extern bool bSearchForEventFunc;
    extern bool bSearchOnce;
    extern bool bSearchWhenKeyClicked;
    extern int keyDeltaTime;
    extern ImGuiKey key;
    extern std::string eventFuncSearchLabel;

    extern std::unordered_set<std::string> funcAlreadySeen;

    // --- Process Event Hook ---
    extern ProcessEvent_t oProcessEvent;
    void __fastcall hkProcessEvent(UObject* pObject, UFunction* pFunction, void* pParams);
    void InitProcessEventHook();
}