
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "MediaAssets.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class ALevelSequenceActor;
class ALevelSequenceMediaController;
class UAnimSequenceLevelSequenceLink;
class UDefaultLevelSequenceInstanceData;
class ULegacyLevelSequenceDirectorBlueprint;
class ULevelSequence;
class ULevelSequenceAnimSequenceLink;
class ULevelSequenceBurnIn;
class ULevelSequenceBurnInInitSettings;
class ULevelSequenceBurnInOptions;
class ULevelSequenceDirector;
class ULevelSequenceMetaData;
class ULevelSequencePlayer;
class ULevelSequenceProjectSettings;

/// Struct /Script/LevelSequence.LevelSequenceObjectReferenceMap
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FLevelSequenceObjectReferenceMap
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReference
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FLevelSequenceBindingReference
{ 
	FString                                            PackageName;                                                // 0x0000   (0x0010)  
	FSoftObjectPath                                    ExternalObjectPath;                                         // 0x0010   (0x0018)  
	FString                                            ObjectPath;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferenceArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLevelSequenceBindingReferenceArray
{ 
	TArray<FLevelSequenceBindingReference>             References;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferences
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FLevelSequenceBindingReferences
{ 
	TMap<FGuid, FLevelSequenceBindingReferenceArray>   BindingIdToReferences;                                      // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,340) /* TSet<FGuid> */            __um(AnimSequenceInstances);                                // 0x0050   (0x0050)  
};

/// Struct /Script/LevelSequence.LevelSequenceObject
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FLevelSequenceObject
{ 
	TLazyObjectPtr<class UObject*>                     ObjectOrOwner;                                              // 0x0000   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            ComponentName;                                              // 0x0020   (0x0010)  
	TWeakObjectPtr<class UObject*>                     CachedComponent;                                            // 0x0030   (0x0008)  
};

/// Struct /Script/LevelSequence.LevelSequenceCameraSettings
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FLevelSequenceCameraSettings
{ 
	bool                                               bOverrideAspectRatioAxisConstraint;                         // 0x0000   (0x0001)  
	TEnumAsByte<EAspectRatioAxisConstraint>            AspectRatioAxisConstraint;                                  // 0x0001   (0x0001)  
};

/// Struct /Script/LevelSequence.LevelSequenceAnimSequenceLinkItem
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FLevelSequenceAnimSequenceLinkItem
{ 
	FGuid                                              SkelTrackGuid;                                              // 0x0000   (0x0010)  
	FSoftObjectPath                                    PathToAnimSequence;                                         // 0x0010   (0x0018)  
	bool                                               bExportTransforms;                                          // 0x0028   (0x0001)  
	bool                                               bExportCurves;                                              // 0x0029   (0x0001)  
	bool                                               bRecordInWorldSpace;                                        // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x002B   (0x0005)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceSnapshotSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FLevelSequenceSnapshotSettings
{ 
	char                                               ZeroPadAmount;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FFrameRate                                         FrameRate;                                                  // 0x0004   (0x0008)  
};

/// Struct /Script/LevelSequence.LevelSequencePlayerSnapshot
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FLevelSequencePlayerSnapshot
{ 
	FString                                            MasterName;                                                 // 0x0000   (0x0010)  
	FQualifiedFrameTime                                MasterTime;                                                 // 0x0010   (0x0010)  
	FQualifiedFrameTime                                SourceTime;                                                 // 0x0020   (0x0010)  
	FString                                            CurrentShotName;                                            // 0x0030   (0x0010)  
	FQualifiedFrameTime                                CurrentShotLocalTime;                                       // 0x0040   (0x0010)  
	FQualifiedFrameTime                                CurrentShotSourceTime;                                      // 0x0050   (0x0010)  
	FString                                            SourceTimecode;                                             // 0x0060   (0x0010)  
	TWeakObjectPtr<class UCameraComponent*>            CameraComponent;                                            // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0078   (0x0020)  MISSED
	FLevelSequenceSnapshotSettings                     Settings;                                                   // 0x0098   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	class ULevelSequence*                              ActiveShot;                                                 // 0x00A8   (0x0008)  
	FMovieSceneSequenceID                              ShotID;                                                     // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Struct /Script/LevelSequence.BoundActorProxy
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FBoundActorProxy
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceLegacyObjectReference
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FLevelSequenceLegacyObjectReference
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Class /Script/LevelSequence.AnimSequenceLevelSequenceLink
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{ 
public:
	FGuid                                              SkelTrackGuid;                                              // 0x0028   (0x0010)  
	FSoftObjectPath                                    PathToLevelSequence;                                        // 0x0038   (0x0018)  
};

/// Class /Script/LevelSequence.DefaultLevelSequenceInstanceData
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 16 MaxSize: 0x0070
class UDefaultLevelSequenceInstanceData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class AActor*                                      TransformOriginActor;                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         TransformOrigin;                                            // 0x0040   (0x0030)  
};

/// Class /Script/LevelSequence.LevelSequenceMetaData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULevelSequenceMetaData : public UInterface
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequence
/// Size: 0x01C8 (456 bytes) (0x000060 - 0x0001C8) align 8 MaxSize: 0x01C8
class ULevelSequence : public UMovieSceneSequence
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0060   (0x0008)  MISSED
	class UMovieScene*                                 MovieScene;                                                 // 0x0068   (0x0008)  
	FLevelSequenceObjectReferenceMap                   ObjectReferences;                                           // 0x0070   (0x0050)  
	FLevelSequenceBindingReferences                    BindingReferences;                                          // 0x00C0   (0x00A0)  
	TMap<FString, FLevelSequenceObject>                PossessedObjects;                                           // 0x0160   (0x0050)  
	class UClass*                                      DirectorClass;                                              // 0x01B0   (0x0008)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x01B8   (0x0010)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequence.RemoveMetaDataByClass
	void RemoveMetaDataByClass(UClass* InClass) // [0x2642e40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InClass);
	}
	// Function /Script/LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	UObject* FindOrAddMetaDataByClass(UClass* InClass) // [0x2642360] Final|Native|Public|BlueprintCallable 
	{
		typedef class UObject* (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(InClass);
	}
	// Function /Script/LevelSequence.LevelSequence.FindMetaDataByClass
	UObject* FindMetaDataByClass(UClass* InClass) // [0x2642360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UObject* (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(InClass);
	}
	// Function /Script/LevelSequence.LevelSequence.CopyMetaData
	UObject* CopyMetaData(UObject* InMetaData) // [0x2642360] Final|Native|Public|BlueprintCallable 
	{
		typedef class UObject* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(InMetaData);
	}
};

/// Class /Script/LevelSequence.LevelSequenceBurnInInitSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULevelSequenceBurnInInitSettings : public UObject
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInOptions
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class ULevelSequenceBurnInOptions : public UObject
{ 
public:
	bool                                               bUseBurnIn;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FSoftClassPath                                     BurnInClass;                                                // 0x0030   (0x0018)  
	class ULevelSequenceBurnInInitSettings*            Settings;                                                   // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	void SetBurnIn(FSoftClassPath InBurnInClass) // [0x2643220] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSoftClassPath);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InBurnInClass);
	}
};

