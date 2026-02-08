
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "OnlineSubsystem.h"

#pragma pack(push, 0x1)

class AOnlineBeacon;
class AOnlineBeaconClient;
class AOnlineBeaconHost;
class AOnlineBeaconHostObject;
class APartyBeaconClient;
class APartyBeaconHost;
class ASpectatorBeaconClient;
class ASpectatorBeaconHost;
class ATestBeaconClient;
class ATestBeaconHost;
class UAchievementBlueprintLibrary;
class UAchievementQueryCallbackProxy;
class UAchievementWriteCallbackProxy;
class UConnectionCallbackProxy;
class UCreateSessionCallbackProxy;
class UDestroySessionCallbackProxy;
class UEndMatchCallbackProxy;
class UEndTurnCallbackProxy;
class UFindSessionsCallbackProxy;
class UFindTurnBasedMatchCallbackProxy;
class UInAppPurchaseCallbackProxy;
class UInAppPurchaseCallbackProxy2;
class UInAppPurchaseQueryCallbackProxy;
class UInAppPurchaseQueryCallbackProxy2;
class UInAppPurchaseRestoreCallbackProxy;
class UInAppPurchaseRestoreCallbackProxy2;
class UIpConnection;
class UIpNetDriver;
class UJoinSessionCallbackProxy;
class ULeaderboardBlueprintLibrary;
class ULeaderboardFlushCallbackProxy;
class ULeaderboardQueryCallbackProxy;
class ULogoutCallbackProxy;
class UOnlineEngineInterfaceImpl;
class UOnlinePIESettings;
class UOnlineSessionClient;
class UPartyBeaconState;
class UQuitMatchCallbackProxy;
class UShowLoginUICallbackProxy;
class USpectatorBeaconState;
class UTurnBasedBlueprintLibrary;
class UVoipListenerSynthComponent;

/// Enum /Script/OnlineSubsystemUtils.EInAppPurchaseStatus
/// Size: 0x01 (1 bytes)
enum class EInAppPurchaseStatus : uint8_t
{
	EInAppPurchaseStatus__Invalid                                                    = 0,
	EInAppPurchaseStatus__Failed                                                     = 1,
	EInAppPurchaseStatus__Deferred                                                   = 2,
	EInAppPurchaseStatus__Canceled                                                   = 3,
	EInAppPurchaseStatus__Purchased                                                  = 4,
	EInAppPurchaseStatus__Restored                                                   = 5
};

/// Enum /Script/OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
/// Size: 0x01 (1 bytes)
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
	EOnlineProxyStoreOfferDiscountType__NotOnSale                                    = 0,
	EOnlineProxyStoreOfferDiscountType__Percentage                                   = 1,
	EOnlineProxyStoreOfferDiscountType__DiscountAmount                               = 2,
	EOnlineProxyStoreOfferDiscountType__PayAmount                                    = 3
};

/// Enum /Script/OnlineSubsystemUtils.EBeaconConnectionState
/// Size: 0x01 (1 bytes)
enum class EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid                                                  = 0,
	EBeaconConnectionState__Closed                                                   = 1,
	EBeaconConnectionState__Pending                                                  = 2,
	EBeaconConnectionState__Open                                                     = 3
};

/// Enum /Script/OnlineSubsystemUtils.EClientRequestType
/// Size: 0x01 (1 bytes)
enum class EClientRequestType : uint8_t
{
	EClientRequestType__NonePending                                                  = 0,
	EClientRequestType__ExistingSessionReservation                                   = 1,
	EClientRequestType__ReservationUpdate                                            = 2,
	EClientRequestType__EmptyServerReservation                                       = 3,
	EClientRequestType__Reconnect                                                    = 4,
	EClientRequestType__Abandon                                                      = 5,
	EClientRequestType__ReservationRemoveMembers                                     = 6,
	EClientRequestType__AddOrUpdateReservation                                       = 7
};

