
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

#pragma pack(push, 0x1)

class USteamCoreAppsAsyncActionGetAppBetas;
class USteamCoreAppsAsyncActionGetAppBuilds;
class USteamCoreAppsAsyncActionGetAppDepotVersions;
class USteamCoreAppsAsyncActionGetAppList;
class USteamCoreAppsAsyncActionGetCheatingReports;
class USteamCoreAppsAsyncActionGetPlayersBanned;
class USteamCoreAppsAsyncActionGetServerList;
class USteamCoreAppsAsyncActionGetServersAtAddress;
class USteamCoreAppsAsyncActionSetAppBuildLive;
class USteamCoreAppsAsyncActionUpToDateCheck;
class USteamCoreWeb;
class USteamCoreWebAsyncAction;
class USteamCoreWebAsyncActionAddItem;
class USteamCoreWebAsyncActionAddPromoItem;
class USteamCoreWebAsyncActionAdjustAgreement;
class USteamCoreWebAsyncActionAuthenticateUser;
class USteamCoreWebAsyncActionAuthenticateUserTicket;
class USteamCoreWebAsyncActionCanTrade;
class USteamCoreWebAsyncActionCancelAgreement;
class USteamCoreWebAsyncActionCancelAppListingsForUser;
class USteamCoreWebAsyncActionCancelTradeOffer;
class USteamCoreWebAsyncActionCheckAppOwnership;
class USteamCoreWebAsyncActionConsolidate;
class USteamCoreWebAsyncActionConsumeItem;
class USteamCoreWebAsyncActionCreateSession;
class USteamCoreWebAsyncActionDeclineTradeOffer;
class USteamCoreWebAsyncActionDeleteLeaderboard;
class USteamCoreWebAsyncActionDeleteSession;
class USteamCoreWebAsyncActionDeleteSessionBatch;
class USteamCoreWebAsyncActionEndSecureMultiplayerSession;
class USteamCoreWebAsyncActionEnumerateSessionsForApp;
class USteamCoreWebAsyncActionEnumerateUserPublishedFiles;
class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles;
class USteamCoreWebAsyncActionExchangeItem;
class USteamCoreWebAsyncActionFinalizeAssetTransaction;
class USteamCoreWebAsyncActionFinalizeTxn;
class USteamCoreWebAsyncActionFindOrCreateLeaderboard;
class USteamCoreWebAsyncActionFlushAssetAppearanceCache;
class USteamCoreWebAsyncActionFlushContextCache;
class USteamCoreWebAsyncActionFlushInventoryCache;
class USteamCoreWebAsyncActionGetAppPriceInfo;
class USteamCoreWebAsyncActionGetAssetClassInfo;
class USteamCoreWebAsyncActionGetAssetID;
class USteamCoreWebAsyncActionGetAssetPrices;
class USteamCoreWebAsyncActionGetBadges;
class USteamCoreWebAsyncActionGetCheatingReports;
class USteamCoreWebAsyncActionGetCollectionDetails;
class USteamCoreWebAsyncActionGetCommunityBadgeProgress;
class USteamCoreWebAsyncActionGetExportedAssetsForUser;
class USteamCoreWebAsyncActionGetFriendList;
class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp;
class USteamCoreWebAsyncActionGetGlobalStatsForGame;
class USteamCoreWebAsyncActionGetHistoryCommandDetails;
class USteamCoreWebAsyncActionGetInventory;
class USteamCoreWebAsyncActionGetItemDefs;
class USteamCoreWebAsyncActionGetLeaderboardEntries;
class USteamCoreWebAsyncActionGetLeaderboardsForGame;
class USteamCoreWebAsyncActionGetMarketEligibility;
class USteamCoreWebAsyncActionGetMarketPrices;
class USteamCoreWebAsyncActionGetNewsForApp;
class USteamCoreWebAsyncActionGetNewsForAppAuthed;
class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers;
class USteamCoreWebAsyncActionGetOwnedGames;
class USteamCoreWebAsyncActionGetPlayerAchievements;
class USteamCoreWebAsyncActionGetPlayerBans;
class USteamCoreWebAsyncActionGetPlayerSummaries;
class USteamCoreWebAsyncActionGetPopular;
class USteamCoreWebAsyncActionGetPriceSheet;
class USteamCoreWebAsyncActionGetPublishedFileDetails;
class USteamCoreWebAsyncActionGetPublisherAppOwnership;
class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges;
class USteamCoreWebAsyncActionGetQuantity;
class USteamCoreWebAsyncActionGetRecentlyPlayedGames;
class USteamCoreWebAsyncActionGetReport;
class USteamCoreWebAsyncActionGetSchemaForGame;
class USteamCoreWebAsyncActionGetSessionDetailsForApp;
class USteamCoreWebAsyncActionGetSteamLevel;
class USteamCoreWebAsyncActionGetTradeHistory;
class USteamCoreWebAsyncActionGetTradeOffer;
class USteamCoreWebAsyncActionGetTradeOffers;
class USteamCoreWebAsyncActionGetTradeOffersSummary;
class USteamCoreWebAsyncActionGetUGCFileDetails;
class USteamCoreWebAsyncActionGetUserAgreementInfo;
class USteamCoreWebAsyncActionGetUserGroupList;
class USteamCoreWebAsyncActionGetUserHistory;
class USteamCoreWebAsyncActionGetUserInfo;
class USteamCoreWebAsyncActionGetUserStatsForGame;
class USteamCoreWebAsyncActionGrantPackage;
class USteamCoreWebAsyncActionHistoryExecuteCommand;
class USteamCoreWebAsyncActionInitTxn;
class USteamCoreWebAsyncActionIsPlayingSharedGame;
class USteamCoreWebAsyncActionItemVoteSummary;
class USteamCoreWebAsyncActionModifyItems;
class USteamCoreWebAsyncActionPostGameDataFrame;
class USteamCoreWebAsyncActionProcessAgreement;
class USteamCoreWebAsyncActionQueryTxn;
class USteamCoreWebAsyncActionRankedByPublicationOrder;
class USteamCoreWebAsyncActionRankedByTrend;
class USteamCoreWebAsyncActionRankedByVote;
class USteamCoreWebAsyncActionRefundTxn;
class USteamCoreWebAsyncActionRemovePlayerGameBan;
class USteamCoreWebAsyncActionReportAbuse;
class USteamCoreWebAsyncActionReportCheatData;
class USteamCoreWebAsyncActionReportPlayerCheating;
class USteamCoreWebAsyncActionRequestNotifications;
class USteamCoreWebAsyncActionRequestPlayerGameBan;
class USteamCoreWebAsyncActionRequestVacStatusForUser;
class USteamCoreWebAsyncActionResetLeaderboard;
class USteamCoreWebAsyncActionResolveVanityURL;
class USteamCoreWebAsyncActionResultSetSummary;
class USteamCoreWebAsyncActionSetLeaderboardScore;
class USteamCoreWebAsyncActionSetUGCUsedByGC;
class USteamCoreWebAsyncActionSetUserStatsForGame;
class USteamCoreWebAsyncActionStartAssetTransaction;
class USteamCoreWebAsyncActionStartSecureMultiplayerSession;
class USteamCoreWebAsyncActionStartTrade;
class USteamCoreWebAsyncActionSubscribePublishedFile;
class USteamCoreWebAsyncActionSupportGetAssetHistory;
class USteamCoreWebAsyncActionUnsubscribePublishedFile;
class USteamCoreWebAsyncActionUpdateSession;
class USteamCoreWebAsyncActionUserVoteSummary;
class USteamCoreWebSettings;
class USteamCoreWebSubsystem;
class USteamWebUtilities;
class UWebApps;
class UWebBroadcastService;
class UWebCheatReporting;
class UWebEconMarketService;
class UWebEconService;
class UWebGameInventory;
class UWebGameNotificationsService;
class UWebGameServersService;
class UWebInventoryService;
class UWebLeaderboards;
class UWebLobbyMatchmakingService;
class UWebMicroTxn;
class UWebPlayerService;
class UWebPublishedFileService;
class UWebPublishedItemVoting;
class UWebRemoteStorage;
class UWebSteamCommunity;
class UWebSteamEconomy;
class UWebSteamGameServerStats;
class UWebSteamNews;
class UWebSteamPublishedItemSearch;
class UWebSteamUser;
class UWebUserAuth;
class UWebUserStats;

/// Enum /Script/SteamCoreWeb.ESteamJsonResult
/// Size: 0x01 (1 bytes)
enum class ESteamJsonResult : uint8_t
{
	ESteamJsonResult__Found                                                          = 0,
	ESteamJsonResult__NotFound                                                       = 1
};

/// Enum /Script/SteamCoreWeb.ESteamValueType
/// Size: 0x01 (1 bytes)
enum class ESteamValueType : uint8_t
{
	ESteamValueType__STRING                                                          = 0,
	ESteamValueType__NUMBER                                                          = 1,
	ESteamValueType__BOOL                                                            = 2
};

/// Enum /Script/SteamCoreWeb.ESubsystemWeb
/// Size: 0x01 (1 bytes)
enum class ESubsystemWeb : uint8_t
{
	ESubsystemWeb__SteamCoreWeb                                                      = 0,
	ESubsystemWeb__Apps                                                              = 1,
	ESubsystemWeb__Broadcast                                                         = 2,
	ESubsystemWeb__CheatReporting                                                    = 3,
	ESubsystemWeb__Community                                                         = 4,
	ESubsystemWeb__Econ                                                              = 5,
	ESubsystemWeb__EconMarket                                                        = 6,
	ESubsystemWeb__Economy                                                           = 7,
	ESubsystemWeb__GameInventory                                                     = 8,
	ESubsystemWeb__GameNotifications                                                 = 9,
	ESubsystemWeb__GameServers                                                       = 10,
	ESubsystemWeb__GameServerStats                                                   = 11,
	ESubsystemWeb__Inventory                                                         = 12,
	ESubsystemWeb__LobbyMatchmaking                                                  = 13,
	ESubsystemWeb__Leaderboards                                                      = 14,
	ESubsystemWeb__MicroTxn                                                          = 15,
	ESubsystemWeb__News                                                              = 16,
	ESubsystemWeb__PlayerService                                                     = 17,
	ESubsystemWeb__PublishedFile                                                     = 18,
	ESubsystemWeb__PublishedItemSearch                                               = 19,
	ESubsystemWeb__PublishedItemVoting                                               = 20,
	ESubsystemWeb__RemoteStorage                                                     = 21,
	ESubsystemWeb__User                                                              = 22,
	ESubsystemWeb__UserAuth                                                          = 23,
	ESubsystemWeb__UserStats                                                         = 24,
	ESubsystemWeb__Workshop                                                          = 25
};

