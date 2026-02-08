
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UMagicLeapAudioFunctionLibrary;

/// Struct /Script/MagicLeapAudio.MagicLeapAudioDummyStruct
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMagicLeapAudioDummyStruct
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Class /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapAudioFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackUnpluggedDelegate
	// bool SetOnAudioJackUnpluggedDelegate(FDelegateProperty& ResultDelegate);                                                 // [0xd59d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackPluggedDelegate
	// bool SetOnAudioJackPluggedDelegate(FDelegateProperty& ResultDelegate);                                                   // [0xd59c50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetMicMute
	bool SetMicMute(bool IsMuted) // [0xd59bc0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(IsMuted);
	}
	// Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.IsMicMuted
	bool IsMicMuted() // [0xd59b90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapAudioFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapAudioDummyStruct) == 0x0001); // 1 bytes (0x000000 - 0x000001)
