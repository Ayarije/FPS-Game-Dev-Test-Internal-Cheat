
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UAssetRegistry;
class UAssetRegistryHelpers;
class UAssetRegistryImpl;

/// Struct /Script/AssetRegistry.TagAndValue
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FTagAndValue
{ 
	FName                                              Tag;                                                        // 0x0000   (0x0008)  
	FString                                            Value;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/AssetRegistry.AssetRegistryDependencyOptions
/// Size: 0x0005 (5 bytes) (0x000000 - 0x000005) align 1 MaxSize: 0x0005
struct FAssetRegistryDependencyOptions
{ 
	bool                                               bIncludeSoftPackageReferences;                              // 0x0000   (0x0001)  
	bool                                               bIncludeHardPackageReferences;                              // 0x0001   (0x0001)  
	bool                                               bIncludeSearchableNames;                                    // 0x0002   (0x0001)  
	bool                                               bIncludeSoftManagementReferences;                           // 0x0003   (0x0001)  
	bool                                               bIncludeHardManagementReferences;                           // 0x0004   (0x0001)  
};

/// Class /Script/AssetRegistry.AssetRegistryImpl
/// Size: 0x0850 (2128 bytes) (0x000028 - 0x000850) align 8 MaxSize: 0x0850
class UAssetRegistryImpl : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x828];                                     // 0x0028   (0x0828)  MISSED
};

/// Class /Script/AssetRegistry.AssetRegistryHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAssetRegistryHelpers : public UObject
{ 
public:


	/// Functions
	// Function /Script/AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
	FSoftObjectPath ToSoftObjectPath(FAssetData& InAssetData) // [0x25afcc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FSoftObjectPath (*FuncPtr)(FAssetData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(InAssetData);
	}
	// Function /Script/AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
	// FARFilter SetFilterTagsAndValues(FARFilter& InFilter, TArray<FTagAndValue>& InTagsAndValues);                            // [0x25afad0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsValid
	bool IsValid(FAssetData& InAssetData) // [0x25af0c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FAssetData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(InAssetData);
	}
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsUAsset
	bool IsUAsset(FAssetData& InAssetData) // [0x25aef80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FAssetData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(InAssetData);
	}
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsRedirector
	bool IsRedirector(FAssetData& InAssetData) // [0x25aee40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FAssetData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(InAssetData);
	}
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
	bool IsAssetLoaded(FAssetData& InAssetData) // [0x25aecd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FAssetData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(InAssetData);
	}
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetTagValue
	bool GetTagValue(FAssetData& InAssetData, FName& InTagName, FString& OutTagValue) // [0x25aea20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FAssetData&, FName&, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(InAssetData, InTagName, OutTagValue);
	}
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetFullName
	FString GetFullName(FAssetData& InAssetData) // [0x25ae730] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FAssetData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(InAssetData);
	}
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetExportTextName
	FString GetExportTextName(FAssetData& InAssetData) // [0x25ae5c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FAssetData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(InAssetData);
	}
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetClass
	UClass* GetClass(FAssetData& InAssetData) // [0x25ae480] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef class UClass* (*FuncPtr)(FAssetData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(InAssetData);
	}
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
	// TScriptInterface<Class> GetAssetRegistry();                                                                              // [0x25ade80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAsset
	UObject* GetAsset(FAssetData& InAssetData) // [0x25adbe0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef class UObject* (*FuncPtr)(FAssetData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(InAssetData);
	}
	// Function /Script/AssetRegistry.AssetRegistryHelpers.CreateAssetData
	FAssetData CreateAssetData(UObject* InAsset, bool bAllowBlueprintClass) // [0x25ad8b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FAssetData (*FuncPtr)(UObject*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(InAsset, bAllowBlueprintClass);
	}
};

/// Class /Script/AssetRegistry.AssetRegistry
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAssetRegistry : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AssetRegistry.AssetRegistry.WaitForCompletion
	void WaitForCompletion() // [0x25affe0] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
	// void UseFilterToExcludeAssets(TArray<FAssetData>& AssetDataList, FARFilter& Filter);                                     // [0x25afe30] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.SearchAllAssets
	void SearchAllAssets(bool bSynchronousSearch) // [0x25afa40] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(bSynchronousSearch);
	}
	// Function /Script/AssetRegistry.AssetRegistry.ScanPathsSynchronous
	// void ScanPathsSynchronous(TArray<FString>& InPaths, bool bForceRescan);                                                  // [0x25af910] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
	// void ScanModifiedAssetFiles(TArray<FString>& InFilePaths);                                                               // [0x25af840] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.ScanFilesSynchronous
	// void ScanFilesSynchronous(TArray<FString>& InFilePaths, bool bForceRescan);                                              // [0x25af710] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.RunAssetsThroughFilter
	// void RunAssetsThroughFilter(TArray<FAssetData>& AssetDataList, FARFilter& Filter);                                       // [0x25af560] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.PrioritizeSearchPath
	void PrioritizeSearchPath(FString PathToPrioritize) // [0x25af4c0] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(PathToPrioritize);
	}
	// Function /Script/AssetRegistry.AssetRegistry.K2_GetReferencers
	// bool K2_GetReferencers(FName PackageName, FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers); // [0x25af360] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.K2_GetDependencies
	// bool K2_GetDependencies(FName PackageName, FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies); // [0x25af200] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.IsLoadingAssets
	bool IsLoadingAssets() // [0x25aee10] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func();
	}
	// Function /Script/AssetRegistry.AssetRegistry.HasAssets
	bool HasAssets(FName PackagePath, bool bRecursive) // [0x25aec00] Native|Public|BlueprintCallable|Const 
	{
		typedef bool (*FuncPtr)(FName, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(PackagePath, bRecursive);
	}
	// Function /Script/AssetRegistry.AssetRegistry.GetSubPaths
	// void GetSubPaths(FString InBasePath, TArray<FString>& OutPathList, bool bInRecurse);                                     // [0x25ae8a0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPath
	// bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // [0x25ae2f0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPackageName
	// bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);         // [0x25ae1b0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByClass
	// bool GetAssetsByClass(FName ClassName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses);                        // [0x25ae070] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssets
	// bool GetAssets(FARFilter& Filter, TArray<FAssetData>& OutAssetData);                                                     // [0x25adec0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetByObjectPath
	FAssetData GetAssetByObjectPath(FName ObjectPath, bool bIncludeOnlyOnDiskAssets) // [0x25add20] Native|Public|HasDefaults|BlueprintCallable|Const 
	{
		typedef FAssetData (*FuncPtr)(FName, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(ObjectPath, bIncludeOnlyOnDiskAssets);
	}
	// Function /Script/AssetRegistry.AssetRegistry.GetAllCachedPaths
	// void GetAllCachedPaths(TArray<FString>& OutPathList);                                                                    // [0x25adb10] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAllAssets
	// bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);                                      // [0x25ada10] Native|Public|HasOutParms|BlueprintCallable|Const 
};

#pragma pack(pop)


static_assert(sizeof(UAssetRegistryImpl) == 0x0850); // 2128 bytes (0x000028 - 0x000850)
static_assert(sizeof(UAssetRegistryHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAssetRegistry) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FTagAndValue) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAssetRegistryDependencyOptions) == 0x0005); // 5 bytes (0x000000 - 0x000005)
static_assert(offsetof(FTagAndValue, Tag) == 0x0000);
static_assert(offsetof(FTagAndValue, Value) == 0x0008);