/// Enum /Script/SteamCoreWeb.ESteamCoreWebLobbyType
/// Size: 0x01 (1 bytes)
enum class ESteamCoreWebLobbyType : uint8_t
{
	ESteamCoreWebLobbyType__Private                                                  = 0,
	ESteamCoreWebLobbyType__FriendsOnly                                              = 1,
	ESteamCoreWebLobbyType__TypePublic                                               = 2,
	ESteamCoreWebLobbyType__TypeInvisible                                            = 3
};

/// Enum /Script/SteamCoreWeb.EVanityUrlType
/// Size: 0x01 (1 bytes)
enum class EVanityUrlType : uint8_t
{
	EVanityUrlType__Individual                                                       = 0,
	EVanityUrlType__Group                                                            = 1,
	EVanityUrlType__OfficialGameGroup                                                = 2
};

/// Struct /Script/SteamCoreWeb.SteamCoreJson
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSteamCoreJson
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	FString                                            String;                                                     // 0x0010   (0x0010)  
	int32_t                                            Number;                                                     // 0x0020   (0x0004)  
	bool                                               Bool;                                                       // 0x0024   (0x0001)  
	ESteamValueType                                    Type;                                                       // 0x0025   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0026   (0x0002)  MISSED
};

/// Class /Script/SteamCoreWeb.SteamCoreWeb
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USteamCoreWeb : public UObject
{ 
public:
};

/// Class /Script/SteamCoreWeb.SteamCoreWebSubsystem
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreWebSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncAction
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncAction : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,644) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0040   (0x0018)  MISSED


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncAction.HandleCallback
	void HandleCallback(FString Data, bool bWasSuccessful) // [0x96d620] Native|Public        
	{
		typedef void (*FuncPtr)(FString, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebSettings
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class USteamCoreWebSettings : public UDeveloperSettings
{ 
public:
	float                                              AsyncTaskTimeout;                                           // 0x0038   (0x0004)  
	int32_t                                            DisabledSubsystems;                                         // 0x003C   (0x0004)  
	bool                                               bDebugging;                                                 // 0x0040   (0x0001)  
	bool                                               bDevMode;                                                   // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0042   (0x0006)  MISSED
	FString                                            Key;                                                        // 0x0048   (0x0010)  
	int32_t                                            AppID;                                                      // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            DevSteamID;                                                 // 0x0060   (0x0010)  
	bool                                               bSandboxMode;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/SteamCoreWeb.SteamWebUtilities
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USteamWebUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamWebUtilities.ParseJson
	// bool ParseJson(FString JsonString, TArray<FSteamCoreJson>& Data);                                                        // [0x96d710] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.GetProjectKey
	FString GetProjectKey() // [0x96cf00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/SteamCoreWeb.SteamWebUtilities.GetProjectAppID
	int32_t GetProjectAppID() // [0x96ced0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/SteamCoreWeb.SteamWebUtilities.GetDevSteamID
	FString GetDevSteamID() // [0x96cb60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonStrings
	// void FindJsonStrings(FString JsonString, FString Key, TArray<FString>& Values, ESteamJsonResult& Result);                // [0x96b430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonString
	void FindJsonString(FString JsonString, FString Key, FString& Value, ESteamJsonResult& Result) // [0x96b250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, FString, FString&, ESteamJsonResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(JsonString, Key, Value, Result);
	}
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonNumbers
	void FindJsonNumbers(FString JsonString, FString Key, TArray<int32_t>& Values, ESteamJsonResult& Result) // [0x96b070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, FString, TArray<int32_t>&, ESteamJsonResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(JsonString, Key, Values, Result);
	}
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonNumber
	void FindJsonNumber(FString JsonString, FString Key, int32_t& Value, ESteamJsonResult& Result) // [0x96aeb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, FString, int32_t&, ESteamJsonResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(JsonString, Key, Value, Result);
	}
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonBools
	void FindJsonBools(FString JsonString, FString Key, TArray<bool>& bValues, ESteamJsonResult& Result) // [0x96acd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, FString, TArray<bool>&, ESteamJsonResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(JsonString, Key, bValues, Result);
	}
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonBool
	void FindJsonBool(FString JsonString, FString Key, bool& bValue, ESteamJsonResult& Result) // [0x96ab10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, FString, bool&, ESteamJsonResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(JsonString, Key, bValue, Result);
	}
};

/// Class /Script/SteamCoreWeb.WebApps
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebApps : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebApps.UpToDateCheck
	// void UpToDateCheck(FDelegateProperty& Callback, int32_t AppID, int32_t Version);                                         // [0x96fbf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.SetAppBuildLive
	// void SetAppBuildLive(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t BuildID, FString BetaKey, FString Description); // [0x96f420] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetServersAtAddress
	// void GetServersAtAddress(FDelegateProperty& Callback, FString Addr);                                                     // [0x96d390] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetServerList
	// void GetServerList(FDelegateProperty& Callback, FString Key, FString Filter, int32_t Limit);                             // [0x96cf80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetPlayersBanned
	// void GetPlayersBanned(FDelegateProperty& Callback, FString Key, int32_t AppID);                                          // [0x96cbe0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetCheatingReports
	// void GetCheatingReports(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, int32_t ReportidMin); // [0x96c200] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetAppList
	// void GetAppList(FDelegateProperty& Callback, FString Key);                                                               // [0x96bf70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetAppDepotVersions
	// void GetAppDepotVersions(FDelegateProperty& Callback, FString Key, int32_t AppID);                                       // [0x96bc80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetAppBuilds
	// void GetAppBuilds(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t Count);                               // [0x96b930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetAppBetas
	// void GetAppBetas(FDelegateProperty& Callback, FString Key, int32_t AppID);                                               // [0x96b640] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionGetAppBetas : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas.GetAppBetasAsync
	USteamCoreAppsAsyncActionGetAppBetas* GetAppBetasAsync(UObject* WorldContextObject, FString Key, int32_t AppID) // [0x96b7d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreAppsAsyncActionGetAppBetas* (*FuncPtr)(UObject*, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionGetAppBuilds : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds.GetAppBuildsAsync
	USteamCoreAppsAsyncActionGetAppBuilds* GetAppBuildsAsync(UObject* WorldContextObject, FString Key, int32_t AppID, int32_t Count) // [0x96baf0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreAppsAsyncActionGetAppBuilds* (*FuncPtr)(UObject*, FString, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, Count);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionGetAppDepotVersions : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions.GetAppDepotVersionsAsync
	USteamCoreAppsAsyncActionGetAppDepotVersions* GetAppDepotVersionsAsync(UObject* WorldContextObject, FString Key, int32_t AppID) // [0x96be10] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreAppsAsyncActionGetAppDepotVersions* (*FuncPtr)(UObject*, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionGetAppList : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList.GetAppListAsync
	USteamCoreAppsAsyncActionGetAppList* GetAppListAsync(UObject* WorldContextObject, FString Key) // [0x96c0d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreAppsAsyncActionGetAppList* (*FuncPtr)(UObject*, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports.GetCheatingReportsAsync
	USteamCoreAppsAsyncActionGetCheatingReports* GetCheatingReportsAsync(UObject* WorldContextObject, FString Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, int32_t ReportidMin) // [0x96c8b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreAppsAsyncActionGetCheatingReports* (*FuncPtr)(UObject*, FString, int32_t, int32_t, int32_t, bool, bool, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, TimeBegin, TimeEnd, bIncludeReports, bIncludeBans, ReportidMin);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionGetPlayersBanned : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned.GetPlayersBannedAsync
	USteamCoreAppsAsyncActionGetPlayersBanned* GetPlayersBannedAsync(UObject* WorldContextObject, FString Key, int32_t AppID) // [0x96cd70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreAppsAsyncActionGetPlayersBanned* (*FuncPtr)(UObject*, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionGetServerList : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList.GetServerListAsync
	USteamCoreAppsAsyncActionGetServerList* GetServerListAsync(UObject* WorldContextObject, FString Key, FString Filter, int32_t Limit) // [0x96d1a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreAppsAsyncActionGetServerList* (*FuncPtr)(UObject*, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, Filter, Limit);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionGetServersAtAddress : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress.GetServersAtAddressAsync
	USteamCoreAppsAsyncActionGetServersAtAddress* GetServersAtAddressAsync(UObject* WorldContextObject, FString Addr) // [0x96d4f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreAppsAsyncActionGetServersAtAddress* (*FuncPtr)(UObject*, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Addr);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionSetAppBuildLive : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive.SetAppBuildLiveAsync
	USteamCoreAppsAsyncActionSetAppBuildLive* SetAppBuildLiveAsync(UObject* WorldContextObject, FString Key, int32_t AppID, int32_t BuildID, FString BetaKey, FString Description) // [0x96f710] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreAppsAsyncActionSetAppBuildLive* (*FuncPtr)(UObject*, FString, int32_t, int32_t, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, BuildID, BetaKey, Description);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionUpToDateCheck : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck.UpToDateCheckAsync
	USteamCoreAppsAsyncActionUpToDateCheck* UpToDateCheckAsync(UObject* WorldContextObject, int32_t AppID, int32_t Version) // [0x96fd20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreAppsAsyncActionUpToDateCheck* (*FuncPtr)(UObject*, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, AppID, Version);
	}
};

/// Class /Script/SteamCoreWeb.WebBroadcastService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebBroadcastService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebBroadcastService.PostGameDataFrame
	// void PostGameDataFrame(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString BroadcastId, FString FrameData); // [0x96d850] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionPostGameDataFrame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame.PostGameDataFrameAsync
	USteamCoreWebAsyncActionPostGameDataFrame* PostGameDataFrameAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString BroadcastId, FString FrameData) // [0x96db90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionPostGameDataFrame* (*FuncPtr)(UObject*, FString, int32_t, FString, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, SteamID, BroadcastId, FrameData);
	}
};

