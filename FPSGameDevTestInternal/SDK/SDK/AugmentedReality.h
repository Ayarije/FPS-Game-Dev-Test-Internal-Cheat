
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "MRMesh.h"

#pragma pack(push, 0x1)

class AARActor;
class AAROriginActor;
class AARSharedWorldGameMode;
class AARSharedWorldGameState;
class AARSharedWorldPlayerController;
class AARSkyLight;
class UARBaseAsyncTaskBlueprintProxy;
class UARBasicLightEstimate;
class UARBlueprintLibrary;
class UARCandidateImage;
class UARCandidateObject;
class UARComponent;
class UARDependencyHandler;
class UAREnvironmentCaptureProbe;
class UAREnvironmentCaptureProbeTexture;
class UAREnvironmentProbeComponent;
class UARFaceComponent;
class UARFaceGeometry;
class UARGeoAnchor;
class UARGeoAnchorComponent;
class UARGeoTrackingSupport;
class UARGetCandidateObjectAsyncTaskBlueprintProxy;
class UARImageComponent;
class UARLifeCycleComponent;
class UARLightEstimate;
class UARMeshComponent;
class UARMeshGeometry;
class UARObjectComponent;
class UARPin;
class UARPlaneComponent;
class UARPlaneGeometry;
class UARPointComponent;
class UARPoseComponent;
class UARQRCodeComponent;
class UARSaveWorldAsyncTaskBlueprintProxy;
class UARSessionConfig;
class UARTexture;
class UARTextureCameraDepth;
class UARTextureCameraImage;
class UARTraceResultDummy;
class UARTraceResultLibrary;
class UARTrackableNotifyComponent;
class UARTrackedGeometry;
class UARTrackedImage;
class UARTrackedObject;
class UARTrackedPoint;
class UARTrackedPose;
class UARTrackedQRCode;
class UARTypesDummyClass;
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy;
class UGetGeoLocationAsyncTaskBlueprintProxy;

/// Enum /Script/AugmentedReality.EARTrackingState
/// Size: 0x01 (1 bytes)
enum class EARTrackingState : uint8_t
{
	EARTrackingState__Unknown                                                        = 0,
	EARTrackingState__Tracking                                                       = 1,
	EARTrackingState__NotTracking                                                    = 2,
	EARTrackingState__StoppedTracking                                                = 3
};

/// Enum /Script/AugmentedReality.EGeoAnchorComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EGeoAnchorComponentDebugMode : uint8_t
{
	EGeoAnchorComponentDebugMode__None                                               = 0,
	EGeoAnchorComponentDebugMode__ShowGeoData                                        = 1
};

/// Enum /Script/AugmentedReality.EPoseComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EPoseComponentDebugMode : uint8_t
{
	EPoseComponentDebugMode__None                                                    = 0,
	EPoseComponentDebugMode__ShowSkeleton                                            = 1
};

/// Enum /Script/AugmentedReality.EQRCodeComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EQRCodeComponentDebugMode : uint8_t
{
	EQRCodeComponentDebugMode__None                                                  = 0,
	EQRCodeComponentDebugMode__ShowQRCode                                            = 1
};

/// Enum /Script/AugmentedReality.EImageComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EImageComponentDebugMode : uint8_t
{
	EImageComponentDebugMode__None                                                   = 0,
	EImageComponentDebugMode__ShowDetectedImage                                      = 1
};

/// Enum /Script/AugmentedReality.EARFaceTransformMixing
/// Size: 0x01 (1 bytes)
enum class EARFaceTransformMixing : uint8_t
{
	EARFaceTransformMixing__ComponentOnly                                            = 0,
	EARFaceTransformMixing__ComponentLocationTrackedRotation                         = 1,
	EARFaceTransformMixing__ComponentWithTracked                                     = 2,
	EARFaceTransformMixing__TrackingOnly                                             = 3
};

/// Enum /Script/AugmentedReality.EFaceComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EFaceComponentDebugMode : uint8_t
{
	EFaceComponentDebugMode__None                                                    = 0,
	EFaceComponentDebugMode__ShowEyeVectors                                          = 1,
	EFaceComponentDebugMode__ShowFaceMesh                                            = 2
};

/// Enum /Script/AugmentedReality.EPlaneComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EPlaneComponentDebugMode : uint8_t
{
	EPlaneComponentDebugMode__None                                                   = 0,
	EPlaneComponentDebugMode__ShowNetworkRole                                        = 1,
	EPlaneComponentDebugMode__ShowClassification                                     = 2
};

/// Enum /Script/AugmentedReality.EARSessionConfigFlags
/// Size: 0x01 (1 bytes)
enum class EARSessionConfigFlags : uint8_t
{
	EARSessionConfigFlags__None                                                      = 0,
	EARSessionConfigFlags__GenerateMeshData                                          = 1,
	EARSessionConfigFlags__RenderMeshDataInWireframe                                 = 2,
	EARSessionConfigFlags__GenerateCollisionForMeshData                              = 4,
	EARSessionConfigFlags__GenerateNavMeshForMeshData                                = 8,
	EARSessionConfigFlags__UseMeshDataForOcclusion                                   = 16
};

/// Enum /Script/AugmentedReality.EARServicePermissionRequestResult
/// Size: 0x01 (1 bytes)
enum class EARServicePermissionRequestResult : uint8_t
{
	EARServicePermissionRequestResult__Granted                                       = 0,
	EARServicePermissionRequestResult__Denied                                        = 1
};

/// Enum /Script/AugmentedReality.EARServiceInstallRequestResult
/// Size: 0x01 (1 bytes)
enum class EARServiceInstallRequestResult : uint8_t
{
	EARServiceInstallRequestResult__Installed                                        = 0,
	EARServiceInstallRequestResult__DeviceNotCompatible                              = 1,
	EARServiceInstallRequestResult__UserDeclinedInstallation                         = 2,
	EARServiceInstallRequestResult__FatalError                                       = 3
};

/// Enum /Script/AugmentedReality.EARServiceAvailability
/// Size: 0x01 (1 bytes)
enum class EARServiceAvailability : uint8_t
{
	EARServiceAvailability__UnknownError                                             = 0,
	EARServiceAvailability__UnknownChecking                                          = 1,
	EARServiceAvailability__UnknownTimedOut                                          = 2,
	EARServiceAvailability__UnsupportedDeviceNotCapable                              = 3,
	EARServiceAvailability__SupportedNotInstalled                                    = 4,
	EARServiceAvailability__SupportedVersionTooOld                                   = 5,
	EARServiceAvailability__SupportedInstalled                                       = 6
};

/// Enum /Script/AugmentedReality.EARGeoTrackingAccuracy
/// Size: 0x01 (1 bytes)
enum class EARGeoTrackingAccuracy : uint8_t
{
	EARGeoTrackingAccuracy__Undetermined                                             = 0,
	EARGeoTrackingAccuracy__Low                                                      = 1,
	EARGeoTrackingAccuracy__Medium                                                   = 2,
	EARGeoTrackingAccuracy__High                                                     = 3
};

/// Enum /Script/AugmentedReality.EARGeoTrackingStateReason
/// Size: 0x01 (1 bytes)
enum class EARGeoTrackingStateReason : uint8_t
{
	EARGeoTrackingStateReason__None                                                  = 0,
	EARGeoTrackingStateReason__NotAvailableAtLocation                                = 1,
	EARGeoTrackingStateReason__NeedLocationPermissions                               = 2,
	EARGeoTrackingStateReason__DevicePointedTooLow                                   = 3,
	EARGeoTrackingStateReason__WorldTrackingUnstable                                 = 4,
	EARGeoTrackingStateReason__WaitingForLocation                                    = 5,
	EARGeoTrackingStateReason__GeoDataNotLoaded                                      = 6,
	EARGeoTrackingStateReason__VisualLocalizationFailed                              = 7,
	EARGeoTrackingStateReason__WaitingForAvailabilityCheck                           = 8
};

/// Enum /Script/AugmentedReality.EARGeoTrackingState
/// Size: 0x01 (1 bytes)
enum class EARGeoTrackingState : uint8_t
{
	EARGeoTrackingState__Initializing                                                = 0,
	EARGeoTrackingState__Localized                                                   = 1,
	EARGeoTrackingState__Localizing                                                  = 2,
	EARGeoTrackingState__NotAvailable                                                = 3
};

/// Enum /Script/AugmentedReality.EARSceneReconstruction
/// Size: 0x01 (1 bytes)
enum class EARSceneReconstruction : uint8_t
{
	EARSceneReconstruction__None                                                     = 0,
	EARSceneReconstruction__MeshOnly                                                 = 1,
	EARSceneReconstruction__MeshWithClassification                                   = 2
};

/// Enum /Script/AugmentedReality.EARSessionTrackingFeature
/// Size: 0x01 (1 bytes)
enum class EARSessionTrackingFeature : uint8_t
{
	EARSessionTrackingFeature__None                                                  = 0,
	EARSessionTrackingFeature__PoseDetection2D                                       = 1,
	EARSessionTrackingFeature__PersonSegmentation                                    = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth                           = 3,
	EARSessionTrackingFeature__SceneDepth                                            = 4,
	EARSessionTrackingFeature__SmoothedSceneDepth                                    = 5
};

/// Enum /Script/AugmentedReality.EARFaceTrackingUpdate
/// Size: 0x01 (1 bytes)
enum class EARFaceTrackingUpdate : uint8_t
{
	EARFaceTrackingUpdate__CurvesAndGeo                                              = 0,
	EARFaceTrackingUpdate__CurvesOnly                                                = 1
};

/// Enum /Script/AugmentedReality.EAREnvironmentCaptureProbeType
/// Size: 0x01 (1 bytes)
enum class EAREnvironmentCaptureProbeType : uint8_t
{
	EAREnvironmentCaptureProbeType__None                                             = 0,
	EAREnvironmentCaptureProbeType__Manual                                           = 1,
	EAREnvironmentCaptureProbeType__Automatic                                        = 2
};

/// Enum /Script/AugmentedReality.EARFrameSyncMode
/// Size: 0x01 (1 bytes)
enum class EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage                                        = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage                                     = 1
};

/// Enum /Script/AugmentedReality.EARLightEstimationMode
/// Size: 0x01 (1 bytes)
enum class EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None                                                     = 0,
	EARLightEstimationMode__AmbientLightEstimate                                     = 1,
	EARLightEstimationMode__DirectionalLightEstimate                                 = 2
};

/// Enum /Script/AugmentedReality.EARPlaneDetectionMode
/// Size: 0x01 (1 bytes)
enum class EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None                                                      = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection                                  = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection                                    = 2
};

/// Enum /Script/AugmentedReality.EARSessionType
/// Size: 0x01 (1 bytes)
enum class EARSessionType : uint8_t
{
	EARSessionType__None                                                             = 0,
	EARSessionType__Orientation                                                      = 1,
	EARSessionType__World                                                            = 2,
	EARSessionType__Face                                                             = 3,
	EARSessionType__Image                                                            = 4,
	EARSessionType__ObjectScanning                                                   = 5,
	EARSessionType__PoseTracking                                                     = 6,
	EARSessionType__GeoTracking                                                      = 7
};

/// Enum /Script/AugmentedReality.EARWorldAlignment
/// Size: 0x01 (1 bytes)
enum class EARWorldAlignment : uint8_t
{
	EARWorldAlignment__Gravity                                                       = 0,
	EARWorldAlignment__GravityAndHeading                                             = 1,
	EARWorldAlignment__Camera                                                        = 2
};

/// Enum /Script/AugmentedReality.EARDepthAccuracy
/// Size: 0x01 (1 bytes)
enum class EARDepthAccuracy : uint8_t
{
	EARDepthAccuracy__Unkown                                                         = 0,
	EARDepthAccuracy__Approximate                                                    = 1,
	EARDepthAccuracy__Accurate                                                       = 2
};

/// Enum /Script/AugmentedReality.EARDepthQuality
/// Size: 0x01 (1 bytes)
enum class EARDepthQuality : uint8_t
{
	EARDepthQuality__Unkown                                                          = 0,
	EARDepthQuality__Low                                                             = 1,
	EARDepthQuality__High                                                            = 2
};

/// Enum /Script/AugmentedReality.EARTextureType
/// Size: 0x01 (1 bytes)
enum class EARTextureType : uint8_t
{
	EARTextureType__Unknown                                                          = 0,
	EARTextureType__CameraImage                                                      = 1,
	EARTextureType__CameraDepth                                                      = 2,
	EARTextureType__EnvironmentCapture                                               = 3,
	EARTextureType__PersonSegmentationImage                                          = 4,
	EARTextureType__PersonSegmentationDepth                                          = 5,
	EARTextureType__SceneDepthMap                                                    = 6,
	EARTextureType__SceneDepthConfidenceMap                                          = 7
};

