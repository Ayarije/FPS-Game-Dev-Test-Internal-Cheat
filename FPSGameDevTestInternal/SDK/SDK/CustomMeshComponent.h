
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

class UCustomMeshComponent;

/// Struct /Script/CustomMeshComponent.CustomMeshTriangle
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FCustomMeshTriangle
{ 
	FVector                                            Vertex0;                                                    // 0x0000   (0x000C)  
	FVector                                            Vertex1;                                                    // 0x000C   (0x000C)  
	FVector                                            Vertex2;                                                    // 0x0018   (0x000C)  
};

/// Class /Script/CustomMeshComponent.CustomMeshComponent
/// Size: 0x0490 (1168 bytes) (0x000478 - 0x000490) align 16 MaxSize: 0x0490
class UCustomMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0478   (0x0018)  MISSED


	/// Functions
	// Function /Script/CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
	// bool SetCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles);                                                     // [0xdfe470] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
	void ClearCustomMeshTriangles() // [0xdfe450] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
	// void AddCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles);                                                     // [0xdfe3a0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UCustomMeshComponent) == 0x0490); // 1168 bytes (0x000478 - 0x000490)
static_assert(sizeof(FCustomMeshTriangle) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(offsetof(FCustomMeshTriangle, Vertex0) == 0x0000);
static_assert(offsetof(FCustomMeshTriangle, Vertex1) == 0x000C);
static_assert(offsetof(FCustomMeshTriangle, Vertex2) == 0x0018);
