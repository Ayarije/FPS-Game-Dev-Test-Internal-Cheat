
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "LiveLink.h"
#include "LiveLinkInterface.h"

#pragma pack(push, 0x1)

class ULiveLinkOpenXRHandTrackingSourceFactory;
class UOpenXRHandTrackingLiveLinkRemapAsset;

/// Enum /Script/OpenXRHandTracking.EQuatSwizzleAxisB
/// Size: 0x01 (1 bytes)
enum class EQuatSwizzleAxisB : uint8_t
{
	EQuatSwizzleAxisB__X                                                             = 0,
	EQuatSwizzleAxisB__Y                                                             = 1,
	EQuatSwizzleAxisB__Z                                                             = 2,
	EQuatSwizzleAxisB__W                                                             = 3,
	EQuatSwizzleAxisB__MinusX                                                        = 4,
	EQuatSwizzleAxisB__MinusY                                                        = 5,
	EQuatSwizzleAxisB__MinusZ                                                        = 6,
	EQuatSwizzleAxisB__MinusW                                                        = 7
};

/// Class /Script/OpenXRHandTracking.LiveLinkOpenXRHandTrackingSourceFactory
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULiveLinkOpenXRHandTrackingSourceFactory : public ULiveLinkSourceFactory
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/OpenXRHandTracking.OpenXRHandTrackingLiveLinkRemapAsset
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UOpenXRHandTrackingLiveLinkRemapAsset : public ULiveLinkRetargetAsset
{ 
public:
	bool                                               bHasMetacarpals;                                            // 0x0028   (0x0001)  
	bool                                               bRetargetRotationOnly;                                      // 0x0029   (0x0001)  
	EQuatSwizzleAxisB                                  SwizzleX;                                                   // 0x002A   (0x0001)  
	EQuatSwizzleAxisB                                  SwizzleY;                                                   // 0x002B   (0x0001)  
	EQuatSwizzleAxisB                                  SwizzleZ;                                                   // 0x002C   (0x0001)  
	EQuatSwizzleAxisB                                  SwizzleW;                                                   // 0x002D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002E   (0x0002)  MISSED
	TMap<FName, FName>                                 HandTrackingBoneNameMap;                                    // 0x0030   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(ULiveLinkOpenXRHandTrackingSourceFactory) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOpenXRHandTrackingLiveLinkRemapAsset) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleX) == 0x002A);
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleY) == 0x002B);
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleZ) == 0x002C);
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleW) == 0x002D);
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, HandTrackingBoneNameMap) == 0x0030);