/// Enum /Script/OnlineSubsystemUtils.EPartyReservationResult
/// Size: 0x01 (1 bytes)
enum class EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult                                                = 0,
	EPartyReservationResult__RequestPending                                          = 1,
	EPartyReservationResult__GeneralError                                            = 2,
	EPartyReservationResult__PartyLimitReached                                       = 3,
	EPartyReservationResult__IncorrectPlayerCount                                    = 4,
	EPartyReservationResult__RequestTimedOut                                         = 5,
	EPartyReservationResult__ReservationDuplicate                                    = 6,
	EPartyReservationResult__ReservationNotFound                                     = 7,
	EPartyReservationResult__ReservationAccepted                                     = 8,
	EPartyReservationResult__ReservationDenied                                       = 9,
	EPartyReservationResult__ReservationDenied_CrossPlayRestriction                  = 10,
	EPartyReservationResult__ReservationDenied_Banned                                = 11,
	EPartyReservationResult__ReservationRequestCanceled                              = 12,
	EPartyReservationResult__ReservationInvalid                                      = 13,
	EPartyReservationResult__BadSessionId                                            = 14,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers               = 15
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorClientRequestType
/// Size: 0x01 (1 bytes)
enum class ESpectatorClientRequestType : uint8_t
{
	ESpectatorClientRequestType__NonePending                                         = 0,
	ESpectatorClientRequestType__ExistingSessionReservation                          = 1,
	ESpectatorClientRequestType__ReservationUpdate                                   = 2,
	ESpectatorClientRequestType__EmptyServerReservation                              = 3,
	ESpectatorClientRequestType__Reconnect                                           = 4,
	ESpectatorClientRequestType__Abandon                                             = 5
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorReservationResult
/// Size: 0x01 (1 bytes)
enum class ESpectatorReservationResult : uint8_t
{
	ESpectatorReservationResult__NoResult                                            = 0,
	ESpectatorReservationResult__RequestPending                                      = 1,
	ESpectatorReservationResult__GeneralError                                        = 2,
	ESpectatorReservationResult__SpectatorLimitReached                               = 3,
	ESpectatorReservationResult__IncorrectPlayerCount                                = 4,
	ESpectatorReservationResult__RequestTimedOut                                     = 5,
	ESpectatorReservationResult__ReservationDuplicate                                = 6,
	ESpectatorReservationResult__ReservationNotFound                                 = 7,
	ESpectatorReservationResult__ReservationAccepted                                 = 8,
	ESpectatorReservationResult__ReservationDenied                                   = 9,
	ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction              = 10,
	ESpectatorReservationResult__ReservationDenied_Banned                            = 11,
	ESpectatorReservationResult__ReservationRequestCanceled                          = 12,
	ESpectatorReservationResult__ReservationInvalid                                  = 13,
	ESpectatorReservationResult__BadSessionId                                        = 14,
	ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers           = 15
};

/// Struct /Script/OnlineSubsystemUtils.PIELoginSettingsInternal
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FPIELoginSettingsInternal
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	FString                                            Token;                                                      // 0x0010   (0x0010)  
	FString                                            Type;                                                       // 0x0020   (0x0010)  
	TArray<char>                                       TokenBytes;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.PlayerReservation
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FPlayerReservation
{ 
	FUniqueNetIdRepl                                   UniqueId;                                                   // 0x0000   (0x0028)  
	FString                                            ValidationStr;                                              // 0x0028   (0x0010)  
	FString                                            Platform;                                                   // 0x0038   (0x0010)  
	bool                                               bAllowCrossplay;                                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              ElapsedTime;                                                // 0x004C   (0x0004)  
};

/// Struct /Script/OnlineSubsystemUtils.PartyReservation
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FPartyReservation
{ 
	int32_t                                            TeamNum;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FUniqueNetIdRepl                                   PartyLeader;                                                // 0x0008   (0x0028)  
	TArray<FPlayerReservation>                         PartyMembers;                                               // 0x0030   (0x0010)  
	TArray<FPlayerReservation>                         RemovedPartyMembers;                                        // 0x0040   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPartyBeaconCrossplayPlatformMapping
{ 
	FString                                            PlatformName;                                               // 0x0000   (0x0010)  
	FString                                            PlatformType;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.SpectatorReservation
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FSpectatorReservation
{ 
	FUniqueNetIdRepl                                   SpectatorId;                                                // 0x0000   (0x0028)  
	FPlayerReservation                                 Spectator;                                                  // 0x0028   (0x0050)  
};

/// Struct /Script/OnlineSubsystemUtils.BlueprintSessionResult
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align 8 MaxSize: 0x0108
struct FBlueprintSessionResult
{ 
	unsigned char                                      UnknownData00_2[0x108];                                     // 0x0000   (0x0108)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInAppPurchaseReceiptInfo2
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemId;                                                     // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.OnlineProxyStoreOffer
/// Size: 0x0110 (272 bytes) (0x000000 - 0x000110) align 8 MaxSize: 0x0110
struct FOnlineProxyStoreOffer
{ 
	FString                                            OfferId;                                                    // 0x0000   (0x0010)  
	FText                                              Title;                                                      // 0x0010   (0x0018)  
	FText                                              Description;                                                // 0x0028   (0x0018)  
	FText                                              LongDescription;                                            // 0x0040   (0x0018)  
	FText                                              RegularPriceText;                                           // 0x0058   (0x0018)  
	int32_t                                            RegularPrice;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FText                                              PriceText;                                                  // 0x0078   (0x0018)  
	int32_t                                            NumericPrice;                                               // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FString                                            CurrencyCode;                                               // 0x0098   (0x0010)  
	FDateTime                                          ReleaseDate;                                                // 0x00A8   (0x0008)  
	FDateTime                                          ExpirationDate;                                             // 0x00B0   (0x0008)  
	EOnlineProxyStoreOfferDiscountType                 DiscountType;                                               // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
	TMap<FString, FString>                             DynamicFields;                                              // 0x00C0   (0x0050)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInAppPurchaseRestoreInfo2
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemId;                                                     // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInAppPurchaseReceiptInfo
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemId;                                                     // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductInfo2
/// Size: 0x00F8 (248 bytes) (0x000000 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FInAppPurchaseProductInfo2
{ 
	FString                                            Identifier;                                                 // 0x0000   (0x0010)  
	FString                                            TransactionIdentifier;                                      // 0x0010   (0x0010)  
	FString                                            DisplayName;                                                // 0x0020   (0x0010)  
	FString                                            DisplayDescription;                                         // 0x0030   (0x0010)  
	FString                                            DisplayPrice;                                               // 0x0040   (0x0010)  
	float                                              RawPrice;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            CurrencyCode;                                               // 0x0058   (0x0010)  
	FString                                            CurrencySymbol;                                             // 0x0068   (0x0010)  
	FString                                            DecimalSeparator;                                           // 0x0078   (0x0010)  
	FString                                            GroupingSeparator;                                          // 0x0088   (0x0010)  
	FString                                            ReceiptData;                                                // 0x0098   (0x0010)  
	TMap<FString, FString>                             DynamicFields;                                              // 0x00A8   (0x0050)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductRequest2
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInAppPurchaseProductRequest2
{ 
	FString                                            ProductIdentifier;                                          // 0x0000   (0x0010)  
	bool                                               bIsConsumable;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.IpConnection
/// Size: 0x1C48 (7240 bytes) (0x001BA8 - 0x001C48) align 8 MaxSize: 0x1C48
class UIpConnection : public UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x1BA8   (0x0050)  MISSED
	float                                              SocketErrorDisconnectDelay;                                 // 0x1BF8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4C];                                      // 0x1BFC   (0x004C)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.IpNetDriver
/// Size: 0x07D0 (2000 bytes) (0x000760 - 0x0007D0) align 8 MaxSize: 0x07D0
class UIpNetDriver : public UNetDriver
{ 
public:
	bool                                               LogPortUnreach : 1;                                         // 0x0760:0 (0x0001)  
	bool                                               AllowPlayerPortUnreach : 1;                                 // 0x0760:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0761   (0x0003)  MISSED
	uint32_t                                           MaxPortCountToTry;                                          // 0x0764   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0768   (0x000C)  MISSED
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                      // 0x0774   (0x0004)  
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                         // 0x0778   (0x0004)  
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                      // 0x077C   (0x0004)  
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                         // 0x0780   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0784   (0x0004)  MISSED
	double                                             MaxSecondsInReceive;                                        // 0x0788   (0x0008)  
	int32_t                                            NbPacketsBetweenReceiveTimeTest;                            // 0x0790   (0x0004)  
	float                                              ResolutionConnectionTimeout;                                // 0x0794   (0x0004)  
	unsigned char                                      UnknownData03_7[0x38];                                      // 0x0798   (0x0038)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	void GetCachedAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementID, bool& bFoundID, float& Progress) // [0x88e440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, APlayerController*, FName, bool&, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(WorldContextObject, PlayerController, AchievementID, bFoundID, Progress);
	}
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	void GetCachedAchievementDescription(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementID, bool& bFoundID, FText& Title, FText& LockedDescription, FText& UnlockedDescription, bool& bHidden) // [0x88e0e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, APlayerController*, FName, bool&, FText&, FText&, FText&, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(WorldContextObject, PlayerController, AchievementID, bFoundID, Title, LockedDescription, UnlockedDescription, bHidden);
	}
};

/// Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,361) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,362) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	UAchievementQueryCallbackProxy* CacheAchievements(UObject* WorldContextObject, APlayerController* PlayerController) // [0x88ce50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAchievementQueryCallbackProxy* (*FuncPtr)(UObject*, APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, PlayerController);
	}
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	UAchievementQueryCallbackProxy* CacheAchievementDescriptions(UObject* WorldContextObject, APlayerController* PlayerController) // [0x88cd80] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAchievementQueryCallbackProxy* (*FuncPtr)(UObject*, APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, PlayerController);
	}
};

/// Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,363) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,364) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	UAchievementWriteCallbackProxy* WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32_t UserTag) // [0x88eb30] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAchievementWriteCallbackProxy* (*FuncPtr)(UObject*, APlayerController*, FName, float, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, PlayerController, AchievementName, Progress, UserTag);
	}
};

