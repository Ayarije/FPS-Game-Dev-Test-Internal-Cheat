
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

class UAppleImageInterface;
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy;

/// Enum /Script/AppleImageUtils.EAppleTextureType
/// Size: 0x01 (1 bytes)
enum class EAppleTextureType : uint8_t
{
	EAppleTextureType__Unknown                                                       = 0,
	EAppleTextureType__Image                                                         = 1,
	EAppleTextureType__PixelBuffer                                                   = 2,
	EAppleTextureType__Surface                                                       = 3,
	EAppleTextureType__MetalTexture                                                  = 4
};

/// Enum /Script/AppleImageUtils.ETextureRotationDirection
/// Size: 0x01 (1 bytes)
enum class ETextureRotationDirection : uint8_t
{
	ETextureRotationDirection__None                                                  = 0,
	ETextureRotationDirection__Left                                                  = 1,
	ETextureRotationDirection__Right                                                 = 2,
	ETextureRotationDirection__Down                                                  = 3,
	ETextureRotationDirection__LeftMirrored                                          = 4,
	ETextureRotationDirection__RightMirrored                                         = 5,
	ETextureRotationDirection__DownMirrored                                          = 6,
	ETextureRotationDirection__UpMirrored                                            = 7
};

/// Struct /Script/AppleImageUtils.AppleImageUtilsImageConversionResult
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAppleImageUtilsImageConversionResult
{ 
	FString                                            Error;                                                      // 0x0000   (0x0010)  
	TArray<char>                                       ImageData;                                                  // 0x0010   (0x0010)  
};

/// Class /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	SDK_UNDEFINED(16,285) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,286) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0050   (0x0010)  MISSED
	FAppleImageUtilsImageConversionResult              ConversionResult;                                           // 0x0060   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0080   (0x0008)  MISSED


	/// Functions
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
	UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate) // [0xdeb530] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* (*FuncPtr)(UTexture*, bool, bool, float, ETextureRotationDirection);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(SourceImage, bWantColor, bUseGpu, Scale, Rotate);
	}
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
	UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate) // [0xdeb370] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* (*FuncPtr)(UTexture*, bool, bool, float, ETextureRotationDirection);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(SourceImage, bWantColor, bUseGpu, Scale, Rotate);
	}
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
	UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate) // [0xdeb190] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* (*FuncPtr)(UTexture*, int32_t, bool, bool, float, ETextureRotationDirection);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(SourceImage, Quality, bWantColor, bUseGpu, Scale, Rotate);
	}
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
	UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate) // [0xdeafb0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* (*FuncPtr)(UTexture*, int32_t, bool, bool, float, ETextureRotationDirection);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(SourceImage, Quality, bWantColor, bUseGpu, Scale, Rotate);
	}
};

/// Class /Script/AppleImageUtils.AppleImageInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAppleImageInterface : public UInterface
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(FAppleImageUtilsImageConversionResult) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAppleImageUtilsBaseAsyncTaskBlueprintProxy) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UAppleImageInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(FAppleImageUtilsImageConversionResult, Error) == 0x0000);
static_assert(offsetof(FAppleImageUtilsImageConversionResult, ImageData) == 0x0010);
static_assert(offsetof(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, ConversionResult) == 0x0060);