/// Class /Script/LevelSequence.LevelSequenceActor
/// Size: 0x02A8 (680 bytes) (0x000220 - 0x0002A8) align 8 MaxSize: 0x02A8
class ALevelSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0220   (0x0018)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x0238   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x024C   (0x0004)  MISSED
	class ULevelSequencePlayer*                        SequencePlayer;                                             // 0x0250   (0x0008)  
	FSoftObjectPath                                    LevelSequence;                                              // 0x0258   (0x0018)  
	FLevelSequenceCameraSettings                       CameraSettings;                                             // 0x0270   (0x0002)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0272   (0x0006)  MISSED
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                              // 0x0278   (0x0008)  
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                           // 0x0280   (0x0008)  
	bool                                               bAutoPlay : 1;                                              // 0x0288:0 (0x0001)  
	bool                                               bOverrideInstanceData : 1;                                  // 0x0288:1 (0x0001)  
	bool                                               bReplicatePlayback : 1;                                     // 0x0288:2 (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0289   (0x0007)  MISSED
	class UObject*                                     DefaultInstanceData;                                        // 0x0290   (0x0008)  
	class ULevelSequenceBurnIn*                        BurnInInstance;                                             // 0x0298   (0x0008)  
	bool                                               bShowBurnin;                                                // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData04_7[0x7];                                       // 0x02A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceActor.ShowBurnin
	void ShowBurnin() // [0x2643400] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/LevelSequence.LevelSequenceActor.SetSequence
	void SetSequence(ULevelSequence* InSequence) // [0x2643370] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ULevelSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InSequence);
	}
	// Function /Script/LevelSequence.LevelSequenceActor.SetReplicatePlayback
	void SetReplicatePlayback(bool ReplicatePlayback) // [0x26432e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(ReplicatePlayback);
	}
	// Function /Script/LevelSequence.LevelSequenceActor.SetBindingByTag
	// void SetBindingByTag(FName BindingTag, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);                           // [0x26430f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBinding
	// void SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);              // [0x2642f90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBindings
	void ResetBindings() // [0x2642f70] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func();
	}
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBinding
	void ResetBinding(FMovieSceneObjectBindingID Binding) // [0x2642eb0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FMovieSceneObjectBindingID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Binding);
	}
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBindingByTag
	void RemoveBindingByTag(FName Tag, AActor* Actor) // [0x2642d70] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(Tag, Actor);
	}
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBinding
	void RemoveBinding(FMovieSceneObjectBindingID Binding, AActor* Actor) // [0x2642c70] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FMovieSceneObjectBindingID, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(Binding, Actor);
	}
	// Function /Script/LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	void OnLevelSequenceLoaded__DelegateSignature() // [0x12295a0] Public|Delegate      
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func();
	}
	// Function /Script/LevelSequence.LevelSequenceActor.LoadSequence
	ULevelSequence* LoadSequence() // [0x2642c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class ULevelSequence* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func();
	}
	// Function /Script/LevelSequence.LevelSequenceActor.HideBurnin
	void HideBurnin() // [0x2642be0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func();
	}
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequencePlayer
	ULevelSequencePlayer* GetSequencePlayer() // [0x2642b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class ULevelSequencePlayer* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func();
	}
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequence
	ULevelSequence* GetSequence() // [0x2642af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class ULevelSequence* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func();
	}
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBindings
	// TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag);                                                         // [0x2642610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBinding
	FMovieSceneObjectBindingID FindNamedBinding(FName Tag) // [0x2642560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FMovieSceneObjectBindingID (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(Tag);
	}
	// Function /Script/LevelSequence.LevelSequenceActor.AddBindingByTag
	void AddBindingByTag(FName BindingTag, AActor* Actor, bool bAllowBindingsFromAsset) // [0x2642250] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName, AActor*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func(BindingTag, Actor, bAllowBindingsFromAsset);
	}
	// Function /Script/LevelSequence.LevelSequenceActor.AddBinding
	void AddBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset) // [0x2642100] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FMovieSceneObjectBindingID, AActor*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		func(Binding, Actor, bAllowBindingsFromAsset);
	}
};

