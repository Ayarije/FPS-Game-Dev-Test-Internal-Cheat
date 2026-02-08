
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UAudioCapture;
class UAudioCaptureComponent;
class UAudioCaptureFunctionLibrary;

/// Struct /Script/AudioCapture.AudioCaptureDeviceInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAudioCaptureDeviceInfo
{ 
	FName                                              DeviceName;                                                 // 0x0000   (0x0008)  
	int32_t                                            NumInputChannels;                                           // 0x0008   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x000C   (0x0004)  
};

/// Class /Script/AudioCapture.AudioCapture
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UAudioCapture : public UAudioGenerator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AudioCapture.AudioCapture.StopCapturingAudio
	void StopCapturingAudio() // [0xdf0ce0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/AudioCapture.AudioCapture.StartCapturingAudio
	void StartCapturingAudio() // [0xdf0cc0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/AudioCapture.AudioCapture.IsCapturingAudio
	bool IsCapturingAudio() // [0xdf0c90] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
	bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo) // [0xdf0be0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FAudioCaptureDeviceInfo&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(OutInfo);
	}
};

/// Class /Script/AudioCapture.AudioCaptureFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
	UAudioCapture* CreateAudioCapture() // [0xdf0bb0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAudioCapture* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
};

/// Class /Script/AudioCapture.AudioCaptureComponent
/// Size: 0x0780 (1920 bytes) (0x0006C0 - 0x000780) align 16 MaxSize: 0x0780
class UAudioCaptureComponent : public USynthComponent
{ 
public:
	int32_t                                            JitterLatencyFrames;                                        // 0x06C0   (0x0004)  
	unsigned char                                      UnknownData00_7[0xBC];                                      // 0x06C4   (0x00BC)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAudioCapture) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UAudioCaptureFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioCaptureComponent) == 0x0780); // 1920 bytes (0x0006C0 - 0x000780)
static_assert(sizeof(FAudioCaptureDeviceInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FAudioCaptureDeviceInfo, DeviceName) == 0x0000);