/// Class /Script/SteamCoreWeb.WebCheatReporting
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebCheatReporting : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebCheatReporting.StartSecureMultiplayerSession
	// void StartSecureMultiplayerSession(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);            // [0x96f9d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.RequestVacStatusForUser
	// void RequestVacStatusForUser(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString SessionID); // [0x96f170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.RequestPlayerGameBan
	// void RequestPlayerGameBan(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString ReportID, FString CheatDescription, int32_t Duration, bool bDelayBan); // [0x96eda0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.ReportPlayerCheating
	// void ReportPlayerCheating(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString SteamIdReporter, FString AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity); // [0x96e860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.ReportCheatData
	// void ReportCheatData(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32_t GameProcessId, int32_t CheatProcessId, FString CheatParam1, FString CheatParam2); // [0x96e0c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.RemovePlayerGameBan
	// void RemovePlayerGameBan(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);                      // [0x96dea0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.GetCheatingReports
	// void GetCheatingReports(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, FString ReportidMin, bool bIncludeReports, bool bIncludeBans, FString SteamID); // [0x96c4f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.EndSecureMultiplayerSession
	// void EndSecureMultiplayerSession(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString SessionID); // [0x96a860] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionReportPlayerCheating : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating.ReportPlayerCheatingAsync
	USteamCoreWebAsyncActionReportPlayerCheating* ReportPlayerCheatingAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString SteamIdReporter, FString AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity) // [0x976a90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionReportPlayerCheating* (*FuncPtr)(UObject*, FString, int32_t, FString, FString, FString, bool, bool, bool, bool, int32_t, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, SteamID, SteamIdReporter, AppData, bHeuristic, bDetection, bPlayerReport, bNoReportID, GameMode, SuspicionStartTime, Severity);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRequestPlayerGameBan : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan.RequestPlayerGameBanAsync
	USteamCoreWebAsyncActionRequestPlayerGameBan* RequestPlayerGameBanAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString ReportID, FString CheatDescription, int32_t Duration, bool bDelayBan) // [0x976fa0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionRequestPlayerGameBan* (*FuncPtr)(UObject*, FString, FString, int32_t, FString, FString, int32_t, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID, ReportID, CheatDescription, Duration, bDelayBan);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRemovePlayerGameBan : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan.RemovePlayerGameBanAsync
	USteamCoreWebAsyncActionRemovePlayerGameBan* RemovePlayerGameBanAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID) // [0x976150] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionRemovePlayerGameBan* (*FuncPtr)(UObject*, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports.GetCheatingReportsAsync
	USteamCoreWebAsyncActionGetCheatingReports* GetCheatingReportsAsync(UObject* WorldContextObject, FString Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, FString ReportidMin, bool bIncludeReports, bool bIncludeBans, FString SteamID) // [0x973e10] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetCheatingReports* (*FuncPtr)(UObject*, FString, int32_t, int32_t, int32_t, FString, bool, bool, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, TimeEnd, TimeBegin, ReportidMin, bIncludeReports, bIncludeBans, SteamID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionReportCheatData : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData.ReportCheatDataAsync
	USteamCoreWebAsyncActionReportCheatData* ReportCheatDataAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32_t GameProcessId, int32_t CheatProcessId, FString CheatParam1, FString CheatParam2) // [0x976340] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionReportCheatData* (*FuncPtr)(UObject*, FString, FString, int32_t, FString, FString, FString, FString, FString, FString, int32_t, int32_t, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID, PathAndFileName, WebCheatURL, TimeNow, TimeStarted, TimeStopped, CheatName, GameProcessId, CheatProcessId, CheatParam1, CheatParam2);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRequestVacStatusForUser : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser.RequestVacStatusForUserAsync
	USteamCoreWebAsyncActionRequestVacStatusForUser* RequestVacStatusForUserAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString SessionID) // [0x977340] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionRequestVacStatusForUser* (*FuncPtr)(UObject*, FString, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID, SessionID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionStartSecureMultiplayerSession : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession.StartSecureMultiplayerSessionAsync
	USteamCoreWebAsyncActionStartSecureMultiplayerSession* StartSecureMultiplayerSessionAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID) // [0x9775c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionStartSecureMultiplayerSession* (*FuncPtr)(UObject*, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionEndSecureMultiplayerSession : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession.EndSecureMultiplayerSessionAsync
	USteamCoreWebAsyncActionEndSecureMultiplayerSession* EndSecureMultiplayerSessionAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString SessionID) // [0x972c70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionEndSecureMultiplayerSession* (*FuncPtr)(UObject*, FString, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID, SessionID);
	}
};

/// Class /Script/SteamCoreWeb.WebEconMarketService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebEconMarketService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebEconMarketService.GetPopular
	// void GetPopular(FDelegateProperty& Callback, FString Key, FString Language, int32_t Rows, int32_t Start, int32_t FilterAppId, int32_t ECurrency); // [0x974530] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconMarketService.GetMarketEligibility
	// void GetMarketEligibility(FDelegateProperty& Callback, FString Key, FString SteamID);                                    // [0x9741a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconMarketService.GetAssetID
	// void GetAssetID(FDelegateProperty& Callback, FString Key, int32_t AppID, FString ListingId);                             // [0x973a00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconMarketService.CancelAppListingsForUser
	// void CancelAppListingsForUser(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, bool bSynchronous); // [0x9720b0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetMarketEligibility : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility.GetMarketEligibilityAsync
	USteamCoreWebAsyncActionGetMarketEligibility* GetMarketEligibilityAsync(UObject* WorldContextObject, FString Key, FString SteamID) // [0x974380] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetMarketEligibility* (*FuncPtr)(UObject*, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionCancelAppListingsForUser : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser.CancelAppListingsForUserAsync
	USteamCoreWebAsyncActionCancelAppListingsForUser* CancelAppListingsForUserAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, bool bSynchronous) // [0x972320] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionCancelAppListingsForUser* (*FuncPtr)(UObject*, FString, int32_t, FString, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, SteamID, bSynchronous);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetAssetID : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID.GetAssetIDAsync
	USteamCoreWebAsyncActionGetAssetID* GetAssetIDAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString ListingId) // [0x973c20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetAssetID* (*FuncPtr)(UObject*, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, ListingId);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPopular
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPopular : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPopular.GetPopularAsync
	USteamCoreWebAsyncActionGetPopular* GetPopularAsync(UObject* WorldContextObject, FString Key, FString Language, int32_t Rows, int32_t Start, int32_t FilterAppId, int32_t ECurrency) // [0x974810] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetPopular* (*FuncPtr)(UObject*, FString, FString, int32_t, int32_t, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, Language, Rows, Start, FilterAppId, ECurrency);
	}
};

/// Class /Script/SteamCoreWeb.WebEconService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebEconService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebEconService.GetTradeOffersSummary
	// void GetTradeOffersSummary(FDelegateProperty& Callback, FString Key, int32_t TimeLastVisit);                             // [0x975e60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.GetTradeOffers
	// void GetTradeOffers(FDelegateProperty& Callback, FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff); // [0x975770] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.GetTradeOffer
	// void GetTradeOffer(FDelegateProperty& Callback, FString Key, FString TradeOfferId, FString Language);                    // [0x9752c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.GetTradeHistory
	// void GetTradeHistory(FDelegateProperty& Callback, FString Key, int32_t MaxTrades, int32_t StartAfterTime, FString StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, FString Language, bool bIncludeFailed, bool bIncludeTotal); // [0x974ac0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.FlushInventoryCache
	// void FlushInventoryCache(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString ContextId);   // [0x9734d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.FlushContextCache
	// void FlushContextCache(FDelegateProperty& Callback, FString Key, int32_t AppID);                                         // [0x9731e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.FlushAssetAppearanceCache
	// void FlushAssetAppearanceCache(FDelegateProperty& Callback, FString Key, int32_t AppID);                                 // [0x972ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.DeclineTradeOffer
	// void DeclineTradeOffer(FDelegateProperty& Callback, FString Key, FString TradeOfferId);                                  // [0x9728e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.CancelTradeOffer
	// void CancelTradeOffer(FDelegateProperty& Callback, FString Key, FString TradeOfferId);                                   // [0x972550] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetTradeHistory : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory.GetTradeHistoryAsync
	USteamCoreWebAsyncActionGetTradeHistory* GetTradeHistoryAsync(UObject* WorldContextObject, FString Key, int32_t MaxTrades, int32_t StartAfterTime, FString StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, FString Language, bool bIncludeFailed, bool bIncludeTotal) // [0x974ed0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetTradeHistory* (*FuncPtr)(UObject*, FString, int32_t, int32_t, FString, bool, bool, FString, bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, MaxTrades, StartAfterTime, StartAfterTradeId, bNavigatingBack, bGetDescriptions, Language, bIncludeFailed, bIncludeTotal);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionFlushInventoryCache : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache.FlushInventoryCacheAsync
	USteamCoreWebAsyncActionFlushInventoryCache* FlushInventoryCacheAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString ContextId) // [0x973780] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionFlushInventoryCache* (*FuncPtr)(UObject*, FString, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID, ContextId);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionFlushAssetAppearanceCache : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache.FlushAssetAppearanceCacheAsync
	USteamCoreWebAsyncActionFlushAssetAppearanceCache* FlushAssetAppearanceCacheAsync(UObject* WorldContextObject, FString Key, int32_t AppID) // [0x973080] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionFlushAssetAppearanceCache* (*FuncPtr)(UObject*, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionFlushContextCache : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache.FlushContextCacheAsync
	USteamCoreWebAsyncActionFlushContextCache* FlushContextCacheAsync(UObject* WorldContextObject, FString Key, int32_t AppID) // [0x973370] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionFlushContextCache* (*FuncPtr)(UObject*, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetTradeOffers : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers.GetTradeOffersAsync
	USteamCoreWebAsyncActionGetTradeOffers* GetTradeOffersAsync(UObject* WorldContextObject, FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff) // [0x975af0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetTradeOffers* (*FuncPtr)(UObject*, FString, bool, bool, bool, FString, bool, bool, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, bGetSentOffers, bGetReceivedOffers, bGetDescriptions, Language, bActiveOnly, bHistoricalOnly, TimeHistoricalCutoff);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetTradeOffer : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer.GetTradeOfferAsync
	USteamCoreWebAsyncActionGetTradeOffer* GetTradeOfferAsync(UObject* WorldContextObject, FString Key, FString TradeOfferId, FString Language) // [0x975530] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetTradeOffer* (*FuncPtr)(UObject*, FString, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, TradeOfferId, Language);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetTradeOffersSummary : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary.GetTradeOffersSummaryAsync
	USteamCoreWebAsyncActionGetTradeOffersSummary* GetTradeOffersSummaryAsync(UObject* WorldContextObject, FString Key, int32_t TimeLastVisit) // [0x975ff0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetTradeOffersSummary* (*FuncPtr)(UObject*, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, TimeLastVisit);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionDeclineTradeOffer : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer.DeclineTradeOfferAsync
	USteamCoreWebAsyncActionDeclineTradeOffer* DeclineTradeOfferAsync(UObject* WorldContextObject, FString Key, FString TradeOfferId) // [0x972ac0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionDeclineTradeOffer* (*FuncPtr)(UObject*, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, TradeOfferId);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionCancelTradeOffer : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer.CancelTradeOfferAsync
	USteamCoreWebAsyncActionCancelTradeOffer* CancelTradeOfferAsync(UObject* WorldContextObject, FString Key, FString TradeOfferId) // [0x972730] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionCancelTradeOffer* (*FuncPtr)(UObject*, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, TradeOfferId);
	}
};