/// Class /Script/LevelSequence.LevelSequenceAnimSequenceLink
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{ 
public:
	TArray<FLevelSequenceAnimSequenceLinkItem>         AnimSequenceLinks;                                          // 0x0028   (0x0010)  
};

/// Class /Script/LevelSequence.LevelSequenceBurnIn
/// Size: 0x0320 (800 bytes) (0x000260 - 0x000320) align 8 MaxSize: 0x0320
class ULevelSequenceBurnIn : public UUserWidget
{ 
public:
	FLevelSequencePlayerSnapshot                       FrameInformation;                                           // 0x0260   (0x00B8)  
	class ALevelSequenceActor*                         LevelSequenceActor;                                         // 0x0318   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnIn.SetSettings
	void SetSettings(UObject* InSettings) // [0x12295a0] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
	// Function /Script/LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	UClass* GetSettingsClass() // [0x2642ba0] Native|Event|Public|BlueprintEvent|Const 
	{
		typedef class UClass* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
};

/// Class /Script/LevelSequence.LevelSequenceDirector
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULevelSequenceDirector : public UObject
{ 
public:
	class ULevelSequencePlayer*                        Player;                                                     // 0x0028   (0x0008)  
	int32_t                                            SubSequenceID;                                              // 0x0030   (0x0004)  
	int32_t                                            MovieScenePlayerIndex;                                      // 0x0034   (0x0004)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceDirector.OnCreated
	void OnCreated() // [0x12295a0] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/LevelSequence.LevelSequenceDirector.GetSequence
	UMovieSceneSequence* GetSequence() // [0x2642b40] Final|Native|Public|BlueprintCallable 
	{
		typedef class UMovieSceneSequence* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObjects
	// TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);                                              // [0x26429e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObject
	UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding) // [0x2642910] Final|Native|Public|BlueprintCallable 
	{
		typedef class UObject* (*FuncPtr)(FMovieSceneObjectBindingID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(ObjectBinding);
	}
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActors
	// TArray<AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);                                                // [0x2642800] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActor
	AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding) // [0x2642730] Final|Native|Public|BlueprintCallable 
	{
		typedef class AActor* (*FuncPtr)(FMovieSceneObjectBindingID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(ObjectBinding);
	}
};

/// Class /Script/LevelSequence.LegacyLevelSequenceDirectorBlueprint
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequencePlayer
/// Size: 0x0600 (1536 bytes) (0x0004E8 - 0x000600) align 8 MaxSize: 0x0600
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	SDK_UNDEFINED(16,341) /* FMulticastInlineDelegate */ __um(OnCameraCut);                                        // 0x04E8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x108];                                     // 0x04F8   (0x0108)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	UCameraComponent* GetActiveCameraComponent() // [0x26426f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UCameraComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor) // [0x26423e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef class ULevelSequencePlayer* (*FuncPtr)(UObject*, ULevelSequence*, FMovieSceneSequencePlaybackSettings, ALevelSequenceActor*&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, LevelSequence, Settings, OutActor);
	}
};

