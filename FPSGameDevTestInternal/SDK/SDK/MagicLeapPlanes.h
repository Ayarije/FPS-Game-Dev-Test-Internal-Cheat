
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

class UMagicLeapPlanesComponent;
class UMagicLeapPlanesFunctionLibrary;

/// Enum /Script/MagicLeapPlanes.EMagicLeapPlaneQueryFlags
/// Size: 0x01 (1 bytes)
enum class EMagicLeapPlaneQueryFlags : uint8_t
{
	EMagicLeapPlaneQueryFlags__Vertical                                              = 0,
	EMagicLeapPlaneQueryFlags__Horizontal                                            = 1,
	EMagicLeapPlaneQueryFlags__Arbitrary                                             = 2,
	EMagicLeapPlaneQueryFlags__OrientToGravity                                       = 3,
	EMagicLeapPlaneQueryFlags__PreferInner                                           = 4,
	EMagicLeapPlaneQueryFlags__Ceiling                                               = 5,
	EMagicLeapPlaneQueryFlags__Floor                                                 = 6,
	EMagicLeapPlaneQueryFlags__Wall                                                  = 7,
	EMagicLeapPlaneQueryFlags__Polygons                                              = 8
};

/// Enum /Script/MagicLeapPlanes.EMagicLeapPlaneQueryType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapPlaneQueryType : uint8_t
{
	EMagicLeapPlaneQueryType__Bulk                                                   = 0,
	EMagicLeapPlaneQueryType__Delta                                                  = 1
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPolygon
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMagicLeapPolygon
{ 
	TArray<FVector>                                    Vertices;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlaneBoundary
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMagicLeapPlaneBoundary
{ 
	FMagicLeapPolygon                                  Polygon;                                                    // 0x0000   (0x0010)  
	TArray<FMagicLeapPolygon>                          Holes;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlaneBoundaries
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMagicLeapPlaneBoundaries
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	TArray<FMagicLeapPlaneBoundary>                    Boundaries;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlaneResult
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FMagicLeapPlaneResult
{ 
	FVector                                            PlanePosition;                                              // 0x0000   (0x000C)  
	FRotator                                           PlaneOrientation;                                           // 0x000C   (0x000C)  
	FRotator                                           ContentOrientation;                                         // 0x0018   (0x000C)  
	FVector2D                                          PlaneDimensions;                                            // 0x0024   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<EMagicLeapPlaneQueryFlags>                  PlaneFlags;                                                 // 0x0030   (0x0010)  
	FGuid                                              ID;                                                         // 0x0040   (0x0010)  
	FGuid                                              InnerID;                                                    // 0x0050   (0x0010)  
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlanesQuery
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FMagicLeapPlanesQuery
{ 
	TArray<EMagicLeapPlaneQueryFlags>                  Flags;                                                      // 0x0000   (0x0010)  
	class UBoxComponent*                               SearchVolume;                                               // 0x0010   (0x0008)  
	int32_t                                            MaxResults;                                                 // 0x0018   (0x0004)  
	float                                              MinHoleLength;                                              // 0x001C   (0x0004)  
	float                                              MinPlaneArea;                                               // 0x0020   (0x0004)  
	FVector                                            SearchVolumePosition;                                       // 0x0024   (0x000C)  
	FQuat                                              SearchVolumeOrientation;                                    // 0x0030   (0x0010)  
	FVector                                            SearchVolumeExtents;                                        // 0x0040   (0x000C)  
	float                                              SimilarityThreshold;                                        // 0x004C   (0x0004)  
	bool                                               bSearchVolumeTrackingSpace;                                 // 0x0050   (0x0001)  
	bool                                               bResultTrackingSpace;                                       // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_7[0xE];                                       // 0x0052   (0x000E)  MISSED
};

/// Class /Script/MagicLeapPlanes.MagicLeapPlanesComponent
/// Size: 0x0260 (608 bytes) (0x0001F8 - 0x000260) align 16 MaxSize: 0x0260
class UMagicLeapPlanesComponent : public USceneComponent
{ 
public:
	TArray<EMagicLeapPlaneQueryFlags>                  QueryFlags;                                                 // 0x01F8   (0x0010)  
	class UBoxComponent*                               SearchVolume;                                               // 0x0208   (0x0008)  
	int32_t                                            MaxResults;                                                 // 0x0210   (0x0004)  
	float                                              MinHolePerimeter;                                           // 0x0214   (0x0004)  
	float                                              MinPlaneArea;                                               // 0x0218   (0x0004)  
	EMagicLeapPlaneQueryType                           QueryType;                                                  // 0x021C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x021D   (0x0003)  MISSED
	float                                              SimilarityThreshold;                                        // 0x0220   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0224   (0x0004)  MISSED
	SDK_UNDEFINED(16,625) /* FMulticastInlineDelegate */ __um(OnPlanesQueryResult);                                // 0x0228   (0x0010)  
	SDK_UNDEFINED(16,626) /* FMulticastInlineDelegate */ __um(OnPersistentPlanesQueryResult);                      // 0x0238   (0x0010)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0248   (0x0018)  MISSED


	/// Functions
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
	bool RequestPlanesAsync() // [0xd73520] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
};

/// Class /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
	// void ReorderPlaneFlags(TArray<EMagicLeapPlaneQueryFlags>& InPriority, TArray<EMagicLeapPlaneQueryFlags>& InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>& OutReorderedFlags); // [0xd733a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery
	bool RemovePersistentQuery(FGuid Handle) // [0xd73300] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FGuid);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Handle);
	}
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
	// void RemoveFlagsNotInQuery(TArray<EMagicLeapPlaneQueryFlags>& InQueryFlags, TArray<EMagicLeapPlaneQueryFlags>& InResultFlags, TArray<EMagicLeapPlaneQueryFlags>& OutFlags); // [0xd73180] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
	// bool PlanesQueryBeginAsync(FMagicLeapPlanesQuery& Query, FDelegateProperty& ResultDelegate);                             // [0xd73020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync
	// bool PlanesPersistentQueryBeginAsync(FMagicLeapPlanesQuery& Query, FGuid& Handle, FDelegateProperty& ResultDelegate);    // [0xd72e70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
	bool IsTrackerValid() // [0xd72e40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
	FTransform GetContentScale(AActor* ContentActor, FMagicLeapPlaneResult& PlaneResult) // [0xd72d00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef FTransform (*FuncPtr)(AActor*, FMagicLeapPlaneResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(ContentActor, PlaneResult);
	}
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
	bool DestroyTracker() // [0xd72cd0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func();
	}
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
	bool CreateTracker() // [0xd72ca0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery
	FGuid AddPersistentQuery(EMagicLeapPlaneQueryType PersistentQueryType) // [0xd72c10] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef FGuid (*FuncPtr)(EMagicLeapPlaneQueryType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(PersistentQueryType);
	}
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapPlanesComponent) == 0x0260); // 608 bytes (0x0001F8 - 0x000260)
static_assert(sizeof(UMagicLeapPlanesFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapPolygon) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMagicLeapPlaneBoundary) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMagicLeapPlaneBoundaries) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMagicLeapPlaneResult) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FMagicLeapPlanesQuery) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(UMagicLeapPlanesComponent, QueryFlags) == 0x01F8);
static_assert(offsetof(UMagicLeapPlanesComponent, SearchVolume) == 0x0208);
static_assert(offsetof(UMagicLeapPlanesComponent, QueryType) == 0x021C);
static_assert(offsetof(FMagicLeapPolygon, Vertices) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneBoundary, Polygon) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneBoundary, Holes) == 0x0010);
static_assert(offsetof(FMagicLeapPlaneBoundaries, ID) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneBoundaries, Boundaries) == 0x0010);
static_assert(offsetof(FMagicLeapPlaneResult, PlanePosition) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneResult, PlaneOrientation) == 0x000C);
static_assert(offsetof(FMagicLeapPlaneResult, ContentOrientation) == 0x0018);
static_assert(offsetof(FMagicLeapPlaneResult, PlaneDimensions) == 0x0024);
static_assert(offsetof(FMagicLeapPlaneResult, PlaneFlags) == 0x0030);
static_assert(offsetof(FMagicLeapPlaneResult, ID) == 0x0040);
static_assert(offsetof(FMagicLeapPlaneResult, InnerID) == 0x0050);
static_assert(offsetof(FMagicLeapPlanesQuery, Flags) == 0x0000);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolume) == 0x0010);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolumePosition) == 0x0024);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolumeOrientation) == 0x0030);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolumeExtents) == 0x0040);
