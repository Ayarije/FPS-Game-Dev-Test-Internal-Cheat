
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "LiveLinkInterface.h"
#include "TimeManagement.h"

#pragma pack(push, 0x1)

class ULiveLinkAnimationAxisSwitchPreProcessor;
class ULiveLinkAnimationFrameInterpolationProcessor;
class ULiveLinkAnimationRoleToTransform;
class ULiveLinkAnimationVirtualSubject;
class ULiveLinkBasicFrameInterpolationProcessor;
class ULiveLinkBlueprintLibrary;
class ULiveLinkBlueprintVirtualSubject;
class ULiveLinkComponent;
class ULiveLinkDrivenComponent;
class ULiveLinkInstance;
class ULiveLinkMessageBusFinder;
class ULiveLinkMessageBusSourceFactory;
class ULiveLinkMessageBusSourceSettings;
class ULiveLinkPreset;
class ULiveLinkRemapAsset;
class ULiveLinkRetargetAsset;
class ULiveLinkSettings;
class ULiveLinkTimeSynchronizationSource;
class ULiveLinkTimecodeProvider;
class ULiveLinkTransformAxisSwitchPreProcessor;
class ULiveLinkVirtualSubjectSourceSettings;

/// Enum /Script/LiveLink.ELiveLinkAxis
/// Size: 0x01 (1 bytes)
enum class ELiveLinkAxis : uint8_t
{
	ELiveLinkAxis__X                                                                 = 0,
	ELiveLinkAxis__Y                                                                 = 1,
	ELiveLinkAxis__Z                                                                 = 2,
	ELiveLinkAxis__XNeg                                                              = 3,
	ELiveLinkAxis__YNeg                                                              = 4,
	ELiveLinkAxis__ZNeg                                                              = 5
};

/// Enum /Script/LiveLink.ELiveLinkTimecodeProviderEvaluationType
/// Size: 0x04 (4 bytes)
enum class ELiveLinkTimecodeProviderEvaluationType : uint32_t
{
	ELiveLinkTimecodeProviderEvaluationType__Lerp                                    = 0,
	ELiveLinkTimecodeProviderEvaluationType__Nearest                                 = 1,
	ELiveLinkTimecodeProviderEvaluationType__Latest                                  = 2
};

/// Struct /Script/LiveLink.LiveLinkRoleProjectSetting
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FLiveLinkRoleProjectSetting
{ 
	class UClass*                                      Role;                                                       // 0x0000   (0x0008)  
	class UClass*                                      SettingClass;                                               // 0x0008   (0x0008)  
	class UClass*                                      FrameInterpolationProcessor;                                // 0x0010   (0x0008)  
	TArray<class UClass*>                              FramePreProcessors;                                         // 0x0018   (0x0010)  
};

/// Struct /Script/LiveLink.AnimNode_LiveLinkPose
/// Size: 0x0050 (80 bytes) (0x000010 - 0x000050) align 8 MaxSize: 0x0050
struct FAnimNode_LiveLinkPose : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	FLiveLinkSubjectName                               LiveLinkSubjectName;                                        // 0x0020   (0x0008)  
	class UClass*                                      RetargetAsset;                                              // 0x0028   (0x0008)  
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Struct /Script/LiveLink.LiveLinkInstanceProxy
/// Size: 0x07C0 (1984 bytes) (0x000770 - 0x0007C0) align 16 MaxSize: 0x07C0
struct FLiveLinkInstanceProxy : FAnimInstanceProxy
{ 
	FAnimNode_LiveLinkPose                             PoseNode;                                                   // 0x0770   (0x0050)  
};

/// Struct /Script/LiveLink.ProviderPollResult
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FProviderPollResult
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            MachineName;                                                // 0x0020   (0x0010)  
	double                                             MachineTimeOffset;                                          // 0x0030   (0x0008)  
};

