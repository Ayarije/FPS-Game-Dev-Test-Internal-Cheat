
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "MRMesh.h"

#pragma pack(push, 0x1)

class UMagicLeapHandMeshingComponent;
class UMagicLeapHandMeshingFunctionLibrary;

/// Struct /Script/MagicLeapHandMeshing.MagicLeapHandMeshBlock
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMagicLeapHandMeshBlock
{ 
	int32_t                                            IndexCount;                                                 // 0x0000   (0x0004)  
	int32_t                                            VertexCount;                                                // 0x0004   (0x0004)  
	TArray<FVector>                                    Vertex;                                                     // 0x0008   (0x0010)  
	TArray<int32_t>                                    Index;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/MagicLeapHandMeshing.MagicLeapHandMesh
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMagicLeapHandMesh
{ 
	int32_t                                            Version;                                                    // 0x0000   (0x0004)  
	int32_t                                            DataCount;                                                  // 0x0004   (0x0004)  
	TArray<FMagicLeapHandMeshBlock>                    Data;                                                       // 0x0008   (0x0010)  
};

/// Class /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMagicLeapHandMeshingComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals
	void SetUseWeightedNormals(bool bInUseWeightedNormals) // [0xd769e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(bInUseWeightedNormals);
	}
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh
	bool DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr) // [0xd768b0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMRMeshComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(InMRMeshPtr);
	}
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh
	bool ConnectMRMesh(UMRMeshComponent* InMRMeshPtr) // [0xd76720] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMRMeshComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(InMRMeshPtr);
	}
};

/// Class /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh
	bool DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr) // [0xd76950] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMRMeshComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(InMRMeshPtr);
	}
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient
	bool DestroyClient() // [0xd76880] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient
	bool CreateClient() // [0xd76850] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh
	bool ConnectMRMesh(UMRMeshComponent* InMRMeshPtr) // [0xd767c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMRMeshComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(InMRMeshPtr);
	}
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapHandMeshingComponent) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UMagicLeapHandMeshingFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapHandMeshBlock) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMagicLeapHandMesh) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FMagicLeapHandMeshBlock, Vertex) == 0x0008);
static_assert(offsetof(FMagicLeapHandMeshBlock, Index) == 0x0018);
static_assert(offsetof(FMagicLeapHandMesh, Data) == 0x0008);
