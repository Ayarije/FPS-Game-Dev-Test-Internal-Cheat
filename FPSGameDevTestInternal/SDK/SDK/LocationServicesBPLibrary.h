
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class ULocationServices;
class ULocationServicesImpl;

/// Enum /Script/LocationServicesBPLibrary.ELocationAccuracy
/// Size: 0x01 (1 bytes)
enum class ELocationAccuracy : uint8_t
{
	ELocationAccuracy__LA_ThreeKilometers                                            = 0,
	ELocationAccuracy__LA_OneKilometer                                               = 1,
	ELocationAccuracy__LA_HundredMeters                                              = 2,
	ELocationAccuracy__LA_TenMeters                                                  = 3,
	ELocationAccuracy__LA_Best                                                       = 4,
	ELocationAccuracy__LA_Navigation                                                 = 5
};

/// Struct /Script/LocationServicesBPLibrary.LocationServicesData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FLocationServicesData
{ 
	float                                              Timestamp;                                                  // 0x0000   (0x0004)  
	float                                              Longitude;                                                  // 0x0004   (0x0004)  
	float                                              Latitude;                                                   // 0x0008   (0x0004)  
	float                                              HorizontalAccuracy;                                         // 0x000C   (0x0004)  
	float                                              VerticalAccuracy;                                           // 0x0010   (0x0004)  
	float                                              Altitude;                                                   // 0x0014   (0x0004)  
};

/// Class /Script/LocationServicesBPLibrary.LocationServices
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULocationServices : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LocationServicesBPLibrary.LocationServices.StopLocationServices
	bool StopLocationServices() // [0xdffc50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/LocationServicesBPLibrary.LocationServices.StartLocationServices
	bool StartLocationServices() // [0xdffc20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
	bool IsLocationAccuracyAvailable(ELocationAccuracy Accuracy) // [0xdffba0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(ELocationAccuracy);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(Accuracy);
	}
	// Function /Script/LocationServicesBPLibrary.LocationServices.InitLocationServices
	bool InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter) // [0xdffa90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(ELocationAccuracy, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(Accuracy, UpdateFrequency, MinDistanceFilter);
	}
	// Function /Script/LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
	ULocationServicesImpl* GetLocationServicesImpl() // [0xdffa70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class ULocationServicesImpl* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
	// Function /Script/LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
	FLocationServicesData GetLastKnownLocation() // [0xdffa30] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FLocationServicesData (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
	bool AreLocationServicesEnabled() // [0xdffa00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
};

/// Class /Script/LocationServicesBPLibrary.LocationServicesImpl
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULocationServicesImpl : public UObject
{ 
public:
	SDK_UNDEFINED(16,602) /* FMulticastInlineDelegate */ __um(OnLocationChanged);                                  // 0x0028   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(ULocationServices) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULocationServicesImpl) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FLocationServicesData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
