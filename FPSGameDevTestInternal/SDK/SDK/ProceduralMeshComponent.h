
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

class UKismetProceduralMeshLibrary;
class UProceduralMeshComponent;

/// Enum /Script/ProceduralMeshComponent.EProcMeshSliceCapOption
/// Size: 0x01 (1 bytes)
enum class EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap                                                   = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap                                  = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap                                    = 2
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshTangent
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FProcMeshTangent
{ 
	FVector                                            TangentX;                                                   // 0x0000   (0x000C)  
	bool                                               bFlipTangentY;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshVertex
/// Size: 0x004C (76 bytes) (0x000000 - 0x00004C) align 4 MaxSize: 0x004C
struct FProcMeshVertex
{ 
	FVector                                            Position;                                                   // 0x0000   (0x000C)  
	FVector                                            Normal;                                                     // 0x000C   (0x000C)  
	FProcMeshTangent                                   Tangent;                                                    // 0x0018   (0x0010)  
	FColor                                             Color;                                                      // 0x0028   (0x0004)  
	FVector2D                                          UV0;                                                        // 0x002C   (0x0008)  
	FVector2D                                          UV1;                                                        // 0x0034   (0x0008)  
	FVector2D                                          UV2;                                                        // 0x003C   (0x0008)  
	FVector2D                                          UV3;                                                        // 0x0044   (0x0008)  
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshSection
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FProcMeshSection
{ 
	TArray<FProcMeshVertex>                            ProcVertexBuffer;                                           // 0x0000   (0x0010)  
	TArray<uint32_t>                                   ProcIndexBuffer;                                            // 0x0010   (0x0010)  
	FBox                                               SectionLocalBox;                                            // 0x0020   (0x001C)  
	bool                                               bEnableCollision;                                           // 0x003C   (0x0001)  
	bool                                               bSectionVisible;                                            // 0x003D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x003E   (0x0002)  MISSED
};

/// Class /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
	void SliceProceduralMesh(UProceduralMeshComponent* InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, UProceduralMeshComponent*& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, UMaterialInterface* CapMaterial) // [0xaeee60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UProceduralMeshComponent*, FVector, FVector, bool, UProceduralMeshComponent*&, EProcMeshSliceCapOption, UMaterialInterface*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InProcMesh, PlanePosition, PlaneNormal, bCreateOtherHalf, OutOtherHalfProcMesh, CapOption, CapMaterial);
	}
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
	// void GetSectionFromStaticMesh(UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents); // [0xaee9f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
	// void GetSectionFromProceduralMesh(UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents); // [0xaee730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
	// void GenerateBoxMesh(FVector BoxRadius, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents); // [0xaee470] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
	// void CreateGridMeshWelded(int32_t NumX, int32_t NumY, TArray<int32_t>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, float GridSpacing); // [0xaeda70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
	void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, TArray<int32_t>& Triangles) // [0xaed900] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, int32_t, bool, TArray<int32_t>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(NumX, NumY, bWinding, Triangles);
	}
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
	// void CreateGridMeshSplit(int32_t NumX, int32_t NumY, TArray<int32_t>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, TArray<FVector2D>& UV1s, float GridSpacing); // [0xaed660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
	void CopyProceduralMeshFromStaticMeshComponent(UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision) // [0xaed510] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UStaticMeshComponent*, int32_t, UProceduralMeshComponent*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(StaticMeshComponent, LODIndex, ProcMeshComponent, bCreateCollision);
	}
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
	void ConvertQuadToTriangles(TArray<int32_t>& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3) // [0xaed360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(TArray<int32_t>&, int32_t, int32_t, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(Triangles, Vert0, Vert1, Vert2, Vert3);
	}
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
	// void CalculateTangentsForMesh(TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector2D>& UVs, TArray<FVector>& Normals, TArray<FProcMeshTangent>& Tangents); // [0xaed050] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ProceduralMeshComponent.ProceduralMeshComponent
/// Size: 0x04E0 (1248 bytes) (0x000478 - 0x0004E0) align 16 MaxSize: 0x04E0
class UProceduralMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0478   (0x0008)  MISSED
	bool                                               bUseComplexAsSimpleCollision;                               // 0x0480   (0x0001)  
	bool                                               bUseAsyncCooking;                                           // 0x0481   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0482   (0x0006)  MISSED
	class UBodySetup*                                  ProcMeshBodySetup;                                          // 0x0488   (0x0008)  
	TArray<FProcMeshSection>                           ProcMeshSections;                                           // 0x0490   (0x0010)  
	TArray<FKConvexElem>                               CollisionConvexElems;                                       // 0x04A0   (0x0010)  
	FBoxSphereBounds                                   LocalBounds;                                                // 0x04B0   (0x001C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x04CC   (0x0004)  MISSED
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                        // 0x04D0   (0x0010)  


	/// Functions
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	// void UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents); // [0xaef370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	// void UpdateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents); // [0xaef0b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility) // [0xaeed90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(SectionIndex, bNewVisibility);
	}
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	bool IsMeshSectionVisible(int32_t SectionIndex) // [0xaeecf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(SectionIndex);
	}
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	int32_t GetNumSections() // [0xaee700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	// void CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision); // [0xaee000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	// void CreateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision); // [0xaedca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	void ClearMeshSection(int32_t SectionIndex) // [0xaed2d0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(SectionIndex);
	}
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	void ClearCollisionConvexMeshes() // [0xaed2b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func();
	}
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	void ClearAllMeshSections() // [0xaed290] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func();
	}
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
	// void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);                                                                // [0xaecf60] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UKismetProceduralMeshLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FProcMeshTangent) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FProcMeshVertex) == 0x004C); // 76 bytes (0x000000 - 0x00004C)
static_assert(sizeof(FProcMeshSection) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UProceduralMeshComponent) == 0x04E0); // 1248 bytes (0x000478 - 0x0004E0)
static_assert(offsetof(FProcMeshTangent, TangentX) == 0x0000);
static_assert(offsetof(FProcMeshVertex, Position) == 0x0000);
static_assert(offsetof(FProcMeshVertex, Normal) == 0x000C);
static_assert(offsetof(FProcMeshVertex, Tangent) == 0x0018);
static_assert(offsetof(FProcMeshVertex, Color) == 0x0028);
static_assert(offsetof(FProcMeshVertex, UV0) == 0x002C);
static_assert(offsetof(FProcMeshVertex, UV1) == 0x0034);
static_assert(offsetof(FProcMeshVertex, UV2) == 0x003C);
static_assert(offsetof(FProcMeshVertex, UV3) == 0x0044);
static_assert(offsetof(FProcMeshSection, ProcVertexBuffer) == 0x0000);
static_assert(offsetof(FProcMeshSection, ProcIndexBuffer) == 0x0010);
static_assert(offsetof(FProcMeshSection, SectionLocalBox) == 0x0020);
static_assert(offsetof(UProceduralMeshComponent, ProcMeshBodySetup) == 0x0488);
static_assert(offsetof(UProceduralMeshComponent, ProcMeshSections) == 0x0490);
static_assert(offsetof(UProceduralMeshComponent, CollisionConvexElems) == 0x04A0);
static_assert(offsetof(UProceduralMeshComponent, LocalBounds) == 0x04B0);
static_assert(offsetof(UProceduralMeshComponent, AsyncBodySetupQueue) == 0x04D0);