/// Class /Script/SteamCoreWeb.WebGameInventory
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebGameInventory : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebGameInventory.UpdateItemDefs
	void UpdateItemDefs() // [0x97f5e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/SteamCoreWeb.WebGameInventory.SupportGetAssetHistory
	// void SupportGetAssetHistory(FDelegateProperty& Callback, FString Key, int32_t AppID, FString AssetId, FString ContextId); // [0x97f0b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameInventory.HistoryExecuteCommands
	// void HistoryExecuteCommands(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString ContextId, int32_t ActorId); // [0x97e150] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameInventory.GetUserHistory
	// void GetUserHistory(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString ContextId, int32_t StartTime, int32_t EndTime); // [0x97d870] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameInventory.GetHistoryCommandDetails
	// void GetHistoryCommandDetails(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString Command, FString ContextId, FString Arguments); // [0x97c1a0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetHistoryCommandDetails : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails.GetHistoryCommandDetailsAsync
	USteamCoreWebAsyncActionGetHistoryCommandDetails* GetHistoryCommandDetailsAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString Command, FString ContextId, FString Arguments) // [0x97c570] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetHistoryCommandDetails* (*FuncPtr)(UObject*, FString, int32_t, FString, FString, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, SteamID, Command, ContextId, Arguments);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetUserHistory : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory.GetUserHistoryAsync
	USteamCoreWebAsyncActionGetUserHistory* GetUserHistoryAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString ContextId, int32_t StartTime, int32_t EndTime) // [0x97dba0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetUserHistory* (*FuncPtr)(UObject*, FString, int32_t, FString, FString, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, SteamID, ContextId, StartTime, EndTime);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionHistoryExecuteCommand : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand.HistoryExecuteCommandAsync
	USteamCoreWebAsyncActionHistoryExecuteCommand* HistoryExecuteCommandAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString ContextId, int32_t ActorId) // [0x97dea0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionHistoryExecuteCommand* (*FuncPtr)(UObject*, FString, int32_t, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, SteamID, ContextId, ActorId);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionSupportGetAssetHistory : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory.SupportGetAssetHistoryAsync
	USteamCoreWebAsyncActionSupportGetAssetHistory* SupportGetAssetHistoryAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString AssetId, FString ContextId) // [0x97f360] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionSupportGetAssetHistory* (*FuncPtr)(UObject*, FString, int32_t, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, AssetId, ContextId);
	}
};

/// Class /Script/SteamCoreWeb.WebGameNotificationsService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebGameNotificationsService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.UpdateSession
	// void UpdateSession(FDelegateProperty& Callback, FString Key, FString SessionID, int32_t AppID, FString Title, FString Users, FString SteamID); // [0x97f600] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.RequestNotifications
	// void RequestNotifications(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);                     // [0x97e7c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.GetSessionDetailsForApp
	// void GetSessionDetailsForApp(FDelegateProperty& Callback, FString Key, FString Sessions, int32_t AppID, FString Language); // [0x97d340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.EnumerateSessionsForApp
	// void EnumerateSessionsForApp(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language); // [0x97b620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.DeleteSessionBatch
	// void DeleteSessionBatch(FDelegateProperty& Callback, FString Key, FString SessionID, int32_t AppID);                     // [0x97b210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.DeleteSession
	// void DeleteSession(FDelegateProperty& Callback, FString Key, FString SessionID, int32_t AppID, FString SteamID);         // [0x97ace0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.CreateSession
	// void CreateSession(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Context, FString Title, FString Users, FString SteamID); // [0x97a390] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCreateSession
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionCreateSession : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCreateSession.CreateSessionAsync
	USteamCoreWebAsyncActionCreateSession* CreateSessionAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString Context, FString Title, FString Users, FString SteamID) // [0x97a760] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionCreateSession* (*FuncPtr)(UObject*, FString, int32_t, FString, FString, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, Context, Title, Users, SteamID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionUpdateSession : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession.UpdateSessionAsync
	USteamCoreWebAsyncActionUpdateSession* UpdateSessionAsync(UObject* WorldContextObject, FString Key, FString SessionID, int32_t AppID, FString Title, FString Users, FString SteamID) // [0x97f9d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionUpdateSession* (*FuncPtr)(UObject*, FString, FString, int32_t, FString, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SessionID, AppID, Title, Users, SteamID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionEnumerateSessionsForApp : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp.EnumerateSessionsForAppAsync
	USteamCoreWebAsyncActionEnumerateSessionsForApp* EnumerateSessionsForAppAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language) // [0x97b960] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionEnumerateSessionsForApp* (*FuncPtr)(UObject*, FString, int32_t, FString, bool, bool, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, SteamID, bIncludeAllUserMessages, bIncludeAuthUserMessage, Language);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetSessionDetailsForApp : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp.GetSessionDetailsForAppAsync
	USteamCoreWebAsyncActionGetSessionDetailsForApp* GetSessionDetailsForAppAsync(UObject* WorldContextObject, FString Key, FString Sessions, int32_t AppID, FString Language) // [0x97d5f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetSessionDetailsForApp* (*FuncPtr)(UObject*, FString, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, Sessions, AppID, Language);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRequestNotifications : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications.RequestNotificationsAsync
	USteamCoreWebAsyncActionRequestNotifications* RequestNotificationsAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID) // [0x97e9e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionRequestNotifications* (*FuncPtr)(UObject*, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionDeleteSession : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession.DeleteSessionAsync
	USteamCoreWebAsyncActionDeleteSession* DeleteSessionAsync(UObject* WorldContextObject, FString Key, FString SessionID, int32_t AppID, FString SteamID) // [0x97af90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionDeleteSession* (*FuncPtr)(UObject*, FString, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SessionID, AppID, SteamID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionDeleteSessionBatch : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch.DeleteSessionBatchAsync
	USteamCoreWebAsyncActionDeleteSessionBatch* DeleteSessionBatchAsync(UObject* WorldContextObject, FString Key, FString SessionID, int32_t AppID) // [0x97b430] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionDeleteSessionBatch* (*FuncPtr)(UObject*, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SessionID, AppID);
	}
};

/// Class /Script/SteamCoreWeb.WebGameServersService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebGameServersService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebGameServersService.SetMemo
	// void SetMemo(FDelegateProperty& Callback, FString Key, FString SteamID, FString Memo);                                   // [0x97ee40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.SetBanStatus
	// void SetBanStatus(FDelegateProperty& Callback, FString Key, FString SteamID, bool bBanned, int32_t banSeconds);          // [0x97ebd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.ResetLoginToken
	// void ResetLoginToken(FDelegateProperty& Callback, FString Key, FString SteamID);                                         // [0x97ab00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.QueryLoginToken
	// void QueryLoginToken(FDelegateProperty& Callback, FString Key, FString LoginToken);                                      // [0x97ab00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.GetServerSteamIDsByIP
	// void GetServerSteamIDsByIP(FDelegateProperty& Callback, FString Key, FString ServerIP);                                  // [0x97ab00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.GetServerIPsBySteamID
	// void GetServerIPsBySteamID(FDelegateProperty& Callback, FString Key, FString ServerSteamId);                             // [0x97ab00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.GetAccountPublicInfo
	// void GetAccountPublicInfo(FDelegateProperty& Callback, FString Key, FString SteamID);                                    // [0x97ab00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.GetAccountList
	// void GetAccountList(FDelegateProperty& Callback, FString Key);                                                           // [0x97c040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.DeleteAccount
	// void DeleteAccount(FDelegateProperty& Callback, FString Key, FString SteamID);                                           // [0x97ab00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.CreateAccount
	// void CreateAccount(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Memo);                               // [0x97a170] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebInventoryService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebInventoryService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebInventoryService.ModifyItems
	// void ModifyItems(FDelegateProperty& Callback, FString Key, int32_t AppID, FString InputJson, FString SteamID, int32_t Timestamp, FString Updates); // [0x97e440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.GetQuantity
	// void GetQuantity(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> ItemdefIDs, bool bForce); // [0x97d040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.GetPriceSheet
	// void GetPriceSheet(FDelegateProperty& Callback, FString Key, int32_t Currency);                                          // [0x97ceb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.GetItemDefs
	// void GetItemDefs(FDelegateProperty& Callback, FString Key, int32_t AppID, FString ModifiedSince, TArray<int32_t> ItemdefIDs, TArray<int32_t> WorkshopIDs, int32_t CacheMaxAgeSeconds); // [0x97cb30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.GetInventory
	// void GetInventory(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID);                             // [0x97c910] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.ExchangeItem
	// void ExchangeItem(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> MaterialsItemID, TArray<int32_t> MaterialsQuantity, FString OutputItemdefId); // [0x97bc70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.ConsumeItem
	// void ConsumeItem(FDelegateProperty& Callback, FString Key, int32_t AppID, FString ItemId, FString Quantity, FString SteamID, FString RequestID); // [0x979da0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.Consolidate
	// void Consolidate(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> ItemdefIDs, bool bForce); // [0x979aa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.AddPromoItem
	// void AddPromoItem(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestID); // [0x9796d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.AddItem
	// void AddItem(FDelegateProperty& Callback, FString Key, int32_t AppID, TArray<int32_t> ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestID, bool bTradeRestriction); // [0x979250] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAddItem
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionAddItem : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionAddItem.AddItemAsync
	USteamCoreWebAsyncActionAddItem* AddItemAsync(UObject* WorldContextObject, FString Key, int32_t AppID, TArray<int32_t> ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestID, bool bTradeRestriction) // [0x981ba0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionAddItem* (*FuncPtr)(UObject*, FString, int32_t, TArray<int32_t>, FString, FString, bool, FString, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, ItemdefId, ItemPropsJson, SteamID, bNotify, RequestID, bTradeRestriction);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionAddPromoItem : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem.AddPromoItemAsync
	USteamCoreWebAsyncActionAddPromoItem* AddPromoItemAsync(UObject* WorldContextObject, FString Key, int32_t AppID, int32_t ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestID) // [0x981fd0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionAddPromoItem* (*FuncPtr)(UObject*, FString, int32_t, int32_t, FString, FString, bool, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, ItemdefId, ItemPropsJson, SteamID, bNotify, RequestID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionConsumeItem : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem.ConsumeItemAsync
	USteamCoreWebAsyncActionConsumeItem* ConsumeItemAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString ItemId, FString Quantity, FString SteamID, FString RequestID) // [0x982c30] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionConsumeItem* (*FuncPtr)(UObject*, FString, int32_t, FString, FString, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, ItemId, Quantity, SteamID, RequestID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionExchangeItem : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem.ExchangeItemAsync
	USteamCoreWebAsyncActionExchangeItem* ExchangeItemAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> MaterialsItemID, TArray<int32_t> MaterialsQuantity, FString OutputItemdefId) // [0x9838e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionExchangeItem* (*FuncPtr)(UObject*, FString, int32_t, FString, TArray<int32_t>, TArray<int32_t>, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, SteamID, MaterialsItemID, MaterialsQuantity, OutputItemdefId);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetInventory
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetInventory : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetInventory.GetInventoryAsync
	USteamCoreWebAsyncActionGetInventory* GetInventoryAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID) // [0x9846b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetInventory* (*FuncPtr)(UObject*, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, SteamID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetItemDefs : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs.GetItemDefsAsync
	USteamCoreWebAsyncActionGetItemDefs* GetItemDefsAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString ModifiedSince, TArray<int32_t> ItemdefIDs, TArray<int32_t> WorkshopIDs, int32_t CacheMaxAgeSeconds) // [0x9848a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetItemDefs* (*FuncPtr)(UObject*, FString, int32_t, FString, TArray<int32_t>, TArray<int32_t>, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, ModifiedSince, ItemdefIDs, WorkshopIDs, CacheMaxAgeSeconds);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPriceSheet : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet.GetPriceSheetAsync
	USteamCoreWebAsyncActionGetPriceSheet* GetPriceSheetAsync(UObject* WorldContextObject, FString Key, int32_t Currency) // [0x9854f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetPriceSheet* (*FuncPtr)(UObject*, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, Currency);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionConsolidate
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionConsolidate : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionConsolidate.ConsolidateAsync
	USteamCoreWebAsyncActionConsolidate* ConsolidateAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> ItemdefIDs, bool bForce) // [0x982960] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionConsolidate* (*FuncPtr)(UObject*, FString, int32_t, FString, TArray<int32_t>, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, SteamID, ItemdefIDs, bForce);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetQuantity : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity.GetQuantityAsync
	USteamCoreWebAsyncActionGetQuantity* GetQuantityAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> ItemdefIDs, bool bForce) // [0x985650] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetQuantity* (*FuncPtr)(UObject*, FString, int32_t, FString, TArray<int32_t>, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, SteamID, ItemdefIDs, bForce);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionModifyItems
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionModifyItems : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionModifyItems.ModifyItemsAsync
	USteamCoreWebAsyncActionModifyItems* ModifyItemsAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString InputJson, FString SteamID, int32_t Timestamp, FString Updates) // [0x987620] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionModifyItems* (*FuncPtr)(UObject*, FString, int32_t, FString, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, InputJson, SteamID, Timestamp, Updates);
	}
};

