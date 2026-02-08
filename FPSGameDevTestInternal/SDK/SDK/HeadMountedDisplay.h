
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

class UAsyncTask_LoadXRDeviceVisComponent;
class UHandKeypointConversion;
class UHeadMountedDisplayFunctionLibrary;
class UMotionControllerComponent;
class UMotionTrackedDeviceFunctionLibrary;
class UVRNotificationsComponent;
class UXRAssetFunctionLibrary;
class UXRLoadingScreenFunctionLibrary;

/// Enum /Script/HeadMountedDisplay.EXRVisualType
/// Size: 0x01 (1 bytes)
enum class EXRVisualType : uint8_t
{
	EXRVisualType__Controller                                                        = 0,
	EXRVisualType__Hand                                                              = 1
};

/// Enum /Script/HeadMountedDisplay.EHandKeypoint
/// Size: 0x01 (1 bytes)
enum class EHandKeypoint : uint8_t
{
	EHandKeypoint__Palm                                                              = 0,
	EHandKeypoint__Wrist                                                             = 1,
	EHandKeypoint__ThumbMetacarpal                                                   = 2,
	EHandKeypoint__ThumbProximal                                                     = 3,
	EHandKeypoint__ThumbDistal                                                       = 4,
	EHandKeypoint__ThumbTip                                                          = 5,
	EHandKeypoint__IndexMetacarpal                                                   = 6,
	EHandKeypoint__IndexProximal                                                     = 7,
	EHandKeypoint__IndexIntermediate                                                 = 8,
	EHandKeypoint__IndexDistal                                                       = 9,
	EHandKeypoint__IndexTip                                                          = 10,
	EHandKeypoint__MiddleMetacarpal                                                  = 11,
	EHandKeypoint__MiddleProximal                                                    = 12,
	EHandKeypoint__MiddleIntermediate                                                = 13,
	EHandKeypoint__MiddleDistal                                                      = 14,
	EHandKeypoint__MiddleTip                                                         = 15,
	EHandKeypoint__RingMetacarpal                                                    = 16,
	EHandKeypoint__RingProximal                                                      = 17,
	EHandKeypoint__RingIntermediate                                                  = 18,
	EHandKeypoint__RingDistal                                                        = 19,
	EHandKeypoint__RingTip                                                           = 20,
	EHandKeypoint__LittleMetacarpal                                                  = 21,
	EHandKeypoint__LittleProximal                                                    = 22,
	EHandKeypoint__LittleIntermediate                                                = 23,
	EHandKeypoint__LittleDistal                                                      = 24,
	EHandKeypoint__LittleTip                                                         = 25
};

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x01 (1 bytes)
enum class EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay                                         = 0,
	EXRTrackedDeviceType__Controller                                                 = 1,
	EXRTrackedDeviceType__TrackingReference                                          = 2,
	EXRTrackedDeviceType__Other                                                      = 3,
	EXRTrackedDeviceType__Invalid                                                    = 254,
	EXRTrackedDeviceType__Any                                                        = 255
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x01 (1 bytes)
enum class ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled                                                   = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed                                       = 1,
	ESpectatorScreenMode__Undistorted                                                = 2,
	ESpectatorScreenMode__Distorted                                                  = 3,
	ESpectatorScreenMode__SingleEye                                                  = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill                                     = 5,
	ESpectatorScreenMode__Texture                                                    = 6,
	ESpectatorScreenMode__TexturePlusEye                                             = 7
};

/// Enum /Script/HeadMountedDisplay.EXRSystemFlags
/// Size: 0x01 (1 bytes)
enum class EXRSystemFlags : uint8_t
{
	EXRSystemFlags__NoFlags                                                          = 0,
	EXRSystemFlags__IsAR                                                             = 1,
	EXRSystemFlags__IsTablet                                                         = 2,
	EXRSystemFlags__IsHeadMounted                                                    = 4,
	EXRSystemFlags__SupportsHandTracking                                             = 8
};

/// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
/// Size: 0x01 (1 bytes)
enum class EXRDeviceConnectionResult : uint8_t
{
	EXRDeviceConnectionResult__NoTrackingSystem                                      = 0,
	EXRDeviceConnectionResult__FeatureNotSupported                                   = 1,
	EXRDeviceConnectionResult__NoValidViewport                                       = 2,
	EXRDeviceConnectionResult__MiscFailure                                           = 3,
	EXRDeviceConnectionResult__Success                                               = 4
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x01 (1 bytes)
enum class EHMDWornState : uint8_t
{
	EHMDWornState__Unknown                                                           = 0,
	EHMDWornState__Worn                                                              = 1,
	EHMDWornState__NotWorn                                                           = 2
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x01 (1 bytes)
enum class EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor                                                        = 0,
	EHMDTrackingOrigin__Eye                                                          = 1,
	EHMDTrackingOrigin__Stage                                                        = 2
};

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x01 (1 bytes)
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation                                             = 0,
	EOrientPositionSelector__Position                                                = 1,
	EOrientPositionSelector__OrientationAndPosition                                  = 2
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x01 (1 bytes)
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked                                                      = 0,
	ETrackingStatus__InertialOnly                                                    = 1,
	ETrackingStatus__Tracked                                                         = 2
};

/// Enum /Script/HeadMountedDisplay.ESpatialInputGestureAxis
/// Size: 0x01 (1 bytes)
enum class ESpatialInputGestureAxis : uint8_t
{
	ESpatialInputGestureAxis__None                                                   = 0,
	ESpatialInputGestureAxis__Manipulation                                           = 1,
	ESpatialInputGestureAxis__Navigation                                             = 2,
	ESpatialInputGestureAxis__NavigationRails                                        = 3
};

/// Struct /Script/HeadMountedDisplay.XRMotionControllerData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FXRMotionControllerData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x0008)  
	FGuid                                              ApplicationInstanceID;                                      // 0x000C   (0x0010)  
	EXRVisualType                                      DeviceVisualType;                                           // 0x001C   (0x0001)  
	EControllerHand                                    HandIndex;                                                  // 0x001D   (0x0001)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x001E   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x001F   (0x0001)  MISSED
	FVector                                            GripPosition;                                               // 0x0020   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              GripRotation;                                               // 0x0030   (0x0010)  
	FVector                                            AimPosition;                                                // 0x0040   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FQuat                                              AimRotation;                                                // 0x0050   (0x0010)  
	TArray<FVector>                                    HandKeyPositions;                                           // 0x0060   (0x0010)  
	TArray<FQuat>                                      HandKeyRotations;                                           // 0x0070   (0x0010)  
	TArray<float>                                      HandKeyRadii;                                               // 0x0080   (0x0010)  
	bool                                               bIsGrasped;                                                 // 0x0090   (0x0001)  
	unsigned char                                      UnknownData04_7[0xF];                                       // 0x0091   (0x000F)  MISSED
};

/// Struct /Script/HeadMountedDisplay.XRHMDData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FXRHMDData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x0008)  
	FGuid                                              ApplicationInstanceID;                                      // 0x000C   (0x0010)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FVector                                            Position;                                                   // 0x0020   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              Rotation;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FXRDeviceId
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x0008)  
	int32_t                                            DeviceID;                                                   // 0x0008   (0x0004)  
};

/// Struct /Script/HeadMountedDisplay.XRGestureConfig
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 1 MaxSize: 0x0006
struct FXRGestureConfig
{ 
	bool                                               bTap;                                                       // 0x0000   (0x0001)  
	bool                                               bHold;                                                      // 0x0001   (0x0001)  
	ESpatialInputGestureAxis                           AxisGesture;                                                // 0x0002   (0x0001)  
	bool                                               bNavigationAxisX;                                           // 0x0003   (0x0001)  
	bool                                               bNavigationAxisY;                                           // 0x0004   (0x0001)  
	bool                                               bNavigationAxisZ;                                           // 0x0005   (0x0001)  
};

/// Class /Script/HeadMountedDisplay.VRNotificationsComponent
/// Size: 0x0140 (320 bytes) (0x0000B0 - 0x000140) align 8 MaxSize: 0x0140
class UVRNotificationsComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,561) /* FMulticastInlineDelegate */ __um(HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate); // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,562) /* FMulticastInlineDelegate */ __um(HMDTrackingInitializedDelegate);                     // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,563) /* FMulticastInlineDelegate */ __um(HMDRecenteredDelegate);                              // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,564) /* FMulticastInlineDelegate */ __um(HMDLostDelegate);                                    // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,565) /* FMulticastInlineDelegate */ __um(HMDReconnectedDelegate);                             // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,566) /* FMulticastInlineDelegate */ __um(HMDConnectCanceledDelegate);                         // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,567) /* FMulticastInlineDelegate */ __um(HMDPutOnHeadDelegate);                               // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,568) /* FMulticastInlineDelegate */ __um(HMDRemovedFromHeadDelegate);                         // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,569) /* FMulticastInlineDelegate */ __um(VRControllerRecenteredDelegate);                     // 0x0130   (0x0010)  
};

/// Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
	void UpdateExternalTrackingHMDPosition(FTransform& ExternalTrackingTransform) // [0x1fd50c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(ExternalTrackingTransform);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
	// void SetXRTimedInputActionDelegate(FName& ActionName, FDelegateProperty& InDelegate);                                    // [0x1fd4fa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
	// void SetXRDisconnectDelegate(FDelegateProperty& InDisconnectedDelegate);                                                 // [0x1fd4f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
	void SetWorldToMetersScale(UObject* WorldContext, float NewScale) // [0x1fd4e40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(WorldContext, NewScale);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
	// void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);                                                          // [0x1fd4d50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
	void SetSpectatorScreenTexture(UTexture* InTexture) // [0x1fd4c40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UTexture*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(InTexture);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
	void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha) // [0x1fd4a30] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FVector2D, FVector2D, FVector2D, FVector2D, bool, bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(EyeRectMin, EyeRectMax, TextureRectMin, TextureRectMax, bDrawEyeFirst, bClearBlack, bUseAlpha);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
	void SetSpectatorScreenMode(ESpectatorScreenMode Mode) // [0x1fd49c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ESpectatorScreenMode);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(Mode);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
	void SetClippingPlanes(float Near, float Far) // [0x1fd4510] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(Near, Far);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
	// void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);                               // [0x1fd43c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
	bool IsSpectatorScreenModeControllable() // [0x1fd4390] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
	bool IsInLowPersistenceMode() // [0xcfc450] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
	bool IsHeadMountedDisplayEnabled() // [0x1fd4030] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
	bool IsHeadMountedDisplayConnected() // [0x1fd4000] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
	bool IsDeviceTracking(FXRDeviceId& XRDeviceId) // [0x1fd3f60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FXRDeviceId&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(XRDeviceId);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
	bool HasValidTrackingPosition() // [0x1fd3f10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
	int32_t GetXRSystemFlags() // [0x1fd3ee0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
	float GetWorldToMetersScale(UObject* WorldContext) // [0x1fd3e50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(WorldContext);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
	void GetVRFocusState(bool& bUseFocus, bool& bHasFocus) // [0x1fd3cf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(bool&, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		func(bUseFocus, bHasFocus);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
	FString GetVersionString() // [0x1fd3dd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
	FTransform GetTrackingToWorldTransform(UObject* WorldContext) // [0x1fd3c30] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef FTransform (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(WorldContext);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
	void GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index) // [0x1fd3850] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(FVector&, FRotator&, float&, float&, float&, float&, float&, float&, float&, bool&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		func(Origin, Rotation, LeftFOV, RightFOV, TopFOV, BottomFOV, Distance, NearPlane, FarPlane, IsActive, Index);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
	// TEnumAsByte<EHMDTrackingOrigin> GetTrackingOrigin();                                                                     // [0x1fd3810] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
	float GetScreenPercentage() // [0x1fd37e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
	void GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane) // [0x1fd3570] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(FVector&, FRotator&, float&, float&, float&, float&, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		func(CameraOrigin, CameraRotation, HFOV, VFOV, CameraDistance, NearPlane, FarPlane);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
	// FVector2D GetPlayAreaBounds(TEnumAsByte<EHMDTrackingOrigin> Origin);                                                     // [0x1fd34e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
	float GetPixelDensity() // [0x1fd34b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
	void GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition) // [0x1fd3300] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(FRotator&, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		func(DeviceRotation, DevicePosition);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
	int32_t GetNumOfTrackingSensors() // [0x1fd32d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
	void GetMotionControllerData(UObject* WorldContext, EControllerHand Hand, FXRMotionControllerData& MotionControllerData) // [0x1fd3120] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, EControllerHand, FXRMotionControllerData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		func(WorldContext, Hand, MotionControllerData);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
	// TEnumAsByte<EHMDWornState> GetHMDWornState();                                                                            // [0x1fd2fd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
	FName GetHMDDeviceName() // [0x1fd2f90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FName (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
	void GetHMDData(UObject* WorldContext, FXRHMDData& HMDData) // [0x1fd2ea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, FXRHMDData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		func(WorldContext, HMDData);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
	void GetDeviceWorldPose(UObject* WorldContext, FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position) // [0x1fd2c70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, FXRDeviceId&, bool&, FRotator&, bool&, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		func(WorldContext, XRDeviceId, bIsTracked, Orientation, bHasPositionalTracking, Position);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
	void GetDevicePose(FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position) // [0x1fd2a80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FXRDeviceId&, bool&, FRotator&, bool&, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		func(XRDeviceId, bIsTracked, Orientation, bHasPositionalTracking, Position);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
	bool GetControllerTransformForTime(UObject* WorldContext, int32_t ControllerIndex, FName MotionSource, FTimespan Time, bool& bTimeWasUsed, FRotator& Orientation, FVector& Position, bool& bProvidedLinearVelocity, FVector& LinearVelocity, bool& bProvidedAngularVelocity, FVector& AngularVelocityRadPerSec) // [0x1fd2700] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UObject*, int32_t, FName, FTimespan, bool&, FRotator&, FVector&, bool&, FVector&, bool&, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		return func(WorldContext, ControllerIndex, MotionSource, Time, bTimeWasUsed, Orientation, Position, bProvidedLinearVelocity, LinearVelocity, bProvidedAngularVelocity, AngularVelocityRadPerSec);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
	// TArray<FXRDeviceId> EnumerateTrackedDevices(FName SystemId, EXRTrackedDeviceType DeviceType);                            // [0x1fd25b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
	void EnableLowPersistenceMode(bool bEnable) // [0x1fd2290] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		func(bEnable);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
	bool EnableHMD(bool bEnable) // [0x1fd2200] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		return func(bEnable);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice
	void DisconnectRemoteXRDevice() // [0x1fd21e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[39]);
		func();
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
	// TEnumAsByte<EXRDeviceConnectionResult> ConnectRemoteXRDevice(FString Ipaddress, int32_t BitRate);                        // [0x1fd1de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
	bool ConfigureGestures(FXRGestureConfig& GestureConfig) // [0x1fd1d40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FXRGestureConfig&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[41]);
		return func(GestureConfig);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
	void ClearXRTimedInputActionDelegate(FName& ActionPath) // [0x1fd1cc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[42]);
		func(ActionPath);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
	void CalibrateExternalTrackingToHMD(FTransform& ExternalTrackingTransform) // [0x1fd1bd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[43]);
		func(ExternalTrackingTransform);
	}
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey
	void BreakKey(FKey InKey, FString& InteractionProfile, EControllerHand& Hand, FName& MotionSource, FString& Indentifier, FString& Component) // [0x1fd1920] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(FKey, FString&, EControllerHand&, FName&, FString&, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[44]);
		func(InKey, InteractionProfile, Hand, MotionSource, Indentifier, Component);
	}
};