/// Enum /Script/AugmentedReality.EAREye
/// Size: 0x01 (1 bytes)
enum class EAREye : uint8_t
{
	EAREye__LeftEye                                                                  = 0,
	EAREye__RightEye                                                                 = 1
};

/// Enum /Script/AugmentedReality.EARFaceBlendShape
/// Size: 0x01 (1 bytes)
enum class EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft                                                  = 0,
	EARFaceBlendShape__EyeLookDownLeft                                               = 1,
	EARFaceBlendShape__EyeLookInLeft                                                 = 2,
	EARFaceBlendShape__EyeLookOutLeft                                                = 3,
	EARFaceBlendShape__EyeLookUpLeft                                                 = 4,
	EARFaceBlendShape__EyeSquintLeft                                                 = 5,
	EARFaceBlendShape__EyeWideLeft                                                   = 6,
	EARFaceBlendShape__EyeBlinkRight                                                 = 7,
	EARFaceBlendShape__EyeLookDownRight                                              = 8,
	EARFaceBlendShape__EyeLookInRight                                                = 9,
	EARFaceBlendShape__EyeLookOutRight                                               = 10,
	EARFaceBlendShape__EyeLookUpRight                                                = 11,
	EARFaceBlendShape__EyeSquintRight                                                = 12,
	EARFaceBlendShape__EyeWideRight                                                  = 13,
	EARFaceBlendShape__JawForward                                                    = 14,
	EARFaceBlendShape__JawLeft                                                       = 15,
	EARFaceBlendShape__JawRight                                                      = 16,
	EARFaceBlendShape__JawOpen                                                       = 17,
	EARFaceBlendShape__MouthClose                                                    = 18,
	EARFaceBlendShape__MouthFunnel                                                   = 19,
	EARFaceBlendShape__MouthPucker                                                   = 20,
	EARFaceBlendShape__MouthLeft                                                     = 21,
	EARFaceBlendShape__MouthRight                                                    = 22,
	EARFaceBlendShape__MouthSmileLeft                                                = 23,
	EARFaceBlendShape__MouthSmileRight                                               = 24,
	EARFaceBlendShape__MouthFrownLeft                                                = 25,
	EARFaceBlendShape__MouthFrownRight                                               = 26,
	EARFaceBlendShape__MouthDimpleLeft                                               = 27,
	EARFaceBlendShape__MouthDimpleRight                                              = 28,
	EARFaceBlendShape__MouthStretchLeft                                              = 29,
	EARFaceBlendShape__MouthStretchRight                                             = 30,
	EARFaceBlendShape__MouthRollLower                                                = 31,
	EARFaceBlendShape__MouthRollUpper                                                = 32,
	EARFaceBlendShape__MouthShrugLower                                               = 33,
	EARFaceBlendShape__MouthShrugUpper                                               = 34,
	EARFaceBlendShape__MouthPressLeft                                                = 35,
	EARFaceBlendShape__MouthPressRight                                               = 36,
	EARFaceBlendShape__MouthLowerDownLeft                                            = 37,
	EARFaceBlendShape__MouthLowerDownRight                                           = 38,
	EARFaceBlendShape__MouthUpperUpLeft                                              = 39,
	EARFaceBlendShape__MouthUpperUpRight                                             = 40,
	EARFaceBlendShape__BrowDownLeft                                                  = 41,
	EARFaceBlendShape__BrowDownRight                                                 = 42,
	EARFaceBlendShape__BrowInnerUp                                                   = 43,
	EARFaceBlendShape__BrowOuterUpLeft                                               = 44,
	EARFaceBlendShape__BrowOuterUpRight                                              = 45,
	EARFaceBlendShape__CheekPuff                                                     = 46,
	EARFaceBlendShape__CheekSquintLeft                                               = 47,
	EARFaceBlendShape__CheekSquintRight                                              = 48,
	EARFaceBlendShape__NoseSneerLeft                                                 = 49,
	EARFaceBlendShape__NoseSneerRight                                                = 50,
	EARFaceBlendShape__TongueOut                                                     = 51,
	EARFaceBlendShape__HeadYaw                                                       = 52,
	EARFaceBlendShape__HeadPitch                                                     = 53,
	EARFaceBlendShape__HeadRoll                                                      = 54,
	EARFaceBlendShape__LeftEyeYaw                                                    = 55,
	EARFaceBlendShape__LeftEyePitch                                                  = 56,
	EARFaceBlendShape__LeftEyeRoll                                                   = 57,
	EARFaceBlendShape__RightEyeYaw                                                   = 58,
	EARFaceBlendShape__RightEyePitch                                                 = 59,
	EARFaceBlendShape__RightEyeRoll                                                  = 60
};

/// Enum /Script/AugmentedReality.EARFaceTrackingDirection
/// Size: 0x01 (1 bytes)
enum class EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative                                           = 0,
	EARFaceTrackingDirection__FaceMirrored                                           = 1
};

/// Enum /Script/AugmentedReality.EARCandidateImageOrientation
/// Size: 0x01 (1 bytes)
enum class EARCandidateImageOrientation : uint8_t
{
	EARCandidateImageOrientation__Landscape                                          = 0,
	EARCandidateImageOrientation__Portrait                                           = 1
};

/// Enum /Script/AugmentedReality.EARAltitudeSource
/// Size: 0x01 (1 bytes)
enum class EARAltitudeSource : uint8_t
{
	EARAltitudeSource__Precise                                                       = 0,
	EARAltitudeSource__Coarse                                                        = 1,
	EARAltitudeSource__UserDefined                                                   = 2,
	EARAltitudeSource__Unknown                                                       = 3
};

/// Enum /Script/AugmentedReality.EARJointTransformSpace
/// Size: 0x01 (1 bytes)
enum class EARJointTransformSpace : uint8_t
{
	EARJointTransformSpace__Model                                                    = 0,
	EARJointTransformSpace__ParentJoint                                              = 1
};

/// Enum /Script/AugmentedReality.EARSpatialMeshUsageFlags
/// Size: 0x01 (1 bytes)
enum class EARSpatialMeshUsageFlags : uint8_t
{
	EARSpatialMeshUsageFlags__NotApplicable                                          = 0,
	EARSpatialMeshUsageFlags__Visible                                                = 1,
	EARSpatialMeshUsageFlags__Collision                                              = 2
};

/// Enum /Script/AugmentedReality.EARObjectClassification
/// Size: 0x01 (1 bytes)
enum class EARObjectClassification : uint8_t
{
	EARObjectClassification__NotApplicable                                           = 0,
	EARObjectClassification__Unknown                                                 = 1,
	EARObjectClassification__Wall                                                    = 2,
	EARObjectClassification__Ceiling                                                 = 3,
	EARObjectClassification__Floor                                                   = 4,
	EARObjectClassification__Table                                                   = 5,
	EARObjectClassification__Seat                                                    = 6,
	EARObjectClassification__Face                                                    = 7,
	EARObjectClassification__Image                                                   = 8,
	EARObjectClassification__World                                                   = 9,
	EARObjectClassification__SceneObject                                             = 10,
	EARObjectClassification__HandMesh                                                = 11,
	EARObjectClassification__Door                                                    = 12,
	EARObjectClassification__Window                                                  = 13
};

/// Enum /Script/AugmentedReality.EARPlaneOrientation
/// Size: 0x01 (1 bytes)
enum class EARPlaneOrientation : uint8_t
{
	EARPlaneOrientation__Horizontal                                                  = 0,
	EARPlaneOrientation__Vertical                                                    = 1,
	EARPlaneOrientation__Diagonal                                                    = 2
};

/// Enum /Script/AugmentedReality.EARWorldMappingState
/// Size: 0x01 (1 bytes)
enum class EARWorldMappingState : uint8_t
{
	EARWorldMappingState__NotAvailable                                               = 0,
	EARWorldMappingState__StillMappingNotRelocalizable                               = 1,
	EARWorldMappingState__StillMappingRelocalizable                                  = 2,
	EARWorldMappingState__Mapped                                                     = 3
};

/// Enum /Script/AugmentedReality.EARSessionStatus
/// Size: 0x01 (1 bytes)
enum class EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted                                                     = 0,
	EARSessionStatus__Running                                                        = 1,
	EARSessionStatus__NotSupported                                                   = 2,
	EARSessionStatus__FatalError                                                     = 3,
	EARSessionStatus__PermissionNotGranted                                           = 4,
	EARSessionStatus__UnsupportedConfiguration                                       = 5,
	EARSessionStatus__Other                                                          = 6
};

/// Enum /Script/AugmentedReality.EARTrackingQualityReason
/// Size: 0x01 (1 bytes)
enum class EARTrackingQualityReason : uint8_t
{
	EARTrackingQualityReason__None                                                   = 0,
	EARTrackingQualityReason__Initializing                                           = 1,
	EARTrackingQualityReason__Relocalizing                                           = 2,
	EARTrackingQualityReason__ExcessiveMotion                                        = 3,
	EARTrackingQualityReason__InsufficientFeatures                                   = 4,
	EARTrackingQualityReason__InsufficientLight                                      = 5,
	EARTrackingQualityReason__BadState                                               = 6
};

/// Enum /Script/AugmentedReality.EARTrackingQuality
/// Size: 0x01 (1 bytes)
enum class EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking                                                  = 0,
	EARTrackingQuality__OrientationOnly                                              = 1,
	EARTrackingQuality__OrientationAndPosition                                       = 2
};

/// Enum /Script/AugmentedReality.EARLineTraceChannels
/// Size: 0x01 (1 bytes)
enum class EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None                                                       = 0,
	EARLineTraceChannels__FeaturePoint                                               = 1,
	EARLineTraceChannels__GroundPlane                                                = 2,
	EARLineTraceChannels__PlaneUsingExtent                                           = 4,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon                                  = 8
};

/// Enum /Script/AugmentedReality.EARCaptureType
/// Size: 0x01 (1 bytes)
enum class EARCaptureType : uint8_t
{
	EARCaptureType__Camera                                                           = 0,
	EARCaptureType__QRCode                                                           = 1,
	EARCaptureType__SpatialMapping                                                   = 2,
	EARCaptureType__SceneUnderstanding                                               = 3,
	EARCaptureType__HandMesh                                                         = 4
};

/// Struct /Script/AugmentedReality.ARVideoFormat
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FARVideoFormat
{ 
	int32_t                                            FPS;                                                        // 0x0000   (0x0004)  
	int32_t                                            Width;                                                      // 0x0004   (0x0004)  
	int32_t                                            Height;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/AugmentedReality.ARSessionPayload
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FARSessionPayload
{ 
	int32_t                                            ConfigFlags;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x0008   (0x0008)  
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARPlaneUpdatePayload
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FARPlaneUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	FVector                                            Center;                                                     // 0x0050   (0x000C)  
	FVector                                            Extents;                                                    // 0x005C   (0x000C)  
	TArray<FVector>                                    BoundaryVertices;                                           // 0x0068   (0x0010)  
	EARObjectClassification                            ObjectClassification;                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/AugmentedReality.ARPointUpdatePayload
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FARPointUpdatePayload
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/AugmentedReality.ARFaceUpdatePayload
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FARFaceUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	FVector                                            LeftEyePosition;                                            // 0x0018   (0x000C)  
	FVector                                            RightEyePosition;                                           // 0x0024   (0x000C)  
	FVector                                            LookAtTarget;                                               // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/AugmentedReality.ARImageUpdatePayload
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FARImageUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	class UARCandidateImage*                           DetectedImage;                                              // 0x0050   (0x0008)  
	FVector2D                                          EstimatedSize;                                              // 0x0058   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARQRCodeUpdatePayload
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FARQRCodeUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	FVector                                            Extents;                                                    // 0x0050   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            QRCode;                                                     // 0x0060   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARPoseUpdatePayload
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FARPoseUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0030)  
	TArray<FTransform>                                 JointTransforms;                                            // 0x0030   (0x0010)  
};

/// Struct /Script/AugmentedReality.AREnvironmentProbeUpdatePayload
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 MaxSize: 0x0030
struct FAREnvironmentProbeUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0030)  
};

/// Struct /Script/AugmentedReality.ARObjectUpdatePayload
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 MaxSize: 0x0030
struct FARObjectUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0030)  
};