/// Class /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,365) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,366) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	UConnectionCallbackProxy* ConnectToService(UObject* WorldContextObject, APlayerController* PlayerController) // [0x88cf20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UConnectionCallbackProxy* (*FuncPtr)(UObject*, APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, PlayerController);
	}
};

/// Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,367) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,368) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	UCreateSessionCallbackProxy* CreateSession(UObject* WorldContextObject, APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN) // [0x88d750] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UCreateSessionCallbackProxy* (*FuncPtr)(UObject*, APlayerController*, int32_t, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, PlayerController, PublicConnections, bUseLAN);
	}
};

/// Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,369) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,370) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	UDestroySessionCallbackProxy* DestroySession(UObject* WorldContextObject, APlayerController* PlayerController) // [0x88d8a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UDestroySessionCallbackProxy* (*FuncPtr)(UObject*, APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, PlayerController);
	}
};

/// Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,371) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,372) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	// UEndMatchCallbackProxy* EndMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<Class> MatchActor, FString MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome); // [0x88d970] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndTurnCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,373) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,374) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	// UEndTurnCallbackProxy* EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, TScriptInterface<Class> TurnBasedMatchInterface); // [0x88dba0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,375) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,376) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0050   (0x0040)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	FString GetServerName(FBlueprintSessionResult& Result) // [0x88e9b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FBlueprintSessionResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Result);
	}
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	int32_t GetPingInMs(FBlueprintSessionResult& Result) // [0x88e870] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)(FBlueprintSessionResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Result);
	}
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	int32_t GetMaxPlayers(FBlueprintSessionResult& Result) // [0x88e730] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)(FBlueprintSessionResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(Result);
	}
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	int32_t GetCurrentPlayers(FBlueprintSessionResult& Result) // [0x88e5f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)(FBlueprintSessionResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(Result);
	}
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	UFindSessionsCallbackProxy* FindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN) // [0x88dd60] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UFindSessionsCallbackProxy* (*FuncPtr)(UObject*, APlayerController*, int32_t, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(WorldContextObject, PlayerController, MaxResults, bUseLAN);
	}
};

