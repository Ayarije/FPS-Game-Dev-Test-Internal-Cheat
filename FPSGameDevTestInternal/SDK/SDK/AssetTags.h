
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

class UAssetTagsSubsystem;

/// Enum /Script/AssetTags.ECollectionScriptingShareType
/// Size: 0x01 (1 bytes)
enum class ECollectionScriptingShareType : uint8_t
{
	ECollectionScriptingShareType__Local                                             = 0,
	ECollectionScriptingShareType__Private                                           = 1,
	ECollectionScriptingShareType__Shared                                            = 2
};

/// Class /Script/AssetTags.AssetTagsSubsystem
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAssetTagsSubsystem : public UEngineSubsystem
{ 
public:


	/// Functions
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
	// TArray<FName> GetCollectionsContainingAssetPtr(UObject* AssetPtr);                                                       // [0xdefc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
	// TArray<FName> GetCollectionsContainingAssetData(FAssetData& AssetData);                                                  // [0xdefab0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
	// TArray<FName> GetCollectionsContainingAsset(FName AssetPathName);                                                        // [0xdef9d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollections
	// TArray<FName> GetCollections();                                                                                          // [0xdef950] Final|Native|Public|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetAssetsInCollection
	// TArray<FAssetData> GetAssetsInCollection(FName Name);                                                                    // [0xdef780] Final|Native|Public|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.CollectionExists
	bool CollectionExists(FName Name) // [0xdef6e0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(Name);
	}
};

#pragma pack(pop)


static_assert(sizeof(UAssetTagsSubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