/// Class /Script/HeadMountedDisplay.HandKeypointConversion
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
	int32_t Conv_HandKeypointToInt32(EHandKeypoint Input) // [0x1fd1ec0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)(EHandKeypoint);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Input);
	}
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x0510 (1296 bytes) (0x000450 - 0x000510) align 16 MaxSize: 0x0510
class UMotionControllerComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            PlayerIndex;                                                // 0x0450   (0x0004)  
	EControllerHand                                    Hand;                                                       // 0x0454   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0455   (0x0003)  MISSED
	FName                                              MotionSource;                                               // 0x0458   (0x0008)  
	bool                                               bDisableLowLatencyUpdate : 1;                               // 0x0460:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0461   (0x0003)  MISSED
	ETrackingStatus                                    CurrentTrackingStatus;                                      // 0x0464   (0x0001)  
	bool                                               bDisplayDeviceModel;                                        // 0x0465   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0466   (0x0002)  MISSED
	FName                                              DisplayModelSource;                                         // 0x0468   (0x0008)  
	class UStaticMesh*                                 CustomDisplayMesh;                                          // 0x0470   (0x0008)  
	TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                               // 0x0478   (0x0010)  
	unsigned char                                      UnknownData03_6[0x68];                                      // 0x0488   (0x0068)  MISSED
	class UPrimitiveComponent*                         DisplayComponent;                                           // 0x04F0   (0x0008)  
	unsigned char                                      UnknownData04_7[0x18];                                      // 0x04F8   (0x0018)  MISSED


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	void SetTrackingSource(EControllerHand NewSource) // [0x1fd4dc0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EControllerHand);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(NewSource);
	}
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	void SetTrackingMotionSource(FName NewSource) // [0x1fd4cc0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewSource);
	}
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	void SetShowDeviceModel(bool bShowControllerModel) // [0x1fd4930] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(bShowControllerModel);
	}
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	void SetDisplayModelSource(FName NewDisplayModelSource) // [0x1fd4660] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(NewDisplayModelSource);
	}
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	void SetCustomDisplayMesh(UStaticMesh* NewDisplayMesh) // [0x1fd45d0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UStaticMesh*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(NewDisplayMesh);
	}
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	void SetAssociatedPlayerIndex(int32_t NewPlayer) // [0x1fd4480] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(NewPlayer);
	}
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	void OnMotionControllerUpdated() // [0x12295a0] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func();
	}
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked
	bool IsTracked() // [0x1f8a820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	EControllerHand GetTrackingSource() // [0x1fd3c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EControllerHand (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	float GetParameterValue(FName InName, bool& bValueFound) // [0x1fd33d0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	{
		typedef float (*FuncPtr)(FName, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(InName, bValueFound);
	}
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound) // [0x1fd3000] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef FVector (*FuncPtr)(int32_t, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(jointIndex, bValueFound);
	}
};