/// Struct /Script/AugmentedReality.ARMeshUpdatePayload
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FARMeshUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	EARObjectClassification                            ObjectClassification;                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0051   (0x000F)  MISSED
};

/// Struct /Script/AugmentedReality.ARGeoAnchorUpdatePayload
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FARGeoAnchorUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	float                                              Longitude;                                                  // 0x0050   (0x0004)  
	float                                              Latitude;                                                   // 0x0054   (0x0004)  
	float                                              AltitudeMeters;                                             // 0x0058   (0x0004)  
	EARAltitudeSource                                  AltitudeSource;                                             // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	FString                                            AnchorName;                                                 // 0x0060   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARSkeletonDefinition
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FARSkeletonDefinition
{ 
	int32_t                                            NumJoints;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      JointNames;                                                 // 0x0008   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARPose3D
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FARPose3D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FTransform>                                 JointTransforms;                                            // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
	EARJointTransformSpace                             JointTransformSpace;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/AugmentedReality.TrackedGeometryGroup
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FTrackedGeometryGroup
{ 
	class AARActor*                                    ARActor;                                                    // 0x0000   (0x0008)  
	class UARComponent*                                ARComponent;                                                // 0x0008   (0x0008)  
	class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARSharedWorldReplicationState
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FARSharedWorldReplicationState
{ 
	int32_t                                            PreviewImageOffset;                                         // 0x0000   (0x0004)  
	int32_t                                            ARWorldOffset;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AugmentedReality.ARTraceResult
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FARTraceResult
{ 
	float                                              DistanceFromCamera;                                         // 0x0000   (0x0004)  
	EARLineTraceChannels                               TraceChannel;                                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0005   (0x000B)  MISSED
	FTransform                                         LocalTransform;                                             // 0x0010   (0x0030)  
	class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0048   (0x0018)  MISSED
};

/// Struct /Script/AugmentedReality.ARCameraIntrinsics
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FARCameraIntrinsics
{ 
	FIntPoint                                          ImageResolution;                                            // 0x0000   (0x0008)  
	FVector2D                                          FocalLength;                                                // 0x0008   (0x0008)  
	FVector2D                                          PrincipalPoint;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARPose2D
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FARPose2D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FVector2D>                                  JointLocations;                                             // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARSessionStatus
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FARSessionStatus
{ 
	FString                                            AdditionalInfo;                                             // 0x0000   (0x0010)  
	EARSessionStatus                                   Status;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Class /Script/AugmentedReality.AROriginActor
/// Size: 0x0220 (544 bytes) (0x000220 - 0x000220) align 8 MaxSize: 0x0220
class AAROriginActor : public AActor
{ 
public:
};

/// Class /Script/AugmentedReality.ARSessionConfig
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align 8 MaxSize: 0x0110
class UARSessionConfig : public UDataAsset
{ 
public:
	bool                                               bGenerateMeshDataFromTrackedGeometry;                       // 0x0030   (0x0001)  
	bool                                               bGenerateCollisionForMeshData;                              // 0x0031   (0x0001)  
	bool                                               bGenerateNavMeshForMeshData;                                // 0x0032   (0x0001)  
	bool                                               bUseMeshDataForOcclusion;                                   // 0x0033   (0x0001)  
	bool                                               bRenderMeshDataInWireframe;                                 // 0x0034   (0x0001)  
	bool                                               bTrackSceneObjects;                                         // 0x0035   (0x0001)  
	bool                                               bUsePersonSegmentationForOcclusion;                         // 0x0036   (0x0001)  
	bool                                               bUseSceneDepthForOcclusion;                                 // 0x0037   (0x0001)  
	bool                                               bUseAutomaticImageScaleEstimation;                          // 0x0038   (0x0001)  
	bool                                               bUseStandardOnboardingUX;                                   // 0x0039   (0x0001)  
	EARWorldAlignment                                  WorldAlignment;                                             // 0x003A   (0x0001)  
	EARSessionType                                     SessionType;                                                // 0x003B   (0x0001)  
	EARPlaneDetectionMode                              PlaneDetectionMode;                                         // 0x003C   (0x0001)  
	bool                                               bHorizontalPlaneDetection;                                  // 0x003D   (0x0001)  
	bool                                               bVerticalPlaneDetection;                                    // 0x003E   (0x0001)  
	bool                                               bEnableAutoFocus;                                           // 0x003F   (0x0001)  
	EARLightEstimationMode                             LightEstimationMode;                                        // 0x0040   (0x0001)  
	EARFrameSyncMode                                   FrameSyncMode;                                              // 0x0041   (0x0001)  
	bool                                               bEnableAutomaticCameraOverlay;                              // 0x0042   (0x0001)  
	bool                                               bEnableAutomaticCameraTracking;                             // 0x0043   (0x0001)  
	bool                                               bResetCameraTracking;                                       // 0x0044   (0x0001)  
	bool                                               bResetTrackedObjects;                                       // 0x0045   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0046   (0x0002)  MISSED
	TArray<class UARCandidateImage*>                   CandidateImages;                                            // 0x0048   (0x0010)  
	int32_t                                            MaxNumSimultaneousImagesTracked;                            // 0x0058   (0x0004)  
	EAREnvironmentCaptureProbeType                     EnvironmentCaptureProbeType;                                // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	TArray<char>                                       WorldMapData;                                               // 0x0060   (0x0010)  
	TArray<class UARCandidateObject*>                  CandidateObjects;                                           // 0x0070   (0x0010)  
	FARVideoFormat                                     DesiredVideoFormat;                                         // 0x0080   (0x000C)  
	bool                                               bUseOptimalVideoFormat;                                     // 0x008C   (0x0001)  
	EARFaceTrackingDirection                           FaceTrackingDirection;                                      // 0x008D   (0x0001)  
	EARFaceTrackingUpdate                              FaceTrackingUpdate;                                         // 0x008E   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x008F   (0x0001)  MISSED
	int32_t                                            MaxNumberOfTrackedFaces;                                    // 0x0090   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<char>                                       SerializedARCandidateImageDatabase;                         // 0x0098   (0x0010)  
	EARSessionTrackingFeature                          EnabledSessionTrackingFeature;                              // 0x00A8   (0x0001)  
	EARSceneReconstruction                             SceneReconstructionMethod;                                  // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
	class UClass*                                      PlaneComponentClass;                                        // 0x00B0   (0x0008)  
	class UClass*                                      PointComponentClass;                                        // 0x00B8   (0x0008)  
	class UClass*                                      FaceComponentClass;                                         // 0x00C0   (0x0008)  
	class UClass*                                      ImageComponentClass;                                        // 0x00C8   (0x0008)  
	class UClass*                                      QRCodeComponentClass;                                       // 0x00D0   (0x0008)  
	class UClass*                                      PoseComponentClass;                                         // 0x00D8   (0x0008)  
	class UClass*                                      EnvironmentProbeComponentClass;                             // 0x00E0   (0x0008)  
	class UClass*                                      ObjectComponentClass;                                       // 0x00E8   (0x0008)  
	class UClass*                                      MeshComponentClass;                                         // 0x00F0   (0x0008)  
	class UClass*                                      GeoAnchorComponentClass;                                    // 0x00F8   (0x0008)  
	class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x0100   (0x0008)  
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x0108   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	bool ShouldResetTrackedObjects() // [0x1fb0880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	bool ShouldResetCameraTracking() // [0x1fb0850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	bool ShouldRenderCameraOverlay() // [0x1fb0820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	bool ShouldEnableCameraTracking() // [0x1fb07f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	bool ShouldEnableAutoFocus() // [0x1fb07c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.SetWorldMapData
	void SetWorldMapData(TArray<char> WorldMapData) // [0x1fb06d0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(TArray<char>);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(WorldMapData);
	}
	// Function /Script/AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature) // [0x1fb0650] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EARSessionTrackingFeature);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(InSessionTrackingFeature);
	}
	// Function /Script/AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
	void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod) // [0x1fb05d0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EARSceneReconstruction);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(InSceneReconstructionMethod);
	}
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	void SetResetTrackedObjects(bool bNewValue) // [0x1fb0540] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(bNewValue);
	}
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetCameraTracking
	void SetResetCameraTracking(bool bNewValue) // [0x1fb04b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(bNewValue);
	}
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate) // [0x1fb0340] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EARFaceTrackingUpdate);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(InUpdate);
	}
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection) // [0x1fb02c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EARFaceTrackingDirection);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(InDirection);
	}
	// Function /Script/AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	void SetEnableAutoFocus(bool bNewValue) // [0x1fb01a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(bNewValue);
	}
	// Function /Script/AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	void SetDesiredVideoFormat(FARVideoFormat NewFormat) // [0x1fb0100] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FARVideoFormat);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(NewFormat);
	}
	// Function /Script/AugmentedReality.ARSessionConfig.SetCandidateObjectList
	// void SetCandidateObjectList(TArray<UARCandidateObject*>& InCandidateObjects);                                            // [0x1fb0050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldMapData
	TArray<char> GetWorldMapData() // [0x1fafcd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef TArray<char> (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldAlignment
	EARWorldAlignment GetWorldAlignment() // [0x1fafca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARWorldAlignment (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.GetSessionType
	EARSessionType GetSessionType() // [0x1fafc10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARSessionType (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
	EARSceneReconstruction GetSceneReconstructionMethod() // [0x1fafbe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARSceneReconstruction (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	EARPlaneDetectionMode GetPlaneDetectionMode() // [0x1fafbb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARPlaneDetectionMode (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	int32_t GetMaxNumSimultaneousImagesTracked() // [0x1fafb50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.GetLightEstimationMode
	EARLightEstimationMode GetLightEstimationMode() // [0x1fafa60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARLightEstimationMode (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.GetFrameSyncMode
	EARFrameSyncMode GetFrameSyncMode() // [0x1fafa30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARFrameSyncMode (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	EARFaceTrackingUpdate GetFaceTrackingUpdate() // [0x1fafa00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARFaceTrackingUpdate (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	EARFaceTrackingDirection GetFaceTrackingDirection() // [0x1faf9d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARFaceTrackingDirection (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType() // [0x1faf9a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EAREnvironmentCaptureProbeType (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	EARSessionTrackingFeature GetEnabledSessionTrackingFeature() // [0x1faf970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARSessionTrackingFeature (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	FARVideoFormat GetDesiredVideoFormat() // [0x1faf930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FARVideoFormat (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func();
	}
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateObjectList
	// TArray<UARCandidateObject*> GetCandidateObjectList();                                                                    // [0x1faf860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateImageList
	// TArray<UARCandidateImage*> GetCandidateImageList();                                                                      // [0x1faf7d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateObject
	void AddCandidateObject(UARCandidateObject* CandidateObject) // [0x1faf1f0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UARCandidateObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		func(CandidateObject);
	}
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateImage
	void AddCandidateImage(UARCandidateImage* NewCandidateImage) // [0x1faf160] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UARCandidateImage*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		func(NewCandidateImage);
	}
};

/// Class /Script/AugmentedReality.ARLightEstimate
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UARLightEstimate : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARBasicLightEstimate
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UARBasicLightEstimate : public UARLightEstimate
{ 
public:
	float                                              AmbientIntensityLumens;                                     // 0x0028   (0x0004)  
	float                                              AmbientColorTemperatureKelvin;                              // 0x002C   (0x0004)  
	FLinearColor                                       AmbientColor;                                               // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	float GetAmbientIntensityLumens() // [0x1faf7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	float GetAmbientColorTemperatureKelvin() // [0x1faf770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	FLinearColor GetAmbientColor() // [0x1faf730] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FLinearColor (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
};

/// Class /Script/AugmentedReality.ARCandidateImage
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UARCandidateImage : public UDataAsset
{ 
public:
	class UTexture2D*                                  CandidateTexture;                                           // 0x0030   (0x0008)  
	FString                                            FriendlyName;                                               // 0x0038   (0x0010)  
	float                                              Width;                                                      // 0x0048   (0x0004)  
	float                                              Height;                                                     // 0x004C   (0x0004)  
	EARCandidateImageOrientation                       Orientation;                                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalWidth
	float GetPhysicalWidth() // [0x1fb5190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalHeight
	float GetPhysicalHeight() // [0x1fb5170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/AugmentedReality.ARCandidateImage.GetOrientation
	EARCandidateImageOrientation GetOrientation() // [0x1fb5130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARCandidateImageOrientation (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/AugmentedReality.ARCandidateImage.GetFriendlyName
	FString GetFriendlyName() // [0x1fb4d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/AugmentedReality.ARCandidateImage.GetCandidateTexture
	UTexture2D* GetCandidateTexture() // [0x1fb4b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UTexture2D* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
};