/// Class /Script/SteamCoreWeb.WebLeaderboards
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebLeaderboards : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebLeaderboards.SetLeaderboardScore
	// void SetLeaderboardScore(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t LeaderbordId, FString SteamID, int32_t Score, TArray<char> Details, FString ScoreMethod); // [0x9888e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLeaderboards.ResetLeaderboard
	// void ResetLeaderboard(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t LeaderboardId);                   // [0x988590] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLeaderboards.GetLeaderboardsForGame
	// void GetLeaderboardsForGame(FDelegateProperty& Callback, FString Key, int32_t AppID);                                    // [0x985200] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLeaderboards.GetLeaderboardEntries
	// void GetLeaderboardEntries(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardId, int32_t DataRequest, FString SteamID); // [0x984bf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLeaderboards.FindOrCreateLeaderboard
	// void FindOrCreateLeaderboard(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads); // [0x983ea0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLeaderboards.DeleteLeaderboard
	// void DeleteLeaderboard(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Name);                           // [0x9834d0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionDeleteLeaderboard : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard.DeleteLeaderboardAsync
	USteamCoreWebAsyncActionDeleteLeaderboard* DeleteLeaderboardAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString Name) // [0x9836f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionDeleteLeaderboard* (*FuncPtr)(UObject*, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, Name);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionFindOrCreateLeaderboard : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync
	USteamCoreWebAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads) // [0x9842c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionFindOrCreateLeaderboard* (*FuncPtr)(UObject*, FString, int32_t, FString, FString, FString, bool, bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, Name, SortMethod, DisplayType, bCreateIfNotFound, bOnlyTrustedWrites, bOnlyFriendsReads);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetLeaderboardEntries : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries.GetLeaderboardEntriesAsync
	USteamCoreWebAsyncActionGetLeaderboardEntries* GetLeaderboardEntriesAsync(UObject* WorldContextObject, FString Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardId, int32_t DataRequest, FString SteamID) // [0x984f10] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetLeaderboardEntries* (*FuncPtr)(UObject*, FString, int32_t, int32_t, int32_t, int32_t, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, RangeStart, RangeEnd, LeaderboardId, DataRequest, SteamID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetLeaderboardsForGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame.GetLeaderboardsForGameAsync
	USteamCoreWebAsyncActionGetLeaderboardsForGame* GetLeaderboardsForGameAsync(UObject* WorldContextObject, FString Key, int32_t AppID) // [0x985390] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetLeaderboardsForGame* (*FuncPtr)(UObject*, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionResetLeaderboard : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard.ResetLeaderboardAsync
	USteamCoreWebAsyncActionResetLeaderboard* ResetLeaderboardAsync(UObject* WorldContextObject, FString Key, int32_t AppID, int32_t LeaderboardId) // [0x988750] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionResetLeaderboard* (*FuncPtr)(UObject*, FString, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, LeaderboardId);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionSetLeaderboardScore : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore.SetLeaderboardScoreAsync
	USteamCoreWebAsyncActionSetLeaderboardScore* SetLeaderboardScoreAsync(UObject* WorldContextObject, FString Key, int32_t AppID, int32_t LeaderboardId, FString SteamID, int32_t Score, TArray<char> Details, FString ScoreMethod) // [0x988ca0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionSetLeaderboardScore* (*FuncPtr)(UObject*, FString, int32_t, int32_t, FString, int32_t, TArray<char>, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, LeaderboardId, SteamID, Score, Details, ScoreMethod);
	}
};

/// Class /Script/SteamCoreWeb.WebLobbyMatchmakingService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebLobbyMatchmakingService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebLobbyMatchmakingService.RemoveUserFromLobby
	// void RemoveUserFromLobby(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamIdToRemove, FString SteamIDLobby, FString InputJson); // [0x988250] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLobbyMatchmakingService.CreateLobby
	// void CreateLobby(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t MaxMembers, ESteamCoreWebLobbyType LobbyType, FString LobbyName, FString InputJson, TArray<FString> SteamIdInvitedMembers, FString LobbyMetaData); // [0x982fd0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebMicroTxn
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebMicroTxn : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebMicroTxn.RefundTxn
	// void RefundTxn(FDelegateProperty& Callback, FString Key, FString OrderId, int32_t AppID);                                // [0x988030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.QueryTxn
	// void QueryTxn(FDelegateProperty& Callback, FString Key, int32_t AppID, FString OrderId, FString TransId);                // [0x987d80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.ProcessAgreement
	// void ProcessAgreement(FDelegateProperty& Callback, FString Key, FString OrderId, FString SteamID, FString AgreementId, int32_t AppID, int32_t Amount, FString Currency); // [0x987960] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.MakeTransactionID
	FString MakeTransactionID() // [0x9875a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/SteamCoreWeb.WebMicroTxn.InitTxn
	// void InitTxn(FDelegateProperty& Callback, FString Key, FString OrderId, FString SteamID, int32_t AppID, FString Language, FString Currency, FString UserSession, FString Ipaddress, TArray<int32_t> ItemId, TArray<int32_t> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32_t> AssociatedBundle, TArray<FString> BillingType, TArray<FString> StartDate, TArray<FString> EndDate, TArray<FString> Period, TArray<int32_t> Frequency, TArray<FString> RecurringAmt, TArray<int32_t> BundleCount, TArray<int32_t> BundleId, TArray<int32_t> BundleQty, TArray<FString> BundleDesc, TArray<FString> BundleCategory); // [0x986050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.GetUserInfo
	// void GetUserInfo(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t Ipaddress);                          // [0x985e30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.GetUserAgreementInfo
	// void GetUserAgreementInfo(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);                     // [0x985c10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.GetReport
	// void GetReport(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Time, FString Type, int32_t MaxResults); // [0x985920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.FinalizeTxn
	// void FinalizeTxn(FDelegateProperty& Callback, FString Key, FString OrderId, int32_t AppID);                              // [0x983c80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.CancelAgreement
	// void CancelAgreement(FDelegateProperty& Callback, FString Key, FString SteamID, FString AgreementId, int32_t AppID);     // [0x9826b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.AdjustAgreement
	// void AdjustAgreement(FDelegateProperty& Callback, FString Key, FString SteamID, FString AgreementId, int32_t AppID, FString NextProcessDate); // [0x982370] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionAdjustAgreement : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement.AdjustAgreementAsync
	USteamCoreWebAsyncActionAdjustAgreement* AdjustAgreementAsync(UObject* WorldContextObject, FString Key, FString SteamID, FString AgreementId, int32_t AppID, FString NextProcessDate) // [0x98ade0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionAdjustAgreement* (*FuncPtr)(UObject*, FString, FString, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AgreementId, AppID, NextProcessDate);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionCancelAgreement : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement.CancelAgreementAsync
	USteamCoreWebAsyncActionCancelAgreement* CancelAgreementAsync(UObject* WorldContextObject, FString Key, FString SteamID, FString AgreementId, int32_t AppID) // [0x98b0f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionCancelAgreement* (*FuncPtr)(UObject*, FString, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AgreementId, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionFinalizeTxn : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn.FinalizeTxnAsync
	USteamCoreWebAsyncActionFinalizeTxn* FinalizeTxnAsync(UObject* WorldContextObject, FString Key, FString OrderId, int32_t AppID) // [0x98b370] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionFinalizeTxn* (*FuncPtr)(UObject*, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, OrderId, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetReport
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetReport : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetReport.GetReportAsync
	USteamCoreWebAsyncActionGetReport* GetReportAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString Time, FString Type, int32_t MaxResults) // [0x98c6e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetReport* (*FuncPtr)(UObject*, FString, int32_t, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, Time, Type, MaxResults);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetUserAgreementInfo : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo.GetUserAgreementInfoAsync
	USteamCoreWebAsyncActionGetUserAgreementInfo* GetUserAgreementInfoAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID) // [0x98cd20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetUserAgreementInfo* (*FuncPtr)(UObject*, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetUserInfo : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo.GetUserInfoAsync
	USteamCoreWebAsyncActionGetUserInfo* GetUserInfoAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t Ipaddress) // [0x98cf10] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetUserInfo* (*FuncPtr)(UObject*, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, Ipaddress);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionInitTxn
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionInitTxn : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionInitTxn.InitTxnAsync
	// USteamCoreWebAsyncActionInitTxn* InitTxnAsync(UObject* WorldContextObject, FString Key, FString OrderId, FString SteamID, int32_t AppID, FString Language, FString Currency, FString UserSession, FString Ipaddress, TArray<int32_t> ItemId, TArray<int32_t> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32_t> AssociatedBundle, TArray<FString> BillingType, TArray<FString> StartDate, TArray<FString> EndDate, TArray<FString> Period, TArray<int32_t> Frequency, TArray<FString> RecurringAmt, TArray<int32_t> BundleCount, TArray<int32_t> BundleId, TArray<int32_t> BundleQty, TArray<FString> BundleDesc, TArray<FString> BundleCategory); // [0x98d100] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionProcessAgreement : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement.ProcessAgreementAsync
	USteamCoreWebAsyncActionProcessAgreement* ProcessAgreementAsync(UObject* WorldContextObject, FString Key, FString OrderId, FString SteamID, FString AgreementId, int32_t AppID, int32_t Amount, FString Currency) // [0x98ea00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionProcessAgreement* (*FuncPtr)(UObject*, FString, FString, FString, FString, int32_t, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, OrderId, SteamID, AgreementId, AppID, Amount, Currency);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionQueryTxn : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn.QueryTxnAsync
	USteamCoreWebAsyncActionQueryTxn* QueryTxnAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString OrderId, FString TransId) // [0x98faa0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionQueryTxn* (*FuncPtr)(UObject*, FString, int32_t, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, OrderId, TransId);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRefundTxn : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn.RefundTxnAsync
	USteamCoreWebAsyncActionRefundTxn* RefundTxnAsync(UObject* WorldContextObject, FString Key, FString OrderId, int32_t AppID) // [0x990d90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionRefundTxn* (*FuncPtr)(UObject*, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, OrderId, AppID);
	}
};

