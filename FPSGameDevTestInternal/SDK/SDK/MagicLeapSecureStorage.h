
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

class UMagicLeapSecureStorage;

/// Class /Script/MagicLeapSecureStorage.MagicLeapSecureStorage
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
	bool PutSecureVector(FString Key, FVector& DataToStore) // [0xd74820] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Key, DataToStore);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
	bool PutSecureTransform(FString Key, FTransform& DataToStore) // [0xd74b00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, FTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Key, DataToStore);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
	bool PutSecureString(FString Key, FString DataToStore) // [0xd75280] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(Key, DataToStore);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
	bool PutSecureSaveGame(FString Key, USaveGame* ObjectToStore) // [0xd751a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, USaveGame*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(Key, ObjectToStore);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
	bool PutSecureRotator(FString Key, FRotator& DataToStore) // [0xd74820] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, FRotator&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(Key, DataToStore);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
	bool PutSecureInt64(FString Key, int64_t DataToStore) // [0xd74fe0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, int64_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(Key, DataToStore);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
	bool PutSecureInt(FString Key, int32_t DataToStore) // [0xd750c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(Key, DataToStore);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
	bool PutSecureFloat(FString Key, float DataToStore) // [0xd74ef0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(Key, DataToStore);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
	bool PutSecureByte(FString Key, char DataToStore) // [0xd74e10] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, char);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(Key, DataToStore);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
	bool PutSecureBool(FString Key, bool DataToStore) // [0xd74d30] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(Key, DataToStore);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
	bool PutSecureArray(FString Key, TArray<int32_t>& DataToStore) // [0xd74c30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, TArray<int32_t>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(Key, DataToStore);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
	bool GetSecureVector(FString Key, FVector& DataToRetrieve) // [0xd74820] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(Key, DataToRetrieve);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
	bool GetSecureTransform(FString Key, FTransform& DataToRetrieve) // [0xd74b00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, FTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(Key, DataToRetrieve);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
	bool GetSecureString(FString Key, FString& DataToRetrieve) // [0xd74a00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(Key, DataToRetrieve);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
	bool GetSecureSaveGame(FString Key, USaveGame*& ObjectToRetrieve) // [0xd74910] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, USaveGame*&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(Key, ObjectToRetrieve);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
	bool GetSecureRotator(FString Key, FRotator& DataToRetrieve) // [0xd74820] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, FRotator&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(Key, DataToRetrieve);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
	bool GetSecureInt64(FString Key, int64_t& DataToRetrieve) // [0xd74640] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, int64_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func(Key, DataToRetrieve);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
	bool GetSecureInt(FString Key, int32_t& DataToRetrieve) // [0xd74730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(Key, DataToRetrieve);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
	bool GetSecureFloat(FString Key, float& DataToRetrieve) // [0xd74550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(Key, DataToRetrieve);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
	bool GetSecureByte(FString Key, char& DataToRetrieve) // [0xd74460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, char&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func(Key, DataToRetrieve);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
	bool GetSecureBool(FString Key, bool& DataToRetrieve) // [0xd74460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(Key, DataToRetrieve);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
	bool GetSecureArray(FString Key, TArray<int32_t>& DataToRetrieve) // [0xd74360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, TArray<int32_t>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func(Key, DataToRetrieve);
	}
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
	bool DeleteSecureData(FString Key) // [0xd742c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func(Key);
	}
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapSecureStorage) == 0x0028); // 40 bytes (0x000028 - 0x000028)