/// Class /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,377) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,378) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0050   (0x0038)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	// UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<Class> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // [0x88deb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UInAppPurchaseCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,379) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,380) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0048   (0x0038)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
	UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, FInAppPurchaseProductRequest& ProductRequest) // [0x88d0e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef class UInAppPurchaseCallbackProxy* (*FuncPtr)(APlayerController*, FInAppPurchaseProductRequest&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(PlayerController, ProductRequest);
	}
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UInAppPurchaseCallbackProxy2 : public UObject
{ 
public:
	SDK_UNDEFINED(16,381) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,382) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x0048   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
	UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(APlayerController* PlayerController) // [0x88d6c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UInAppPurchaseCallbackProxy2* (*FuncPtr)(APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(PlayerController);
	}
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
	UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(APlayerController* PlayerController) // [0x88d3f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UInAppPurchaseCallbackProxy2* (*FuncPtr)(APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(PlayerController);
	}
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
	UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, FInAppPurchaseProductRequest2& ProductRequest) // [0x88cff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef class UInAppPurchaseCallbackProxy2* (*FuncPtr)(APlayerController*, FInAppPurchaseProductRequest2&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(PlayerController, ProductRequest);
	}
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UInAppPurchaseQueryCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,383) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,384) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0048   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
	// UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, TArray<FString>& ProductIdentifiers); // [0x88d2e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{ 
public:
	SDK_UNDEFINED(16,385) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,386) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
	// UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, TArray<FString>& ProductIdentifiers); // [0x88d1d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UInAppPurchaseRestoreCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,387) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,388) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0048   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
	// UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, APlayerController* PlayerController); // [0x88d5a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{ 
public:
	SDK_UNDEFINED(16,389) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,390) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x0048   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
	// UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, APlayerController* PlayerController); // [0x88d480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
/// Size: 0x0180 (384 bytes) (0x000030 - 0x000180) align 8 MaxSize: 0x0180
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,391) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,392) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x130];                                     // 0x0050   (0x0130)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	UJoinSessionCallbackProxy* JoinSession(UObject* WorldContextObject, APlayerController* PlayerController, FBlueprintSessionResult& SearchResult) // [0x892950] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef class UJoinSessionCallbackProxy* (*FuncPtr)(UObject*, APlayerController*, FBlueprintSessionResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, PlayerController, SearchResult);
	}
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	bool WriteLeaderboardInteger(APlayerController* PlayerController, FName StatName, int32_t StatValue) // [0x893750] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(APlayerController*, FName, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(PlayerController, StatName, StatValue);
	}
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class ULeaderboardFlushCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,393) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,394) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(APlayerController* PlayerController, FName SessionName) // [0x8927b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class ULeaderboardFlushCallbackProxy* (*FuncPtr)(APlayerController*, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(PlayerController, SessionName);
	}
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class ULeaderboardQueryCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,395) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,396) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0048   (0x0050)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(APlayerController* PlayerController, FName StatName) // [0x892880] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class ULeaderboardQueryCallbackProxy* (*FuncPtr)(APlayerController*, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(PlayerController, StatName);
	}
};

/// Class /Script/OnlineSubsystemUtils.LogoutCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,397) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,398) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	ULogoutCallbackProxy* Logout(UObject* WorldContextObject, APlayerController* PlayerController) // [0x892aa0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class ULogoutCallbackProxy* (*FuncPtr)(UObject*, APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, PlayerController);
	}
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeacon
/// Size: 0x0250 (592 bytes) (0x000220 - 0x000250) align 8 MaxSize: 0x0250
class AOnlineBeacon : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0220   (0x0008)  MISSED
	float                                              BeaconConnectionInitialTimeout;                             // 0x0228   (0x0004)  
	float                                              BeaconConnectionTimeout;                                    // 0x022C   (0x0004)  
	class UNetDriver*                                  NetDriver;                                                  // 0x0230   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0238   (0x0018)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconClient
/// Size: 0x02B0 (688 bytes) (0x000250 - 0x0002B0) align 8 MaxSize: 0x02B0
class AOnlineBeaconClient : public AOnlineBeacon
{ 
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                                // 0x0250   (0x0008)  
	class UNetConnection*                              BeaconConnection;                                           // 0x0258   (0x0008)  
	EBeaconConnectionState                             ConnectionState;                                            // 0x0260   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4F];                                      // 0x0261   (0x004F)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	void ClientOnConnected() // [0x892530] Final|Net|NetReliableNative|Event|Private|NetClient 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHost
/// Size: 0x0308 (776 bytes) (0x000250 - 0x000308) align 8 MaxSize: 0x0308
class AOnlineBeaconHost : public AOnlineBeacon
{ 
public:
	int32_t                                            ListenPort;                                                 // 0x0250   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0254   (0x0004)  MISSED
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                               // 0x0258   (0x0010)  
	unsigned char                                      UnknownData01_7[0xA0];                                      // 0x0268   (0x00A0)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHostObject
/// Size: 0x0248 (584 bytes) (0x000220 - 0x000248) align 8 MaxSize: 0x0248
class AOnlineBeaconHostObject : public AActor
{ 
public:
	FString                                            BeaconTypeName;                                             // 0x0220   (0x0010)  
	class UClass*                                      ClientBeaconActorClass;                                     // 0x0230   (0x0008)  
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                               // 0x0238   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl
/// Size: 0x0188 (392 bytes) (0x000028 - 0x000188) align 8 MaxSize: 0x0188
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{ 
public:
	TMap<FName, FName>                                 MappedUniqueNetIdTypes;                                     // 0x0028   (0x0050)  
	TArray<FName>                                      CompatibleUniqueNetIdTypes;                                 // 0x0078   (0x0010)  
	FName                                              VoiceSubsystemNameOverride;                                 // 0x0088   (0x0008)  
	unsigned char                                      UnknownData00_7[0xF8];                                      // 0x0090   (0x00F8)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlinePIESettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UOnlinePIESettings : public UDeveloperSettings
{ 
public:
	bool                                               bOnlinePIEEnabled;                                          // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FPIELoginSettingsInternal>                  Logins;                                                     // 0x0040   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlineSessionClient
/// Size: 0x01C8 (456 bytes) (0x000028 - 0x0001C8) align 8 MaxSize: 0x01C8
class UOnlineSessionClient : public UOnlineSession
{ 
public:
	unsigned char                                      UnknownData00_8[0x198];                                     // 0x0028   (0x0198)  MISSED
	bool                                               bIsFromInvite;                                              // 0x01C0   (0x0001)  
	bool                                               bHandlingDisconnect;                                        // 0x01C1   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x01C2   (0x0006)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconClient
/// Size: 0x0370 (880 bytes) (0x0002B0 - 0x000370) align 8 MaxSize: 0x0370
class APartyBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x02B0   (0x0030)  MISSED
	FString                                            DestSessionId;                                              // 0x02E0   (0x0010)  
	FPartyReservation                                  PendingReservation;                                         // 0x02F0   (0x0050)  
	EClientRequestType                                 RequestType;                                                // 0x0340   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x0341   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x0342   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2D];                                      // 0x0343   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	void ServerUpdateReservationRequest(FString SessionID, FPartyReservation ReservationUpdate) // [0x8934e0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FString, FPartyReservation);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(SessionID, ReservationUpdate);
	}
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	void ServerReservationRequest(FString SessionID, FPartyReservation Reservation) // [0x893190] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FString, FPartyReservation);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(SessionID, Reservation);
	}
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	void ServerRemoveMemberFromReservationRequest(FString SessionID, FPartyReservation ReservationUpdate) // [0x892ff0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FString, FPartyReservation);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(SessionID, ReservationUpdate);
	}
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	void ServerCancelReservationRequest(FUniqueNetIdRepl PartyLeader) // [0x892ee0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FUniqueNetIdRepl);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(PartyLeader);
	}
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
	void ServerAddOrUpdateReservationRequest(FString SessionID, FPartyReservation Reservation) // [0x892d40] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FString, FPartyReservation);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(SessionID, Reservation);
	}
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	void ClientSendReservationUpdates(int32_t NumRemainingReservations) // [0x892690] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(NumRemainingReservations);
	}
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	void ClientSendReservationFull() // [0x892650] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func();
	}
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	// void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                                // [0x892550] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	// void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                          // [0x892430] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconHost
/// Size: 0x02C0 (704 bytes) (0x000248 - 0x0002C0) align 8 MaxSize: 0x02C0
class APartyBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	class UPartyBeaconState*                           State;                                                      // 0x0248   (0x0008)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0250   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02B1   (0x0003)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x02B4   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x02BC   (0x0004)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconState
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UPartyBeaconState : public UObject
{ 
public:
	FName                                              SessionName;                                                // 0x0028   (0x0008)  
	int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)  
	int32_t                                            NumTeams;                                                   // 0x0038   (0x0004)  
	int32_t                                            NumPlayersPerTeam;                                          // 0x003C   (0x0004)  
	FName                                              TeamAssignmentMethod;                                       // 0x0040   (0x0008)  
	int32_t                                            ReservedHostTeamNum;                                        // 0x0048   (0x0004)  
	int32_t                                            ForceTeamNum;                                               // 0x004C   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	TArray<FString>                                    PlatformCrossplayRestrictions;                              // 0x0058   (0x0010)  
	TArray<FPartyBeaconCrossplayPlatformMapping>       PlatformTypeMapping;                                        // 0x0068   (0x0010)  
	bool                                               bEnableRemovalRequests;                                     // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	TArray<FPartyReservation>                          Reservations;                                               // 0x0080   (0x0010)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0090   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,399) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,400) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	// UQuitMatchCallbackProxy* QuitMatch(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int32_t TurnTimeoutInSeconds); // [0x892b70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,401) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,402) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	UShowLoginUICallbackProxy* ShowExternalLoginUI(UObject* WorldContextObject, APlayerController* InPlayerController) // [0x893680] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UShowLoginUICallbackProxy* (*FuncPtr)(UObject*, APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, InPlayerController);
	}
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconClient
/// Size: 0x0398 (920 bytes) (0x0002B0 - 0x000398) align 8 MaxSize: 0x0398
class ASpectatorBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x02B0   (0x0030)  MISSED
	FString                                            DestSessionId;                                              // 0x02E0   (0x0010)  
	FSpectatorReservation                              PendingReservation;                                         // 0x02F0   (0x0078)  
	ESpectatorClientRequestType                        RequestType;                                                // 0x0368   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x0369   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x036A   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2D];                                      // 0x036B   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	void ServerReservationRequest(FString SessionID, FSpectatorReservation Reservation) // [0x893330] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FString, FSpectatorReservation);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(SessionID, Reservation);
	}
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	void ServerCancelReservationRequest(FUniqueNetIdRepl Spectator) // [0x892ee0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FUniqueNetIdRepl);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Spectator);
	}
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	void ClientSendReservationUpdates(int32_t NumRemainingReservations) // [0x892720] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(NumRemainingReservations);
	}
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	void ClientSendReservationFull() // [0x892670] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	// void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                            // [0x8925d0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
	// void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                      // [0x8924b0] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconHost
/// Size: 0x02C0 (704 bytes) (0x000248 - 0x0002C0) align 8 MaxSize: 0x02C0
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	class USpectatorBeaconState*                       State;                                                      // 0x0248   (0x0008)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0250   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02B1   (0x0003)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x02B4   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x02BC   (0x0004)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconState
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class USpectatorBeaconState : public UObject
{ 
public:
	FName                                              SessionName;                                                // 0x0028   (0x0008)  
	int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FSpectatorReservation>                      Reservations;                                               // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconClient
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class ATestBeaconClient : public AOnlineBeaconClient
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ServerPong
	void ServerPong() // [0x894640] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ClientPing
	void ClientPing() // [0x893f90] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconHost
/// Size: 0x0248 (584 bytes) (0x000248 - 0x000248) align 8 MaxSize: 0x0248
class ATestBeaconHost : public AOnlineBeaconHostObject
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	void RegisterTurnBasedMatchInterfaceObject(UObject* WorldContextObject, APlayerController* PlayerController, UObject* Object) // [0x894540] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, APlayerController*, UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(WorldContextObject, PlayerController, Object);
	}
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	void GetPlayerDisplayName(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, int32_t PlayerIndex, FString& PlayerDisplayName) // [0x894310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, APlayerController*, FString, int32_t, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(WorldContextObject, PlayerController, MatchID, PlayerIndex, PlayerDisplayName);
	}
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	void GetMyPlayerIndex(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, int32_t& PlayerIndex) // [0x894160] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, APlayerController*, FString, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(WorldContextObject, PlayerController, MatchID, PlayerIndex);
	}
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	void GetIsMyTurn(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, bool& bIsMyTurn) // [0x893fb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, APlayerController*, FString, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(WorldContextObject, PlayerController, MatchID, bIsMyTurn);
	}
};

/// Class /Script/OnlineSubsystemUtils.VoipListenerSynthComponent
/// Size: 0x0720 (1824 bytes) (0x0006C0 - 0x000720) align 16 MaxSize: 0x0720
class UVoipListenerSynthComponent : public USynthComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x06C0   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
	bool IsIdling() // [0x894510] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
};

#pragma pack(pop)