/// Class /Script/LevelSequence.LevelSequenceProjectSettings
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class ULevelSequenceProjectSettings : public UDeveloperSettings
{ 
public:
	bool                                               bDefaultLockEngineToDisplayRate;                            // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            DefaultDisplayRate;                                         // 0x0040   (0x0010)  
	FString                                            DefaultTickResolution;                                      // 0x0050   (0x0010)  
	EUpdateClockSource                                 DefaultClockSource;                                         // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/LevelSequence.LevelSequenceMediaController
/// Size: 0x0248 (584 bytes) (0x000220 - 0x000248) align 8 MaxSize: 0x0248
class ALevelSequenceMediaController : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0220   (0x0008)  MISSED
	class ALevelSequenceActor*                         Sequence;                                                   // 0x0228   (0x0008)  
	class UMediaComponent*                             MediaComponent;                                             // 0x0230   (0x0008)  
	float                                              ServerStartTimeSeconds;                                     // 0x0238   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x023C   (0x000C)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceMediaController.SynchronizeToServer
	void SynchronizeToServer(float DesyncThresholdSeconds) // [0x2643420] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(DesyncThresholdSeconds);
	}
	// Function /Script/LevelSequence.LevelSequenceMediaController.Play
	void Play() // [0x2642c50] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	void OnRep_ServerStartTimeSeconds() // [0x2642c30] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetSequence
	ALevelSequenceActor* GetSequence() // [0x2642b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class ALevelSequenceActor* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetMediaComponent
	UMediaComponent* GetMediaComponent() // [0x24ebdc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UMediaComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
};

#pragma pack(pop)


