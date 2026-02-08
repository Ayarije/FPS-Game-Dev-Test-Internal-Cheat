#pragma once
#pragma once
#include <Windows.h>
#include "../SDK/SDK.h"

namespace Globals {
    // On déclare les pointeurs globaux pour qu'ils soient accessibles partout
	extern UINT_PTR GWorldOffset;
    extern UWorld* GWorld;

    // Initialise les pointeurs avec vos offsets
    void Init();
}