/// Class /Script/SteamCoreWeb.WebPlayerService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebPlayerService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebPlayerService.IsPlayingSharedGame
	// void IsPlayingSharedGame(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppIdPlaying);               // [0x98e5f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPlayerService.GetSteamLevel
	// void GetSteamLevel(FDelegateProperty& Callback, FString Key, FString SteamID);                                           // [0x98c990] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPlayerService.GetRecentlyPlayedGames
	// void GetRecentlyPlayedGames(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t Count);                   // [0x98c2d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPlayerService.GetOwnedGames
	// void GetOwnedGames(FDelegateProperty& Callback, FString Key, FString SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> Filter); // [0x98bd00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPlayerService.GetCommunityBadgeProgress
	// void GetCommunityBadgeProgress(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t BadgeId);              // [0x98b8f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPlayerService.GetBadges
	// void GetBadges(FDelegateProperty& Callback, FString Key, FString SteamID);                                               // [0x98b560] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetRecentlyPlayedGames : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames.GetRecentlyPlayedGamesAsync
	USteamCoreWebAsyncActionGetRecentlyPlayedGames* GetRecentlyPlayedGamesAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t Count) // [0x98c4f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetRecentlyPlayedGames* (*FuncPtr)(UObject*, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, Count);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetOwnedGames : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames.GetOwnedGamesAsync
	USteamCoreWebAsyncActionGetOwnedGames* GetOwnedGamesAsync(UObject* WorldContextObject, FString Key, FString SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> Filter) // [0x98c000] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetOwnedGames* (*FuncPtr)(UObject*, FString, FString, bool, bool, TArray<int32_t>);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, bIncludeAppInfo, bIncludePlayedFreeGames, Filter);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetSteamLevel : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel.GetSteamLevelAsync
	USteamCoreWebAsyncActionGetSteamLevel* GetSteamLevelAsync(UObject* WorldContextObject, FString Key, FString SteamID) // [0x98cb70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetSteamLevel* (*FuncPtr)(UObject*, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetBadges
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetBadges : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetBadges.GetBadgesAsync
	USteamCoreWebAsyncActionGetBadges* GetBadgesAsync(UObject* WorldContextObject, FString Key, FString SteamID) // [0x98b740] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetBadges* (*FuncPtr)(UObject*, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetCommunityBadgeProgress : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress.GetCommunityBadgeProgressAsync
	USteamCoreWebAsyncActionGetCommunityBadgeProgress* GetCommunityBadgeProgressAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t BadgeId) // [0x98bb10] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetCommunityBadgeProgress* (*FuncPtr)(UObject*, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, BadgeId);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionIsPlayingSharedGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame.IsPlayingSharedGameAsync
	USteamCoreWebAsyncActionIsPlayingSharedGame* IsPlayingSharedGameAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppIdPlaying) // [0x98e810] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionIsPlayingSharedGame* (*FuncPtr)(UObject*, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppIdPlaying);
	}
};

/// Class /Script/SteamCoreWeb.WebPublishedFileService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebPublishedFileService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebPublishedFileService.UpdateTags
	// void UpdateTags(FDelegateProperty& Callback, FString Key, FString PublishedFileID, int32_t AppID, FString AddTags, FString RemoveTags); // [0x991cd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPublishedFileService.UpdateIncompatibleStatus
	// void UpdateIncompatibleStatus(FDelegateProperty& Callback, FString Key, FString PublishedFileID, int32_t AppID, bool bIncompatible); // [0x991a60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPublishedFileService.UpdateBanStatus
	// void UpdateBanStatus(FDelegateProperty& Callback, FString Key, FString PublishedFileID, int32_t AppID, bool bBanned, FString Reason); // [0x991760] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPublishedFileService.SetDeveloperMetadata
	// void SetDeveloperMetadata(FDelegateProperty& Callback, FString Key, FString PublishedFileID, int32_t AppID, FString MetaData); // [0x9914b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPublishedFileService.QueryFiles
	// void QueryFiles(FDelegateProperty& Callback, FString Key, int32_t QueryType, int32_t Page, FString Cursor, int32_t NumPerPage, int32_t CreatorAppID, int32_t AppID, FString RequiredTags, FString ExcludedTags, bool bMatchAllTags, FString RequiredFlags, FString OmittedFlags, FString SearchText, int32_t FileType, FString ChildPublishedFileId, int32_t Days, bool bIncludeRecentVotesOnly, int32_t CacheMaxAgeSeconds, int32_t Language, FString RequiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int32_t ReturnPlaytimeStats); // [0x98edd0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebSteamPublishedItemSearch
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebSteamPublishedItemSearch : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamPublishedItemSearch.ResultSetSummary
	// void ResultSetSummary(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, int32_t StartId, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x990f80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamPublishedItemSearch.RankedByVote
	// void RankedByVote(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x990830] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamPublishedItemSearch.RankedByTrend
	// void RankedByTrend(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, int32_t Days, TArray<FString> Tag, TArray<FString> UserTag); // [0x990280] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamPublishedItemSearch.RankedByPublicationOrder
	// void RankedByPublicationOrder(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x98fd20] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRankedByPublicationOrder : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder.RankedByPublicationOrderAsync
	// USteamCoreWebAsyncActionRankedByPublicationOrder* RankedByPublicationOrderAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x9982b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRankedByTrend : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend.RankedByTrendAsync
	// USteamCoreWebAsyncActionRankedByTrend* RankedByTrendAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, int32_t Days, TArray<FString> Tag, TArray<FString> UserTag); // [0x998800] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRankedByVote : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote.RankedByVoteAsync
	// USteamCoreWebAsyncActionRankedByVote* RankedByVoteAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x998d80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionResultSetSummary : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary.ResultSetSummaryAsync
	// USteamCoreWebAsyncActionResultSetSummary* ResultSetSummaryAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, int32_t StartId, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x999b40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebPublishedItemVoting
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebPublishedItemVoting : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebPublishedItemVoting.UserVoteSummary
	// void UserVoteSummary(FDelegateProperty& Callback, FString Key, FString SteamID, TArray<FString> PublishedFileIDs);       // [0x99c0d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPublishedItemVoting.ItemVoteSummary
	// void ItemVoteSummary(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, TArray<FString> PublishedFileIDs); // [0x997c30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionItemVoteSummary : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary.ItemVoteSummaryAsync
	// USteamCoreWebAsyncActionItemVoteSummary* ItemVoteSummaryAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, TArray<FString> PublishedFileIDs); // [0x997f80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionUserVoteSummary : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary.UserVoteSummaryAsync
	// USteamCoreWebAsyncActionUserVoteSummary* UserVoteSummaryAsync(UObject* WorldContextObject, FString Key, FString SteamID, TArray<FString> PublishedFileIDs); // [0x99c3d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebRemoteStorage
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebRemoteStorage : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebRemoteStorage.UnsubscribePublishedFile
	// void UnsubscribePublishedFile(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString PublishedFileIDs); // [0x99bba0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.SubscribePublishedFile
	// void SubscribePublishedFile(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString PublishedFileIDs); // [0x99b670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.SetUGCUsedByGC
	// void SetUGCUsedByGC(FDelegateProperty& Callback, FString Key, FString SteamID, FString UGCID, int32_t AppID, bool bUsed); // [0x99a050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.GetUGCFileDetails
	// void GetUGCFileDetails(FDelegateProperty& Callback, FString Key, FString SteamID, FString UGCID, int32_t AppID);         // [0x997700] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.GetPublishedFileDetails
	// void GetPublishedFileDetails(FDelegateProperty& Callback, FString PublishedFileIDs);                                     // [0x997470] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.GetCollectionDetails
	// void GetCollectionDetails(FDelegateProperty& Callback, TArray<FString> PublishedFileIDs);                                // [0x9968b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.EnumerateUserSubscribedFiles
	// void EnumerateUserSubscribedFiles(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, int32_t ListType); // [0x995200] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.EnumerateUserPublishedFiles
	// void EnumerateUserPublishedFiles(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);              // [0x994df0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionEnumerateUserPublishedFiles : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles.EnumerateUserPublishedFilesAsync
	USteamCoreWebAsyncActionEnumerateUserPublishedFiles* EnumerateUserPublishedFilesAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID) // [0x995010] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionEnumerateUserPublishedFiles* (*FuncPtr)(UObject*, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles.EnumerateUserSubscribedFilesAsync
	USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* EnumerateUserSubscribedFilesAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, int32_t ListType) // [0x995450] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* (*FuncPtr)(UObject*, FString, FString, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID, ListType);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetCollectionDetails : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails.GetCollectionDetailsAsync
	// USteamCoreWebAsyncActionGetCollectionDetails* GetCollectionDetailsAsync(UObject* WorldContextObject, TArray<FString> PublishedFileIDs); // [0x996a90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPublishedFileDetails : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails.GetPublishedFileDetailsAsync
	USteamCoreWebAsyncActionGetPublishedFileDetails* GetPublishedFileDetailsAsync(UObject* WorldContextObject, FString PublishedFileIDs) // [0x9975d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetPublishedFileDetails* (*FuncPtr)(UObject*, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, PublishedFileIDs);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetUGCFileDetails : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails.GetUGCFileDetailsAsync
	USteamCoreWebAsyncActionGetUGCFileDetails* GetUGCFileDetailsAsync(UObject* WorldContextObject, FString Key, FString SteamID, FString UGCID, int32_t AppID) // [0x9979b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetUGCFileDetails* (*FuncPtr)(UObject*, FString, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, UGCID, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionSetUGCUsedByGC : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC.SetUGCUsedByGCAsync
	USteamCoreWebAsyncActionSetUGCUsedByGC* SetUGCUsedByGCAsync(UObject* WorldContextObject, FString Key, FString SteamID, FString UGCID, int32_t AppID, bool bUsed) // [0x99a350] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionSetUGCUsedByGC* (*FuncPtr)(UObject*, FString, FString, FString, int32_t, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, UGCID, AppID, bUsed);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionSubscribePublishedFile : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile.SubscribePublishedFileAsync
	USteamCoreWebAsyncActionSubscribePublishedFile* SubscribePublishedFileAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString PublishedFileIDs) // [0x99b920] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionSubscribePublishedFile* (*FuncPtr)(UObject*, FString, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID, PublishedFileIDs);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionUnsubscribePublishedFile : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile.UnsubscribePublishedFileAsync
	USteamCoreWebAsyncActionUnsubscribePublishedFile* UnsubscribePublishedFileAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString PublishedFileIDs) // [0x99be50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionUnsubscribePublishedFile* (*FuncPtr)(UObject*, FString, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID, PublishedFileIDs);
	}
};

