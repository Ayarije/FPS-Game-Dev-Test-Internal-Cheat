
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

class UMagicLeapLightEstimationFunctionLibrary;
class UMagicLeapLightingTrackingComponent;

/// Enum /Script/MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
/// Size: 0x01 (1 bytes)
enum class EMagicLeapLightEstimationCamera : uint8_t
{
	EMagicLeapLightEstimationCamera__Left                                            = 0,
	EMagicLeapLightEstimationCamera__Right                                           = 1,
	EMagicLeapLightEstimationCamera__FarLeft                                         = 2,
	EMagicLeapLightEstimationCamera__FarRight                                        = 3
};

/// Struct /Script/MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMagicLeapLightEstimationColorTemperatureState
{ 
	float                                              ColorTemperatureKelvin;                                     // 0x0000   (0x0004)  
	FLinearColor                                       AmbientColor;                                               // 0x0004   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FTimespan                                          Timestamp;                                                  // 0x0018   (0x0008)  
};

/// Struct /Script/MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMagicLeapLightEstimationAmbientGlobalState
{ 
	TArray<float>                                      AmbientIntensityNits;                                       // 0x0000   (0x0010)  
	FTimespan                                          Timestamp;                                                  // 0x0010   (0x0008)  
};

/// Class /Script/MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
/// Size: 0x00C0 (192 bytes) (0x0000B0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UMagicLeapLightingTrackingComponent : public UActorComponent
{ 
public:
	bool                                               UseGlobalAmbience;                                          // 0x00B0   (0x0001)  
	bool                                               UseColorTemp;                                               // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_7[0xE];                                       // 0x00B2   (0x000E)  MISSED
};

/// Class /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapLightEstimationFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
	bool IsTrackerValid() // [0xd7a0d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
	bool GetColorTemperatureState(FMagicLeapLightEstimationColorTemperatureState& ColorTemperatureState) // [0xd7a020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FMagicLeapLightEstimationColorTemperatureState&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(ColorTemperatureState);
	}
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
	bool GetAmbientGlobalState(FMagicLeapLightEstimationAmbientGlobalState& GlobalAmbientState) // [0xd79f70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FMagicLeapLightEstimationAmbientGlobalState&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(GlobalAmbientState);
	}
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker
	void DestroyTracker() // [0xd79f50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
	bool CreateTracker() // [0xd79f20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapLightingTrackingComponent) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(UMagicLeapLightEstimationFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapLightEstimationColorTemperatureState) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMagicLeapLightEstimationAmbientGlobalState) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FMagicLeapLightEstimationColorTemperatureState, AmbientColor) == 0x0004);
static_assert(offsetof(FMagicLeapLightEstimationColorTemperatureState, Timestamp) == 0x0018);
static_assert(offsetof(FMagicLeapLightEstimationAmbientGlobalState, AmbientIntensityNits) == 0x0000);
static_assert(offsetof(FMagicLeapLightEstimationAmbientGlobalState, Timestamp) == 0x0010);
