
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

class AArchVisCharacter;
class UArchVisCharMovementComponent;

/// Class /Script/ArchVisCharacter.ArchVisCharacter
/// Size: 0x0520 (1312 bytes) (0x0004B8 - 0x000520) align 16 MaxSize: 0x0520
class AArchVisCharacter : public ACharacter
{ 
public:
	FString                                            LookUpAxisName;                                             // 0x04B8   (0x0010)  
	FString                                            LookUpAtRateAxisName;                                       // 0x04C8   (0x0010)  
	FString                                            TurnAxisName;                                               // 0x04D8   (0x0010)  
	FString                                            TurnAtRateAxisName;                                         // 0x04E8   (0x0010)  
	FString                                            MoveForwardAxisName;                                        // 0x04F8   (0x0010)  
	FString                                            MoveRightAxisName;                                          // 0x0508   (0x0010)  
	float                                              MouseSensitivityScale_Pitch;                                // 0x0518   (0x0004)  
	float                                              MouseSensitivityScale_Yaw;                                  // 0x051C   (0x0004)  
};

/// Class /Script/ArchVisCharacter.ArchVisCharMovementComponent
/// Size: 0x0B40 (2880 bytes) (0x000AF0 - 0x000B40) align 16 MaxSize: 0x0B40
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{ 
public:
	FRotator                                           RotationalAcceleration;                                     // 0x0AF0   (0x000C)  
	FRotator                                           RotationalDeceleration;                                     // 0x0AFC   (0x000C)  
	FRotator                                           MaxRotationalVelocity;                                      // 0x0B08   (0x000C)  
	float                                              MinPitch;                                                   // 0x0B14   (0x0004)  
	float                                              MaxPitch;                                                   // 0x0B18   (0x0004)  
	float                                              WalkingFriction;                                            // 0x0B1C   (0x0004)  
	float                                              WalkingSpeed;                                               // 0x0B20   (0x0004)  
	float                                              WalkingAcceleration;                                        // 0x0B24   (0x0004)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0B28   (0x0018)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(AArchVisCharacter) == 0x0520); // 1312 bytes (0x0004B8 - 0x000520)
static_assert(sizeof(UArchVisCharMovementComponent) == 0x0B40); // 2880 bytes (0x000AF0 - 0x000B40)
static_assert(offsetof(AArchVisCharacter, LookUpAxisName) == 0x04B8);
static_assert(offsetof(AArchVisCharacter, LookUpAtRateAxisName) == 0x04C8);
static_assert(offsetof(AArchVisCharacter, TurnAxisName) == 0x04D8);
static_assert(offsetof(AArchVisCharacter, TurnAtRateAxisName) == 0x04E8);
static_assert(offsetof(AArchVisCharacter, MoveForwardAxisName) == 0x04F8);
static_assert(offsetof(AArchVisCharacter, MoveRightAxisName) == 0x0508);
static_assert(offsetof(UArchVisCharMovementComponent, RotationalAcceleration) == 0x0AF0);
static_assert(offsetof(UArchVisCharMovementComponent, RotationalDeceleration) == 0x0AFC);
static_assert(offsetof(UArchVisCharMovementComponent, MaxRotationalVelocity) == 0x0B08);