static_assert(sizeof(UIpConnection) == 0x1C48); // 7240 bytes (0x001BA8 - 0x001C48)
static_assert(sizeof(UIpNetDriver) == 0x07D0); // 2000 bytes (0x000760 - 0x0007D0)
static_assert(sizeof(UAchievementBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAchievementQueryCallbackProxy) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UAchievementWriteCallbackProxy) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UConnectionCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UCreateSessionCallbackProxy) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UDestroySessionCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UEndMatchCallbackProxy) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UEndTurnCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UFindSessionsCallbackProxy) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UFindTurnBasedMatchCallbackProxy) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UInAppPurchaseCallbackProxy) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UInAppPurchaseCallbackProxy2) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UInAppPurchaseQueryCallbackProxy) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UInAppPurchaseQueryCallbackProxy2) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UInAppPurchaseRestoreCallbackProxy) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UInAppPurchaseRestoreCallbackProxy2) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UJoinSessionCallbackProxy) == 0x0180); // 384 bytes (0x000030 - 0x000180)
static_assert(sizeof(ULeaderboardBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULeaderboardFlushCallbackProxy) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(ULeaderboardQueryCallbackProxy) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(ULogoutCallbackProxy) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(AOnlineBeacon) == 0x0250); // 592 bytes (0x000220 - 0x000250)
static_assert(sizeof(AOnlineBeaconClient) == 0x02B0); // 688 bytes (0x000250 - 0x0002B0)
static_assert(sizeof(AOnlineBeaconHost) == 0x0308); // 776 bytes (0x000250 - 0x000308)
static_assert(sizeof(AOnlineBeaconHostObject) == 0x0248); // 584 bytes (0x000220 - 0x000248)
static_assert(sizeof(UOnlineEngineInterfaceImpl) == 0x0188); // 392 bytes (0x000028 - 0x000188)
static_assert(sizeof(FPIELoginSettingsInternal) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UOnlinePIESettings) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UOnlineSessionClient) == 0x01C8); // 456 bytes (0x000028 - 0x0001C8)
static_assert(sizeof(FPlayerReservation) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FPartyReservation) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(APartyBeaconClient) == 0x0370); // 880 bytes (0x0002B0 - 0x000370)
static_assert(sizeof(APartyBeaconHost) == 0x02C0); // 704 bytes (0x000248 - 0x0002C0)
static_assert(sizeof(FPartyBeaconCrossplayPlatformMapping) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UPartyBeaconState) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UQuitMatchCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UShowLoginUICallbackProxy) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(FSpectatorReservation) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(ASpectatorBeaconClient) == 0x0398); // 920 bytes (0x0002B0 - 0x000398)
static_assert(sizeof(ASpectatorBeaconHost) == 0x02C0); // 704 bytes (0x000248 - 0x0002C0)
static_assert(sizeof(USpectatorBeaconState) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(ATestBeaconClient) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(ATestBeaconHost) == 0x0248); // 584 bytes (0x000248 - 0x000248)
static_assert(sizeof(UTurnBasedBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVoipListenerSynthComponent) == 0x0720); // 1824 bytes (0x0006C0 - 0x000720)
static_assert(sizeof(FBlueprintSessionResult) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FInAppPurchaseReceiptInfo2) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FOnlineProxyStoreOffer) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(FInAppPurchaseRestoreInfo2) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInAppPurchaseReceiptInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInAppPurchaseProductInfo2) == 0x00F8); // 248 bytes (0x000000 - 0x0000F8)
static_assert(sizeof(FInAppPurchaseProductRequest2) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(AOnlineBeacon, NetDriver) == 0x0230);
static_assert(offsetof(AOnlineBeaconClient, BeaconOwner) == 0x0250);
static_assert(offsetof(AOnlineBeaconClient, BeaconConnection) == 0x0258);
static_assert(offsetof(AOnlineBeaconClient, ConnectionState) == 0x0260);
static_assert(offsetof(AOnlineBeaconHost, ClientActors) == 0x0258);
static_assert(offsetof(AOnlineBeaconHostObject, BeaconTypeName) == 0x0220);
static_assert(offsetof(AOnlineBeaconHostObject, ClientBeaconActorClass) == 0x0230);
static_assert(offsetof(AOnlineBeaconHostObject, ClientActors) == 0x0238);
static_assert(offsetof(UOnlineEngineInterfaceImpl, MappedUniqueNetIdTypes) == 0x0028);
static_assert(offsetof(UOnlineEngineInterfaceImpl, CompatibleUniqueNetIdTypes) == 0x0078);
static_assert(offsetof(UOnlineEngineInterfaceImpl, VoiceSubsystemNameOverride) == 0x0088);
static_assert(offsetof(FPIELoginSettingsInternal, ID) == 0x0000);
static_assert(offsetof(FPIELoginSettingsInternal, Token) == 0x0010);
static_assert(offsetof(FPIELoginSettingsInternal, Type) == 0x0020);
static_assert(offsetof(FPIELoginSettingsInternal, TokenBytes) == 0x0030);
static_assert(offsetof(UOnlinePIESettings, Logins) == 0x0040);
static_assert(offsetof(FPlayerReservation, UniqueId) == 0x0000);
static_assert(offsetof(FPlayerReservation, ValidationStr) == 0x0028);
static_assert(offsetof(FPlayerReservation, Platform) == 0x0038);
static_assert(offsetof(FPartyReservation, PartyLeader) == 0x0008);
static_assert(offsetof(FPartyReservation, PartyMembers) == 0x0030);
static_assert(offsetof(FPartyReservation, RemovedPartyMembers) == 0x0040);
static_assert(offsetof(APartyBeaconClient, DestSessionId) == 0x02E0);
static_assert(offsetof(APartyBeaconClient, PendingReservation) == 0x02F0);
static_assert(offsetof(APartyBeaconClient, RequestType) == 0x0340);
static_assert(offsetof(APartyBeaconHost, State) == 0x0248);
static_assert(offsetof(FPartyBeaconCrossplayPlatformMapping, PlatformName) == 0x0000);
static_assert(offsetof(FPartyBeaconCrossplayPlatformMapping, PlatformType) == 0x0010);
static_assert(offsetof(UPartyBeaconState, SessionName) == 0x0028);
static_assert(offsetof(UPartyBeaconState, TeamAssignmentMethod) == 0x0040);
static_assert(offsetof(UPartyBeaconState, PlatformCrossplayRestrictions) == 0x0058);
static_assert(offsetof(UPartyBeaconState, PlatformTypeMapping) == 0x0068);
static_assert(offsetof(UPartyBeaconState, Reservations) == 0x0080);
static_assert(offsetof(FSpectatorReservation, SpectatorId) == 0x0000);
static_assert(offsetof(FSpectatorReservation, Spectator) == 0x0028);
static_assert(offsetof(ASpectatorBeaconClient, DestSessionId) == 0x02E0);
static_assert(offsetof(ASpectatorBeaconClient, PendingReservation) == 0x02F0);
static_assert(offsetof(ASpectatorBeaconClient, RequestType) == 0x0368);
static_assert(offsetof(ASpectatorBeaconHost, State) == 0x0248);
static_assert(offsetof(USpectatorBeaconState, SessionName) == 0x0028);
static_assert(offsetof(USpectatorBeaconState, Reservations) == 0x0040);
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ItemName) == 0x0000);
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ItemId) == 0x0010);
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ValidationInfo) == 0x0020);
static_assert(offsetof(FOnlineProxyStoreOffer, OfferId) == 0x0000);
static_assert(offsetof(FOnlineProxyStoreOffer, Title) == 0x0010);
static_assert(offsetof(FOnlineProxyStoreOffer, Description) == 0x0028);
static_assert(offsetof(FOnlineProxyStoreOffer, LongDescription) == 0x0040);
static_assert(offsetof(FOnlineProxyStoreOffer, RegularPriceText) == 0x0058);
static_assert(offsetof(FOnlineProxyStoreOffer, PriceText) == 0x0078);
static_assert(offsetof(FOnlineProxyStoreOffer, CurrencyCode) == 0x0098);
static_assert(offsetof(FOnlineProxyStoreOffer, ReleaseDate) == 0x00A8);
static_assert(offsetof(FOnlineProxyStoreOffer, ExpirationDate) == 0x00B0);
static_assert(offsetof(FOnlineProxyStoreOffer, DiscountType) == 0x00B8);
static_assert(offsetof(FOnlineProxyStoreOffer, DynamicFields) == 0x00C0);
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ItemName) == 0x0000);
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ItemId) == 0x0010);
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ValidationInfo) == 0x0020);
static_assert(offsetof(FInAppPurchaseReceiptInfo, ItemName) == 0x0000);
static_assert(offsetof(FInAppPurchaseReceiptInfo, ItemId) == 0x0010);
static_assert(offsetof(FInAppPurchaseReceiptInfo, ValidationInfo) == 0x0020);
static_assert(offsetof(FInAppPurchaseProductInfo2, Identifier) == 0x0000);
static_assert(offsetof(FInAppPurchaseProductInfo2, TransactionIdentifier) == 0x0010);
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayName) == 0x0020);
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayDescription) == 0x0030);
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayPrice) == 0x0040);
static_assert(offsetof(FInAppPurchaseProductInfo2, CurrencyCode) == 0x0058);
static_assert(offsetof(FInAppPurchaseProductInfo2, CurrencySymbol) == 0x0068);
static_assert(offsetof(FInAppPurchaseProductInfo2, DecimalSeparator) == 0x0078);
static_assert(offsetof(FInAppPurchaseProductInfo2, GroupingSeparator) == 0x0088);
static_assert(offsetof(FInAppPurchaseProductInfo2, ReceiptData) == 0x0098);
static_assert(offsetof(FInAppPurchaseProductInfo2, DynamicFields) == 0x00A8);
static_assert(offsetof(FInAppPurchaseProductRequest2, ProductIdentifier) == 0x0000);
