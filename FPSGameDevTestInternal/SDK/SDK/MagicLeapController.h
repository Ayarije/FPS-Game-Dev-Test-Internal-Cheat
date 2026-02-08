
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "InputCore.h"

#pragma pack(push, 0x1)

class UMagicLeapControllerFunctionLibrary;
class UMagicLeapTouchpadGesturesComponent;

/// Enum /Script/MagicLeapController.EMagicLeapTouchpadGestureDirection
/// Size: 0x01 (1 bytes)
enum class EMagicLeapTouchpadGestureDirection : uint8_t
{
	EMagicLeapTouchpadGestureDirection__None                                         = 0,
	EMagicLeapTouchpadGestureDirection__Up                                           = 1,
	EMagicLeapTouchpadGestureDirection__Down                                         = 2,
	EMagicLeapTouchpadGestureDirection__Left                                         = 3,
	EMagicLeapTouchpadGestureDirection__Right                                        = 4,
	EMagicLeapTouchpadGestureDirection__In                                           = 5,
	EMagicLeapTouchpadGestureDirection__Out                                          = 6,
	EMagicLeapTouchpadGestureDirection__Clockwise                                    = 7,
	EMagicLeapTouchpadGestureDirection__CounterClockwise                             = 8
};

/// Enum /Script/MagicLeapController.EMagicLeapTouchpadGestureType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapTouchpadGestureType : uint8_t
{
	EMagicLeapTouchpadGestureType__None                                              = 0,
	EMagicLeapTouchpadGestureType__Tap                                               = 1,
	EMagicLeapTouchpadGestureType__ForceTapDown                                      = 2,
	EMagicLeapTouchpadGestureType__ForceTapUp                                        = 3,
	EMagicLeapTouchpadGestureType__ForceDwell                                        = 4,
	EMagicLeapTouchpadGestureType__SecondForceDown                                   = 5,
	EMagicLeapTouchpadGestureType__LongHold                                          = 6,
	EMagicLeapTouchpadGestureType__RadialScroll                                      = 7,
	EMagicLeapTouchpadGestureType__Swipe                                             = 8,
	EMagicLeapTouchpadGestureType__Scroll                                            = 9,
	EMagicLeapTouchpadGestureType__Pinch                                             = 10
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerTrackingMode
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerTrackingMode : uint8_t
{
	EMagicLeapControllerTrackingMode__InputService                                   = 0,
	EMagicLeapControllerTrackingMode__CoordinateFrameUID                             = 1
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerHapticIntensity
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerHapticIntensity : uint8_t
{
	EMagicLeapControllerHapticIntensity__Low                                         = 0,
	EMagicLeapControllerHapticIntensity__Medium                                      = 1,
	EMagicLeapControllerHapticIntensity__High                                        = 2
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerHapticPattern
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerHapticPattern : uint8_t
{
	EMagicLeapControllerHapticPattern__None                                          = 0,
	EMagicLeapControllerHapticPattern__Click                                         = 1,
	EMagicLeapControllerHapticPattern__Bump                                          = 2,
	EMagicLeapControllerHapticPattern__DoubleClick                                   = 3,
	EMagicLeapControllerHapticPattern__Buzz                                          = 4,
	EMagicLeapControllerHapticPattern__Tick                                          = 5,
	EMagicLeapControllerHapticPattern__ForceDown                                     = 6,
	EMagicLeapControllerHapticPattern__ForceUp                                       = 7,
	EMagicLeapControllerHapticPattern__ForceDwell                                    = 8,
	EMagicLeapControllerHapticPattern__SecondForceDown                               = 9
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDSpeed
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerLEDSpeed : uint8_t
{
	EMagicLeapControllerLEDSpeed__Slow                                               = 0,
	EMagicLeapControllerLEDSpeed__Medium                                             = 1,
	EMagicLeapControllerLEDSpeed__Fast                                               = 2
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDColor
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerLEDColor : uint8_t
{
	EMagicLeapControllerLEDColor__BrightMissionRed                                   = 0,
	EMagicLeapControllerLEDColor__PastelMissionRed                                   = 1,
	EMagicLeapControllerLEDColor__BrightFloridaOrange                                = 2,
	EMagicLeapControllerLEDColor__PastelFloridaOrange                                = 3,
	EMagicLeapControllerLEDColor__BrightLunaYellow                                   = 4,
	EMagicLeapControllerLEDColor__PastelLunaYellow                                   = 5,
	EMagicLeapControllerLEDColor__BrightNebulaPink                                   = 6,
	EMagicLeapControllerLEDColor__PastelNebulaPink                                   = 7,
	EMagicLeapControllerLEDColor__BrightCosmicPurple                                 = 8,
	EMagicLeapControllerLEDColor__PastelCosmicPurple                                 = 9,
	EMagicLeapControllerLEDColor__BrightMysticBlue                                   = 10,
	EMagicLeapControllerLEDColor__PastelMysticBlue                                   = 11,
	EMagicLeapControllerLEDColor__BrightCelestialBlue                                = 12,
	EMagicLeapControllerLEDColor__PastelCelestialBlue                                = 13,
	EMagicLeapControllerLEDColor__BrightShaggleGreen                                 = 14,
	EMagicLeapControllerLEDColor__PastelShaggleGreen                                 = 15
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDEffect
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerLEDEffect : uint8_t
{
	EMagicLeapControllerLEDEffect__RotateCW                                          = 0,
	EMagicLeapControllerLEDEffect__RotateCCW                                         = 1,
	EMagicLeapControllerLEDEffect__Pulse                                             = 2,
	EMagicLeapControllerLEDEffect__PaintCW                                           = 3,
	EMagicLeapControllerLEDEffect__PaintCCW                                          = 4,
	EMagicLeapControllerLEDEffect__Blink                                             = 5
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDPattern
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerLEDPattern : uint8_t
{
	EMagicLeapControllerLEDPattern__None                                             = 0,
	EMagicLeapControllerLEDPattern__Clock01                                          = 1,
	EMagicLeapControllerLEDPattern__Clock02                                          = 2,
	EMagicLeapControllerLEDPattern__Clock03                                          = 3,
	EMagicLeapControllerLEDPattern__Clock04                                          = 4,
	EMagicLeapControllerLEDPattern__Clock05                                          = 5,
	EMagicLeapControllerLEDPattern__Clock06                                          = 6,
	EMagicLeapControllerLEDPattern__Clock07                                          = 7,
	EMagicLeapControllerLEDPattern__Clock08                                          = 8,
	EMagicLeapControllerLEDPattern__Clock09                                          = 9,
	EMagicLeapControllerLEDPattern__Clock10                                          = 10,
	EMagicLeapControllerLEDPattern__Clock11                                          = 11,
	EMagicLeapControllerLEDPattern__Clock12                                          = 12,
	EMagicLeapControllerLEDPattern__Clock01_07                                       = 13,
	EMagicLeapControllerLEDPattern__Clock02_08                                       = 14,
	EMagicLeapControllerLEDPattern__Clock03_09                                       = 15,
	EMagicLeapControllerLEDPattern__Clock0417                                        = 16,
	EMagicLeapControllerLEDPattern__Clock0518                                        = 17,
	EMagicLeapControllerLEDPattern__Clock0619                                        = 18
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerType : uint8_t
{
	EMagicLeapControllerType__None                                                   = 0,
	EMagicLeapControllerType__Device                                                 = 1,
	EMagicLeapControllerType__MobileApp                                              = 2
};

/// Struct /Script/MagicLeapController.MagicLeapTouchpadGesture
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FMagicLeapTouchpadGesture
{ 
	EControllerHand                                    Hand;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              MotionSource;                                               // 0x0004   (0x0008)  
	EMagicLeapTouchpadGestureType                      Type;                                                       // 0x000C   (0x0001)  
	EMagicLeapTouchpadGestureDirection                 Direction;                                                  // 0x000D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	FVector                                            PositionAndForce;                                           // 0x0010   (0x000C)  
	float                                              Speed;                                                      // 0x001C   (0x0004)  
	float                                              Distance;                                                   // 0x0020   (0x0004)  
	float                                              FingerGap;                                                  // 0x0024   (0x0004)  
	float                                              Radius;                                                     // 0x0028   (0x0004)  
	float                                              Angle;                                                      // 0x002C   (0x0004)  
};

/// Class /Script/MagicLeapController.MagicLeapControllerFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
	bool SetMotionSourceForHand(EControllerHand Hand, FName MotionSource) // [0xd5f5d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(EControllerHand, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Hand, MotionSource);
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
	bool SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode) // [0xd5ec50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(EMagicLeapControllerTrackingMode);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(TrackingMode);
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
	bool PlayLEDPattern(FName MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec) // [0xd5f480] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FName, EMagicLeapControllerLEDPattern, EMagicLeapControllerLEDColor, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(MotionSource, LEDPattern, LEDColor, DurationInSec);
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
	bool PlayLEDEffect(FName MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec) // [0xd5f2b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FName, EMagicLeapControllerLEDEffect, EMagicLeapControllerLEDSpeed, EMagicLeapControllerLEDPattern, EMagicLeapControllerLEDColor, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(MotionSource, LEDEffect, LEDSpeed, LEDPattern, LEDColor, DurationInSec);
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
	bool PlayHapticPattern(FName MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity) // [0xd5f1b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FName, EMagicLeapControllerHapticPattern, EMagicLeapControllerHapticIntensity);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(MotionSource, HapticPattern, Intensity);
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
	bool PlayControllerLEDEffect(EControllerHand Hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec) // [0xd5efe0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(EControllerHand, EMagicLeapControllerLEDEffect, EMagicLeapControllerLEDSpeed, EMagicLeapControllerLEDPattern, EMagicLeapControllerLEDColor, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(Hand, LEDEffect, LEDSpeed, LEDPattern, LEDColor, DurationInSec);
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
	bool PlayControllerLED(EControllerHand Hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec) // [0xd5ee90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(EControllerHand, EMagicLeapControllerLEDPattern, EMagicLeapControllerLEDColor, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(Hand, LEDPattern, LEDColor, DurationInSec);
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
	bool PlayControllerHapticFeedback(EControllerHand Hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity) // [0xd5ed80] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(EControllerHand, EMagicLeapControllerHapticPattern, EMagicLeapControllerHapticIntensity);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(Hand, HapticPattern, Intensity);
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
	int32_t MaxSupportedMagicLeapControllers() // [0xd4ff30] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
	bool IsMLControllerConnected(FName MotionSource) // [0xd5eb30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(MotionSource);
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
	void InvertControllerMapping() // [0xd5ed60] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func();
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
	FName GetMotionSourceForHand(EControllerHand Hand) // [0xd5ecd0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FName (*FuncPtr)(EControllerHand);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(Hand);
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
	EMagicLeapControllerType GetMLControllerType(EControllerHand Hand) // [0xd5ec50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef EMagicLeapControllerType (*FuncPtr)(EControllerHand);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(Hand);
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
	EControllerHand GetHandForMotionSource(FName MotionSource) // [0xd5ebc0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef EControllerHand (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(MotionSource);
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
	EMagicLeapControllerType GetControllerType(FName MotionSource) // [0xd5eb30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef EMagicLeapControllerType (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(MotionSource);
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
	EMagicLeapControllerTrackingMode GetControllerTrackingMode() // [0xd5eb00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef EMagicLeapControllerTrackingMode (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func();
	}
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
	bool GetControllerMapping(int32_t ControllerIndex, EControllerHand& Hand) // [0xd5ea30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t, EControllerHand&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func(ControllerIndex, Hand);
	}
};

/// Class /Script/MagicLeapController.MagicLeapTouchpadGesturesComponent
/// Size: 0x0140 (320 bytes) (0x0000B0 - 0x000140) align 8 MaxSize: 0x0140
class UMagicLeapTouchpadGesturesComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B0   (0x0008)  MISSED
	SDK_UNDEFINED(16,633) /* FMulticastInlineDelegate */ __um(OnTouchpadGestureStart);                             // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,634) /* FMulticastInlineDelegate */ __um(OnTouchpadGestureContinue);                          // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,635) /* FMulticastInlineDelegate */ __um(OnTouchpadGestureEnd);                               // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x58];                                      // 0x00E8   (0x0058)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapControllerFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMagicLeapTouchpadGesturesComponent) == 0x0140); // 320 bytes (0x0000B0 - 0x000140)
static_assert(sizeof(FMagicLeapTouchpadGesture) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FMagicLeapTouchpadGesture, Hand) == 0x0000);
static_assert(offsetof(FMagicLeapTouchpadGesture, MotionSource) == 0x0004);
static_assert(offsetof(FMagicLeapTouchpadGesture, Type) == 0x000C);
static_assert(offsetof(FMagicLeapTouchpadGesture, Direction) == 0x000D);
static_assert(offsetof(FMagicLeapTouchpadGesture, PositionAndForce) == 0x0010);