/// Class /Script/SteamCoreWeb.WebSteamCommunity
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebSteamCommunity : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamCommunity.ReportAbuse
	// void ReportAbuse(FDelegateProperty& Callback, FString Key, FString SteamIdActor, FString SteamIdTarget, int32_t AppID, int32_t AbuseType, int32_t ContentType, FString Description, FString Gid); // [0x9992d0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionReportAbuse : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse.ReportAbuseAsync
	USteamCoreWebAsyncActionReportAbuse* ReportAbuseAsync(UObject* WorldContextObject, FString Key, FString SteamIdActor, FString SteamIdTarget, int32_t AppID, int32_t AbuseType, int32_t ContentType, FString Description, FString Gid) // [0x999730] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionReportAbuse* (*FuncPtr)(UObject*, FString, FString, FString, int32_t, int32_t, int32_t, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamIdActor, SteamIdTarget, AppID, AbuseType, ContentType, Description, Gid);
	}
};

/// Class /Script/SteamCoreWeb.WebSteamEconomy
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebSteamEconomy : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamEconomy.StartTrade
	// void StartTrade(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamIDd, FString SteamId2);            // [0x99b140] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.StartAssetTransaction
	// void StartAssetTransaction(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString AssetId, int32_t AssetQuantity, FString Currency, FString Language, FString Ipaddress, FString Referer, bool bClientAuth); // [0x99a620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.GetMarketPrices
	// void GetMarketPrices(FDelegateProperty& Callback, FString Key, int32_t AppID);                                           // [0x997180] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.GetExportedAssetsForUser
	// void GetExportedAssetsForUser(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString ContextId); // [0x996c50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.GetAssetPrices
	// void GetAssetPrices(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Currency, FString Language);        // [0x996380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.GetAssetClassInfo
	// void GetAssetClassInfo(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Language, int32_t ClassCount, FString ClassId, FString InstanceID); // [0x995cc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.FinalizeAssetTransaction
	// void FinalizeAssetTransaction(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString TxnId, FString Language); // [0x995670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.CanTrade
	// void CanTrade(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString TargetId);               // [0x9948c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCanTrade
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionCanTrade : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCanTrade.CanTradeAsync
	USteamCoreWebAsyncActionCanTrade* CanTradeAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString TargetId) // [0x994b70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionCanTrade* (*FuncPtr)(UObject*, FString, int32_t, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, SteamID, TargetId);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionFinalizeAssetTransaction : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction.FinalizeAssetTransactionAsync
	USteamCoreWebAsyncActionFinalizeAssetTransaction* FinalizeAssetTransactionAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString TxnId, FString Language) // [0x9959b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionFinalizeAssetTransaction* (*FuncPtr)(UObject*, FString, int32_t, FString, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, SteamID, TxnId, Language);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetAssetClassInfo : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo.GetAssetClassInfoAsync
	USteamCoreWebAsyncActionGetAssetClassInfo* GetAssetClassInfoAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString Language, int32_t ClassCount, FString ClassId, FString InstanceID) // [0x996040] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetAssetClassInfo* (*FuncPtr)(UObject*, FString, int32_t, FString, int32_t, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, Language, ClassCount, ClassId, InstanceID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetAssetPrices : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices.GetAssetPricesAsync
	USteamCoreWebAsyncActionGetAssetPrices* GetAssetPricesAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString Currency, FString Language) // [0x996630] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetAssetPrices* (*FuncPtr)(UObject*, FString, int32_t, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, Currency, Language);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetExportedAssetsForUser : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser.GetExportedAssetsForUserAsync
	USteamCoreWebAsyncActionGetExportedAssetsForUser* GetExportedAssetsForUserAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString ContextId) // [0x996f00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetExportedAssetsForUser* (*FuncPtr)(UObject*, FString, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID, ContextId);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetMarketPrices : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices.GetMarketPricesAsync
	USteamCoreWebAsyncActionGetMarketPrices* GetMarketPricesAsync(UObject* WorldContextObject, FString Key, int32_t AppID) // [0x997310] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetMarketPrices* (*FuncPtr)(UObject*, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionStartAssetTransaction : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction.StartAssetTransactionAsync
	USteamCoreWebAsyncActionStartAssetTransaction* StartAssetTransactionAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString AssetId, int32_t AssetQuantity, FString Currency, FString Language, FString Ipaddress, FString Referer, bool bClientAuth) // [0x99abc0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionStartAssetTransaction* (*FuncPtr)(UObject*, FString, int32_t, FString, FString, int32_t, FString, FString, FString, FString, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, SteamID, AssetId, AssetQuantity, Currency, Language, Ipaddress, Referer, bClientAuth);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartTrade
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionStartTrade : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartTrade.StartTradeAsync
	USteamCoreWebAsyncActionStartTrade* StartTradeAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamId1, FString SteamId2) // [0x99b3f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionStartTrade* (*FuncPtr)(UObject*, FString, int32_t, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, SteamId1, SteamId2);
	}
};

/// Class /Script/SteamCoreWeb.WebSteamGameServerStats
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebSteamGameServerStats : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamGameServerStats.GetGameServerPlayerStatsForGame
	// void GetGameServerPlayerStatsForGame(FDelegateProperty& Callback, FString Key, FString GameID, int32_t AppID, FString RangeStart, FString RangeEnd, int32_t MaxResults); // [0x9a04f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebSteamNews
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebSteamNews : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamNews.GetNewsForAppAuthed
	// void GetNewsForAppAuthed(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t MaxLength, TArray<FString> Feeds, int32_t EndDate, int32_t Count); // [0x9a15c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamNews.GetNewsForApp
	// void GetNewsForApp(FDelegateProperty& Callback, int32_t AppID, int32_t MaxLength, TArray<FString> Feeds, int32_t EndDate, int32_t Count); // [0x9a1010] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetNewsForApp : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp.GetNewsForAppAsync
	// USteamCoreWebAsyncActionGetNewsForApp* GetNewsForAppAsync(UObject* WorldContextObject, int32_t AppID, int32_t MaxLength, TArray<FString> Feeds, int32_t EndDate, int32_t Count); // [0x9a1300] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetNewsForAppAuthed : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed.GetNewsForAppAuthedAsync
	// USteamCoreWebAsyncActionGetNewsForAppAuthed* GetNewsForAppAuthedAsync(UObject* WorldContextObject, FString Key, int32_t AppID, int32_t MaxLength, TArray<FString> Feeds, int32_t EndDate, int32_t Count); // [0x9a1940] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebSteamUser
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebSteamUser : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamUser.ResolveVanityURL
	// void ResolveVanityURL(FDelegateProperty& Callback, FString Key, FString VanityURL, EVanityUrlType URLType);              // [0x9a48e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GrantPackage
	// void GrantPackage(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t PackageId, FString Ipaddress, FString ThirdPartyKey, int32_t ThirdPartyAppId); // [0x9a4230] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetUserGroupList
	// void GetUserGroupList(FDelegateProperty& Callback, FString Key, FString SteamID);                                        // [0x9a3a90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetPublisherAppOwnershipChanges
	// void GetPublisherAppOwnershipChanges(FDelegateProperty& Callback, FString Key, FString PackageRowVersion, FString CDKeyRowVersion); // [0x9a30b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetPublisherAppOwnership
	// void GetPublisherAppOwnership(FDelegateProperty& Callback, FString Key, FString SteamID);                                // [0x9a2d20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetPlayerSummaries
	// void GetPlayerSummaries(FDelegateProperty& Callback, FString Key, TArray<FString> SteamIDs);                             // [0x9a2860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetPlayerBans
	// void GetPlayerBans(FDelegateProperty& Callback, FString Key, TArray<FString> SteamIDs);                                  // [0x9a23a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetFriendList
	// void GetFriendList(FDelegateProperty& Callback, FString Key, FString SteamID, FString Relationship);                     // [0x9a0040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetAppPriceInfo
	// void GetAppPriceInfo(FDelegateProperty& Callback, FString Key, FString SteamID, TArray<int32_t> AppIDs);                 // [0x99fb90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.CheckAppOwnership
	// void CheckAppOwnership(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);                        // [0x99f780] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionCheckAppOwnership : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership.CheckAppOwnershipAsync
	USteamCoreWebAsyncActionCheckAppOwnership* CheckAppOwnershipAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID) // [0x99f9a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionCheckAppOwnership* (*FuncPtr)(UObject*, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetAppPriceInfo : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo.GetAppPriceInfoAsync
	USteamCoreWebAsyncActionGetAppPriceInfo* GetAppPriceInfoAsync(UObject* WorldContextObject, FString Key, FString SteamID, TArray<int32_t> AppIDs) // [0x99fe00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetAppPriceInfo* (*FuncPtr)(UObject*, FString, FString, TArray<int32_t>);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppIDs);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetFriendList : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList.GetFriendListAsync
	USteamCoreWebAsyncActionGetFriendList* GetFriendListAsync(UObject* WorldContextObject, FString Key, FString SteamID, FString Relationship) // [0x9a02b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetFriendList* (*FuncPtr)(UObject*, FString, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, Relationship);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPlayerBans : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans.GetPlayerBansAsync
	// USteamCoreWebAsyncActionGetPlayerBans* GetPlayerBansAsync(UObject* WorldContextObject, FString Key, TArray<FString> SteamIDs); // [0x9a2610] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPlayerSummaries : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries.GetPlayerSummariesAsync
	// USteamCoreWebAsyncActionGetPlayerSummaries* GetPlayerSummariesAsync(UObject* WorldContextObject, FString Key, TArray<FString> SteamIDs); // [0x9a2ad0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPublisherAppOwnership : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership.GetPublisherAppOwnershipAsync
	USteamCoreWebAsyncActionGetPublisherAppOwnership* GetPublisherAppOwnershipAsync(UObject* WorldContextObject, FString Key, FString SteamID) // [0x9a2f00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetPublisherAppOwnership* (*FuncPtr)(UObject*, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.GetPublisherAppOwnershipChangesAsync
	USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* GetPublisherAppOwnershipChangesAsync(UObject* WorldContextObject, FString Key, FString PackageRowVersion, FString CDKeyRowVersion) // [0x9a3320] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* (*FuncPtr)(UObject*, FString, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, PackageRowVersion, CDKeyRowVersion);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetUserGroupList : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList.GetUserGroupListAsync
	USteamCoreWebAsyncActionGetUserGroupList* GetUserGroupListAsync(UObject* WorldContextObject, FString Key, FString SteamID) // [0x9a3c70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetUserGroupList* (*FuncPtr)(UObject*, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGrantPackage : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage.GrantPackageAsync
	USteamCoreWebAsyncActionGrantPackage* GrantPackageAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t PackageId, FString Ipaddress, FString ThirdPartyKey, int32_t ThirdPartyAppId) // [0x9a45a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGrantPackage* (*FuncPtr)(UObject*, FString, FString, int32_t, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, PackageId, Ipaddress, ThirdPartyKey, ThirdPartyAppId);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionResolveVanityURL : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL.ResolveVanityURLAsync
	USteamCoreWebAsyncActionResolveVanityURL* ResolveVanityURLAsync(UObject* WorldContextObject, FString Key, FString VanityURL, EVanityUrlType URLType) // [0x9a4b00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionResolveVanityURL* (*FuncPtr)(UObject*, FString, FString, EVanityUrlType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, VanityURL, URLType);
	}
};