/// Class /Script/AugmentedReality.ARActor
/// Size: 0x0220 (544 bytes) (0x000220 - 0x000220) align 8 MaxSize: 0x0220
class AARActor : public AActor
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARActor.AddARComponent
	UARComponent* AddARComponent(UClass* InComponentClass, FGuid& NativeID) // [0x1fa2970] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef class UARComponent* (*FuncPtr)(UClass*, FGuid&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(InComponentClass, NativeID);
	}
};

/// Class /Script/AugmentedReality.ARBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARBlueprintLibrary.UnpinComponent
	void UnpinComponent(USceneComponent* ComponentToUnpin) // [0x1fa5c00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(USceneComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(ComponentToUnpin);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.ToggleARCapture
	bool ToggleARCapture(bool bOnOff, EARCaptureType CaptureType) // [0x1fa5b30] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(bool, EARCaptureType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(bOnOff, CaptureType);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.StopARSession
	void StopARSession() // [0x1fa5b10] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.StartARSession
	void StartARSession(UARSessionConfig* SessionConfig) // [0x1fa5a90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UARSessionConfig*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(SessionConfig);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
	void SetEnabledXRCamera(bool bOnOff) // [0x1fa5a10] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(bOnOff);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldScale
	void SetARWorldScale(float InWorldScale) // [0x1fa58c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(InWorldScale);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
	void SetARWorldOriginLocationAndRotation(FVector OriginLocation, FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection) // [0x1fa5730] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FVector, FRotator, bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(OriginLocation, OriginRotation, bIsTransformInWorldSpace, bMaintainUpDirection);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	void SetAlignmentTransform(FTransform& InAlignmentTransform) // [0x1fa5940] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(InAlignmentTransform);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
	bool SaveARPinToLocalStore(FName InSaveName, UARPin* InPin) // [0x1fa5660] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FName, UARPin*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(InSaveName, InPin);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
	FIntPoint ResizeXRCamera(FIntPoint& InSize) // [0x1fa55c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef FIntPoint (*FuncPtr)(FIntPoint&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(InSize);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemovePin
	void RemovePin(UARPin* PinToRemove) // [0x1fa5540] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UARPin*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(PinToRemove);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
	void RemoveARPinFromLocalStore(FName InSaveName) // [0x1fa54a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(InSaveName);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
	void RemoveAllARPinsFromLocalStore() // [0x1fa5520] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	UARPin* PinComponentToTraceResult(USceneComponent* ComponentToPin, FARTraceResult& TraceResult, FName DebugName) // [0x1fa5310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef class UARPin* (*FuncPtr)(USceneComponent*, FARTraceResult&, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(ComponentToPin, TraceResult, DebugName);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
	bool PinComponentToARPin(USceneComponent* ComponentToPin, UARPin* Pin) // [0x1fa5240] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(USceneComponent*, UARPin*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(ComponentToPin, Pin);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponent
	UARPin* PinComponent(USceneComponent* ComponentToPin, FTransform& PinToWorldTransform, UARTrackedGeometry* TrackedGeometry, FName DebugName) // [0x1fa5090] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef class UARPin* (*FuncPtr)(USceneComponent*, FTransform&, UARTrackedGeometry*, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(ComponentToPin, PinToWorldTransform, TrackedGeometry, DebugName);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PauseARSession
	void PauseARSession() // [0x1fa5070] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
	// TMap<FName, UARPin*> LoadARPinsFromLocalStore();                                                                         // [0x1fa4f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	// TArray<FARTraceResult> LineTraceTrackedObjects3D(FVector Start, FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // [0x1fa4b60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	// TArray<FARTraceResult> LineTraceTrackedObjects(FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // [0x1fa4d90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	bool IsSessionTypeSupported(EARSessionType SessionType) // [0x1fa4ae0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(EARSessionType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(SessionType);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature) // [0x1fa4a20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(EARSessionType, EARSessionTrackingFeature);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func(SessionType, SessionTrackingFeature);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
	bool IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod) // [0x1fa4960] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(EARSessionType, EARSceneReconstruction);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func(SessionType, SceneReconstructionMethod);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARSupported
	bool IsARSupported() // [0x1fa4930] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
	bool IsARPinLocalStoreSupported() // [0x1fa4900] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
	bool IsARPinLocalStoreReady() // [0x1fa48d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	EARWorldMappingState GetWorldMappingStatus() // [0x1fa48a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef EARWorldMappingState (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	EARTrackingQualityReason GetTrackingQualityReason() // [0x1fa4870] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef EARTrackingQualityReason (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	EARTrackingQuality GetTrackingQuality() // [0x1fa4840] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef EARTrackingQuality (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	// TArray<FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);                                             // [0x1fa4570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	UARSessionConfig* GetSessionConfig() // [0x1fa4540] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UARSessionConfig* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPointCloud
	// TArray<FVector> GetPointCloud();                                                                                         // [0x1fa44c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
	UARTexture* GetPersonSegmentationImage() // [0x1fa4490] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UARTexture* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	UARTexture* GetPersonSegmentationDepthImage() // [0x1fa4460] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UARTexture* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
	bool GetObjectClassificationAtLocation(FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff) // [0x1fa42d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FVector&, EARObjectClassification&, FVector&, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		return func(InWorldLocation, OutClassification, OutClassificationLocation, MaxLocationDiff);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
	int32_t GetNumberOfTrackedFacesSupported() // [0x1fa42a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	UARLightEstimate* GetCurrentLightEstimate() // [0x1fa3e10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UARLightEstimate* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
	bool GetCameraIntrinsics(FARCameraIntrinsics& OutCameraIntrinsics) // [0x1fa3d50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FARCameraIntrinsics&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		return func(OutCameraIntrinsics);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraImage
	UARTextureCameraImage* GetCameraImage() // [0x1fa3d20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UARTextureCameraImage* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraDepth
	UARTextureCameraDepth* GetCameraDepth() // [0x1fa3cf0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UARTextureCameraDepth* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[39]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARWorldScale
	float GetARWorldScale() // [0x1fa36d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[40]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARTexture
	UARTexture* GetARTexture(EARTextureType TextureType) // [0x1fa3650] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UARTexture* (*FuncPtr)(EARTextureType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[41]);
		return func(TextureType);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	FARSessionStatus GetARSessionStatus() // [0x1fa35c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FARSessionStatus (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[42]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
	// TArray<UARTrackedPose*> GetAllTrackedPoses();                                                                            // [0x1fa3c70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
	// TArray<UARTrackedPoint*> GetAllTrackedPoints();                                                                          // [0x1fa3bf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
	// TArray<UARPlaneGeometry*> GetAllTrackedPlanes();                                                                         // [0x1fa3b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
	// TArray<UARTrackedImage*> GetAllTrackedImages();                                                                          // [0x1fa3af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
	// TArray<UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();                                             // [0x1fa3a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	// TArray<FARPose2D> GetAllTracked2DPoses();                                                                                // [0x1fa3930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllPins
	// TArray<UARPin*> GetAllPins();                                                                                            // [0x1fa38b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
	// TArray<UARTrackedGeometry*> GetAllGeometriesByClass(UClass* GeometryClass);                                              // [0x1fa37e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	// TArray<UARTrackedGeometry*> GetAllGeometries();                                                                          // [0x1fa3760] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
	FTransform GetAlignmentTransform() // [0x1fa3700] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FTransform (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[52]);
		return func();
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
	// TArray<UARTrackedPoint*> FindTrackedPointsByName(FString PointName);                                                     // [0x1fa34e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	void DebugDrawTrackedGeometry(UARTrackedGeometry* TrackedGeometry, UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds) // [0x1fa3340] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UARTrackedGeometry*, UObject*, FLinearColor, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[54]);
		func(TrackedGeometry, WorldContextObject, Color, OutlineThickness, PersistForSeconds);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	void DebugDrawPin(UARPin* ARPin, UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds) // [0x1fa31a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UARPin*, UObject*, FLinearColor, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[55]);
		func(ARPin, WorldContextObject, Color, Scale, PersistForSeconds);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
	// void CalculateClosestIntersection(TArray<FVector>& StartPoints, TArray<FVector>& EndPoints, FVector& ClosestIntersection); // [0x1fa3040] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
	void CalculateAlignmentTransform(FTransform& TransformInFirstCoordinateSystem, FTransform& TransformInSecondCoordinateSystem, FTransform& AlignmentTransform) // [0x1fa2e50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FTransform&, FTransform&, FTransform&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[57]);
		func(TransformInFirstCoordinateSystem, TransformInSecondCoordinateSystem, AlignmentTransform);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
	bool AddTrackedPointWithName(FTransform& WorldTransform, FString PointName, bool bDeletePointsWithSameName) // [0x1fa2cd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FTransform&, FString, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[58]);
		return func(WorldTransform, PointName, bDeletePointsWithSameName);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	UARCandidateImage* AddRuntimeCandidateImage(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth) // [0x1fa2b40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UARCandidateImage* (*FuncPtr)(UARSessionConfig*, UTexture2D*, FString, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[59]);
		return func(SessionConfig, CandidateTexture, FriendlyName, PhysicalWidth);
	}
	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
	bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent) // [0x1fa2a60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FVector, FVector);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[60]);
		return func(Location, Extent);
	}
};

/// Class /Script/AugmentedReality.ARTraceResultLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	UARTrackedGeometry* GetTrackedGeometry(FARTraceResult& TraceResult) // [0x1fa4740] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef class UARTrackedGeometry* (*FuncPtr)(FARTraceResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(TraceResult);
	}
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	EARLineTraceChannels GetTraceChannel(FARTraceResult& TraceResult) // [0x1fa4640] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef EARLineTraceChannels (*FuncPtr)(FARTraceResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(TraceResult);
	}
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalTransform
	FTransform GetLocalTransform(FARTraceResult& TraceResult) // [0x1fa4180] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FTransform (*FuncPtr)(FARTraceResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(TraceResult);
	}
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	FTransform GetLocalToWorldTransform(FARTraceResult& TraceResult) // [0x1fa4060] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FTransform (*FuncPtr)(FARTraceResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(TraceResult);
	}
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	FTransform GetLocalToTrackingTransform(FARTraceResult& TraceResult) // [0x1fa3f40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FTransform (*FuncPtr)(FARTraceResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(TraceResult);
	}
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
	float GetDistanceFromCamera(FARTraceResult& TraceResult) // [0x1fa3e40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(FARTraceResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(TraceResult);
	}
};

/// Class /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
/// Size: 0x0080 (128 bytes) (0x000050 - 0x000080) align 8 MaxSize: 0x0080
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,288) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,289) /* FMulticastInlineDelegate */ __um(OnFailed);                                           // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0070   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(UObject* WorldContextObject) // [0x1fa28e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UARSaveWorldAsyncTaskBlueprintProxy* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject);
	}
};

/// Class /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
/// Size: 0x0098 (152 bytes) (0x000050 - 0x000098) align 8 MaxSize: 0x0098
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,290) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,291) /* FMulticastInlineDelegate */ __um(OnFailed);                                           // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0070   (0x0028)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(UObject* WorldContextObject, FVector Location, FVector Extent) // [0x1fa27b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef class UARGetCandidateObjectAsyncTaskBlueprintProxy* (*FuncPtr)(UObject*, FVector, FVector);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, Location, Extent);
	}
};

/// Class /Script/AugmentedReality.ARComponent
/// Size: 0x0280 (640 bytes) (0x0001F8 - 0x000280) align 16 MaxSize: 0x0278
class UARComponent : public USceneComponent
{ 
public:
	FGuid                                              NativeID;                                                   // 0x01F8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0208   (0x0030)  MISSED
	bool                                               bUseDefaultReplication;                                     // 0x0238   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0239   (0x0007)  MISSED
	class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x0240   (0x0008)  
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x0248   (0x0008)  
	class UMRMeshComponent*                            MRMeshComponent;                                            // 0x0250   (0x0008)  
	class UARTrackedGeometry*                          MyTrackedGeometry;                                          // 0x0258   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0260   (0x0018)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARComponent.UpdateVisualization
	void UpdateVisualization() // [0x1fad0f0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/AugmentedReality.ARComponent.SetNativeID
	void SetNativeID(FGuid NativeID) // [0x1faccd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGuid);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NativeID);
	}
	// Function /Script/AugmentedReality.ARComponent.ReceiveRemove
	void ReceiveRemove() // [0x12295a0] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/AugmentedReality.ARComponent.OnRep_Payload
	void OnRep_Payload() // [0x1fac070] Native|Protected     
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/AugmentedReality.ARComponent.GetMRMesh
	UMRMeshComponent* GetMRMesh() // [0x1fabe10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UMRMeshComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
};