/// Struct /Script/LiveLink.LiveLinkRetargetAssetReference
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FLiveLinkRetargetAssetReference
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Class /Script/LiveLink.LiveLinkRetargetAsset
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkRetargetAsset : public UObject
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkBasicFrameInterpolationProcessor
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{ 
public:
	bool                                               bInterpolatePropertyValues;                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0029   (0x0017)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationFrameInterpolationProcessor
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationRoleToTransform
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{ 
public:
	FName                                              BoneName;                                                   // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationVirtualSubject
/// Size: 0x0168 (360 bytes) (0x000160 - 0x000168) align 8 MaxSize: 0x0168
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{ 
public:
	unsigned char                                      UnknownData00_8[0x1];                                       // 0x0160   (0x0001)  MISSED
	bool                                               bAppendSubjectNameToBones;                                  // 0x0161   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0162   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{ 
public:
	ELiveLinkAxis                                      FrontAxis;                                                  // 0x0028   (0x0001)  
	ELiveLinkAxis                                      RightAxis;                                                  // 0x0029   (0x0001)  
	ELiveLinkAxis                                      UpAxis;                                                     // 0x002A   (0x0001)  
	bool                                               bUseOffsetPosition;                                         // 0x002B   (0x0001)  
	bool                                               bUseOffsetOrientation;                                      // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	FVector                                            OffsetPosition;                                             // 0x0030   (0x000C)  
	FRotator                                           OffsetOrientation;                                          // 0x003C   (0x000C)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformNames
	// void TransformNames(FSubjectFrameHandle& SubjectFrameHandle, TArray<FName>& TransformNames);                             // [0xe781c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformName
	void TransformName(FLiveLinkTransform& LiveLinkTransform, FName& Name) // [0xe780b0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(FLiveLinkTransform&, FName&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(LiveLinkTransform, Name);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
	void SetLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bEnabled) // [0xe77dd0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FLiveLinkSubjectKey, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(SubjectKey, bEnabled);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.RemoveSource
	bool RemoveSource(FLiveLinkSourceHandle& SourceHandle) // [0xe77d00] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FLiveLinkSourceHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(SourceHandle);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
	void ParentBoneSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform) // [0xe77aa0] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(FLiveLinkTransform&, FTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(LiveLinkTransform, Transform);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
	int32_t NumberOfTransforms(FSubjectFrameHandle& SubjectFrameHandle) // [0xe779d0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)(FSubjectFrameHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(SubjectFrameHandle);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
	bool IsSpecificLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bForThisFrame) // [0xe778e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FLiveLinkSubjectKey, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(SubjectKey, bForThisFrame);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
	bool IsSourceStillValid(FLiveLinkSourceHandle& SourceHandle) // [0xe77810] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FLiveLinkSourceHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(SourceHandle);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
	bool IsLiveLinkSubjectEnabled(FLiveLinkSubjectName SubjectName) // [0xe77780] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FLiveLinkSubjectName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(SubjectName);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.HasParent
	bool HasParent(FLiveLinkTransform& LiveLinkTransform) // [0xe776c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FLiveLinkTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(LiveLinkTransform);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
	void GetTransformByName(FSubjectFrameHandle& SubjectFrameHandle, FName TransformName, FLiveLinkTransform& LiveLinkTransform) // [0xe77530] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(FSubjectFrameHandle&, FName, FLiveLinkTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(SubjectFrameHandle, TransformName, LiveLinkTransform);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
	void GetTransformByIndex(FSubjectFrameHandle& SubjectFrameHandle, int32_t TransformIndex, FLiveLinkTransform& LiveLinkTransform) // [0xe773a0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(FSubjectFrameHandle&, int32_t, FLiveLinkTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(SubjectFrameHandle, TransformIndex, LiveLinkTransform);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
	UClass* GetSpecificLiveLinkSubjectRole(FLiveLinkSubjectKey SubjectKey) // [0xe76de0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UClass* (*FuncPtr)(FLiveLinkSubjectKey);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(SubjectKey);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceType
	FText GetSourceType(FLiveLinkSourceHandle& SourceHandle) // [0xe76cb0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	{
		typedef FText (*FuncPtr)(FLiveLinkSourceHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(SourceHandle);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
	FText GetSourceStatus(FLiveLinkSourceHandle& SourceHandle) // [0xe76b80] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	{
		typedef FText (*FuncPtr)(FLiveLinkSourceHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(SourceHandle);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
	FText GetSourceMachineName(FLiveLinkSourceHandle& SourceHandle) // [0xe76a50] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	{
		typedef FText (*FuncPtr)(FLiveLinkSourceHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(SourceHandle);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
	void GetRootTransform(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkTransform& LiveLinkTransform) // [0xe76900] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(FSubjectFrameHandle&, FLiveLinkTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func(SubjectFrameHandle, LiveLinkTransform);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
	bool GetPropertyValue(FLiveLinkBasicBlueprintData& BasicData, FName PropertyName, float& Value) // [0xe76610] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FLiveLinkBasicBlueprintData&, FName, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(BasicData, PropertyName, Value);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetParent
	void GetParent(FLiveLinkTransform& LiveLinkTransform, FLiveLinkTransform& Parent) // [0xe764d0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(FLiveLinkTransform&, FLiveLinkTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		func(LiveLinkTransform, Parent);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetMetadata
	void GetMetadata(FSubjectFrameHandle& SubjectFrameHandle, FSubjectMetadata& MetaData) // [0xe76330] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(FSubjectFrameHandle&, FSubjectMetadata&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		func(SubjectFrameHandle, MetaData);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
	// TArray<FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject);              // [0xe76220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
	UClass* GetLiveLinkSubjectRole(FLiveLinkSubjectName SubjectName) // [0xe76190] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UClass* (*FuncPtr)(FLiveLinkSubjectName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func(SubjectName);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
	// TArray<FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);                                // [0xe760c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetCurves
	// void GetCurves(FSubjectFrameHandle& SubjectFrameHandle, TMap<FName, float>& Curves);                                     // [0xe75f20] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetChildren
	// void GetChildren(FLiveLinkTransform& LiveLinkTransform, TArray<FLiveLinkTransform>& Children);                           // [0xe75db0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetBasicData
	void GetBasicData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkBasicBlueprintData& BasicBlueprintData) // [0xe75c00] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(FSubjectFrameHandle&, FLiveLinkBasicBlueprintData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		func(SubjectFrameHandle, BasicBlueprintData);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
	bool GetAnimationStaticData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkSkeletonStaticData& AnimationStaticData) // [0xe75810] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FSubjectFrameHandle&, FLiveLinkSkeletonStaticData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func(SubjectFrameHandle, AnimationStaticData);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
	bool GetAnimationFrameData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkAnimationFrameData& AnimationFrameData) // [0xe75670] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FSubjectFrameHandle&, FLiveLinkAnimationFrameData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func(SubjectFrameHandle, AnimationFrameData);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
	bool EvaluateLiveLinkFrameWithSpecificRole(FLiveLinkSubjectName SubjectName, UClass* Role, FLiveLinkBaseBlueprintData& OutBlueprintData) // [0xe6f800] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FLiveLinkSubjectName, UClass*, FLiveLinkBaseBlueprintData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func(SubjectName, Role, OutBlueprintData);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
	bool EvaluateLiveLinkFrameAtWorldTimeOffset(FLiveLinkSubjectName SubjectName, UClass* Role, float WorldTimeOffset, FLiveLinkBaseBlueprintData& OutBlueprintData) // [0xe6f620] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FLiveLinkSubjectName, UClass*, float, FLiveLinkBaseBlueprintData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		return func(SubjectName, Role, WorldTimeOffset, OutBlueprintData);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
	bool EvaluateLiveLinkFrameAtSceneTime(FLiveLinkSubjectName SubjectName, UClass* Role, FTimecode SceneTime, FLiveLinkBaseBlueprintData& OutBlueprintData) // [0xe6f430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FLiveLinkSubjectName, UClass*, FTimecode, FLiveLinkBaseBlueprintData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		return func(SubjectName, Role, SceneTime, OutBlueprintData);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
	bool EvaluateLiveLinkFrame(FLiveLinkSubjectRepresentation SubjectRepresentation, FLiveLinkBaseBlueprintData& OutBlueprintData) // [0xe6f2f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FLiveLinkSubjectRepresentation, FLiveLinkBaseBlueprintData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		return func(SubjectRepresentation, OutBlueprintData);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
	void ComponentSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform) // [0xe75380] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(FLiveLinkTransform&, FTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		func(LiveLinkTransform, Transform);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ChildCount
	int32_t ChildCount(FLiveLinkTransform& LiveLinkTransform) // [0xe752c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)(FLiveLinkTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		return func(LiveLinkTransform);
	}
};