/// Class /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable) // [0x1fd46f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Enable);
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
	bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, FName SourceName) // [0x1fd42c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(int32_t, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(PlayerIndex, SourceName);
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
	bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, EControllerHand Hand) // [0x1fd41f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(int32_t, EControllerHand);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(PlayerIndex, Hand);
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
	bool IsMotionTrackingEnabledForComponent(UMotionControllerComponent* MotionControllerComponent) // [0x1fd4160] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(UMotionControllerComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(MotionControllerComponent);
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
	bool IsMotionTrackedDeviceCountManagementNecessary() // [0x1fd4130] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
	bool IsMotionSourceTracking(int32_t PlayerIndex, FName SourceName) // [0x1fd4060] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(PlayerIndex, SourceName);
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
	int32_t GetMotionTrackingEnabledControllerCount() // [0x1fd32a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
	int32_t GetMaximumMotionTrackedControllerCount() // [0x1fd30f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
	FName GetActiveTrackingSystemName() // [0x1fd26c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FName (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
	// TArray<FName> EnumerateMotionSources();                                                                                  // [0x1fd2530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
	bool EnableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName) // [0x1fd2460] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(PlayerIndex, SourceName);
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
	bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand) // [0x1fd2390] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t, EControllerHand);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(PlayerIndex, Hand);
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
	bool EnableMotionTrackingForComponent(UMotionControllerComponent* MotionControllerComponent) // [0x1fd2300] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMotionControllerComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(MotionControllerComponent);
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
	void DisableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName) // [0x1fd2120] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(PlayerIndex, SourceName);
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
	void DisableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand) // [0x1fd2060] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, EControllerHand);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func(PlayerIndex, Hand);
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
	void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex) // [0x1fd1fe0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func(PlayerIndex);
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
	void DisableMotionTrackingOfAllControllers() // [0x1fd1fc0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func();
	}
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
	void DisableMotionTrackingForComponent(UMotionControllerComponent* MotionControllerComponent) // [0x1fd1f40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMotionControllerComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		func(MotionControllerComponent);
	}
};

/// Class /Script/HeadMountedDisplay.XRAssetFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
	UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId) // [0x1fd16e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef class UPrimitiveComponent* (*FuncPtr)(AActor*, FName, FName, bool, FTransform&, FXRDeviceId&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Target, SystemName, DeviceName, bManualAttachment, RelativeTransform, XRDeviceId);
	}
	// Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
	UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform) // [0x1fd1070] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef class UPrimitiveComponent* (*FuncPtr)(AActor*, FXRDeviceId&, bool, FTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Target, XRDeviceId, bManualAttachment, RelativeTransform);
	}
};