/// Class /Script/AugmentedReality.ARPlaneComponent
/// Size: 0x0300 (768 bytes) (0x000278 - 0x000300) align 16 MaxSize: 0x0300
class UARPlaneComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0278   (0x0008)  MISSED
	FARPlaneUpdatePayload                              ReplicatedPayload;                                          // 0x0280   (0x0080)  


	/// Functions
	// Function /Script/AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
	void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode) // [0x1face60] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EPlaneComponentDebugMode);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(NewDebugMode);
	}
	// Function /Script/AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
	// void SetObjectClassificationDebugColors(TMap<EARObjectClassification, FLinearColor>& InColors);                          // [0x1facd70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPlaneComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARPlaneUpdatePayload NewPayload) // [0x1fac740] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FARPlaneUpdatePayload);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(NewPayload);
	}
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveUpdate
	void ReceiveUpdate(FARPlaneUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARPlaneUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Payload);
	}
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveAdd
	void ReceiveAdd(FARPlaneUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARPlaneUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Payload);
	}
	// Function /Script/AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
	// TMap<EARObjectClassification, FLinearColor> GetObjectClassificationDebugColors();                                        // [0x1fabe30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARPointComponent
/// Size: 0x0280 (640 bytes) (0x000278 - 0x000280) align 16 MaxSize: 0x0280
class UARPointComponent : public UARComponent
{ 
public:
	FARPointUpdatePayload                              ReplicatedPayload;                                          // 0x0278   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0279   (0x0007)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARPointComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARPointUpdatePayload NewPayload) // [0x1fac890] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FARPointUpdatePayload);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(NewPayload);
	}
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveUpdate
	void ReceiveUpdate(FARPointUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARPointUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Payload);
	}
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveAdd
	void ReceiveAdd(FARPointUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARPointUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Payload);
	}
};

/// Class /Script/AugmentedReality.ARFaceComponent
/// Size: 0x02E0 (736 bytes) (0x000278 - 0x0002E0) align 16 MaxSize: 0x02E0
class UARFaceComponent : public UARComponent
{ 
public:
	EARFaceTransformMixing                             TransformSetting;                                           // 0x0278   (0x0001)  
	bool                                               bUpdateVertexNormal;                                        // 0x0279   (0x0001)  
	bool                                               bFaceOutOfScreen;                                           // 0x027A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x027B   (0x0005)  MISSED
	FARFaceUpdatePayload                               ReplicatedPayload;                                          // 0x0280   (0x0040)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x02C0   (0x0020)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
	void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode) // [0x1facb80] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EFaceComponentDebugMode);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(NewDebugMode);
	}
	// Function /Script/AugmentedReality.ARFaceComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARFaceUpdatePayload NewPayload) // [0x1fac2f0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FARFaceUpdatePayload);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewPayload);
	}
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveUpdate
	void ReceiveUpdate(FARFaceUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARFaceUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Payload);
	}
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveAdd
	void ReceiveAdd(FARFaceUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARFaceUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Payload);
	}
};

/// Class /Script/AugmentedReality.ARImageComponent
/// Size: 0x02E0 (736 bytes) (0x000278 - 0x0002E0) align 16 MaxSize: 0x02E0
class UARImageComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0278   (0x0008)  MISSED
	FARImageUpdatePayload                              ReplicatedPayload;                                          // 0x0280   (0x0060)  


	/// Functions
	// Function /Script/AugmentedReality.ARImageComponent.SetImageComponentDebugMode
	void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode) // [0x1facc60] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EImageComponentDebugMode);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(NewDebugMode);
	}
	// Function /Script/AugmentedReality.ARImageComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARImageUpdatePayload NewPayload) // [0x1fac500] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FARImageUpdatePayload);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewPayload);
	}
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveUpdate
	void ReceiveUpdate(FARImageUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARImageUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Payload);
	}
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveAdd
	void ReceiveAdd(FARImageUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARImageUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Payload);
	}
};

/// Class /Script/AugmentedReality.ARQRCodeComponent
/// Size: 0x02F0 (752 bytes) (0x000278 - 0x0002F0) align 16 MaxSize: 0x02F0
class UARQRCodeComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0278   (0x0008)  MISSED
	FARQRCodeUpdatePayload                             ReplicatedPayload;                                          // 0x0280   (0x0070)  


	/// Functions
	// Function /Script/AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
	void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode) // [0x1facf40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EQRCodeComponentDebugMode);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(NewDebugMode);
	}
	// Function /Script/AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARQRCodeUpdatePayload NewPayload) // [0x1faca50] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FARQRCodeUpdatePayload);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewPayload);
	}
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveUpdate
	void ReceiveUpdate(FARQRCodeUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARQRCodeUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Payload);
	}
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveAdd
	void ReceiveAdd(FARQRCodeUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARQRCodeUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Payload);
	}
};

/// Class /Script/AugmentedReality.ARPoseComponent
/// Size: 0x02C0 (704 bytes) (0x000278 - 0x0002C0) align 16 MaxSize: 0x02C0
class UARPoseComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0278   (0x0008)  MISSED
	FARPoseUpdatePayload                               ReplicatedPayload;                                          // 0x0280   (0x0040)  


	/// Functions
	// Function /Script/AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
	void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode) // [0x1faced0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EPoseComponentDebugMode);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(NewDebugMode);
	}
	// Function /Script/AugmentedReality.ARPoseComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARPoseUpdatePayload NewPayload) // [0x1fac940] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FARPoseUpdatePayload);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewPayload);
	}
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveUpdate
	void ReceiveUpdate(FARPoseUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARPoseUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Payload);
	}
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveAdd
	void ReceiveAdd(FARPoseUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARPoseUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Payload);
	}
};

/// Class /Script/AugmentedReality.AREnvironmentProbeComponent
/// Size: 0x02B0 (688 bytes) (0x000278 - 0x0002B0) align 16 MaxSize: 0x02B0
class UAREnvironmentProbeComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0278   (0x0008)  MISSED
	FAREnvironmentProbeUpdatePayload                   ReplicatedPayload;                                          // 0x0280   (0x0030)  


	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
	void ServerUpdatePayload(FAREnvironmentProbeUpdatePayload NewPayload) // [0x1fac210] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FAREnvironmentProbeUpdatePayload);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(NewPayload);
	}
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
	void ReceiveUpdate(FAREnvironmentProbeUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FAREnvironmentProbeUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Payload);
	}
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
	void ReceiveAdd(FAREnvironmentProbeUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FAREnvironmentProbeUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Payload);
	}
};

/// Class /Script/AugmentedReality.ARObjectComponent
/// Size: 0x02B0 (688 bytes) (0x000278 - 0x0002B0) align 16 MaxSize: 0x02B0
class UARObjectComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0278   (0x0008)  MISSED
	FARObjectUpdatePayload                             ReplicatedPayload;                                          // 0x0280   (0x0030)  


	/// Functions
	// Function /Script/AugmentedReality.ARObjectComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARObjectUpdatePayload NewPayload) // [0x1fac210] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FARObjectUpdatePayload);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(NewPayload);
	}
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveUpdate
	void ReceiveUpdate(FARObjectUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARObjectUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Payload);
	}
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveAdd
	void ReceiveAdd(FARObjectUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARObjectUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Payload);
	}
};

/// Class /Script/AugmentedReality.ARMeshComponent
/// Size: 0x02E0 (736 bytes) (0x000278 - 0x0002E0) align 16 MaxSize: 0x02E0
class UARMeshComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0278   (0x0008)  MISSED
	FARMeshUpdatePayload                               ReplicatedPayload;                                          // 0x0280   (0x0060)  


	/// Functions
	// Function /Script/AugmentedReality.ARMeshComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARMeshUpdatePayload NewPayload) // [0x1fac630] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FARMeshUpdatePayload);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(NewPayload);
	}
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveUpdate
	void ReceiveUpdate(FARMeshUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARMeshUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Payload);
	}
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveAdd
	void ReceiveAdd(FARMeshUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARMeshUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Payload);
	}
};

/// Class /Script/AugmentedReality.ARGeoAnchorComponent
/// Size: 0x02F0 (752 bytes) (0x000278 - 0x0002F0) align 16 MaxSize: 0x02F0
class UARGeoAnchorComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0278   (0x0008)  MISSED
	FARGeoAnchorUpdatePayload                          ReplicatedPayload;                                          // 0x0280   (0x0070)  


	/// Functions
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
	void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode) // [0x1facbf0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EGeoAnchorComponentDebugMode);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(NewDebugMode);
	}
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARGeoAnchorUpdatePayload NewPayload) // [0x1fac3d0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FARGeoAnchorUpdatePayload);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewPayload);
	}
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
	void ReceiveUpdate(FARGeoAnchorUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARGeoAnchorUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Payload);
	}
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
	void ReceiveAdd(FARGeoAnchorUpdatePayload& Payload) // [0x12295a0] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FARGeoAnchorUpdatePayload&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Payload);
	}
};

/// Class /Script/AugmentedReality.ARDependencyHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UARDependencyHandler : public UObject
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARDependencyHandler.StartARSessionLatent
	void StartARSessionLatent(UObject* WorldContextObject, UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo) // [0x1facfb0] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, UARSessionConfig*, FLatentActionInfo);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(WorldContextObject, SessionConfig, LatentInfo);
	}
	// Function /Script/AugmentedReality.ARDependencyHandler.RequestARSessionPermission
	void RequestARSessionPermission(UObject* WorldContextObject, UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo, EARServicePermissionRequestResult& OutPermissionResult) // [0x1fac090] Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, UARSessionConfig*, FLatentActionInfo, EARServicePermissionRequestResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(WorldContextObject, SessionConfig, LatentInfo, OutPermissionResult);
	}
	// Function /Script/AugmentedReality.ARDependencyHandler.InstallARService
	void InstallARService(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceInstallRequestResult& OutInstallResult) // [0x1fabf20] Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, FLatentActionInfo, EARServiceInstallRequestResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(WorldContextObject, LatentInfo, OutInstallResult);
	}
	// Function /Script/AugmentedReality.ARDependencyHandler.GetARDependencyHandler
	UARDependencyHandler* GetARDependencyHandler() // [0x1fabcb0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UARDependencyHandler* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
	void CheckARServiceAvailability(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceAvailability& OutAvailability) // [0x1fab9d0] Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, FLatentActionInfo, EARServiceAvailability&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(WorldContextObject, LatentInfo, OutAvailability);
	}
};

/// Class /Script/AugmentedReality.ARGeoTrackingSupport
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UARGeoTrackingSupport : public UObject
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
	UARGeoTrackingSupport* GetGeoTrackingSupport() // [0x1fabde0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UARGeoTrackingSupport* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
	EARGeoTrackingStateReason GetGeoTrackingStateReason() // [0x1f8a8d0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARGeoTrackingStateReason (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
	EARGeoTrackingState GetGeoTrackingState() // [0x1f8a900] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARGeoTrackingState (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
	EARGeoTrackingAccuracy GetGeoTrackingAccuracy() // [0x1fabdb0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARGeoTrackingAccuracy (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
	bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, FString OptionalAnchorName) // [0x1fab810] Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(float, float, float, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(Longitude, Latitude, AltitudeMeters, OptionalAnchorName);
	}
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
	bool AddGeoAnchorAtLocation(float Longitude, float Latitude, FString OptionalAnchorName) // [0x1fab690] Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(float, float, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(Longitude, Latitude, OptionalAnchorName);
	}
};

/// Class /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
/// Size: 0x00A0 (160 bytes) (0x000050 - 0x0000A0) align 8 MaxSize: 0x00A0
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,292) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,293) /* FMulticastInlineDelegate */ __um(OnFailed);                                           // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0070   (0x0030)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
	void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, FString Error) // [0x12295a0] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)(bool, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(bIsAvailable, Error);
	}
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(UObject* WorldContextObject, float Longitude, float Latitude) // [0x1fabbb0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* (*FuncPtr)(UObject*, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, Longitude, Latitude);
	}
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(UObject* WorldContextObject) // [0x1fabb20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(WorldContextObject);
	}
};

