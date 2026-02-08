
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
#include "LiveLinkInterface.h"

#pragma pack(push, 0x1)

class ULiveLinkMagicLeapHandTrackingSourceFactory;
class UMagicLeapHandTrackingFunctionLibrary;

/// Enum /Script/MagicLeapHandTracking.EMagicLeapGestureTransformSpace
/// Size: 0x01 (1 bytes)
enum class EMagicLeapGestureTransformSpace : uint8_t
{
	EMagicLeapGestureTransformSpace__World                                           = 0,
	EMagicLeapGestureTransformSpace__Hand                                            = 1,
	EMagicLeapGestureTransformSpace__Tracking                                        = 2
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingGestureFilterLevel
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingGestureFilterLevel : uint8_t
{
	EMagicLeapHandTrackingGestureFilterLevel__NoFilter                               = 0,
	EMagicLeapHandTrackingGestureFilterLevel__SlightRobustnessToFlicker              = 1,
	EMagicLeapHandTrackingGestureFilterLevel__MoreRobustnessToFlicker                = 2
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingKeypointFilterLevel
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8_t
{
	EMagicLeapHandTrackingKeypointFilterLevel__NoFilter                              = 0,
	EMagicLeapHandTrackingKeypointFilterLevel__SimpleSmoothing                       = 1,
	EMagicLeapHandTrackingKeypointFilterLevel__PredictiveSmoothing                   = 2
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingGesture
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingGesture : uint8_t
{
	EMagicLeapHandTrackingGesture__Finger                                            = 0,
	EMagicLeapHandTrackingGesture__Fist                                              = 1,
	EMagicLeapHandTrackingGesture__Pinch                                             = 2,
	EMagicLeapHandTrackingGesture__Thumb                                             = 3,
	EMagicLeapHandTrackingGesture__L                                                 = 4,
	EMagicLeapHandTrackingGesture__OpenHand                                          = 5,
	EMagicLeapHandTrackingGesture__OpenHandBack                                      = 5,
	EMagicLeapHandTrackingGesture__Ok                                                = 6,
	EMagicLeapHandTrackingGesture__C                                                 = 7,
	EMagicLeapHandTrackingGesture__NoPose                                            = 8,
	EMagicLeapHandTrackingGesture__NoHand                                            = 9
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingKeypoint
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingKeypoint : uint8_t
{
	EMagicLeapHandTrackingKeypoint__Thumb_Tip                                        = 0,
	EMagicLeapHandTrackingKeypoint__Thumb_IP                                         = 1,
	EMagicLeapHandTrackingKeypoint__Thumb_MCP                                        = 2,
	EMagicLeapHandTrackingKeypoint__Thumb_CMC                                        = 3,
	EMagicLeapHandTrackingKeypoint__Index_Tip                                        = 4,
	EMagicLeapHandTrackingKeypoint__Index_DIP                                        = 5,
	EMagicLeapHandTrackingKeypoint__Index_PIP                                        = 6,
	EMagicLeapHandTrackingKeypoint__Index_MCP                                        = 7,
	EMagicLeapHandTrackingKeypoint__Middle_Tip                                       = 8,
	EMagicLeapHandTrackingKeypoint__Middle_DIP                                       = 9,
	EMagicLeapHandTrackingKeypoint__Middle_PIP                                       = 10,
	EMagicLeapHandTrackingKeypoint__Middle_MCP                                       = 11,
	EMagicLeapHandTrackingKeypoint__Ring_Tip                                         = 12,
	EMagicLeapHandTrackingKeypoint__Ring_DIP                                         = 13,
	EMagicLeapHandTrackingKeypoint__Ring_PIP                                         = 14,
	EMagicLeapHandTrackingKeypoint__Ring_MCP                                         = 15,
	EMagicLeapHandTrackingKeypoint__Pinky_Tip                                        = 16,
	EMagicLeapHandTrackingKeypoint__Pinky_DIP                                        = 17,
	EMagicLeapHandTrackingKeypoint__Pinky_PIP                                        = 18,
	EMagicLeapHandTrackingKeypoint__Pinky_MCP                                        = 19,
	EMagicLeapHandTrackingKeypoint__Wrist_Center                                     = 20,
	EMagicLeapHandTrackingKeypoint__Wrist_Ulnar                                      = 21,
	EMagicLeapHandTrackingKeypoint__Wrist_Radial                                     = 22,
	EMagicLeapHandTrackingKeypoint__Hand_Center                                      = 23
};

/// Class /Script/MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
{ 
public:
};

/// Class /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold
	void SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture, float Confidence) // [0xd6c9a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EMagicLeapHandTrackingGesture, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Gesture, Confidence);
	}
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration
	// bool SetConfiguration(TArray<EMagicLeapHandTrackingGesture>& StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled); // [0xd6c820] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl
	bool IsHoldingControl(EControllerHand Hand) // [0xd6c7a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(EControllerHand);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(Hand);
	}
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold
	float GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture) // [0xd6c720] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef float (*FuncPtr)(EMagicLeapHandTrackingGesture);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(Gesture);
	}
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint
	bool GetMotionSourceForHandKeypoint(EControllerHand Hand, EMagicLeapHandTrackingKeypoint Keypoint, FName& OutMotionSource) // [0xd6c610] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(EControllerHand, EMagicLeapHandTrackingKeypoint, FName&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(Hand, Keypoint, OutMotionSource);
	}
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource
	bool GetMagicLeapHandTrackingLiveLinkSource(FLiveLinkSourceHandle& SourceHandle) // [0xd6c540] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FLiveLinkSourceHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(SourceHandle);
	}
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip
	bool GetHandThumbTip(EControllerHand Hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Secondary) // [0xd6c3e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(EControllerHand, EMagicLeapGestureTransformSpace, FTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(Hand, TransformSpace, Secondary);
	}
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource
	bool GetHandKeypointForMotionSource(FName MotionSource, EMagicLeapHandTrackingKeypoint& OutKeyPoint) // [0xd6c300] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FName, EMagicLeapHandTrackingKeypoint&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(MotionSource, OutKeyPoint);
	}
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip
	bool GetHandIndexFingerTip(EControllerHand Hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Pointer) // [0xd6c1a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(EControllerHand, EMagicLeapGestureTransformSpace, FTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(Hand, TransformSpace, Pointer);
	}
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized
	bool GetHandCenterNormalized(EControllerHand Hand, FVector& HandCenterNormalized) // [0xd6c0d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(EControllerHand, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(Hand, HandCenterNormalized);
	}
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter
	bool GetHandCenter(EControllerHand Hand, FTransform& HandCenter) // [0xd6bfb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(EControllerHand, FTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(Hand, HandCenter);
	}
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform
	bool GetGestureKeypointTransform(EControllerHand Hand, EMagicLeapHandTrackingKeypoint Keypoint, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Transform) // [0xd6bd10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(EControllerHand, EMagicLeapHandTrackingKeypoint, EMagicLeapGestureTransformSpace, FTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(Hand, Keypoint, TransformSpace, Transform);
	}
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints
	// bool GetGestureKeypoints(EControllerHand Hand, TArray<FTransform>& Keypoints);                                           // [0xd6bec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence
	bool GetCurrentGestureConfidence(EControllerHand Hand, float& Confidence) // [0xd6bc30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(EControllerHand, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(Hand, Confidence);
	}
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture
	bool GetCurrentGesture(EControllerHand Hand, EMagicLeapHandTrackingGesture& Gesture) // [0xd6bb50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(EControllerHand, EMagicLeapHandTrackingGesture&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(Hand, Gesture);
	}
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration
	// bool GetConfiguration(TArray<EMagicLeapHandTrackingGesture>& ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel& KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel& GestureFilterLevel, bool& bTrackingEnabled); // [0xd6b9b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(ULiveLinkMagicLeapHandTrackingSourceFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMagicLeapHandTrackingFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
