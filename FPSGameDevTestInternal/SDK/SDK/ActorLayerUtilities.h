
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

class ULayersBlueprintLibrary;

/// Struct /Script/ActorLayerUtilities.ActorLayer
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FActorLayer
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Class /Script/ActorLayerUtilities.LayersBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
	void RemoveActorFromLayer(AActor* InActor, FActorLayer& Layer) // [0xde8bf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(AActor*, FActorLayer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InActor, Layer);
	}
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.GetActors
	// TArray<AActor*> GetActors(UObject* WorldContextObject, FActorLayer& ActorLayer);                                         // [0xde8ad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
	void AddActorToLayer(AActor* InActor, FActorLayer& Layer) // [0xde8a00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(AActor*, FActorLayer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InActor, Layer);
	}
};

#pragma pack(pop)


static_assert(sizeof(ULayersBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FActorLayer) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(FActorLayer, Name) == 0x0000);