/// Class /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
/// Size: 0x00A0 (160 bytes) (0x000050 - 0x0000A0) align 8 MaxSize: 0x00A0
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,294) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,295) /* FMulticastInlineDelegate */ __um(OnFailed);                                           // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0070   (0x0030)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
	void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, FString Error) // [0x12295a0] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)(float, float, float, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Longitude, Latitude, Altitude, Error);
	}
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
	UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(UObject* WorldContextObject, FVector& WorldPosition) // [0x1fabce0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef class UGetGeoLocationAsyncTaskBlueprintProxy* (*FuncPtr)(UObject*, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, WorldPosition);
	}
};

/// Class /Script/AugmentedReality.ARLifeCycleComponent
/// Size: 0x0230 (560 bytes) (0x0001F8 - 0x000230) align 16 MaxSize: 0x0230
class UARLifeCycleComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,296) /* FMulticastInlineDelegate */ __um(OnARActorSpawnedDelegate);                           // 0x01F8   (0x0010)  
	SDK_UNDEFINED(16,297) /* FMulticastInlineDelegate */ __um(OnARActorToBeDestroyedDelegate);                     // 0x0208   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0218   (0x0018)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
	void ServerSpawnARActor(UClass* ComponentClass, FGuid NativeID) // [0x1fafe20] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate 
	{
		typedef void (*FuncPtr)(UClass*, FGuid);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(ComponentClass, NativeID);
	}
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
	void ServerDestroyARActor(AARActor* Actor) // [0x1fafd10] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(AARActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Actor);
	}
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
	void InstanceARActorToBeDestroyedDelegate__DelegateSignature(AARActor* Actor) // [0x12295a0] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)(AARActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Actor);
	}
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
	void InstanceARActorSpawnedDelegate__DelegateSignature(UClass* ComponentClass, FGuid NativeID, AARActor* SpawnedActor) // [0x12295a0] MulticastDelegate|Public|Delegate|HasDefaults 
	{
		typedef void (*FuncPtr)(UClass*, FGuid, AARActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(ComponentClass, NativeID, SpawnedActor);
	}
};

/// Class /Script/AugmentedReality.ARPin
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align 16 MaxSize: 0x00F0
class UARPin : public UObject
{ 
public:
	class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0028   (0x0008)  
	class USceneComponent*                             PinnedComponent;                                            // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0030)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x0070   (0x0030)  
	EARTrackingState                                   TrackingState;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1F];                                      // 0x00A1   (0x001F)  MISSED
	SDK_UNDEFINED(16,298) /* FMulticastInlineDelegate */ __um(OnARTrackingStateChanged);                           // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,299) /* FMulticastInlineDelegate */ __um(OnARTransformUpdated);                               // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x00E0   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARPin.GetTrackingState
	EARTrackingState GetTrackingState() // [0x1fafc70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARTrackingState (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/AugmentedReality.ARPin.GetTrackedGeometry
	UARTrackedGeometry* GetTrackedGeometry() // [0x1fafc40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UARTrackedGeometry* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/AugmentedReality.ARPin.GetPinnedComponent
	USceneComponent* GetPinnedComponent() // [0x1fafb80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class USceneComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/AugmentedReality.ARPin.GetLocalToWorldTransform
	FTransform GetLocalToWorldTransform() // [0x1fafaf0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FTransform (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/AugmentedReality.ARPin.GetLocalToTrackingTransform
	FTransform GetLocalToTrackingTransform() // [0x1fafa90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FTransform (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
	// Function /Script/AugmentedReality.ARPin.GetDebugName
	FName GetDebugName() // [0x1faf8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FName (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/AugmentedReality.ARPin.DebugDraw
	void DebugDraw(UWorld* World, FLinearColor& Color, float Scale, float PersistForSeconds) // [0x1faf5a0] Native|Public|HasOutParms|HasDefaults|Const 
	{
		typedef void (*FuncPtr)(UWorld*, FLinearColor&, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(World, Color, Scale, PersistForSeconds);
	}
};

/// Class /Script/AugmentedReality.ARSharedWorldGameMode
/// Size: 0x0370 (880 bytes) (0x000308 - 0x000370) align 8 MaxSize: 0x0370
class AARSharedWorldGameMode : public AGameMode
{ 
public:
	int32_t                                            BufferSizePerChunk;                                         // 0x0308   (0x0004)  
	unsigned char                                      UnknownData00_7[0x64];                                      // 0x030C   (0x0064)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	void SetPreviewImageData(TArray<char> ImageData) // [0x1fb03c0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(TArray<char>);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(ImageData);
	}
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	void SetARWorldSharingIsReady() // [0x1fb0030] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	void SetARSharedWorldData(TArray<char> ARWorldData) // [0x1faff40] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(TArray<char>);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(ARWorldData);
	}
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	AARSharedWorldGameState* GetARSharedWorldGameState() // [0x1faf700] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	{
		typedef class AARSharedWorldGameState* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
};

/// Class /Script/AugmentedReality.ARSharedWorldGameState
/// Size: 0x02C8 (712 bytes) (0x000290 - 0x0002C8) align 8 MaxSize: 0x02C8
class AARSharedWorldGameState : public AGameState
{ 
public:
	TArray<char>                                       PreviewImageData;                                           // 0x0290   (0x0010)  
	TArray<char>                                       ARWorldData;                                                // 0x02A0   (0x0010)  
	int32_t                                            PreviewImageBytesTotal;                                     // 0x02B0   (0x0004)  
	int32_t                                            ARWorldBytesTotal;                                          // 0x02B4   (0x0004)  
	int32_t                                            PreviewImageBytesDelivered;                                 // 0x02B8   (0x0004)  
	int32_t                                            ARWorldBytesDelivered;                                      // 0x02BC   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x02C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	void K2_OnARWorldMapIsReady() // [0x12295a0] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
};

/// Class /Script/AugmentedReality.ARSharedWorldPlayerController
/// Size: 0x0578 (1400 bytes) (0x000570 - 0x000578) align 8 MaxSize: 0x0578
class AARSharedWorldPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0570   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	void ServerMarkReadyForReceiving() // [0x1fafdd0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	void ClientUpdatePreviewImageData(int32_t Offset, TArray<char> Buffer) // [0x1faf490] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
	{
		typedef void (*FuncPtr)(int32_t, TArray<char>);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Offset, Buffer);
	}
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	void ClientUpdateARWorldData(int32_t Offset, TArray<char> Buffer) // [0x1faf380] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
	{
		typedef void (*FuncPtr)(int32_t, TArray<char>);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Offset, Buffer);
	}
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
	void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize) // [0x1faf280] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
	{
		typedef void (*FuncPtr)(int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(PreviewImageSize, ARWorldDataSize);
	}
};

/// Class /Script/AugmentedReality.ARSkyLight
/// Size: 0x0240 (576 bytes) (0x000230 - 0x000240) align 8 MaxSize: 0x0240
class AARSkyLight : public ASkyLight
{ 
public:
	class UAREnvironmentCaptureProbe*                  CaptureProbe;                                               // 0x0230   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0238   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	void SetEnvironmentCaptureProbe(UAREnvironmentCaptureProbe* InCaptureProbe) // [0x1fb0230] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UAREnvironmentCaptureProbe*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InCaptureProbe);
	}
};

/// Class /Script/AugmentedReality.ARTexture
/// Size: 0x01A0 (416 bytes) (0x000178 - 0x0001A0) align 16 MaxSize: 0x0198
class UARTexture : public UTexture
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x0178   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0179   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x017C   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x0180   (0x0010)  
	FVector2D                                          Size;                                                       // 0x0190   (0x0008)  
};

/// Class /Script/AugmentedReality.ARTextureCameraImage
/// Size: 0x01A0 (416 bytes) (0x000198 - 0x0001A0) align 16 MaxSize: 0x01A0
class UARTextureCameraImage : public UARTexture
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0198   (0x0008)  MISSED
};

/// Class /Script/AugmentedReality.ARTextureCameraDepth
/// Size: 0x01A0 (416 bytes) (0x000198 - 0x0001A0) align 16 MaxSize: 0x01A0
class UARTextureCameraDepth : public UARTexture
{ 
public:
	EARDepthQuality                                    DepthQuality;                                               // 0x0198   (0x0001)  
	EARDepthAccuracy                                   DepthAccuracy;                                              // 0x0199   (0x0001)  
	bool                                               bIsTemporallySmoothed;                                      // 0x019A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x019B   (0x0005)  MISSED
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbeTexture
/// Size: 0x01F0 (496 bytes) (0x0001D0 - 0x0001F0) align 16 MaxSize: 0x01F0
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x01D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01D1   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x01D4   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x01D8   (0x0010)  
	FVector2D                                          Size;                                                       // 0x01E8   (0x0008)  
};

/// Class /Script/AugmentedReality.ARTraceResultDummy
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UARTraceResultDummy : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARTrackedGeometry
/// Size: 0x0100 (256 bytes) (0x000028 - 0x000100) align 16 MaxSize: 0x00F8
class UARTrackedGeometry : public UObject
{ 
public:
	FGuid                                              UniqueId;                                                   // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0030)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x0070   (0x0030)  
	EARTrackingState                                   TrackingState;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00A1   (0x000F)  MISSED
	class UMRMeshComponent*                            UnderlyingMesh;                                             // 0x00B0   (0x0008)  
	EARObjectClassification                            ObjectClassification;                                       // 0x00B8   (0x0001)  
	EARSpatialMeshUsageFlags                           SpatialMeshUsageFlags;                                      // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x16];                                      // 0x00BA   (0x0016)  MISSED
	int32_t                                            LastUpdateFrameNumber;                                      // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FName                                              DebugName;                                                  // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData04_7[0x10];                                      // 0x00E8   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedGeometry.IsTracked
	bool IsTracked() // [0x1fb5380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag
	bool HasSpatialMeshUsageFlag(EARSpatialMeshUsageFlags InFlag) // [0x1fb52f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(EARSpatialMeshUsageFlags);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(InFlag);
	}
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	UMRMeshComponent* GetUnderlyingMesh() // [0x1fb5200] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UMRMeshComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetTrackingState
	EARTrackingState GetTrackingState() // [0x1fafc70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARTrackingState (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetObjectClassification
	EARObjectClassification GetObjectClassification() // [0x1fb4f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARObjectClassification (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetName
	FString GetName() // [0x1fb4f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	FTransform GetLocalToWorldTransform() // [0x1fb4ea0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FTransform (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	FTransform GetLocalToTrackingTransform() // [0x1fafa90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FTransform (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func();
	}
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	float GetLastUpdateTimestamp() // [0x1fb4db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	int32_t GetLastUpdateFrameNumber() // [0x1fb4d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func();
	}
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetDebugName
	FName GetDebugName() // [0x1fb4be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FName (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func();
	}
};

/// Class /Script/AugmentedReality.ARPlaneGeometry
/// Size: 0x0130 (304 bytes) (0x0000F8 - 0x000130) align 16 MaxSize: 0x0130
class UARPlaneGeometry : public UARTrackedGeometry
{ 
public:
	EARPlaneOrientation                                Orientation;                                                // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F9   (0x0003)  MISSED
	FVector                                            Center;                                                     // 0x00FC   (0x000C)  
	FVector                                            Extent;                                                     // 0x0108   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0114   (0x0004)  MISSED
	TArray<FVector>                                    BoundaryPolygon;                                            // 0x0118   (0x0010)  
	class UARPlaneGeometry*                            SubsumedBy;                                                 // 0x0128   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	UARPlaneGeometry* GetSubsumedBy() // [0x1fb51b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UARPlaneGeometry* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetOrientation
	EARPlaneOrientation GetOrientation() // [0x1fb5150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARPlaneOrientation (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetExtent
	FVector GetExtent() // [0x1fb4cf0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FVector (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetCenter
	FVector GetCenter() // [0x1fb4bb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FVector (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	// TArray<FVector> GetBoundaryPolygonInLocalSpace();                                                                        // [0x1fb4a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedPoint
/// Size: 0x0100 (256 bytes) (0x0000F8 - 0x000100) align 16 MaxSize: 0x0100
class UARTrackedPoint : public UARTrackedGeometry
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/AugmentedReality.ARTrackedImage
/// Size: 0x0110 (272 bytes) (0x0000F8 - 0x000110) align 16 MaxSize: 0x0108
class UARTrackedImage : public UARTrackedGeometry
{ 
public:
	class UARCandidateImage*                           DetectedImage;                                              // 0x00F8   (0x0008)  
	FVector2D                                          EstimatedSize;                                              // 0x0100   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedImage.GetEstimateSize
	FVector2D GetEstimateSize() // [0x1fb4c70] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FVector2D (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/AugmentedReality.ARTrackedImage.GetDetectedImage
	UARCandidateImage* GetDetectedImage() // [0x1fb4c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UARCandidateImage* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
};

/// Class /Script/AugmentedReality.ARTrackedQRCode
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align 16 MaxSize: 0x0120
class UARTrackedQRCode : public UARTrackedImage
{ 
public:
	FString                                            QRCode;                                                     // 0x0108   (0x0010)  
	int32_t                                            Version;                                                    // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Class /Script/AugmentedReality.ARFaceGeometry
/// Size: 0x01F0 (496 bytes) (0x0000F8 - 0x0001F0) align 16 MaxSize: 0x01F0
class UARFaceGeometry : public UARTrackedGeometry
{ 
public:
	FVector                                            LookAtTarget;                                               // 0x00F8   (0x000C)  
	bool                                               bIsTracked;                                                 // 0x0104   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0105   (0x0003)  MISSED
	TMap<EARFaceBlendShape, float>                     BlendShapes;                                                // 0x0108   (0x0050)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0158   (0x0038)  MISSED
	FTransform                                         LeftEyeTransform;                                           // 0x0190   (0x0030)  
	FTransform                                         RightEyeTransform;                                          // 0x01C0   (0x0030)  


