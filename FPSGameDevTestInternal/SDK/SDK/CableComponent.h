
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

class ACableActor;
class UCableComponent;

/// Class /Script/CableComponent.CableActor
/// Size: 0x0228 (552 bytes) (0x000220 - 0x000228) align 8 MaxSize: 0x0228
class ACableActor : public AActor
{ 
public:
	class UCableComponent*                             CableComponent;                                             // 0x0220   (0x0008)  
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x0510 (1296 bytes) (0x000478 - 0x000510) align 16 MaxSize: 0x0510
class UCableComponent : public UMeshComponent
{ 
public:
	bool                                               bAttachStart;                                               // 0x0478   (0x0001)  
	bool                                               bAttachEnd;                                                 // 0x0479   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x047A   (0x0006)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x0480   (0x0028)  
	FName                                              AttachEndToSocketName;                                      // 0x04A8   (0x0008)  
	FVector                                            EndLocation;                                                // 0x04B0   (0x000C)  
	float                                              CableLength;                                                // 0x04BC   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x04C0   (0x0004)  
	float                                              SubstepTime;                                                // 0x04C4   (0x0004)  
	int32_t                                            SolverIterations;                                           // 0x04C8   (0x0004)  
	bool                                               bEnableStiffness;                                           // 0x04CC   (0x0001)  
	bool                                               bUseSubstepping;                                            // 0x04CD   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotVisible;                             // 0x04CE   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;               // 0x04CF   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x04D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x04D1   (0x0003)  MISSED
	float                                              CollisionFriction;                                          // 0x04D4   (0x0004)  
	FVector                                            CableForce;                                                 // 0x04D8   (0x000C)  
	float                                              CableGravityScale;                                          // 0x04E4   (0x0004)  
	float                                              CableWidth;                                                 // 0x04E8   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x04EC   (0x0004)  
	float                                              TileMaterial;                                               // 0x04F0   (0x0004)  
	unsigned char                                      UnknownData02_7[0x1C];                                      // 0x04F4   (0x001C)  MISSED


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	void SetAttachEndToComponent(USceneComponent* Component, FName SocketName) // [0xdf59a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(USceneComponent*, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Component, SocketName);
	}
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName) // [0xdf5890] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(AActor*, FName, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Actor, ComponentProperty, SocketName);
	}
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	// void GetCableParticleLocations(TArray<FVector>& Locations);                                                              // [0xdf57e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	USceneComponent* GetAttachedComponent() // [0xdf57b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class USceneComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	AActor* GetAttachedActor() // [0xdf5780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class AActor* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
};

#pragma pack(pop)


static_assert(sizeof(ACableActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UCableComponent) == 0x0510); // 1296 bytes (0x000478 - 0x000510)
static_assert(offsetof(ACableActor, CableComponent) == 0x0220);
static_assert(offsetof(UCableComponent, AttachEndTo) == 0x0480);
static_assert(offsetof(UCableComponent, AttachEndToSocketName) == 0x04A8);
static_assert(offsetof(UCableComponent, EndLocation) == 0x04B0);
static_assert(offsetof(UCableComponent, CableForce) == 0x04D8);