/// Class /Script/SteamCoreWeb.WebUserAuth
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebUserAuth : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebUserAuth.AuthenticateUserTicket
	// void AuthenticateUserTicket(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Ticket);                    // [0x99f370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserAuth.AuthenticateUser
	// void AuthenticateUser(FDelegateProperty& Callback, FString SteamID, TArray<char> SessionKey, TArray<char> EncryptedLoginKey); // [0x99eed0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionAuthenticateUser : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser.AuthenticateUserAsync
	USteamCoreWebAsyncActionAuthenticateUser* AuthenticateUserAsync(UObject* WorldContextObject, FString SteamID, TArray<char> SessionKey, TArray<char> EncryptedLoginKey) // [0x99f140] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionAuthenticateUser* (*FuncPtr)(UObject*, FString, TArray<char>, TArray<char>);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, SteamID, SessionKey, EncryptedLoginKey);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionAuthenticateUserTicket : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket.AuthenticateUserTicketAsync
	USteamCoreWebAsyncActionAuthenticateUserTicket* AuthenticateUserTicketAsync(UObject* WorldContextObject, FString Key, int32_t AppID, FString Ticket) // [0x99f590] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionAuthenticateUserTicket* (*FuncPtr)(UObject*, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, AppID, Ticket);
	}
};

/// Class /Script/SteamCoreWeb.WebUserStats
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebUserStats : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebUserStats.SetUserStatsForGame
	// void SetUserStatsForGame(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, TArray<FString> Names, TArray<int32_t> Values); // [0x9a4cf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetUserStatsForGame
	// void GetUserStatsForGame(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);                      // [0x9a3e20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetSchemaForGame
	// void GetSchemaForGame(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString Language);       // [0x9a3560] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetPlayerAchievements
	// void GetPlayerAchievements(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString Language);  // [0x9a1e70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetNumberOfCurrentPlayers
	// void GetNumberOfCurrentPlayers(FDelegateProperty& Callback, int32_t AppID);                                              // [0x9a1ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetGlobalStatsForGame
	// void GetGlobalStatsForGame(FDelegateProperty& Callback, int32_t AppID, TArray<FString> Names, int32_t StartDate, int32_t EndDate); // [0x9a0af0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetGlobalAchievementPercentagesForApp
	// void GetGlobalAchievementPercentagesForApp(FDelegateProperty& Callback, FString GameID);                                 // [0x9a0860] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.GetGlobalAchievementPercentagesForAppAsync
	USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForAppAsync(UObject* WorldContextObject, FString GameID) // [0x9a09c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* (*FuncPtr)(UObject*, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, GameID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetGlobalStatsForGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame.GetGlobalStatsForGameAsync
	// USteamCoreWebAsyncActionGetGlobalStatsForGame* GetGlobalStatsForGameAsync(UObject* WorldContextObject, int32_t AppID, TArray<FString> Names, int32_t StartDate, int32_t EndDate); // [0x9a0d90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync
	USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(UObject* WorldContextObject, int32_t AppID) // [0x9a1da0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* (*FuncPtr)(UObject*, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPlayerAchievements : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements.GetPlayerAchievementsAsync
	USteamCoreWebAsyncActionGetPlayerAchievements* GetPlayerAchievementsAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString Language) // [0x9a2120] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetPlayerAchievements* (*FuncPtr)(UObject*, FString, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID, Language);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetSchemaForGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame.GetSchemaForGameAsync
	USteamCoreWebAsyncActionGetSchemaForGame* GetSchemaForGameAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString Language) // [0x9a3810] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetSchemaForGame* (*FuncPtr)(UObject*, FString, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID, Language);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetUserStatsForGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame.GetUserStatsForGameAsync
	USteamCoreWebAsyncActionGetUserStatsForGame* GetUserStatsForGameAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID) // [0x9a4040] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreWebAsyncActionGetUserStatsForGame* (*FuncPtr)(UObject*, FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Key, SteamID, AppID);
	}
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionSetUserStatsForGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame.SetUserStatsForGameAsync
	// USteamCoreWebAsyncActionSetUserStatsForGame* SetUserStatsForGameAsync(UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, TArray<FString> Names, TArray<int32_t> Values); // [0x9a50c0] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(USteamCoreWeb) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USteamCoreWebSubsystem) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncAction) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(USteamCoreWebSettings) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(USteamWebUtilities) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UWebApps) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreAppsAsyncActionGetAppBetas) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionGetAppBuilds) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionGetAppDepotVersions) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionGetAppList) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionGetCheatingReports) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionGetPlayersBanned) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionGetServerList) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionGetServersAtAddress) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionSetAppBuildLive) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionUpToDateCheck) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebBroadcastService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionPostGameDataFrame) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebCheatReporting) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionReportPlayerCheating) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionRequestPlayerGameBan) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionRemovePlayerGameBan) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetCheatingReports) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionReportCheatData) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionRequestVacStatusForUser) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionStartSecureMultiplayerSession) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionEndSecureMultiplayerSession) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebEconMarketService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionGetMarketEligibility) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionCancelAppListingsForUser) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetAssetID) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPopular) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebEconService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionGetTradeHistory) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionFlushInventoryCache) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionFlushAssetAppearanceCache) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionFlushContextCache) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetTradeOffers) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetTradeOffer) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetTradeOffersSummary) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionDeclineTradeOffer) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionCancelTradeOffer) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebGameInventory) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionGetHistoryCommandDetails) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetUserHistory) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionHistoryExecuteCommand) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionSupportGetAssetHistory) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebGameNotificationsService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionCreateSession) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionUpdateSession) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionEnumerateSessionsForApp) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetSessionDetailsForApp) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionRequestNotifications) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionDeleteSession) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionDeleteSessionBatch) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebGameServersService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UWebInventoryService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionAddItem) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionAddPromoItem) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionConsumeItem) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionExchangeItem) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetInventory) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetItemDefs) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPriceSheet) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionConsolidate) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetQuantity) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionModifyItems) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebLeaderboards) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionDeleteLeaderboard) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionFindOrCreateLeaderboard) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetLeaderboardEntries) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetLeaderboardsForGame) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionResetLeaderboard) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionSetLeaderboardScore) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebLobbyMatchmakingService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UWebMicroTxn) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionAdjustAgreement) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionCancelAgreement) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionFinalizeTxn) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetReport) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetUserAgreementInfo) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetUserInfo) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionInitTxn) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionProcessAgreement) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionQueryTxn) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionRefundTxn) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebPlayerService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionGetRecentlyPlayedGames) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetOwnedGames) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetSteamLevel) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetBadges) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetCommunityBadgeProgress) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionIsPlayingSharedGame) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebPublishedFileService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UWebSteamPublishedItemSearch) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionRankedByPublicationOrder) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionRankedByTrend) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionRankedByVote) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionResultSetSummary) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebPublishedItemVoting) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionItemVoteSummary) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionUserVoteSummary) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebRemoteStorage) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionEnumerateUserPublishedFiles) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionEnumerateUserSubscribedFiles) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetCollectionDetails) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPublishedFileDetails) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetUGCFileDetails) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionSetUGCUsedByGC) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionSubscribePublishedFile) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionUnsubscribePublishedFile) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebSteamCommunity) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionReportAbuse) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebSteamEconomy) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionCanTrade) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionFinalizeAssetTransaction) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetAssetClassInfo) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetAssetPrices) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetExportedAssetsForUser) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetMarketPrices) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionStartAssetTransaction) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionStartTrade) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebSteamGameServerStats) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UWebSteamNews) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionGetNewsForApp) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetNewsForAppAuthed) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebSteamUser) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionCheckAppOwnership) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetAppPriceInfo) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetFriendList) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPlayerBans) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPlayerSummaries) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPublisherAppOwnership) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetUserGroupList) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGrantPackage) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionResolveVanityURL) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebUserAuth) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionAuthenticateUser) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionAuthenticateUserTicket) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebUserStats) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetGlobalStatsForGame) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetNumberOfCurrentPlayers) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPlayerAchievements) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetSchemaForGame) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetUserStatsForGame) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionSetUserStatsForGame) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(FSteamCoreJson) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(USteamCoreWebSettings, Key) == 0x0048);
static_assert(offsetof(USteamCoreWebSettings, DevSteamID) == 0x0060);
static_assert(offsetof(FSteamCoreJson, Key) == 0x0000);
static_assert(offsetof(FSteamCoreJson, String) == 0x0010);
static_assert(offsetof(FSteamCoreJson, Type) == 0x0025);
