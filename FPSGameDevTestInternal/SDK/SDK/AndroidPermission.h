
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

class UAndroidPermissionCallbackProxy;
class UAndroidPermissionFunctionLibrary;

/// Class /Script/AndroidPermission.AndroidPermissionCallbackProxy
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UAndroidPermissionCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,277) /* FMulticastInlineDelegate */ __um(OnPermissionsGrantedDynamicDelegate);                // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/AndroidPermission.AndroidPermissionFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	bool CheckPermission(FString permission) // [0xd742c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(permission);
	}
	// Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
	// UAndroidPermissionCallbackProxy* AcquirePermissions(TArray<FString>& Permissions);                                       // [0xde9180] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UAndroidPermissionCallbackProxy) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UAndroidPermissionFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
