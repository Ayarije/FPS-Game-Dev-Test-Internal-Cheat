
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CinematicCamera.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class ATemplateSequenceActor;
class UCameraAnimationSequence;
class USequenceCameraShakeCameraStandIn;
class USequenceCameraShakePattern;
class USequenceCameraShakeSequencePlayer;
class UTemplateSequence;
class UTemplateSequencePlayer;
class UTemplateSequencePropertyScalingEvaluatorSystem;
class UTemplateSequencePropertyScalingInstantiatorSystem;
class UTemplateSequenceSection;
class UTemplateSequenceSystem;
class UTemplateSequenceTrack;

/// Enum /Script/TemplateSequence.ETemplateSectionPropertyScaleType
/// Size: 0x04 (4 bytes)
enum class ETemplateSectionPropertyScaleType : uint32_t
{
	ETemplateSectionPropertyScaleType__FloatProperty                                 = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly                 = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly                 = 2
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FTemplateSequenceBindingOverrideData
{ 
	TWeakObjectPtr<class UObject*>                     Object;                                                     // 0x0000   (0x0008)  
	bool                                               bOverridesDefault;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSectionPropertyScale
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FTemplateSectionPropertyScale
{ 
	FGuid                                              ObjectBinding;                                              // 0x0000   (0x0010)  
	FMovieScenePropertyBinding                         PropertyBinding;                                            // 0x0010   (0x0014)  
	ETemplateSectionPropertyScaleType                  PropertyScaleType;                                          // 0x0024   (0x0004)  
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0028   (0x00A0)  
};

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x0108 (264 bytes) (0x000060 - 0x000108) align 8 MaxSize: 0x0108
class UTemplateSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0060   (0x0008)  
	TSoftObjectPtr<class UClass*>                      BoundActorClass;                                            // 0x0068   (0x0028)  
	TWeakObjectPtr<class AActor*>                      BoundPreviewActor;                                          // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0098   (0x0020)  MISSED
	TMap<FGuid, FName>                                 BoundActorComponents;                                       // 0x00B8   (0x0050)  
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0108 (264 bytes) (0x000108 - 0x000108) align 8 MaxSize: 0x0108
class UCameraAnimationSequence : public UTemplateSequence
{ 
public:
};

/// Class /Script/TemplateSequence.SequenceCameraShakeCameraStandIn
/// Size: 0x0670 (1648 bytes) (0x000028 - 0x000670) align 16 MaxSize: 0x0670
class USequenceCameraShakeCameraStandIn : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	float                                              FieldOfView;                                                // 0x0030   (0x0004)  
	bool                                               bConstrainAspectRatio : 1;                                  // 0x0034:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              AspectRatio;                                                // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FPostProcessSettings                               PostProcessSettings;                                        // 0x0040   (0x0560)  
	float                                              PostProcessBlendWeight;                                     // 0x05A0   (0x0004)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x05A4   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x05B0   (0x0018)  
	FCameraFocusSettings                               FocusSettings;                                              // 0x05C8   (0x0058)  
	float                                              CurrentFocalLength;                                         // 0x0620   (0x0004)  
	float                                              CurrentAperture;                                            // 0x0624   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x0628   (0x0004)  
	unsigned char                                      UnknownData03_7[0x44];                                      // 0x062C   (0x0044)  MISSED
};

/// Class /Script/TemplateSequence.SequenceCameraShakePattern
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class USequenceCameraShakePattern : public UCameraShakePattern
{ 
public:
	class UCameraAnimationSequence*                    Sequence;                                                   // 0x0028   (0x0008)  
	float                                              PlayRate;                                                   // 0x0030   (0x0004)  
	float                                              Scale;                                                      // 0x0034   (0x0004)  
	float                                              BlendInTime;                                                // 0x0038   (0x0004)  
	float                                              BlendOutTime;                                               // 0x003C   (0x0004)  
	float                                              RandomSegmentDuration;                                      // 0x0040   (0x0004)  
	bool                                               bRandomSegment;                                             // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	class USequenceCameraShakeSequencePlayer*          Player;                                                     // 0x0048   (0x0008)  
	class USequenceCameraShakeCameraStandIn*           CameraStandIn;                                              // 0x0050   (0x0008)  
};

/// Class /Script/TemplateSequence.SequenceCameraShakeSequencePlayer
/// Size: 0x0428 (1064 bytes) (0x000028 - 0x000428) align 8 MaxSize: 0x0428
class USequenceCameraShakeSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x2A8];                                     // 0x0028   (0x02A8)  MISSED
	class UObject*                                     BoundObjectOverride;                                        // 0x02D0   (0x0008)  
	class UMovieSceneSequence*                         Sequence;                                                   // 0x02D8   (0x0008)  
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x02E0   (0x00E8)  
	unsigned char                                      UnknownData01_7[0x60];                                      // 0x03C8   (0x0060)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0278 (632 bytes) (0x000220 - 0x000278) align 8 MaxSize: 0x0278
class ATemplateSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0220   (0x0010)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x0230   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0244   (0x0004)  MISSED
	class UTemplateSequencePlayer*                     SequencePlayer;                                             // 0x0248   (0x0008)  
	FSoftObjectPath                                    TemplateSequence;                                           // 0x0250   (0x0018)  
	FTemplateSequenceBindingOverrideData               BindingOverride;                                            // 0x0268   (0x000C)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0274   (0x0004)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	void SetSequence(UTemplateSequence* InSequence) // [0x9e58c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UTemplateSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSequence);
	}
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	void SetBinding(AActor* Actor, bool bOverridesDefault) // [0x9e57f0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(AActor*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Actor, bOverridesDefault);
	}
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	UTemplateSequence* LoadSequence() // [0x9e57c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UTemplateSequence* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	UTemplateSequencePlayer* GetSequencePlayer() // [0x9e5790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UTemplateSequencePlayer* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	UTemplateSequence* GetSequence() // [0x9e5760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UTemplateSequence* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x04F0 (1264 bytes) (0x0004E8 - 0x0004F0) align 8 MaxSize: 0x04F0
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x04E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	UTemplateSequencePlayer* CreateTemplateSequencePlayer(UObject* WorldContextObject, UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, ATemplateSequenceActor*& OutActor) // [0x9e55e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef class UTemplateSequencePlayer* (*FuncPtr)(UObject*, UTemplateSequence*, FMovieSceneSequencePlaybackSettings, ATemplateSequenceActor*&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, TemplateSequence, Settings, OutActor);
	}
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0180 (384 bytes) (0x000168 - 0x000180) align 8 MaxSize: 0x0180
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0168   (0x0008)  MISSED
	TArray<FTemplateSectionPropertyScale>              PropertyScales;                                             // 0x0170   (0x0010)  
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x00B0 (176 bytes) (0x000040 - 0x0000B0) align 8 MaxSize: 0x00B0
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0040   (0x0070)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
/// Size: 0x0098 (152 bytes) (0x000040 - 0x000098) align 8 MaxSize: 0x0098
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0040   (0x0058)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
/// Size: 0x0090 (144 bytes) (0x000040 - 0x000090) align 8 MaxSize: 0x0090
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UTemplateSequence) == 0x0108); // 264 bytes (0x000060 - 0x000108)
static_assert(sizeof(UCameraAnimationSequence) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(USequenceCameraShakeCameraStandIn) == 0x0670); // 1648 bytes (0x000028 - 0x000670)
static_assert(sizeof(USequenceCameraShakePattern) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(USequenceCameraShakeSequencePlayer) == 0x0428); // 1064 bytes (0x000028 - 0x000428)
static_assert(sizeof(FTemplateSequenceBindingOverrideData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(ATemplateSequenceActor) == 0x0278); // 632 bytes (0x000220 - 0x000278)
static_assert(sizeof(UTemplateSequencePlayer) == 0x04F0); // 1264 bytes (0x0004E8 - 0x0004F0)
static_assert(sizeof(FTemplateSectionPropertyScale) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(UTemplateSequenceSection) == 0x0180); // 384 bytes (0x000168 - 0x000180)
static_assert(sizeof(UTemplateSequenceSystem) == 0x00B0); // 176 bytes (0x000040 - 0x0000B0)
static_assert(sizeof(UTemplateSequencePropertyScalingInstantiatorSystem) == 0x0098); // 152 bytes (0x000040 - 0x000098)
static_assert(sizeof(UTemplateSequencePropertyScalingEvaluatorSystem) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(UTemplateSequenceTrack) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(offsetof(UTemplateSequence, MovieScene) == 0x0060);
static_assert(offsetof(UTemplateSequence, BoundActorClass) == 0x0068);
static_assert(offsetof(UTemplateSequence, BoundPreviewActor) == 0x0090);
static_assert(offsetof(UTemplateSequence, BoundActorComponents) == 0x00B8);
static_assert(offsetof(USequenceCameraShakeCameraStandIn, PostProcessSettings) == 0x0040);
static_assert(offsetof(USequenceCameraShakeCameraStandIn, Filmback) == 0x05A4);
static_assert(offsetof(USequenceCameraShakeCameraStandIn, LensSettings) == 0x05B0);
static_assert(offsetof(USequenceCameraShakeCameraStandIn, FocusSettings) == 0x05C8);
static_assert(offsetof(USequenceCameraShakePattern, Sequence) == 0x0028);
static_assert(offsetof(USequenceCameraShakePattern, Player) == 0x0048);
static_assert(offsetof(USequenceCameraShakePattern, CameraStandIn) == 0x0050);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, BoundObjectOverride) == 0x02D0);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, Sequence) == 0x02D8);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, RootTemplateInstance) == 0x02E0);
static_assert(offsetof(FTemplateSequenceBindingOverrideData, Object) == 0x0000);
static_assert(offsetof(ATemplateSequenceActor, PlaybackSettings) == 0x0230);
static_assert(offsetof(ATemplateSequenceActor, SequencePlayer) == 0x0248);
static_assert(offsetof(ATemplateSequenceActor, TemplateSequence) == 0x0250);
static_assert(offsetof(ATemplateSequenceActor, BindingOverride) == 0x0268);
static_assert(offsetof(FTemplateSectionPropertyScale, ObjectBinding) == 0x0000);
static_assert(offsetof(FTemplateSectionPropertyScale, PropertyBinding) == 0x0010);
static_assert(offsetof(FTemplateSectionPropertyScale, PropertyScaleType) == 0x0024);
static_assert(offsetof(FTemplateSectionPropertyScale, FloatChannel) == 0x0028);
static_assert(offsetof(UTemplateSequenceSection, PropertyScales) == 0x0170);