static_assert(sizeof(UAnimSequenceLevelSequenceLink) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UDefaultLevelSequenceInstanceData) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(ULevelSequenceMetaData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FLevelSequenceObjectReferenceMap) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FLevelSequenceBindingReference) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLevelSequenceBindingReferenceArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLevelSequenceBindingReferences) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FLevelSequenceObject) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(ULevelSequence) == 0x01C8); // 456 bytes (0x000060 - 0x0001C8)
static_assert(sizeof(ULevelSequenceBurnInInitSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULevelSequenceBurnInOptions) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FLevelSequenceCameraSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(ALevelSequenceActor) == 0x02A8); // 680 bytes (0x000220 - 0x0002A8)
static_assert(sizeof(FLevelSequenceAnimSequenceLinkItem) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(ULevelSequenceAnimSequenceLink) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FLevelSequenceSnapshotSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FLevelSequencePlayerSnapshot) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(ULevelSequenceBurnIn) == 0x0320); // 800 bytes (0x000260 - 0x000320)
static_assert(sizeof(ULevelSequenceDirector) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULegacyLevelSequenceDirectorBlueprint) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(ULevelSequencePlayer) == 0x0600); // 1536 bytes (0x0004E8 - 0x000600)
static_assert(sizeof(ULevelSequenceProjectSettings) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(ALevelSequenceMediaController) == 0x0248); // 584 bytes (0x000220 - 0x000248)
static_assert(sizeof(FBoundActorProxy) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLevelSequenceLegacyObjectReference) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(UAnimSequenceLevelSequenceLink, SkelTrackGuid) == 0x0028);
static_assert(offsetof(UAnimSequenceLevelSequenceLink, PathToLevelSequence) == 0x0038);
static_assert(offsetof(UDefaultLevelSequenceInstanceData, TransformOriginActor) == 0x0030);
static_assert(offsetof(UDefaultLevelSequenceInstanceData, TransformOrigin) == 0x0040);
static_assert(offsetof(FLevelSequenceBindingReference, PackageName) == 0x0000);
static_assert(offsetof(FLevelSequenceBindingReference, ExternalObjectPath) == 0x0010);
static_assert(offsetof(FLevelSequenceBindingReference, ObjectPath) == 0x0028);
static_assert(offsetof(FLevelSequenceBindingReferenceArray, References) == 0x0000);
static_assert(offsetof(FLevelSequenceBindingReferences, BindingIdToReferences) == 0x0000);
static_assert(offsetof(FLevelSequenceObject, ObjectOrOwner) == 0x0000);
static_assert(offsetof(FLevelSequenceObject, ComponentName) == 0x0020);
static_assert(offsetof(FLevelSequenceObject, CachedComponent) == 0x0030);
static_assert(offsetof(ULevelSequence, MovieScene) == 0x0068);
static_assert(offsetof(ULevelSequence, ObjectReferences) == 0x0070);
static_assert(offsetof(ULevelSequence, BindingReferences) == 0x00C0);
static_assert(offsetof(ULevelSequence, PossessedObjects) == 0x0160);
static_assert(offsetof(ULevelSequence, DirectorClass) == 0x01B0);
static_assert(offsetof(ULevelSequence, AssetUserData) == 0x01B8);
static_assert(offsetof(ULevelSequenceBurnInOptions, BurnInClass) == 0x0030);
static_assert(offsetof(ULevelSequenceBurnInOptions, Settings) == 0x0048);
static_assert(offsetof(FLevelSequenceCameraSettings, AspectRatioAxisConstraint) == 0x0001);
static_assert(offsetof(ALevelSequenceActor, PlaybackSettings) == 0x0238);
static_assert(offsetof(ALevelSequenceActor, SequencePlayer) == 0x0250);
static_assert(offsetof(ALevelSequenceActor, LevelSequence) == 0x0258);
static_assert(offsetof(ALevelSequenceActor, CameraSettings) == 0x0270);
static_assert(offsetof(ALevelSequenceActor, BurnInOptions) == 0x0278);
static_assert(offsetof(ALevelSequenceActor, BindingOverrides) == 0x0280);
static_assert(offsetof(ALevelSequenceActor, DefaultInstanceData) == 0x0290);
static_assert(offsetof(ALevelSequenceActor, BurnInInstance) == 0x0298);
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, SkelTrackGuid) == 0x0000);
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, PathToAnimSequence) == 0x0010);
static_assert(offsetof(ULevelSequenceAnimSequenceLink, AnimSequenceLinks) == 0x0028);
static_assert(offsetof(FLevelSequenceSnapshotSettings, FrameRate) == 0x0004);
static_assert(offsetof(FLevelSequencePlayerSnapshot, MasterName) == 0x0000);
static_assert(offsetof(FLevelSequencePlayerSnapshot, MasterTime) == 0x0010);
static_assert(offsetof(FLevelSequencePlayerSnapshot, SourceTime) == 0x0020);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotName) == 0x0030);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotLocalTime) == 0x0040);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotSourceTime) == 0x0050);
static_assert(offsetof(FLevelSequencePlayerSnapshot, SourceTimecode) == 0x0060);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CameraComponent) == 0x0070);
static_assert(offsetof(FLevelSequencePlayerSnapshot, Settings) == 0x0098);
static_assert(offsetof(FLevelSequencePlayerSnapshot, ActiveShot) == 0x00A8);
static_assert(offsetof(FLevelSequencePlayerSnapshot, ShotID) == 0x00B0);
static_assert(offsetof(ULevelSequenceBurnIn, FrameInformation) == 0x0260);
static_assert(offsetof(ULevelSequenceBurnIn, LevelSequenceActor) == 0x0318);
static_assert(offsetof(ULevelSequenceDirector, Player) == 0x0028);
static_assert(offsetof(ULevelSequenceProjectSettings, DefaultDisplayRate) == 0x0040);
static_assert(offsetof(ULevelSequenceProjectSettings, DefaultTickResolution) == 0x0050);
static_assert(offsetof(ULevelSequenceProjectSettings, DefaultClockSource) == 0x0060);
static_assert(offsetof(ALevelSequenceMediaController, Sequence) == 0x0228);
static_assert(offsetof(ALevelSequenceMediaController, MediaComponent) == 0x0230);
