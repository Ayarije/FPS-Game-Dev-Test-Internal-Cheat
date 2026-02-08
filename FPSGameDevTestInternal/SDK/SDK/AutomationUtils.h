
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UAutomationUtilsBlueprintLibrary;

/// Class /Script/AutomationUtils.AutomationUtilsBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAutomationUtilsBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
	void TakeGameplayAutomationScreenshot(FString ScreenshotName, float MaxGlobalError, float MaxLocalError, FString MapNameOverride) // [0xa33450] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, float, float, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(ScreenshotName, MaxGlobalError, MaxLocalError, MapNameOverride);
	}
};

#pragma pack(pop)


static_assert(sizeof(UAutomationUtilsBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
