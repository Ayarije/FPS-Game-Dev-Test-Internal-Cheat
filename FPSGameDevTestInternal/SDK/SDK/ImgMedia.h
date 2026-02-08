
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "MediaAssets.h"

#pragma pack(push, 0x1)

class UImgMediaSource;

/// Class /Script/ImgMedia.ImgMediaSource
/// Size: 0x00C8 (200 bytes) (0x000088 - 0x0000C8) align 8 MaxSize: 0x00C8
class UImgMediaSource : public UBaseMediaSource
{ 
public:
	bool                                               IsPathRelativeToProjectRoot;                                // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	FFrameRate                                         FrameRateOverride;                                          // 0x008C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FString                                            ProxyOverride;                                              // 0x0098   (0x0010)  
	FDirectoryPath                                     SequencePath;                                               // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x00B8   (0x0010)  MISSED


	/// Functions
	// Function /Script/ImgMedia.ImgMediaSource.SetSequencePath
	void SetSequencePath(FString Path) // [0xd8f5a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Path);
	}
	// Function /Script/ImgMedia.ImgMediaSource.SetMipLevelDistance
	void SetMipLevelDistance(float Distance) // [0xd8f520] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Distance);
	}
	// Function /Script/ImgMedia.ImgMediaSource.RemoveTargetObject
	void RemoveTargetObject(AActor* InActor) // [0xd8f490] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InActor);
	}
	// Function /Script/ImgMedia.ImgMediaSource.RemoveGlobalCamera
	void RemoveGlobalCamera(AActor* InActor) // [0xd8f400] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(InActor);
	}
	// Function /Script/ImgMedia.ImgMediaSource.GetSequencePath
	FString GetSequencePath() // [0xd8f350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
	// Function /Script/ImgMedia.ImgMediaSource.GetProxies
	// void GetProxies(TArray<FString>& OutProxies);                                                                            // [0xd8f280] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.AddTargetObject
	void AddTargetObject(AActor* InActor, float Width) // [0xd8f1b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(AActor*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(InActor, Width);
	}
	// Function /Script/ImgMedia.ImgMediaSource.AddGlobalCamera
	void AddGlobalCamera(AActor* InActor) // [0xd8f120] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(InActor);
	}
};

#pragma pack(pop)


static_assert(sizeof(UImgMediaSource) == 0x00C8); // 200 bytes (0x000088 - 0x0000C8)
static_assert(offsetof(UImgMediaSource, FrameRateOverride) == 0x008C);
static_assert(offsetof(UImgMediaSource, ProxyOverride) == 0x0098);
static_assert(offsetof(UImgMediaSource, SequencePath) == 0x00A8);