/// Class /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,570) /* FMulticastInlineDelegate */ __um(OnModelLoaded);                                      // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,571) /* FMulticastInlineDelegate */ __um(OnLoadFailure);                                      // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED
	class UPrimitiveComponent*                         SpawnedComponent;                                           // 0x0058   (0x0008)  


	/// Functions
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
	UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, UPrimitiveComponent*& NewComponent) // [0x1fd1440] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef class UAsyncTask_LoadXRDeviceVisComponent* (*FuncPtr)(AActor*, FName, FName, bool, FTransform&, FXRDeviceId&, UPrimitiveComponent*&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Target, SystemName, DeviceName, bManualAttachment, RelativeTransform, XRDeviceId, NewComponent);
	}
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
	UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform, UPrimitiveComponent*& NewComponent) // [0x1fd0e40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef class UAsyncTask_LoadXRDeviceVisComponent* (*FuncPtr)(AActor*, FXRDeviceId&, bool, FTransform&, UPrimitiveComponent*&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Target, XRDeviceId, bManualAttachment, RelativeTransform, NewComponent);
	}
};

/// Class /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
	void ShowLoadingScreen() // [0x1fd50a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
	void SetLoadingScreen(UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet) // [0x1fd4770] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UTexture*, FVector2D, FVector, bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Texture, Scale, Offset, bShowLoadingMovie, bShowOnSet);
	}
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
	void HideLoadingScreen() // [0x1fd3f40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
	void ClearLoadingScreenSplashes() // [0x1fd1ca0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
	void AddLoadingScreenSplash(UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd) // [0x1fd1240] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UTexture*, FVector, FRotator, FVector2D, FRotator, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Texture, Translation, Rotation, Size, DeltaRotation, bClearBeforeAdd);
	}
};

#pragma pack(pop)


static_assert(sizeof(UVRNotificationsComponent) == 0x0140); // 320 bytes (0x0000B0 - 0x000140)
static_assert(sizeof(UHeadMountedDisplayFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UHandKeypointConversion) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMotionControllerComponent) == 0x0510); // 1296 bytes (0x000450 - 0x000510)
static_assert(sizeof(UMotionTrackedDeviceFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UXRAssetFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAsyncTask_LoadXRDeviceVisComponent) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UXRLoadingScreenFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FXRMotionControllerData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FXRHMDData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FXRDeviceId) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FXRGestureConfig) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(offsetof(UMotionControllerComponent, Hand) == 0x0454);
static_assert(offsetof(UMotionControllerComponent, MotionSource) == 0x0458);
static_assert(offsetof(UMotionControllerComponent, CurrentTrackingStatus) == 0x0464);
static_assert(offsetof(UMotionControllerComponent, DisplayModelSource) == 0x0468);
static_assert(offsetof(UMotionControllerComponent, CustomDisplayMesh) == 0x0470);
static_assert(offsetof(UMotionControllerComponent, DisplayMeshMaterialOverrides) == 0x0478);
static_assert(offsetof(UMotionControllerComponent, DisplayComponent) == 0x04F0);
static_assert(offsetof(UAsyncTask_LoadXRDeviceVisComponent, SpawnedComponent) == 0x0058);
static_assert(offsetof(FXRMotionControllerData, DeviceName) == 0x0004);
static_assert(offsetof(FXRMotionControllerData, ApplicationInstanceID) == 0x000C);
static_assert(offsetof(FXRMotionControllerData, DeviceVisualType) == 0x001C);
static_assert(offsetof(FXRMotionControllerData, HandIndex) == 0x001D);
static_assert(offsetof(FXRMotionControllerData, TrackingStatus) == 0x001E);
static_assert(offsetof(FXRMotionControllerData, GripPosition) == 0x0020);
static_assert(offsetof(FXRMotionControllerData, GripRotation) == 0x0030);
static_assert(offsetof(FXRMotionControllerData, AimPosition) == 0x0040);
static_assert(offsetof(FXRMotionControllerData, AimRotation) == 0x0050);
static_assert(offsetof(FXRMotionControllerData, HandKeyPositions) == 0x0060);
static_assert(offsetof(FXRMotionControllerData, HandKeyRotations) == 0x0070);
static_assert(offsetof(FXRMotionControllerData, HandKeyRadii) == 0x0080);
static_assert(offsetof(FXRHMDData, DeviceName) == 0x0004);
static_assert(offsetof(FXRHMDData, ApplicationInstanceID) == 0x000C);
static_assert(offsetof(FXRHMDData, TrackingStatus) == 0x001C);
static_assert(offsetof(FXRHMDData, Position) == 0x0020);
static_assert(offsetof(FXRHMDData, Rotation) == 0x0030);
static_assert(offsetof(FXRDeviceId, SystemName) == 0x0000);
static_assert(offsetof(FXRGestureConfig, AxisGesture) == 0x0002);
