#pragma once
#pragma once
#include <Windows.h>
#include "../SDK/SDK.h"

namespace Globals {
    // On déclare les pointeurs globaux pour qu'ils soient accessibles partout
	UINT_PTR GWorldOffset = 0x4B80F70;
    extern UWorld* GWorld;

    // Initialise les pointeurs avec vos offsets
    void Init();
}