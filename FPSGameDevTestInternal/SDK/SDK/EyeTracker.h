
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UEyeTrackerFunctionLibrary;

/// Enum /Script/EyeTracker.EEyeTrackerStatus
/// Size: 0x01 (1 bytes)
enum class EEyeTrackerStatus : uint8_t
{
	EEyeTrackerStatus__NotConnected                                                  = 0,
	EEyeTrackerStatus__NotTracking                                                   = 1,
	EEyeTrackerStatus__Tracking                                                      = 2
};

/// Struct /Script/EyeTracker.EyeTrackerStereoGazeData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FEyeTrackerStereoGazeData
{ 
	FVector                                            LeftEyeOrigin;                                              // 0x0000   (0x000C)  
	FVector                                            LeftEyeDirection;                                           // 0x000C   (0x000C)  
	FVector                                            RightEyeOrigin;                                             // 0x0018   (0x000C)  
	FVector                                            RightEyeDirection;                                          // 0x0024   (0x000C)  
	FVector                                            FixationPoint;                                              // 0x0030   (0x000C)  
	float                                              ConfidenceValue;                                            // 0x003C   (0x0004)  
};

/// Struct /Script/EyeTracker.EyeTrackerGazeData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FEyeTrackerGazeData
{ 
	FVector                                            GazeOrigin;                                                 // 0x0000   (0x000C)  
	FVector                                            GazeDirection;                                              // 0x000C   (0x000C)  
	FVector                                            FixationPoint;                                              // 0x0018   (0x000C)  
	float                                              ConfidenceValue;                                            // 0x0024   (0x0004)  
};

/// Class /Script/EyeTracker.EyeTrackerFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
	void SetEyeTrackedPlayer(APlayerController* PlayerController) // [0x153a9e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(PlayerController);
	}
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
	bool IsStereoGazeDataAvailable() // [0x153a9b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
	bool IsEyeTrackerConnected() // [0x153a980] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
	bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData) // [0x153a8e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FEyeTrackerStereoGazeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(OutGazeData);
	}
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
	bool GetGazeData(FEyeTrackerGazeData& OutGazeData) // [0x153a830] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FEyeTrackerGazeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(OutGazeData);
	}
};

#pragma pack(pop)


static_assert(sizeof(UEyeTrackerFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FEyeTrackerStereoGazeData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FEyeTrackerGazeData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeOrigin) == 0x0000);
static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeDirection) == 0x000C);
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeOrigin) == 0x0018);
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeDirection) == 0x0024);
static_assert(offsetof(FEyeTrackerStereoGazeData, FixationPoint) == 0x0030);
static_assert(offsetof(FEyeTrackerGazeData, GazeOrigin) == 0x0000);
static_assert(offsetof(FEyeTrackerGazeData, GazeDirection) == 0x000C);
static_assert(offsetof(FEyeTrackerGazeData, FixationPoint) == 0x0018);
