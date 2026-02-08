
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

class UMagicLeapImageTrackerComponent;
class UMagicLeapImageTrackerFunctionLibrary;

/// Enum /Script/MagicLeapImageTracker.EMagicLeapImageTargetOrientation
/// Size: 0x01 (1 bytes)
enum class EMagicLeapImageTargetOrientation : uint8_t
{
	EMagicLeapImageTargetOrientation__ForwardAxisAsNormal                            = 0,
	EMagicLeapImageTargetOrientation__UpAxisAsNormal                                 = 1
};

/// Enum /Script/MagicLeapImageTracker.EMagicLeapImageTargetStatus
/// Size: 0x01 (1 bytes)
enum class EMagicLeapImageTargetStatus : uint8_t
{
	EMagicLeapImageTargetStatus__Tracked                                             = 0,
	EMagicLeapImageTargetStatus__Unreliable                                          = 1,
	EMagicLeapImageTargetStatus__NotTracked                                          = 2
};

/// Struct /Script/MagicLeapImageTracker.MagicLeapImageTargetState
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FMagicLeapImageTargetState
{ 
	EMagicLeapImageTargetStatus                        TrackingStatus;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            Location;                                                   // 0x0004   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0010   (0x000C)  
};

/// Struct /Script/MagicLeapImageTracker.MagicLeapImageTargetSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMagicLeapImageTargetSettings
{ 
	class UTexture2D*                                  ImageTexture;                                               // 0x0000   (0x0008)  
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	float                                              LongerDimension;                                            // 0x0018   (0x0004)  
	bool                                               bIsStationary;                                              // 0x001C   (0x0001)  
	bool                                               BIsEnabled;                                                 // 0x001D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x001E   (0x0002)  MISSED
};

/// Class /Script/MagicLeapImageTracker.MagicLeapImageTrackerComponent
/// Size: 0x0270 (624 bytes) (0x0001F8 - 0x000270) align 16 MaxSize: 0x0270
class UMagicLeapImageTrackerComponent : public USceneComponent
{ 
public:
	class UTexture2D*                                  TargetImageTexture;                                         // 0x01F8   (0x0008)  
	FString                                            Name;                                                       // 0x0200   (0x0010)  
	float                                              LongerDimension;                                            // 0x0210   (0x0004)  
	bool                                               bIsStationary;                                              // 0x0214   (0x0001)  
	bool                                               bUseUnreliablePose;                                         // 0x0215   (0x0001)  
	EMagicLeapImageTargetOrientation                   AxisOrientation;                                            // 0x0216   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0217   (0x0001)  MISSED
	SDK_UNDEFINED(16,620) /* FMulticastInlineDelegate */ __um(OnSetImageTargetSucceeded);                          // 0x0218   (0x0010)  
	SDK_UNDEFINED(16,621) /* FMulticastInlineDelegate */ __um(OnSetImageTargetFailed);                             // 0x0228   (0x0010)  
	SDK_UNDEFINED(16,622) /* FMulticastInlineDelegate */ __um(OnImageTargetFound);                                 // 0x0238   (0x0010)  
	SDK_UNDEFINED(16,623) /* FMulticastInlineDelegate */ __um(OnImageTargetLost);                                  // 0x0248   (0x0010)  
	SDK_UNDEFINED(16,624) /* FMulticastInlineDelegate */ __um(OnImageTargetUnreliableTracking);                    // 0x0258   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0268   (0x0008)  MISSED


	/// Functions
	// Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
	bool SetTargetAsync(UTexture2D* ImageTarget) // [0xd705e0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UTexture2D*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(ImageTarget);
	}
	// Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
	bool RemoveTargetAsync() // [0xd70530] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
};

/// Class /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets
	void SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets) // [0xd70560] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(MaxSimultaneousTargets);
	}
	// Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled
	bool IsImageTrackingEnabled() // [0xd70500] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets
	int32_t GetMaxSimultaneousTargets() // [0xd704d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking
	void EnableImageTracking(bool bEnable) // [0xd70450] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(bEnable);
	}
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapImageTrackerComponent) == 0x0270); // 624 bytes (0x0001F8 - 0x000270)
static_assert(sizeof(UMagicLeapImageTrackerFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapImageTargetState) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMagicLeapImageTargetSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(UMagicLeapImageTrackerComponent, TargetImageTexture) == 0x01F8);
static_assert(offsetof(UMagicLeapImageTrackerComponent, Name) == 0x0200);
static_assert(offsetof(UMagicLeapImageTrackerComponent, AxisOrientation) == 0x0216);
static_assert(offsetof(FMagicLeapImageTargetState, TrackingStatus) == 0x0000);
static_assert(offsetof(FMagicLeapImageTargetState, Location) == 0x0004);
static_assert(offsetof(FMagicLeapImageTargetState, Rotation) == 0x0010);
static_assert(offsetof(FMagicLeapImageTargetSettings, ImageTexture) == 0x0000);
static_assert(offsetof(FMagicLeapImageTargetSettings, Name) == 0x0008);