	/// Functions
	// Function /Script/AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	FTransform GetWorldSpaceEyeTransform(EAREye Eye) // [0x1fb5230] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FTransform (*FuncPtr)(EAREye);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Eye);
	}
	// Function /Script/AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	FTransform GetLocalSpaceEyeTransform(EAREye Eye) // [0x1fb4e00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FTransform (*FuncPtr)(EAREye);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Eye);
	}
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	float GetBlendShapeValue(EARFaceBlendShape BlendShape) // [0x1fb4890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)(EARFaceBlendShape);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(BlendShape);
	}
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapes
	// TMap<EARFaceBlendShape, float> GetBlendShapes();                                                                         // [0x1fb4920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbe
/// Size: 0x0110 (272 bytes) (0x0000F8 - 0x000110) align 16 MaxSize: 0x0110
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{ 
public:
	FVector                                            Extent;                                                     // 0x00F8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	class UAREnvironmentCaptureProbeTexture*           EnvironmentCaptureTexture;                                  // 0x0108   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	FVector GetExtent() // [0x1fb4cb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FVector (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture() // [0x1fb4c40] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UAREnvironmentCaptureProbeTexture* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
};

/// Class /Script/AugmentedReality.ARTrackedObject
/// Size: 0x0100 (256 bytes) (0x0000F8 - 0x000100) align 16 MaxSize: 0x0100
class UARTrackedObject : public UARTrackedGeometry
{ 
public:
	class UARCandidateObject*                          DetectedObject;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedObject.GetDetectedObject
	UARCandidateObject* GetDetectedObject() // [0x1fb4c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UARCandidateObject* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
};

/// Class /Script/AugmentedReality.ARTrackedPose
/// Size: 0x0150 (336 bytes) (0x0000F8 - 0x000150) align 16 MaxSize: 0x0150
class UARTrackedPose : public UARTrackedGeometry
{ 
public:
	FARPose3D                                          TrackedPose;                                                // 0x00F8   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0148   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedPose.GetTrackedPoseData
	FARPose3D GetTrackedPoseData() // [0x1fb51d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FARPose3D (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
};

/// Class /Script/AugmentedReality.ARMeshGeometry
/// Size: 0x0100 (256 bytes) (0x0000F8 - 0x000100) align 16 MaxSize: 0x0100
class UARMeshGeometry : public UARTrackedGeometry
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
	bool GetObjectClassificationAtLocation(FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff) // [0x1fb4f80] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FVector&, EARObjectClassification&, FVector&, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(InWorldLocation, OutClassification, OutClassificationLocation, MaxLocationDiff);
	}
};

/// Class /Script/AugmentedReality.ARGeoAnchor
/// Size: 0x0110 (272 bytes) (0x0000F8 - 0x000110) align 16 MaxSize: 0x0110
class UARGeoAnchor : public UARTrackedGeometry
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00F8   (0x0018)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARGeoAnchor.GetLongitude
	float GetLongitude() // [0x1fb4f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/AugmentedReality.ARGeoAnchor.GetLatitude
	float GetLatitude() // [0x1fb4de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/AugmentedReality.ARGeoAnchor.GetAltitudeSource
	EARAltitudeSource GetAltitudeSource() // [0x1fb4870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EARAltitudeSource (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/AugmentedReality.ARGeoAnchor.GetAltitudeMeters
	float GetAltitudeMeters() // [0x1fb4850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
};

/// Class /Script/AugmentedReality.ARTrackableNotifyComponent
/// Size: 0x0200 (512 bytes) (0x0000B0 - 0x000200) align 8 MaxSize: 0x0200
class UARTrackableNotifyComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,300) /* FMulticastInlineDelegate */ __um(OnAddTrackedGeometry);                               // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,301) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedGeometry);                            // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,302) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedGeometry);                            // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,303) /* FMulticastInlineDelegate */ __um(OnAddTrackedPlane);                                  // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,304) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedPlane);                               // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,305) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedPlane);                               // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,306) /* FMulticastInlineDelegate */ __um(OnAddTrackedPoint);                                  // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,307) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedPoint);                               // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,308) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedPoint);                               // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,309) /* FMulticastInlineDelegate */ __um(OnAddTrackedImage);                                  // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,310) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedImage);                               // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,311) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedImage);                               // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,312) /* FMulticastInlineDelegate */ __um(OnAddTrackedFace);                                   // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,313) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedFace);                                // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,314) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedFace);                                // 0x0190   (0x0010)  
	SDK_UNDEFINED(16,315) /* FMulticastInlineDelegate */ __um(OnAddTrackedEnvProbe);                               // 0x01A0   (0x0010)  
	SDK_UNDEFINED(16,316) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedEnvProbe);                            // 0x01B0   (0x0010)  
	SDK_UNDEFINED(16,317) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedEnvProbe);                            // 0x01C0   (0x0010)  
	SDK_UNDEFINED(16,318) /* FMulticastInlineDelegate */ __um(OnAddTrackedObject);                                 // 0x01D0   (0x0010)  
	SDK_UNDEFINED(16,319) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedObject);                              // 0x01E0   (0x0010)  
	SDK_UNDEFINED(16,320) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedObject);                              // 0x01F0   (0x0010)  
};

/// Class /Script/AugmentedReality.ARTypesDummyClass
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UARTypesDummyClass : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARCandidateObject
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UARCandidateObject : public UDataAsset
{ 
public:
	TArray<char>                                       CandidateObjectData;                                        // 0x0030   (0x0010)  
	FString                                            FriendlyName;                                               // 0x0040   (0x0010)  
	FBox                                               BoundingBox;                                                // 0x0050   (0x001C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateObject.SetFriendlyName
	void SetFriendlyName(FString NewName) // [0x1fb5500] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(NewName);
	}
	// Function /Script/AugmentedReality.ARCandidateObject.SetCandidateObjectData
	void SetCandidateObjectData(TArray<char>& InCandidateObject) // [0x1fb5450] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(TArray<char>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InCandidateObject);
	}
	// Function /Script/AugmentedReality.ARCandidateObject.SetBoundingBox
	void SetBoundingBox(FBox& InBoundingBox) // [0x1fb53b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FBox&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InBoundingBox);
	}
	// Function /Script/AugmentedReality.ARCandidateObject.GetFriendlyName
	FString GetFriendlyName() // [0x1fb4d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/AugmentedReality.ARCandidateObject.GetCandidateObjectData
	TArray<char> GetCandidateObjectData() // [0x1fb4b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef TArray<char> (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
	// Function /Script/AugmentedReality.ARCandidateObject.GetBoundingBox
	FBox GetBoundingBox() // [0x1fb4b30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FBox (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
};

#pragma pack(pop)


