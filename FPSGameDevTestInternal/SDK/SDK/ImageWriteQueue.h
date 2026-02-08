
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

class UImageWriteBlueprintLibrary;

/// Enum /Script/ImageWriteQueue.EDesiredImageFormat
/// Size: 0x01 (1 bytes)
enum class EDesiredImageFormat : uint8_t
{
	EDesiredImageFormat__PNG                                                         = 0,
	EDesiredImageFormat__JPG                                                         = 1,
	EDesiredImageFormat__BMP                                                         = 2,
	EDesiredImageFormat__EXR                                                         = 3
};

/// Struct /Script/ImageWriteQueue.ImageWriteOptions
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FImageWriteOptions
{ 
	EDesiredImageFormat                                Format;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	SDK_UNDEFINED(16,572) /* FDelegateProperty */      __um(OnComplete);                                           // 0x0004   (0x0010)  
	int32_t                                            CompressionQuality;                                         // 0x0014   (0x0004)  
	bool                                               bOverwriteFile;                                             // 0x0018   (0x0001)  
	bool                                               bAsync;                                                     // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_7[0x46];                                      // 0x001A   (0x0046)  MISSED
};

/// Class /Script/ImageWriteQueue.ImageWriteBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
	void ExportToDisk(UTexture* Texture, FString Filename, FImageWriteOptions& Options) // [0x1539600] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UTexture*, FString, FImageWriteOptions&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Texture, Filename, Options);
	}
};

#pragma pack(pop)


static_assert(sizeof(UImageWriteBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FImageWriteOptions) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(FImageWriteOptions, Format) == 0x0000);
