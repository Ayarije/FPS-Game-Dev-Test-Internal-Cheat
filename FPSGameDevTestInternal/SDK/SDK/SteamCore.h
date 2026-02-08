
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
#include "OnlineSubsystemUtils.h"

#pragma pack(push, 0x1)

class ASteamCoreGameMode;
class UAppList;
class UApps;
class UFriends;
class UGameServerStats;
class UInput;
class UInventory;
class UMatchmaking;
class UMatchmakingServers;
class UMusic;
class UNetworking;
class UNetworkingUtils;
class UParentalSettings;
class URemotePlay;
class URemoteStorage;
class UScreenshots;
class UServerFilter;
class USteamCore;
class USteamCoreAppsAsyncActionGetFileDetails;
class USteamCoreAsyncAction;
class USteamCoreCreateSession;
class USteamCoreDestroySession;
class USteamCoreFindSession;
class USteamCoreFriendsAsyncActionDownloadClanActivityCounts;
class USteamCoreFriendsAsyncActionEnumerateFollowingList;
class USteamCoreFriendsAsyncActionGetFollowerCount;
class USteamCoreFriendsAsyncActionIsFollowing;
class USteamCoreFriendsAsyncActionJoinClanChatRoom;
class USteamCoreFriendsAsyncActionRequestClanOfficerList;
class USteamCoreFriendsAsyncActionRequestUserInformation;
class USteamCoreFriendsAsyncActionSetPersonaName;
class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs;
class USteamCoreInventoryAsyncActionRequestPricesResult;
class USteamCoreInventoryAsyncActionStartPurchaseResult;
class USteamCoreMatchmakingAsyncActionCreateLobby;
class USteamCoreMatchmakingAsyncActionJoinLobby;
class USteamCoreMatchmakingAsyncActionRequestLobbyList;
class USteamCoreMatchmakingServersAsyncActionPingServer;
class USteamCoreMatchmakingServersAsyncActionRequestServerList;
class USteamCoreMatchmakingServersAsyncActionServerRules;
class USteamCoreSettings;
class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots;
class USteamCoreSteamPartiesAsyncActionCreateBeacon;
class USteamCoreSteamPartiesAsyncActionJoinParty;
class USteamCoreSubsystem;
class USteamCoreUGCAsyncActionAddAppDependency;
class USteamCoreUGCAsyncActionAddItemToFavorites;
class USteamCoreUGCAsyncActionAddUGCDependency;
class USteamCoreUGCAsyncActionCreateItem;
class USteamCoreUGCAsyncActionDeleteItem;
class USteamCoreUGCAsyncActionDownloadItem;
class USteamCoreUGCAsyncActionGetAppDependencies;
class USteamCoreUGCAsyncActionGetUserItemVote;
class USteamCoreUGCAsyncActionRemoveAppDependency;
class USteamCoreUGCAsyncActionRemoveItemFromFavorites;
class USteamCoreUGCAsyncActionRemoveUGCDependency;
class USteamCoreUGCAsyncActionSendQueryUGCRequest;
class USteamCoreUGCAsyncActionSetUserItemVote;
class USteamCoreUGCAsyncActionStartPlaytimeTracking;
class USteamCoreUGCAsyncActionStopPlaytimeTracking;
class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems;
class USteamCoreUGCAsyncActionSubmitItemUpdate;
class USteamCoreUGCAsyncActionSubscribeItem;
class USteamCoreUGCAsyncActionUnsubscribeItem;
class USteamCoreUpdateSession;
class USteamCoreUserAsyncActionRequestEncryptedAppTicket;
class USteamCoreUserAsyncActionRequestStoreAuthURL;
class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC;
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries;
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers;
class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats;
class USteamCoreUserStatsAsyncActionFindLeaderboard;
class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard;
class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers;
class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages;
class USteamCoreUserStatsAsyncActionRequestUserStats;
class USteamCoreUserStatsAsyncActionUploadLeaderboardScore;
class USteamCoreVoice;
class USteamGameSearch;
class USteamGameServer;
class USteamParties;
class USteamUtilities;
class UUGC;
class UUser;
class UUserStats;
class UUtils;
class UVideo;

/// Enum /Script/SteamCore.ESteamResult
/// Size: 0x01 (1 bytes)
enum class ESteamResult : uint8_t
{
	ESteamResult__None                                                               = 0,
	ESteamResult__OK                                                                 = 1,
	ESteamResult__Fail                                                               = 2,
	ESteamResult__NoConnection                                                       = 3,
	ESteamResult__sultNoConnectionRetry                                              = 4,
	ESteamResult__InvalidPassword                                                    = 5,
	ESteamResult__LoggedInElsewhere                                                  = 6,
	ESteamResult__InvalidProtocolVer                                                 = 7,
	ESteamResult__InvalidParam                                                       = 8,
	ESteamResult__FileNotFound                                                       = 9,
	ESteamResult__Busy                                                               = 10,
	ESteamResult__InvalidState                                                       = 11,
	ESteamResult__InvalidName                                                        = 12,
	ESteamResult__InvalidEmail                                                       = 13,
	ESteamResult__DuplicateName                                                      = 14,
	ESteamResult__AccessDenied                                                       = 15,
	ESteamResult__Timeout                                                            = 16,
	ESteamResult__Banned                                                             = 17,
	ESteamResult__AccountNotFound                                                    = 18,
	ESteamResult__InvalidSteamID                                                     = 19,
	ESteamResult__ServiceUnavailable                                                 = 20,
	ESteamResult__NotLoggedOn                                                        = 21,
	ESteamResult__Pending                                                            = 22,
	ESteamResult__EncryptionFailure                                                  = 23,
	ESteamResult__InsufficientPrivilege                                              = 24,
	ESteamResult__LimitExceeded                                                      = 25,
	ESteamResult__Revoked                                                            = 26,
	ESteamResult__Expired                                                            = 27,
	ESteamResult__AlreadyRedeemed                                                    = 28,
	ESteamResult__DuplicateRequest                                                   = 29,
	ESteamResult__AlreadyOwned                                                       = 30,
	ESteamResult__IPNotFound                                                         = 31,
	ESteamResult__PersistFailed                                                      = 32,
	ESteamResult__LockingFailed                                                      = 33,
	ESteamResult__LogonSessionReplaced                                               = 34,
	ESteamResult__ConnectFailed                                                      = 35,
	ESteamResult__HandshakeFailed                                                    = 36,
	ESteamResult__IOFailure                                                          = 37,
	ESteamResult__RemoteDisconnect                                                   = 38,
	ESteamResult__ShoppingCartNotFound                                               = 39,
	ESteamResult__Blocked                                                            = 40,
	ESteamResult__Ignored                                                            = 41,
	ESteamResult__NoMatch                                                            = 42,
	ESteamResult__AccountDisabled                                                    = 43,
	ESteamResult__ServiceReadOnly                                                    = 44,
	ESteamResult__AccountNotFeatured                                                 = 45,
	ESteamResult__AdministratorOK                                                    = 46,
	ESteamResult__ContentVersion                                                     = 47,
	ESteamResult__TryAnotherCM                                                       = 48,
	ESteamResult__PasswordRequiredToKickSession                                      = 49,
	ESteamResult__AlreadyLoggedInElsewhere                                           = 50,
	ESteamResult__Suspended                                                          = 51,
	ESteamResult__Cancelled                                                          = 52,
	ESteamResult__DataCorruption                                                     = 53,
	ESteamResult__DiskFull                                                           = 54,
	ESteamResult__RemoteCallFailed                                                   = 55,
	ESteamResult__PasswordUnset                                                      = 56,
	ESteamResult__ExternalAccountUnlinked                                            = 57,
	ESteamResult__PSNTicketInvalid                                                   = 58,
	ESteamResult__ExternalAccountAlreadyLinked                                       = 59,
	ESteamResult__RemoteFileConflict                                                 = 60,
	ESteamResult__IllegalPassword                                                    = 61,
	ESteamResult__SameAsPreviousValue                                                = 62,
	ESteamResult__AccountLogonDenied                                                 = 63,
	ESteamResult__CannotUseOldPassword                                               = 64,
	ESteamResult__InvalidLoginAuthCode                                               = 65,
	ESteamResult__AccountLogonDeniedNoMail                                           = 66,
	ESteamResult__HardwareNotCapableOfIPT                                            = 67,
	ESteamResult__IPTInitError                                                       = 68,
	ESteamResult__ParentalControlRestricted                                          = 69,
	ESteamResult__FacebookQueryError                                                 = 70,
	ESteamResult__ExpiredLoginAuthCode                                               = 71,
	ESteamResult__IPLoginRestrictionFailed                                           = 72,
	ESteamResult__AccountLockedDown                                                  = 73,
	ESteamResult__AccountLogonDeniedVerifiedEmailRequired                            = 74,
	ESteamResult__NoMatchingURL                                                      = 75,
	ESteamResult__BadResponse                                                        = 76,
	ESteamResult__RequirePasswordReEntry                                             = 77,
	ESteamResult__ValueOutOfRange                                                    = 78,
	ESteamResult__UnexpectedError                                                    = 79,
	ESteamResult__Disabled                                                           = 80,
	ESteamResult__InvalidCEGSubmission                                               = 81,
	ESteamResult__RestrictedDevice                                                   = 82,
	ESteamResult__RegionLocked                                                       = 83,
	ESteamResult__RateLimitExceeded                                                  = 84,
	ESteamResult__AccountLoginDeniedNeedTwoFactor                                    = 85,
	ESteamResult__ItemDeleted                                                        = 86,
	ESteamResult__AccountLoginDeniedThrottle                                         = 87,
	ESteamResult__TwoFactorCodeMismatch                                              = 88,
	ESteamResult__TwoFactorActivationCodeMismatch                                    = 89,
	ESteamResult__AccountAssociatedToMultiplePartners                                = 90,
	ESteamResult__NotModified                                                        = 91,
	ESteamResult__NoMobileDevice                                                     = 92,
	ESteamResult__TimeNotSynced                                                      = 93,
	ESteamResult__SmsCodeFailed                                                      = 94,
	ESteamResult__AccountLimitExceeded                                               = 95,
	ESteamResult__AccountActivityLimitExceeded                                       = 96,
	ESteamResult__PhoneActivityLimitExceeded                                         = 97,
	ESteamResult__RefundToWallet                                                     = 98,
	ESteamResult__EmailSendFailure                                                   = 99,
	ESteamResult__NotSettled                                                         = 100,
	ESteamResult__NeedCaptcha                                                        = 101,
	ESteamResult__GSLTDenied                                                         = 102,
	ESteamResult__GSOwnerDenied                                                      = 103,
	ESteamResult__InvalidItemType                                                    = 104,
	ESteamResult__IPBanned                                                           = 105,
	ESteamResult__GSLTExpired                                                        = 106,
	ESteamResult__InsufficientFunds                                                  = 107,
	ESteamResult__TooManyPending                                                     = 108,
	ESteamResult__NoSiteLicensesFound                                                = 109,
	ESteamResult__WGNetworkSendExceeded                                              = 110,
	ESteamResult__AccountNotFriends                                                  = 111,
	ESteamResult__LimitedUserAccount                                                 = 112,
	ESteamResult__CantRemoveItem                                                     = 113
};

/// Enum /Script/SteamCore.ESteamMessageType
/// Size: 0x01 (1 bytes)
enum class ESteamMessageType : uint8_t
{
	ESteamMessageType__ENotification                                                 = 0,
	ESteamMessageType__EMessage                                                      = 1,
	ESteamMessageType__EWarning                                                      = 2
};

/// Enum /Script/SteamCore.ESteamPersonaChange
/// Size: 0x01 (1 bytes)
enum class ESteamPersonaChange : uint8_t
{
	ESteamPersonaChange__Name                                                        = 0,
	ESteamPersonaChange__Status                                                      = 1,
	ESteamPersonaChange__ComeOnline                                                  = 2,
	ESteamPersonaChange__GoneOffline                                                 = 3,
	ESteamPersonaChange__GamePlayed                                                  = 4,
	ESteamPersonaChange__GameServer                                                  = 5,
	ESteamPersonaChange__Avatar                                                      = 6,
	ESteamPersonaChange__JoinedSource                                                = 7,
	ESteamPersonaChange__LeftSource                                                  = 8,
	ESteamPersonaChange__RelationshipChanged                                         = 9,
	ESteamPersonaChange__NameFirstSet                                                = 10,
	ESteamPersonaChange__FacebookInfo                                                = 11,
	ESteamPersonaChange__Nickname                                                    = 12,
	ESteamPersonaChange__SteamLevel                                                  = 13
};

/// Enum /Script/SteamCore.ESteamChatRoomEnterResponse
/// Size: 0x01 (1 bytes)
enum class ESteamChatRoomEnterResponse : uint8_t
{
	ESteamChatRoomEnterResponse__None                                                = 0,
	ESteamChatRoomEnterResponse__Success                                             = 1,
	ESteamChatRoomEnterResponse__DoesntExist                                         = 2,
	ESteamChatRoomEnterResponse__NotAllowed                                          = 3,
	ESteamChatRoomEnterResponse__Full                                                = 4,
	ESteamChatRoomEnterResponse__Error                                               = 5,
	ESteamChatRoomEnterResponse__Banned                                              = 6,
	ESteamChatRoomEnterResponse__Limited                                             = 7,
	ESteamChatRoomEnterResponse__ClanDisabled                                        = 8,
	ESteamChatRoomEnterResponse__CommunityBan                                        = 9,
	ESteamChatRoomEnterResponse__MemberBlockedYou                                    = 10,
	ESteamChatRoomEnterResponse__YouBlockedMember                                    = 11,
	ESteamChatRoomEnterResponse__RatelimitExceeded                                   = 15
};

/// Enum /Script/SteamCore.ESteamPlayerAcceptState
/// Size: 0x01 (1 bytes)
enum class ESteamPlayerAcceptState : uint8_t
{
	ESteamPlayerAcceptState__Unknown                                                 = 0,
	ESteamPlayerAcceptState__PlayerAccepted                                          = 1,
	ESteamPlayerAcceptState__PlayerDeclined                                          = 2
};

/// Enum /Script/SteamCore.ESteamAuthSessionResponse
/// Size: 0x01 (1 bytes)
enum class ESteamAuthSessionResponse : uint8_t
{
	ESteamAuthSessionResponse__OK                                                    = 0,
	ESteamAuthSessionResponse__UserNotConnectedToSteam                               = 1,
	ESteamAuthSessionResponse__NoLicenseOrExpired                                    = 2,
	ESteamAuthSessionResponse__VACBanned                                             = 3,
	ESteamAuthSessionResponse__LoggedInElseWhere                                     = 4,
	ESteamAuthSessionResponse__VACCheckTimedOut                                      = 5,
	ESteamAuthSessionResponse__AuthTicketCanceled                                    = 6,
	ESteamAuthSessionResponse__AuthTicketInvalidAlreadyUsed                          = 7,
	ESteamAuthSessionResponse__AuthTicketInvalid                                     = 8,
	ESteamAuthSessionResponse__PublisherIssuedBan                                    = 9
};

/// Enum /Script/SteamCore.ESteamDenyReason
/// Size: 0x01 (1 bytes)
enum class ESteamDenyReason : uint8_t
{
	ESteamDenyReason__Invalid                                                        = 0,
	ESteamDenyReason__InvalidVersion                                                 = 1,
	ESteamDenyReason__Generic                                                        = 2,
	ESteamDenyReason__NotLoggedOn                                                    = 3,
	ESteamDenyReason__NoLicense                                                      = 4,
	ESteamDenyReason__Cheater                                                        = 5,
	ESteamDenyReason__LoggedInElseWhere                                              = 6,
	ESteamDenyReason__UnknownText                                                    = 7,
	ESteamDenyReason__IncompatibleAnticheat                                          = 8,
	ESteamDenyReason__MemoryCorruption                                               = 9,
	ESteamDenyReason__IncompatibleSoftware                                           = 10,
	ESteamDenyReason__SteamConnectionLost                                            = 11,
	ESteamDenyReason__SteamConnectionError                                           = 12,
	ESteamDenyReason__SteamResponseTimedOut                                          = 13,
	ESteamDenyReason__SteamValidationStalled                                         = 14,
	ESteamDenyReason__SteamOwnerLeftGuestUser                                        = 15
};

/// Enum /Script/SteamCore.ESteamFavoriteFlags
/// Size: 0x01 (1 bytes)
enum class ESteamFavoriteFlags : uint8_t
{
	ESteamFavoriteFlags__None                                                        = 0,
	ESteamFavoriteFlags__Favorite                                                    = 1,
	ESteamFavoriteFlags__History                                                     = 2
};

/// Enum /Script/SteamCore.ESteamChatEntryType
/// Size: 0x01 (1 bytes)
enum class ESteamChatEntryType : uint8_t
{
	ESteamChatEntryType__Invalid                                                     = 0,
	ESteamChatEntryType__ChatMsg                                                     = 1,
	ESteamChatEntryType__Typing                                                      = 2,
	ESteamChatEntryType__InviteGame                                                  = 3,
	ESteamChatEntryType__Emote                                                       = 4,
	ESteamChatEntryType__LeftConversation                                            = 6,
	ESteamChatEntryType__Entered                                                     = 7,
	ESteamChatEntryType__WasKicked                                                   = 8,
	ESteamChatEntryType__WasBanned                                                   = 9,
	ESteamChatEntryType__Disconnected                                                = 10,
	ESteamChatEntryType__HistoricalChat                                              = 11,
	ESteamChatEntryType__LinkBlocked                                                 = 14
};

/// Enum /Script/SteamCore.ESteamChatMemberStateChange
/// Size: 0x01 (1 bytes)
enum class ESteamChatMemberStateChange : uint8_t
{
	ESteamChatMemberStateChange__None                                                = 0,
	ESteamChatMemberStateChange__Entered                                             = 1,
	ESteamChatMemberStateChange__Left                                                = 2,
	ESteamChatMemberStateChange__Disconnected                                        = 4,
	ESteamChatMemberStateChange__Kicked                                              = 8,
	ESteamChatMemberStateChange__Banned                                              = 16
};

/// Enum /Script/SteamCore.ESteamP2PSessionError
/// Size: 0x01 (1 bytes)
enum class ESteamP2PSessionError : uint8_t
{
	ESteamP2PSessionError__None                                                      = 0,
	ESteamP2PSessionError__NotRunningApp                                             = 1,
	ESteamP2PSessionError__NoRightsToApp                                             = 2,
	ESteamP2PSessionError__DestinationNotLoggedIn                                    = 3,
	ESteamP2PSessionError__Timeout                                                   = 4,
	ESteamP2PSessionError__Max                                                       = 5
};

/// Enum /Script/SteamCore.ESteamFailureType
/// Size: 0x01 (1 bytes)
enum class ESteamFailureType : uint8_t
{
	ESteamFailureType__FlushedCallbackQueue                                          = 0,
	ESteamFailureType__PipeFail                                                      = 1
};

/// Enum /Script/SteamCore.ESteamCheckFileSignature
/// Size: 0x01 (1 bytes)
enum class ESteamCheckFileSignature : uint8_t
{
	ESteamCheckFileSignature__InvalidSignature                                       = 0,
	ESteamCheckFileSignature__ValidSignature                                         = 1,
	ESteamCheckFileSignature__FileNotFound                                           = 2,
	ESteamCheckFileSignature__NoSignaturesFoundForThisApp                            = 3,
	ESteamCheckFileSignature__NoSignaturesFoundForThisFile                           = 4
};

/// Enum /Script/SteamCore.ESteamSubsystem
/// Size: 0x01 (1 bytes)
enum class ESteamSubsystem : uint8_t
{
	ESteamSubsystem__SteamCore                                                       = 0,
	ESteamSubsystem__AppList                                                         = 1,
	ESteamSubsystem__Apps                                                            = 2,
	ESteamSubsystem__Friends                                                         = 3,
	ESteamSubsystem__GameServer                                                      = 4,
	ESteamSubsystem__GameServerStats                                                 = 5,
	ESteamSubsystem__Inventory                                                       = 6,
	ESteamSubsystem__Input                                                           = 7,
	ESteamSubsystem__Matchmaking                                                     = 8,
	ESteamSubsystem__MatchmakingServers                                              = 9,
	ESteamSubsystem__Music                                                           = 10,
	ESteamSubsystem__Networking                                                      = 11,
	ESteamSubsystem__NetworkingUtils                                                 = 12,
	ESteamSubsystem__ParentalSettings                                                = 13,
	ESteamSubsystem__RemoteStorage                                                   = 14,
	ESteamSubsystem__RemotePlay                                                      = 15,
	ESteamSubsystem__Screenshots                                                     = 16,
	ESteamSubsystem__UGC                                                             = 17,
	ESteamSubsystem__User                                                            = 18,
	ESteamSubsystem__UserStats                                                       = 19,
	ESteamSubsystem__Utils                                                           = 20,
	ESteamSubsystem__Video                                                           = 21,
	ESteamSubsystem__SteamParties                                                    = 22,
	ESteamSubsystem__GameSearch                                                      = 23
};

/// Enum /Script/SteamCore.ESteamOverlayToStoreFlag
/// Size: 0x01 (1 bytes)
enum class ESteamOverlayToStoreFlag : uint8_t
{
	ESteamOverlayToStoreFlag__None                                                   = 0,
	ESteamOverlayToStoreFlag__AddToCart                                              = 1,
	ESteamOverlayToStoreFlag__AddToCartAndShow                                       = 2
};

/// Enum /Script/SteamCore.ESteamUserRestriction
/// Size: 0x01 (1 bytes)
enum class ESteamUserRestriction : uint8_t
{
	ESteamUserRestriction__None                                                      = 0,
	ESteamUserRestriction__Unknown                                                   = 1,
	ESteamUserRestriction__AnyChat                                                   = 2,
	ESteamUserRestriction__VoiceChat                                                 = 4,
	ESteamUserRestriction__GroupChat                                                 = 8,
	ESteamUserRestriction__Rating                                                    = 16,
	ESteamUserRestriction__GameInvites                                               = 32,
	ESteamUserRestriction__Trading                                                   = 64
};

/// Enum /Script/SteamCore.ESteamFriendFlags
/// Size: 0x01 (1 bytes)
enum class ESteamFriendFlags : uint8_t
{
	ESteamFriendFlags__None                                                          = 0,
	ESteamFriendFlags__Blocked                                                       = 1,
	ESteamFriendFlags__FriendshipRequested                                           = 2,
	ESteamFriendFlags__Immediate                                                     = 3,
	ESteamFriendFlags__ClanMember                                                    = 4,
	ESteamFriendFlags__OnGameServer                                                  = 5,
	ESteamFriendFlags__RequestingFriendship                                          = 6,
	ESteamFriendFlags__RequestingInfo                                                = 7,
	ESteamFriendFlags__Ignored                                                       = 8,
	ESteamFriendFlags__IgnoredFriend                                                 = 9,
	ESteamFriendFlags__ChatMember                                                    = 10,
	ESteamFriendFlags__All                                                           = 11
};

/// Enum /Script/SteamCore.ESteamPersonaState
/// Size: 0x01 (1 bytes)
enum class ESteamPersonaState : uint8_t
{
	ESteamPersonaState__Offline                                                      = 0,
	ESteamPersonaState__Online                                                       = 1,
	ESteamPersonaState__Busy                                                         = 2,
	ESteamPersonaState__Away                                                         = 3,
	ESteamPersonaState__Snooze                                                       = 4,
	ESteamPersonaState__LookingToTrade                                               = 5,
	ESteamPersonaState__LookingToPlay                                                = 6,
	ESteamPersonaState__Max                                                          = 7
};

/// Enum /Script/SteamCore.ESteamFriendRelationship
/// Size: 0x01 (1 bytes)
enum class ESteamFriendRelationship : uint8_t
{
	ESteamFriendRelationship__None                                                   = 0,
	ESteamFriendRelationship__Blocked                                                = 1,
	ESteamFriendRelationship__RequestRecipient                                       = 2,
	ESteamFriendRelationship__Friend                                                 = 3,
	ESteamFriendRelationship__RequestInitiator                                       = 4,
	ESteamFriendRelationship__Ignored                                                = 5,
	ESteamFriendRelationship__IgnoredFriend                                          = 6,
	ESteamFriendRelationship__Suggested_DEPRECATED                                   = 7,
	ESteamFriendRelationship__Max                                                    = 8
};

/// Enum /Script/SteamCore.ESteamActivateGameOverlayToWebPageMode
/// Size: 0x01 (1 bytes)
enum class ESteamActivateGameOverlayToWebPageMode : uint8_t
{
	ESteamActivateGameOverlayToWebPageMode__Default                                  = 0,
	ESteamActivateGameOverlayToWebPageMode__Modal                                    = 1
};

/// Enum /Script/SteamCore.ESteamPlayerResult
/// Size: 0x01 (1 bytes)
enum class ESteamPlayerResult : uint8_t
{
	ESteamPlayerResult__Invalid                                                      = 0,
	ESteamPlayerResult__FailedToConnect                                              = 1,
	ESteamPlayerResult__Abandoned                                                    = 2,
	ESteamPlayerResult__Kicked                                                       = 3,
	ESteamPlayerResult__Incomplete                                                   = 4,
	ESteamPlayerResult__Completed                                                    = 5
};

/// Enum /Script/SteamCore.ESteamGameSearchErrorCode
/// Size: 0x01 (1 bytes)
enum class ESteamGameSearchErrorCode : uint8_t
{
	ESteamGameSearchErrorCode__Invalid                                               = 0,
	ESteamGameSearchErrorCode__OK                                                    = 1,
	ESteamGameSearchErrorCode__Failed_Search_Already_In_Progress                     = 2,
	ESteamGameSearchErrorCode__Failed_No_Search_In_Progress                          = 3,
	ESteamGameSearchErrorCode__Failed_Not_Lobby_Leader                               = 4,
	ESteamGameSearchErrorCode__Failed_No_Host_Available                              = 5,
	ESteamGameSearchErrorCode__Failed_Search_Params_Invalid                          = 6,
	ESteamGameSearchErrorCode__Failed_Offline                                        = 7,
	ESteamGameSearchErrorCode__Failed_NotAuthorized                                  = 8,
	ESteamGameSearchErrorCode__Failed_Unknown_Error                                  = 9
};

/// Enum /Script/SteamCore.ESteamCoreInputLEDFlag
/// Size: 0x01 (1 bytes)
enum class ESteamCoreInputLEDFlag : uint8_t
{
	ESteamCoreInputLEDFlag__SetColor                                                 = 0,
	ESteamCoreInputLEDFlag__RestoreUserDefault                                       = 1
};

/// Enum /Script/SteamCore.ESteamCoreInputType
/// Size: 0x01 (1 bytes)
enum class ESteamCoreInputType : uint8_t
{
	ESteamCoreInputType__Unknown                                                     = 0,
	ESteamCoreInputType__SteamController                                             = 1,
	ESteamCoreInputType__XBox360Controller                                           = 2,
	ESteamCoreInputType__XBoxOneController                                           = 3,
	ESteamCoreInputType__GenericGamepad                                              = 4,
	ESteamCoreInputType__PS4Controller                                               = 5,
	ESteamCoreInputType__AppleMFiController                                          = 6,
	ESteamCoreInputType__AndroidController                                           = 7,
	ESteamCoreInputType__SwitchJoyConPair                                            = 8,
	ESteamCoreInputType__SwitchJoyConSingle                                          = 9,
	ESteamCoreInputType__SwitchProController                                         = 10,
	ESteamCoreInputType__MobileTouch                                                 = 11,
	ESteamCoreInputType__PS3Controller                                               = 12,
	ESteamCoreInputType__Count                                                       = 13,
	ESteamCoreInputType__MaximumPossibleValue                                        = 255
};

/// Enum /Script/SteamCore.ESteamCoreControllerPad
/// Size: 0x01 (1 bytes)
enum class ESteamCoreControllerPad : uint8_t
{
	ESteamCoreControllerPad__Left                                                    = 0,
	ESteamCoreControllerPad__Right                                                   = 1
};

/// Enum /Script/SteamCore.ESteamCoreXboxOrigin
/// Size: 0x01 (1 bytes)
enum class ESteamCoreXboxOrigin : uint8_t
{
	ESteamCoreXboxOrigin__A                                                          = 0,
	ESteamCoreXboxOrigin__B                                                          = 1,
	ESteamCoreXboxOrigin__X                                                          = 2,
	ESteamCoreXboxOrigin__Y                                                          = 3,
	ESteamCoreXboxOrigin__LeftBumper                                                 = 4,
	ESteamCoreXboxOrigin__RightBumper                                                = 5,
	ESteamCoreXboxOrigin__Menu                                                       = 6,
	ESteamCoreXboxOrigin__View                                                       = 7,
	ESteamCoreXboxOrigin__LeftTrigger_Pull                                           = 8,
	ESteamCoreXboxOrigin__LeftTrigger_Click                                          = 9,
	ESteamCoreXboxOrigin__RightTrigger_Pull                                          = 10,
	ESteamCoreXboxOrigin__RightTrigger_Click                                         = 11,
	ESteamCoreXboxOrigin__LeftStick_Move                                             = 12,
	ESteamCoreXboxOrigin__LeftStick_Click                                            = 13,
	ESteamCoreXboxOrigin__LeftStick_DPadNorth                                        = 14,
	ESteamCoreXboxOrigin__LeftStick_DPadSouth                                        = 15,
	ESteamCoreXboxOrigin__LeftStick_DPadWest                                         = 16,
	ESteamCoreXboxOrigin__LeftStick_DPadEast                                         = 17,
	ESteamCoreXboxOrigin__RightStick_Move                                            = 18,
	ESteamCoreXboxOrigin__RightStick_Click                                           = 19,
	ESteamCoreXboxOrigin__RightStick_DPadNorth                                       = 20,
	ESteamCoreXboxOrigin__RightStick_DPadSouth                                       = 21,
	ESteamCoreXboxOrigin__RightStick_DPadWest                                        = 22,
	ESteamCoreXboxOrigin__RightStick_DPadEast                                        = 23,
	ESteamCoreXboxOrigin__DPad_North                                                 = 24,
	ESteamCoreXboxOrigin__DPad_South                                                 = 25,
	ESteamCoreXboxOrigin__DPad_West                                                  = 26,
	ESteamCoreXboxOrigin__DPad_East                                                  = 27,
	ESteamCoreXboxOrigin__Count                                                      = 28
};

/// Enum /Script/SteamCore.ESteamCoreInputActionOrigin
/// Size: 0x01 (1 bytes)
enum class ESteamCoreInputActionOrigin : uint8_t
{
	ESteamCoreInputActionOrigin__None                                                = 0,
	ESteamCoreInputActionOrigin__SteamController_A                                   = 1,
	ESteamCoreInputActionOrigin__SteamController_B                                   = 2,
	ESteamCoreInputActionOrigin__SteamController_X                                   = 3,
	ESteamCoreInputActionOrigin__SteamController_Y                                   = 4,
	ESteamCoreInputActionOrigin__SteamController_LeftBumper                          = 5,
	ESteamCoreInputActionOrigin__SteamController_RightBumper                         = 6,
	ESteamCoreInputActionOrigin__SteamController_LeftGrip                            = 7,
	ESteamCoreInputActionOrigin__SteamController_RightGrip                           = 8,
	ESteamCoreInputActionOrigin__SteamController_Start                               = 9,
	ESteamCoreInputActionOrigin__SteamController_Back                                = 10,
	ESteamCoreInputActionOrigin__SteamController_LeftPad_Touch                       = 11,
	ESteamCoreInputActionOrigin__SteamController_LeftPad_Swipe                       = 12,
	ESteamCoreInputActionOrigin__SteamController_LeftPad_Click                       = 13,
	ESteamCoreInputActionOrigin__SteamController_LeftPad_DPadNorth                   = 14,
	ESteamCoreInputActionOrigin__SteamController_LeftPad_DPadSouth                   = 15,
	ESteamCoreInputActionOrigin__SteamController_LeftPad_DPadWest                    = 16,
	ESteamCoreInputActionOrigin__SteamController_LeftPad_DPadEast                    = 17,
	ESteamCoreInputActionOrigin__SteamController_RightPad_Touch                      = 18,
	ESteamCoreInputActionOrigin__SteamController_RightPad_Swipe                      = 19,
	ESteamCoreInputActionOrigin__SteamController_RightPad_Click                      = 20,
	ESteamCoreInputActionOrigin__SteamController_RightPad_DPadNorth                  = 21,
	ESteamCoreInputActionOrigin__SteamController_RightPad_DPadSouth                  = 22,
	ESteamCoreInputActionOrigin__SteamController_RightPad_DPadWest                   = 23,
	ESteamCoreInputActionOrigin__SteamController_RightPad_DPadEast                   = 24,
	ESteamCoreInputActionOrigin__SteamController_LeftTrigger_Pull                    = 25,
	ESteamCoreInputActionOrigin__SteamController_LeftTrigger_Click                   = 26,
	ESteamCoreInputActionOrigin__SteamController_RightTrigger_Pull                   = 27,
	ESteamCoreInputActionOrigin__SteamController_RightTrigger_Click                  = 28,
	ESteamCoreInputActionOrigin__SteamController_LeftStick_Move                      = 29,
	ESteamCoreInputActionOrigin__SteamController_LeftStick_Click                     = 30,
	ESteamCoreInputActionOrigin__SteamController_LeftStick_DPadNorth                 = 31,
	ESteamCoreInputActionOrigin__SteamController_LeftStick_DPadSouth                 = 32,
	ESteamCoreInputActionOrigin__SteamController_LeftStick_DPadWest                  = 33,
	ESteamCoreInputActionOrigin__SteamController_LeftStick_DPadEast                  = 34,
	ESteamCoreInputActionOrigin__SteamController_Gyro_Move                           = 35,
	ESteamCoreInputActionOrigin__SteamController_Gyro_Pitch                          = 36,
	ESteamCoreInputActionOrigin__SteamController_Gyro_Yaw                            = 37,
	ESteamCoreInputActionOrigin__SteamController_Gyro_Roll                           = 38,
	ESteamCoreInputActionOrigin__SteamController_Reserved0                           = 39,
	ESteamCoreInputActionOrigin__SteamController_Reserved1                           = 40,
	ESteamCoreInputActionOrigin__SteamController_Reserved2                           = 41,
	ESteamCoreInputActionOrigin__SteamController_Reserved3                           = 42,
	ESteamCoreInputActionOrigin__SteamController_Reserved4                           = 43,
	ESteamCoreInputActionOrigin__SteamController_Reserved5                           = 44,
	ESteamCoreInputActionOrigin__SteamController_Reserved6                           = 45,
	ESteamCoreInputActionOrigin__SteamController_Reserved7                           = 46,
	ESteamCoreInputActionOrigin__SteamController_Reserved8                           = 47,
	ESteamCoreInputActionOrigin__SteamController_Reserved9                           = 48,
	ESteamCoreInputActionOrigin__SteamController_Reserved10                          = 49,
	ESteamCoreInputActionOrigin__PS4_X                                               = 50,
	ESteamCoreInputActionOrigin__PS4_Circle                                          = 51,
	ESteamCoreInputActionOrigin__PS4_Triangle                                        = 52,
	ESteamCoreInputActionOrigin__PS4_Square                                          = 53,
	ESteamCoreInputActionOrigin__PS4_LeftBumper                                      = 54,
	ESteamCoreInputActionOrigin__PS4_RightBumper                                     = 55,
	ESteamCoreInputActionOrigin__PS4_Options                                         = 56,
	ESteamCoreInputActionOrigin__PS4_Share                                           = 57,
	ESteamCoreInputActionOrigin__PS4_LeftPad_Touch                                   = 58,
	ESteamCoreInputActionOrigin__PS4_LeftPad_Swipe                                   = 59,
	ESteamCoreInputActionOrigin__PS4_LeftPad_Click                                   = 60,
	ESteamCoreInputActionOrigin__PS4_LeftPad_DPadNorth                               = 61,
	ESteamCoreInputActionOrigin__PS4_LeftPad_DPadSouth                               = 62,
	ESteamCoreInputActionOrigin__PS4_LeftPad_DPadWest                                = 63,
	ESteamCoreInputActionOrigin__PS4_LeftPad_DPadEast                                = 64,
	ESteamCoreInputActionOrigin__PS4_RightPad_Touch                                  = 65,
	ESteamCoreInputActionOrigin__PS4_RightPad_Swipe                                  = 66,
	ESteamCoreInputActionOrigin__PS4_RightPad_Click                                  = 67,
	ESteamCoreInputActionOrigin__PS4_RightPad_DPadNorth                              = 68,
	ESteamCoreInputActionOrigin__PS4_RightPad_DPadSouth                              = 69,
	ESteamCoreInputActionOrigin__PS4_RightPad_DPadWest                               = 70,
	ESteamCoreInputActionOrigin__PS4_RightPad_DPadEast                               = 71,
	ESteamCoreInputActionOrigin__PS4_CenterPad_Touch                                 = 72,
	ESteamCoreInputActionOrigin__PS4_CenterPad_Swipe                                 = 73,
	ESteamCoreInputActionOrigin__PS4_CenterPad_Click                                 = 74,
	ESteamCoreInputActionOrigin__PS4_CenterPad_DPadNorth                             = 75,
	ESteamCoreInputActionOrigin__PS4_CenterPad_DPadSouth                             = 76,
	ESteamCoreInputActionOrigin__PS4_CenterPad_DPadWest                              = 77,
	ESteamCoreInputActionOrigin__PS4_CenterPad_DPadEast                              = 78,
	ESteamCoreInputActionOrigin__PS4_LeftTrigger_Pull                                = 79,
	ESteamCoreInputActionOrigin__PS4_LeftTrigger_Click                               = 80,
	ESteamCoreInputActionOrigin__PS4_RightTrigger_Pull                               = 81,
	ESteamCoreInputActionOrigin__PS4_RightTrigger_Click                              = 82,
	ESteamCoreInputActionOrigin__PS4_LeftStick_Move                                  = 83,
	ESteamCoreInputActionOrigin__PS4_LeftStick_Click                                 = 84,
	ESteamCoreInputActionOrigin__PS4_LeftStick_DPadNorth                             = 85,
	ESteamCoreInputActionOrigin__PS4_LeftStick_DPadSouth                             = 86,
	ESteamCoreInputActionOrigin__PS4_LeftStick_DPadWest                              = 87,
	ESteamCoreInputActionOrigin__PS4_LeftStick_DPadEast                              = 88,
	ESteamCoreInputActionOrigin__PS4_RightStick_Move                                 = 89,
	ESteamCoreInputActionOrigin__PS4_RightStick_Click                                = 90,
	ESteamCoreInputActionOrigin__PS4_RightStick_DPadNorth                            = 91,
	ESteamCoreInputActionOrigin__PS4_RightStick_DPadSouth                            = 92,
	ESteamCoreInputActionOrigin__PS4_RightStick_DPadWest                             = 93,
	ESteamCoreInputActionOrigin__PS4_RightStick_DPadEast                             = 94,
	ESteamCoreInputActionOrigin__PS4_DPad_North                                      = 95,
	ESteamCoreInputActionOrigin__PS4_DPad_South                                      = 96,
	ESteamCoreInputActionOrigin__PS4_DPad_West                                       = 97,
	ESteamCoreInputActionOrigin__PS4_DPad_East                                       = 98,
	ESteamCoreInputActionOrigin__PS4_Gyro_Move                                       = 99,
	ESteamCoreInputActionOrigin__PS4_Gyro_Pitch                                      = 100,
	ESteamCoreInputActionOrigin__PS4_Gyro_Yaw                                        = 101,
	ESteamCoreInputActionOrigin__PS4_Gyro_Roll                                       = 102,
	ESteamCoreInputActionOrigin__PS4_DPad_Move                                       = 103,
	ESteamCoreInputActionOrigin__PS4_Reserved1                                       = 104,
	ESteamCoreInputActionOrigin__PS4_Reserved2                                       = 105,
	ESteamCoreInputActionOrigin__PS4_Reserved3                                       = 106,
	ESteamCoreInputActionOrigin__PS4_Reserved4                                       = 107,
	ESteamCoreInputActionOrigin__PS4_Reserved5                                       = 108,
	ESteamCoreInputActionOrigin__PS4_Reserved6                                       = 109,
	ESteamCoreInputActionOrigin__PS4_Reserved7                                       = 110,
	ESteamCoreInputActionOrigin__PS4_Reserved8                                       = 111,
	ESteamCoreInputActionOrigin__PS4_Reserved9                                       = 112,
	ESteamCoreInputActionOrigin__PS4_Reserved10                                      = 113,
	ESteamCoreInputActionOrigin__XBoxOne_A                                           = 114,
	ESteamCoreInputActionOrigin__XBoxOne_B                                           = 115,
	ESteamCoreInputActionOrigin__XBoxOne_X                                           = 116,
	ESteamCoreInputActionOrigin__XBoxOne_Y                                           = 117,
	ESteamCoreInputActionOrigin__XBoxOne_LeftBumper                                  = 118,
	ESteamCoreInputActionOrigin__XBoxOne_RightBumper                                 = 119,
	ESteamCoreInputActionOrigin__XBoxOne_Menu                                        = 120,
	ESteamCoreInputActionOrigin__XBoxOne_View                                        = 121,
	ESteamCoreInputActionOrigin__XBoxOne_LeftTrigger_Pull                            = 122,
	ESteamCoreInputActionOrigin__XBoxOne_LeftTrigger_Click                           = 123,
	ESteamCoreInputActionOrigin__XBoxOne_RightTrigger_Pull                           = 124,
	ESteamCoreInputActionOrigin__XBoxOne_RightTrigger_Click                          = 125,
	ESteamCoreInputActionOrigin__XBoxOne_LeftStick_Move                              = 126,
	ESteamCoreInputActionOrigin__XBoxOne_LeftStick_Click                             = 127,
	ESteamCoreInputActionOrigin__XBoxOne_LeftStick_DPadNorth                         = 128,
	ESteamCoreInputActionOrigin__XBoxOne_LeftStick_DPadSouth                         = 129,
	ESteamCoreInputActionOrigin__XBoxOne_LeftStick_DPadWest                          = 130,
	ESteamCoreInputActionOrigin__XBoxOne_LeftStick_DPadEast                          = 131,
	ESteamCoreInputActionOrigin__XBoxOne_RightStick_Move                             = 132,
	ESteamCoreInputActionOrigin__XBoxOne_RightStick_Click                            = 133,
	ESteamCoreInputActionOrigin__XBoxOne_RightStick_DPadNorth                        = 134,
	ESteamCoreInputActionOrigin__XBoxOne_RightStick_DPadSouth                        = 135,
	ESteamCoreInputActionOrigin__XBoxOne_RightStick_DPadWest                         = 136,
	ESteamCoreInputActionOrigin__XBoxOne_RightStick_DPadEast                         = 137,
	ESteamCoreInputActionOrigin__XBoxOne_DPad_North                                  = 138,
	ESteamCoreInputActionOrigin__XBoxOne_DPad_South                                  = 139,
	ESteamCoreInputActionOrigin__XBoxOne_DPad_West                                   = 140,
	ESteamCoreInputActionOrigin__XBoxOne_DPad_East                                   = 141,
	ESteamCoreInputActionOrigin__XBoxOne_DPad_Move                                   = 142,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved1                                   = 143,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved2                                   = 144,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved3                                   = 145,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved4                                   = 146,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved5                                   = 147,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved6                                   = 148,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved7                                   = 149,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved8                                   = 150,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved9                                   = 151,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved10                                  = 152,
	ESteamCoreInputActionOrigin__XBox360_A                                           = 153,
	ESteamCoreInputActionOrigin__XBox360_B                                           = 154,
	ESteamCoreInputActionOrigin__XBox360_X                                           = 155,
	ESteamCoreInputActionOrigin__XBox360_Y                                           = 156,
	ESteamCoreInputActionOrigin__XBox360_LeftBumper                                  = 157,
	ESteamCoreInputActionOrigin__XBox360_RightBumper                                 = 158,
	ESteamCoreInputActionOrigin__XBox360_Start                                       = 159,
	ESteamCoreInputActionOrigin__XBox360_Back                                        = 160,
	ESteamCoreInputActionOrigin__XBox360_LeftTrigger_Pull                            = 161,
	ESteamCoreInputActionOrigin__XBox360_LeftTrigger_Click                           = 162,
	ESteamCoreInputActionOrigin__XBox360_RightTrigger_Pull                           = 163,
	ESteamCoreInputActionOrigin__XBox360_RightTrigger_Click                          = 164,
	ESteamCoreInputActionOrigin__XBox360_LeftStick_Move                              = 165,
	ESteamCoreInputActionOrigin__XBox360_LeftStick_Click                             = 166,
	ESteamCoreInputActionOrigin__XBox360_LeftStick_DPadNorth                         = 167,
	ESteamCoreInputActionOrigin__XBox360_LeftStick_DPadSouth                         = 168,
	ESteamCoreInputActionOrigin__XBox360_LeftStick_DPadWest                          = 169,
	ESteamCoreInputActionOrigin__XBox360_LeftStick_DPadEast                          = 170,
	ESteamCoreInputActionOrigin__XBox360_RightStick_Move                             = 171,
	ESteamCoreInputActionOrigin__XBox360_RightStick_Click                            = 172,
	ESteamCoreInputActionOrigin__XBox360_RightStick_DPadNorth                        = 173,
	ESteamCoreInputActionOrigin__XBox360_RightStick_DPadSouth                        = 174,
	ESteamCoreInputActionOrigin__XBox360_RightStick_DPadWest                         = 175,
	ESteamCoreInputActionOrigin__XBox360_RightStick_DPadEast                         = 176,
	ESteamCoreInputActionOrigin__XBox360_DPad_North                                  = 177,
	ESteamCoreInputActionOrigin__XBox360_DPad_South                                  = 178,
	ESteamCoreInputActionOrigin__XBox360_DPad_West                                   = 179,
	ESteamCoreInputActionOrigin__XBox360_DPad_East                                   = 180,
	ESteamCoreInputActionOrigin__XBox360_DPad_Move                                   = 181,
	ESteamCoreInputActionOrigin__XBox360_Reserved1                                   = 182,
	ESteamCoreInputActionOrigin__XBox360_Reserved2                                   = 183,
	ESteamCoreInputActionOrigin__XBox360_Reserved3                                   = 184,
	ESteamCoreInputActionOrigin__XBox360_Reserved4                                   = 185,
	ESteamCoreInputActionOrigin__XBox360_Reserved5                                   = 186,
	ESteamCoreInputActionOrigin__XBox360_Reserved6                                   = 187,
	ESteamCoreInputActionOrigin__XBox360_Reserved7                                   = 188,
	ESteamCoreInputActionOrigin__XBox360_Reserved8                                   = 189,
	ESteamCoreInputActionOrigin__XBox360_Reserved9                                   = 190,
	ESteamCoreInputActionOrigin__XBox360_Reserved10                                  = 191,
	ESteamCoreInputActionOrigin__Switch_A                                            = 192,
	ESteamCoreInputActionOrigin__Switch_B                                            = 193,
	ESteamCoreInputActionOrigin__Switch_X                                            = 194,
	ESteamCoreInputActionOrigin__Switch_Y                                            = 195,
	ESteamCoreInputActionOrigin__Switch_LeftBumper                                   = 196,
	ESteamCoreInputActionOrigin__Switch_RightBumper                                  = 197,
	ESteamCoreInputActionOrigin__Switch_Plus                                         = 198,
	ESteamCoreInputActionOrigin__Switch_Minus                                        = 199,
	ESteamCoreInputActionOrigin__Switch_Capture                                      = 200,
	ESteamCoreInputActionOrigin__Switch_LeftTrigger_Pull                             = 201,
	ESteamCoreInputActionOrigin__Switch_LeftTrigger_Click                            = 202,
	ESteamCoreInputActionOrigin__Switch_RightTrigger_Pull                            = 203,
	ESteamCoreInputActionOrigin__Switch_RightTrigger_Click                           = 204,
	ESteamCoreInputActionOrigin__Switch_LeftStick_Move                               = 205,
	ESteamCoreInputActionOrigin__Switch_LeftStick_Click                              = 206,
	ESteamCoreInputActionOrigin__Switch_LeftStick_DPadNorth                          = 207,
	ESteamCoreInputActionOrigin__Switch_LeftStick_DPadSouth                          = 208,
	ESteamCoreInputActionOrigin__Switch_LeftStick_DPadWest                           = 209,
	ESteamCoreInputActionOrigin__Switch_LeftStick_DPadEast                           = 210,
	ESteamCoreInputActionOrigin__Switch_RightStick_Move                              = 211,
	ESteamCoreInputActionOrigin__Switch_RightStick_Click                             = 212,
	ESteamCoreInputActionOrigin__Switch_RightStick_DPadNorth                         = 213,
	ESteamCoreInputActionOrigin__Switch_RightStick_DPadSouth                         = 214,
	ESteamCoreInputActionOrigin__Switch_RightStick_DPadWest                          = 215,
	ESteamCoreInputActionOrigin__Switch_RightStick_DPadEast                          = 216,
	ESteamCoreInputActionOrigin__Switch_DPad_North                                   = 217,
	ESteamCoreInputActionOrigin__Switch_DPad_South                                   = 218,
	ESteamCoreInputActionOrigin__Switch_DPad_West                                    = 219,
	ESteamCoreInputActionOrigin__Switch_DPad_East                                    = 220,
	ESteamCoreInputActionOrigin__Switch_ProGyro_Move                                 = 221,
	ESteamCoreInputActionOrigin__Switch_ProGyro_Pitch                                = 222,
	ESteamCoreInputActionOrigin__Switch_ProGyro_Yaw                                  = 223,
	ESteamCoreInputActionOrigin__Switch_ProGyro_Roll                                 = 224,
	ESteamCoreInputActionOrigin__Switch_DPad_Move                                    = 225,
	ESteamCoreInputActionOrigin__Switch_Reserved1                                    = 226,
	ESteamCoreInputActionOrigin__Switch_Reserved2                                    = 227,
	ESteamCoreInputActionOrigin__Switch_Reserved3                                    = 228,
	ESteamCoreInputActionOrigin__Switch_Reserved4                                    = 229,
	ESteamCoreInputActionOrigin__Switch_Reserved5                                    = 230,
	ESteamCoreInputActionOrigin__Switch_Reserved6                                    = 231,
	ESteamCoreInputActionOrigin__Switch_Reserved7                                    = 232,
	ESteamCoreInputActionOrigin__Switch_Reserved8                                    = 233,
	ESteamCoreInputActionOrigin__Switch_Reserved9                                    = 234,
	ESteamCoreInputActionOrigin__Switch_Reserved10                                   = 235,
	ESteamCoreInputActionOrigin__Switch_RightGyro_Move                               = 236,
	ESteamCoreInputActionOrigin__Switch_RightGyro_Pitch                              = 237,
	ESteamCoreInputActionOrigin__Switch_RightGyro_Yaw                                = 238,
	ESteamCoreInputActionOrigin__Switch_RightGyro_Roll                               = 239,
	ESteamCoreInputActionOrigin__Switch_LeftGyro_Move                                = 240,
	ESteamCoreInputActionOrigin__Switch_LeftGyro_Pitch                               = 241,
	ESteamCoreInputActionOrigin__Switch_LeftGyro_Yaw                                 = 242,
	ESteamCoreInputActionOrigin__Switch_LeftGyro_Roll                                = 243,
	ESteamCoreInputActionOrigin__Switch_LeftGrip_Lower                               = 244,
	ESteamCoreInputActionOrigin__Switch_LeftGrip_Upper                               = 245,
	ESteamCoreInputActionOrigin__Switch_RightGrip_Lower                              = 246,
	ESteamCoreInputActionOrigin__Switch_RightGrip_Upper                              = 247,
	ESteamCoreInputActionOrigin__Switch_Reserved11                                   = 248,
	ESteamCoreInputActionOrigin__Switch_Reserved12                                   = 249,
	ESteamCoreInputActionOrigin__Switch_Reserved13                                   = 250,
	ESteamCoreInputActionOrigin__Switch_Reserved14                                   = 251,
	ESteamCoreInputActionOrigin__Switch_Reserved15                                   = 252,
	ESteamCoreInputActionOrigin__Switch_Reserved16                                   = 253,
	ESteamCoreInputActionOrigin__Switch_Reserved17                                   = 254,
	ESteamCoreInputActionOrigin__Switch_Reserved18                                   = 255
};

/// Enum /Script/SteamCore.ESteamCoreInputSourceMode
/// Size: 0x01 (1 bytes)
enum class ESteamCoreInputSourceMode : uint8_t
{
	ESteamCoreInputSourceMode__None                                                  = 0,
	ESteamCoreInputSourceMode__Dpad                                                  = 1,
	ESteamCoreInputSourceMode__Buttons                                               = 2,
	ESteamCoreInputSourceMode__FourButtons                                           = 3,
	ESteamCoreInputSourceMode__AbsoluteMouse                                         = 4,
	ESteamCoreInputSourceMode__RelativeMouse                                         = 5,
	ESteamCoreInputSourceMode__JoystickMove                                          = 6,
	ESteamCoreInputSourceMode__JoystickMouse                                         = 7,
	ESteamCoreInputSourceMode__JoystickCamera                                        = 8,
	ESteamCoreInputSourceMode__ScrollWheel                                           = 9,
	ESteamCoreInputSourceMode__Trigger                                               = 10,
	ESteamCoreInputSourceMode__TouchMenu                                             = 11,
	ESteamCoreInputSourceMode__MouseJoystick                                         = 12,
	ESteamCoreInputSourceMode__MouseRegion                                           = 13,
	ESteamCoreInputSourceMode__RadialMenu                                            = 14,
	ESteamCoreInputSourceMode__SingleButton                                          = 15,
	ESteamCoreInputSourceMode__Switches                                              = 16
};

/// Enum /Script/SteamCore.ESteamCoreInputSource
/// Size: 0x01 (1 bytes)
enum class ESteamCoreInputSource : uint8_t
{
	ESteamCoreInputSource__None                                                      = 0,
	ESteamCoreInputSource__LeftTrackpad                                              = 1,
	ESteamCoreInputSource__RightTrackpad                                             = 2,
	ESteamCoreInputSource__Joystick                                                  = 3,
	ESteamCoreInputSource__ABXY                                                      = 4,
	ESteamCoreInputSource__Switch                                                    = 5,
	ESteamCoreInputSource__LeftTrigger                                               = 6,
	ESteamCoreInputSource__RightTrigger                                              = 7,
	ESteamCoreInputSource__LeftBumper                                                = 8,
	ESteamCoreInputSource__RightBumper                                               = 9,
	ESteamCoreInputSource__Gyro                                                      = 10,
	ESteamCoreInputSource__CenterTrackpad                                            = 11,
	ESteamCoreInputSource__RightJoystick                                             = 12,
	ESteamCoreInputSource__DPad                                                      = 13,
	ESteamCoreInputSource__Key                                                       = 14,
	ESteamCoreInputSource__Mouse                                                     = 15,
	ESteamCoreInputSource__LeftGyro                                                  = 16,
	ESteamCoreInputSource__Count                                                     = 17
};

/// Enum /Script/SteamCore.ESteamCoreItemFlags
/// Size: 0x01 (1 bytes)
enum class ESteamCoreItemFlags : uint8_t
{
	ENoTrade                                                                         = 0,
	ERemoved                                                                         = 8,
	EConsumed                                                                        = 9
};

/// Enum /Script/SteamCore.ESteamLobbyDistanceFilter
/// Size: 0x01 (1 bytes)
enum class ESteamLobbyDistanceFilter : uint8_t
{
	ESteamLobbyDistanceFilter__Close                                                 = 0,
	ESteamLobbyDistanceFilter__Default                                               = 1,
	ESteamLobbyDistanceFilter__Far                                                   = 2,
	ESteamLobbyDistanceFilter__Worldwide                                             = 3
};

/// Enum /Script/SteamCore.ESteamLobbyComparison
/// Size: 0x01 (1 bytes)
enum class ESteamLobbyComparison : uint8_t
{
	ESteamLobbyComparison__EqualToOrLessThan                                         = 0,
	ESteamLobbyComparison__LessThan                                                  = 1,
	ESteamLobbyComparison__Equal                                                     = 2,
	ESteamLobbyComparison__GreaterThan                                               = 3,
	ESteamLobbyComparison__EqualToOrGreaterThan                                      = 4,
	ESteamLobbyComparison__NotEqual                                                  = 5
};

/// Enum /Script/SteamCore.ESteamLobbyType
/// Size: 0x01 (1 bytes)
enum class ESteamLobbyType : uint8_t
{
	ESteamLobbyType__Private                                                         = 0,
	ESteamLobbyType__FriendsOnly                                                     = 1,
	ESteamLobbyType__Public                                                          = 2,
	ESteamLobbyType__Invisible                                                       = 3
};

/// Enum /Script/SteamCore.ESteamSessionFindType
/// Size: 0x01 (1 bytes)
enum class ESteamSessionFindType : uint8_t
{
	ESteamSessionFindType__Listen                                                    = 0,
	ESteamSessionFindType__Dedicated                                                 = 1
};

/// Enum /Script/SteamCore.ESteamAudioPlaybackStatus
/// Size: 0x01 (1 bytes)
enum class ESteamAudioPlaybackStatus : uint8_t
{
	ESteamAudioPlaybackStatus__Undefined                                             = 0,
	ESteamAudioPlaybackStatus__Playing                                               = 1,
	ESteamAudioPlaybackStatus__Paused                                                = 2,
	ESteamAudioPlaybackStatus__Idle                                                  = 3
};

/// Enum /Script/SteamCore.ESteamP2PSend
/// Size: 0x01 (1 bytes)
enum class ESteamP2PSend : uint8_t
{
	ESteamP2PSend__Unreliable                                                        = 0,
	ESteamP2PSend__UnreliableNoDelay                                                 = 1,
	ESteamP2PSend__Reliable                                                          = 2,
	ESteamP2PSend__ReliableWithBuffering                                             = 3
};

/// Enum /Script/SteamCore.ESteamParentalFeature
/// Size: 0x01 (1 bytes)
enum class ESteamParentalFeature : uint8_t
{
	ESteamParentalFeature__Invalid                                                   = 0,
	ESteamParentalFeature__Store                                                     = 1,
	ESteamParentalFeature__Community                                                 = 2,
	ESteamParentalFeature__Profile                                                   = 3,
	ESteamParentalFeature__Friends                                                   = 4,
	ESteamParentalFeature__News                                                      = 5,
	ESteamParentalFeature__Trading                                                   = 6,
	ESteamParentalFeature__Settings                                                  = 7,
	ESteamParentalFeature__Console                                                   = 8,
	ESteamParentalFeature__Browser                                                   = 9,
	ESteamParentalFeature__ParentalSetup                                             = 10,
	ESteamParentalFeature__Library                                                   = 11,
	ESteamParentalFeature__Test                                                      = 12,
	ESteamParentalFeature__Max                                                       = 13
};

/// Enum /Script/SteamCore.ESteamPartiesBeaconLocationData
/// Size: 0x01 (1 bytes)
enum class ESteamPartiesBeaconLocationData : uint8_t
{
	ESteamPartiesBeaconLocationData__Invalid                                         = 0,
	ESteamPartiesBeaconLocationData__Name                                            = 1,
	ESteamPartiesBeaconLocationData__IconURLSmall                                    = 2,
	ESteamPartiesBeaconLocationData__IconURLMedium                                   = 3,
	ESteamPartiesBeaconLocationData__IconURLLarge                                    = 4
};

/// Enum /Script/SteamCore.ESteamPartiesBeaconLocationType
/// Size: 0x01 (1 bytes)
enum class ESteamPartiesBeaconLocationType : uint8_t
{
	ESteamPartiesBeaconLocationType__Invalid                                         = 0,
	ESteamPartiesBeaconLocationType__ChatGroup                                       = 1,
	ESteamPartiesBeaconLocationType__Max                                             = 2
};

/// Enum /Script/SteamCore.ESteamCoreDeviceFormFactor
/// Size: 0x01 (1 bytes)
enum class ESteamCoreDeviceFormFactor : uint8_t
{
	ESteamCoreDeviceFormFactor__Unknown                                              = 0,
	ESteamCoreDeviceFormFactor__Phone                                                = 1,
	ESteamCoreDeviceFormFactor__Tablet                                               = 2,
	ESteamCoreDeviceFormFactor__Computer                                             = 3,
	ESteamCoreDeviceFormFactor__TV                                                   = 4
};

/// Enum /Script/SteamCore.ESteamUGCReadAction
/// Size: 0x01 (1 bytes)
enum class ESteamUGCReadAction : uint8_t
{
	ESteamUGCReadAction__k_EUGCRead_ContinueReadingUntilFinished                     = 0,
	ESteamUGCReadAction__k_EUGCRead_ContinueReading                                  = 1,
	ESteamUGCReadAction__k_EUGCRead_Close                                            = 2
};

/// Enum /Script/SteamCore.ESteamRemoteStoragePlatform
/// Size: 0x01 (1 bytes)
enum class ESteamRemoteStoragePlatform : uint8_t
{
	ESteamRemoteStoragePlatform__None                                                = 0,
	ESteamRemoteStoragePlatform__Windows                                             = 1,
	ESteamRemoteStoragePlatform__OSX                                                 = 2,
	ESteamRemoteStoragePlatform__PS3                                                 = 4,
	ESteamRemoteStoragePlatform__Linux                                               = 8,
	ESteamRemoteStoragePlatform__Reserved2                                           = 16,
	ESteamRemoteStoragePlatform__All                                                 = 254
};

/// Enum /Script/SteamCore.ESteamVRScreenshotType
/// Size: 0x01 (1 bytes)
enum class ESteamVRScreenshotType : uint8_t
{
	ESteamVRScreenshotType__None                                                     = 0,
	ESteamVRScreenshotType__Mono                                                     = 1,
	ESteamVRScreenshotType__Stereo                                                   = 2,
	ESteamVRScreenshotType__MonoCubemap                                              = 3,
	ESteamVRScreenshotType__MonoPanorama                                             = 4,
	ESteamVRScreenshotType__StereoPanorama                                           = 5
};

/// Enum /Script/SteamCore.ESteamAccountType
/// Size: 0x01 (1 bytes)
enum class ESteamAccountType : uint8_t
{
	ESteamAccountType__Invalid                                                       = 0,
	ESteamAccountType__Individual                                                    = 1,
	ESteamAccountType__Multiseat                                                     = 2,
	ESteamAccountType__GameServer                                                    = 3,
	ESteamAccountType__AnonGameServer                                                = 4,
	ESteamAccountType__Pending                                                       = 5,
	ESteamAccountType__ContentServer                                                 = 6,
	ESteamAccountType__Clan                                                          = 7,
	ESteamAccountType__Chat                                                          = 8,
	ESteamAccountType__ConsoleUser                                                   = 9,
	ESteamAccountType__AnonUser                                                      = 10,
	ESteamAccountType__Max                                                           = 11
};

/// Enum /Script/SteamCore.ESteamBeginAuthSessionResult
/// Size: 0x01 (1 bytes)
enum class ESteamBeginAuthSessionResult : uint8_t
{
	ESteamBeginAuthSessionResult__OK                                                 = 0,
	ESteamBeginAuthSessionResult__InvalidTicket                                      = 1,
	ESteamBeginAuthSessionResult__DuplicateRequest                                   = 2,
	ESteamBeginAuthSessionResult__InvalidVersion                                     = 3,
	ESteamBeginAuthSessionResult__GameMismatch                                       = 4,
	ESteamBeginAuthSessionResult__ExpiredTicket                                      = 5
};

/// Enum /Script/SteamCore.ESteamUserHasLicenseForAppResult
/// Size: 0x01 (1 bytes)
enum class ESteamUserHasLicenseForAppResult : uint8_t
{
	ESteamUserHasLicenseForAppResult__HasLicense                                     = 0,
	ESteamUserHasLicenseForAppResult__DoesNotHaveLicense                             = 1,
	ESteamUserHasLicenseForAppResult__NoAuth                                         = 2
};

/// Enum /Script/SteamCore.EOnlineComparison
/// Size: 0x01 (1 bytes)
enum class EOnlineComparison : uint8_t
{
	EOnlineComparison__Equals                                                        = 0,
	EOnlineComparison__NotEquals                                                     = 1,
	EOnlineComparison__GreaterThan                                                   = 2,
	EOnlineComparison__GreaterThanEquals                                             = 3,
	EOnlineComparison__LessThan                                                      = 4,
	EOnlineComparison__LessThanEquals                                                = 5
};

/// Enum /Script/SteamCore.ESteamComparisonOp
/// Size: 0x01 (1 bytes)
enum class ESteamComparisonOp : uint8_t
{
	ESteamComparisonOp__Equals                                                       = 0,
	ESteamComparisonOp__NotEquals                                                    = 1,
	ESteamComparisonOp__GreaterThan                                                  = 2,
	ESteamComparisonOp__GreaterThanEquals                                            = 3,
	ESteamComparisonOp__LessThan                                                     = 4,
	ESteamComparisonOp__LessThanEquals                                               = 5,
	ESteamComparisonOp__Near                                                         = 6,
	ESteamComparisonOp__In                                                           = 7,
	ESteamComparisonOp__NotIn                                                        = 8
};

/// Enum /Script/SteamCore.ESteamRemoteStoragePublishedFileVisibility
/// Size: 0x01 (1 bytes)
enum class ESteamRemoteStoragePublishedFileVisibility : uint8_t
{
	ESteamRemoteStoragePublishedFileVisibility__Public                               = 0,
	ESteamRemoteStoragePublishedFileVisibility__FriendsOnly                          = 1,
	ESteamRemoteStoragePublishedFileVisibility__Private                              = 2
};

/// Enum /Script/SteamCore.ESteamWorkshopFileType
/// Size: 0x01 (1 bytes)
enum class ESteamWorkshopFileType : uint8_t
{
	ESteamWorkshopFileType__First                                                    = 0,
	ESteamWorkshopFileType__Community                                                = 0,
	ESteamWorkshopFileType__Microtransaction                                         = 1,
	ESteamWorkshopFileType__Collection                                               = 2,
	ESteamWorkshopFileType__Art                                                      = 3,
	ESteamWorkshopFileType__Video                                                    = 4,
	ESteamWorkshopFileType__Screenshot                                               = 5,
	ESteamWorkshopFileType__Game                                                     = 6,
	ESteamWorkshopFileType__Software                                                 = 7,
	ESteamWorkshopFileType__Concept                                                  = 8,
	ESteamWorkshopFileType__WebGuide                                                 = 9,
	ESteamWorkshopFileType__IntegratedGuide                                          = 10,
	ESteamWorkshopFileType__Merch                                                    = 11,
	ESteamWorkshopFileType__ControllerBinding                                        = 12,
	ESteamWorkshopFileType__SteamworksAccessInvite                                   = 13,
	ESteamWorkshopFileType__SteamVideo                                               = 14,
	ESteamWorkshopFileType__GameManagedItem                                          = 15,
	ESteamWorkshopFileType__Max                                                      = 16
};

/// Enum /Script/SteamCore.ESteamItemPreviewType
/// Size: 0x01 (1 bytes)
enum class ESteamItemPreviewType : uint8_t
{
	ESteamItemPreviewType__Image                                                     = 0,
	ESteamItemPreviewType__YouTubeVideo                                              = 1,
	ESteamItemPreviewType__Sketchfab                                                 = 2,
	ESteamItemPreviewType__EnvironmentMap_HorizontalCross                            = 3,
	ESteamItemPreviewType__EnvironmentMap_LatLong                                    = 4,
	ESteamItemPreviewType__ReservedMax                                               = 254
};

/// Enum /Script/SteamCore.ESteamItemStatistic
/// Size: 0x01 (1 bytes)
enum class ESteamItemStatistic : uint8_t
{
	ESteamItemStatistic__NumSubscriptions                                            = 0,
	ESteamItemStatistic__NumFavorites                                                = 1,
	ESteamItemStatistic__NumFollowers                                                = 2,
	ESteamItemStatistic__NumUniqueSubscriptions                                      = 3,
	ESteamItemStatistic__NumUniqueFavorites                                          = 4,
	ESteamItemStatistic__NumUniqueFollowers                                          = 5,
	ESteamItemStatistic__NumUniqueWebsiteViews                                       = 6,
	ESteamItemStatistic__ReportScore                                                 = 7,
	ESteamItemStatistic__NumSecondsPlayed                                            = 8,
	ESteamItemStatistic__NumPlaytimeSessions                                         = 9,
	ESteamItemStatistic__NumComments                                                 = 10,
	ESteamItemStatistic__NumSecondsPlayedDuringTimePeriod                            = 11,
	ESteamItemStatistic__NumPlaytimeSessionsDuringTimePeriod                         = 12
};

/// Enum /Script/SteamCore.ESteamItemState
/// Size: 0x01 (1 bytes)
enum class ESteamItemState : uint8_t
{
	ESteamItemState__None                                                            = 0,
	ESteamItemState__Subscribed                                                      = 1,
	ESteamItemState__LegacyItem                                                      = 2,
	ESteamItemState__Installed                                                       = 4,
	ESteamItemState__NeedsUpdate                                                     = 8,
	ESteamItemState__Downloading                                                     = 16,
	ESteamItemState__DownloadPending                                                 = 32
};

/// Enum /Script/SteamCore.ESteamItemUpdateStatus
/// Size: 0x01 (1 bytes)
enum class ESteamItemUpdateStatus : uint8_t
{
	ESteamItemUpdateStatus__Invalid                                                  = 0,
	ESteamItemUpdateStatus__PreparingConfig                                          = 1,
	ESteamItemUpdateStatus__PreparingContent                                         = 2,
	ESteamItemUpdateStatus__UploadingContent                                         = 3,
	ESteamItemUpdateStatus__UploadingPreviewFile                                     = 4,
	ESteamItemUpdateStatus__CommittingChanges                                        = 5
};

/// Enum /Script/SteamCore.ESteamUGCQuery
/// Size: 0x01 (1 bytes)
enum class ESteamUGCQuery : uint8_t
{
	ESteamUGCQuery__RankedByVote                                                     = 0,
	ESteamUGCQuery__RankedByPublicationDate                                          = 1,
	ESteamUGCQuery__AcceptedForGameRankedByAcceptanceDate                            = 2,
	ESteamUGCQuery__RankedByTrend                                                    = 3,
	ESteamUGCQuery__FavoritedByFriendsRankedByPublicationDate                        = 4,
	ESteamUGCQuery__CreatedByFriendsRankedByPublicationDate                          = 5,
	ESteamUGCQuery__RankedByNumTimesReported                                         = 6,
	ESteamUGCQuery__CreatedByFollowedUsersRankedByPublicationDate                    = 7,
	ESteamUGCQuery__NotYetRated                                                      = 8,
	ESteamUGCQuery__RankedByTotalVotesAsc                                            = 9,
	ESteamUGCQuery__RankedByVotesUp                                                  = 10,
	ESteamUGCQuery__RankedByTextSearch                                               = 11,
	ESteamUGCQuery__RankedByTotalUniqueSubscriptions                                 = 12,
	ESteamUGCQuery__RankedByPlaytimeTrend                                            = 13,
	ESteamUGCQuery__RankedByTotalPlaytime                                            = 14,
	ESteamUGCQuery__RankedByAveragePlaytimeTrend                                     = 15,
	ESteamUGCQuery__RankedByLifetimeAveragePlaytime                                  = 16,
	ESteamUGCQuery__RankedByPlaytimeSessionsTrend                                    = 17,
	ESteamUGCQuery__RankedByLifetimePlaytimeSessions                                 = 18
};

/// Enum /Script/SteamCore.ESteamUserUGCListSortOrder
/// Size: 0x01 (1 bytes)
enum class ESteamUserUGCListSortOrder : uint8_t
{
	ESteamUserUGCListSortOrder__CreationOrderDesc                                    = 0,
	ESteamUserUGCListSortOrder__CreationOrderAsc                                     = 1,
	ESteamUserUGCListSortOrder__TitleAsc                                             = 2,
	ESteamUserUGCListSortOrder__LastUpdatedDesc                                      = 3,
	ESteamUserUGCListSortOrder__SubscriptionDateDesc                                 = 4,
	ESteamUserUGCListSortOrder__VoteScoreDesc                                        = 5,
	ESteamUserUGCListSortOrder__ForModeration                                        = 6
};

/// Enum /Script/SteamCore.ESteamUserUGCList
/// Size: 0x01 (1 bytes)
enum class ESteamUserUGCList : uint8_t
{
	ESteamUserUGCList__Published                                                     = 0,
	ESteamUserUGCList__VotedOn                                                       = 1,
	ESteamUserUGCList__VotedUp                                                       = 2,
	ESteamUserUGCList__VotedDown                                                     = 3,
	ESteamUserUGCList__WillVoteLater                                                 = 4,
	ESteamUserUGCList__Favorited                                                     = 5,
	ESteamUserUGCList__Subscribed                                                    = 6,
	ESteamUserUGCList__UsedOrPlayed                                                  = 7,
	ESteamUserUGCList__Followed                                                      = 8
};

/// Enum /Script/SteamCore.ESteamUGCMatchingUGCType
/// Size: 0x01 (1 bytes)
enum class ESteamUGCMatchingUGCType : uint8_t
{
	ESteamUGCMatchingUGCType__Items                                                  = 0,
	ESteamUGCMatchingUGCType__Items_Mtx                                              = 1,
	ESteamUGCMatchingUGCType__Items_ReadyToUse                                       = 2,
	ESteamUGCMatchingUGCType__Collections                                            = 3,
	ESteamUGCMatchingUGCType__Artwork                                                = 4,
	ESteamUGCMatchingUGCType__Videos                                                 = 5,
	ESteamUGCMatchingUGCType__Screenshots                                            = 6,
	ESteamUGCMatchingUGCType__AllGuides                                              = 7,
	ESteamUGCMatchingUGCType__WebGuides                                              = 8,
	ESteamUGCMatchingUGCType__IntegratedGuides                                       = 9,
	ESteamUGCMatchingUGCType__UsableInGame                                           = 10,
	ESteamUGCMatchingUGCType__ControllerBindings                                     = 11,
	ESteamUGCMatchingUGCType__GameManagedItems                                       = 12,
	ESteamUGCMatchingUGCType__All                                                    = 13
};

/// Enum /Script/SteamCore.ESteamLeaderboardUploadScoreMethod
/// Size: 0x01 (1 bytes)
enum class ESteamLeaderboardUploadScoreMethod : uint8_t
{
	ESteamLeaderboardUploadScoreMethod__None                                         = 0,
	ESteamLeaderboardUploadScoreMethod__KeepBest                                     = 1,
	ESteamLeaderboardUploadScoreMethod__ForceUpdate                                  = 2
};

/// Enum /Script/SteamCore.ESteamLeaderboardDisplayType
/// Size: 0x01 (1 bytes)
enum class ESteamLeaderboardDisplayType : uint8_t
{
	ESteamLeaderboardDisplayType__None                                               = 0,
	ESteamLeaderboardDisplayType__Numeric                                            = 1,
	ESteamLeaderboardDisplayType__TimeSeconds                                        = 2,
	ESteamLeaderboardDisplayType__TimeMilliSeconds                                   = 3
};

/// Enum /Script/SteamCore.ESteamLeaderboardSortMethod
/// Size: 0x01 (1 bytes)
enum class ESteamLeaderboardSortMethod : uint8_t
{
	ESteamLeaderboardSortMethod__None                                                = 0,
	ESteamLeaderboardSortMethod__Ascending                                           = 1,
	ESteamLeaderboardSortMethod__Descending                                          = 2
};

/// Enum /Script/SteamCore.ESteamLeaderboardDataRequest
/// Size: 0x01 (1 bytes)
enum class ESteamLeaderboardDataRequest : uint8_t
{
	ESteamLeaderboardDataRequest__Global                                             = 0,
	ESteamLeaderboardDataRequest__GlobalAroundUser                                   = 1,
	ESteamLeaderboardDataRequest__Friends                                            = 2,
	ESteamLeaderboardDataRequest__Users                                              = 3
};

/// Enum /Script/SteamCore.ESteamVoiceResult
/// Size: 0x01 (1 bytes)
enum class ESteamVoiceResult : uint8_t
{
	ESteamVoiceResult__OK                                                            = 0,
	ESteamVoiceResult__NotInitialized                                                = 1,
	ESteamVoiceResult__NotRecording                                                  = 2,
	ESteamVoiceResult__NoData                                                        = 3,
	ESteamVoiceResult__BufferTooSmall                                                = 4,
	ESteamVoiceResult__DataCorrupted                                                 = 5,
	ESteamVoiceResult__Restricted                                                    = 6,
	ESteamVoiceResult__UnsupportedCodec                                              = 7,
	ESteamVoiceResult__ReceiverOutOfDate                                             = 8,
	ESteamVoiceResult__ReceiverDidNotAnswer                                          = 9
};

/// Enum /Script/SteamCore.ESteamCoreIdentical
/// Size: 0x01 (1 bytes)
enum class ESteamCoreIdentical : uint8_t
{
	ESteamCoreIdentical__Identical                                                   = 0,
	ESteamCoreIdentical__NotIdentical                                                = 1
};

/// Enum /Script/SteamCore.ESteamCoreValid
/// Size: 0x01 (1 bytes)
enum class ESteamCoreValid : uint8_t
{
	ESteamCoreValid__Valid                                                           = 0,
	ESteamCoreValid__NotValid                                                        = 1
};

/// Enum /Script/SteamCore.ESteamUniverse
/// Size: 0x01 (1 bytes)
enum class ESteamUniverse : uint8_t
{
	ESteamUniverse__Invalid                                                          = 0,
	ESteamUniverse__Public                                                           = 1,
	ESteamUniverse__Beta                                                             = 2,
	ESteamUniverse__Internal                                                         = 3,
	ESteamUniverse__Dev                                                              = 4,
	ESteamUniverse__Max                                                              = 5
};

/// Enum /Script/SteamCore.ESteamNotificationPosition
/// Size: 0x01 (1 bytes)
enum class ESteamNotificationPosition : uint8_t
{
	ESteamNotificationPosition__TopLeft                                              = 0,
	ESteamNotificationPosition__TopRight                                             = 1,
	ESteamNotificationPosition__BottomLeft                                           = 2,
	ESteamNotificationPosition__BottomRight                                          = 3
};

/// Enum /Script/SteamCore.ESteamGamepadTextInputMode
/// Size: 0x01 (1 bytes)
enum class ESteamGamepadTextInputMode : uint8_t
{
	ESteamGamepadTextInputMode__Normal                                               = 0,
	ESteamGamepadTextInputMode__Password                                             = 1
};

/// Enum /Script/SteamCore.ESteamGamepadTextInputLineMode
/// Size: 0x01 (1 bytes)
enum class ESteamGamepadTextInputLineMode : uint8_t
{
	ESteamGamepadTextInputLineMode__SingleLine                                       = 0,
	ESteamGamepadTextInputLineMode__MultipleLines                                    = 1
};

/// Enum /Script/SteamCore.ESteamTextFilteringContext
/// Size: 0x01 (1 bytes)
enum class ESteamTextFilteringContext : uint8_t
{
	ESteamTextFilteringContext__k_ETextFilteringContextUnknown                       = 0,
	ESteamTextFilteringContext__k_ETextFilteringContextGameContent                   = 1,
	ESteamTextFilteringContext__k_ETextFilteringContextChat                          = 2,
	ESteamTextFilteringContext__k_ETextFilteringContextName                          = 3
};

/// Enum /Script/SteamCore.ESteamBroadcastUploadResult
/// Size: 0x01 (1 bytes)
enum class ESteamBroadcastUploadResult : uint8_t
{
	ESteamBroadcastUploadResult__None                                                = 0,
	ESteamBroadcastUploadResult__OK                                                  = 1,
	ESteamBroadcastUploadResult__InitFailed                                          = 2,
	ESteamBroadcastUploadResult__FrameFailed                                         = 3,
	ESteamBroadcastUploadResult__Timeout                                             = 4,
	ESteamBroadcastUploadResult__BandwidthExceeded                                   = 5,
	ESteamBroadcastUploadResult__LowFPS                                              = 6,
	ESteamBroadcastUploadResult__MissingKeyFrames                                    = 7,
	ESteamBroadcastUploadResult__NoConnection                                        = 8,
	ESteamBroadcastUploadResult__RelayFailed                                         = 9,
	ESteamBroadcastUploadResult__SettingsChanged                                     = 10,
	ESteamBroadcastUploadResult__MissingAudio                                        = 11,
	ESteamBroadcastUploadResult__TooFarBehind                                        = 12,
	ESteamBroadcastUploadResult__TranscodeBehind                                     = 13
};

/// Struct /Script/SteamCore.SteamInventoryResult
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamInventoryResult
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamInventoryResultReady
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSteamInventoryResultReady
{ 
	FSteamInventoryResult                              Handle;                                                     // 0x0000   (0x0004)  
	ESteamResult                                       Result;                                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.SteamInventoryFullUpdate
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamInventoryFullUpdate
{ 
	FSteamInventoryResult                              Handle;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamInventoryStartPurchaseResult
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSteamInventoryStartPurchaseResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            OrderId;                                                    // 0x0008   (0x0010)  
	FString                                            TransactionId;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/SteamCore.SteamInventoryRequestPricesResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSteamInventoryRequestPricesResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Currency;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.SteamID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSteamID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamInventoryEligiblePromoItemDefIDs
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSteamInventoryEligiblePromoItemDefIDs
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamID;                                                    // 0x0008   (0x0008)  
	int32_t                                            NumEligiblePromoItemDefs;                                   // 0x0010   (0x0004)  
	bool                                               bCachedData;                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.SteamAppInstalled
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamAppInstalled
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamAppUninstalled
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamAppUninstalled
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.FileDetailsResult
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FFileDetailsResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            FileSize;                                                   // 0x0004   (0x0004)  
	FString                                            SHA;                                                        // 0x0008   (0x0010)  
	TArray<int32_t>                                    Flags;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/SteamCore.DLCInstalled
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FDLCInstalled
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.GameOverlayActivated
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGameOverlayActivated
{ 
	bool                                               bActive;                                                    // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.AvatarImageLoaded
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAvatarImageLoaded
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	class UTexture2D*                                  Image;                                                      // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Struct /Script/SteamCore.GameServerChangeRequested
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameServerChangeRequested
{ 
	FString                                            Server;                                                     // 0x0000   (0x0010)  
	FString                                            Password;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCore.GameConnectedFriendChatMsg
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameConnectedFriendChatMsg
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
	int32_t                                            MessageID;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.GameLobbyJoinRequested
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameLobbyJoinRequested
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDFriend;                                              // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.GameRichPresenceJoinRequested
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameRichPresenceJoinRequested
{ 
	FSteamID                                           SteamIDFriend;                                              // 0x0000   (0x0008)  
	FString                                            Connect;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.PersonaStateChange
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPersonaStateChange
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	TArray<ESteamPersonaChange>                        Flags;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.ClanOfficerListResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FClanOfficerListResponse
{ 
	FSteamID                                           SteamIDClan;                                                // 0x0000   (0x0008)  
	int32_t                                            Officers;                                                   // 0x0008   (0x0004)  
	bool                                               bSuccess;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.FriendRichPresenceUpdate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FFriendRichPresenceUpdate
{ 
	FSteamID                                           SteamIDFriend;                                              // 0x0000   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.GameConnectedClanChatMsg
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameConnectedClanChatMsg
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
	FSteamID                                           SteamIDClanChat;                                            // 0x0008   (0x0008)  
	int32_t                                            MessageID;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.GameConnectedChatJoin
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameConnectedChatJoin
{ 
	FSteamID                                           SteamIDClanChat;                                            // 0x0000   (0x0008)  
	FSteamID                                           SteamIDUser;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.GameConnectedChatLeave
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameConnectedChatLeave
{ 
	FSteamID                                           SteamIDClanChat;                                            // 0x0000   (0x0008)  
	FSteamID                                           SteamIDUser;                                                // 0x0008   (0x0008)  
	bool                                               bKicked;                                                    // 0x0010   (0x0001)  
	bool                                               bDropped;                                                   // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.DownloadClanActivityCountsResult
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FDownloadClanActivityCountsResult
{ 
	bool                                               bSuccess;                                                   // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.JoinClanChatRoomCompletionResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FJoinClanChatRoomCompletionResult
{ 
	FSteamID                                           SteamIDClanChat;                                            // 0x0000   (0x0008)  
	ESteamChatRoomEnterResponse                        ChatRoomEnterResponse;                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.SetPersonaNameResponse
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FSetPersonaNameResponse
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	bool                                               bSuccess;                                                   // 0x0001   (0x0001)  
	bool                                               bLocalSuccess;                                              // 0x0002   (0x0001)  
};

/// Struct /Script/SteamCore.FriendsGetFollowerCount
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FFriendsGetFollowerCount
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamID;                                                    // 0x0008   (0x0008)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.FriendsIsFollowing
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FFriendsIsFollowing
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamID;                                                    // 0x0008   (0x0008)  
	bool                                               bIsFollowing;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.FriendsEnumerateFollowingList
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FFriendsEnumerateFollowingList
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSteamID>                                   SteamIDs;                                                   // 0x0008   (0x0010)  
	int32_t                                            Results;                                                    // 0x0018   (0x0004)  
	int32_t                                            TotalResult;                                                // 0x001C   (0x0004)  
};

/// Struct /Script/SteamCore.SearchForGameProgressCallback
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSearchForGameProgressCallback
{ 
	FString                                            SearchID;                                                   // 0x0000   (0x0010)  
	ESteamResult                                       Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FSteamID                                           LobbyID;                                                    // 0x0018   (0x0008)  
	FSteamID                                           SteamIDEndedSearch;                                         // 0x0020   (0x0008)  
	int32_t                                            SecondsRemainingEstimate;                                   // 0x0028   (0x0004)  
	int32_t                                            PlayersSearching;                                           // 0x002C   (0x0004)  
};

/// Struct /Script/SteamCore.SearchForGameResultCallback
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSearchForGameResultCallback
{ 
	FString                                            SearchID;                                                   // 0x0000   (0x0010)  
	ESteamResult                                       Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            CountPlayersInGame;                                         // 0x0014   (0x0004)  
	int32_t                                            CountAcceptedGame;                                          // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FSteamID                                           SteamIDHost;                                                // 0x0020   (0x0008)  
	bool                                               bFinalCallback;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.RequestPlayersForGameProgressCallback
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRequestPlayersForGameProgressCallback
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            SearchID;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.RequestPlayersForGameResultCallback
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRequestPlayersForGameResultCallback
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            SearchID;                                                   // 0x0008   (0x0010)  
	FSteamID                                           SteamIDPlayerFound;                                         // 0x0018   (0x0008)  
	FSteamID                                           SteamIDLobby;                                               // 0x0020   (0x0008)  
	ESteamPlayerAcceptState                            PlayerAcceptState;                                          // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            PlayerIndex;                                                // 0x002C   (0x0004)  
	int32_t                                            TotalPlayersFound;                                          // 0x0030   (0x0004)  
	int32_t                                            TotalPlayersAcceptedGame;                                   // 0x0034   (0x0004)  
	int32_t                                            SuggestedTeamIndex;                                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            UniqueGameID;                                               // 0x0040   (0x0010)  
};

/// Struct /Script/SteamCore.RequestPlayersForGameFinalResultCallback
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRequestPlayersForGameFinalResultCallback
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            SearchID;                                                   // 0x0008   (0x0010)  
	FString                                            UniqueGameID;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/SteamCore.SubmitPlayerResultResultCallback
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSubmitPlayerResultResultCallback
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            UniqueGameID;                                               // 0x0008   (0x0010)  
	FSteamID                                           SteamIDPlayer;                                              // 0x0018   (0x0008)  
};

/// Struct /Script/SteamCore.EndGameResultCallback
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FEndGameResultCallback
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            UniqueGameID;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.AssociateWithClanResult
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FAssociateWithClanResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.ComputeNewPlayerCompatibilityResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FComputeNewPlayerCompatibilityResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            PlayersThatDontLikeCandidate;                               // 0x0004   (0x0004)  
	int32_t                                            PlayersThatCandidateDoesntLike;                             // 0x0008   (0x0004)  
	int32_t                                            ClanPlayersThatDontLikeCandidate;                           // 0x000C   (0x0004)  
	FSteamID                                           SteamIDCandidate;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.GSPolicyResponse
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGSPolicyResponse
{ 
	bool                                               BSecure;                                                    // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.GSClientGroupStatus
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGSClientGroupStatus
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
	FSteamID                                           SteamIDGroup;                                               // 0x0008   (0x0008)  
	bool                                               bMember;                                                    // 0x0010   (0x0001)  
	bool                                               bOfficer;                                                   // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.ValidateAuthTicketResponse
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FValidateAuthTicketResponse
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	ESteamAuthSessionResponse                          AuthSessionResponse;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FSteamID                                           OwnerSteamID;                                               // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.GSClientApprove
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGSClientApprove
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	FSteamID                                           OwnerSteamID;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.GSClientDeny
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGSClientDeny
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	ESteamDenyReason                                   DenyReason;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FString                                            OptionalText;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCore.GSStatsReceived
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGSStatsReceived
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamIDUser;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.GSStatsStored
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGSStatsStored
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamIDUser;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.GSStatsUnloaded
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FGSStatsUnloaded
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/SteamCore.FavoritesListAccountsUpdated
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FFavoritesListAccountsUpdated
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.FavoritesListChanged
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FFavoritesListChanged
{ 
	FString                                            IP;                                                         // 0x0000   (0x0010)  
	int32_t                                            QueryPort;                                                  // 0x0010   (0x0004)  
	int32_t                                            ConnectionPort;                                             // 0x0014   (0x0004)  
	int32_t                                            AppID;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<ESteamFavoriteFlags>                        Flags;                                                      // 0x0020   (0x0010)  
	bool                                               bAdd;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FSteamID                                           SteamID;                                                    // 0x0038   (0x0008)  
};

/// Struct /Script/SteamCore.LobbyChatMsg
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLobbyChatMsg
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDUser;                                                // 0x0008   (0x0008)  
	ESteamChatEntryType                                ChatEntryType;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            ChatID;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/SteamCore.LobbyChatUpdate
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FLobbyChatUpdate
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDUserChanged;                                         // 0x0008   (0x0008)  
	FSteamID                                           SteamIDMakingChange;                                        // 0x0010   (0x0008)  
	TArray<ESteamChatMemberStateChange>                ChatMemberStateChange;                                      // 0x0018   (0x0010)  
};

/// Struct /Script/SteamCore.LobbyDataUpdate
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLobbyDataUpdate
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDMember;                                              // 0x0008   (0x0008)  
	bool                                               bSuccess;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.LobbyEnterData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLobbyEnterData
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	bool                                               bLocked;                                                    // 0x0008   (0x0001)  
	ESteamChatRoomEnterResponse                        ChatRoomEnterResponse;                                      // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.LobbyGameCreated
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FLobbyGameCreated
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDGameServer;                                          // 0x0008   (0x0008)  
	FString                                            IP;                                                         // 0x0010   (0x0010)  
	int32_t                                            Port;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.SteamGameID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSteamGameID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.LobbyInviteData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLobbyInviteData
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
	FSteamID                                           SteamIDLobby;                                               // 0x0008   (0x0008)  
	FSteamGameID                                       GameID;                                                     // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.LobbyKickedData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLobbyKickedData
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDAdmin;                                               // 0x0008   (0x0008)  
	bool                                               bKickedDueToDisconnect;                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.LobbyMatchList
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FLobbyMatchList
{ 
	int32_t                                            LobbiesMatching;                                            // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.CreateLobbyData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCreateLobbyData
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamIDLobby;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.JoinLobbyData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FJoinLobbyData
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	bool                                               bLocked;                                                    // 0x0008   (0x0001)  
	ESteamChatRoomEnterResponse                        ChatRoomEnterResponse;                                      // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.SteamSessionSetting
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSteamSessionSetting
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/SteamCore.SteamSessionResult
/// Size: 0x0118 (280 bytes) (0x000000 - 0x000118) align 8 MaxSize: 0x0118
struct FSteamSessionResult
{ 
	FBlueprintSessionResult                            Result;                                                     // 0x0000   (0x0108)  
	TArray<FSteamSessionSetting>                       SessionSettings;                                            // 0x0108   (0x0010)  
};

/// Struct /Script/SteamCore.SteamServerAddr
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FSteamServerAddr
{ 
	FString                                            IP;                                                         // 0x0000   (0x0010)  
	int32_t                                            Port;                                                       // 0x0010   (0x0004)  
	int32_t                                            QueryPort;                                                  // 0x0014   (0x0004)  
	FString                                            ConnectionAddressString;                                    // 0x0018   (0x0010)  
	FString                                            SteamP2PAddr;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/SteamCore.GameServerItem
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FGameServerItem
{ 
	FString                                            ServerName;                                                 // 0x0000   (0x0010)  
	FString                                            MapName;                                                    // 0x0010   (0x0010)  
	FString                                            GameDescription;                                            // 0x0020   (0x0010)  
	FString                                            GameTags;                                                   // 0x0030   (0x0010)  
	FSteamServerAddr                                   SteamServerAddr;                                            // 0x0040   (0x0038)  
	int32_t                                            Ping;                                                       // 0x0078   (0x0004)  
	int32_t                                            Players;                                                    // 0x007C   (0x0004)  
	int32_t                                            MaxPlayers;                                                 // 0x0080   (0x0004)  
	int32_t                                            BotPlayers;                                                 // 0x0084   (0x0004)  
	int32_t                                            ServerVersion;                                              // 0x0088   (0x0004)  
	bool                                               bPassword;                                                  // 0x008C   (0x0001)  
	bool                                               BSecure;                                                    // 0x008D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x22];                                      // 0x008E   (0x0022)  MISSED
};

/// Struct /Script/SteamCore.GameServerRule
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameServerRule
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCore.PlaybackStatusHasChanged
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FPlaybackStatusHasChanged
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.VolumeHasChanged
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FVolumeHasChanged
{ 
	float                                              Volume;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.P2PSessionRequest
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FP2PSessionRequest
{ 
	FSteamID                                           SteamIDRemote;                                              // 0x0000   (0x0008)  
};

/// Struct /Script/SteamCore.P2PSessionConnectFail
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FP2PSessionConnectFail
{ 
	FSteamID                                           SteamIDRemote;                                              // 0x0000   (0x0008)  
	ESteamP2PSessionError                              P2PSessionError;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.PartyBeaconID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FPartyBeaconID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.JoinPartyData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FJoinPartyData
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPartyBeaconID                                     BeaconID;                                                   // 0x0008   (0x0008)  
	FSteamID                                           SteamIDBeaconOwner;                                         // 0x0010   (0x0008)  
	FString                                            ConnectString;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/SteamCore.CreateBeaconData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCreateBeaconData
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPartyBeaconID                                     BeaconID;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.ReservationNotificationData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FReservationNotificationData
{ 
	FPartyBeaconID                                     BeaconID;                                                   // 0x0000   (0x0008)  
	FSteamID                                           SteamIDJoiner;                                              // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.ChangeNumOpenSlotsData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FChangeNumOpenSlotsData
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.SteamRemotePlaySessionConnected
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamRemotePlaySessionConnected
{ 
	int32_t                                            SessionID;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamRemotePlaySessionDisconnected
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamRemotePlaySessionDisconnected
{ 
	int32_t                                            SessionID;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.PublishedFileID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FPublishedFileID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.RemoteStorageUnsubscribePublishedFileResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRemoteStorageUnsubscribePublishedFileResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.RemoteStorageSubscribePublishedFileResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRemoteStorageSubscribePublishedFileResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.RemoteStoragePublishedFileUnsubscribed
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRemoteStoragePublishedFileUnsubscribed
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.RemoteStoragePublishedFileSubscribed
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRemoteStoragePublishedFileSubscribed
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.RemoteStorageFileWriteAsyncComplete
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FRemoteStorageFileWriteAsyncComplete
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.RemoteStorageFileReadAsyncComplete
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRemoteStorageFileReadAsyncComplete
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Offset;                                                     // 0x0004   (0x0004)  
	int32_t                                            Read;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x000C   (0x000C)  MISSED
};

/// Struct /Script/SteamCore.SteamUGCHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSteamUGCHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.RemoteStorageDownloadUGCResult
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRemoteStorageDownloadUGCResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamUGCHandle                                    FileHandle;                                                 // 0x0008   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0010   (0x0004)  
	int32_t                                            SizeInBytes;                                                // 0x0014   (0x0004)  
	FString                                            Filename;                                                   // 0x0018   (0x0010)  
	FSteamID                                           SteamIDOwner;                                               // 0x0028   (0x0008)  
};

/// Struct /Script/SteamCore.RemoteStorageFileShareResult
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRemoteStorageFileShareResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamUGCHandle                                    File;                                                       // 0x0008   (0x0008)  
	FString                                            Filename;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCore.ScreenshotHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FScreenshotHandle
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.ScreenshotReady
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FScreenshotReady
{ 
	FScreenshotHandle                                  Handle;                                                     // 0x0000   (0x0004)  
	ESteamResult                                       Result;                                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.ScreenshotRequested
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FScreenshotRequested
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.UserFavoriteItemsListChanged
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FUserFavoriteItemsListChanged
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	bool                                               bWasAddRequest;                                             // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.CreateItemResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FCreateItemResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	bool                                               bUserNeedsToAcceptWorkshopLegalAgreement;                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.SetUserItemVoteResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSetUserItemVoteResult
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	bool                                               bVoteUp;                                                    // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.GetUserItemVoteResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGetUserItemVoteResult
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	bool                                               bVotedUp;                                                   // 0x0009   (0x0001)  
	bool                                               bVotedDown;                                                 // 0x000A   (0x0001)  
	bool                                               bVoteSkipped;                                               // 0x000B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.UGCQueryHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUGCQueryHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamUGCQueryCompleted
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSteamUGCQueryCompleted
{ 
	FUGCQueryHandle                                    Handle;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            NumResultsReturned;                                         // 0x000C   (0x0004)  
	int32_t                                            TotalMatchingResults;                                       // 0x0010   (0x0004)  
	bool                                               bCachedData;                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.AddAppDependencyResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAddAppDependencyResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.RemoveAppDependencyResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRemoveAppDependencyResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.AddUGCDependencyResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAddUGCDependencyResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	FPublishedFileID                                   ChildPublishedFileId;                                       // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.RemoveUGCDependencyResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRemoveUGCDependencyResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	FPublishedFileID                                   ChildPublishedFileId;                                       // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.UGCDeleteItemResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FUGCDeleteItemResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.GetAppDependenciesResult
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGetAppDependenciesResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	TArray<int32_t>                                    AppIDs;                                                     // 0x0010   (0x0010)  
	int32_t                                            NumAppDependencies;                                         // 0x0020   (0x0004)  
	int32_t                                            TotalNumAppDependencies;                                    // 0x0024   (0x0004)  
};

/// Struct /Script/SteamCore.SubmitItemUpdateResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSubmitItemUpdateResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	bool                                               bUserNeedsToAcceptWorkshopLegalAgreement;                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.StartPlaytimeTrackingResult
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FStartPlaytimeTrackingResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.StopPlaytimeTrackingResult
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FStopPlaytimeTrackingResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.DownloadItemResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FDownloadItemResult
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.ItemInstalled
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FItemInstalled
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.ClientGameServerDeny
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FClientGameServerDeny
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            GameServerIP;                                               // 0x0008   (0x0010)  
	int32_t                                            GameServerPort;                                             // 0x0018   (0x0004)  
	bool                                               BSecure;                                                    // 0x001C   (0x0001)  
	ESteamDenyReason                                   Reason;                                                     // 0x001D   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x001E   (0x0002)  MISSED
};

/// Struct /Script/SteamCore.GameWebCallback
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameWebCallback
{ 
	FString                                            URL;                                                        // 0x0000   (0x0010)  
};

/// Struct /Script/SteamCore.SteamTicketHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamTicketHandle
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.GetAuthSessionTicketResponse
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGetAuthSessionTicketResponse
{ 
	FSteamTicketHandle                                 AuthTicket;                                                 // 0x0000   (0x0004)  
	ESteamResult                                       Result;                                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.IPCFailure
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FIPCFailure
{ 
	ESteamFailureType                                  FailureType;                                                // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.LicensesUpdated
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FLicensesUpdated
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.MicroTxnAuthorizationResponse
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMicroTxnAuthorizationResponse
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            OrderId;                                                    // 0x0008   (0x0010)  
	bool                                               bAuthorized;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.SteamServersConnected
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FSteamServersConnected
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.SteamServerConnectFailure
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FSteamServerConnectFailure
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	bool                                               bStillRetrying;                                             // 0x0001   (0x0001)  
};

/// Struct /Script/SteamCore.SteamServersDisconnected
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FSteamServersDisconnected
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.EncryptedAppTicketResponse
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FEncryptedAppTicketResponse
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.StoreAuthURLResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FStoreAuthURLResponse
{ 
	FString                                            URL;                                                        // 0x0000   (0x0010)  
};

/// Struct /Script/SteamCore.UserAchievementIconFetched
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FUserAchievementIconFetched
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	FString                                            AchievementName;                                            // 0x0008   (0x0010)  
	bool                                               bAchieved;                                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	class UTexture2D*                                  Icon;                                                       // 0x0020   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.UserAchievementStored
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FUserAchievementStored
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	bool                                               bGroupAchievement;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FString                                            AchievementName;                                            // 0x0010   (0x0010)  
	int32_t                                            CurrentProgress;                                            // 0x0020   (0x0004)  
	int32_t                                            MaxProgress;                                                // 0x0024   (0x0004)  
};

/// Struct /Script/SteamCore.UserStatsReceived
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FUserStatsReceived
{ 
	FSteamID                                           GameID;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FSteamID                                           SteamID;                                                    // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.UserStatsStored
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FUserStatsStored
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.UserStatsUnloaded
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUserStatsUnloaded
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/SteamCore.SteamLeaderboard
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSteamLeaderboard
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamLeaderboardEntries
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSteamLeaderboardEntries
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.LeaderboardScoresDownloaded
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLeaderboardScoresDownloaded
{ 
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0000   (0x0008)  
	FSteamLeaderboardEntries                           SteamLeaderboardEntries;                                    // 0x0008   (0x0008)  
	int32_t                                            EntryCount;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.LeaderboardScoresDownloadedForUsers
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLeaderboardScoresDownloadedForUsers
{ 
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0000   (0x0008)  
	FSteamLeaderboardEntries                           SteamLeaderboardEntries;                                    // 0x0008   (0x0008)  
	int32_t                                            EntryCount;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.RequestUserStatsData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRequestUserStatsData
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FSteamID                                           SteamIDUser;                                                // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.LeaderboardScoreUploaded
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FLeaderboardScoreUploaded
{ 
	bool                                               bSuccess;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0008   (0x0008)  
	int32_t                                            Score;                                                      // 0x0010   (0x0004)  
	bool                                               bScoreChanged;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	int32_t                                            GlobalRankNew;                                              // 0x0018   (0x0004)  
	int32_t                                            GlobalRankPrevious;                                         // 0x001C   (0x0004)  
};

/// Struct /Script/SteamCore.AttachLeaderboardUGCData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAttachLeaderboardUGCData
{ 
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.LeaderboardFindResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLeaderboardFindResult
{ 
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0000   (0x0008)  
	bool                                               bLeaderboardFound;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.FindOrCreateLeaderboardData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FFindOrCreateLeaderboardData
{ 
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0000   (0x0008)  
	bool                                               bLeaderboardFound;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.NumberOfCurrentPlayers
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNumberOfCurrentPlayers
{ 
	bool                                               bSuccess;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Players;                                                    // 0x0004   (0x0004)  
};

/// Struct /Script/SteamCore.GlobalAchievementPercentagesReady
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGlobalAchievementPercentagesReady
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.GlobalStatsReceived
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGlobalStatsReceived
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.CheckFileSignature
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FCheckFileSignature
{ 
	ESteamCheckFileSignature                           CheckFileSignature;                                         // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.GamepadTextInputDismissed
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGamepadTextInputDismissed
{ 
	bool                                               bSubmitted;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            SubmittedText;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/SteamCore.IPCountry
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FIPCountry
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.LowBatteryPower
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FLowBatteryPower
{ 
	int32_t                                            MinutesBatteryLeft;                                         // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamShutdown
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FSteamShutdown
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.GetOPFSettingsResult
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGetOPFSettingsResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            AppID;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/SteamCore.GetVideoURLResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGetVideoURLResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            AppID;                                                      // 0x0004   (0x0004)  
	FString                                            URL;                                                        // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.SteamFriendsGroupID
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 2 MaxSize: 0x0002
struct FSteamFriendsGroupID
{ 
	unsigned char                                      UnknownData00_2[0x2];                                       // 0x0000   (0x0002)  MISSED
};

/// Struct /Script/SteamCore.InputAnalogActionHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FInputAnalogActionHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.InputDigitalActionHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FInputDigitalActionHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.InputActionSetHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FInputActionSetHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.InputHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FInputHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.InputMotionData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FInputMotionData
{ 
	float                                              RotQuatX;                                                   // 0x0000   (0x0004)  
	float                                              RotQuatY;                                                   // 0x0004   (0x0004)  
	float                                              RotQuatZ;                                                   // 0x0008   (0x0004)  
	float                                              RotQuatW;                                                   // 0x000C   (0x0004)  
	float                                              PosAccelX;                                                  // 0x0010   (0x0004)  
	float                                              PosAccelY;                                                  // 0x0014   (0x0004)  
	float                                              PosAccelZ;                                                  // 0x0018   (0x0004)  
	float                                              RotVelX;                                                    // 0x001C   (0x0004)  
	float                                              RotVelY;                                                    // 0x0020   (0x0004)  
	float                                              RotVelZ;                                                    // 0x0024   (0x0004)  
};

/// Struct /Script/SteamCore.InputDigitalActionData
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FInputDigitalActionData
{ 
	bool                                               bState;                                                     // 0x0000   (0x0001)  
	bool                                               bActive;                                                    // 0x0001   (0x0001)  
};

/// Struct /Script/SteamCore.InputAnalogActionData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FInputAnalogActionData
{ 
	ESteamCoreInputSourceMode                          Mode;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              X;                                                          // 0x0004   (0x0004)  
	float                                              Y;                                                          // 0x0008   (0x0004)  
	bool                                               bActive;                                                    // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.SteamItemInstanceID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSteamItemInstanceID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamItemDef
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamItemDef
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamItemDetails
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSteamItemDetails
{ 
	FSteamItemInstanceID                               InstanceID;                                                 // 0x0000   (0x0008)  
	FSteamItemDef                                      Definition;                                                 // 0x0008   (0x0004)  
	int32_t                                            Quantity;                                                   // 0x000C   (0x0004)  
	SDK_UNDEFINED(16,403) /* TArray<TEnumAsByte<ESteamCoreItemFlags>> */ __um(Flags);                              // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCore.SteamP2PSessionState
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSteamP2PSessionState
{ 
	bool                                               bConnectionActive;                                          // 0x0000   (0x0001)  
	bool                                               bConnecting;                                                // 0x0001   (0x0001)  
	ESteamP2PSessionError                              P2PSessionError;                                            // 0x0002   (0x0001)  
	bool                                               bUsingRelay;                                                // 0x0003   (0x0001)  
	int32_t                                            BytesQueuedForSend;                                         // 0x0004   (0x0004)  
	int32_t                                            PacketsQueuedForSend;                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            RemoteIP;                                                   // 0x0010   (0x0010)  
	int32_t                                            RemotePort;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.SteamNetworkPingLocation
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSteamNetworkPingLocation
{ 
	FString                                            Location;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/SteamCore.SteamParentalSettingsChanged
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FSteamParentalSettingsChanged
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.SteamPartyBeaconLocation
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSteamPartyBeaconLocation
{ 
	ESteamPartiesBeaconLocationType                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            LocationId;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.UGCFileWriteStreamHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUGCFileWriteStreamHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamSessionSearchSetting
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSteamSessionSearchSetting
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/SteamCore.HostPingData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FHostPingData
{ 
	FString                                            HostString;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/SteamCore.SteamInventoryUpdateHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSteamInventoryUpdateHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.UGCUpdateHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUGCUpdateHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamUGCDetails
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FSteamUGCDetails
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	ESteamWorkshopFileType                             FileType;                                                   // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
	int32_t                                            CreatorAppID;                                               // 0x000C   (0x0004)  
	int32_t                                            ConsumerAppID;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            Title;                                                      // 0x0018   (0x0010)  
	FString                                            Description;                                                // 0x0028   (0x0010)  
	FSteamID                                           SteamIDOwner;                                               // 0x0038   (0x0008)  
	int32_t                                            TimeCreated;                                                // 0x0040   (0x0004)  
	int32_t                                            TimeUpdated;                                                // 0x0044   (0x0004)  
	int32_t                                            TimeAddedToUserList;                                        // 0x0048   (0x0004)  
	ESteamRemoteStoragePublishedFileVisibility         Visibility;                                                 // 0x004C   (0x0001)  
	bool                                               bBanned;                                                    // 0x004D   (0x0001)  
	bool                                               bAcceptedForUse;                                            // 0x004E   (0x0001)  
	bool                                               bTagsTruncated;                                             // 0x004F   (0x0001)  
	TArray<FString>                                    Tags;                                                       // 0x0050   (0x0010)  
	FSteamUGCHandle                                    File;                                                       // 0x0060   (0x0008)  
	FSteamUGCHandle                                    PreviewFile;                                                // 0x0068   (0x0008)  
	FString                                            Filename;                                                   // 0x0070   (0x0010)  
	int32_t                                            FileSize;                                                   // 0x0080   (0x0004)  
	int32_t                                            PreviewFileSize;                                            // 0x0084   (0x0004)  
	FString                                            URL;                                                        // 0x0088   (0x0010)  
	int32_t                                            VotesUp;                                                    // 0x0098   (0x0004)  
	int32_t                                            VotesDown;                                                  // 0x009C   (0x0004)  
	float                                              Score;                                                      // 0x00A0   (0x0004)  
	int32_t                                            NumChildren;                                                // 0x00A4   (0x0004)  
};

/// Struct /Script/SteamCore.SteamLeaderboardEntry
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSteamLeaderboardEntry
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	int32_t                                            GlobalRank;                                                 // 0x0008   (0x0004)  
	int32_t                                            Score;                                                      // 0x000C   (0x0004)  
	int32_t                                            Details;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FSteamUGCHandle                                    UGCHandle;                                                  // 0x0018   (0x0008)  
};

/// Class /Script/SteamCore.SteamCoreSubsystem
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/SteamCore.AppList
/// Size: 0x00A8 (168 bytes) (0x000048 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAppList : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,404) /* FMulticastInlineDelegate */ __um(SteamAppInstalled);                                  // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,405) /* FMulticastInlineDelegate */ __um(SteamAppUninstalled);                                // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0068   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.AppList.GetNumInstalledApps
	int32_t GetNumInstalledApps() // [0x8dbe80] Final|Native|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/SteamCore.AppList.GetInstalledApps
	int32_t GetInstalledApps(TArray<int32_t>& AppIDs, int32_t MaxAppIDs) // [0x8db950] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(TArray<int32_t>&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(AppIDs, MaxAppIDs);
	}
	// Function /Script/SteamCore.AppList.GetAppName
	int32_t GetAppName(int32_t AppID, FString& Name) // [0x8d94c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(int32_t, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(AppID, Name);
	}
	// Function /Script/SteamCore.AppList.GetAppInstallDir
	int32_t GetAppInstallDir(int32_t AppID, FString& Directory) // [0x8d92d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(int32_t, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(AppID, Directory);
	}
	// Function /Script/SteamCore.AppList.GetAppBuildId
	int32_t GetAppBuildId(int32_t AppID) // [0x8d9200] Final|Native|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(AppID);
	}
};

/// Class /Script/SteamCore.Apps
/// Size: 0x00A8 (168 bytes) (0x000048 - 0x0000A8) align 8 MaxSize: 0x00A8
class UApps : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,406) /* FMulticastInlineDelegate */ __um(DLCInstalled);                                       // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,407) /* FMulticastInlineDelegate */ __um(FileDetailsResultDelegate);                          // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0068   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.Apps.UninstallDLC
	void UninstallDLC(int32_t AppID) // [0x8dd7d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(AppID);
	}
	// Function /Script/SteamCore.Apps.MarkContentCorrupt
	bool MarkContentCorrupt(bool bMissingFilesOnly) // [0x8dcc70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(bMissingFilesOnly);
	}
	// Function /Script/SteamCore.Apps.InstallDLC
	void InstallDLC(int32_t AppID) // [0x8dc4e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(AppID);
	}
	// Function /Script/SteamCore.Apps.GetLaunchQueryParam
	FString GetLaunchQueryParam(FString Key) // [0x8dbcc0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(Key);
	}
	// Function /Script/SteamCore.Apps.GetLaunchCommandLine
	int32_t GetLaunchCommandLine(FString& CommandLine) // [0x8dbc10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(CommandLine);
	}
	// Function /Script/SteamCore.Apps.GetInstalledDepots
	int32_t GetInstalledDepots(int32_t AppID, int32_t MaxDepots, TArray<int32_t>& Depots) // [0x8dba50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(int32_t, int32_t, TArray<int32_t>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(AppID, MaxDepots, Depots);
	}
	// Function /Script/SteamCore.Apps.GetFileDetails
	// void GetFileDetails(FDelegateProperty& Callback, FString Filename);                                                      // [0x8da360] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetEarliestPurchaseUnixTime
	int32_t GetEarliestPurchaseUnixTime(int32_t AppID) // [0x8da2d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(AppID);
	}
	// Function /Script/SteamCore.Apps.GetDlcDownloadProgress
	bool GetDlcDownloadProgress(int32_t AppID, int32_t& BytesDownloaded, int32_t& BytesTotal) // [0x8da1b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t, int32_t&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(AppID, BytesDownloaded, BytesTotal);
	}
	// Function /Script/SteamCore.Apps.GetDLCCount
	int32_t GetDLCCount() // [0x8da180] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func();
	}
	// Function /Script/SteamCore.Apps.GetCurrentGameLanguage
	FString GetCurrentGameLanguage() // [0x8da100] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func();
	}
	// Function /Script/SteamCore.Apps.GetCurrentBetaName
	bool GetCurrentBetaName(FString& Name) // [0x8da050] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(Name);
	}
	// Function /Script/SteamCore.Apps.GetAvailableGameLanguages
	FString GetAvailableGameLanguages() // [0x8d9600] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func();
	}
	// Function /Script/SteamCore.Apps.GetAppOwner
	FSteamID GetAppOwner() // [0x8d95c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSteamID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func();
	}
	// Function /Script/SteamCore.Apps.GetAppInstallDir
	int32_t GetAppInstallDir(int32_t AppID, FString& Folder) // [0x8d93d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(int32_t, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(AppID, Folder);
	}
	// Function /Script/SteamCore.Apps.GetAppBuildId
	int32_t GetAppBuildId() // [0x8d92a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func();
	}
	// Function /Script/SteamCore.Apps.BIsVACBanned
	bool BIsVACBanned() // [0x8d8ec0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func();
	}
	// Function /Script/SteamCore.Apps.BIsTimedTrial
	bool BIsTimedTrial(int32_t& SecondsAllowed, int32_t& SecondsPlayed) // [0x8d8de0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(SecondsAllowed, SecondsPlayed);
	}
	// Function /Script/SteamCore.Apps.BIsSubscribedFromFreeWeekend
	bool BIsSubscribedFromFreeWeekend() // [0x8d8db0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func();
	}
	// Function /Script/SteamCore.Apps.BIsSubscribedFromFamilySharing
	bool BIsSubscribedFromFamilySharing() // [0x8d8d80] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func();
	}
	// Function /Script/SteamCore.Apps.BIsSubscribedApp
	bool BIsSubscribedApp(int32_t AppID) // [0x8d8cf0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(AppID);
	}
	// Function /Script/SteamCore.Apps.BIsSubscribed
	bool BIsSubscribed() // [0x8d8cc0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func();
	}
	// Function /Script/SteamCore.Apps.BIsLowViolence
	bool BIsLowViolence() // [0x8d8c90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func();
	}
	// Function /Script/SteamCore.Apps.BIsDlcInstalled
	bool BIsDlcInstalled(int32_t AppID) // [0x8d8c00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func(AppID);
	}
	// Function /Script/SteamCore.Apps.BIsCybercafe
	bool BIsCybercafe() // [0x8d8bd0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func();
	}
	// Function /Script/SteamCore.Apps.BIsAppInstalled
	bool BIsAppInstalled(int32_t AppID) // [0x8d8b40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func(AppID);
	}
	// Function /Script/SteamCore.Apps.BGetDLCDataByIndex
	bool BGetDLCDataByIndex(int32_t DLC, int32_t& AppID, bool& bAvailable, FString& Name) // [0x8d89c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t, int32_t&, bool&, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func(DLC, AppID, bAvailable, Name);
	}
};

/// Class /Script/SteamCore.SteamCoreAsyncAction
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class USteamCoreAsyncAction : public UBlueprintAsyncActionBase
{ 
public:
	TWeakObjectPtr<class UObject*>                     m_WorldContextObject;                                       // 0x0030   (0x0008)  
};

/// Class /Script/SteamCore.SteamCoreAppsAsyncActionGetFileDetails
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreAppsAsyncActionGetFileDetails : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,408) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreAppsAsyncActionGetFileDetails.HandleCallback
	void HandleCallback(FFileDetailsResult& Data, bool bWasSuccessful) // [0x8dc290] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FFileDetailsResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreAppsAsyncActionGetFileDetails.GetFileDetailsAsync
	USteamCoreAppsAsyncActionGetFileDetails* GetFileDetailsAsync(UObject* WorldContextObject, FString Filename, float Timeout) // [0x8da4c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreAppsAsyncActionGetFileDetails* (*FuncPtr)(UObject*, FString, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, Filename, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreGameMode
/// Size: 0x0308 (776 bytes) (0x000308 - 0x000308) align 8 MaxSize: 0x0308
class ASteamCoreGameMode : public AGameMode
{ 
public:
};

/// Class /Script/SteamCore.SteamCore
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USteamCore : public UObject
{ 
public:
};

/// Class /Script/SteamCore.SteamCoreSettings
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class USteamCoreSettings : public UDeveloperSettings
{ 
public:
	int32_t                                            DisabledSubsystems;                                         // 0x0038   (0x0004)  
	bool                                               bEnabled;                                                   // 0x003C   (0x0001)  
	bool                                               bRelaunchInSteam;                                           // 0x003D   (0x0001)  
	bool                                               bVACEnabled;                                                // 0x003E   (0x0001)  
	bool                                               bAllowP2PPacketRelay;                                       // 0x003F   (0x0001)  
	int32_t                                            P2PConnectionTimeout;                                       // 0x0040   (0x0004)  
	int32_t                                            SteamAppId;                                                 // 0x0044   (0x0004)  
	int32_t                                            SteamDevAppId;                                              // 0x0048   (0x0004)  
	int32_t                                            Port;                                                       // 0x004C   (0x0004)  
	int32_t                                            GameServerQueryPort;                                        // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            GameVersion;                                                // 0x0058   (0x0010)  
};

/// Class /Script/SteamCore.Friends
/// Size: 0x0318 (792 bytes) (0x000048 - 0x000318) align 8 MaxSize: 0x0318
class UFriends : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,409) /* FMulticastInlineDelegate */ __um(AvatarImageLoaded);                                  // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,410) /* FMulticastInlineDelegate */ __um(FriendRichPresenceUpdate);                           // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,411) /* FMulticastInlineDelegate */ __um(GameConnectedChatJoin);                              // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,412) /* FMulticastInlineDelegate */ __um(GameConnectedChatLeave);                             // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,413) /* FMulticastInlineDelegate */ __um(GameConnectedClanChatMsg);                           // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,414) /* FMulticastInlineDelegate */ __um(GameConnectedFriendChatMsg);                         // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,415) /* FMulticastInlineDelegate */ __um(GameLobbyJoinRequested);                             // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,416) /* FMulticastInlineDelegate */ __um(GameOverlayActivated);                               // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,417) /* FMulticastInlineDelegate */ __um(GameRichPresenceJoinRequested);                      // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,418) /* FMulticastInlineDelegate */ __um(GameServerChangeRequested);                          // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,419) /* FMulticastInlineDelegate */ __um(PersonaStateChange);                                 // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,420) /* FMulticastInlineDelegate */ __um(SetPersonaNameResponse);                             // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,421) /* FMulticastInlineDelegate */ __um(JoinClanChatRoomCompletionResult);                   // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,422) /* FMulticastInlineDelegate */ __um(ClanOfficerListResponse);                            // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,423) /* FMulticastInlineDelegate */ __um(DownloadClanActivityCountsResult);                   // 0x0128   (0x0010)  
	unsigned char                                      UnknownData00_7[0x1E0];                                     // 0x0138   (0x01E0)  MISSED


	/// Functions
	// Function /Script/SteamCore.Friends.SetRichPresence
	bool SetRichPresence(FString Key, FString Value) // [0x8dd660] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Key, Value);
	}
	// Function /Script/SteamCore.Friends.SetPlayedWith
	void SetPlayedWith(FSteamID SteamIDUserPlayedWith) // [0x8dd5e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(SteamIDUserPlayedWith);
	}
	// Function /Script/SteamCore.Friends.SetPersonaName
	// void SetPersonaName(FDelegateProperty& Callback, FString Name);                                                          // [0x8dd480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.SetListenForFriendsMessages
	bool SetListenForFriendsMessages(bool bInterceptEnabled) // [0x8dd3f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(bInterceptEnabled);
	}
	// Function /Script/SteamCore.Friends.SetInGameVoiceSpeaking
	void SetInGameVoiceSpeaking(FSteamID SteamIDUser, bool bSpeaking) // [0x8dd330] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamID, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(SteamIDUser, bSpeaking);
	}
	// Function /Script/SteamCore.Friends.SendClanChatMessage
	bool SendClanChatMessage(FSteamID SteamIDClanChat, FString Text) // [0x8dd200] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(SteamIDClanChat, Text);
	}
	// Function /Script/SteamCore.Friends.RequestUserInformation
	bool RequestUserInformation(FSteamID SteamIDUser, bool bRequireNameOnly) // [0x8dd130] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(SteamIDUser, bRequireNameOnly);
	}
	// Function /Script/SteamCore.Friends.RequestFriendRichPresence
	void RequestFriendRichPresence(FSteamID SteamIDFriend) // [0x8dd0b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(SteamIDFriend);
	}
	// Function /Script/SteamCore.Friends.RequestClanOfficerList
	// void RequestClanOfficerList(FDelegateProperty& Callback, FSteamID SteamIDClan);                                          // [0x8dcfb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ReplyToFriendMessage
	bool ReplyToFriendMessage(FSteamID SteamIDFriend, FString MsgToSend) // [0x8dce80] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(SteamIDFriend, MsgToSend);
	}
	// Function /Script/SteamCore.Friends.RegisterProtocolInOverlayBrowser
	bool RegisterProtocolInOverlayBrowser(FString Protocol) // [0x8dcd90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(Protocol);
	}
	// Function /Script/SteamCore.Friends.OpenClanChatWindowInSteam
	bool OpenClanChatWindowInSteam(FSteamID SteamIDClanChat) // [0x8dcd00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(SteamIDClanChat);
	}
	// Function /Script/SteamCore.Friends.LeaveClanChatRoom
	bool LeaveClanChatRoom(FSteamID SteamIDClan) // [0x8dcbe0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(SteamIDClan);
	}
	// Function /Script/SteamCore.Friends.JoinClanChatRoom
	// void JoinClanChatRoom(FDelegateProperty& Callback, FSteamID SteamIDClan);                                                // [0x8dcae0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.IsUserInSource
	bool IsUserInSource(FSteamID SteamIDUser, FSteamID SteamIDSource) // [0x8dca10] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(SteamIDUser, SteamIDSource);
	}
	// Function /Script/SteamCore.Friends.IsFollowing
	// void IsFollowing(FDelegateProperty& Callback, FSteamID SteamID);                                                         // [0x8dc910] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.IsClanPublic
	bool IsClanPublic(FSteamID SteamIDClan) // [0x8dc880] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func(SteamIDClan);
	}
	// Function /Script/SteamCore.Friends.IsClanOfficialGameGroup
	bool IsClanOfficialGameGroup(FSteamID SteamIDClan) // [0x8dc7f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(SteamIDClan);
	}
	// Function /Script/SteamCore.Friends.IsClanChatWindowOpenInSteam
	bool IsClanChatWindowOpenInSteam(FSteamID SteamIDClanChat) // [0x8dc760] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(SteamIDClanChat);
	}
	// Function /Script/SteamCore.Friends.IsClanChatAdmin
	bool IsClanChatAdmin(FSteamID SteamIDClanChat, FSteamID SteamIDUser) // [0x8dc690] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func(SteamIDClanChat, SteamIDUser);
	}
	// Function /Script/SteamCore.Friends.InviteUserToGame
	bool InviteUserToGame(FSteamID SteamIDFriend, FString ConnectString) // [0x8dc560] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(SteamIDFriend, ConnectString);
	}
	// Function /Script/SteamCore.Friends.HasFriend
	// bool HasFriend(FSteamID SteamIDFriend, TArray<ESteamFriendFlags> Flags);                                                 // [0x8dc3b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetUserRestrictions
	// TArray<ESteamUserRestriction> GetUserRestrictions();                                                                     // [0x8dc210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetSmallFriendAvatar
	UTexture2D* GetSmallFriendAvatar(FSteamID SteamIDFriend) // [0x8dc180] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UTexture2D* (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func(SteamIDFriend);
	}
	// Function /Script/SteamCore.Friends.GetPlayerNickname_Pure
	FString GetPlayerNickname_Pure(FSteamID SteamIDPlayer) // [0x8dc0a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func(SteamIDPlayer);
	}
	// Function /Script/SteamCore.Friends.GetPlayerNickname
	FString GetPlayerNickname(FSteamID SteamIDPlayer) // [0x8dbfd0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func(SteamIDPlayer);
	}
	// Function /Script/SteamCore.Friends.GetPersonaState_Pure
	ESteamPersonaState GetPersonaState_Pure() // [0x8dbfa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef ESteamPersonaState (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func();
	}
	// Function /Script/SteamCore.Friends.GetPersonaState
	ESteamPersonaState GetPersonaState() // [0x8dbfa0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef ESteamPersonaState (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func();
	}
	// Function /Script/SteamCore.Friends.GetPersonaName_Pure
	FString GetPersonaName_Pure() // [0x8dbf30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func();
	}
	// Function /Script/SteamCore.Friends.GetPersonaName
	FString GetPersonaName() // [0x8dbeb0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		return func();
	}
	// Function /Script/SteamCore.Friends.GetMediumFriendAvatar
	UTexture2D* GetMediumFriendAvatar(FSteamID SteamIDFriend) // [0x8dbdf0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UTexture2D* (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		return func(SteamIDFriend);
	}
	// Function /Script/SteamCore.Friends.GetLargeFriendAvatar
	UTexture2D* GetLargeFriendAvatar(FSteamID SteamIDFriend) // [0x8dbb80] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UTexture2D* (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		return func(SteamIDFriend);
	}
	// Function /Script/SteamCore.Friends.GetFriendSteamLevel
	int32_t GetFriendSteamLevel(FSteamID SteamIDFriend) // [0x8db570] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		return func(SteamIDFriend);
	}
	// Function /Script/SteamCore.Friends.GetFriendsGroupName
	FString GetFriendsGroupName(FSteamFriendsGroupID FriendsGroupID) // [0x8db880] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(FSteamFriendsGroupID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		return func(FriendsGroupID);
	}
	// Function /Script/SteamCore.Friends.GetFriendsGroupMembersList
	// void GetFriendsGroupMembersList(FSteamFriendsGroupID FriendsGroupID, TArray<FSteamID>& SteamIDMembers, int32_t MembersCount); // [0x8db750] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendsGroupMembersCount
	int32_t GetFriendsGroupMembersCount(FSteamFriendsGroupID FriendsGroupID) // [0x8db6c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamFriendsGroupID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		return func(FriendsGroupID);
	}
	// Function /Script/SteamCore.Friends.GetFriendsGroupIDByIndex
	FSteamFriendsGroupID GetFriendsGroupIDByIndex(int32_t FriendGroup) // [0x8db630] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSteamFriendsGroupID (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		return func(FriendGroup);
	}
	// Function /Script/SteamCore.Friends.GetFriendsGroupCount
	int32_t GetFriendsGroupCount() // [0x8db600] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		return func();
	}
	// Function /Script/SteamCore.Friends.GetFriendRichPresenceKeyCount
	int32_t GetFriendRichPresenceKeyCount(FSteamID SteamIDFriend) // [0x8db4e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		return func(SteamIDFriend);
	}
	// Function /Script/SteamCore.Friends.GetFriendRichPresenceKeyByIndex
	FString GetFriendRichPresenceKeyByIndex(FSteamID SteamIDFriend, int32_t Key) // [0x8db3d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(FSteamID, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[39]);
		return func(SteamIDFriend, Key);
	}
	// Function /Script/SteamCore.Friends.GetFriendRichPresence
	FString GetFriendRichPresence(FSteamID SteamIDFriend, FString Key) // [0x8db260] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(FSteamID, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[40]);
		return func(SteamIDFriend, Key);
	}
	// Function /Script/SteamCore.Friends.GetFriendRelationship
	ESteamFriendRelationship GetFriendRelationship(FSteamID SteamIDFriend) // [0x8db1d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef ESteamFriendRelationship (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[41]);
		return func(SteamIDFriend);
	}
	// Function /Script/SteamCore.Friends.GetFriendPersonaState
	ESteamPersonaState GetFriendPersonaState(FSteamID SteamIDFriend) // [0x8db140] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef ESteamPersonaState (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[42]);
		return func(SteamIDFriend);
	}
	// Function /Script/SteamCore.Friends.GetFriendPersonaNameHistory
	FString GetFriendPersonaNameHistory(FSteamID SteamIDFriend, int32_t PersonaName) // [0x8db030] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(FSteamID, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[43]);
		return func(SteamIDFriend, PersonaName);
	}
	// Function /Script/SteamCore.Friends.GetFriendPersonaName
	FString GetFriendPersonaName(FSteamID SteamIDFriend) // [0x8daf60] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[44]);
		return func(SteamIDFriend);
	}
	// Function /Script/SteamCore.Friends.GetFriendMessage
	int32_t GetFriendMessage(FSteamID SteamIDFriend, int32_t MessageID, FString& Text, ESteamChatEntryType& ChatEntryType) // [0x8dade0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamID, int32_t, FString&, ESteamChatEntryType&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[45]);
		return func(SteamIDFriend, MessageID, Text, ChatEntryType);
	}
	// Function /Script/SteamCore.Friends.GetFriendGamePlayed
	bool GetFriendGamePlayed(FSteamID SteamIDFriend, FSteamGameID& GameID, FString& GameIP, int32_t& ConnectionPort, int32_t& QueryPort, FSteamID& SteamIDLobby) // [0x8dabb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FSteamGameID&, FString&, int32_t&, int32_t&, FSteamID&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[46]);
		return func(SteamIDFriend, GameID, GameIP, ConnectionPort, QueryPort, SteamIDLobby);
	}
	// Function /Script/SteamCore.Friends.GetFriendFromSourceByIndex
	FSteamID GetFriendFromSourceByIndex(FSteamID SteamIDSource, int32_t Ifriend) // [0x8daae0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSteamID (*FuncPtr)(FSteamID, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[47]);
		return func(SteamIDSource, Ifriend);
	}
	// Function /Script/SteamCore.Friends.GetFriendCountFromSource
	int32_t GetFriendCountFromSource(FSteamID SteamIDSource) // [0x8daa50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[48]);
		return func(SteamIDSource);
	}
	// Function /Script/SteamCore.Friends.GetFriendCount
	// int32_t GetFriendCount(TArray<ESteamFriendFlags> Flags);                                                                 // [0x8da970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendCoplayTime
	int32_t GetFriendCoplayTime(FSteamID SteamIDFriend) // [0x8da8e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[50]);
		return func(SteamIDFriend);
	}
	// Function /Script/SteamCore.Friends.GetFriendCoplayGame
	int32_t GetFriendCoplayGame(FSteamID SteamIDFriend) // [0x8da850] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[51]);
		return func(SteamIDFriend);
	}
	// Function /Script/SteamCore.Friends.GetFriendByIndex
	// FSteamID GetFriendByIndex(int32_t Ifriend, TArray<ESteamFriendFlags> Flags);                                             // [0x8da730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFollowerCount
	// void GetFollowerCount(FDelegateProperty& Callback, FSteamID SteamID);                                                    // [0x8da630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetCoplayFriendCount
	int32_t GetCoplayFriendCount() // [0x8da020] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[54]);
		return func();
	}
	// Function /Script/SteamCore.Friends.GetCoplayFriend
	FSteamID GetCoplayFriend(int32_t CoplayFriend) // [0x8d9f90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSteamID (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[55]);
		return func(CoplayFriend);
	}
	// Function /Script/SteamCore.Friends.GetClanTag
	FString GetClanTag(FSteamID SteamIDClan) // [0x8d9ec0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[56]);
		return func(SteamIDClan);
	}
	// Function /Script/SteamCore.Friends.GetClanOwner
	FSteamID GetClanOwner(FSteamID SteamIDClan) // [0x8d9e30] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSteamID (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[57]);
		return func(SteamIDClan);
	}
	// Function /Script/SteamCore.Friends.GetClanOfficerCount
	int32_t GetClanOfficerCount(FSteamID SteamIDClan) // [0x8d9da0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[58]);
		return func(SteamIDClan);
	}
	// Function /Script/SteamCore.Friends.GetClanOfficerByIndex
	FSteamID GetClanOfficerByIndex(FSteamID SteamIDClan, int32_t Officer) // [0x8d9cd0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSteamID (*FuncPtr)(FSteamID, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[59]);
		return func(SteamIDClan, Officer);
	}
	// Function /Script/SteamCore.Friends.GetClanName
	FString GetClanName(FSteamID SteamIDClan) // [0x8d9c00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[60]);
		return func(SteamIDClan);
	}
	// Function /Script/SteamCore.Friends.GetClanCount
	int32_t GetClanCount() // [0x8d9bd0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[61]);
		return func();
	}
	// Function /Script/SteamCore.Friends.GetClanChatMessage
	int32_t GetClanChatMessage(FSteamID SteamIDClanChat, int32_t MessageID, FString& Text, ESteamChatEntryType& ChatEntryType, FSteamID& SteamIDChatter) // [0x8d99e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamID, int32_t, FString&, ESteamChatEntryType&, FSteamID&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[62]);
		return func(SteamIDClanChat, MessageID, Text, ChatEntryType, SteamIDChatter);
	}
	// Function /Script/SteamCore.Friends.GetClanChatMemberCount
	int32_t GetClanChatMemberCount(FSteamID SteamIDClan) // [0x8d9950] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[63]);
		return func(SteamIDClan);
	}
	// Function /Script/SteamCore.Friends.GetClanByIndex
	FSteamID GetClanByIndex(int32_t Clan) // [0x8d98c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSteamID (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[64]);
		return func(Clan);
	}
	// Function /Script/SteamCore.Friends.GetClanActivityCounts
	bool GetClanActivityCounts(FSteamID SteamIDClan, int32_t& Online, int32_t& InGame, int32_t& Chatting) // [0x8d9750] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, int32_t&, int32_t&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[65]);
		return func(SteamIDClan, Online, InGame, Chatting);
	}
	// Function /Script/SteamCore.Friends.GetChatMemberByIndex
	FSteamID GetChatMemberByIndex(FSteamID SteamIDClan, int32_t User) // [0x8d9680] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSteamID (*FuncPtr)(FSteamID, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[66]);
		return func(SteamIDClan, User);
	}
	// Function /Script/SteamCore.Friends.EnumerateFollowingList
	// void EnumerateFollowingList(FDelegateProperty& Callback, int32_t StartIndex);                                            // [0x8d9100] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.DownloadClanActivityCounts
	// void DownloadClanActivityCounts(FDelegateProperty& Callback, TArray<FSteamID> SteamIDClans);                             // [0x8d8fa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.CloseClanChatWindowInSteam
	bool CloseClanChatWindowInSteam(FSteamID SteamIDClanChat) // [0x8d8f10] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[69]);
		return func(SteamIDClanChat);
	}
	// Function /Script/SteamCore.Friends.ClearRichPresence
	void ClearRichPresence() // [0x8d8ef0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[70]);
		func();
	}
	// Function /Script/SteamCore.Friends.ActivateGameOverlayToWebPage
	void ActivateGameOverlayToWebPage(FString URL, ESteamActivateGameOverlayToWebPageMode Mode) // [0x8d88a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, ESteamActivateGameOverlayToWebPageMode);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[71]);
		func(URL, Mode);
	}
	// Function /Script/SteamCore.Friends.ActivateGameOverlayToUser
	void ActivateGameOverlayToUser(FString Dialog, FSteamID SteamID) // [0x8d8780] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[72]);
		func(Dialog, SteamID);
	}
	// Function /Script/SteamCore.Friends.ActivateGameOverlayToStore
	void ActivateGameOverlayToStore(int32_t AppID, ESteamOverlayToStoreFlag Flag) // [0x8d86c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, ESteamOverlayToStoreFlag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[73]);
		func(AppID, Flag);
	}
	// Function /Script/SteamCore.Friends.ActivateGameOverlayInviteDialogConnectString
	void ActivateGameOverlayInviteDialogConnectString(FString ConnectString) // [0x8d8560] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[74]);
		func(ConnectString);
	}
	// Function /Script/SteamCore.Friends.ActivateGameOverlayInvitedialog
	void ActivateGameOverlayInvitedialog(FSteamID SteamIDLobby) // [0x8d8640] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[75]);
		func(SteamIDLobby);
	}
	// Function /Script/SteamCore.Friends.ActivateGameOverlay
	void ActivateGameOverlay(FString Dialog) // [0x8d8480] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[76]);
		func(Dialog);
	}
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionSetPersonaName
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreFriendsAsyncActionSetPersonaName : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,424) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.SetPersonaNameAsync
	USteamCoreFriendsAsyncActionSetPersonaName* SetPersonaNameAsync(UObject* WorldContextObject, FString Name, float Timeout) // [0x8e1250] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreFriendsAsyncActionSetPersonaName* (*FuncPtr)(UObject*, FString, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Name, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.HandleCallback
	void HandleCallback(FSetPersonaNameResponse& Data, bool bWasSuccessful) // [0x8e0ce0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FSetPersonaNameResponse&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreFriendsAsyncActionDownloadClanActivityCounts : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,425) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.HandleCallback
	void HandleCallback(FDownloadClanActivityCountsResult& Data, bool bWasSuccessful) // [0x8e0720] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FDownloadClanActivityCountsResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.DownloadClanActivityCountsAsync
	// USteamCoreFriendsAsyncActionDownloadClanActivityCounts* DownloadClanActivityCountsAsync(UObject* WorldContextObject, TArray<FSteamID> SteamIDClans, float Timeout); // [0x8e0390] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreFriendsAsyncActionRequestClanOfficerList : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,426) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.RequestClanOfficerListAsync
	USteamCoreFriendsAsyncActionRequestClanOfficerList* RequestClanOfficerListAsync(UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout) // [0x8e0fe0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreFriendsAsyncActionRequestClanOfficerList* (*FuncPtr)(UObject*, FSteamID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, SteamIDClan, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.HandleCallback
	void HandleCallback(FClanOfficerListResponse& Data, bool bWasSuccessful) // [0x8e0bd0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FClanOfficerListResponse&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreFriendsAsyncActionJoinClanChatRoom : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,427) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.JoinClanChatRoomAsync
	USteamCoreFriendsAsyncActionJoinClanChatRoom* JoinClanChatRoomAsync(UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout) // [0x8e0ed0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreFriendsAsyncActionJoinClanChatRoom* (*FuncPtr)(UObject*, FSteamID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, SteamIDClan, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.HandleCallback
	void HandleCallback(FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful) // [0x8e0ae0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FJoinClanChatRoomCompletionResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreFriendsAsyncActionEnumerateFollowingList : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,428) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.HandleCallback
	void HandleCallback(FFriendsEnumerateFollowingList& Data, bool bWasSuccessful) // [0x8e0800] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FFriendsEnumerateFollowingList&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.EnumerateFollowingListAsync
	USteamCoreFriendsAsyncActionEnumerateFollowingList* EnumerateFollowingListAsync(UObject* WorldContextObject, int32_t StartIndex, float Timeout) // [0x8e0500] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreFriendsAsyncActionEnumerateFollowingList* (*FuncPtr)(UObject*, int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, StartIndex, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionIsFollowing
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreFriendsAsyncActionIsFollowing : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,429) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionIsFollowing.IsFollowingAsync
	USteamCoreFriendsAsyncActionIsFollowing* IsFollowingAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout) // [0x8e0dc0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreFriendsAsyncActionIsFollowing* (*FuncPtr)(UObject*, FSteamID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, SteamID, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionIsFollowing.HandleCallback
	void HandleCallback(FFriendsIsFollowing& Data, bool bWasSuccessful) // [0x8e09f0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FFriendsIsFollowing&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreFriendsAsyncActionGetFollowerCount : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,430) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.HandleCallback
	void HandleCallback(FFriendsGetFollowerCount& Data, bool bWasSuccessful) // [0x8e0900] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FFriendsGetFollowerCount&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.GetFollowerCountAsync
	USteamCoreFriendsAsyncActionGetFollowerCount* GetFollowerCountAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout) // [0x8e0610] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreFriendsAsyncActionGetFollowerCount* (*FuncPtr)(UObject*, FSteamID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, SteamID, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class USteamCoreFriendsAsyncActionRequestUserInformation : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,431) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0048   (0x0030)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.RequestUserInformationAsync
	USteamCoreFriendsAsyncActionRequestUserInformation* RequestUserInformationAsync(UObject* WorldContextObject, FSteamID SteamIDUser, bool bRequireNameOnly, float Timeout) // [0x8e10f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreFriendsAsyncActionRequestUserInformation* (*FuncPtr)(UObject*, FSteamID, bool, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, SteamIDUser, bRequireNameOnly, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.HandleCallback
	void HandleCallback() // [0x8e0cc0] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
};

/// Class /Script/SteamCore.SteamGameSearch
/// Size: 0x0198 (408 bytes) (0x000048 - 0x000198) align 8 MaxSize: 0x0198
class USteamGameSearch : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,432) /* FMulticastInlineDelegate */ __um(SearchForGameProgressDelegate);                      // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,433) /* FMulticastInlineDelegate */ __um(SearchForGameResultDelegate);                        // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,434) /* FMulticastInlineDelegate */ __um(RequestPlayersForGameProgressDelegate);              // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,435) /* FMulticastInlineDelegate */ __um(RequestPlayersForGameResultDelegate);                // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,436) /* FMulticastInlineDelegate */ __um(RequestPlayersForGameFinalResultDelegate);           // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,437) /* FMulticastInlineDelegate */ __um(SubmitPlayerResultResultDelegate);                   // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,438) /* FMulticastInlineDelegate */ __um(EndGameResultDelegate);                              // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_7[0xE0];                                      // 0x00B8   (0x00E0)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamGameSearch.SubmitPlayerResult
	ESteamGameSearchErrorCode SubmitPlayerResult(FString UniqueGameID, FSteamID SteamIDPlayer, ESteamPlayerResult PlayerResult) // [0x8e6850] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamGameSearchErrorCode (*FuncPtr)(FString, FSteamID, ESteamPlayerResult);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(UniqueGameID, SteamIDPlayer, PlayerResult);
	}
	// Function /Script/SteamCore.SteamGameSearch.SetGameHostParams
	// ESteamGameSearchErrorCode SetGameHostParams(FString Key, TArray<FString> Values);                                        // [0x8e57d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.SetConnectionDetails
	ESteamGameSearchErrorCode SetConnectionDetails(FString ConnectionDetails) // [0x8e5460] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamGameSearchErrorCode (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(ConnectionDetails);
	}
	// Function /Script/SteamCore.SteamGameSearch.SearchForGameWithLobby
	ESteamGameSearchErrorCode SearchForGameWithLobby(FSteamID SteamIDLobby, int32_t PlayerMin, int32_t PlayerMax) // [0x8e50c0] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamGameSearchErrorCode (*FuncPtr)(FSteamID, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(SteamIDLobby, PlayerMin, PlayerMax);
	}
	// Function /Script/SteamCore.SteamGameSearch.SearchForGameSolo
	ESteamGameSearchErrorCode SearchForGameSolo(int32_t PlayerMin, int32_t PlayerMax) // [0x8e4ff0] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamGameSearchErrorCode (*FuncPtr)(int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(PlayerMin, PlayerMax);
	}
	// Function /Script/SteamCore.SteamGameSearch.RetrieveConnectionDetails
	ESteamGameSearchErrorCode RetrieveConnectionDetails(FSteamID SteamIDHost, FString& ConnectionDetails, int32_t NumConnectionDetails) // [0x8e4eb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef ESteamGameSearchErrorCode (*FuncPtr)(FSteamID, FString&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(SteamIDHost, ConnectionDetails, NumConnectionDetails);
	}
	// Function /Script/SteamCore.SteamGameSearch.RequestPlayersForGame
	ESteamGameSearchErrorCode RequestPlayersForGame(int32_t PlayerMin, int32_t PlayerMax, int32_t MaxTeamSize) // [0x8e4cd0] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamGameSearchErrorCode (*FuncPtr)(int32_t, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(PlayerMin, PlayerMax, MaxTeamSize);
	}
	// Function /Script/SteamCore.SteamGameSearch.HostConfirmGameStart
	ESteamGameSearchErrorCode HostConfirmGameStart(FString UniqueGameID) // [0x8e4aa0] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamGameSearchErrorCode (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(UniqueGameID);
	}
	// Function /Script/SteamCore.SteamGameSearch.EndGameSearch
	ESteamGameSearchErrorCode EndGameSearch() // [0x8e4370] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamGameSearchErrorCode (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/SteamCore.SteamGameSearch.EndGame
	ESteamGameSearchErrorCode EndGame(FString UniqueGameID) // [0x8e4270] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamGameSearchErrorCode (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(UniqueGameID);
	}
	// Function /Script/SteamCore.SteamGameSearch.DeclineGame
	ESteamGameSearchErrorCode DeclineGame() // [0x8e4120] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamGameSearchErrorCode (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func();
	}
	// Function /Script/SteamCore.SteamGameSearch.CancelRequestPlayersForGame
	ESteamGameSearchErrorCode CancelRequestPlayersForGame() // [0x8e3e60] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamGameSearchErrorCode (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func();
	}
	// Function /Script/SteamCore.SteamGameSearch.AddGameSearchParams
	// ESteamGameSearchErrorCode AddGameSearchParams(FString KeyToFind, TArray<FString> ValuesToFind);                          // [0x8e37c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.AcceptGame
	ESteamGameSearchErrorCode AcceptGame() // [0x8e3790] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamGameSearchErrorCode (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func();
	}
};

/// Class /Script/SteamCore.SteamGameServer
/// Size: 0x0138 (312 bytes) (0x000048 - 0x000138) align 8 MaxSize: 0x0138
class USteamGameServer : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,439) /* FMulticastInlineDelegate */ __um(GSPolicyResponse);                                   // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,440) /* FMulticastInlineDelegate */ __um(GSClientGroupStatus);                                // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,441) /* FMulticastInlineDelegate */ __um(GSValidateAuthTicketResponse);                       // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,442) /* FMulticastInlineDelegate */ __um(GSClientApprove);                                    // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,443) /* FMulticastInlineDelegate */ __um(GSClientDeny);                                       // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0xA0];                                      // 0x0098   (0x00A0)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamGameServer.WasRestartRequested
	bool WasRestartRequested() // [0x8e6c40] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/SteamCore.SteamGameServer.UserHasLicenseForApp
	ESteamUserHasLicenseForAppResult UserHasLicenseForApp(FSteamID SteamID, int32_t AppID) // [0x8e6b70] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamUserHasLicenseForAppResult (*FuncPtr)(FSteamID, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(SteamID, AppID);
	}
	// Function /Script/SteamCore.SteamGameServer.SetSpectatorServerName
	void SetSpectatorServerName(FString SpectatorServerName) // [0x8e6340] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(SpectatorServerName);
	}
	// Function /Script/SteamCore.SteamGameServer.SetSpectatorPort
	void SetSpectatorPort(int32_t SpectatorPort) // [0x8e62b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(SpectatorPort);
	}
	// Function /Script/SteamCore.SteamGameServer.SetServerName
	void SetServerName(FString ServerName) // [0x8e61c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(ServerName);
	}
	// Function /Script/SteamCore.SteamGameServer.SetRegion
	void SetRegion(FString Region) // [0x8e60d0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(Region);
	}
	// Function /Script/SteamCore.SteamGameServer.SetProduct
	void SetProduct(FString Product) // [0x8e5fe0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Product);
	}
	// Function /Script/SteamCore.SteamGameServer.SetPasswordProtected
	void SetPasswordProtected(bool bPasswordProtected) // [0x8e5f50] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(bPasswordProtected);
	}
	// Function /Script/SteamCore.SteamGameServer.SetModDir
	void SetModDir(FString ModDir) // [0x8e5e60] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(ModDir);
	}
	// Function /Script/SteamCore.SteamGameServer.SetMaxPlayerCount
	void SetMaxPlayerCount(int32_t PlayersMax) // [0x8e5dd0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(PlayersMax);
	}
	// Function /Script/SteamCore.SteamGameServer.SetMapName
	void SetMapName(FString MapName) // [0x8e5ce0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(MapName);
	}
	// Function /Script/SteamCore.SteamGameServer.SetKeyValue
	void SetKeyValue(FString Key, FString Value) // [0x8e5b60] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(Key, Value);
	}
	// Function /Script/SteamCore.SteamGameServer.SetHeartbeatInterval
	void SetHeartbeatInterval(int32_t HeartbeatInterval) // [0x8e5ad0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(HeartbeatInterval);
	}
	// Function /Script/SteamCore.SteamGameServer.SetGameTags
	void SetGameTags(FString GameTags) // [0x8e59e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(GameTags);
	}
	// Function /Script/SteamCore.SteamGameServer.SetGameDescription
	void SetGameDescription(FString GameDescription) // [0x8e56e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func(GameDescription);
	}
	// Function /Script/SteamCore.SteamGameServer.SetGameData
	void SetGameData(FString GameData) // [0x8e55f0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func(GameData);
	}
	// Function /Script/SteamCore.SteamGameServer.SetDedicatedServer
	void SetDedicatedServer(bool bDedicated) // [0x8e5560] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func(bDedicated);
	}
	// Function /Script/SteamCore.SteamGameServer.SetBotPlayerCount
	void SetBotPlayerCount(int32_t BotPlayers) // [0x8e53d0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		func(BotPlayers);
	}
	// Function /Script/SteamCore.SteamGameServer.RequestUserGroupStatus
	bool RequestUserGroupStatus(FSteamID SteamIDUser, FSteamID SteamIDGroup) // [0x8e4de0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(SteamIDUser, SteamIDGroup);
	}
	// Function /Script/SteamCore.SteamGameServer.LogOnAnonymous
	void LogOnAnonymous() // [0x8e4cb0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		func();
	}
	// Function /Script/SteamCore.SteamGameServer.LogOn
	void LogOn(FString Token) // [0x8e4bc0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		func(Token);
	}
	// Function /Script/SteamCore.SteamGameServer.LogOff
	void LogOff() // [0x8e4ba0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		func();
	}
	// Function /Script/SteamCore.SteamGameServer.GetServerSteamID_PureCompact
	FSteamID GetServerSteamID_PureCompact() // [0x8e45b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FSteamID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func();
	}
	// Function /Script/SteamCore.SteamGameServer.GetServerSteamID_Pure
	FSteamID GetServerSteamID_Pure() // [0x8e45b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FSteamID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func();
	}
	// Function /Script/SteamCore.SteamGameServer.GetServerSteamID
	FSteamID GetServerSteamID() // [0x8e4570] Final|Native|Public|BlueprintCallable 
	{
		typedef FSteamID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func();
	}
	// Function /Script/SteamCore.SteamGameServer.GetServerPublicIP_PureCompact
	FString GetServerPublicIP_PureCompact() // [0x8e4500] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func();
	}
	// Function /Script/SteamCore.SteamGameServer.GetServerPublicIP_Pure
	FString GetServerPublicIP_Pure() // [0x8e4500] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func();
	}
	// Function /Script/SteamCore.SteamGameServer.GetServerPublicIP
	FString GetServerPublicIP() // [0x8e4480] Final|Native|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func();
	}
	// Function /Script/SteamCore.SteamGameServer.GetAuthSessionTicket
	FSteamTicketHandle GetAuthSessionTicket(TArray<char>& Ticket) // [0x8e43c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef FSteamTicketHandle (*FuncPtr)(TArray<char>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func(Ticket);
	}
	// Function /Script/SteamCore.SteamGameServer.ForceHeartbeat
	void ForceHeartbeat() // [0x8e43a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		func();
	}
	// Function /Script/SteamCore.SteamGameServer.EndAuthSession
	void EndAuthSession(FSteamID SteamID) // [0x8e41e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		func(SteamID);
	}
	// Function /Script/SteamCore.SteamGameServer.EnableHeartbeats
	void EnableHeartbeats(bool bActive) // [0x8e4150] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		func(bActive);
	}
	// Function /Script/SteamCore.SteamGameServer.CreateUnauthenticatedUserConnection
	FSteamID CreateUnauthenticatedUserConnection() // [0x8e40e0] Final|Native|Public|BlueprintCallable 
	{
		typedef FSteamID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		return func();
	}
	// Function /Script/SteamCore.SteamGameServer.ComputeNewPlayerCompatibility
	// void ComputeNewPlayerCompatibility(FDelegateProperty& Callback, FSteamID SteamIDNewPlayer);                              // [0x8e3fe0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.ClearAllKeyValues
	void ClearAllKeyValues() // [0x8e3e90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		func();
	}
	// Function /Script/SteamCore.SteamGameServer.CancelAuthTicket
	void CancelAuthTicket(FSteamTicketHandle TicketHandle) // [0x8e3dd0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamTicketHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		func(TicketHandle);
	}
	// Function /Script/SteamCore.SteamGameServer.BUpdateUserData
	bool BUpdateUserData(FSteamID SteamIDUser, FString PlayerName, int32_t Score) // [0x8e3b30] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		return func(SteamIDUser, PlayerName, Score);
	}
	// Function /Script/SteamCore.SteamGameServer.BSecure
	bool BSecure() // [0x8e3b00] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		return func();
	}
	// Function /Script/SteamCore.SteamGameServer.BLoggedOn
	bool BLoggedOn() // [0x8e3ad0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		return func();
	}
	// Function /Script/SteamCore.SteamGameServer.BeginAuthSession
	ESteamBeginAuthSessionResult BeginAuthSession(TArray<char> Ticket, FSteamID SteamID) // [0x8e3ca0] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamBeginAuthSessionResult (*FuncPtr)(TArray<char>, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[39]);
		return func(Ticket, SteamID);
	}
	// Function /Script/SteamCore.SteamGameServer.AssociateWithClan
	// void AssociateWithClan(FDelegateProperty& Callback, FSteamID SteamIDClan);                                               // [0x8e39d0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.GameServerStats
/// Size: 0x0078 (120 bytes) (0x000048 - 0x000078) align 8 MaxSize: 0x0078
class UGameServerStats : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,444) /* FMulticastInlineDelegate */ __um(GSStatsUnloaded);                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0058   (0x0020)  MISSED


	/// Functions
	// Function /Script/SteamCore.GameServerStats.UpdateUserAvgRateStat
	bool UpdateUserAvgRateStat(FSteamID SteamIDUser, FString Name, float CountThisSession, float SessionLength) // [0x8e69c0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(SteamIDUser, Name, CountThisSession, SessionLength);
	}
	// Function /Script/SteamCore.GameServerStats.SetUserStatInt
	bool SetUserStatInt(FSteamID SteamIDUser, FString Name, int32_t Data) // [0x8e66e0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(SteamIDUser, Name, Data);
	}
	// Function /Script/SteamCore.GameServerStats.SetUserStatFloat
	bool SetUserStatFloat(FSteamID SteamIDUser, FString Name, float Data) // [0x8e6560] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(SteamIDUser, Name, Data);
	}
	// Function /Script/SteamCore.GameServerStats.SetUserAchievement
	bool SetUserAchievement(FSteamID SteamIDUser, FString Name) // [0x8e6430] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(SteamIDUser, Name);
	}
	// Function /Script/SteamCore.GameServerStats.ServerStoreUserStats
	// void ServerStoreUserStats(FDelegateProperty& Callback, FSteamID SteamIDUser);                                            // [0x8e52d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.ServerRequestUserStats
	// void ServerRequestUserStats(FDelegateProperty& Callback, FSteamID SteamIDUser);                                          // [0x8e51d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.GetUserStatInt
	bool GetUserStatInt(FSteamID SteamIDUser, FString Name, int32_t& Data) // [0x8e4910] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(SteamIDUser, Name, Data);
	}
	// Function /Script/SteamCore.GameServerStats.GetUserStatFloat
	bool GetUserStatFloat(FSteamID SteamIDUser, FString Name, float& Data) // [0x8e4780] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(SteamIDUser, Name, Data);
	}
	// Function /Script/SteamCore.GameServerStats.GetUserAchievement
	bool GetUserAchievement(FSteamID SteamIDUser, FString Name, bool& bAchieved) // [0x8e45f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(SteamIDUser, Name, bAchieved);
	}
	// Function /Script/SteamCore.GameServerStats.ClearUserAchievement
	bool ClearUserAchievement(FSteamID SteamIDUser, FString Name) // [0x8e3eb0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(SteamIDUser, Name);
	}
};

/// Class /Script/SteamCore.Input
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UInput : public USteamCoreSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCore.Input.TriggerVibration
	void TriggerVibration(FInputHandle Handle, char LeftSpeed, char RightSpeed) // [0x8ea370] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FInputHandle, char, char);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Handle, LeftSpeed, RightSpeed);
	}
	// Function /Script/SteamCore.Input.TriggerRepeatedHapticPulse
	void TriggerRepeatedHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, char DurationMicroSec, char OffMicroSec, char Repeat, char Flags) // [0x8ea1a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FInputHandle, ESteamCoreControllerPad, char, char, char, char);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Handle, TargetPad, DurationMicroSec, OffMicroSec, Repeat, Flags);
	}
	// Function /Script/SteamCore.Input.TriggerHapticPulse
	void TriggerHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, char DurationMicroSec) // [0x8ea090] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FInputHandle, ESteamCoreControllerPad, char);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Handle, TargetPad, DurationMicroSec);
	}
	// Function /Script/SteamCore.Input.TranslateActionOrigin
	ESteamCoreInputActionOrigin TranslateActionOrigin(ESteamCoreInputType DestinationInputType, ESteamCoreInputActionOrigin SourceOrigin) // [0x8e9fc0] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamCoreInputActionOrigin (*FuncPtr)(ESteamCoreInputType, ESteamCoreInputActionOrigin);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(DestinationInputType, SourceOrigin);
	}
	// Function /Script/SteamCore.Input.StopAnalogActionMomentum
	void StopAnalogActionMomentum(FInputHandle Handle, FInputAnalogActionHandle EAction) // [0x8e9ef0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FInputHandle, FInputAnalogActionHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Handle, EAction);
	}
	// Function /Script/SteamCore.Input.Shutdown
	bool Shutdown() // [0x8e9ec0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/SteamCore.Input.ShowBindingPanel
	bool ShowBindingPanel(FInputHandle Handle) // [0x8e9e20] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FInputHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(Handle);
	}
	// Function /Script/SteamCore.Input.SetLEDColor
	void SetLEDColor(FInputHandle Handle, char ColorR, char ColorG, char ColorB, ESteamCoreInputLEDFlag Flags) // [0x8e9c80] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FInputHandle, char, char, char, ESteamCoreInputLEDFlag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(Handle, ColorR, ColorG, ColorB, Flags);
	}
	// Function /Script/SteamCore.Input.Init
	bool Init() // [0x8e9c50] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/SteamCore.Input.GetStringForXboxOrigin
	FString GetStringForXboxOrigin(ESteamCoreXboxOrigin Origin) // [0x8e9b70] Final|Native|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(ESteamCoreXboxOrigin);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(Origin);
	}
	// Function /Script/SteamCore.Input.GetStringForActionOrigin
	FString GetStringForActionOrigin(ESteamCoreInputActionOrigin Origin) // [0x8e9a90] Final|Native|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(ESteamCoreInputActionOrigin);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(Origin);
	}
	// Function /Script/SteamCore.Input.GetRemotePlaySessionID
	int32_t GetRemotePlaySessionID(FInputHandle Handle) // [0x8e99f0] Final|Native|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FInputHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(Handle);
	}
	// Function /Script/SteamCore.Input.GetMotionData
	FInputMotionData GetMotionData(FInputHandle Handle) // [0x8e9940] Final|Native|Public|BlueprintCallable 
	{
		typedef FInputMotionData (*FuncPtr)(FInputHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(Handle);
	}
	// Function /Script/SteamCore.Input.GetInputTypeForHandle
	ESteamCoreInputType GetInputTypeForHandle(FInputHandle Handle) // [0x8e98a0] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamCoreInputType (*FuncPtr)(FInputHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(Handle);
	}
	// Function /Script/SteamCore.Input.GetGlyphForXboxOrigin
	FString GetGlyphForXboxOrigin(ESteamCoreXboxOrigin Origin) // [0x8e97c0] Final|Native|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(ESteamCoreXboxOrigin);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(Origin);
	}
	// Function /Script/SteamCore.Input.GetGlyphForActionOrigin
	FString GetGlyphForActionOrigin(ESteamCoreInputActionOrigin Origin) // [0x8e96e0] Final|Native|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(ESteamCoreInputActionOrigin);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(Origin);
	}
	// Function /Script/SteamCore.Input.GetGamepadIndexForController
	int32_t GetGamepadIndexForController(FInputHandle Handle) // [0x8e9640] Final|Native|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FInputHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func(Handle);
	}
	// Function /Script/SteamCore.Input.GetDigitalActionOrigins
	// int32_t GetDigitalActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputDigitalActionHandle DigitalActionHandle, TArray<ESteamCoreInputActionOrigin>& OriginsOut); // [0x8e94c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetDigitalActionHandle
	FInputDigitalActionHandle GetDigitalActionHandle(FString PszActionName) // [0x8e93d0] Final|Native|Public|BlueprintCallable 
	{
		typedef FInputDigitalActionHandle (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(PszActionName);
	}
	// Function /Script/SteamCore.Input.GetDigitalActionData
	FInputDigitalActionData GetDigitalActionData(FInputHandle Handle, FInputDigitalActionHandle DigitalActionHandle) // [0x8e92f0] Final|Native|Public|BlueprintCallable 
	{
		typedef FInputDigitalActionData (*FuncPtr)(FInputHandle, FInputDigitalActionHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func(Handle, DigitalActionHandle);
	}
	// Function /Script/SteamCore.Input.GetDeviceBindingRevision
	bool GetDeviceBindingRevision(FInputHandle Handle, int32_t& Major, int32_t& Minor) // [0x8e91d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FInputHandle, int32_t&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(Handle, Major, Minor);
	}
	// Function /Script/SteamCore.Input.GetCurrentActionSet
	FInputActionSetHandle GetCurrentActionSet(FInputHandle Handle) // [0x8e9140] Final|Native|Public|BlueprintCallable 
	{
		typedef FInputActionSetHandle (*FuncPtr)(FInputHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func(Handle);
	}
	// Function /Script/SteamCore.Input.GetControllerForGamepadIndex
	FInputHandle GetControllerForGamepadIndex(int32_t Index) // [0x8e90b0] Final|Native|Public|BlueprintCallable 
	{
		typedef FInputHandle (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func(Index);
	}
	// Function /Script/SteamCore.Input.GetConnectedControllers
	// int32_t GetConnectedControllers(TArray<FInputHandle>& OutHandles);                                                       // [0x8e8ff0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetAnalogActionOrigins
	// int32_t GetAnalogActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputAnalogActionHandle AnalogActionHandle, TArray<ESteamCoreInputActionOrigin>& OriginsOut); // [0x8e8e70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetAnalogActionHandle
	FInputAnalogActionHandle GetAnalogActionHandle(FString PszActionName) // [0x8e8d80] Final|Native|Public|BlueprintCallable 
	{
		typedef FInputAnalogActionHandle (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func(PszActionName);
	}
	// Function /Script/SteamCore.Input.GetAnalogActionData
	FInputAnalogActionData GetAnalogActionData(FInputHandle Handle, FInputAnalogActionHandle AnalogActionHandle) // [0x8e8ca0] Final|Native|Public|BlueprintCallable 
	{
		typedef FInputAnalogActionData (*FuncPtr)(FInputHandle, FInputAnalogActionHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func(Handle, AnalogActionHandle);
	}
	// Function /Script/SteamCore.Input.GetActiveActionSetLayers
	// int32_t GetActiveActionSetLayers(FInputHandle Handle, TArray<FInputActionSetHandle>& Data);                              // [0x8e8ba0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetActionSetHandle
	FInputActionSetHandle GetActionSetHandle(FString ActionSetName) // [0x8e8ab0] Final|Native|Public|BlueprintCallable 
	{
		typedef FInputActionSetHandle (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func(ActionSetName);
	}
	// Function /Script/SteamCore.Input.GetActionOriginFromXboxOrigin
	ESteamCoreInputActionOrigin GetActionOriginFromXboxOrigin(FInputHandle Handle, ESteamCoreXboxOrigin Origin) // [0x8e89e0] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamCoreInputActionOrigin (*FuncPtr)(FInputHandle, ESteamCoreXboxOrigin);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		return func(Handle, Origin);
	}
	// Function /Script/SteamCore.Input.DeactivateAllActionSetLayers
	void DeactivateAllActionSetLayers(FInputHandle Handle) // [0x8e8950] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FInputHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		func(Handle);
	}
	// Function /Script/SteamCore.Input.DeactivateActionSetLayer
	void DeactivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle) // [0x8e8880] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FInputHandle, FInputActionSetHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		func(Handle, ActionSetLayerHandle);
	}
	// Function /Script/SteamCore.Input.ActivateActionSetLayer
	void ActivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle) // [0x8e87b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FInputHandle, FInputActionSetHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		func(Handle, ActionSetLayerHandle);
	}
	// Function /Script/SteamCore.Input.ActivateActionSet
	void ActivateActionSet(FInputHandle Handle, FInputActionSetHandle ActionSetHandle) // [0x8e86e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FInputHandle, FInputActionSetHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		func(Handle, ActionSetHandle);
	}
};

/// Class /Script/SteamCore.Inventory
/// Size: 0x0168 (360 bytes) (0x000048 - 0x000168) align 8 MaxSize: 0x0168
class UInventory : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,445) /* FMulticastInlineDelegate */ __um(SteamInventoryResultReady);                          // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,446) /* FMulticastInlineDelegate */ __um(SteamInventoryDefinitionUpdate);                     // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,447) /* FMulticastInlineDelegate */ __um(SteamInventoryFullUpdate);                           // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,448) /* FMulticastInlineDelegate */ __um(SteamInventoryStartPurchaseResult);                  // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,449) /* FMulticastInlineDelegate */ __um(SteamInventoryRequestPricesResultDelegate);          // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,450) /* FMulticastInlineDelegate */ __um(SteamInventoryEligiblePromoItemDefIDs);              // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0xC0];                                      // 0x00A8   (0x00C0)  MISSED


	/// Functions
	// Function /Script/SteamCore.Inventory.TriggerItemDrop
	bool TriggerItemDrop(FSteamInventoryResult& Result, FSteamItemDef ListDefinition) // [0x8eec00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryResult&, FSteamItemDef);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Result, ListDefinition);
	}
	// Function /Script/SteamCore.Inventory.TransferItemQuantity
	bool TransferItemQuantity(FSteamInventoryResult& Result, FSteamItemInstanceID ItemIDSource, int32_t Quantity, FSteamItemInstanceID ItemIDDest) // [0x8eeaa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryResult&, FSteamItemInstanceID, int32_t, FSteamItemInstanceID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Result, ItemIDSource, Quantity, ItemIDDest);
	}
	// Function /Script/SteamCore.Inventory.SubmitUpdateProperties
	bool SubmitUpdateProperties(FSteamInventoryUpdateHandle Handle, FSteamInventoryResult& ResultHandle) // [0x8ee9c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryUpdateHandle, FSteamInventoryResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(Handle, ResultHandle);
	}
	// Function /Script/SteamCore.Inventory.StartUpdateProperties
	FSteamInventoryUpdateHandle StartUpdateProperties() // [0x8ee980] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSteamInventoryUpdateHandle (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/SteamCore.Inventory.StartPurchase
	// void StartPurchase(FDelegateProperty& Callback, TArray<FSteamItemDef> ItemDefs, TArray<int32_t> Quantity);               // [0x8ee5b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.SetPropertyString
	bool SetPropertyString(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, FString Value) // [0x8ee3c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryUpdateHandle, FSteamItemInstanceID, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(Handle, ItemId, PropertyName, Value);
	}
	// Function /Script/SteamCore.Inventory.SetPropertyInt
	bool SetPropertyInt(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, int32_t Value) // [0x8ee220] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryUpdateHandle, FSteamItemInstanceID, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(Handle, ItemId, PropertyName, Value);
	}
	// Function /Script/SteamCore.Inventory.SetPropertyFloat
	bool SetPropertyFloat(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, float Value) // [0x8ee080] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryUpdateHandle, FSteamItemInstanceID, FString, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(Handle, ItemId, PropertyName, Value);
	}
	// Function /Script/SteamCore.Inventory.SetPropertyBool
	bool SetPropertyBool(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, bool bValue) // [0x8eded0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryUpdateHandle, FSteamItemInstanceID, FString, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(Handle, ItemId, PropertyName, bValue);
	}
	// Function /Script/SteamCore.Inventory.SerializeResult
	bool SerializeResult(FSteamInventoryResult Handle, TArray<char>& Buffer) // [0x8edde0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryResult, TArray<char>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(Handle, Buffer);
	}
	// Function /Script/SteamCore.Inventory.RequestPrices
	// void RequestPrices(FDelegateProperty& Callback);                                                                         // [0x8edc60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.RequestEligiblePromoItemDefinitionsIDs
	// void RequestEligiblePromoItemDefinitionsIDs(FDelegateProperty& Callback, FSteamID SteamID);                              // [0x8eda50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.RemoveProperty
	bool RemoveProperty(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName) // [0x8ed8e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryUpdateHandle, FSteamItemInstanceID, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(Handle, ItemId, PropertyName);
	}
	// Function /Script/SteamCore.Inventory.LoadItemDefinitions
	bool LoadItemDefinitions() // [0x8ed8b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func();
	}
	// Function /Script/SteamCore.Inventory.GrantPromoItems
	bool GrantPromoItems(FSteamInventoryResult& Result) // [0x8ed520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(Result);
	}
	// Function /Script/SteamCore.Inventory.GetResultTimestamp
	int32_t GetResultTimestamp(FSteamInventoryResult Handle) // [0x8ed490] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamInventoryResult);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(Handle);
	}
	// Function /Script/SteamCore.Inventory.GetResultStatus
	ESteamResult GetResultStatus(FSteamInventoryResult Handle) // [0x8ed400] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef ESteamResult (*FuncPtr)(FSteamInventoryResult);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func(Handle);
	}
	// Function /Script/SteamCore.Inventory.GetResultItems
	// bool GetResultItems(FSteamInventoryResult Handle, TArray<FSteamItemDetails>& Items);                                     // [0x8ed2f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetResultItemProperty
	bool GetResultItemProperty(FSteamInventoryResult Handle, int32_t ItemIndex, FString PropertyName, FString& Value) // [0x8ed130] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryResult, int32_t, FString, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(Handle, ItemIndex, PropertyName, Value);
	}
	// Function /Script/SteamCore.Inventory.GetNumItemsWithPrices
	int32_t GetNumItemsWithPrices() // [0x8ed100] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func();
	}
	// Function /Script/SteamCore.Inventory.GetItemsWithPrices
	// bool GetItemsWithPrices(TArray<FSteamItemDef>& ItemDefs, TArray<int32_t>& Prices, TArray<int32_t>& BasePrices);          // [0x8ecf80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetItemsByID
	// bool GetItemsByID(FSteamInventoryResult& InventoryResult, TArray<FSteamItemInstanceID> InstanceIDs);                     // [0x8ece40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetItemPrice
	bool GetItemPrice(FSteamItemDef ItemDef, int32_t& Price, int32_t& BasePrice) // [0x8ecd20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamItemDef, int32_t&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func(ItemDef, Price, BasePrice);
	}
	// Function /Script/SteamCore.Inventory.GetItemDefinitionProperty
	bool GetItemDefinitionProperty(FSteamItemDef ItemDef, FString PropertyName, FString& Value) // [0x8ecb90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamItemDef, FString, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func(ItemDef, PropertyName, Value);
	}
	// Function /Script/SteamCore.Inventory.GetItemDefinitionIDs
	// bool GetItemDefinitionIDs(TArray<FSteamItemDef>& ItemDefs);                                                              // [0x8ecae0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetEligiblePromoItemDefinitionIDs
	// bool GetEligiblePromoItemDefinitionIDs(FSteamID SteamID, TArray<FSteamItemDef>& ItemDefs);                               // [0x8ec9f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetAllItems
	bool GetAllItems(FSteamInventoryResult& Handle) // [0x8ec960] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func(Handle);
	}
	// Function /Script/SteamCore.Inventory.GenerateItems
	// bool GenerateItems(FSteamInventoryResult& Result, TArray<FSteamItemDef> ItemDefs, TArray<int32_t> Quantity);             // [0x8ec7a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.ExchangeItems
	// bool ExchangeItems(FSteamInventoryResult& Result, TArray<FSteamItemDef> ArrayGenerate, TArray<int32_t> ArrayGenerateQuantity, TArray<FSteamItemInstanceID> ArrayDestroy, TArray<int32_t> ArrayDestroyQuantity); // [0x8ec4b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.DestroyResult
	void DestroyResult(FSteamInventoryResult Handle) // [0x8ec430] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamInventoryResult);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		func(Handle);
	}
	// Function /Script/SteamCore.Inventory.DeserializeResult
	bool DeserializeResult(FSteamInventoryResult& Result, TArray<char> Buffer, bool bReservedMustBeFalse) // [0x8ec2a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryResult&, TArray<char>, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		return func(Result, Buffer, bReservedMustBeFalse);
	}
	// Function /Script/SteamCore.Inventory.ConsumeItem
	bool ConsumeItem(FSteamInventoryResult& Result, FSteamItemInstanceID ItemConsume, int32_t Quantity) // [0x8ec180] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryResult&, FSteamItemInstanceID, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		return func(Result, ItemConsume, Quantity);
	}
	// Function /Script/SteamCore.Inventory.CheckResultSteamID
	bool CheckResultSteamID(FSteamInventoryResult Handle, FSteamID SteamIDExpected) // [0x8ec0b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryResult, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		return func(Handle, SteamIDExpected);
	}
	// Function /Script/SteamCore.Inventory.AddPromoItems
	// bool AddPromoItems(FSteamInventoryResult& OutResult, TArray<FSteamItemDef> ItemDefs);                                    // [0x8ebf70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.AddPromoItem
	bool AddPromoItem(FSteamInventoryResult& Result, FSteamItemDef ItemDef) // [0x8ebea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamInventoryResult&, FSteamItemDef);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		return func(Result, ItemDef);
	}
};

/// Class /Script/SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,451) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.RequestEligiblePromoItemDefinitionsIDsAsync
	USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDsAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout) // [0x8edb50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* (*FuncPtr)(UObject*, FSteamID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, SteamID, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.HandleCallback
	void HandleCallback(FSteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful) // [0x8ed5b0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FSteamInventoryEligiblePromoItemDefIDs&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreInventoryAsyncActionRequestPricesResult : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,452) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.RequestPricesAsync
	USteamCoreInventoryAsyncActionRequestPricesResult* RequestPricesAsync(UObject* WorldContextObject, float Timeout) // [0x8edd10] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreInventoryAsyncActionRequestPricesResult* (*FuncPtr)(UObject*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.HandleCallback
	void HandleCallback(FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful) // [0x8ed6a0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FSteamInventoryRequestPricesResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreInventoryAsyncActionStartPurchaseResult : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,453) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.StartPurchaseAsync
	// USteamCoreInventoryAsyncActionStartPurchaseResult* StartPurchaseAsync(UObject* WorldContextObject, TArray<FSteamItemDef> ItemDefs, TArray<int32_t> Quantity, float Timeout); // [0x8ee790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.HandleCallback
	void HandleCallback(FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful) // [0x8ed7a0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FSteamInventoryStartPurchaseResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.Matchmaking
/// Size: 0x01F8 (504 bytes) (0x000048 - 0x0001F8) align 8 MaxSize: 0x01F8
class UMatchmaking : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,454) /* FMulticastInlineDelegate */ __um(FavoritesListAccountsUpdated);                       // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,455) /* FMulticastInlineDelegate */ __um(FavoritesListChanged);                               // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,456) /* FMulticastInlineDelegate */ __um(LobbyChatMsg);                                       // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,457) /* FMulticastInlineDelegate */ __um(LobbyChatUpdate);                                    // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,458) /* FMulticastInlineDelegate */ __um(LobbyDataUpdate);                                    // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,459) /* FMulticastInlineDelegate */ __um(LobbyEnter);                                         // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,460) /* FMulticastInlineDelegate */ __um(LobbyGameCreated);                                   // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,461) /* FMulticastInlineDelegate */ __um(LobbyInvite);                                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,462) /* FMulticastInlineDelegate */ __um(LobbyKicked);                                        // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x120];                                     // 0x00D8   (0x0120)  MISSED


	/// Functions
	// Function /Script/SteamCore.Matchmaking.SetLobbyType
	bool SetLobbyType(FSteamID SteamIDLobby, ESteamLobbyType LobbyType) // [0x8f4240] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, ESteamLobbyType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(SteamIDLobby, LobbyType);
	}
	// Function /Script/SteamCore.Matchmaking.SetLobbyOwner
	bool SetLobbyOwner(FSteamID SteamIDLobby, FSteamID SteamIDNewOwner) // [0x8f4170] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(SteamIDLobby, SteamIDNewOwner);
	}
	// Function /Script/SteamCore.Matchmaking.SetLobbyMemberLimit
	bool SetLobbyMemberLimit(FSteamID SteamIDLobby, int32_t MaxMembers) // [0x8f40a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(SteamIDLobby, MaxMembers);
	}
	// Function /Script/SteamCore.Matchmaking.SetLobbyMemberData
	void SetLobbyMemberData(FSteamID SteamIDLobby, FString Key, FString Value) // [0x8f3f00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamID, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(SteamIDLobby, Key, Value);
	}
	// Function /Script/SteamCore.Matchmaking.SetLobbyJoinable
	bool SetLobbyJoinable(FSteamID SteamIDLobby, bool bLobbyJoinable) // [0x8f3e30] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(SteamIDLobby, bLobbyJoinable);
	}
	// Function /Script/SteamCore.Matchmaking.SetLobbyGameServer
	void SetLobbyGameServer(FSteamID SteamIDLobby, FString GameServerIP, int32_t GameServerPort, FSteamID SteamIDGameServer) // [0x8f3ca0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamID, FString, int32_t, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(SteamIDLobby, GameServerIP, GameServerPort, SteamIDGameServer);
	}
	// Function /Script/SteamCore.Matchmaking.SetLobbyData
	bool SetLobbyData(FSteamID SteamIDLobby, FString Key, FString Value) // [0x8f3af0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(SteamIDLobby, Key, Value);
	}
	// Function /Script/SteamCore.Matchmaking.SetLinkedLobby
	bool SetLinkedLobby(FSteamID SteamIDLobby, FSteamID SteamIDLobbyDependent) // [0x8f3a20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(SteamIDLobby, SteamIDLobbyDependent);
	}
	// Function /Script/SteamCore.Matchmaking.SendLobbyChatMsg
	bool SendLobbyChatMsg(FSteamID SteamIDLobby, FString Message) // [0x8f38f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(SteamIDLobby, Message);
	}
	// Function /Script/SteamCore.Matchmaking.RequestLobbyList
	// void RequestLobbyList(FDelegateProperty& Callback);                                                                      // [0x8f3770] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.RequestLobbyData
	bool RequestLobbyData(FSteamID SteamIDLobby) // [0x8f36e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(SteamIDLobby);
	}
	// Function /Script/SteamCore.Matchmaking.RemoveFavoriteGame
	// bool RemoveFavoriteGame(int32_t AppID, FString IP, int32_t ConnectionPort, int32_t QueryPort, TArray<ESteamFavoriteFlags> Flags); // [0x8f34c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.LeaveLobby
	void LeaveLobby(FSteamID SteamIDLobby) // [0x8f3210] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(SteamIDLobby);
	}
	// Function /Script/SteamCore.Matchmaking.JoinLobby
	// void JoinLobby(FDelegateProperty& Callback, FSteamID SteamIDLobby);                                                      // [0x8f3000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.InviteUserToLobby
	bool InviteUserToLobby(FSteamID SteamIDLobby, FSteamID SteamIDInvitee) // [0x8f2f30] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(SteamIDLobby, SteamIDInvitee);
	}
	// Function /Script/SteamCore.Matchmaking.GetNumLobbyMembers
	int32_t GetNumLobbyMembers(FSteamID SteamIDLobby) // [0x8f2be0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(SteamIDLobby);
	}
	// Function /Script/SteamCore.Matchmaking.GetLobbyOwner
	FSteamID GetLobbyOwner(FSteamID SteamIDLobby) // [0x8f2b50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSteamID (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func(SteamIDLobby);
	}
	// Function /Script/SteamCore.Matchmaking.GetLobbyMemberLimit
	int32_t GetLobbyMemberLimit(FSteamID SteamIDLobby) // [0x8f2ac0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(SteamIDLobby);
	}
	// Function /Script/SteamCore.Matchmaking.GetLobbyMemberData
	FString GetLobbyMemberData(FSteamID SteamIDLobby, FSteamID SteamIDUser, FString Key) // [0x8f2920] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(FSteamID, FSteamID, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(SteamIDLobby, SteamIDUser, Key);
	}
	// Function /Script/SteamCore.Matchmaking.GetLobbyMemberByIndex
	FSteamID GetLobbyMemberByIndex(FSteamID SteamIDLobby, int32_t Member) // [0x8f2850] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSteamID (*FuncPtr)(FSteamID, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func(SteamIDLobby, Member);
	}
	// Function /Script/SteamCore.Matchmaking.GetLobbyGameServer
	bool GetLobbyGameServer(FSteamID SteamIDLobby, FString& GameServerIP, int32_t& GameServerPort, FSteamID& SteamIDGameServer) // [0x8f26d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString&, int32_t&, FSteamID&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(SteamIDLobby, GameServerIP, GameServerPort, SteamIDGameServer);
	}
	// Function /Script/SteamCore.Matchmaking.GetLobbyDataCount
	int32_t GetLobbyDataCount(FSteamID SteamIDLobby) // [0x8f2640] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func(SteamIDLobby);
	}
	// Function /Script/SteamCore.Matchmaking.GetLobbyDataByIndex
	bool GetLobbyDataByIndex(FSteamID SteamIDLobby, int32_t LobbyData, FString& Key, FString& Value) // [0x8f24b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, int32_t, FString&, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func(SteamIDLobby, LobbyData, Key, Value);
	}
	// Function /Script/SteamCore.Matchmaking.GetLobbyData
	FString GetLobbyData(FSteamID SteamIDLobby, FString Key) // [0x8f2340] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(FSteamID, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func(SteamIDLobby, Key);
	}
	// Function /Script/SteamCore.Matchmaking.GetLobbyChatEntry
	int32_t GetLobbyChatEntry(FSteamID SteamIDLobby, int32_t MessageID, FSteamID& SteamIDUser, FString& Message, ESteamChatEntryType& ChatEntryType) // [0x8f2150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamID, int32_t, FSteamID&, FString&, ESteamChatEntryType&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func(SteamIDLobby, MessageID, SteamIDUser, Message, ChatEntryType);
	}
	// Function /Script/SteamCore.Matchmaking.GetLobbyByIndex
	FSteamID GetLobbyByIndex(int32_t Lobby) // [0x8f20c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSteamID (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func(Lobby);
	}
	// Function /Script/SteamCore.Matchmaking.GetFavoriteGameCount
	int32_t GetFavoriteGameCount() // [0x8f2090] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func();
	}
	// Function /Script/SteamCore.Matchmaking.GetFavoriteGame
	// bool GetFavoriteGame(int32_t Game, int32_t& AppID, FString& IP, int32_t& ConnectionPort, int32_t& QueryPort, TArray<ESteamFavoriteFlags>& Flags, int32_t& TimeLastPlayedOnServer); // [0x8f1e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.DeleteLobbyData
	bool DeleteLobbyData(FSteamID SteamIDLobby, FString Key) // [0x8f18b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func(SteamIDLobby, Key);
	}
	// Function /Script/SteamCore.Matchmaking.CreateLobby
	// void CreateLobby(FDelegateProperty& Callback, ESteamLobbyType LobbyType, int32_t MaxMembers);                            // [0x8f10f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListStringFilter
	void AddRequestLobbyListStringFilter(FString KeyToMatch, FString ValueToMatch, ESteamLobbyComparison ComparisonType) // [0x8f0f50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, FString, ESteamLobbyComparison);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		func(KeyToMatch, ValueToMatch, ComparisonType);
	}
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListResultCountFilter
	void AddRequestLobbyListResultCountFilter(int32_t MaxResults) // [0x8f0ed0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		func(MaxResults);
	}
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListNumericalFilter
	void AddRequestLobbyListNumericalFilter(FString KeyToMatch, int32_t ValueToMatch, ESteamLobbyComparison ComparisonType) // [0x8f0d70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, int32_t, ESteamLobbyComparison);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		func(KeyToMatch, ValueToMatch, ComparisonType);
	}
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListNearValueFilter
	void AddRequestLobbyListNearValueFilter(FString KeyToMatch, int32_t ValueToBeCloseTo) // [0x8f0c50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		func(KeyToMatch, ValueToBeCloseTo);
	}
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListFilterSlotsAvailable
	void AddRequestLobbyListFilterSlotsAvailable(int32_t SlotsAvailable) // [0x8f0bd0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		func(SlotsAvailable);
	}
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListDistanceFilter
	void AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter LobbyDistanceFilter) // [0x8f0b60] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ESteamLobbyDistanceFilter);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		func(LobbyDistanceFilter);
	}
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListCompatibleMembersFilter
	void AddRequestLobbyListCompatibleMembersFilter(FSteamID SteamIDLobby) // [0x8f0ae0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		func(SteamIDLobby);
	}
	// Function /Script/SteamCore.Matchmaking.AddFavoriteGame
	// int32_t AddFavoriteGame(int32_t AppID, FString IP, int32_t ConnectionPort, int32_t QueryPort, TArray<ESteamFavoriteFlags> Flags, int32_t TimeLastPlayedOnServer); // [0x8f0880] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreMatchmakingAsyncActionCreateLobby : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,463) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.HandleCallback
	void HandleCallback(FCreateLobbyData& Data, bool bWasSuccessful) // [0x8f2c70] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FCreateLobbyData&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.CreateLobbyAsync
	USteamCoreMatchmakingAsyncActionCreateLobby* CreateLobbyAsync(UObject* WorldContextObject, ESteamLobbyType LobbyType, int32_t MaxMembers, float Timeout) // [0x8f1220] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreMatchmakingAsyncActionCreateLobby* (*FuncPtr)(UObject*, ESteamLobbyType, int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, LobbyType, MaxMembers, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreMatchmakingAsyncActionRequestLobbyList : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,464) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.RequestLobbyListAsync
	USteamCoreMatchmakingAsyncActionRequestLobbyList* RequestLobbyListAsync(UObject* WorldContextObject, float Timeout) // [0x8f3820] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreMatchmakingAsyncActionRequestLobbyList* (*FuncPtr)(UObject*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.HandleCallback
	void HandleCallback(FLobbyMatchList& Data, bool bWasSuccessful) // [0x8f2e50] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FLobbyMatchList&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreMatchmakingAsyncActionJoinLobby : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,465) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.JoinLobbyAsync
	USteamCoreMatchmakingAsyncActionJoinLobby* JoinLobbyAsync(UObject* WorldContextObject, FSteamID SteamIDLobby, float Timeout) // [0x8f3100] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreMatchmakingAsyncActionJoinLobby* (*FuncPtr)(UObject*, FSteamID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, SteamIDLobby, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.HandleCallback
	void HandleCallback(FJoinLobbyData& Data, bool bWasSuccessful) // [0x8f2d60] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FJoinLobbyData&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreCreateSession
/// Size: 0x0140 (320 bytes) (0x000038 - 0x000140) align 8 MaxSize: 0x0140
class USteamCoreCreateSession : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,466) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,467) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0xE8];                                      // 0x0058   (0x00E8)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamCoreCreateSession.CreateSteamCoreSession
	// USteamCoreCreateSession* CreateSteamCoreSession(UObject* WorldContextObject, TMap<FString, FSteamSessionSetting> SessionSettings, FString SessionName, int32_t MaxPlayers, bool bUseLAN, bool bAllowInvites, bool bUsesPresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, float Timeout); // [0x8f1370] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreFindSession
/// Size: 0x00D8 (216 bytes) (0x000038 - 0x0000D8) align 8 MaxSize: 0x00D8
class USteamCoreFindSession : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,468) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x90];                                      // 0x0048   (0x0090)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamCoreFindSession.OnCompleted
	void OnCompleted(bool bSuccessful) // [0x8f3360] Final|Native|Public  
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(bSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreFindSession.FindSteamCoreSessions
	// USteamCoreFindSession* FindSteamCoreSessions(UObject* WorldContextObject, TMap<FString, FSteamSessionSearchSetting> SearchSettings, int32_t MaxResults, bool bUseLAN, ESteamSessionFindType ServerType, bool bEmptyServersOnly, bool bSecureServersOnly, float Timeout); // [0x8f1ab0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreDestroySession
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class USteamCoreDestroySession : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,469) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,470) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0058   (0x0020)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamCoreDestroySession.OnCompleted
	void OnCompleted(FName SessionName, bool bWasSuccessful) // [0x8f3290] Final|Native|Public  
	{
		typedef void (*FuncPtr)(FName, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(SessionName, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreDestroySession.DestroySteamCoreSession
	USteamCoreDestroySession* DestroySteamCoreSession(UObject* WorldContextObject, float Timeout) // [0x8f19e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreDestroySession* (*FuncPtr)(UObject*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreUpdateSession
/// Size: 0x0128 (296 bytes) (0x000038 - 0x000128) align 8 MaxSize: 0x0128
class USteamCoreUpdateSession : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,471) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0xE0];                                      // 0x0048   (0x00E0)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamCoreUpdateSession.UpdateSteamCoreSession
	// USteamCoreUpdateSession* UpdateSteamCoreSession(UObject* WorldContextObject, TMap<FString, FSteamSessionSearchSetting> Settings, FString SessionName, int32_t MaxPlayers); // [0x8f4310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUpdateSession.OnCompleted
	void OnCompleted(FName SessionName, bool bWasSuccessful) // [0x8f33f0] Final|Native|Public  
	{
		typedef void (*FuncPtr)(FName, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(SessionName, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.MatchmakingServers
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UMatchmakingServers : public USteamCoreSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCore.MatchmakingServers.ServerRules
	// void ServerRules(FDelegateProperty& Callback, FString IP, int32_t QueryPort);                                            // [0x8f9d40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestSpectatorServerList
	// void RequestSpectatorServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter); // [0x8f9970] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestLANServerList
	// void RequestLANServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter); // [0x8f95a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestInternetServerList
	// void RequestInternetServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter); // [0x8f91d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestHistoryServerList
	// void RequestHistoryServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter); // [0x8f8e00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestFriendsServerList
	// void RequestFriendsServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter); // [0x8f8a30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestFavoritesServerList
	// void RequestFavoritesServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter); // [0x8f8660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.PingServer
	// void PingServer(FDelegateProperty& Callback, FString IP, int32_t QueryPort);                                             // [0x8f8340] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreMatchmakingServersAsyncActionPingServer : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,472) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.PingServerAsync
	USteamCoreMatchmakingServersAsyncActionPingServer* PingServerAsync(UObject* WorldContextObject, FString IP, int32_t Port, float Timeout) // [0x8f84d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreMatchmakingServersAsyncActionPingServer* (*FuncPtr)(UObject*, FString, int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, IP, Port, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.HandleCallback
	void HandleCallback(FGameServerItem& Data, bool bWasSuccessful) // [0x8f7ed0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameServerItem&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreMatchmakingServersAsyncActionRequestServerList : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,473) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,474) /* FMulticastInlineDelegate */ __um(OnRefreshCompleted);                                 // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestSpectatorServerListAsync
	USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestSpectatorServerListAsync(UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) // [0x8f9b70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreMatchmakingServersAsyncActionRequestServerList* (*FuncPtr)(UObject*, int32_t, float, int32_t, bool, UServerFilter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
	}
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestLANServerListAsync
	USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestLANServerListAsync(UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) // [0x8f97a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreMatchmakingServersAsyncActionRequestServerList* (*FuncPtr)(UObject*, int32_t, float, int32_t, bool, UServerFilter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
	}
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestInternetServerListAsync
	USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestInternetServerListAsync(UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) // [0x8f93d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreMatchmakingServersAsyncActionRequestServerList* (*FuncPtr)(UObject*, int32_t, float, int32_t, bool, UServerFilter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(WorldContextObject, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
	}
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestHistoryServerListAsync
	USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestHistoryServerListAsync(UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) // [0x8f9000] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreMatchmakingServersAsyncActionRequestServerList* (*FuncPtr)(UObject*, int32_t, float, int32_t, bool, UServerFilter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(WorldContextObject, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
	}
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFriendsServerListAsync
	USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFriendsServerListAsync(UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) // [0x8f8c30] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreMatchmakingServersAsyncActionRequestServerList* (*FuncPtr)(UObject*, int32_t, float, int32_t, bool, UServerFilter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(WorldContextObject, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
	}
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFavoritesServerListAsync
	USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFavoritesServerListAsync(UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) // [0x8f8860] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreMatchmakingServersAsyncActionRequestServerList* (*FuncPtr)(UObject*, int32_t, float, int32_t, bool, UServerFilter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(WorldContextObject, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
	}
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleServerListFinished
	void HandleServerListFinished() // [0x8f8320] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func();
	}
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleCallback
	void HandleCallback(FGameServerItem& Data) // [0x8f8080] Final|Native|Private|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameServerItem&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(Data);
	}
};

/// Class /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreMatchmakingServersAsyncActionServerRules : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,475) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.ServerRulesAsync
	USteamCoreMatchmakingServersAsyncActionServerRules* ServerRulesAsync(UObject* WorldContextObject, FString IP, int32_t QueryPort, float Timeout) // [0x8f9ed0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreMatchmakingServersAsyncActionServerRules* (*FuncPtr)(UObject*, FString, int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, IP, QueryPort, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.HandleCallback
	// void HandleCallback(TArray<FGameServerRule>& Data, bool bWasSuccessful);                                                 // [0x8f81f0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.ServerFilter
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UServerFilter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/SteamCore.ServerFilter.GetFilters
	// TMap<FString, FString> GetFilters();                                                                                     // [0x8f7de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterWhitelisted
	void AddFilterWhitelisted() // [0x8f7dc0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterVersion
	void AddFilterVersion(FString Value) // [0x8f7cd0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Value);
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterSecure
	void AddFilterSecure() // [0x8f7cb0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterProxy
	void AddFilterProxy() // [0x8f7c90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func();
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterPassword
	void AddFilterPassword() // [0x8f7c70] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func();
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterOr
	void AddFilterOr(FString Value) // [0x8f7b80] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Value);
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterNotFull
	void AddFilterNotFull() // [0x8f7b60] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func();
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterNotAppId
	void AddFilterNotAppId(FString Value) // [0x8f7a70] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(Value);
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterNor
	void AddFilterNor(FString Value) // [0x8f7980] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(Value);
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterNoPlayers
	void AddFilterNoPlayers() // [0x8f7960] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func();
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterNand
	void AddFilterNand(FString Value) // [0x8f7870] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(Value);
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterName
	void AddFilterName(FString Value) // [0x8f7780] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(Value);
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterMap
	void AddFilterMap(FString Value) // [0x8f7690] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(Value);
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterLinux
	void AddFilterLinux() // [0x8f7670] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func();
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterHasPlayers
	void AddFilterHasPlayers() // [0x8f7650] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func();
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterGameTagsNor
	void AddFilterGameTagsNor(FString Value) // [0x8f7560] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func(Value);
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterGameTagsAnd
	void AddFilterGameTagsAnd(FString Value) // [0x8f7470] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		func(Value);
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterGameDataOr
	void AddFilterGameDataOr(FString Value) // [0x8f7380] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		func(Value);
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterGameDataNor
	void AddFilterGameDataNor(FString Value) // [0x8f7290] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		func(Value);
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterGameDataAnd
	void AddFilterGameDataAnd(FString Value) // [0x8f71a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		func(Value);
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterGameAddr
	void AddFilterGameAddr(FString Value) // [0x8f70b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		func(Value);
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterDedicated
	void AddFilterDedicated() // [0x8f7090] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		func();
	}
	// Function /Script/SteamCore.ServerFilter.AddFilterAnd
	void AddFilterAnd(FString Value) // [0x8f6fa0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		func(Value);
	}
};

/// Class /Script/SteamCore.Music
/// Size: 0x00A8 (168 bytes) (0x000048 - 0x0000A8) align 8 MaxSize: 0x00A8
class UMusic : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,476) /* FMulticastInlineDelegate */ __um(PlaybackStatusHasChanged);                           // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,477) /* FMulticastInlineDelegate */ __um(VolumeHasChanged);                                   // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0068   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.Music.SetVolume
	void SetVolume(float flVolume) // [0x8fe750] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(flVolume);
	}
	// Function /Script/SteamCore.Music.PlayPrevious
	void PlayPrevious() // [0x8fe3f0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/SteamCore.Music.PlayNext
	void PlayNext() // [0x8fe3d0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/SteamCore.Music.Play
	void Play() // [0x8fe3b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/SteamCore.Music.Pause
	void Pause() // [0x8fe390] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func();
	}
	// Function /Script/SteamCore.Music.GetVolume
	float GetVolume() // [0x8fdd30] Final|Native|Public|BlueprintCallable 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/SteamCore.Music.GetPlaybackStatus
	ESteamAudioPlaybackStatus GetPlaybackStatus() // [0x8fdd00] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamAudioPlaybackStatus (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/SteamCore.Music.BIsPlaying
	bool BIsPlaying() // [0x8fc6f0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func();
	}
	// Function /Script/SteamCore.Music.BIsEnabled
	bool BIsEnabled() // [0x8fc540] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
};

/// Class /Script/SteamCore.Networking
/// Size: 0x00A8 (168 bytes) (0x000048 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNetworking : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,478) /* FMulticastInlineDelegate */ __um(OnP2PSessionRequestDelegate);                        // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,479) /* FMulticastInlineDelegate */ __um(OnP2PSessionConnectFailDelegate);                    // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0068   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.Networking.SendP2PPacket
	bool SendP2PPacket(FSteamID SteamIDRemote, TArray<char> Data, ESteamP2PSend P2PSendType, int32_t Channel) // [0x8fe5b0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, TArray<char>, ESteamP2PSend, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(SteamIDRemote, Data, P2PSendType, Channel);
	}
	// Function /Script/SteamCore.Networking.ReadP2PPacket
	bool ReadP2PPacket(TArray<char>& Data, FSteamID& OutSteamIdRemote, int32_t MessageSize, int32_t Channel) // [0x8fe410] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(TArray<char>&, FSteamID&, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Data, OutSteamIdRemote, MessageSize, Channel);
	}
	// Function /Script/SteamCore.Networking.IsP2PPacketAvailable
	bool IsP2PPacketAvailable(int32_t& MessageSize, int32_t Channel) // [0x8fde80] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(MessageSize, Channel);
	}
	// Function /Script/SteamCore.Networking.GetP2PSessionState
	bool GetP2PSessionState(FSteamID SteamIDRemote, FSteamP2PSessionState& ConnectionState) // [0x8fdbf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FSteamP2PSessionState&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(SteamIDRemote, ConnectionState);
	}
	// Function /Script/SteamCore.Networking.CloseP2PSessionWithUser
	bool CloseP2PSessionWithUser(FSteamID SteamIDRemote) // [0x8fcbc0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(SteamIDRemote);
	}
	// Function /Script/SteamCore.Networking.CloseP2PChannelWithUser
	bool CloseP2PChannelWithUser(FSteamID SteamIDRemote, int32_t Channel) // [0x8fcaf0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(SteamIDRemote, Channel);
	}
	// Function /Script/SteamCore.Networking.AllowP2PPacketRelay
	bool AllowP2PPacketRelay(bool bAllow) // [0x8fc360] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(bAllow);
	}
	// Function /Script/SteamCore.Networking.AcceptP2PSessionWithUser
	bool AcceptP2PSessionWithUser(FSteamID SteamIDRemote) // [0x8fc2c0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(SteamIDRemote);
	}
};

/// Class /Script/SteamCore.NetworkingUtils
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNetworkingUtils : public USteamCoreSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCore.NetworkingUtils.ParsePingLocationString
	bool ParsePingLocationString(FString String, FSteamNetworkPingLocation& Result) // [0x8fe230] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, FSteamNetworkPingLocation&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(String, Result);
	}
	// Function /Script/SteamCore.NetworkingUtils.InitRelayNetworkAccess
	void InitRelayNetworkAccess() // [0x8fde60] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/SteamCore.NetworkingUtils.GetLocalPingLocation
	float GetLocalPingLocation(FSteamNetworkPingLocation& Result) // [0x8fda70] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef float (*FuncPtr)(FSteamNetworkPingLocation&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(Result);
	}
	// Function /Script/SteamCore.NetworkingUtils.EstimatePingTimeFromLocalHost
	int32_t EstimatePingTimeFromLocalHost(FSteamNetworkPingLocation& RemoteLocation) // [0x8fd4b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamNetworkPingLocation&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(RemoteLocation);
	}
	// Function /Script/SteamCore.NetworkingUtils.EstimatePingTimeBetweenTwoLocations
	int32_t EstimatePingTimeBetweenTwoLocations(FSteamNetworkPingLocation& Location1, FSteamNetworkPingLocation& Location2) // [0x8fd390] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamNetworkPingLocation&, FSteamNetworkPingLocation&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(Location1, Location2);
	}
	// Function /Script/SteamCore.NetworkingUtils.ConvertPingLocationToString
	void ConvertPingLocationToString(FSteamNetworkPingLocation& Location, FString& String) // [0x8fcc60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamNetworkPingLocation&, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(Location, String);
	}
	// Function /Script/SteamCore.NetworkingUtils.CheckPingDataUpToDate
	bool CheckPingDataUpToDate(float MaxAgeSeconds) // [0x8fca60] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(MaxAgeSeconds);
	}
};

/// Class /Script/SteamCore.ParentalSettings
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UParentalSettings : public USteamCoreSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCore.ParentalSettings.BIsParentalLockLocked
	bool BIsParentalLockLocked() // [0x8fc6c0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/SteamCore.ParentalSettings.BIsParentalLockEnabled
	bool BIsParentalLockEnabled() // [0x8fc690] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/SteamCore.ParentalSettings.BIsFeatureInBlockList
	bool BIsFeatureInBlockList(ESteamParentalFeature Feature) // [0x8fc600] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(ESteamParentalFeature);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(Feature);
	}
	// Function /Script/SteamCore.ParentalSettings.BIsFeatureBlocked
	bool BIsFeatureBlocked(ESteamParentalFeature Feature) // [0x8fc570] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(ESteamParentalFeature);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(Feature);
	}
	// Function /Script/SteamCore.ParentalSettings.BIsAppInBlockList
	bool BIsAppInBlockList(int32_t AppID) // [0x8fc4a0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(AppID);
	}
	// Function /Script/SteamCore.ParentalSettings.BIsAppBlocked
	bool BIsAppBlocked(int32_t AppID) // [0x8fc400] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(AppID);
	}
};

/// Class /Script/SteamCore.SteamParties
/// Size: 0x0168 (360 bytes) (0x000048 - 0x000168) align 8 MaxSize: 0x0168
class USteamParties : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,480) /* FMulticastInlineDelegate */ __um(JoinPartyDelegate);                                  // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,481) /* FMulticastInlineDelegate */ __um(CreateBeaconDelegate);                               // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,482) /* FMulticastInlineDelegate */ __um(ReservationNotificationDelegate);                    // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,483) /* FMulticastInlineDelegate */ __um(ChangeNumOpenSlotsDelegate);                         // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,484) /* FMulticastInlineDelegate */ __um(AvailableBeaconLocationsDelegate);                   // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,485) /* FMulticastInlineDelegate */ __um(ActiveBeaconsDelegate);                              // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0xC0];                                      // 0x00A8   (0x00C0)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamParties.OnReservationCompleted
	void OnReservationCompleted(FPartyBeaconID BeaconID, FSteamID SteamIDUser) // [0x8fe170] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FPartyBeaconID, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(BeaconID, SteamIDUser);
	}
	// Function /Script/SteamCore.SteamParties.JoinParty
	// void JoinParty(FDelegateProperty& Callback, FPartyBeaconID BeaconID);                                                    // [0x8fdf60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.GetNumAvailableBeaconLocations
	bool GetNumAvailableBeaconLocations(int32_t& NumLocations) // [0x8fdb60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(NumLocations);
	}
	// Function /Script/SteamCore.SteamParties.GetNumActiveBeacons
	int32_t GetNumActiveBeacons() // [0x8fdb30] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/SteamCore.SteamParties.GetBeaconLocationData
	bool GetBeaconLocationData(FSteamPartyBeaconLocation BeaconLocation, ESteamPartiesBeaconLocationData EData, FString& PCHDataStringOut) // [0x8fd8e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamPartyBeaconLocation, ESteamPartiesBeaconLocationData, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(BeaconLocation, EData, PCHDataStringOut);
	}
	// Function /Script/SteamCore.SteamParties.GetBeaconDetails
	bool GetBeaconDetails(FPartyBeaconID BeaconID, FSteamID& SteamIDBeaconOwner, FSteamPartyBeaconLocation& Location, FString& OutMetadata) // [0x8fd720] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FPartyBeaconID, FSteamID&, FSteamPartyBeaconLocation&, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(BeaconID, SteamIDBeaconOwner, Location, OutMetadata);
	}
	// Function /Script/SteamCore.SteamParties.GetBeaconByIndex
	FPartyBeaconID GetBeaconByIndex(int32_t Index) // [0x8fd690] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FPartyBeaconID (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(Index);
	}
	// Function /Script/SteamCore.SteamParties.GetAvailableBeaconLocations
	// bool GetAvailableBeaconLocations(TArray<FSteamPartyBeaconLocation>& LocationList, int32_t MaxNumLocations);              // [0x8fd570] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.DestroyBeacon
	bool DestroyBeacon(FPartyBeaconID BeaconID) // [0x8fd300] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FPartyBeaconID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(BeaconID);
	}
	// Function /Script/SteamCore.SteamParties.CreateBeacon
	// void CreateBeacon(FDelegateProperty& Callback, int32_t OpenSlots, FSteamPartyBeaconLocation BeaconLocation, FString ConnectString, FString MetaData); // [0x8fcd70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.ChangeNumOpenSlots
	// void ChangeNumOpenSlots(FDelegateProperty& Callback, FPartyBeaconID BeaconID, int32_t OpenSlots);                        // [0x8fc7e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.CancelReservation
	void CancelReservation(FPartyBeaconID BeaconID, FSteamID SteamIDUser) // [0x8fc720] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FPartyBeaconID, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(BeaconID, SteamIDUser);
	}
};

/// Class /Script/SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreSteamPartiesAsyncActionJoinParty : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,486) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.JoinPartyAsync
	USteamCoreSteamPartiesAsyncActionJoinParty* JoinPartyAsync(UObject* WorldContextObject, FPartyBeaconID BeaconID, float Timeout) // [0x8fe060] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreSteamPartiesAsyncActionJoinParty* (*FuncPtr)(UObject*, FPartyBeaconID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, BeaconID, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.HandleCallback
	void HandleCallback(FJoinPartyData& Data, bool bWasSuccessful) // [0x8fdd60] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FJoinPartyData&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreSteamPartiesAsyncActionCreateBeacon : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,487) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.HandleCallback
	void HandleCallback(FCreateBeaconData& Data, bool bWasSuccessful) // [0x8f2c70] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FCreateBeaconData&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.CreateBeaconAsync
	USteamCoreSteamPartiesAsyncActionCreateBeacon* CreateBeaconAsync(UObject* WorldContextObject, int32_t OpenSlots, FSteamPartyBeaconLocation BeaconLocation, FString ConnectString, FString MetaData, float Timeout) // [0x8fd030] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreSteamPartiesAsyncActionCreateBeacon* (*FuncPtr)(UObject*, int32_t, FSteamPartyBeaconLocation, FString, FString, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, OpenSlots, BeaconLocation, ConnectString, MetaData, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,488) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.HandleCallback
	void HandleCallback(FChangeNumOpenSlotsData& Data, bool bWasSuccessful) // [0x8e0720] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FChangeNumOpenSlotsData&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.ChangeNumOpenSlotsAsync
	USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* ChangeNumOpenSlotsAsync(UObject* WorldContextObject, FPartyBeaconID BeaconID, int32_t OpenSlots, float Timeout) // [0x8fc910] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* (*FuncPtr)(UObject*, FPartyBeaconID, int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, BeaconID, OpenSlots, Timeout);
	}
};

/// Class /Script/SteamCore.RemotePlay
/// Size: 0x00A8 (168 bytes) (0x000048 - 0x0000A8) align 8 MaxSize: 0x00A8
class URemotePlay : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,489) /* FMulticastInlineDelegate */ __um(SteamRemotePlaySessionConnected);                    // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,490) /* FMulticastInlineDelegate */ __um(SteamRemotePlaySessionDisconnected);                 // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0068   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.RemotePlay.GetSessionSteamID
	FSteamID GetSessionSteamID(int32_t SessionID) // [0x901f00] Final|Native|Public|BlueprintCallable 
	{
		typedef FSteamID (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(SessionID);
	}
	// Function /Script/SteamCore.RemotePlay.GetSessionID
	int32_t GetSessionID(int32_t SessionIndex) // [0x901e60] Final|Native|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(SessionIndex);
	}
	// Function /Script/SteamCore.RemotePlay.GetSessionCount
	int32_t GetSessionCount() // [0x901e30] Final|Native|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/SteamCore.RemotePlay.GetSessionClientName
	FString GetSessionClientName(int32_t SessionID) // [0x901d50] Final|Native|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(SessionID);
	}
	// Function /Script/SteamCore.RemotePlay.GetSessionClientFormFactor
	ESteamCoreDeviceFormFactor GetSessionClientFormFactor(int32_t SessionID) // [0x901cb0] Final|Native|Public|BlueprintCallable 
	{
		typedef ESteamCoreDeviceFormFactor (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(SessionID);
	}
	// Function /Script/SteamCore.RemotePlay.BSendRemotePlayTogetherInvite
	bool BSendRemotePlayTogetherInvite(FSteamID SteamIDFriend) // [0x9006d0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(SteamIDFriend);
	}
	// Function /Script/SteamCore.RemotePlay.BGetSessionClientResolution
	bool BGetSessionClientResolution(int32_t SessionID, int32_t& ResolutionX, int32_t& ResolutionY) // [0x9005b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t, int32_t&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(SessionID, ResolutionX, ResolutionY);
	}
};

/// Class /Script/SteamCore.RemoteStorage
/// Size: 0x0108 (264 bytes) (0x000048 - 0x000108) align 8 MaxSize: 0x0108
class URemoteStorage : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,491) /* FMulticastInlineDelegate */ __um(RemoteStorageUnsubscribePublishedFileResult);        // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,492) /* FMulticastInlineDelegate */ __um(RemoteStorageSubscribePublishedFileResult);          // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,493) /* FMulticastInlineDelegate */ __um(RemoteStoragePublishedFileUnsubscribed);             // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,494) /* FMulticastInlineDelegate */ __um(RemoteStoragePublishedFileSubscribed);               // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_7[0x80];                                      // 0x0088   (0x0080)  MISSED


	/// Functions
	// Function /Script/SteamCore.RemoteStorage.UGCRead
	int32_t UGCRead(FSteamUGCHandle Content, TArray<char>& OutData, int32_t DataToRead, int32_t Offset, ESteamUGCReadAction Action) // [0x9028b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamUGCHandle, TArray<char>&, int32_t, int32_t, ESteamUGCReadAction);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Content, OutData, DataToRead, Offset, Action);
	}
	// Function /Script/SteamCore.RemoteStorage.UGCDownloadToLocation
	// void UGCDownloadToLocation(FDelegateProperty& Callback, FSteamUGCHandle Content, FString Location, int32_t Priority);    // [0x9026f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.UGCDownload
	// void UGCDownload(FDelegateProperty& Callback, FSteamUGCHandle Content, int32_t Priority);                                // [0x9025c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.SetSyncPlatforms
	bool SetSyncPlatforms(FString File, ESteamRemoteStoragePlatform RemoteStoragePlatform) // [0x902490] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, ESteamRemoteStoragePlatform);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(File, RemoteStoragePlatform);
	}
	// Function /Script/SteamCore.RemoteStorage.SetCloudEnabledForApp
	void SetCloudEnabledForApp(bool bEnabled) // [0x902410] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(bEnabled);
	}
	// Function /Script/SteamCore.RemoteStorage.IsCloudEnabledForApp
	bool IsCloudEnabledForApp() // [0x9023e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/SteamCore.RemoteStorage.IsCloudEnabledForAccount
	bool IsCloudEnabledForAccount() // [0x9023b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/SteamCore.RemoteStorage.GetUGCDownloadProgress
	bool GetUGCDownloadProgress(FSteamUGCHandle Handle, int32_t& BytesDownloaded, int32_t& BytesExpected) // [0x902290] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamUGCHandle, int32_t&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(Handle, BytesDownloaded, BytesExpected);
	}
	// Function /Script/SteamCore.RemoteStorage.GetUGCDetails
	bool GetUGCDetails(FSteamUGCHandle Handle, int32_t& AppID, FString& Name, int32_t& FileSizeInBytes, FSteamID& SteamIDOwner) // [0x902080] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamUGCHandle, int32_t&, FString&, int32_t&, FSteamID&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(Handle, AppID, Name, FileSizeInBytes, SteamIDOwner);
	}
	// Function /Script/SteamCore.RemoteStorage.GetSyncPlatforms
	ESteamRemoteStoragePlatform GetSyncPlatforms(FString File) // [0x901f90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef ESteamRemoteStoragePlatform (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(File);
	}
	// Function /Script/SteamCore.RemoteStorage.GetQuota
	bool GetQuota(int32_t& TotalBytes, int32_t& AvailableBytes) // [0x901bd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(TotalBytes, AvailableBytes);
	}
	// Function /Script/SteamCore.RemoteStorage.GetFileTimestamp
	int32_t GetFileTimestamp(FString File) // [0x901ae0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(File);
	}
	// Function /Script/SteamCore.RemoteStorage.GetFileSize
	int32_t GetFileSize(FString File) // [0x9019f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(File);
	}
	// Function /Script/SteamCore.RemoteStorage.GetFileNameAndSize
	FString GetFileNameAndSize(int32_t File, int32_t& FileSizeInBytes) // [0x9018d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(int32_t, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(File, FileSizeInBytes);
	}
	// Function /Script/SteamCore.RemoteStorage.GetFileCount
	int32_t GetFileCount() // [0x9018a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func();
	}
	// Function /Script/SteamCore.RemoteStorage.GetCachedUGCHandle
	FSteamUGCHandle GetCachedUGCHandle(int32_t ICachedContent) // [0x901810] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSteamUGCHandle (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(ICachedContent);
	}
	// Function /Script/SteamCore.RemoteStorage.GetCachedUGCCount
	int32_t GetCachedUGCCount() // [0x9017e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func();
	}
	// Function /Script/SteamCore.RemoteStorage.FileWriteStreamWriteChunk
	bool FileWriteStreamWriteChunk(FUGCFileWriteStreamHandle Handle, TArray<char> Data) // [0x9016b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCFileWriteStreamHandle, TArray<char>);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(Handle, Data);
	}
	// Function /Script/SteamCore.RemoteStorage.FileWriteStreamOpen
	FUGCFileWriteStreamHandle FileWriteStreamOpen(FString File) // [0x9015c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FUGCFileWriteStreamHandle (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(File);
	}
	// Function /Script/SteamCore.RemoteStorage.FileWriteStreamClose
	bool FileWriteStreamClose(FUGCFileWriteStreamHandle Handle) // [0x901530] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCFileWriteStreamHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func(Handle);
	}
	// Function /Script/SteamCore.RemoteStorage.FileWriteStreamCancel
	bool FileWriteStreamCancel(FUGCFileWriteStreamHandle Handle) // [0x9014a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCFileWriteStreamHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(Handle);
	}
	// Function /Script/SteamCore.RemoteStorage.FileWriteAsync
	// void FileWriteAsync(FDelegateProperty& Callback, FString File, TArray<char> Data);                                       // [0x9012c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileWrite
	bool FileWrite(FString File, TArray<char> Data) // [0x901150] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, TArray<char>);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func(File, Data);
	}
	// Function /Script/SteamCore.RemoteStorage.FileShare
	// void FileShare(FDelegateProperty& Callback, FString File);                                                               // [0x900ff0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileReadAsyncComplete
	bool FileReadAsyncComplete(FRemoteStorageFileReadAsyncComplete ReadCall, TArray<char>& Buffer, int32_t BytesToRead) // [0x900e80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FRemoteStorageFileReadAsyncComplete, TArray<char>&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func(ReadCall, Buffer, BytesToRead);
	}
	// Function /Script/SteamCore.RemoteStorage.FileReadAsync
	// void FileReadAsync(FDelegateProperty& Callback, FString File, int32_t Offset, int32_t BytesToRead);                      // [0x900cc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileRead
	int32_t FileRead(FString File, TArray<char>& Buffer, int32_t DataToRead) // [0x900b30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FString, TArray<char>&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func(File, Buffer, DataToRead);
	}
	// Function /Script/SteamCore.RemoteStorage.FilePersisted
	bool FilePersisted(FString File) // [0x900a40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func(File);
	}
	// Function /Script/SteamCore.RemoteStorage.FileForget
	bool FileForget(FString File) // [0x900950] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func(File);
	}
	// Function /Script/SteamCore.RemoteStorage.FileExists
	bool FileExists(FString File) // [0x900860] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		return func(File);
	}
	// Function /Script/SteamCore.RemoteStorage.FileDelete
	bool FileDelete(FString File) // [0x900770] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		return func(File);
	}
};

/// Class /Script/SteamCore.Screenshots
/// Size: 0x00A8 (168 bytes) (0x000048 - 0x0000A8) align 8 MaxSize: 0x00A8
class UScreenshots : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,495) /* FMulticastInlineDelegate */ __um(ScreenshotReady);                                    // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,496) /* FMulticastInlineDelegate */ __um(ScreenshotRequested);                                // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0068   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.Screenshots.WriteScreenshot
	FScreenshotHandle WriteScreenshot(TArray<char> PubRGB, int32_t Width, int32_t Height) // [0x90b660] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FScreenshotHandle (*FuncPtr)(TArray<char>, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(PubRGB, Width, Height);
	}
	// Function /Script/SteamCore.Screenshots.TriggerScreenshot
	void TriggerScreenshot() // [0x90b280] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/SteamCore.Screenshots.TagUser
	bool TagUser(FScreenshotHandle Handle, FSteamID SteamID) // [0x90b1b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FScreenshotHandle, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(Handle, SteamID);
	}
	// Function /Script/SteamCore.Screenshots.TagPublishedFile
	bool TagPublishedFile(FScreenshotHandle Handle, FPublishedFileID PublishedFileID) // [0x90b0e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FScreenshotHandle, FPublishedFileID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(Handle, PublishedFileID);
	}
	// Function /Script/SteamCore.Screenshots.SetLocation
	bool SetLocation(FScreenshotHandle Handle, FString Location) // [0x909df0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FScreenshotHandle, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(Handle, Location);
	}
	// Function /Script/SteamCore.Screenshots.IsScreenshotsHooked
	bool IsScreenshotsHooked() // [0x9088f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/SteamCore.Screenshots.HookScreenshots
	void HookScreenshots(bool bHook) // [0x908870] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(bHook);
	}
	// Function /Script/SteamCore.Screenshots.AddVRScreenshotToLibrary
	FScreenshotHandle AddVRScreenshotToLibrary(ESteamVRScreenshotType EType, FString Filename, FString VRFileName) // [0x9065a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FScreenshotHandle (*FuncPtr)(ESteamVRScreenshotType, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(EType, Filename, VRFileName);
	}
	// Function /Script/SteamCore.Screenshots.AddScreenshotToLibrary
	FScreenshotHandle AddScreenshotToLibrary(FString Filename, FString ThumbnailFilename, int32_t Width, int32_t Height) // [0x9063c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FScreenshotHandle (*FuncPtr)(FString, FString, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(Filename, ThumbnailFilename, Width, Height);
	}
};

/// Class /Script/SteamCore.UGC
/// Size: 0x00A8 (168 bytes) (0x000048 - 0x0000A8) align 8 MaxSize: 0x00A8
class UUGC : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,497) /* FMulticastInlineDelegate */ __um(ItemInstalled);                                      // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,498) /* FMulticastInlineDelegate */ __um(DownloadItemResult);                                 // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0068   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.UGC.UpdateItemPreviewVideo
	bool UpdateItemPreviewVideo(FUGCUpdateHandle Handle, int32_t Index, FString PreviewVideo) // [0x90b500] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCUpdateHandle, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Handle, Index, PreviewVideo);
	}
	// Function /Script/SteamCore.UGC.UpdateItemPreviewFile
	bool UpdateItemPreviewFile(FUGCUpdateHandle Handle, int32_t Index, FString PreviewFile) // [0x90b3a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCUpdateHandle, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Handle, Index, PreviewFile);
	}
	// Function /Script/SteamCore.UGC.UnsubscribeItem
	// void UnsubscribeItem(FDelegateProperty& Callback, FPublishedFileID PublishedFileID);                                     // [0x90b2a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SuspendDownloads
	void SuspendDownloads(bool bSuspend) // [0x90b060] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(bSuspend);
	}
	// Function /Script/SteamCore.UGC.SubscribeItem
	// void SubscribeItem(FDelegateProperty& Callback, FPublishedFileID PublishedFileID);                                       // [0x90af60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SubmitItemUpdate
	// void SubmitItemUpdate(FDelegateProperty& Callback, FUGCUpdateHandle Handle, FString ChangeNote);                         // [0x90add0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.StopPlaytimeTrackingForAllItems
	// void StopPlaytimeTrackingForAllItems(FDelegateProperty& Callback);                                                       // [0x90ad20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.StopPlaytimeTracking
	// void StopPlaytimeTracking(FDelegateProperty& Callback, TArray<FPublishedFileID> PublishedFileIDs);                       // [0x90abc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.StartPlaytimeTracking
	// void StartPlaytimeTracking(FDelegateProperty& Callback, TArray<FPublishedFileID> PublishedFileID);                       // [0x90aa60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.StartItemUpdate
	FUGCUpdateHandle StartItemUpdate(int32_t ConsumerAppID, FPublishedFileID PublishedFileID) // [0x90a9a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FUGCUpdateHandle (*FuncPtr)(int32_t, FPublishedFileID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(ConsumerAppID, PublishedFileID);
	}
	// Function /Script/SteamCore.UGC.SetUserItemVote
	// void SetUserItemVote(FDelegateProperty& Callback, FPublishedFileID PublishedFileID, bool bVoteUp);                       // [0x90a870] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetSearchText
	bool SetSearchText(FUGCQueryHandle Handle, FString SearchText) // [0x90a740] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(Handle, SearchText);
	}
	// Function /Script/SteamCore.UGC.SetReturnTotalOnly
	bool SetReturnTotalOnly(FUGCQueryHandle Handle, bool bReturnTotalOnly) // [0x90a670] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(Handle, bReturnTotalOnly);
	}
	// Function /Script/SteamCore.UGC.SetReturnPlaytimeStats
	bool SetReturnPlaytimeStats(FUGCQueryHandle Handle, int32_t Days) // [0x90a5a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(Handle, Days);
	}
	// Function /Script/SteamCore.UGC.SetReturnOnlyIDs
	bool SetReturnOnlyIDs(FUGCQueryHandle Handle, bool bReturnOnlyIDs) // [0x90a4d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(Handle, bReturnOnlyIDs);
	}
	// Function /Script/SteamCore.UGC.SetReturnMetadata
	bool SetReturnMetadata(FUGCQueryHandle Handle, bool bReturnMetadata) // [0x90a400] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(Handle, bReturnMetadata);
	}
	// Function /Script/SteamCore.UGC.SetReturnLongDescription
	bool SetReturnLongDescription(FUGCQueryHandle Handle, bool bReturnLongDescription) // [0x90a330] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func(Handle, bReturnLongDescription);
	}
	// Function /Script/SteamCore.UGC.SetReturnKeyValueTags
	bool SetReturnKeyValueTags(FUGCQueryHandle Handle, bool bReturnKeyValueTags) // [0x90a260] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(Handle, bReturnKeyValueTags);
	}
	// Function /Script/SteamCore.UGC.SetReturnChildren
	bool SetReturnChildren(FUGCQueryHandle Handle, bool bReturnChildren) // [0x90a190] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(Handle, bReturnChildren);
	}
	// Function /Script/SteamCore.UGC.SetReturnAdditionalPreviews
	bool SetReturnAdditionalPreviews(FUGCQueryHandle Handle, bool bReturnAdditionalPreviews) // [0x90a0c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func(Handle, bReturnAdditionalPreviews);
	}
	// Function /Script/SteamCore.UGC.SetRankedByTrendDays
	bool SetRankedByTrendDays(FUGCQueryHandle Handle, int32_t Days) // [0x909ff0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(Handle, Days);
	}
	// Function /Script/SteamCore.UGC.SetMatchAnyTag
	bool SetMatchAnyTag(FUGCQueryHandle Handle, bool bMatchAnyTag) // [0x909f20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func(Handle, bMatchAnyTag);
	}
	// Function /Script/SteamCore.UGC.SetLanguage
	bool SetLanguage(FUGCQueryHandle Handle, FString Language) // [0x909cc0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func(Handle, Language);
	}
	// Function /Script/SteamCore.UGC.SetItemVisibility
	bool SetItemVisibility(FUGCUpdateHandle Handle, ESteamRemoteStoragePublishedFileVisibility Visibility) // [0x909bf0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCUpdateHandle, ESteamRemoteStoragePublishedFileVisibility);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func(Handle, Visibility);
	}
	// Function /Script/SteamCore.UGC.SetItemUpdateLanguage
	bool SetItemUpdateLanguage(FUGCUpdateHandle Handle, FString Language) // [0x909ac0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCUpdateHandle, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func(Handle, Language);
	}
	// Function /Script/SteamCore.UGC.SetItemTitle
	bool SetItemTitle(FUGCUpdateHandle Handle, FString Title) // [0x909990] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCUpdateHandle, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func(Handle, Title);
	}
	// Function /Script/SteamCore.UGC.SetItemTags
	// bool SetItemTags(FUGCUpdateHandle Handle, TArray<FString> Tags);                                                         // [0x9097d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemPreview
	bool SetItemPreview(FUGCUpdateHandle Handle, FString PreviewFile) // [0x9096a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCUpdateHandle, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func(Handle, PreviewFile);
	}
	// Function /Script/SteamCore.UGC.SetItemMetadata
	bool SetItemMetadata(FUGCUpdateHandle Handle, FString MetaData) // [0x909570] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCUpdateHandle, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func(Handle, MetaData);
	}
	// Function /Script/SteamCore.UGC.SetItemDescription
	bool SetItemDescription(FUGCUpdateHandle Handle, FString Description) // [0x909440] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCUpdateHandle, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		return func(Handle, Description);
	}
	// Function /Script/SteamCore.UGC.SetItemContent
	bool SetItemContent(FUGCUpdateHandle Handle, FString ContentFolder) // [0x909310] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCUpdateHandle, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		return func(Handle, ContentFolder);
	}
	// Function /Script/SteamCore.UGC.SetCloudFileNameFilter
	bool SetCloudFileNameFilter(FUGCQueryHandle Handle, FString MatchCloudFileName) // [0x9091e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		return func(Handle, MatchCloudFileName);
	}
	// Function /Script/SteamCore.UGC.SetAllowLegacyUpload
	bool SetAllowLegacyUpload(FUGCUpdateHandle Handle, bool bAllowLegacyUpload) // [0x909110] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCUpdateHandle, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		return func(Handle, bAllowLegacyUpload);
	}
	// Function /Script/SteamCore.UGC.SetAllowCachedResponse
	bool SetAllowCachedResponse(FUGCQueryHandle Handle, int32_t MaxAgeSeconds) // [0x909040] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		return func(Handle, MaxAgeSeconds);
	}
	// Function /Script/SteamCore.UGC.SendQueryUGCRequest
	// void SendQueryUGCRequest(FDelegateProperty& Callback, FUGCQueryHandle Handle);                                           // [0x908f40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.RemoveItemPreview
	bool RemoveItemPreview(FUGCUpdateHandle Handle, int32_t Index) // [0x908e70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCUpdateHandle, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		return func(Handle, Index);
	}
	// Function /Script/SteamCore.UGC.RemoveItemKeyValueTags
	bool RemoveItemKeyValueTags(FUGCUpdateHandle Handle, FString Key) // [0x908d40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCUpdateHandle, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		return func(Handle, Key);
	}
	// Function /Script/SteamCore.UGC.RemoveItemFromFavorites
	// void RemoveItemFromFavorites(FDelegateProperty& Callback, int32_t AppID, FPublishedFileID PublishedFileID);              // [0x908c10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.RemoveDependency
	// void RemoveDependency(FDelegateProperty& Callback, FPublishedFileID ParentPublishedFileID, FPublishedFileID ChildPublishedFileId); // [0x908ae0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.RemoveAppDependency
	// void RemoveAppDependency(FDelegateProperty& Callback, FPublishedFileID PublishedFileID, int32_t AppID);                  // [0x9089b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.ReleaseQueryUGCRequest
	bool ReleaseQueryUGCRequest(FUGCQueryHandle Handle) // [0x908920] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[40]);
		return func(Handle);
	}
	// Function /Script/SteamCore.UGC.GetUserItemVote
	// void GetUserItemVote(FDelegateProperty& Callback, FPublishedFileID PublishedFileID);                                     // [0x908770] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetSubscribedItems
	// int32_t GetSubscribedItems(TArray<FPublishedFileID>& PublishedFileIDs, int32_t MaxEntries);                              // [0x908670] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCTagDisplayName
	bool GetQueryUGCTagDisplayName(FUGCQueryHandle Handle, int32_t Index, int32_t IndexTag, FString& Value) // [0x908510] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, int32_t, int32_t, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[43]);
		return func(Handle, Index, IndexTag, Value);
	}
	// Function /Script/SteamCore.UGC.GetQueryUGCTag
	bool GetQueryUGCTag(FUGCQueryHandle Handle, int32_t Index, int32_t IndexTag, FString& Value) // [0x9083b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, int32_t, int32_t, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[44]);
		return func(Handle, Index, IndexTag, Value);
	}
	// Function /Script/SteamCore.UGC.GetQueryUGCStatistic
	bool GetQueryUGCStatistic(FUGCQueryHandle Handle, int32_t Index, ESteamItemStatistic StatType, FString& StatValue) // [0x908250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, int32_t, ESteamItemStatistic, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[45]);
		return func(Handle, Index, StatType, StatValue);
	}
	// Function /Script/SteamCore.UGC.GetQueryUGCResult
	bool GetQueryUGCResult(FUGCQueryHandle Handle, int32_t Index, FSteamUGCDetails& Details) // [0x908070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, int32_t, FSteamUGCDetails&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[46]);
		return func(Handle, Index, Details);
	}
	// Function /Script/SteamCore.UGC.GetQueryUGCPreviewURL
	bool GetQueryUGCPreviewURL(FUGCQueryHandle Handle, int32_t Index, FString& URL) // [0x907f40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, int32_t, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[47]);
		return func(Handle, Index, URL);
	}
	// Function /Script/SteamCore.UGC.GetQueryUGCNumTags
	int32_t GetQueryUGCNumTags(FUGCQueryHandle Handle, int32_t Index) // [0x907e70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FUGCQueryHandle, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[48]);
		return func(Handle, Index);
	}
	// Function /Script/SteamCore.UGC.GetQueryUGCNumKeyValueTags
	int32_t GetQueryUGCNumKeyValueTags(FUGCQueryHandle Handle, int32_t Index) // [0x907da0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FUGCQueryHandle, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[49]);
		return func(Handle, Index);
	}
	// Function /Script/SteamCore.UGC.GetQueryUGCNumAdditionalPreviews
	int32_t GetQueryUGCNumAdditionalPreviews(FUGCQueryHandle Handle, int32_t Index) // [0x907cd0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FUGCQueryHandle, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[50]);
		return func(Handle, Index);
	}
	// Function /Script/SteamCore.UGC.GetQueryUGCMetadata
	bool GetQueryUGCMetadata(FUGCQueryHandle Handle, int32_t Index, FString& MetaData, int32_t MetadataSize) // [0x907b60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, int32_t, FString&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[51]);
		return func(Handle, Index, MetaData, MetadataSize);
	}
	// Function /Script/SteamCore.UGC.GetQueryUGCKeyValueTag
	bool GetQueryUGCKeyValueTag(FUGCQueryHandle Handle, int32_t Index, int32_t KeyValueTagIndex, FString& Key, FString& Value) // [0x9079a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, int32_t, int32_t, FString&, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[52]);
		return func(Handle, Index, KeyValueTagIndex, Key, Value);
	}
	// Function /Script/SteamCore.UGC.GetQueryUGCChildren
	// bool GetQueryUGCChildren(FUGCQueryHandle Handle, int32_t Index, TArray<FPublishedFileID>& PublishedFileIDs, int32_t MaxEntries); // [0x907830] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCAdditionalPreview
	bool GetQueryUGCAdditionalPreview(FUGCQueryHandle Handle, int32_t Index, int32_t PreviewIndex, FString& URLOrVideoID, FString& OriginalFileName, ESteamItemPreviewType& PreviewType) // [0x907610] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, int32_t, int32_t, FString&, FString&, ESteamItemPreviewType&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[54]);
		return func(Handle, Index, PreviewIndex, URLOrVideoID, OriginalFileName, PreviewType);
	}
	// Function /Script/SteamCore.UGC.GetNumSubscribedItems
	int32_t GetNumSubscribedItems() // [0x9075e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[55]);
		return func();
	}
	// Function /Script/SteamCore.UGC.GetItemUpdateProgress
	ESteamItemUpdateStatus GetItemUpdateProgress(FUGCUpdateHandle Handle, int32_t& BytesProcessed, int32_t& BytesTotal) // [0x9074c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef ESteamItemUpdateStatus (*FuncPtr)(FUGCUpdateHandle, int32_t&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[56]);
		return func(Handle, BytesProcessed, BytesTotal);
	}
	// Function /Script/SteamCore.UGC.GetItemState
	// int32_t GetItemState(FPublishedFileID PublishedFileID, TArray<ESteamItemState>& States);                                 // [0x9073d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetItemInstallInfo
	bool GetItemInstallInfo(FPublishedFileID PublishedFileID, int32_t& SizeOnDisk, FString& Folder, int32_t& Timestamp) // [0x907250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FPublishedFileID, int32_t&, FString&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[58]);
		return func(PublishedFileID, SizeOnDisk, Folder, Timestamp);
	}
	// Function /Script/SteamCore.UGC.GetItemDownloadInfo
	bool GetItemDownloadInfo(FPublishedFileID PublishedFileID, int32_t& BytesDownloaded, int32_t& BytesTotal) // [0x907130] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FPublishedFileID, int32_t&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[59]);
		return func(PublishedFileID, BytesDownloaded, BytesTotal);
	}
	// Function /Script/SteamCore.UGC.GetAppDependencies
	// void GetAppDependencies(FDelegateProperty& Callback, FPublishedFileID PublishedFileID);                                  // [0x907030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.DownloadItem
	bool DownloadItem(FPublishedFileID PublishedFileID, bool bHighPriority) // [0x906f60] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FPublishedFileID, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[61]);
		return func(PublishedFileID, bHighPriority);
	}
	// Function /Script/SteamCore.UGC.DeleteItem
	// void DeleteItem(FDelegateProperty& Callback, FPublishedFileID PublishedFileID);                                          // [0x906e60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.CreateQueryUserUGCRequest
	FUGCQueryHandle CreateQueryUserUGCRequest(FSteamID SteamID, ESteamUserUGCList ListType, ESteamUGCMatchingUGCType MatchingUGCType, ESteamUserUGCListSortOrder SortOrder, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page) // [0x906c40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FUGCQueryHandle (*FuncPtr)(FSteamID, ESteamUserUGCList, ESteamUGCMatchingUGCType, ESteamUserUGCListSortOrder, int32_t, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[63]);
		return func(SteamID, ListType, MatchingUGCType, SortOrder, CreatorAppID, ConsumerAppID, Page);
	}
	// Function /Script/SteamCore.UGC.CreateQueryUGCDetailsRequest
	// FUGCQueryHandle CreateQueryUGCDetailsRequest(TArray<FPublishedFileID> PublishedFileIDs);                                 // [0x906b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.CreateQueryAllUGCRequest
	FUGCQueryHandle CreateQueryAllUGCRequest(ESteamUGCQuery QueryType, ESteamUGCMatchingUGCType FileType, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page) // [0x9069b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FUGCQueryHandle (*FuncPtr)(ESteamUGCQuery, ESteamUGCMatchingUGCType, int32_t, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[65]);
		return func(QueryType, FileType, CreatorAppID, ConsumerAppID, Page);
	}
	// Function /Script/SteamCore.UGC.CreateItem
	// void CreateItem(FDelegateProperty& Callback, int32_t ConsumerAppID, ESteamWorkshopFileType FileType);                    // [0x906880] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.BInitWorkshopForGameServer
	bool BInitWorkshopForGameServer(int32_t WorkshopDepotID, FString Folder) // [0x906750] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[67]);
		return func(WorkshopDepotID, Folder);
	}
	// Function /Script/SteamCore.UGC.AddRequiredTagGroup
	// bool AddRequiredTagGroup(FUGCQueryHandle Handle, TArray<FString> TagGroups);                                             // [0x906200] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddRequiredTag
	bool AddRequiredTag(FUGCQueryHandle Handle, FString TagName) // [0x9060d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[69]);
		return func(Handle, TagName);
	}
	// Function /Script/SteamCore.UGC.AddRequiredKeyValueTag
	bool AddRequiredKeyValueTag(FUGCQueryHandle Handle, FString Key, FString Value) // [0x905f20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[70]);
		return func(Handle, Key, Value);
	}
	// Function /Script/SteamCore.UGC.AddItemToFavorites
	// void AddItemToFavorites(FDelegateProperty& Callback, int32_t AppID, FPublishedFileID PublishedFileID);                   // [0x905df0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddItemPreviewVideo
	bool AddItemPreviewVideo(FUGCUpdateHandle Handle, FString VideoID) // [0x905cc0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCUpdateHandle, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[72]);
		return func(Handle, VideoID);
	}
	// Function /Script/SteamCore.UGC.AddItemPreviewFile
	bool AddItemPreviewFile(FUGCUpdateHandle Handle, FString PreviewFile, ESteamItemPreviewType Type) // [0x905b60] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCUpdateHandle, FString, ESteamItemPreviewType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[73]);
		return func(Handle, PreviewFile, Type);
	}
	// Function /Script/SteamCore.UGC.AddItemKeyValueTag
	bool AddItemKeyValueTag(FUGCUpdateHandle Handle, FString Key, FString Value) // [0x9059b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCUpdateHandle, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[74]);
		return func(Handle, Key, Value);
	}
	// Function /Script/SteamCore.UGC.AddExcludedTag
	bool AddExcludedTag(FUGCQueryHandle Handle, FString TagName) // [0x905880] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FUGCQueryHandle, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[75]);
		return func(Handle, TagName);
	}
	// Function /Script/SteamCore.UGC.AddDependency
	// void AddDependency(FDelegateProperty& Callback, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId); // [0x905750] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddAppDependency
	// void AddAppDependency(FDelegateProperty& Callback, FPublishedFileID PublishedFileID, int32_t AppID);                     // [0x905620] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,499) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.StopPlaytimeTrackingForAllItemsAsync
	USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItemsAsync(UObject* WorldContextObject, float Timeout) // [0x90f2b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* (*FuncPtr)(UObject*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.HandleCallback
	void HandleCallback(FStopPlaytimeTrackingResult& Data, bool bWasSuccessful) // [0x8e0720] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FStopPlaytimeTrackingResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionStopPlaytimeTracking : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,500) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.StopPlaytimeTrackingAsync
	// USteamCoreUGCAsyncActionStopPlaytimeTracking* StopPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout); // [0x90f140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.HandleCallback
	void HandleCallback(FStopPlaytimeTrackingResult& Data, bool bWasSuccessful) // [0x8e0720] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FStopPlaytimeTrackingResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionStartPlaytimeTracking : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,501) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.StartPlaytimeTrackingAsync
	// USteamCoreUGCAsyncActionStartPlaytimeTracking* StartPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout); // [0x90efd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.HandleCallback
	void HandleCallback(FStartPlaytimeTrackingResult& Data, bool bWasSuccessful) // [0x8e0720] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FStartPlaytimeTrackingResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionUnsubscribeItem : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,502) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.UnsubscribeItemAsync
	USteamCoreUGCAsyncActionUnsubscribeItem* UnsubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout) // [0x90f620] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionUnsubscribeItem* (*FuncPtr)(UObject*, FPublishedFileID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, PublishedFileIDs, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.HandleCallback
	void HandleCallback(FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful) // [0x8f2c70] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FRemoteStorageSubscribePublishedFileResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionSubscribeItem
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionSubscribeItem : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,503) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSubscribeItem.SubscribeItemAsync
	USteamCoreUGCAsyncActionSubscribeItem* SubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout) // [0x90f510] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionSubscribeItem* (*FuncPtr)(UObject*, FPublishedFileID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, PublishedFileIDs, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSubscribeItem.HandleCallback
	void HandleCallback(FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful) // [0x8f2c70] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FRemoteStorageSubscribePublishedFileResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionRemoveItemFromFavorites : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,504) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.RemoveItemFromFavoritesAsync
	USteamCoreUGCAsyncActionRemoveItemFromFavorites* RemoveItemFromFavoritesAsync(UObject* WorldContextObject, int32_t AppID, FPublishedFileID PublishedFileID, float Timeout) // [0x90ec10] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionRemoveItemFromFavorites* (*FuncPtr)(UObject*, int32_t, FPublishedFileID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, AppID, PublishedFileID, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.HandleCallback
	void HandleCallback(FUserFavoriteItemsListChanged& Data, bool bWasSuccessful) // [0x90e2d0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FUserFavoriteItemsListChanged&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionAddItemToFavorites : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,505) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.HandleCallback
	void HandleCallback(FUserFavoriteItemsListChanged& Data, bool bWasSuccessful) // [0x90e2d0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FUserFavoriteItemsListChanged&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.AddItemToFavoritesAsync
	USteamCoreUGCAsyncActionAddItemToFavorites* AddItemToFavoritesAsync(UObject* WorldContextObject, int32_t AppID, FPublishedFileID PublishedFileID, float Timeout) // [0x90dba0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionAddItemToFavorites* (*FuncPtr)(UObject*, int32_t, FPublishedFileID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, AppID, PublishedFileID, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionGetUserItemVote
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionGetUserItemVote : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,506) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.HandleCallback
	void HandleCallback(FGetUserItemVoteResult& Data, bool bWasSuccessful) // [0x90e6a0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FGetUserItemVoteResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.GetUserItemVoteAsync
	USteamCoreUGCAsyncActionGetUserItemVote* GetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout) // [0x90e1c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionGetUserItemVote* (*FuncPtr)(UObject*, FPublishedFileID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, PublishedFileID, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionSetUserItemVote
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionSetUserItemVote : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,507) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.SetUserItemVoteAsync
	USteamCoreUGCAsyncActionSetUserItemVote* SetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bVoteUp, float Timeout) // [0x90ee70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionSetUserItemVote* (*FuncPtr)(UObject*, FPublishedFileID, bool, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, PublishedFileID, bVoteUp, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.HandleCallback
	void HandleCallback(FSetUserItemVoteResult& Data, bool bWasSuccessful) // [0x90e2d0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FSetUserItemVoteResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionSubmitItemUpdate : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,508) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.SubmitItemUpdateAsync
	USteamCoreUGCAsyncActionSubmitItemUpdate* SubmitItemUpdateAsync(UObject* WorldContextObject, FUGCUpdateHandle Handle, FString ChangeNote, float Timeout) // [0x90f380] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionSubmitItemUpdate* (*FuncPtr)(UObject*, FUGCUpdateHandle, FString, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Handle, ChangeNote, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.HandleCallback
	void HandleCallback(FSubmitItemUpdateResult& Data, bool bWasSuccessful) // [0x90e880] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FSubmitItemUpdateResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionCreateItem
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionCreateItem : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,509) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionCreateItem.HandleCallback
	void HandleCallback(FCreateItemResult& Data, bool bWasSuccessful) // [0x8e09f0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FCreateItemResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionCreateItem.CreateItemAsync
	USteamCoreUGCAsyncActionCreateItem* CreateItemAsync(UObject* WorldContextObject, int32_t ConsumerAppID, ESteamWorkshopFileType FileType, float Timeout) // [0x90dcf0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionCreateItem* (*FuncPtr)(UObject*, int32_t, ESteamWorkshopFileType, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, ConsumerAppID, FileType, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionSendQueryUGCRequest : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,510) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.SendQueryUGCRequestAsync
	USteamCoreUGCAsyncActionSendQueryUGCRequest* SendQueryUGCRequestAsync(UObject* WorldContextObject, FUGCQueryHandle Handle, float Timeout) // [0x90ed60] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionSendQueryUGCRequest* (*FuncPtr)(UObject*, FUGCQueryHandle, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Handle, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.HandleCallback
	void HandleCallback(FSteamUGCQueryCompleted& Data, bool bWasSuccessful) // [0x90e790] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FSteamUGCQueryCompleted&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionAddAppDependency
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionAddAppDependency : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,511) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddAppDependency.HandleCallback
	void HandleCallback(FAddAppDependencyResult& Data, bool bWasSuccessful) // [0x8e0900] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FAddAppDependencyResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddAppDependency.AddAppDependencyAsync
	USteamCoreUGCAsyncActionAddAppDependency* AddAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, int32_t AppID, float Timeout) // [0x90d900] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionAddAppDependency* (*FuncPtr)(UObject*, FPublishedFileID, int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, PublishedFileID, AppID, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionRemoveAppDependency : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,512) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.RemoveAppDependencyAsync
	USteamCoreUGCAsyncActionRemoveAppDependency* RemoveAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, int32_t AppID, float Timeout) // [0x90e970] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionRemoveAppDependency* (*FuncPtr)(UObject*, FPublishedFileID, int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, PublishedFileID, AppID, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.HandleCallback
	void HandleCallback(FRemoveAppDependencyResult& Data, bool bWasSuccessful) // [0x8e0900] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FRemoveAppDependencyResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionAddUGCDependency
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionAddUGCDependency : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,513) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.HandleCallback
	void HandleCallback(FAddUGCDependencyResult& Data, bool bWasSuccessful) // [0x90e3c0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FAddUGCDependencyResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.AddDependencyAsync
	USteamCoreUGCAsyncActionAddUGCDependency* AddDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId, float Timeout) // [0x90da50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionAddUGCDependency* (*FuncPtr)(UObject*, FPublishedFileID, FPublishedFileID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, PublishedFileID, ChildPublishedFileId, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionRemoveUGCDependency : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,514) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.RemoveDependencyAsync
	USteamCoreUGCAsyncActionRemoveUGCDependency* RemoveDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId, float Timeout) // [0x90eac0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionRemoveUGCDependency* (*FuncPtr)(UObject*, FPublishedFileID, FPublishedFileID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, PublishedFileID, ChildPublishedFileId, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.HandleCallback
	void HandleCallback(FRemoveUGCDependencyResult& Data, bool bWasSuccessful) // [0x90e3c0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FRemoveUGCDependencyResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionDeleteItem
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionDeleteItem : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,515) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionDeleteItem.HandleCallback
	void HandleCallback(FUGCDeleteItemResult& Data, bool bWasSuccessful) // [0x8f2c70] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FUGCDeleteItemResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionDeleteItem.DeleteItemAsync
	USteamCoreUGCAsyncActionDeleteItem* DeleteItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout) // [0x90de40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionDeleteItem* (*FuncPtr)(UObject*, FPublishedFileID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, PublishedFileID, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionGetAppDependencies
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionGetAppDependencies : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,516) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.HandleCallback
	void HandleCallback(FGetAppDependenciesResult& Data, bool bWasSuccessful) // [0x90e5a0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FGetAppDependenciesResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.GetAppDependenciesAsync
	USteamCoreUGCAsyncActionGetAppDependencies* GetAppDependenciesAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout) // [0x90e0b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionGetAppDependencies* (*FuncPtr)(UObject*, FPublishedFileID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, PublishedFileID, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionDownloadItem
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionDownloadItem : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,517) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionDownloadItem.HandleCallback
	void HandleCallback(FDownloadItemResult& Data, bool bWasSuccessful) // [0x90e4b0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FDownloadItemResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionDownloadItem.DownloadItemAsync
	USteamCoreUGCAsyncActionDownloadItem* DownloadItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bHighPriority, float Timeout) // [0x90df50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUGCAsyncActionDownloadItem* (*FuncPtr)(UObject*, FPublishedFileID, bool, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, PublishedFileID, bHighPriority, Timeout);
	}
};

/// Class /Script/SteamCore.User
/// Size: 0x0258 (600 bytes) (0x000048 - 0x000258) align 8 MaxSize: 0x0258
class UUser : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,518) /* FMulticastInlineDelegate */ __um(ClientGameServerDeny);                               // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,519) /* FMulticastInlineDelegate */ __um(GameWebCallback);                                    // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,520) /* FMulticastInlineDelegate */ __um(GetAuthSessionTicketResponse);                       // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,521) /* FMulticastInlineDelegate */ __um(IPCFailure);                                         // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,522) /* FMulticastInlineDelegate */ __um(LicensesUpdated);                                    // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,523) /* FMulticastInlineDelegate */ __um(MicroTxnAuthorizationResponse);                      // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,524) /* FMulticastInlineDelegate */ __um(SteamServerConnectFailure);                          // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,525) /* FMulticastInlineDelegate */ __um(SteamServersConnected);                              // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,526) /* FMulticastInlineDelegate */ __um(SteamServersDisconnected);                           // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,527) /* FMulticastInlineDelegate */ __um(ValidateAuthTicketResponse);                         // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,528) /* FMulticastInlineDelegate */ __um(EncryptedAppTicketResponse);                         // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x160];                                     // 0x00F8   (0x0160)  MISSED


	/// Functions
	// Function /Script/SteamCore.User.UserHasLicenseForApp
	ESteamUserHasLicenseForAppResult UserHasLicenseForApp(FSteamID SteamID, int32_t AppID) // [0x912bc0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef ESteamUserHasLicenseForAppResult (*FuncPtr)(FSteamID, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(SteamID, AppID);
	}
	// Function /Script/SteamCore.User.StopVoiceRecording
	void StopVoiceRecording() // [0x912ba0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/SteamCore.User.StartVoiceRecording
	void StartVoiceRecording() // [0x912b80] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/SteamCore.User.RequestStoreAuthURL
	// void RequestStoreAuthURL(FDelegateProperty& Callback, FString RedirectURL);                                              // [0x912a20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.RequestEncryptedAppTicket
	// void RequestEncryptedAppTicket(FDelegateProperty& Callback, TArray<char> DataToInclude);                                 // [0x9128c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.GetVoiceOptimalSampleRate
	int32_t GetVoiceOptimalSampleRate() // [0x912890] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/SteamCore.User.GetVoice
	ESteamVoiceResult GetVoice(TArray<char>& DestBuffer, int32_t& BytesWritten) // [0x912790] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef ESteamVoiceResult (*FuncPtr)(TArray<char>&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(DestBuffer, BytesWritten);
	}
	// Function /Script/SteamCore.User.GetSteamID_Pure
	FSteamID GetSteamID_Pure() // [0x912750] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FSteamID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func();
	}
	// Function /Script/SteamCore.User.GetSteamID
	FSteamID GetSteamID() // [0x912710] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSteamID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/SteamCore.User.GetPlayerSteamLevel
	int32_t GetPlayerSteamLevel() // [0x9126e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func();
	}
	// Function /Script/SteamCore.User.GetGameBadgeLevel
	int32_t GetGameBadgeLevel(int32_t Series, bool bFoil) // [0x912610] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(int32_t, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(Series, bFoil);
	}
	// Function /Script/SteamCore.User.GetEncryptedAppTicket
	bool GetEncryptedAppTicket(TArray<char>& Ticket) // [0x912560] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(TArray<char>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(Ticket);
	}
	// Function /Script/SteamCore.User.GetAvailableVoice
	ESteamVoiceResult GetAvailableVoice(int32_t& CompressedBytes, int32_t& UncompressedBytes, int32_t UncompressedVoiceDesiredSampleRate) // [0x912440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef ESteamVoiceResult (*FuncPtr)(int32_t&, int32_t&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(CompressedBytes, UncompressedBytes, UncompressedVoiceDesiredSampleRate);
	}
	// Function /Script/SteamCore.User.GetAuthSessionTicket
	FSteamTicketHandle GetAuthSessionTicket(TArray<char>& Ticket) // [0x912390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef FSteamTicketHandle (*FuncPtr)(TArray<char>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(Ticket);
	}
	// Function /Script/SteamCore.User.EndAuthSession
	void EndAuthSession(FSteamID SteamID) // [0x912310] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func(SteamID);
	}
	// Function /Script/SteamCore.User.DecompressVoice
	ESteamVoiceResult DecompressVoice(TArray<char>& CompressedBuffer, int32_t DesiredSampleRate, TArray<char>& DestBuffer) // [0x9121b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef ESteamVoiceResult (*FuncPtr)(TArray<char>&, int32_t, TArray<char>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(CompressedBuffer, DesiredSampleRate, DestBuffer);
	}
	// Function /Script/SteamCore.User.CancelAuthTicket
	void CancelAuthTicket(FSteamTicketHandle TicketHandle) // [0x912130] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamTicketHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func(TicketHandle);
	}
	// Function /Script/SteamCore.User.BLoggedOn
	bool BLoggedOn() // [0x911fd0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func();
	}
	// Function /Script/SteamCore.User.BIsTwoFactorEnabled
	bool BIsTwoFactorEnabled() // [0x911fa0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func();
	}
	// Function /Script/SteamCore.User.BIsPhoneVerified
	bool BIsPhoneVerified() // [0x911f70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func();
	}
	// Function /Script/SteamCore.User.BIsPhoneRequiringVerification
	bool BIsPhoneRequiringVerification() // [0x911f40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func();
	}
	// Function /Script/SteamCore.User.BIsPhoneIdentifying
	bool BIsPhoneIdentifying() // [0x911f10] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func();
	}
	// Function /Script/SteamCore.User.BIsBehindNAT
	bool BIsBehindNAT() // [0x911ee0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func();
	}
	// Function /Script/SteamCore.User.BeginAuthSession
	ESteamBeginAuthSessionResult BeginAuthSession(TArray<char> Ticket, FSteamID SteamID) // [0x912000] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef ESteamBeginAuthSessionResult (*FuncPtr)(TArray<char>, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func(Ticket, SteamID);
	}
	// Function /Script/SteamCore.User.AdvertiseGame
	void AdvertiseGame(FSteamID SteamIDGameServer, FString ServerIP, int32_t ServerPort) // [0x911d80] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamID, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		func(SteamIDGameServer, ServerIP, ServerPort);
	}
};

/// Class /Script/SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserAsyncActionRequestEncryptedAppTicket : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,529) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.RequestEncryptedAppTicketAsync
	USteamCoreUserAsyncActionRequestEncryptedAppTicket* RequestEncryptedAppTicketAsync(UObject* WorldContextObject, TArray<char> DataToInclude, float Timeout) // [0x9187f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUserAsyncActionRequestEncryptedAppTicket* (*FuncPtr)(UObject*, TArray<char>, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, DataToInclude, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.HandleCallback
	void HandleCallback(FEncryptedAppTicketResponse& Data, bool bWasSuccessful) // [0x8e0720] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FEncryptedAppTicketResponse&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserAsyncActionRequestStoreAuthURL : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,530) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.RequestStoreAuthURLAsync
	USteamCoreUserAsyncActionRequestStoreAuthURL* RequestStoreAuthURLAsync(UObject* WorldContextObject, FString RedirectURL, float Timeout) // [0x918ce0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUserAsyncActionRequestStoreAuthURL* (*FuncPtr)(UObject*, FString, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, RedirectURL, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.HandleCallback
	void HandleCallback(FStoreAuthURLResponse& Data, bool bWasSuccessful) // [0x9181b0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FStoreAuthURLResponse&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.UserStats
/// Size: 0x0138 (312 bytes) (0x000048 - 0x000138) align 8 MaxSize: 0x0138
class UUserStats : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,531) /* FMulticastInlineDelegate */ __um(UserAchievementIconFetched);                         // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,532) /* FMulticastInlineDelegate */ __um(UserAchievementStored);                              // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,533) /* FMulticastInlineDelegate */ __um(UserStatsReceived);                                  // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,534) /* FMulticastInlineDelegate */ __um(UserStatsStored);                                    // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,535) /* FMulticastInlineDelegate */ __um(UserStatsUnloaded);                                  // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0xA0];                                      // 0x0098   (0x00A0)  MISSED


	/// Functions
	// Function /Script/SteamCore.UserStats.UploadLeaderboardScore
	// void UploadLeaderboardScore(FDelegateProperty& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32_t Score, TArray<int32_t> ScoreDetails); // [0x9195d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.UpdateAvgRateStat
	bool UpdateAvgRateStat(FString Name, float CountThisSession, float SessionLength) // [0x919470] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Name, CountThisSession, SessionLength);
	}
	// Function /Script/SteamCore.UserStats.StoreStats
	bool StoreStats() // [0x919440] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/SteamCore.UserStats.SetStatInt
	bool SetStatInt(FString Name, int32_t Data) // [0x919310] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(Name, Data);
	}
	// Function /Script/SteamCore.UserStats.SetStatFloat
	bool SetStatFloat(FString Name, float Data) // [0x9191e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(Name, Data);
	}
	// Function /Script/SteamCore.UserStats.SetAchievement
	bool SetAchievement(FString Name) // [0x9190f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(Name);
	}
	// Function /Script/SteamCore.UserStats.ResetAllStats
	bool ResetAllStats(bool bAchievementsToo) // [0x919060] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(bAchievementsToo);
	}
	// Function /Script/SteamCore.UserStats.RequestUserStats
	// void RequestUserStats(FDelegateProperty& Callback, FSteamID SteamID);                                                    // [0x918e50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.RequestGlobalStats
	// void RequestGlobalStats(FDelegateProperty& Callback, int32_t HistoryDays);                                               // [0x918ad0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.RequestGlobalAchievementPercentages
	// void RequestGlobalAchievementPercentages(FDelegateProperty& Callback);                                                   // [0x918950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.RequestCurrentStats
	bool RequestCurrentStats() // [0x9187c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func();
	}
	// Function /Script/SteamCore.UserStats.IndicateAchievementProgress
	bool IndicateAchievementProgress(FString Name, int32_t CurrentProgress, int32_t MaxProgress) // [0x918660] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(Name, CurrentProgress, MaxProgress);
	}
	// Function /Script/SteamCore.UserStats.GetUserStatInteger
	bool GetUserStatInteger(FSteamID SteamIDUser, FString Name, int32_t& Data) // [0x918030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(SteamIDUser, Name, Data);
	}
	// Function /Script/SteamCore.UserStats.GetUserStatFloat
	bool GetUserStatFloat(FSteamID SteamIDUser, FString Name, float& Data) // [0x917eb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(SteamIDUser, Name, Data);
	}
	// Function /Script/SteamCore.UserStats.GetUserAchievementAndUnlockTime
	bool GetUserAchievementAndUnlockTime(FSteamID SteamIDUser, FString Name, bool& bAchieved, int32_t& UnlockTime) // [0x917d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString, bool&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(SteamIDUser, Name, bAchieved, UnlockTime);
	}
	// Function /Script/SteamCore.UserStats.GetUserAchievement
	bool GetUserAchievement(FSteamID SteamIDUser, FString Name, bool& bAchieved) // [0x917b80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamID, FString, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(SteamIDUser, Name, bAchieved);
	}
	// Function /Script/SteamCore.UserStats.GetStatInt
	bool GetStatInt(FString Name, int32_t& Data) // [0x917a40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func(Name, Data);
	}
	// Function /Script/SteamCore.UserStats.GetStatFloat
	bool GetStatFloat(FString Name, float& Data) // [0x917900] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(Name, Data);
	}
	// Function /Script/SteamCore.UserStats.GetNumberOfCurrentPlayers
	// void GetNumberOfCurrentPlayers(FDelegateProperty& Callback);                                                             // [0x917780] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetNumAchievements
	int32_t GetNumAchievements() // [0x917750] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func();
	}
	// Function /Script/SteamCore.UserStats.GetNextMostAchievedAchievementInfo
	int32_t GetNextMostAchievedAchievementInfo(int32_t IteratorPrevious, FString& Name, float& Percent, bool& bAchieved) // [0x9175c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(int32_t, FString&, float&, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(IteratorPrevious, Name, Percent, bAchieved);
	}
	// Function /Script/SteamCore.UserStats.GetMostAchievedAchievementInfo
	int32_t GetMostAchievedAchievementInfo(FString& Name, float& Percent, bool& bAchieved) // [0x917470] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FString&, float&, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func(Name, Percent, bAchieved);
	}
	// Function /Script/SteamCore.UserStats.GetLeaderboardSortMethod
	ESteamLeaderboardSortMethod GetLeaderboardSortMethod(FSteamLeaderboard SteamLeaderboard) // [0x9173e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef ESteamLeaderboardSortMethod (*FuncPtr)(FSteamLeaderboard);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func(SteamLeaderboard);
	}
	// Function /Script/SteamCore.UserStats.GetLeaderboardName
	FString GetLeaderboardName(FSteamLeaderboard SteamLeaderboard) // [0x917310] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(FSteamLeaderboard);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func(SteamLeaderboard);
	}
	// Function /Script/SteamCore.UserStats.GetLeaderboardEntryCount
	int32_t GetLeaderboardEntryCount(FSteamLeaderboard SteamLeaderboard) // [0x917280] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSteamLeaderboard);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func(SteamLeaderboard);
	}
	// Function /Script/SteamCore.UserStats.GetLeaderboardDisplayType
	ESteamLeaderboardDisplayType GetLeaderboardDisplayType(FSteamLeaderboard SteamLeaderboard) // [0x9171f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef ESteamLeaderboardDisplayType (*FuncPtr)(FSteamLeaderboard);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func(SteamLeaderboard);
	}
	// Function /Script/SteamCore.UserStats.GetGlobalStatInt
	bool GetGlobalStatInt(FString StatName, int32_t& Data) // [0x9170b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func(StatName, Data);
	}
	// Function /Script/SteamCore.UserStats.GetGlobalStatHistoryInt
	int32_t GetGlobalStatHistoryInt(FString StatName, int32_t HistoryDays, TArray<int32_t>& Data) // [0x916f20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FString, int32_t, TArray<int32_t>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func(StatName, HistoryDays, Data);
	}
	// Function /Script/SteamCore.UserStats.GetGlobalStatHistoryFloat
	int32_t GetGlobalStatHistoryFloat(FString StatName, int32_t HistoryDays, TArray<float>& Data) // [0x916d90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FString, int32_t, TArray<float>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func(StatName, HistoryDays, Data);
	}
	// Function /Script/SteamCore.UserStats.GetGlobalStatFloat
	bool GetGlobalStatFloat(FString StatName, float& Data) // [0x916c50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		return func(StatName, Data);
	}
	// Function /Script/SteamCore.UserStats.GetDownloadedLeaderboardEntry
	bool GetDownloadedLeaderboardEntry(FSteamLeaderboardEntries LeaderboardEntries, int32_t Index, FSteamLeaderboardEntry& LeaderboardEntry, TArray<int32_t> Details, TArray<int32_t>& outDetails) // [0x916a20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSteamLeaderboardEntries, int32_t, FSteamLeaderboardEntry&, TArray<int32_t>, TArray<int32_t>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		return func(LeaderboardEntries, Index, LeaderboardEntry, Details, outDetails);
	}
	// Function /Script/SteamCore.UserStats.GetAchievementProgressLimitsFloat
	bool GetAchievementProgressLimitsFloat(FString Name, float& MinProgress, float& MaxProgress) // [0x916890] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, float&, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		return func(Name, MinProgress, MaxProgress);
	}
	// Function /Script/SteamCore.UserStats.GetAchievementProgressLimits
	bool GetAchievementProgressLimits(FString Name, int32_t& MinProgress, int32_t& MaxProgress) // [0x916700] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, int32_t&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		return func(Name, MinProgress, MaxProgress);
	}
	// Function /Script/SteamCore.UserStats.GetAchievementName
	FString GetAchievementName(int32_t Achievement) // [0x916630] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		return func(Achievement);
	}
	// Function /Script/SteamCore.UserStats.GetAchievementIcon
	UTexture2D* GetAchievementIcon(FString Name) // [0x916540] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UTexture2D* (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		return func(Name);
	}
	// Function /Script/SteamCore.UserStats.GetAchievementDisplayAttribute
	FString GetAchievementDisplayAttribute(FString Name, FString Key) // [0x916390] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		return func(Name, Key);
	}
	// Function /Script/SteamCore.UserStats.GetAchievementAndUnlockTime
	bool GetAchievementAndUnlockTime(FString Name, bool& bAchieved, int32_t& UnlockTime) // [0x916200] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, bool&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		return func(Name, bAchieved, UnlockTime);
	}
	// Function /Script/SteamCore.UserStats.GetAchievementAchievedPercent
	bool GetAchievementAchievedPercent(FString Name, float& Percent) // [0x9160c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		return func(Name, Percent);
	}
	// Function /Script/SteamCore.UserStats.GetAchievement
	bool GetAchievement(FString Name, bool& bAchieved) // [0x915f80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		return func(Name, bAchieved);
	}
	// Function /Script/SteamCore.UserStats.FindOrCreateLeaderboard
	// void FindOrCreateLeaderboard(FDelegateProperty& Callback, FString LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType); // [0x915be0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.FindLeaderboard
	// void FindLeaderboard(FDelegateProperty& Callback, FString LeaderboardName);                                              // [0x915910] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.DownloadLeaderboardEntriesForUsers
	// void DownloadLeaderboardEntriesForUsers(FDelegateProperty& Callback, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users); // [0x9155f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.DownloadLeaderboardEntries
	// void DownloadLeaderboardEntries(FDelegateProperty& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest DataRequest, int32_t RangeStart, int32_t RangeEnd); // [0x915260] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.ClearAchievement
	bool ClearAchievement(FString Name) // [0x915170] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[43]);
		return func(Name);
	}
	// Function /Script/SteamCore.UserStats.AttachLeaderboardUGC
	// void AttachLeaderboardUGC(FDelegateProperty& Callback, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle);      // [0x914ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionFindLeaderboard : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,536) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.HandleCallback
	void HandleCallback(FLeaderboardFindResult& Data, bool bWasSuccessful) // [0x8e0ae0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FLeaderboardFindResult&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.FindLeaderboardAsync
	USteamCoreUserStatsAsyncActionFindLeaderboard* FindLeaderboardAsync(UObject* WorldContextObject, FString LeaderboardName, float Timeout) // [0x915a70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUserStatsAsyncActionFindLeaderboard* (*FuncPtr)(UObject*, FString, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, LeaderboardName, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,537) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.HandleCallback
	void HandleCallback(FLeaderboardScoresDownloaded& Data, bool bWasSuccessful) // [0x9182b0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FLeaderboardScoresDownloaded&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.DownloadLeaderboardEntriesAsync
	USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* DownloadLeaderboardEntriesAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest Request, int32_t RangeStart, int32_t RangeEnd, float Timeout) // [0x915420] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* (*FuncPtr)(UObject*, FSteamLeaderboard, ESteamLeaderboardDataRequest, int32_t, int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, SteamLeaderboard, Request, RangeStart, RangeEnd, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,538) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.RequestGlobalStatsAsync
	USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* RequestGlobalStatsAsync(UObject* WorldContextObject, int32_t HistoryDays, float Timeout) // [0x918bd0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* (*FuncPtr)(UObject*, int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, HistoryDays, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.HandleCallback
	void HandleCallback(FGlobalStatsReceived& Data, bool bWasSuccessful) // [0x8e0ae0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FGlobalStatsReceived&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,539) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.RequestGlobalAchievementPercentagesAsync
	USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentagesAsync(UObject* WorldContextObject, float Timeout) // [0x918a00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* (*FuncPtr)(UObject*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.HandleCallback
	void HandleCallback(FGlobalAchievementPercentagesReady& Data, bool bWasSuccessful) // [0x8e0ae0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FGlobalAchievementPercentagesReady&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,540) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.HandleCallback
	void HandleCallback(FNumberOfCurrentPlayers& Data, bool bWasSuccessful) // [0x9183a0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FNumberOfCurrentPlayers&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync
	USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(UObject* WorldContextObject, float Timeout) // [0x917830] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* (*FuncPtr)(UObject*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionUploadLeaderboardScore : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,541) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.UploadLeaderboardScoreAsync
	USteamCoreUserStatsAsyncActionUploadLeaderboardScore* UploadLeaderboardScoreAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32_t Score, TArray<int32_t> ScoreDetails, float Timeout) // [0x9197e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* (*FuncPtr)(UObject*, FSteamLeaderboard, ESteamLeaderboardUploadScoreMethod, int32_t, TArray<int32_t>, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, SteamLeaderboard, UploadScoreMethod, Score, ScoreDetails, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.HandleCallback
	void HandleCallback(FLeaderboardScoreUploaded& Data, bool bWasSuccessful) // [0x918570] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FLeaderboardScoreUploaded&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,542) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.HandleCallback
	void HandleCallback(FFindOrCreateLeaderboardData& Data, bool bWasSuccessful) // [0x8e0ae0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FFindOrCreateLeaderboardData&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync
	USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(UObject* WorldContextObject, FString LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType, float Timeout) // [0x915da0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* (*FuncPtr)(UObject*, FString, ESteamLeaderboardSortMethod, ESteamLeaderboardDisplayType, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, LeaderboardName, SortMethod, DisplayType, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionRequestUserStats : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,543) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.RequestUserStatsAsync
	USteamCoreUserStatsAsyncActionRequestUserStats* RequestUserStatsAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout) // [0x918f50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUserStatsAsyncActionRequestUserStats* (*FuncPtr)(UObject*, FSteamID, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, SteamID, Timeout);
	}
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.HandleCallback
	void HandleCallback(FRequestUserStatsData& Data, bool bWasSuccessful) // [0x918480] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FRequestUserStatsData&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Data, bWasSuccessful);
	}
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,544) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.HandleCallback
	void HandleCallback(FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful) // [0x9182b0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FLeaderboardScoresDownloadedForUsers&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.DownloadLeaderboardEntriesForUsersAsync
	// USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsersAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users, float Timeout); // [0x915780] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,545) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.HandleCallback
	void HandleCallback(FAttachLeaderboardUGCData& Data, bool bWasSuccessful) // [0x8e0ae0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FAttachLeaderboardUGCData&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Data, bWasSuccessful);
	}
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.AttachLeaderboardUGCAsync
	USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* AttachLeaderboardUGCAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle, float Timeout) // [0x915020] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* (*FuncPtr)(UObject*, FSteamLeaderboard, FSteamUGCHandle, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, SteamLeaderboard, Handle, Timeout);
	}
};

/// Class /Script/SteamCore.SteamCoreVoice
/// Size: 0x03C0 (960 bytes) (0x0003C0 - 0x0003C0) align 16 MaxSize: 0x03C0
class USteamCoreVoice : public USoundWaveProcedural
{ 
public:


	/// Functions
	// Function /Script/SteamCore.SteamCoreVoice.DestroySteamCoreVoice
	void DestroySteamCoreVoice(USteamCoreVoice* Obj) // [0x91d060] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(USteamCoreVoice*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Obj);
	}
	// Function /Script/SteamCore.SteamCoreVoice.ConstructSteamCoreVoice
	USteamCoreVoice* ConstructSteamCoreVoice(int32_t AudioSampleRate) // [0x91cfd0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class USteamCoreVoice* (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(AudioSampleRate);
	}
	// Function /Script/SteamCore.SteamCoreVoice.AddAudioBuffer
	void AddAudioBuffer(TArray<char>& Buffer) // [0x91c9b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(TArray<char>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Buffer);
	}
};

/// Class /Script/SteamCore.SteamUtilities
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USteamUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SteamCore.SteamUtilities.WriteBytesToFile
	bool WriteBytesToFile(bool bOverwriteIfExists, FString AbsoluteFilePath, TArray<char>& DataBuffer) // [0x91f790] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(bool, FString, TArray<char>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(bOverwriteIfExists, AbsoluteFilePath, DataBuffer);
	}
	// Function /Script/SteamCore.SteamUtilities.SteamItemInstanceID_Equals_Exec
	void SteamItemInstanceID_Equals_Exec(FSteamItemInstanceID A, FSteamItemInstanceID B, ESteamCoreIdentical& Result) // [0x91f670] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamItemInstanceID, FSteamItemInstanceID, ESteamCoreIdentical&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(A, B, Result);
	}
	// Function /Script/SteamCore.SteamUtilities.SteamItemInstanceID_Equals
	bool SteamItemInstanceID_Equals(FSteamItemInstanceID A, FSteamItemInstanceID B) // [0x91f5a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FSteamItemInstanceID, FSteamItemInstanceID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(A, B);
	}
	// Function /Script/SteamCore.SteamUtilities.ReleaseRequest
	void ReleaseRequest() // [0x91f580] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/SteamCore.SteamUtilities.ReadFileToBytes
	TArray<char> ReadFileToBytes(FString AbsoluteFilePath) // [0x91f4a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef TArray<char> (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(AbsoluteFilePath);
	}
	// Function /Script/SteamCore.SteamUtilities.PublishedFileID_NotEquals
	bool PublishedFileID_NotEquals(FPublishedFileID A, FPublishedFileID B) // [0x91f3d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FPublishedFileID, FPublishedFileID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(A, B);
	}
	// Function /Script/SteamCore.SteamUtilities.PublishedFileID_Equals_Exec
	void PublishedFileID_Equals_Exec(FPublishedFileID A, FPublishedFileID B, ESteamCoreIdentical& Result) // [0x91d2e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FPublishedFileID, FPublishedFileID, ESteamCoreIdentical&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(A, B, Result);
	}
	// Function /Script/SteamCore.SteamUtilities.PublishedFileID_Equals
	bool PublishedFileID_Equals(FPublishedFileID A, FPublishedFileID B) // [0x91d210] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FPublishedFileID, FPublishedFileID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(A, B);
	}
	// Function /Script/SteamCore.SteamUtilities.NotEqual
	bool NotEqual(FSteamID A, FSteamID B) // [0x91f3d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FSteamID, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(A, B);
	}
	// Function /Script/SteamCore.SteamUtilities.MakeUGCHandle
	FSteamUGCHandle MakeUGCHandle(FString Value) // [0x91eca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FSteamUGCHandle (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(Value);
	}
	// Function /Script/SteamCore.SteamUtilities.MakeTicketHandle
	FSteamTicketHandle MakeTicketHandle(FString Value) // [0x91f2e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FSteamTicketHandle (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(Value);
	}
	// Function /Script/SteamCore.SteamUtilities.MakeString
	FSteamSessionSetting MakeString(FString Value) // [0x91f120] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FSteamSessionSetting (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(Value);
	}
	// Function /Script/SteamCore.SteamUtilities.MakeSteamID
	FSteamID MakeSteamID(FString Value) // [0x91eca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FSteamID (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(Value);
	}
	// Function /Script/SteamCore.SteamUtilities.MakeSteamGameID
	FSteamGameID MakeSteamGameID(FString Value) // [0x91eca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FSteamGameID (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(Value);
	}
	// Function /Script/SteamCore.SteamUtilities.MakeSearchString
	FSteamSessionSearchSetting MakeSearchString(FString Value) // [0x91efa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FSteamSessionSearchSetting (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(Value);
	}
	// Function /Script/SteamCore.SteamUtilities.MakeSearchInteger
	FSteamSessionSearchSetting MakeSearchInteger(ESteamComparisonOp ComparisonOperator, int32_t Value) // [0x91ee80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FSteamSessionSearchSetting (*FuncPtr)(ESteamComparisonOp, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(ComparisonOperator, Value);
	}
	// Function /Script/SteamCore.SteamUtilities.MakeSearchBool
	FSteamSessionSearchSetting MakeSearchBool(bool bValue) // [0x91ed90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FSteamSessionSearchSetting (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func(bValue);
	}
	// Function /Script/SteamCore.SteamUtilities.MakePublishedFileID
	FPublishedFileID MakePublishedFileID(FString Value) // [0x91eca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FPublishedFileID (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(Value);
	}
	// Function /Script/SteamCore.SteamUtilities.MakeInventoryUpdateHandle
	FSteamInventoryUpdateHandle MakeInventoryUpdateHandle(FString Value) // [0x91eca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FSteamInventoryUpdateHandle (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(Value);
	}
	// Function /Script/SteamCore.SteamUtilities.MakeInteger
	FSteamSessionSetting MakeInteger(int32_t Value) // [0x91eb60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FSteamSessionSetting (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func(Value);
	}
	// Function /Script/SteamCore.SteamUtilities.MakeBool
	FSteamSessionSetting MakeBool(bool bValue) // [0x91ea20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FSteamSessionSetting (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(bValue);
	}
	// Function /Script/SteamCore.SteamUtilities.ListenForSteamMessages
	// void ListenForSteamMessages(FDelegateProperty& Callback);                                                                // [0x91e980] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsValid
	bool IsValid(FSteamID SteamID) // [0x91e8f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func(SteamID);
	}
	// Function /Script/SteamCore.SteamUtilities.IsUsingP2PRelays
	bool IsUsingP2PRelays() // [0x91e8c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func();
	}
	// Function /Script/SteamCore.SteamUtilities.IsUGCHandleValid_Exec
	void IsUGCHandleValid_Exec(FSteamUGCHandle Handle, ESteamCoreValid& Result) // [0x91e7f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamUGCHandle, ESteamCoreValid&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		func(Handle, Result);
	}
	// Function /Script/SteamCore.SteamUtilities.IsUGCHandleValid
	bool IsUGCHandleValid(FSteamUGCHandle Handle) // [0x91e760] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FSteamUGCHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func(Handle);
	}
	// Function /Script/SteamCore.SteamUtilities.IsSteamTicketHandleValid_Exec
	void IsSteamTicketHandleValid_Exec(FSteamTicketHandle Handle, ESteamCoreValid& Result) // [0x91e690] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamTicketHandle, ESteamCoreValid&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		func(Handle, Result);
	}
	// Function /Script/SteamCore.SteamUtilities.IsSteamTicketHandleValid
	bool IsSteamTicketHandleValid(FSteamTicketHandle Handle) // [0x91e600] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FSteamTicketHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func(Handle);
	}
	// Function /Script/SteamCore.SteamUtilities.IsSteamServerInitialized
	bool IsSteamServerInitialized() // [0x91e5d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func();
	}
	// Function /Script/SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid_Exec
	void IsSteamInventoryUpdateHandleValid_Exec(FSteamInventoryUpdateHandle Handle, ESteamCoreValid& Result) // [0x91e500] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamInventoryUpdateHandle, ESteamCoreValid&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		func(Handle, Result);
	}
	// Function /Script/SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid
	bool IsSteamInventoryUpdateHandleValid(FSteamInventoryUpdateHandle Handle) // [0x91e480] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FSteamInventoryUpdateHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		return func(Handle);
	}
	// Function /Script/SteamCore.SteamUtilities.IsSteamIDValid_Exec
	void IsSteamIDValid_Exec(FSteamID SteamID, ESteamCoreValid& Result) // [0x91e310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamID, ESteamCoreValid&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		func(SteamID, Result);
	}
	// Function /Script/SteamCore.SteamUtilities.IsSteamAvailable
	bool IsSteamAvailable() // [0x91e2e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		return func();
	}
	// Function /Script/SteamCore.SteamUtilities.IsRecalculatingPing
	bool IsRecalculatingPing() // [0x91e2b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		return func();
	}
	// Function /Script/SteamCore.SteamUtilities.IsPublishedFileIDValid_Exec
	void IsPublishedFileIDValid_Exec(FPublishedFileID Handle, ESteamCoreValid& Result) // [0x91e1e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FPublishedFileID, ESteamCoreValid&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		func(Handle, Result);
	}
	// Function /Script/SteamCore.SteamUtilities.IsPublishedFileIDValid
	bool IsPublishedFileIDValid(FPublishedFileID PublishedFileID) // [0x91e150] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FPublishedFileID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		return func(PublishedFileID);
	}
	// Function /Script/SteamCore.SteamUtilities.IsLobby
	bool IsLobby(FSteamID SteamID) // [0x91e0c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		return func(SteamID);
	}
	// Function /Script/SteamCore.SteamUtilities.IsGameIDValid_Exec
	void IsGameIDValid_Exec(FSteamGameID GameID, ESteamCoreValid& Result) // [0x91df80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamGameID, ESteamCoreValid&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		func(GameID, Result);
	}
	// Function /Script/SteamCore.SteamUtilities.IsGameIDValid
	bool IsGameIDValid(FSteamGameID GameID) // [0x91de80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FSteamGameID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		return func(GameID);
	}
	// Function /Script/SteamCore.SteamUtilities.GetString
	FString GetString(FSteamSessionSetting Settings, FString& Key) // [0x91dc20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FSteamSessionSetting, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[39]);
		return func(Settings, Key);
	}
	// Function /Script/SteamCore.SteamUtilities.GetSteamIdFromPlayerState
	FSteamID GetSteamIdFromPlayerState(APlayerState* PlayerState) // [0x91db90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSteamID (*FuncPtr)(APlayerState*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[40]);
		return func(PlayerState);
	}
	// Function /Script/SteamCore.SteamUtilities.GetPublicIp
	// void GetPublicIp(FDelegateProperty& Callback);                                                                           // [0x91daf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.GetPingFromHostData
	int32_t GetPingFromHostData(FHostPingData& Data) // [0x91da40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FHostPingData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[42]);
		return func(Data);
	}
	// Function /Script/SteamCore.SteamUtilities.GetInteger
	int32_t GetInteger(FSteamSessionSetting Settings, FString& Key) // [0x91d830] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)(FSteamSessionSetting, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[43]);
		return func(Settings, Key);
	}
	// Function /Script/SteamCore.SteamUtilities.GetHostPingData
	FHostPingData GetHostPingData() // [0x91d7b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FHostPingData (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[44]);
		return func();
	}
	// Function /Script/SteamCore.SteamUtilities.GetBool
	bool GetBool(FSteamSessionSetting Settings, FString& Key) // [0x91d5c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FSteamSessionSetting, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[45]);
		return func(Settings, Key);
	}
	// Function /Script/SteamCore.SteamUtilities.GetAccountType
	ESteamAccountType GetAccountType(FSteamID SteamID) // [0x91d530] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef ESteamAccountType (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[46]);
		return func(SteamID);
	}
	// Function /Script/SteamCore.SteamUtilities.FromUnixTimestamp
	FDateTime FromUnixTimestamp(FString Timestamp) // [0x91d3f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FDateTime (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[47]);
		return func(Timestamp);
	}
	// Function /Script/SteamCore.SteamUtilities.Equal_Exec
	void Equal_Exec(FSteamID A, FSteamID B, ESteamCoreIdentical& Result) // [0x91d2e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSteamID, FSteamID, ESteamCoreIdentical&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[48]);
		func(A, B, Result);
	}
	// Function /Script/SteamCore.SteamUtilities.Equal
	bool Equal(FSteamID A, FSteamID B) // [0x91d210] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FSteamID, FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[49]);
		return func(A, B);
	}
	// Function /Script/SteamCore.SteamUtilities.EncryptString
	FString EncryptString(FString String) // [0x91d0e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[50]);
		return func(String);
	}
	// Function /Script/SteamCore.SteamUtilities.ConstructServerFilter
	UServerFilter* ConstructServerFilter(UObject* WorldContextObject) // [0x91cf40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UServerFilter* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[51]);
		return func(WorldContextObject);
	}
	// Function /Script/SteamCore.SteamUtilities.CancelQuery
	void CancelQuery() // [0x91cf20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[52]);
		func();
	}
	// Function /Script/SteamCore.SteamUtilities.BreakUGCHandle
	FString BreakUGCHandle(FSteamUGCHandle Handle) // [0x91cd80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FSteamUGCHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[53]);
		return func(Handle);
	}
	// Function /Script/SteamCore.SteamUtilities.BreakTicketHandle
	FString BreakTicketHandle(FSteamTicketHandle Handle) // [0x91ce50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FSteamTicketHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[54]);
		return func(Handle);
	}
	// Function /Script/SteamCore.SteamUtilities.BreakSteamID
	FString BreakSteamID(FSteamID SteamID) // [0x91cd80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FSteamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[55]);
		return func(SteamID);
	}
	// Function /Script/SteamCore.SteamUtilities.BreakSteamGameID
	FString BreakSteamGameID(FSteamGameID SteamID) // [0x91cd80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FSteamGameID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[56]);
		return func(SteamID);
	}
	// Function /Script/SteamCore.SteamUtilities.BreakPublishedFileID
	FString BreakPublishedFileID(FPublishedFileID FileID) // [0x91cd80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FPublishedFileID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[57]);
		return func(FileID);
	}
	// Function /Script/SteamCore.SteamUtilities.BreakInventoryUpdateHandle
	FString BreakInventoryUpdateHandle(FSteamInventoryUpdateHandle Handle) // [0x91ccb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FSteamInventoryUpdateHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[58]);
		return func(Handle);
	}
	// Function /Script/SteamCore.SteamUtilities.BP_StringToBytes
	TArray<char> BP_StringToBytes(FString String) // [0x91cb80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef TArray<char> (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[59]);
		return func(String);
	}
	// Function /Script/SteamCore.SteamUtilities.BP_BytesToString
	FString BP_BytesToString(TArray<char> Array) // [0x91ca60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(TArray<char>);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[60]);
		return func(Array);
	}
};

/// Class /Script/SteamCore.Utils
/// Size: 0x0138 (312 bytes) (0x000048 - 0x000138) align 8 MaxSize: 0x0138
class UUtils : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,546) /* FMulticastInlineDelegate */ __um(CheckFileSignature);                                 // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,547) /* FMulticastInlineDelegate */ __um(GamepadTextInputDismissed);                          // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,548) /* FMulticastInlineDelegate */ __um(IPCountry);                                          // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,549) /* FMulticastInlineDelegate */ __um(LowBatteryPower);                                    // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,550) /* FMulticastInlineDelegate */ __um(SteamShutdown);                                      // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0xA0];                                      // 0x0098   (0x00A0)  MISSED


	/// Functions
	// Function /Script/SteamCore.Utils.StartVRDashboard
	void StartVRDashboard() // [0x921aa0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/SteamCore.Utils.ShowGamepadTextInput
	bool ShowGamepadTextInput(ESteamGamepadTextInputMode InputMode, ESteamGamepadTextInputLineMode LineInputMode, FString Description, int32_t CharMax, FString ExistingText) // [0x921880] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(ESteamGamepadTextInputMode, ESteamGamepadTextInputLineMode, FString, int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(InputMode, LineInputMode, Description, CharMax, ExistingText);
	}
	// Function /Script/SteamCore.Utils.SetVRHeadsetStreamingEnabled
	void SetVRHeadsetStreamingEnabled(bool bEnabled) // [0x921800] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(bEnabled);
	}
	// Function /Script/SteamCore.Utils.SetOverlayNotificationPosition
	void SetOverlayNotificationPosition(ESteamNotificationPosition NotificationPosition) // [0x921790] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ESteamNotificationPosition);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(NotificationPosition);
	}
	// Function /Script/SteamCore.Utils.SetOverlayNotificationInset
	void SetOverlayNotificationInset(int32_t HorizontalInset, int32_t VerticalInset) // [0x9216d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(HorizontalInset, VerticalInset);
	}
	// Function /Script/SteamCore.Utils.IsVRHeadsetStreamingEnabled
	bool IsVRHeadsetStreamingEnabled() // [0x9216a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/SteamCore.Utils.IsSteamRunningInVR
	bool IsSteamRunningInVR() // [0x921670] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/SteamCore.Utils.IsSteamInBigPictureMode
	bool IsSteamInBigPictureMode() // [0x921640] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func();
	}
	// Function /Script/SteamCore.Utils.IsSteamChinaLauncher
	bool IsSteamChinaLauncher() // [0x921610] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/SteamCore.Utils.IsOverlayEnabled
	bool IsOverlayEnabled() // [0x9215e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func();
	}
	// Function /Script/SteamCore.Utils.InitFilterText
	bool InitFilterText() // [0x921520] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func();
	}
	// Function /Script/SteamCore.Utils.GetSteamUILanguage
	FString GetSteamUILanguage() // [0x921420] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func();
	}
	// Function /Script/SteamCore.Utils.GetServerRealTime
	int32_t GetServerRealTime() // [0x9213f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func();
	}
	// Function /Script/SteamCore.Utils.GetSecondsSinceComputerActive
	int32_t GetSecondsSinceComputerActive() // [0x9213c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func();
	}
	// Function /Script/SteamCore.Utils.GetSecondsSinceAppActive
	int32_t GetSecondsSinceAppActive() // [0x921390] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func();
	}
	// Function /Script/SteamCore.Utils.GetIPCountry
	FString GetIPCountry() // [0x920f90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func();
	}
	// Function /Script/SteamCore.Utils.GetIPCCallCount
	int32_t GetIPCCallCount() // [0x920f60] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func();
	}
	// Function /Script/SteamCore.Utils.GetImageSize
	bool GetImageSize(int32_t iImage, int32_t& Width, int32_t& Height) // [0x921100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t, int32_t&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(iImage, Width, Height);
	}
	// Function /Script/SteamCore.Utils.GetImageRGBA
	bool GetImageRGBA(int32_t iImage, TArray<char>& OutBuffer) // [0x921010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t, TArray<char>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(iImage, OutBuffer);
	}
	// Function /Script/SteamCore.Utils.GetEnteredGamepadTextLength
	int32_t GetEnteredGamepadTextLength() // [0x920f30] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func();
	}
	// Function /Script/SteamCore.Utils.GetEnteredGamepadTextInput
	bool GetEnteredGamepadTextInput(FString& Text) // [0x920e80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(Text);
	}
	// Function /Script/SteamCore.Utils.GetCurrentBatteryPower
	int32_t GetCurrentBatteryPower() // [0x920e50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func();
	}
	// Function /Script/SteamCore.Utils.GetConnectedUniverse
	ESteamUniverse GetConnectedUniverse() // [0x920e20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef ESteamUniverse (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func();
	}
	// Function /Script/SteamCore.Utils.GetAppID_Pure
	int32_t GetAppID_Pure() // [0x920df0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func();
	}
	// Function /Script/SteamCore.Utils.GetAppID
	int32_t GetAppID() // [0x920df0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func();
	}
	// Function /Script/SteamCore.Utils.BOverlayNeedsPresent
	bool BOverlayNeedsPresent() // [0x920dc0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func();
	}
};

/// Class /Script/SteamCore.Video
/// Size: 0x00A8 (168 bytes) (0x000048 - 0x0000A8) align 8 MaxSize: 0x00A8
class UVideo : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,551) /* FMulticastInlineDelegate */ __um(GetOPFSettingsResult);                               // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,552) /* FMulticastInlineDelegate */ __um(GetVideoURLResult);                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0068   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.Video.IsBroadcasting
	bool IsBroadcasting(int32_t& NumViewers) // [0x921550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(NumViewers);
	}
	// Function /Script/SteamCore.Video.GetVideoURL
	void GetVideoURL(int32_t VideoAppID) // [0x9214a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(VideoAppID);
	}
	// Function /Script/SteamCore.Video.GetOPFStringForApp
	bool GetOPFStringForApp(int32_t VideoAppID, FString& OutBuffer) // [0x9212a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(VideoAppID, OutBuffer);
	}
	// Function /Script/SteamCore.Video.GetOPFSettings
	void GetOPFSettings(int32_t VideoAppID) // [0x921220] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(VideoAppID);
	}
};

#pragma pack(pop)


static_assert(sizeof(USteamCoreSubsystem) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UAppList) == 0x00A8); // 168 bytes (0x000048 - 0x0000A8)
static_assert(sizeof(UApps) == 0x00A8); // 168 bytes (0x000048 - 0x0000A8)
static_assert(sizeof(USteamCoreAsyncAction) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(USteamCoreAppsAsyncActionGetFileDetails) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(ASteamCoreGameMode) == 0x0308); // 776 bytes (0x000308 - 0x000308)
static_assert(sizeof(USteamCore) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USteamCoreSettings) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UFriends) == 0x0318); // 792 bytes (0x000048 - 0x000318)
static_assert(sizeof(USteamCoreFriendsAsyncActionSetPersonaName) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreFriendsAsyncActionDownloadClanActivityCounts) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreFriendsAsyncActionRequestClanOfficerList) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreFriendsAsyncActionJoinClanChatRoom) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreFriendsAsyncActionEnumerateFollowingList) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreFriendsAsyncActionIsFollowing) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreFriendsAsyncActionGetFollowerCount) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreFriendsAsyncActionRequestUserInformation) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(USteamGameSearch) == 0x0198); // 408 bytes (0x000048 - 0x000198)
static_assert(sizeof(USteamGameServer) == 0x0138); // 312 bytes (0x000048 - 0x000138)
static_assert(sizeof(UGameServerStats) == 0x0078); // 120 bytes (0x000048 - 0x000078)
static_assert(sizeof(UInput) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UInventory) == 0x0168); // 360 bytes (0x000048 - 0x000168)
static_assert(sizeof(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreInventoryAsyncActionRequestPricesResult) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreInventoryAsyncActionStartPurchaseResult) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UMatchmaking) == 0x01F8); // 504 bytes (0x000048 - 0x0001F8)
static_assert(sizeof(USteamCoreMatchmakingAsyncActionCreateLobby) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreMatchmakingAsyncActionRequestLobbyList) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreMatchmakingAsyncActionJoinLobby) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreCreateSession) == 0x0140); // 320 bytes (0x000038 - 0x000140)
static_assert(sizeof(USteamCoreFindSession) == 0x00D8); // 216 bytes (0x000038 - 0x0000D8)
static_assert(sizeof(USteamCoreDestroySession) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(USteamCoreUpdateSession) == 0x0128); // 296 bytes (0x000038 - 0x000128)
static_assert(sizeof(UMatchmakingServers) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreMatchmakingServersAsyncActionPingServer) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreMatchmakingServersAsyncActionRequestServerList) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(USteamCoreMatchmakingServersAsyncActionServerRules) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UServerFilter) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMusic) == 0x00A8); // 168 bytes (0x000048 - 0x0000A8)
static_assert(sizeof(UNetworking) == 0x00A8); // 168 bytes (0x000048 - 0x0000A8)
static_assert(sizeof(UNetworkingUtils) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UParentalSettings) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamParties) == 0x0168); // 360 bytes (0x000048 - 0x000168)
static_assert(sizeof(USteamCoreSteamPartiesAsyncActionJoinParty) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreSteamPartiesAsyncActionCreateBeacon) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(URemotePlay) == 0x00A8); // 168 bytes (0x000048 - 0x0000A8)
static_assert(sizeof(URemoteStorage) == 0x0108); // 264 bytes (0x000048 - 0x000108)
static_assert(sizeof(UScreenshots) == 0x00A8); // 168 bytes (0x000048 - 0x0000A8)
static_assert(sizeof(UUGC) == 0x00A8); // 168 bytes (0x000048 - 0x0000A8)
static_assert(sizeof(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionStopPlaytimeTracking) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionStartPlaytimeTracking) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionUnsubscribeItem) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionSubscribeItem) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionRemoveItemFromFavorites) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionAddItemToFavorites) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionGetUserItemVote) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionSetUserItemVote) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionSubmitItemUpdate) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionCreateItem) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionSendQueryUGCRequest) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionAddAppDependency) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionRemoveAppDependency) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionAddUGCDependency) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionRemoveUGCDependency) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionDeleteItem) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionGetAppDependencies) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionDownloadItem) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UUser) == 0x0258); // 600 bytes (0x000048 - 0x000258)
static_assert(sizeof(USteamCoreUserAsyncActionRequestEncryptedAppTicket) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserAsyncActionRequestStoreAuthURL) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UUserStats) == 0x0138); // 312 bytes (0x000048 - 0x000138)
static_assert(sizeof(USteamCoreUserStatsAsyncActionFindLeaderboard) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionUploadLeaderboardScore) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionRequestUserStats) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionAttachLeaderboardUGC) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreVoice) == 0x03C0); // 960 bytes (0x0003C0 - 0x0003C0)
static_assert(sizeof(USteamUtilities) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUtils) == 0x0138); // 312 bytes (0x000048 - 0x000138)
static_assert(sizeof(UVideo) == 0x00A8); // 168 bytes (0x000048 - 0x0000A8)
static_assert(sizeof(FSteamInventoryResult) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSteamInventoryResultReady) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSteamInventoryFullUpdate) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSteamInventoryStartPurchaseResult) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSteamInventoryRequestPricesResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSteamID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSteamInventoryEligiblePromoItemDefIDs) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSteamAppInstalled) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSteamAppUninstalled) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FFileDetailsResult) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FDLCInstalled) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FGameOverlayActivated) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FAvatarImageLoaded) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGameServerChangeRequested) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGameConnectedFriendChatMsg) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameLobbyJoinRequested) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameRichPresenceJoinRequested) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPersonaStateChange) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FClanOfficerListResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFriendRichPresenceUpdate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameConnectedClanChatMsg) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameConnectedChatJoin) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameConnectedChatLeave) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FDownloadClanActivityCountsResult) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FJoinClanChatRoomCompletionResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSetPersonaNameResponse) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(FFriendsGetFollowerCount) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FFriendsIsFollowing) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FFriendsEnumerateFollowingList) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSearchForGameProgressCallback) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FSearchForGameResultCallback) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRequestPlayersForGameProgressCallback) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRequestPlayersForGameResultCallback) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRequestPlayersForGameFinalResultCallback) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSubmitPlayerResultResultCallback) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEndGameResultCallback) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAssociateWithClanResult) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FComputeNewPlayerCompatibilityResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGSPolicyResponse) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGSClientGroupStatus) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FValidateAuthTicketResponse) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGSClientApprove) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGSClientDeny) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGSStatsReceived) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGSStatsStored) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGSStatsUnloaded) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFavoritesListAccountsUpdated) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FFavoritesListChanged) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FLobbyChatMsg) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLobbyChatUpdate) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FLobbyDataUpdate) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLobbyEnterData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLobbyGameCreated) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSteamGameID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLobbyInviteData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLobbyKickedData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLobbyMatchList) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FCreateLobbyData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FJoinLobbyData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSteamSessionSetting) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSteamSessionResult) == 0x0118); // 280 bytes (0x000000 - 0x000118)
static_assert(sizeof(FSteamServerAddr) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FGameServerItem) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FGameServerRule) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FPlaybackStatusHasChanged) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FVolumeHasChanged) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FP2PSessionRequest) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FP2PSessionConnectFail) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPartyBeaconID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FJoinPartyData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FCreateBeaconData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FReservationNotificationData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FChangeNumOpenSlotsData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FSteamRemotePlaySessionConnected) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSteamRemotePlaySessionDisconnected) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPublishedFileID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRemoteStorageUnsubscribePublishedFileResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRemoteStorageSubscribePublishedFileResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRemoteStoragePublishedFileUnsubscribed) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRemoteStoragePublishedFileSubscribed) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRemoteStorageFileWriteAsyncComplete) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FRemoteStorageFileReadAsyncComplete) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSteamUGCHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRemoteStorageDownloadUGCResult) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRemoteStorageFileShareResult) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FScreenshotHandle) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FScreenshotReady) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FScreenshotRequested) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUserFavoriteItemsListChanged) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCreateItemResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSetUserItemVoteResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGetUserItemVoteResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FUGCQueryHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSteamUGCQueryCompleted) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAddAppDependencyResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRemoveAppDependencyResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAddUGCDependencyResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRemoveUGCDependencyResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FUGCDeleteItemResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGetAppDependenciesResult) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSubmitItemUpdateResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FStartPlaytimeTrackingResult) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FStopPlaytimeTrackingResult) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FDownloadItemResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FItemInstalled) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FClientGameServerDeny) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGameWebCallback) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSteamTicketHandle) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FGetAuthSessionTicketResponse) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FIPCFailure) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLicensesUpdated) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMicroTxnAuthorizationResponse) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSteamServersConnected) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FSteamServerConnectFailure) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FSteamServersDisconnected) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FEncryptedAppTicketResponse) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FStoreAuthURLResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FUserAchievementIconFetched) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FUserAchievementStored) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FUserStatsReceived) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FUserStatsStored) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FUserStatsUnloaded) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSteamLeaderboard) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSteamLeaderboardEntries) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLeaderboardScoresDownloaded) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLeaderboardScoresDownloadedForUsers) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRequestUserStatsData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLeaderboardScoreUploaded) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAttachLeaderboardUGCData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLeaderboardFindResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFindOrCreateLeaderboardData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNumberOfCurrentPlayers) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGlobalAchievementPercentagesReady) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGlobalStatsReceived) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCheckFileSignature) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGamepadTextInputDismissed) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FIPCountry) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLowBatteryPower) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSteamShutdown) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGetOPFSettingsResult) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGetVideoURLResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSteamFriendsGroupID) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FInputAnalogActionHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInputDigitalActionHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInputActionSetHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInputHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInputMotionData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FInputDigitalActionData) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FInputAnalogActionData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSteamItemInstanceID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSteamItemDef) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSteamItemDetails) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSteamP2PSessionState) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSteamNetworkPingLocation) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSteamParentalSettingsChanged) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FSteamPartyBeaconLocation) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FUGCFileWriteStreamHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSteamSessionSearchSetting) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FHostPingData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSteamInventoryUpdateHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUGCUpdateHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSteamUGCDetails) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FSteamLeaderboardEntry) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(USteamCoreAsyncAction, m_WorldContextObject) == 0x0030);
static_assert(offsetof(USteamCoreSettings, GameVersion) == 0x0058);
static_assert(offsetof(FSteamInventoryResultReady, Handle) == 0x0000);
static_assert(offsetof(FSteamInventoryResultReady, Result) == 0x0004);
static_assert(offsetof(FSteamInventoryFullUpdate, Handle) == 0x0000);
static_assert(offsetof(FSteamInventoryStartPurchaseResult, Result) == 0x0000);
static_assert(offsetof(FSteamInventoryStartPurchaseResult, OrderId) == 0x0008);
static_assert(offsetof(FSteamInventoryStartPurchaseResult, TransactionId) == 0x0018);
static_assert(offsetof(FSteamInventoryRequestPricesResult, Result) == 0x0000);
static_assert(offsetof(FSteamInventoryRequestPricesResult, Currency) == 0x0008);
static_assert(offsetof(FSteamInventoryEligiblePromoItemDefIDs, Result) == 0x0000);
static_assert(offsetof(FSteamInventoryEligiblePromoItemDefIDs, SteamID) == 0x0008);
static_assert(offsetof(FFileDetailsResult, Result) == 0x0000);
static_assert(offsetof(FFileDetailsResult, SHA) == 0x0008);
static_assert(offsetof(FFileDetailsResult, Flags) == 0x0018);
static_assert(offsetof(FAvatarImageLoaded, SteamID) == 0x0000);
static_assert(offsetof(FAvatarImageLoaded, Image) == 0x0008);
static_assert(offsetof(FGameServerChangeRequested, Server) == 0x0000);
static_assert(offsetof(FGameServerChangeRequested, Password) == 0x0010);
static_assert(offsetof(FGameConnectedFriendChatMsg, SteamIDUser) == 0x0000);
static_assert(offsetof(FGameLobbyJoinRequested, SteamIDLobby) == 0x0000);
static_assert(offsetof(FGameLobbyJoinRequested, SteamIDFriend) == 0x0008);
static_assert(offsetof(FGameRichPresenceJoinRequested, SteamIDFriend) == 0x0000);
static_assert(offsetof(FGameRichPresenceJoinRequested, Connect) == 0x0008);
static_assert(offsetof(FPersonaStateChange, SteamID) == 0x0000);
static_assert(offsetof(FPersonaStateChange, Flags) == 0x0008);
static_assert(offsetof(FClanOfficerListResponse, SteamIDClan) == 0x0000);
static_assert(offsetof(FFriendRichPresenceUpdate, SteamIDFriend) == 0x0000);
static_assert(offsetof(FGameConnectedClanChatMsg, SteamIDUser) == 0x0000);
static_assert(offsetof(FGameConnectedClanChatMsg, SteamIDClanChat) == 0x0008);
static_assert(offsetof(FGameConnectedChatJoin, SteamIDClanChat) == 0x0000);
static_assert(offsetof(FGameConnectedChatJoin, SteamIDUser) == 0x0008);
static_assert(offsetof(FGameConnectedChatLeave, SteamIDClanChat) == 0x0000);
static_assert(offsetof(FGameConnectedChatLeave, SteamIDUser) == 0x0008);
static_assert(offsetof(FJoinClanChatRoomCompletionResult, SteamIDClanChat) == 0x0000);
static_assert(offsetof(FJoinClanChatRoomCompletionResult, ChatRoomEnterResponse) == 0x0008);
static_assert(offsetof(FSetPersonaNameResponse, Result) == 0x0000);
static_assert(offsetof(FFriendsGetFollowerCount, Result) == 0x0000);
static_assert(offsetof(FFriendsGetFollowerCount, SteamID) == 0x0008);
static_assert(offsetof(FFriendsIsFollowing, Result) == 0x0000);
static_assert(offsetof(FFriendsIsFollowing, SteamID) == 0x0008);
static_assert(offsetof(FFriendsEnumerateFollowingList, Result) == 0x0000);
static_assert(offsetof(FFriendsEnumerateFollowingList, SteamIDs) == 0x0008);
static_assert(offsetof(FSearchForGameProgressCallback, SearchID) == 0x0000);
static_assert(offsetof(FSearchForGameProgressCallback, Result) == 0x0010);
static_assert(offsetof(FSearchForGameProgressCallback, LobbyID) == 0x0018);
static_assert(offsetof(FSearchForGameProgressCallback, SteamIDEndedSearch) == 0x0020);
static_assert(offsetof(FSearchForGameResultCallback, SearchID) == 0x0000);
static_assert(offsetof(FSearchForGameResultCallback, Result) == 0x0010);
static_assert(offsetof(FSearchForGameResultCallback, SteamIDHost) == 0x0020);
static_assert(offsetof(FRequestPlayersForGameProgressCallback, Result) == 0x0000);
static_assert(offsetof(FRequestPlayersForGameProgressCallback, SearchID) == 0x0008);
static_assert(offsetof(FRequestPlayersForGameResultCallback, Result) == 0x0000);
static_assert(offsetof(FRequestPlayersForGameResultCallback, SearchID) == 0x0008);
static_assert(offsetof(FRequestPlayersForGameResultCallback, SteamIDPlayerFound) == 0x0018);
static_assert(offsetof(FRequestPlayersForGameResultCallback, SteamIDLobby) == 0x0020);
static_assert(offsetof(FRequestPlayersForGameResultCallback, PlayerAcceptState) == 0x0028);
static_assert(offsetof(FRequestPlayersForGameResultCallback, UniqueGameID) == 0x0040);
static_assert(offsetof(FRequestPlayersForGameFinalResultCallback, Result) == 0x0000);
static_assert(offsetof(FRequestPlayersForGameFinalResultCallback, SearchID) == 0x0008);
static_assert(offsetof(FRequestPlayersForGameFinalResultCallback, UniqueGameID) == 0x0018);
static_assert(offsetof(FSubmitPlayerResultResultCallback, Result) == 0x0000);
static_assert(offsetof(FSubmitPlayerResultResultCallback, UniqueGameID) == 0x0008);
static_assert(offsetof(FSubmitPlayerResultResultCallback, SteamIDPlayer) == 0x0018);
static_assert(offsetof(FEndGameResultCallback, Result) == 0x0000);
static_assert(offsetof(FEndGameResultCallback, UniqueGameID) == 0x0008);
static_assert(offsetof(FAssociateWithClanResult, Result) == 0x0000);
static_assert(offsetof(FComputeNewPlayerCompatibilityResult, Result) == 0x0000);
static_assert(offsetof(FComputeNewPlayerCompatibilityResult, SteamIDCandidate) == 0x0010);
static_assert(offsetof(FGSClientGroupStatus, SteamIDUser) == 0x0000);
static_assert(offsetof(FGSClientGroupStatus, SteamIDGroup) == 0x0008);
static_assert(offsetof(FValidateAuthTicketResponse, SteamID) == 0x0000);
static_assert(offsetof(FValidateAuthTicketResponse, AuthSessionResponse) == 0x0008);
static_assert(offsetof(FValidateAuthTicketResponse, OwnerSteamID) == 0x0010);
static_assert(offsetof(FGSClientApprove, SteamID) == 0x0000);
static_assert(offsetof(FGSClientApprove, OwnerSteamID) == 0x0008);
static_assert(offsetof(FGSClientDeny, SteamID) == 0x0000);
static_assert(offsetof(FGSClientDeny, DenyReason) == 0x0008);
static_assert(offsetof(FGSClientDeny, OptionalText) == 0x0010);
static_assert(offsetof(FGSStatsReceived, Result) == 0x0000);
static_assert(offsetof(FGSStatsReceived, SteamIDUser) == 0x0008);
static_assert(offsetof(FGSStatsStored, Result) == 0x0000);
static_assert(offsetof(FGSStatsStored, SteamIDUser) == 0x0008);
static_assert(offsetof(FGSStatsUnloaded, SteamIDUser) == 0x0000);
static_assert(offsetof(FFavoritesListAccountsUpdated, Result) == 0x0000);
static_assert(offsetof(FFavoritesListChanged, IP) == 0x0000);
static_assert(offsetof(FFavoritesListChanged, Flags) == 0x0020);
static_assert(offsetof(FFavoritesListChanged, SteamID) == 0x0038);
static_assert(offsetof(FLobbyChatMsg, SteamIDLobby) == 0x0000);
static_assert(offsetof(FLobbyChatMsg, SteamIDUser) == 0x0008);
static_assert(offsetof(FLobbyChatMsg, ChatEntryType) == 0x0010);
static_assert(offsetof(FLobbyChatUpdate, SteamIDLobby) == 0x0000);
static_assert(offsetof(FLobbyChatUpdate, SteamIDUserChanged) == 0x0008);
static_assert(offsetof(FLobbyChatUpdate, SteamIDMakingChange) == 0x0010);
static_assert(offsetof(FLobbyChatUpdate, ChatMemberStateChange) == 0x0018);
static_assert(offsetof(FLobbyDataUpdate, SteamIDLobby) == 0x0000);
static_assert(offsetof(FLobbyDataUpdate, SteamIDMember) == 0x0008);
static_assert(offsetof(FLobbyEnterData, SteamIDLobby) == 0x0000);
static_assert(offsetof(FLobbyEnterData, ChatRoomEnterResponse) == 0x0009);
static_assert(offsetof(FLobbyGameCreated, SteamIDLobby) == 0x0000);
static_assert(offsetof(FLobbyGameCreated, SteamIDGameServer) == 0x0008);
static_assert(offsetof(FLobbyGameCreated, IP) == 0x0010);
static_assert(offsetof(FLobbyInviteData, SteamIDUser) == 0x0000);
static_assert(offsetof(FLobbyInviteData, SteamIDLobby) == 0x0008);
static_assert(offsetof(FLobbyInviteData, GameID) == 0x0010);
static_assert(offsetof(FLobbyKickedData, SteamIDLobby) == 0x0000);
static_assert(offsetof(FLobbyKickedData, SteamIDAdmin) == 0x0008);
static_assert(offsetof(FCreateLobbyData, Result) == 0x0000);
static_assert(offsetof(FCreateLobbyData, SteamIDLobby) == 0x0008);
static_assert(offsetof(FJoinLobbyData, SteamIDLobby) == 0x0000);
static_assert(offsetof(FJoinLobbyData, ChatRoomEnterResponse) == 0x0009);
static_assert(offsetof(FSteamSessionResult, Result) == 0x0000);
static_assert(offsetof(FSteamSessionResult, SessionSettings) == 0x0108);
static_assert(offsetof(FSteamServerAddr, IP) == 0x0000);
static_assert(offsetof(FSteamServerAddr, ConnectionAddressString) == 0x0018);
static_assert(offsetof(FSteamServerAddr, SteamP2PAddr) == 0x0028);
static_assert(offsetof(FGameServerItem, ServerName) == 0x0000);
static_assert(offsetof(FGameServerItem, MapName) == 0x0010);
static_assert(offsetof(FGameServerItem, GameDescription) == 0x0020);
static_assert(offsetof(FGameServerItem, GameTags) == 0x0030);
static_assert(offsetof(FGameServerItem, SteamServerAddr) == 0x0040);
static_assert(offsetof(FGameServerRule, Name) == 0x0000);
static_assert(offsetof(FGameServerRule, Value) == 0x0010);
static_assert(offsetof(FP2PSessionRequest, SteamIDRemote) == 0x0000);
static_assert(offsetof(FP2PSessionConnectFail, SteamIDRemote) == 0x0000);
static_assert(offsetof(FP2PSessionConnectFail, P2PSessionError) == 0x0008);
static_assert(offsetof(FJoinPartyData, Result) == 0x0000);
static_assert(offsetof(FJoinPartyData, BeaconID) == 0x0008);
static_assert(offsetof(FJoinPartyData, SteamIDBeaconOwner) == 0x0010);
static_assert(offsetof(FJoinPartyData, ConnectString) == 0x0018);
static_assert(offsetof(FCreateBeaconData, Result) == 0x0000);
static_assert(offsetof(FCreateBeaconData, BeaconID) == 0x0008);
static_assert(offsetof(FReservationNotificationData, BeaconID) == 0x0000);
static_assert(offsetof(FReservationNotificationData, SteamIDJoiner) == 0x0008);
static_assert(offsetof(FChangeNumOpenSlotsData, Result) == 0x0000);
static_assert(offsetof(FRemoteStorageUnsubscribePublishedFileResult, Result) == 0x0000);
static_assert(offsetof(FRemoteStorageUnsubscribePublishedFileResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FRemoteStorageSubscribePublishedFileResult, Result) == 0x0000);
static_assert(offsetof(FRemoteStorageSubscribePublishedFileResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FRemoteStoragePublishedFileUnsubscribed, PublishedFileID) == 0x0000);
static_assert(offsetof(FRemoteStoragePublishedFileSubscribed, PublishedFileID) == 0x0000);
static_assert(offsetof(FRemoteStorageFileWriteAsyncComplete, Result) == 0x0000);
static_assert(offsetof(FRemoteStorageFileReadAsyncComplete, Result) == 0x0000);
static_assert(offsetof(FRemoteStorageDownloadUGCResult, Result) == 0x0000);
static_assert(offsetof(FRemoteStorageDownloadUGCResult, FileHandle) == 0x0008);
static_assert(offsetof(FRemoteStorageDownloadUGCResult, Filename) == 0x0018);
static_assert(offsetof(FRemoteStorageDownloadUGCResult, SteamIDOwner) == 0x0028);
static_assert(offsetof(FRemoteStorageFileShareResult, Result) == 0x0000);
static_assert(offsetof(FRemoteStorageFileShareResult, File) == 0x0008);
static_assert(offsetof(FRemoteStorageFileShareResult, Filename) == 0x0010);
static_assert(offsetof(FScreenshotReady, Handle) == 0x0000);
static_assert(offsetof(FScreenshotReady, Result) == 0x0004);
static_assert(offsetof(FUserFavoriteItemsListChanged, PublishedFileID) == 0x0000);
static_assert(offsetof(FUserFavoriteItemsListChanged, Result) == 0x0008);
static_assert(offsetof(FCreateItemResult, Result) == 0x0000);
static_assert(offsetof(FCreateItemResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FSetUserItemVoteResult, PublishedFileID) == 0x0000);
static_assert(offsetof(FSetUserItemVoteResult, Result) == 0x0008);
static_assert(offsetof(FGetUserItemVoteResult, PublishedFileID) == 0x0000);
static_assert(offsetof(FGetUserItemVoteResult, Result) == 0x0008);
static_assert(offsetof(FSteamUGCQueryCompleted, Handle) == 0x0000);
static_assert(offsetof(FSteamUGCQueryCompleted, Result) == 0x0008);
static_assert(offsetof(FAddAppDependencyResult, Result) == 0x0000);
static_assert(offsetof(FAddAppDependencyResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FRemoveAppDependencyResult, Result) == 0x0000);
static_assert(offsetof(FRemoveAppDependencyResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FAddUGCDependencyResult, Result) == 0x0000);
static_assert(offsetof(FAddUGCDependencyResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FAddUGCDependencyResult, ChildPublishedFileId) == 0x0010);
static_assert(offsetof(FRemoveUGCDependencyResult, Result) == 0x0000);
static_assert(offsetof(FRemoveUGCDependencyResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FRemoveUGCDependencyResult, ChildPublishedFileId) == 0x0010);
static_assert(offsetof(FUGCDeleteItemResult, Result) == 0x0000);
static_assert(offsetof(FUGCDeleteItemResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FGetAppDependenciesResult, Result) == 0x0000);
static_assert(offsetof(FGetAppDependenciesResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FGetAppDependenciesResult, AppIDs) == 0x0010);
static_assert(offsetof(FSubmitItemUpdateResult, Result) == 0x0000);
static_assert(offsetof(FSubmitItemUpdateResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FStartPlaytimeTrackingResult, Result) == 0x0000);
static_assert(offsetof(FStopPlaytimeTrackingResult, Result) == 0x0000);
static_assert(offsetof(FDownloadItemResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FDownloadItemResult, Result) == 0x0010);
static_assert(offsetof(FItemInstalled, PublishedFileID) == 0x0008);
static_assert(offsetof(FClientGameServerDeny, GameServerIP) == 0x0008);
static_assert(offsetof(FClientGameServerDeny, Reason) == 0x001D);
static_assert(offsetof(FGameWebCallback, URL) == 0x0000);
static_assert(offsetof(FGetAuthSessionTicketResponse, AuthTicket) == 0x0000);
static_assert(offsetof(FGetAuthSessionTicketResponse, Result) == 0x0004);
static_assert(offsetof(FIPCFailure, FailureType) == 0x0000);
static_assert(offsetof(FMicroTxnAuthorizationResponse, OrderId) == 0x0008);
static_assert(offsetof(FSteamServerConnectFailure, Result) == 0x0000);
static_assert(offsetof(FSteamServersDisconnected, Result) == 0x0000);
static_assert(offsetof(FEncryptedAppTicketResponse, Result) == 0x0000);
static_assert(offsetof(FStoreAuthURLResponse, URL) == 0x0000);
static_assert(offsetof(FUserAchievementIconFetched, GameID) == 0x0000);
static_assert(offsetof(FUserAchievementIconFetched, AchievementName) == 0x0008);
static_assert(offsetof(FUserAchievementIconFetched, Icon) == 0x0020);
static_assert(offsetof(FUserAchievementStored, GameID) == 0x0000);
static_assert(offsetof(FUserAchievementStored, AchievementName) == 0x0010);
static_assert(offsetof(FUserStatsReceived, GameID) == 0x0000);
static_assert(offsetof(FUserStatsReceived, Result) == 0x0008);
static_assert(offsetof(FUserStatsReceived, SteamID) == 0x0010);
static_assert(offsetof(FUserStatsStored, GameID) == 0x0000);
static_assert(offsetof(FUserStatsStored, Result) == 0x0008);
static_assert(offsetof(FUserStatsUnloaded, SteamIDUser) == 0x0000);
static_assert(offsetof(FLeaderboardScoresDownloaded, SteamLeaderboard) == 0x0000);
static_assert(offsetof(FLeaderboardScoresDownloaded, SteamLeaderboardEntries) == 0x0008);
static_assert(offsetof(FLeaderboardScoresDownloadedForUsers, SteamLeaderboard) == 0x0000);
static_assert(offsetof(FLeaderboardScoresDownloadedForUsers, SteamLeaderboardEntries) == 0x0008);
static_assert(offsetof(FRequestUserStatsData, GameID) == 0x0000);
static_assert(offsetof(FRequestUserStatsData, Result) == 0x0008);
static_assert(offsetof(FRequestUserStatsData, SteamIDUser) == 0x0010);
static_assert(offsetof(FLeaderboardScoreUploaded, SteamLeaderboard) == 0x0008);
static_assert(offsetof(FAttachLeaderboardUGCData, SteamLeaderboard) == 0x0000);
static_assert(offsetof(FAttachLeaderboardUGCData, Result) == 0x0008);
static_assert(offsetof(FLeaderboardFindResult, SteamLeaderboard) == 0x0000);
static_assert(offsetof(FFindOrCreateLeaderboardData, SteamLeaderboard) == 0x0000);
static_assert(offsetof(FGlobalAchievementPercentagesReady, GameID) == 0x0000);
static_assert(offsetof(FGlobalAchievementPercentagesReady, Result) == 0x0008);
static_assert(offsetof(FGlobalStatsReceived, GameID) == 0x0000);
static_assert(offsetof(FGlobalStatsReceived, Result) == 0x0008);
static_assert(offsetof(FCheckFileSignature, CheckFileSignature) == 0x0000);
static_assert(offsetof(FGetOPFSettingsResult, Result) == 0x0000);
static_assert(offsetof(FGetVideoURLResult, Result) == 0x0000);
static_assert(offsetof(FGetVideoURLResult, URL) == 0x0008);
static_assert(offsetof(FInputAnalogActionData, Mode) == 0x0000);
static_assert(offsetof(FSteamItemDetails, InstanceID) == 0x0000);
static_assert(offsetof(FSteamItemDetails, Definition) == 0x0008);
static_assert(offsetof(FSteamP2PSessionState, P2PSessionError) == 0x0002);
static_assert(offsetof(FSteamP2PSessionState, RemoteIP) == 0x0010);
static_assert(offsetof(FSteamNetworkPingLocation, Location) == 0x0000);
static_assert(offsetof(FSteamPartyBeaconLocation, Type) == 0x0000);
static_assert(offsetof(FSteamPartyBeaconLocation, LocationId) == 0x0008);
static_assert(offsetof(FHostPingData, HostString) == 0x0000);
static_assert(offsetof(FSteamUGCDetails, PublishedFileID) == 0x0000);
static_assert(offsetof(FSteamUGCDetails, Result) == 0x0008);
static_assert(offsetof(FSteamUGCDetails, FileType) == 0x0009);
static_assert(offsetof(FSteamUGCDetails, Title) == 0x0018);
static_assert(offsetof(FSteamUGCDetails, Description) == 0x0028);
static_assert(offsetof(FSteamUGCDetails, SteamIDOwner) == 0x0038);
static_assert(offsetof(FSteamUGCDetails, Visibility) == 0x004C);
static_assert(offsetof(FSteamUGCDetails, Tags) == 0x0050);
static_assert(offsetof(FSteamUGCDetails, File) == 0x0060);
static_assert(offsetof(FSteamUGCDetails, PreviewFile) == 0x0068);
static_assert(offsetof(FSteamUGCDetails, Filename) == 0x0070);
static_assert(offsetof(FSteamUGCDetails, URL) == 0x0088);
static_assert(offsetof(FSteamLeaderboardEntry, SteamID) == 0x0000);
static_assert(offsetof(FSteamLeaderboardEntry, UGCHandle) == 0x0018);