static_assert(sizeof(AAROriginActor) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(FARVideoFormat) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UARSessionConfig) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(UARLightEstimate) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARBasicLightEstimate) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UARCandidateImage) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(AARActor) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(UARBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARTraceResultLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARBaseAsyncTaskBlueprintProxy) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UARSaveWorldAsyncTaskBlueprintProxy) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(UARGetCandidateObjectAsyncTaskBlueprintProxy) == 0x0098); // 152 bytes (0x000050 - 0x000098)
static_assert(sizeof(UARComponent) == 0x0278); // 632 bytes (0x0001F8 - 0x000278)
static_assert(sizeof(FARSessionPayload) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FARPlaneUpdatePayload) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(UARPlaneComponent) == 0x0300); // 768 bytes (0x000278 - 0x000300)
static_assert(sizeof(FARPointUpdatePayload) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(UARPointComponent) == 0x0280); // 640 bytes (0x000278 - 0x000280)
static_assert(sizeof(FARFaceUpdatePayload) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UARFaceComponent) == 0x02E0); // 736 bytes (0x000278 - 0x0002E0)
static_assert(sizeof(FARImageUpdatePayload) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UARImageComponent) == 0x02E0); // 736 bytes (0x000278 - 0x0002E0)
static_assert(sizeof(FARQRCodeUpdatePayload) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UARQRCodeComponent) == 0x02F0); // 752 bytes (0x000278 - 0x0002F0)
static_assert(sizeof(FARPoseUpdatePayload) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UARPoseComponent) == 0x02C0); // 704 bytes (0x000278 - 0x0002C0)
static_assert(sizeof(FAREnvironmentProbeUpdatePayload) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UAREnvironmentProbeComponent) == 0x02B0); // 688 bytes (0x000278 - 0x0002B0)
static_assert(sizeof(FARObjectUpdatePayload) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UARObjectComponent) == 0x02B0); // 688 bytes (0x000278 - 0x0002B0)
static_assert(sizeof(FARMeshUpdatePayload) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UARMeshComponent) == 0x02E0); // 736 bytes (0x000278 - 0x0002E0)
static_assert(sizeof(FARGeoAnchorUpdatePayload) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UARGeoAnchorComponent) == 0x02F0); // 752 bytes (0x000278 - 0x0002F0)
static_assert(sizeof(UARDependencyHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARGeoTrackingSupport) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy) == 0x00A0); // 160 bytes (0x000050 - 0x0000A0)
static_assert(sizeof(UGetGeoLocationAsyncTaskBlueprintProxy) == 0x00A0); // 160 bytes (0x000050 - 0x0000A0)
static_assert(sizeof(UARLifeCycleComponent) == 0x0230); // 560 bytes (0x0001F8 - 0x000230)
static_assert(sizeof(UARPin) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(AARSharedWorldGameMode) == 0x0370); // 880 bytes (0x000308 - 0x000370)
static_assert(sizeof(AARSharedWorldGameState) == 0x02C8); // 712 bytes (0x000290 - 0x0002C8)
static_assert(sizeof(AARSharedWorldPlayerController) == 0x0578); // 1400 bytes (0x000570 - 0x000578)
static_assert(sizeof(AARSkyLight) == 0x0240); // 576 bytes (0x000230 - 0x000240)
static_assert(sizeof(UARTexture) == 0x0198); // 408 bytes (0x000178 - 0x000198)
static_assert(sizeof(UARTextureCameraImage) == 0x01A0); // 416 bytes (0x000198 - 0x0001A0)
static_assert(sizeof(UARTextureCameraDepth) == 0x01A0); // 416 bytes (0x000198 - 0x0001A0)
static_assert(sizeof(UAREnvironmentCaptureProbeTexture) == 0x01F0); // 496 bytes (0x0001D0 - 0x0001F0)
static_assert(sizeof(UARTraceResultDummy) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARTrackedGeometry) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(UARPlaneGeometry) == 0x0130); // 304 bytes (0x0000F8 - 0x000130)
static_assert(sizeof(UARTrackedPoint) == 0x0100); // 256 bytes (0x0000F8 - 0x000100)
static_assert(sizeof(UARTrackedImage) == 0x0108); // 264 bytes (0x0000F8 - 0x000108)
static_assert(sizeof(UARTrackedQRCode) == 0x0120); // 288 bytes (0x000108 - 0x000120)
static_assert(sizeof(UARFaceGeometry) == 0x01F0); // 496 bytes (0x0000F8 - 0x0001F0)
static_assert(sizeof(UAREnvironmentCaptureProbe) == 0x0110); // 272 bytes (0x0000F8 - 0x000110)
static_assert(sizeof(UARTrackedObject) == 0x0100); // 256 bytes (0x0000F8 - 0x000100)
static_assert(sizeof(FARSkeletonDefinition) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FARPose3D) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UARTrackedPose) == 0x0150); // 336 bytes (0x0000F8 - 0x000150)
static_assert(sizeof(UARMeshGeometry) == 0x0100); // 256 bytes (0x0000F8 - 0x000100)
static_assert(sizeof(UARGeoAnchor) == 0x0110); // 272 bytes (0x0000F8 - 0x000110)
static_assert(sizeof(UARTrackableNotifyComponent) == 0x0200); // 512 bytes (0x0000B0 - 0x000200)
static_assert(sizeof(UARTypesDummyClass) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARCandidateObject) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(FTrackedGeometryGroup) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FARSharedWorldReplicationState) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FARTraceResult) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FARCameraIntrinsics) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FARPose2D) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FARSessionStatus) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UARSessionConfig, WorldAlignment) == 0x003A);
static_assert(offsetof(UARSessionConfig, SessionType) == 0x003B);
static_assert(offsetof(UARSessionConfig, PlaneDetectionMode) == 0x003C);
static_assert(offsetof(UARSessionConfig, LightEstimationMode) == 0x0040);
static_assert(offsetof(UARSessionConfig, FrameSyncMode) == 0x0041);
static_assert(offsetof(UARSessionConfig, CandidateImages) == 0x0048);
static_assert(offsetof(UARSessionConfig, EnvironmentCaptureProbeType) == 0x005C);
static_assert(offsetof(UARSessionConfig, WorldMapData) == 0x0060);
static_assert(offsetof(UARSessionConfig, CandidateObjects) == 0x0070);
static_assert(offsetof(UARSessionConfig, DesiredVideoFormat) == 0x0080);
static_assert(offsetof(UARSessionConfig, FaceTrackingDirection) == 0x008D);
static_assert(offsetof(UARSessionConfig, FaceTrackingUpdate) == 0x008E);
static_assert(offsetof(UARSessionConfig, SerializedARCandidateImageDatabase) == 0x0098);
static_assert(offsetof(UARSessionConfig, EnabledSessionTrackingFeature) == 0x00A8);
static_assert(offsetof(UARSessionConfig, SceneReconstructionMethod) == 0x00A9);
static_assert(offsetof(UARSessionConfig, PlaneComponentClass) == 0x00B0);
static_assert(offsetof(UARSessionConfig, PointComponentClass) == 0x00B8);
static_assert(offsetof(UARSessionConfig, FaceComponentClass) == 0x00C0);
static_assert(offsetof(UARSessionConfig, ImageComponentClass) == 0x00C8);
static_assert(offsetof(UARSessionConfig, QRCodeComponentClass) == 0x00D0);
static_assert(offsetof(UARSessionConfig, PoseComponentClass) == 0x00D8);
static_assert(offsetof(UARSessionConfig, EnvironmentProbeComponentClass) == 0x00E0);
static_assert(offsetof(UARSessionConfig, ObjectComponentClass) == 0x00E8);
static_assert(offsetof(UARSessionConfig, MeshComponentClass) == 0x00F0);
static_assert(offsetof(UARSessionConfig, GeoAnchorComponentClass) == 0x00F8);
static_assert(offsetof(UARSessionConfig, DefaultMeshMaterial) == 0x0100);
static_assert(offsetof(UARSessionConfig, DefaultWireframeMeshMaterial) == 0x0108);
static_assert(offsetof(UARBasicLightEstimate, AmbientColor) == 0x0030);
static_assert(offsetof(UARCandidateImage, CandidateTexture) == 0x0030);
static_assert(offsetof(UARCandidateImage, FriendlyName) == 0x0038);
static_assert(offsetof(UARCandidateImage, Orientation) == 0x0050);
static_assert(offsetof(UARComponent, NativeID) == 0x01F8);
static_assert(offsetof(UARComponent, DefaultMeshMaterial) == 0x0240);
static_assert(offsetof(UARComponent, DefaultWireframeMeshMaterial) == 0x0248);
static_assert(offsetof(UARComponent, MRMeshComponent) == 0x0250);
static_assert(offsetof(UARComponent, MyTrackedGeometry) == 0x0258);
static_assert(offsetof(FARSessionPayload, DefaultMeshMaterial) == 0x0008);
static_assert(offsetof(FARSessionPayload, DefaultWireframeMeshMaterial) == 0x0010);
static_assert(offsetof(FARPlaneUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARPlaneUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARPlaneUpdatePayload, Center) == 0x0050);
static_assert(offsetof(FARPlaneUpdatePayload, Extents) == 0x005C);
static_assert(offsetof(FARPlaneUpdatePayload, BoundaryVertices) == 0x0068);
static_assert(offsetof(FARPlaneUpdatePayload, ObjectClassification) == 0x0078);
static_assert(offsetof(UARPlaneComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(UARPointComponent, ReplicatedPayload) == 0x0278);
static_assert(offsetof(FARFaceUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARFaceUpdatePayload, LeftEyePosition) == 0x0018);
static_assert(offsetof(FARFaceUpdatePayload, RightEyePosition) == 0x0024);
static_assert(offsetof(FARFaceUpdatePayload, LookAtTarget) == 0x0030);
static_assert(offsetof(UARFaceComponent, TransformSetting) == 0x0278);
static_assert(offsetof(UARFaceComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(FARImageUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARImageUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARImageUpdatePayload, DetectedImage) == 0x0050);
static_assert(offsetof(FARImageUpdatePayload, EstimatedSize) == 0x0058);
static_assert(offsetof(UARImageComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(FARQRCodeUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARQRCodeUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARQRCodeUpdatePayload, Extents) == 0x0050);
static_assert(offsetof(FARQRCodeUpdatePayload, QRCode) == 0x0060);
static_assert(offsetof(UARQRCodeComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(FARPoseUpdatePayload, WorldTransform) == 0x0000);
static_assert(offsetof(FARPoseUpdatePayload, JointTransforms) == 0x0030);
static_assert(offsetof(UARPoseComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(FAREnvironmentProbeUpdatePayload, WorldTransform) == 0x0000);
static_assert(offsetof(UAREnvironmentProbeComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(FARObjectUpdatePayload, WorldTransform) == 0x0000);
static_assert(offsetof(UARObjectComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(FARMeshUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARMeshUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARMeshUpdatePayload, ObjectClassification) == 0x0050);
static_assert(offsetof(UARMeshComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(FARGeoAnchorUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARGeoAnchorUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARGeoAnchorUpdatePayload, AltitudeSource) == 0x005C);
static_assert(offsetof(FARGeoAnchorUpdatePayload, AnchorName) == 0x0060);
static_assert(offsetof(UARGeoAnchorComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(UARPin, TrackedGeometry) == 0x0028);
static_assert(offsetof(UARPin, PinnedComponent) == 0x0030);
static_assert(offsetof(UARPin, LocalToTrackingTransform) == 0x0040);
static_assert(offsetof(UARPin, LocalToAlignedTrackingTransform) == 0x0070);
static_assert(offsetof(UARPin, TrackingState) == 0x00A0);
static_assert(offsetof(AARSharedWorldGameState, PreviewImageData) == 0x0290);
static_assert(offsetof(AARSharedWorldGameState, ARWorldData) == 0x02A0);
static_assert(offsetof(AARSkyLight, CaptureProbe) == 0x0230);
static_assert(offsetof(UARTexture, TextureType) == 0x0178);
static_assert(offsetof(UARTexture, ExternalTextureGuid) == 0x0180);
static_assert(offsetof(UARTexture, Size) == 0x0190);
static_assert(offsetof(UARTextureCameraDepth, DepthQuality) == 0x0198);
static_assert(offsetof(UARTextureCameraDepth, DepthAccuracy) == 0x0199);
static_assert(offsetof(UAREnvironmentCaptureProbeTexture, TextureType) == 0x01D0);
static_assert(offsetof(UAREnvironmentCaptureProbeTexture, ExternalTextureGuid) == 0x01D8);
static_assert(offsetof(UAREnvironmentCaptureProbeTexture, Size) == 0x01E8);
static_assert(offsetof(UARTrackedGeometry, UniqueId) == 0x0028);
static_assert(offsetof(UARTrackedGeometry, LocalToTrackingTransform) == 0x0040);
static_assert(offsetof(UARTrackedGeometry, LocalToAlignedTrackingTransform) == 0x0070);
static_assert(offsetof(UARTrackedGeometry, TrackingState) == 0x00A0);
static_assert(offsetof(UARTrackedGeometry, UnderlyingMesh) == 0x00B0);
static_assert(offsetof(UARTrackedGeometry, ObjectClassification) == 0x00B8);
static_assert(offsetof(UARTrackedGeometry, SpatialMeshUsageFlags) == 0x00B9);
static_assert(offsetof(UARTrackedGeometry, DebugName) == 0x00E0);
static_assert(offsetof(UARPlaneGeometry, Orientation) == 0x00F8);
static_assert(offsetof(UARPlaneGeometry, Center) == 0x00FC);
static_assert(offsetof(UARPlaneGeometry, Extent) == 0x0108);
static_assert(offsetof(UARPlaneGeometry, BoundaryPolygon) == 0x0118);
static_assert(offsetof(UARPlaneGeometry, SubsumedBy) == 0x0128);
static_assert(offsetof(UARTrackedImage, DetectedImage) == 0x00F8);
static_assert(offsetof(UARTrackedImage, EstimatedSize) == 0x0100);
static_assert(offsetof(UARTrackedQRCode, QRCode) == 0x0108);
static_assert(offsetof(UARFaceGeometry, LookAtTarget) == 0x00F8);
static_assert(offsetof(UARFaceGeometry, BlendShapes) == 0x0108);
static_assert(offsetof(UARFaceGeometry, LeftEyeTransform) == 0x0190);
static_assert(offsetof(UARFaceGeometry, RightEyeTransform) == 0x01C0);
static_assert(offsetof(UAREnvironmentCaptureProbe, Extent) == 0x00F8);
static_assert(offsetof(UAREnvironmentCaptureProbe, EnvironmentCaptureTexture) == 0x0108);
static_assert(offsetof(UARTrackedObject, DetectedObject) == 0x00F8);
static_assert(offsetof(FARSkeletonDefinition, JointNames) == 0x0008);
static_assert(offsetof(FARSkeletonDefinition, ParentIndices) == 0x0018);
static_assert(offsetof(FARPose3D, SkeletonDefinition) == 0x0000);
static_assert(offsetof(FARPose3D, JointTransforms) == 0x0028);
static_assert(offsetof(FARPose3D, IsJointTracked) == 0x0038);
static_assert(offsetof(FARPose3D, JointTransformSpace) == 0x0048);
static_assert(offsetof(UARTrackedPose, TrackedPose) == 0x00F8);
static_assert(offsetof(UARCandidateObject, CandidateObjectData) == 0x0030);
static_assert(offsetof(UARCandidateObject, FriendlyName) == 0x0040);
static_assert(offsetof(UARCandidateObject, BoundingBox) == 0x0050);
static_assert(offsetof(FTrackedGeometryGroup, ARActor) == 0x0000);
static_assert(offsetof(FTrackedGeometryGroup, ARComponent) == 0x0008);
static_assert(offsetof(FTrackedGeometryGroup, TrackedGeometry) == 0x0010);
static_assert(offsetof(FARTraceResult, TraceChannel) == 0x0004);
static_assert(offsetof(FARTraceResult, LocalTransform) == 0x0010);
static_assert(offsetof(FARTraceResult, TrackedGeometry) == 0x0040);
static_assert(offsetof(FARCameraIntrinsics, ImageResolution) == 0x0000);
static_assert(offsetof(FARCameraIntrinsics, FocalLength) == 0x0008);
static_assert(offsetof(FARCameraIntrinsics, PrincipalPoint) == 0x0010);
static_assert(offsetof(FARPose2D, SkeletonDefinition) == 0x0000);
static_assert(offsetof(FARPose2D, JointLocations) == 0x0028);
static_assert(offsetof(FARPose2D, IsJointTracked) == 0x0038);
static_assert(offsetof(FARSessionStatus, AdditionalInfo) == 0x0000);
static_assert(offsetof(FARSessionStatus, Status) == 0x0010);