/// Class /Script/LiveLink.LiveLinkBlueprintVirtualSubject
/// Size: 0x0188 (392 bytes) (0x000160 - 0x000188) align 8 MaxSize: 0x0188
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0160   (0x0028)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
	bool UpdateVirtualSubjectStaticData_Internal(FLiveLinkBaseStaticData& InStruct) // [0xe6fb80] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FLiveLinkBaseStaticData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(InStruct);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
	bool UpdateVirtualSubjectFrameData_Internal(FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime) // [0xe6f990] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FLiveLinkBaseFrameData&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(InStruct, bInShouldStampCurrentTime);
	}
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
	void OnUpdate() // [0x12295a0] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
	void OnInitialize() // [0x12295a0] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
};

/// Class /Script/LiveLink.LiveLinkComponent
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align 8 MaxSize: 0x00D0
class ULiveLinkComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,600) /* FMulticastInlineDelegate */ __um(OnLiveLinkUpdated);                                  // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
	void GetSubjectDataAtWorldTime(FName SubjectName, float WorldTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle) // [0xe771e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName, float, bool&, FSubjectFrameHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(SubjectName, WorldTime, bSuccess, SubjectFrameHandle);
	}
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
	void GetSubjectDataAtSceneTime(FName SubjectName, FTimecode& SceneTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle) // [0xe76ff0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName, FTimecode&, bool&, FSubjectFrameHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(SubjectName, SceneTime, bSuccess, SubjectFrameHandle);
	}
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectData
	void GetSubjectData(FName SubjectName, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle) // [0xe76e90] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName, bool&, FSubjectFrameHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(SubjectName, bSuccess, SubjectFrameHandle);
	}
	// Function /Script/LiveLink.LiveLinkComponent.GetAvailableSubjectNames
	// void GetAvailableSubjectNames(TArray<FName>& SubjectNames);                                                              // [0xe75b50] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LiveLink.LiveLinkDrivenComponent
