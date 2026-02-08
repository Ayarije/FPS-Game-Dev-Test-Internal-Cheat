
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "MeshDescription.h"

#pragma pack(push, 0x1)

class UStaticMeshDescription;

/// Struct /Script/StaticMeshDescription.UVMapSettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 MaxSize: 0x0038
struct FUVMapSettings
{ 
	FVector                                            Size;                                                       // 0x0000   (0x000C)  
	FVector2D                                          UVTile;                                                     // 0x000C   (0x0008)  
	FVector                                            Position;                                                   // 0x0014   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0020   (0x000C)  
	FVector                                            Scale;                                                      // 0x002C   (0x000C)  
};

/// Class /Script/StaticMeshDescription.StaticMeshDescription
/// Size: 0x0390 (912 bytes) (0x000390 - 0x000390) align 8 MaxSize: 0x0390
class UStaticMeshDescription : public UMeshDescriptionBase
{ 
public:


	/// Functions
	// Function /Script/StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
	void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32_t UVIndex) // [0x25e5930] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FVertexInstanceID, FVector2D, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(VertexInstanceID, UV, UVIndex);
	}
	// Function /Script/StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
	void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, FName& SlotName) // [0x25e5850] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FPolygonGroupID, FName&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(PolygonGroupID, SlotName);
	}
	// Function /Script/StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
	FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32_t UVIndex) // [0x25e5770] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FVector2D (*FuncPtr)(FVertexInstanceID, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(VertexInstanceID, UVIndex);
	}
	// Function /Script/StaticMeshDescription.StaticMeshDescription.CreateCube
	void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ) // [0x25e5430] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FVector, FVector, FPolygonGroupID, FPolygonID&, FPolygonID&, FPolygonID&, FPolygonID&, FPolygonID&, FPolygonID&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Center, HalfExtents, PolygonGroup, PolygonID_PlusX, PolygonID_MinusX, PolygonID_PlusY, PolygonID_MinusY, PolygonID_PlusZ, PolygonID_MinusZ);
	}
};

#pragma pack(pop)


static_assert(sizeof(UStaticMeshDescription) == 0x0390); // 912 bytes (0x000390 - 0x000390)
static_assert(sizeof(FUVMapSettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(FUVMapSettings, Size) == 0x0000);
static_assert(offsetof(FUVMapSettings, UVTile) == 0x000C);
static_assert(offsetof(FUVMapSettings, Position) == 0x0014);
static_assert(offsetof(FUVMapSettings, Rotation) == 0x0020);
static_assert(offsetof(FUVMapSettings, Scale) == 0x002C);