/// Size: 0x00C8 (200 bytes) (0x0000B0 - 0x0000C8) align 8 MaxSize: 0x00C8
class ULiveLinkDrivenComponent : public UActorComponent
{ 
public:
	FLiveLinkSubjectName                               SubjectName;                                                // 0x00B0   (0x0008)  
	FName                                              ActorTransformBone;                                         // 0x00B8   (0x0008)  
	bool                                               bModifyActorTransform;                                      // 0x00C0   (0x0001)  
	bool                                               bSetRelativeLocation;                                       // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00C2   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkInstance
/// Size: 0x02C0 (704 bytes) (0x0002B8 - 0x0002C0) align 16 MaxSize: 0x02C0
class ULiveLinkInstance : public UAnimInstance
{ 
public:
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                       // 0x02B8   (0x0008)  


	/// Functions
	// Function /Script/LiveLink.LiveLinkInstance.SetSubject
	void SetSubject(FLiveLinkSubjectName SubjectName) // [0xe77fb0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FLiveLinkSubjectName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(SubjectName);
	}
	// Function /Script/LiveLink.LiveLinkInstance.SetRetargetAsset
	void SetRetargetAsset(UClass* RetargetAsset) // [0xe77eb0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(RetargetAsset);
	}
};

/// Class /Script/LiveLink.LiveLinkMessageBusFinder
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class ULiveLinkMessageBusFinder : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
	// void GetAvailableProviders(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Duration, TArray<FProviderPollResult>& AvailableProviders); // [0xe75980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
	ULiveLinkMessageBusFinder* ConstructMessageBusFinder() // [0xe75640] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class ULiveLinkMessageBusFinder* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
	void ConnectToProvider(FProviderPollResult& Provider, FLiveLinkSourceHandle& SourceHandle) // [0xe754e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FProviderPollResult&, FLiveLinkSourceHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Provider, SourceHandle);
	}
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceSettings
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkPreset
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class ULiveLinkPreset : public UObject
{ 
public:
	TArray<FLiveLinkSourcePreset>                      Sources;                                                    // 0x0028   (0x0010)  
	TArray<FLiveLinkSubjectPreset>                     Subjects;                                                   // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/LiveLink.LiveLinkPreset.BuildFromClient
	void BuildFromClient() // [0xe752a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/LiveLink.LiveLinkPreset.ApplyToClient
	bool ApplyToClient() // [0xe75270] Final|Native|Public|BlueprintCallable|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/LiveLink.LiveLinkPreset.AddToClient
	bool AddToClient(bool bRecreatePresets) // [0xe751d0] Final|Native|Public|BlueprintCallable|Const 
	{
		typedef bool (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(bRecreatePresets);
	}
};

/// Class /Script/LiveLink.LiveLinkRemapAsset
/// Size: 0x00C8 (200 bytes) (0x000028 - 0x0000C8) align 8 MaxSize: 0x00C8
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0028   (0x00A0)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkRemapAsset.RemapCurveElements
	// void RemapCurveElements(TMap<FName, float>& CurveItems);                                                                 // [0xe77c00] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
	FName GetRemappedCurveName(FName CurveName) // [0xe76860] Native|Event|Public|BlueprintEvent|Const 
	{
		typedef FName (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(CurveName);
	}
	// Function /Script/LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
	FName GetRemappedBoneName(FName BoneName) // [0xe767c0] Native|Event|Public|BlueprintEvent|Const 
	{
		typedef FName (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(BoneName);
	}
};

/// Class /Script/LiveLink.LiveLinkSettings
/// Size: 0x00D0 (208 bytes) (0x000028 - 0x0000D0) align 8 MaxSize: 0x00D0
class ULiveLinkSettings : public UObject
{ 
public:
	TArray<FLiveLinkRoleProjectSetting>                DefaultRoleSettings;                                        // 0x0028   (0x0010)  
	class UClass*                                      FrameInterpolationProcessor;                                // 0x0038   (0x0008)  
	TWeakObjectPtr<class ULiveLinkPreset*>             DefaultLiveLinkPreset;                                      // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0048   (0x0020)  MISSED
	FDirectoryPath                                     PresetSaveDir;                                              // 0x0068   (0x0010)  
	float                                              ClockOffsetCorrectionStep;                                  // 0x0078   (0x0004)  
	ELiveLinkSourceMode                                DefaultMessageBusSourceMode;                                // 0x007C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	double                                             MessageBusPingRequestFrequency;                             // 0x0080   (0x0008)  
	double                                             MessageBusHeartbeatFrequency;                               // 0x0088   (0x0008)  
	double                                             MessageBusHeartbeatTimeout;                                 // 0x0090   (0x0008)  
	double                                             MessageBusTimeBeforeRemovingInactiveSource;                 // 0x0098   (0x0008)  
	double                                             TimeWithoutFrameToBeConsiderAsInvalid;                      // 0x00A0   (0x0008)  
	FLinearColor                                       ValidColor;                                                 // 0x00A8   (0x0010)  
	FLinearColor                                       InvalidColor;                                               // 0x00B8   (0x0010)  
	char                                               TextSizeSource;                                             // 0x00C8   (0x0001)  
	char                                               TextSizeSubject;                                            // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x00CA   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTimecodeProvider
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{ 
public:
	FLiveLinkSubjectKey                                SubjectKey;                                                 // 0x0030   (0x0018)  
	ELiveLinkTimecodeProviderEvaluationType            Evaluation;                                                 // 0x0048   (0x0004)  
	bool                                               bOverrideFrameRate;                                         // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	FFrameRate                                         OverrideFrameRate;                                          // 0x0050   (0x0008)  
	int32_t                                            BufferSize;                                                 // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_7[0x64];                                      // 0x005C   (0x0064)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTimeSynchronizationSource
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{ 
public:
	FLiveLinkSubjectName                               SubjectName;                                                // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0038   (0x0048)  MISSED
};

/// Class /Script/LiveLink.LiveLinkVirtualSubjectSourceSettings
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align 8 MaxSize: 0x00A8
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{ 
public:
	FName                                              SourceName;                                                 // 0x00A0   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(ULiveLinkRetargetAsset) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkBasicFrameInterpolationProcessor) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULiveLinkAnimationFrameInterpolationProcessor) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(ULiveLinkAnimationRoleToTransform) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULiveLinkAnimationVirtualSubject) == 0x0168); // 360 bytes (0x000160 - 0x000168)
static_assert(sizeof(ULiveLinkTransformAxisSwitchPreProcessor) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(ULiveLinkAnimationAxisSwitchPreProcessor) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(ULiveLinkBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkBlueprintVirtualSubject) == 0x0188); // 392 bytes (0x000160 - 0x000188)
static_assert(sizeof(ULiveLinkComponent) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(ULiveLinkDrivenComponent) == 0x00C8); // 200 bytes (0x0000B0 - 0x0000C8)
static_assert(sizeof(ULiveLinkInstance) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(sizeof(ULiveLinkMessageBusFinder) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(ULiveLinkMessageBusSourceFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkMessageBusSourceSettings) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(ULiveLinkPreset) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(ULiveLinkRemapAsset) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(FLiveLinkRoleProjectSetting) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(ULiveLinkSettings) == 0x00D0); // 208 bytes (0x000028 - 0x0000D0)
static_assert(sizeof(ULiveLinkTimecodeProvider) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(ULiveLinkTimeSynchronizationSource) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(ULiveLinkVirtualSubjectSourceSettings) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(FAnimNode_LiveLinkPose) == 0x0050); // 80 bytes (0x000010 - 0x000050)
static_assert(sizeof(FLiveLinkInstanceProxy) == 0x07C0); // 1984 bytes (0x000770 - 0x0007C0)
static_assert(sizeof(FProviderPollResult) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLiveLinkRetargetAssetReference) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(ULiveLinkAnimationRoleToTransform, BoneName) == 0x0028);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, FrontAxis) == 0x0028);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, RightAxis) == 0x0029);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, UpAxis) == 0x002A);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OffsetPosition) == 0x0030);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OffsetOrientation) == 0x003C);
static_assert(offsetof(ULiveLinkDrivenComponent, SubjectName) == 0x00B0);
static_assert(offsetof(ULiveLinkDrivenComponent, ActorTransformBone) == 0x00B8);
static_assert(offsetof(ULiveLinkInstance, CurrentRetargetAsset) == 0x02B8);
static_assert(offsetof(ULiveLinkPreset, Sources) == 0x0028);
static_assert(offsetof(ULiveLinkPreset, Subjects) == 0x0038);
static_assert(offsetof(FLiveLinkRoleProjectSetting, Role) == 0x0000);
static_assert(offsetof(FLiveLinkRoleProjectSetting, SettingClass) == 0x0008);
static_assert(offsetof(FLiveLinkRoleProjectSetting, FrameInterpolationProcessor) == 0x0010);
static_assert(offsetof(FLiveLinkRoleProjectSetting, FramePreProcessors) == 0x0018);
static_assert(offsetof(ULiveLinkSettings, DefaultRoleSettings) == 0x0028);
static_assert(offsetof(ULiveLinkSettings, FrameInterpolationProcessor) == 0x0038);
static_assert(offsetof(ULiveLinkSettings, DefaultLiveLinkPreset) == 0x0040);
static_assert(offsetof(ULiveLinkSettings, PresetSaveDir) == 0x0068);
static_assert(offsetof(ULiveLinkSettings, DefaultMessageBusSourceMode) == 0x007C);
static_assert(offsetof(ULiveLinkSettings, ValidColor) == 0x00A8);
static_assert(offsetof(ULiveLinkSettings, InvalidColor) == 0x00B8);
static_assert(offsetof(ULiveLinkTimecodeProvider, SubjectKey) == 0x0030);
static_assert(offsetof(ULiveLinkTimecodeProvider, Evaluation) == 0x0048);
static_assert(offsetof(ULiveLinkTimecodeProvider, OverrideFrameRate) == 0x0050);
static_assert(offsetof(ULiveLinkTimeSynchronizationSource, SubjectName) == 0x0030);
static_assert(offsetof(ULiveLinkVirtualSubjectSourceSettings, SourceName) == 0x00A0);
static_assert(offsetof(FAnimNode_LiveLinkPose, InputPose) == 0x0010);
static_assert(offsetof(FAnimNode_LiveLinkPose, LiveLinkSubjectName) == 0x0020);
static_assert(offsetof(FAnimNode_LiveLinkPose, RetargetAsset) == 0x0028);
static_assert(offsetof(FAnimNode_LiveLinkPose, CurrentRetargetAsset) == 0x0030);
static_assert(offsetof(FLiveLinkInstanceProxy, PoseNode) == 0x0770);
static_assert(offsetof(FProviderPollResult, Name) == 0x0010);
static_assert(offsetof(FProviderPollResult, MachineName) == 0x0020);
