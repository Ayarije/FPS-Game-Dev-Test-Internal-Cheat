
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "AudioExtensions.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "SlateCore.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UAudioImpulseResponse;
class UEnvelopeFollowerListener;
class UGranularSynth;
class UModularSynthComponent;
class UModularSynthLibrary;
class UModularSynthPresetBank;
class UMonoWaveTableSynthPreset;
class USourceEffectBitCrusherPreset;
class USourceEffectChorusPreset;
class USourceEffectDynamicsProcessorPreset;
class USourceEffectEQPreset;
class USourceEffectEnvelopeFollowerPreset;
class USourceEffectFilterPreset;
class USourceEffectFoldbackDistortionPreset;
class USourceEffectMidSideSpreaderPreset;
class USourceEffectPannerPreset;
class USourceEffectPhaserPreset;
class USourceEffectRingModulationPreset;
class USourceEffectSimpleDelayPreset;
class USourceEffectStereoDelayPreset;
class USourceEffectWaveShaperPreset;
class USubmixEffectConvolutionReverbPreset;
class USubmixEffectDelayPreset;
class USubmixEffectFilterPreset;
class USubmixEffectFlexiverbPreset;
class USubmixEffectMultibandCompressorPreset;
class USubmixEffectStereoDelayPreset;
class USubmixEffectTapDelayPreset;
class USynth2DSlider;
class USynthComponentMonoWaveTable;
class USynthComponentToneGenerator;
class USynthKnob;
class USynthSamplePlayer;
class USynthesisUtilitiesBlueprintFunctionLibrary;

/// Enum /Script/Synthesis.ESynth1PatchDestination
/// Size: 0x01 (1 bytes)
enum class ESynth1PatchDestination : uint8_t
{
	ESynth1PatchDestination__Osc1Gain                                                = 0,
	ESynth1PatchDestination__Osc1Frequency                                           = 1,
	ESynth1PatchDestination__Osc1Pulsewidth                                          = 2,
	ESynth1PatchDestination__Osc2Gain                                                = 3,
	ESynth1PatchDestination__Osc2Frequency                                           = 4,
	ESynth1PatchDestination__Osc2Pulsewidth                                          = 5,
	ESynth1PatchDestination__FilterFrequency                                         = 6,
	ESynth1PatchDestination__FilterQ                                                 = 7,
	ESynth1PatchDestination__Gain                                                    = 8,
	ESynth1PatchDestination__Pan                                                     = 9,
	ESynth1PatchDestination__LFO1Frequency                                           = 10,
	ESynth1PatchDestination__LFO1Gain                                                = 11,
	ESynth1PatchDestination__LFO2Frequency                                           = 12,
	ESynth1PatchDestination__LFO2Gain                                                = 13,
	ESynth1PatchDestination__Count                                                   = 14
};

/// Enum /Script/Synthesis.ESynth1PatchSource
/// Size: 0x01 (1 bytes)
enum class ESynth1PatchSource : uint8_t
{
	ESynth1PatchSource__LFO1                                                         = 0,
	ESynth1PatchSource__LFO2                                                         = 1,
	ESynth1PatchSource__Envelope                                                     = 2,
	ESynth1PatchSource__BiasEnvelope                                                 = 3,
	ESynth1PatchSource__Count                                                        = 4
};

/// Enum /Script/Synthesis.ESynthStereoDelayMode
/// Size: 0x01 (1 bytes)
enum class ESynthStereoDelayMode : uint8_t
{
	ESynthStereoDelayMode__Normal                                                    = 0,
	ESynthStereoDelayMode__Cross                                                     = 1,
	ESynthStereoDelayMode__PingPong                                                  = 2,
	ESynthStereoDelayMode__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthFilterAlgorithm
/// Size: 0x01 (1 bytes)
enum class ESynthFilterAlgorithm : uint8_t
{
	ESynthFilterAlgorithm__OnePole                                                   = 0,
	ESynthFilterAlgorithm__StateVariable                                             = 1,
	ESynthFilterAlgorithm__Ladder                                                    = 2,
	ESynthFilterAlgorithm__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthFilterType
/// Size: 0x01 (1 bytes)
enum class ESynthFilterType : uint8_t
{
	ESynthFilterType__LowPass                                                        = 0,
	ESynthFilterType__HighPass                                                       = 1,
	ESynthFilterType__BandPass                                                       = 2,
	ESynthFilterType__BandStop                                                       = 3,
	ESynthFilterType__Count                                                          = 4
};

/// Enum /Script/Synthesis.ESynthModEnvBiasPatch
/// Size: 0x01 (1 bytes)
enum class ESynthModEnvBiasPatch : uint8_t
{
	ESynthModEnvBiasPatch__PatchToNone                                               = 0,
	ESynthModEnvBiasPatch__PatchToOscFreq                                            = 1,
	ESynthModEnvBiasPatch__PatchToFilterFreq                                         = 2,
	ESynthModEnvBiasPatch__PatchToFilterQ                                            = 3,
	ESynthModEnvBiasPatch__PatchToLFO1Gain                                           = 4,
	ESynthModEnvBiasPatch__PatchToLFO2Gain                                           = 5,
	ESynthModEnvBiasPatch__PatchToLFO1Freq                                           = 6,
	ESynthModEnvBiasPatch__PatchToLFO2Freq                                           = 7,
	ESynthModEnvBiasPatch__Count                                                     = 8
};

/// Enum /Script/Synthesis.ESynthModEnvPatch
/// Size: 0x01 (1 bytes)
enum class ESynthModEnvPatch : uint8_t
{
	ESynthModEnvPatch__PatchToNone                                                   = 0,
	ESynthModEnvPatch__PatchToOscFreq                                                = 1,
	ESynthModEnvPatch__PatchToFilterFreq                                             = 2,
	ESynthModEnvPatch__PatchToFilterQ                                                = 3,
	ESynthModEnvPatch__PatchToLFO1Gain                                               = 4,
	ESynthModEnvPatch__PatchToLFO2Gain                                               = 5,
	ESynthModEnvPatch__PatchToLFO1Freq                                               = 6,
	ESynthModEnvPatch__PatchToLFO2Freq                                               = 7,
	ESynthModEnvPatch__Count                                                         = 8
};

/// Enum /Script/Synthesis.ESynthLFOPatchType
/// Size: 0x01 (1 bytes)
enum class ESynthLFOPatchType : uint8_t
{
	ESynthLFOPatchType__PatchToNone                                                  = 0,
	ESynthLFOPatchType__PatchToGain                                                  = 1,
	ESynthLFOPatchType__PatchToOscFreq                                               = 2,
	ESynthLFOPatchType__PatchToFilterFreq                                            = 3,
	ESynthLFOPatchType__PatchToFilterQ                                               = 4,
	ESynthLFOPatchType__PatchToOscPulseWidth                                         = 5,
	ESynthLFOPatchType__PatchToOscPan                                                = 6,
	ESynthLFOPatchType__PatchLFO1ToLFO2Frequency                                     = 7,
	ESynthLFOPatchType__PatchLFO1ToLFO2Gain                                          = 8,
	ESynthLFOPatchType__Count                                                        = 9
};

/// Enum /Script/Synthesis.ESynthLFOMode
/// Size: 0x01 (1 bytes)
enum class ESynthLFOMode : uint8_t
{
	ESynthLFOMode__Sync                                                              = 0,
	ESynthLFOMode__OneShot                                                           = 1,
	ESynthLFOMode__Free                                                              = 2,
	ESynthLFOMode__Count                                                             = 3
};

/// Enum /Script/Synthesis.ESynthLFOType
/// Size: 0x01 (1 bytes)
enum class ESynthLFOType : uint8_t
{
	ESynthLFOType__Sine                                                              = 0,
	ESynthLFOType__UpSaw                                                             = 1,
	ESynthLFOType__DownSaw                                                           = 2,
	ESynthLFOType__Square                                                            = 3,
	ESynthLFOType__Triangle                                                          = 4,
	ESynthLFOType__Exponential                                                       = 5,
	ESynthLFOType__RandomSampleHold                                                  = 6,
	ESynthLFOType__Count                                                             = 7
};

/// Enum /Script/Synthesis.ESynth1OscType
/// Size: 0x01 (1 bytes)
enum class ESynth1OscType : uint8_t
{
	ESynth1OscType__Sine                                                             = 0,
	ESynth1OscType__Saw                                                              = 1,
	ESynth1OscType__Triangle                                                         = 2,
	ESynth1OscType__Square                                                           = 3,
	ESynth1OscType__Noise                                                            = 4,
	ESynth1OscType__Count                                                            = 5
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsPeakMode
/// Size: 0x01 (1 bytes)
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
	ESourceEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESourceEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESourceEffectDynamicsPeakMode__Peak                                              = 2,
	ESourceEffectDynamicsPeakMode__Count                                             = 3
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsProcessorType
/// Size: 0x01 (1 bytes)
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
	ESourceEffectDynamicsProcessorType__Compressor                                   = 0,
	ESourceEffectDynamicsProcessorType__Limiter                                      = 1,
	ESourceEffectDynamicsProcessorType__Expander                                     = 2,
	ESourceEffectDynamicsProcessorType__Gate                                         = 3,
	ESourceEffectDynamicsProcessorType__Count                                        = 4
};

/// Enum /Script/Synthesis.EEnvelopeFollowerPeakMode
/// Size: 0x01 (1 bytes)
enum class EEnvelopeFollowerPeakMode : uint8_t
{
	EEnvelopeFollowerPeakMode__MeanSquared                                           = 0,
	EEnvelopeFollowerPeakMode__RootMeanSquared                                       = 1,
	EEnvelopeFollowerPeakMode__Peak                                                  = 2,
	EEnvelopeFollowerPeakMode__Count                                                 = 3
};

/// Enum /Script/Synthesis.ESourceEffectFilterParam
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterParam : uint8_t
{
	ESourceEffectFilterParam__FilterFrequency                                        = 0,
	ESourceEffectFilterParam__FilterResonance                                        = 1,
	ESourceEffectFilterParam__Count                                                  = 2
};

/// Enum /Script/Synthesis.ESourceEffectFilterType
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterType : uint8_t
{
	ESourceEffectFilterType__LowPass                                                 = 0,
	ESourceEffectFilterType__HighPass                                                = 1,
	ESourceEffectFilterType__BandPass                                                = 2,
	ESourceEffectFilterType__BandStop                                                = 3,
	ESourceEffectFilterType__Count                                                   = 4
};

/// Enum /Script/Synthesis.ESourceEffectFilterCircuit
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterCircuit : uint8_t
{
	ESourceEffectFilterCircuit__OnePole                                              = 0,
	ESourceEffectFilterCircuit__StateVariable                                        = 1,
	ESourceEffectFilterCircuit__Ladder                                               = 2,
	ESourceEffectFilterCircuit__Count                                                = 3
};

/// Enum /Script/Synthesis.EStereoChannelMode
/// Size: 0x01 (1 bytes)
enum class EStereoChannelMode : uint8_t
{
	EStereoChannelMode__MidSide                                                      = 0,
	EStereoChannelMode__LeftRight                                                    = 1,
	EStereoChannelMode__count                                                        = 2
};

/// Enum /Script/Synthesis.EPhaserLFOType
/// Size: 0x01 (1 bytes)
enum class EPhaserLFOType : uint8_t
{
	EPhaserLFOType__Sine                                                             = 0,
	EPhaserLFOType__UpSaw                                                            = 1,
	EPhaserLFOType__DownSaw                                                          = 2,
	EPhaserLFOType__Square                                                           = 3,
	EPhaserLFOType__Triangle                                                         = 4,
	EPhaserLFOType__Exponential                                                      = 5,
	EPhaserLFOType__RandomSampleHold                                                 = 6,
	EPhaserLFOType__Count                                                            = 7
};

/// Enum /Script/Synthesis.ERingModulatorTypeSourceEffect
/// Size: 0x01 (1 bytes)
enum class ERingModulatorTypeSourceEffect : uint8_t
{
	ERingModulatorTypeSourceEffect__Sine                                             = 0,
	ERingModulatorTypeSourceEffect__Saw                                              = 1,
	ERingModulatorTypeSourceEffect__Triangle                                         = 2,
	ERingModulatorTypeSourceEffect__Square                                           = 3,
	ERingModulatorTypeSourceEffect__Count                                            = 4
};

/// Enum /Script/Synthesis.EStereoDelayFiltertype
/// Size: 0x01 (1 bytes)
enum class EStereoDelayFiltertype : uint8_t
{
	EStereoDelayFiltertype__Lowpass                                                  = 0,
	EStereoDelayFiltertype__Highpass                                                 = 1,
	EStereoDelayFiltertype__Bandpass                                                 = 2,
	EStereoDelayFiltertype__Notch                                                    = 3,
	EStereoDelayFiltertype__Count                                                    = 4
};

/// Enum /Script/Synthesis.EStereoDelaySourceEffect
/// Size: 0x01 (1 bytes)
enum class EStereoDelaySourceEffect : uint8_t
{
	EStereoDelaySourceEffect__Normal                                                 = 0,
	EStereoDelaySourceEffect__Cross                                                  = 1,
	EStereoDelaySourceEffect__PingPong                                               = 2,
	EStereoDelaySourceEffect__Count                                                  = 3
};

/// Enum /Script/Synthesis.ESubmixEffectConvolutionReverbBlockSize
/// Size: 0x01 (1 bytes)
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	ESubmixEffectConvolutionReverbBlockSize__BlockSize256                            = 0,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize512                            = 1,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize1024                           = 2
};

/// Enum /Script/Synthesis.ESubmixFilterAlgorithm
/// Size: 0x01 (1 bytes)
enum class ESubmixFilterAlgorithm : uint8_t
{
	ESubmixFilterAlgorithm__OnePole                                                  = 0,
	ESubmixFilterAlgorithm__StateVariable                                            = 1,
	ESubmixFilterAlgorithm__Ladder                                                   = 2,
	ESubmixFilterAlgorithm__Count                                                    = 3
};

/// Enum /Script/Synthesis.ESubmixFilterType
/// Size: 0x01 (1 bytes)
enum class ESubmixFilterType : uint8_t
{
	ESubmixFilterType__LowPass                                                       = 0,
	ESubmixFilterType__HighPass                                                      = 1,
	ESubmixFilterType__BandPass                                                      = 2,
	ESubmixFilterType__BandStop                                                      = 3,
	ESubmixFilterType__Count                                                         = 4
};

/// Enum /Script/Synthesis.ETapLineMode
/// Size: 0x01 (1 bytes)
enum class ETapLineMode : uint8_t
{
	ETapLineMode__SendToChannel                                                      = 0,
	ETapLineMode__Panning                                                            = 1,
	ETapLineMode__Disabled                                                           = 2
};

/// Enum /Script/Synthesis.EGranularSynthSeekType
/// Size: 0x01 (1 bytes)
enum class EGranularSynthSeekType : uint8_t
{
	EGranularSynthSeekType__FromBeginning                                            = 0,
	EGranularSynthSeekType__FromCurrentPosition                                      = 1,
	EGranularSynthSeekType__Count                                                    = 2
};

/// Enum /Script/Synthesis.EGranularSynthEnvelopeType
/// Size: 0x01 (1 bytes)
enum class EGranularSynthEnvelopeType : uint8_t
{
	EGranularSynthEnvelopeType__Rectangular                                          = 0,
	EGranularSynthEnvelopeType__Triangle                                             = 1,
	EGranularSynthEnvelopeType__DownwardTriangle                                     = 2,
	EGranularSynthEnvelopeType__UpwardTriangle                                       = 3,
	EGranularSynthEnvelopeType__ExponentialDecay                                     = 4,
	EGranularSynthEnvelopeType__ExponentialIncrease                                  = 5,
	EGranularSynthEnvelopeType__Gaussian                                             = 6,
	EGranularSynthEnvelopeType__Hanning                                              = 7,
	EGranularSynthEnvelopeType__Lanczos                                              = 8,
	EGranularSynthEnvelopeType__Cosine                                               = 9,
	EGranularSynthEnvelopeType__CosineSquared                                        = 10,
	EGranularSynthEnvelopeType__Welch                                                = 11,
	EGranularSynthEnvelopeType__Blackman                                             = 12,
	EGranularSynthEnvelopeType__BlackmanHarris                                       = 13,
	EGranularSynthEnvelopeType__Count                                                = 14
};

/// Enum /Script/Synthesis.CurveInterpolationType
/// Size: 0x01 (1 bytes)
enum class CurveInterpolationType : uint8_t
{
	CurveInterpolationType__AUTOINTERP                                               = 0,
	CurveInterpolationType__LINEAR                                                   = 1,
	CurveInterpolationType__CONSTANT                                                 = 2
};

/// Enum /Script/Synthesis.ESamplePlayerSeekType
/// Size: 0x01 (1 bytes)
enum class ESamplePlayerSeekType : uint8_t
{
	ESamplePlayerSeekType__FromBeginning                                             = 0,
	ESamplePlayerSeekType__FromCurrentPosition                                       = 1,
	ESamplePlayerSeekType__FromEnd                                                   = 2,
	ESamplePlayerSeekType__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthKnobSize
/// Size: 0x01 (1 bytes)
enum class ESynthKnobSize : uint8_t
{
	ESynthKnobSize__Medium                                                           = 0,
	ESynthKnobSize__Large                                                            = 1,
	ESynthKnobSize__Count                                                            = 2
};

/// Enum /Script/Synthesis.ESynthSlateColorStyle
/// Size: 0x01 (1 bytes)
enum class ESynthSlateColorStyle : uint8_t
{
	ESynthSlateColorStyle__Light                                                     = 0,
	ESynthSlateColorStyle__Dark                                                      = 1,
	ESynthSlateColorStyle__Count                                                     = 2
};

/// Enum /Script/Synthesis.ESynthSlateSizeType
/// Size: 0x01 (1 bytes)
enum class ESynthSlateSizeType : uint8_t
{
	ESynthSlateSizeType__Small                                                       = 0,
	ESynthSlateSizeType__Medium                                                      = 1,
	ESynthSlateSizeType__Large                                                       = 2,
	ESynthSlateSizeType__Count                                                       = 3
};

/// Struct /Script/Synthesis.Synth1PatchCable
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSynth1PatchCable
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	ESynth1PatchDestination                            Destination;                                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.EpicSynth1Patch
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FEpicSynth1Patch
{ 
	ESynth1PatchSource                                 PatchSource;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSynth1PatchCable>                          PatchCables;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/Synthesis.ModularSynthPreset
/// Size: 0x00E0 (224 bytes) (0x000008 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FModularSynthPreset : FTableRowBase
{ 
	bool                                               bEnablePolyphony : 1;                                       // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	ESynth1OscType                                     Osc1Type;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              Osc1Gain;                                                   // 0x0010   (0x0004)  
	float                                              Osc1Octave;                                                 // 0x0014   (0x0004)  
	float                                              Osc1Semitones;                                              // 0x0018   (0x0004)  
	float                                              Osc1Cents;                                                  // 0x001C   (0x0004)  
	float                                              Osc1PulseWidth;                                             // 0x0020   (0x0004)  
	ESynth1OscType                                     Osc2Type;                                                   // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              Osc2Gain;                                                   // 0x0028   (0x0004)  
	float                                              Osc2Octave;                                                 // 0x002C   (0x0004)  
	float                                              Osc2Semitones;                                              // 0x0030   (0x0004)  
	float                                              Osc2Cents;                                                  // 0x0034   (0x0004)  
	float                                              Osc2PulseWidth;                                             // 0x0038   (0x0004)  
	float                                              Portamento;                                                 // 0x003C   (0x0004)  
	bool                                               bEnableUnison : 1;                                          // 0x0040:0 (0x0001)  
	bool                                               bEnableOscillatorSync : 1;                                  // 0x0040:1 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Spread;                                                     // 0x0044   (0x0004)  
	float                                              Pan;                                                        // 0x0048   (0x0004)  
	float                                              LFO1Frequency;                                              // 0x004C   (0x0004)  
	float                                              LFO1Gain;                                                   // 0x0050   (0x0004)  
	ESynthLFOType                                      LFO1Type;                                                   // 0x0054   (0x0001)  
	ESynthLFOMode                                      LFO1Mode;                                                   // 0x0055   (0x0001)  
	ESynthLFOPatchType                                 LFO1PatchType;                                              // 0x0056   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0057   (0x0001)  MISSED
	float                                              LFO2Frequency;                                              // 0x0058   (0x0004)  
	float                                              LFO2Gain;                                                   // 0x005C   (0x0004)  
	ESynthLFOType                                      LFO2Type;                                                   // 0x0060   (0x0001)  
	ESynthLFOMode                                      LFO2Mode;                                                   // 0x0061   (0x0001)  
	ESynthLFOPatchType                                 LFO2PatchType;                                              // 0x0062   (0x0001)  
	unsigned char                                      UnknownData05_6[0x1];                                       // 0x0063   (0x0001)  MISSED
	float                                              GainDb;                                                     // 0x0064   (0x0004)  
	float                                              AttackTime;                                                 // 0x0068   (0x0004)  
	float                                              DecayTime;                                                  // 0x006C   (0x0004)  
	float                                              SustainGain;                                                // 0x0070   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0074   (0x0004)  
	ESynthModEnvPatch                                  ModEnvPatchType;                                            // 0x0078   (0x0001)  
	ESynthModEnvBiasPatch                              ModEnvBiasPatchType;                                        // 0x0079   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x007A   (0x0002)  MISSED
	bool                                               bInvertModulationEnvelope : 1;                              // 0x007C:0 (0x0001)  
	bool                                               bInvertModulationEnvelopeBias : 1;                          // 0x007C:1 (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              ModulationEnvelopeDepth;                                    // 0x0080   (0x0004)  
	float                                              ModulationEnvelopeAttackTime;                               // 0x0084   (0x0004)  
	float                                              ModulationEnvelopeDecayTime;                                // 0x0088   (0x0004)  
	float                                              ModulationEnvelopeSustainGain;                              // 0x008C   (0x0004)  
	float                                              ModulationEnvelopeReleaseTime;                              // 0x0090   (0x0004)  
	bool                                               bLegato : 1;                                                // 0x0094:0 (0x0001)  
	bool                                               bRetrigger : 1;                                             // 0x0094:1 (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	float                                              FilterFrequency;                                            // 0x0098   (0x0004)  
	float                                              FilterQ;                                                    // 0x009C   (0x0004)  
	ESynthFilterType                                   FilterType;                                                 // 0x00A0   (0x0001)  
	ESynthFilterAlgorithm                              FilterAlgorithm;                                            // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData09_6[0x2];                                       // 0x00A2   (0x0002)  MISSED
	bool                                               bStereoDelayEnabled : 1;                                    // 0x00A4:0 (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x00A5   (0x0003)  MISSED
	ESynthStereoDelayMode                              StereoDelayMode;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData11_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              StereoDelayTime;                                            // 0x00AC   (0x0004)  
	float                                              StereoDelayFeedback;                                        // 0x00B0   (0x0004)  
	float                                              StereoDelayWetlevel;                                        // 0x00B4   (0x0004)  
	float                                              StereoDelayRatio;                                           // 0x00B8   (0x0004)  
	bool                                               bChorusEnabled : 1;                                         // 0x00BC:0 (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              ChorusDepth;                                                // 0x00C0   (0x0004)  
	float                                              ChorusFeedback;                                             // 0x00C4   (0x0004)  
	float                                              ChorusFrequency;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData13_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FEpicSynth1Patch>                           Patches;                                                    // 0x00D0   (0x0010)  
};

/// Struct /Script/Synthesis.ModularSynthPresetBankEntry
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FModularSynthPresetBankEntry
{ 
	FString                                            PresetName;                                                 // 0x0000   (0x0010)  
	FModularSynthPreset                                Preset;                                                     // 0x0010   (0x00E0)  
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherSettings
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSourceEffectBitCrusherSettings
{ 
	float                                              CrushedSampleRate;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FSoundModulationDestinationSettings                SampleRateModulation;                                       // 0x0008   (0x0010)  
	float                                              CrushedBits;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FSoundModulationDestinationSettings                BitModulation;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/Synthesis.SourceEffectChorusSettings
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FSourceEffectChorusSettings
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              WetLevel;                                                   // 0x000C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0010   (0x0004)  
	float                                              Spread;                                                     // 0x0014   (0x0004)  
	FSoundModulationDestinationSettings                DepthModulation;                                            // 0x0018   (0x0010)  
	FSoundModulationDestinationSettings                FrequencyModulation;                                        // 0x0028   (0x0010)  
	FSoundModulationDestinationSettings                FeedbackModulation;                                         // 0x0038   (0x0010)  
	FSoundModulationDestinationSettings                WetModulation;                                              // 0x0048   (0x0010)  
	FSoundModulationDestinationSettings                DryModulation;                                              // 0x0058   (0x0010)  
	FSoundModulationDestinationSettings                SpreadModulation;                                           // 0x0068   (0x0010)  
};

/// Struct /Script/Synthesis.SourceEffectDynamicsProcessorSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FSourceEffectDynamicsProcessorSettings
{ 
	ESourceEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESourceEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LookAheadMsec;                                              // 0x0004   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0008   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x000C   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0010   (0x0004)  
	float                                              Ratio;                                                      // 0x0014   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0018   (0x0004)  
	float                                              InputGainDb;                                                // 0x001C   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0020   (0x0004)  
	bool                                               bStereoLinked : 1;                                          // 0x0024:0 (0x0001)  
	bool                                               bAnalogMode : 1;                                            // 0x0024:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSourceEffectEnvelopeFollowerSettings
{ 
	float                                              AttackTime;                                                 // 0x0000   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0004   (0x0004)  
	EEnvelopeFollowerPeakMode                          PeakMode;                                                   // 0x0008   (0x0001)  
	bool                                               bIsAnalogMode;                                              // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEQBand
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSourceEffectEQBand
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Bandwidth;                                                  // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEQSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSourceEffectEQSettings
{ 
	TArray<FSourceEffectEQBand>                        EQBands;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/Synthesis.SourceEffectFilterAudioBusModulationSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSourceEffectFilterAudioBusModulationSettings
{ 
	class UAudioBus*                                   AudioBus;                                                   // 0x0000   (0x0008)  
	int32_t                                            EnvelopeFollowerAttackTimeMsec;                             // 0x0008   (0x0004)  
	int32_t                                            EnvelopeFollowerReleaseTimeMsec;                            // 0x000C   (0x0004)  
	float                                              EnvelopeGainMultiplier;                                     // 0x0010   (0x0004)  
	ESourceEffectFilterParam                           FilterParam;                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              MinFrequencyModulation;                                     // 0x0018   (0x0004)  
	float                                              MaxFrequencyModulation;                                     // 0x001C   (0x0004)  
	float                                              MinResonanceModulation;                                     // 0x0020   (0x0004)  
	float                                              MaxResonanceModulation;                                     // 0x0024   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectFilterSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSourceEffectFilterSettings
{ 
	ESourceEffectFilterCircuit                         FilterCircuit;                                              // 0x0000   (0x0001)  
	ESourceEffectFilterType                            FilterType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              CutoffFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;                                      // 0x0010   (0x0010)  
};

/// Struct /Script/Synthesis.SourceEffectFoldbackDistortionSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSourceEffectFoldbackDistortionSettings
{ 
	float                                              InputGainDb;                                                // 0x0000   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0004   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectMidSideSpreaderSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSourceEffectMidSideSpreaderSettings
{ 
	float                                              SpreadAmount;                                               // 0x0000   (0x0004)  
	EStereoChannelMode                                 InputMode;                                                  // 0x0004   (0x0001)  
	EStereoChannelMode                                 OutputMode;                                                 // 0x0005   (0x0001)  
	bool                                               bEqualPower;                                                // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x0007   (0x0001)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectPannerSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSourceEffectPannerSettings
{ 
	float                                              Spread;                                                     // 0x0000   (0x0004)  
	float                                              Pan;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectPhaserSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSourceEffectPhaserSettings
{ 
	float                                              WetLevel;                                                   // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	EPhaserLFOType                                     LFOType;                                                    // 0x000C   (0x0001)  
	bool                                               UseQuadraturePhase;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectRingModulationSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSourceEffectRingModulationSettings
{ 
	ERingModulatorTypeSourceEffect                     ModulatorType;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Depth;                                                      // 0x0008   (0x0004)  
	float                                              DryLevel;                                                   // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UAudioBus*                                   AudioBusModulator;                                          // 0x0018   (0x0008)  
};

/// Struct /Script/Synthesis.SourceEffectSimpleDelaySettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FSourceEffectSimpleDelaySettings
{ 
	float                                              SpeedOfSound;                                               // 0x0000   (0x0004)  
	float                                              DelayAmount;                                                // 0x0004   (0x0004)  
	float                                              DryAmount;                                                  // 0x0008   (0x0004)  
	float                                              WetAmount;                                                  // 0x000C   (0x0004)  
	float                                              Feedback;                                                   // 0x0010   (0x0004)  
	bool                                               bDelayBasedOnDistance : 1;                                  // 0x0014:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectStereoDelaySettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FSourceEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	float                                              DryLevel;                                                   // 0x0014   (0x0004)  
	bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)  
	EStereoDelayFiltertype                             FilterType;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x001C   (0x0004)  
	float                                              FilterQ;                                                    // 0x0020   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectWaveShaperSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSourceEffectWaveShaperSettings
{ 
	float                                              Amount;                                                     // 0x0000   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectConvolutionReverbSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSubmixEffectConvolutionReverbSettings
{ 
	float                                              NormalizationVolumeDb;                                      // 0x0000   (0x0004)  
	bool                                               bBypass;                                                    // 0x0004   (0x0001)  
	bool                                               bMixInputChannelFormatToImpulseResponseFormat;              // 0x0005   (0x0001)  
	bool                                               bMixReverbOutputToOutputChannelFormat;                      // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0007   (0x0001)  MISSED
	float                                              SurroundRearChannelBleedDb;                                 // 0x0008   (0x0004)  
	bool                                               bInvertRearChannelBleedPhase;                               // 0x000C   (0x0001)  
	bool                                               bSurroundRearChannelFlip;                                   // 0x000D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	float                                              SurroundRearChannelBleedAmount;                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UAudioImpulseResponse*                       ImpulseResponse;                                            // 0x0018   (0x0008)  
	bool                                               AllowHArdwareAcceleration;                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/Synthesis.SubmixEffectDelaySettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSubmixEffectDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	float                                              DelayLength;                                                // 0x0008   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectFilterSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSubmixEffectFilterSettings
{ 
	ESubmixFilterType                                  FilterType;                                                 // 0x0000   (0x0001)  
	ESubmixFilterAlgorithm                             FilterAlgorithm;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectFlexiverbSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSubmixEffectFlexiverbSettings
{ 
	float                                              PreDelay;                                                   // 0x0000   (0x0004)  
	float                                              DecayTime;                                                  // 0x0004   (0x0004)  
	float                                              RoomDampening;                                              // 0x0008   (0x0004)  
	int32_t                                            Complexity;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/Synthesis.DynamicsBandSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FDynamicsBandSettings
{ 
	float                                              CrossoverTopFrequency;                                      // 0x0000   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0004   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x0008   (0x0004)  
	float                                              ThresholdDb;                                                // 0x000C   (0x0004)  
	float                                              Ratio;                                                      // 0x0010   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0014   (0x0004)  
	float                                              InputGainDb;                                                // 0x0018   (0x0004)  
	float                                              OutputGainDb;                                               // 0x001C   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectMultibandCompressorSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSubmixEffectMultibandCompressorSettings
{ 
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LookAheadMsec;                                              // 0x0004   (0x0004)  
	bool                                               bLinkChannels;                                              // 0x0008   (0x0001)  
	bool                                               bAnalogMode;                                                // 0x0009   (0x0001)  
	bool                                               bFourPole;                                                  // 0x000A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x000B   (0x0005)  MISSED
	TArray<FDynamicsBandSettings>                      Bands;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/Synthesis.SubmixEffectStereoDelaySettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FSubmixEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	float                                              DryLevel;                                                   // 0x0014   (0x0004)  
	bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)  
	EStereoDelayFiltertype                             FilterType;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x001C   (0x0004)  
	float                                              FilterQ;                                                    // 0x0020   (0x0004)  
};

/// Struct /Script/Synthesis.TapDelayInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FTapDelayInfo
{ 
	ETapLineMode                                       TapLineMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayLength;                                                // 0x0004   (0x0004)  
	float                                              Gain;                                                       // 0x0008   (0x0004)  
	int32_t                                            OutputChannel;                                              // 0x000C   (0x0004)  
	float                                              PanInDegrees;                                               // 0x0010   (0x0004)  
	int32_t                                            TapId;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectTapDelaySettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSubmixEffectTapDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	TArray<FTapDelayInfo>                              Taps;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/Synthesis.Synth2DSliderStyle
/// Size: 0x02B8 (696 bytes) (0x000008 - 0x0002B8) align 8 MaxSize: 0x02B8
struct FSynth2DSliderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        NormalThumbImage;                                           // 0x0008   (0x0088)  
	FSlateBrush                                        DisabledThumbImage;                                         // 0x0090   (0x0088)  
	FSlateBrush                                        NormalBarImage;                                             // 0x0118   (0x0088)  
	FSlateBrush                                        DisabledBarImage;                                           // 0x01A0   (0x0088)  
	FSlateBrush                                        BackgroundImage;                                            // 0x0228   (0x0088)  
	float                                              BarThickness;                                               // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x02B4   (0x0004)  MISSED
};

/// Struct /Script/Synthesis.SynthKnobStyle
/// Size: 0x0238 (568 bytes) (0x000008 - 0x000238) align 8 MaxSize: 0x0238
struct FSynthKnobStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        LargeKnob;                                                  // 0x0008   (0x0088)  
	FSlateBrush                                        LargeKnobOverlay;                                           // 0x0090   (0x0088)  
	FSlateBrush                                        MediumKnob;                                                 // 0x0118   (0x0088)  
	FSlateBrush                                        MediumKnobOverlay;                                          // 0x01A0   (0x0088)  
	float                                              MinValueAngle;                                              // 0x0228   (0x0004)  
	float                                              MaxValueAngle;                                              // 0x022C   (0x0004)  
	ESynthKnobSize                                     KnobSize;                                                   // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0231   (0x0007)  MISSED
};

/// Struct /Script/Synthesis.PatchId
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FPatchId
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherBaseSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSourceEffectBitCrusherBaseSettings
{ 
	float                                              SampleRate;                                                 // 0x0000   (0x0004)  
	float                                              BitDepth;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectChorusBaseSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FSourceEffectChorusBaseSettings
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              WetLevel;                                                   // 0x000C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0010   (0x0004)  
	float                                              Spread;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.SynthSlateStyle
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FSynthSlateStyle : FSlateWidgetStyle
{ 
	ESynthSlateSizeType                                SizeType;                                                   // 0x0008   (0x0001)  
	ESynthSlateColorStyle                              ColorStyle;                                                 // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Class /Script/Synthesis.ModularSynthPresetBank
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UModularSynthPresetBank : public UObject
{ 
public:
	TArray<FModularSynthPresetBankEntry>               Presets;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/Synthesis.ModularSynthLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
	void AddModularSynthPresetToBankAsset(UModularSynthPresetBank* InBank, FModularSynthPreset& Preset, FString PresetName) // [0xeca760] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UModularSynthPresetBank*, FModularSynthPreset&, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InBank, Preset, PresetName);
	}
};

/// Class /Script/Synthesis.ModularSynthComponent
/// Size: 0x0D80 (3456 bytes) (0x0006C0 - 0x000D80) align 16 MaxSize: 0x0D80
class UModularSynthComponent : public USynthComponent
{ 
public:
	int32_t                                            VoiceCount;                                                 // 0x06C0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x6BC];                                     // 0x06C4   (0x06BC)  MISSED


	/// Functions
	// Function /Script/Synthesis.ModularSynthComponent.SetSynthPreset
	void SetSynthPreset(FModularSynthPreset& SynthPreset) // [0xeccd50] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FModularSynthPreset&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(SynthPreset);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetSustainGain
	void SetSustainGain(float SustainGain) // [0xecccd0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(SustainGain);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	void SetStereoDelayWetlevel(float DelayWetlevel) // [0xeccc50] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(DelayWetlevel);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayTime
	void SetStereoDelayTime(float DelayTimeMsec) // [0xeccbd0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(DelayTimeMsec);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayRatio
	void SetStereoDelayRatio(float DelayRatio) // [0xeccb50] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(DelayRatio);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayMode
	void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode) // [0xeccad0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ESynthStereoDelayMode);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(StereoDelayMode);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled) // [0xecca40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(StereoDelayEnabled);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	void SetStereoDelayFeedback(float DelayFeedback) // [0xecc9c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(DelayFeedback);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetSpread
	void SetSpread(float Spread) // [0xecc940] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(Spread);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetReleaseTime
	void SetReleaseTime(float ReleaseTimeMsec) // [0xecc8c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(ReleaseTimeMsec);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetPortamento
	void SetPortamento(float Portamento) // [0xecc840] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(Portamento);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetPitchBend
	void SetPitchBend(float PitchBend) // [0xecc7c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(PitchBend);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetPan
	void SetPan(float Pan) // [0xecc740] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(Pan);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetOscType
	void SetOscType(int32_t OscIndex, ESynth1OscType OscType) // [0xecc670] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, ESynth1OscType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(OscIndex, OscType);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSync
	void SetOscSync(bool bIsSynced) // [0xecc5e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func(bIsSynced);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSemitones
	void SetOscSemitones(int32_t OscIndex, float Semitones) // [0xecc510] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func(OscIndex, Semitones);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetOscPulsewidth
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth) // [0xecc440] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func(OscIndex, Pulsewidth);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetOscOctave
	void SetOscOctave(int32_t OscIndex, float Octave) // [0xecc370] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		func(OscIndex, Octave);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGainMod
	void SetOscGainMod(int32_t OscIndex, float OscGainMod) // [0xecc2a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		func(OscIndex, OscGainMod);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGain
	void SetOscGain(int32_t OscIndex, float OscGain) // [0xecc1d0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		func(OscIndex, OscGain);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetOscFrequencyMod
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod) // [0xecc100] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		func(OscIndex, OscFreqMod);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetOscCents
	void SetOscCents(int32_t OscIndex, float Cents) // [0xecc030] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		func(OscIndex, Cents);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvSustainGain
	void SetModEnvSustainGain(float SustainGain) // [0xecbfb0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		func(SustainGain);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	void SetModEnvReleaseTime(float Release) // [0xecbf30] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		func(Release);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvPatch
	void SetModEnvPatch(ESynthModEnvPatch InPatchType) // [0xecbeb0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ESynthModEnvPatch);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		func(InPatchType);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvInvert
	void SetModEnvInvert(bool bInvert) // [0xecbe20] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		func(bInvert);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDepth
	void SetModEnvDepth(float Depth) // [0xecbda0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		func(Depth);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDecayTime
	void SetModEnvDecayTime(float DecayTimeMsec) // [0xecbd20] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		func(DecayTimeMsec);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType) // [0xecbca0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ESynthModEnvBiasPatch);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		func(InPatchType);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	void SetModEnvBiasInvert(bool bInvert) // [0xecbc10] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		func(bInvert);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvAttackTime
	void SetModEnvAttackTime(float AttackTimeMsec) // [0xecbb90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		func(AttackTimeMsec);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOType
	void SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType) // [0xecbac0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, ESynthLFOType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		func(LFOIndex, LFOType);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOPatch
	void SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType) // [0xecb9f0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, ESynthLFOPatchType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		func(LFOIndex, LFOPatchType);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOMode
	void SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode) // [0xecb920] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, ESynthLFOMode);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		func(LFOIndex, LFOMode);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGainMod
	void SetLFOGainMod(int32_t LFOIndex, float GainMod) // [0xecb850] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		func(LFOIndex, GainMod);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGain
	void SetLFOGain(int32_t LFOIndex, float Gain) // [0xecb780] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		func(LFOIndex, Gain);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz) // [0xecb6b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		func(LFOIndex, FrequencyModHz);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequency
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz) // [0xecb5e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		func(LFOIndex, FrequencyHz);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetGainDb
	void SetGainDb(float GainDb) // [0xecb560] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		func(GainDb);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterType
	void SetFilterType(ESynthFilterType FilterType) // [0xecb4e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ESynthFilterType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[39]);
		func(FilterType);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQMod
	void SetFilterQMod(float FilterQ) // [0xecb460] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[40]);
		func(FilterQ);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQ
	void SetFilterQ(float FilterQ) // [0xecb3e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[41]);
		func(FilterQ);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	void SetFilterFrequencyMod(float FilterFrequencyHz) // [0xecb360] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[42]);
		func(FilterFrequencyHz);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequency
	void SetFilterFrequency(float FilterFrequencyHz) // [0xecb2e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[43]);
		func(FilterFrequencyHz);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterAlgorithm
	void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm) // [0xecb260] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ESynthFilterAlgorithm);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[44]);
		func(FilterAlgorithm);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableUnison
	void SetEnableUnison(bool EnableUnison) // [0xecb1d0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[45]);
		func(EnableUnison);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableRetrigger
	void SetEnableRetrigger(bool RetriggerEnabled) // [0xecb140] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[46]);
		func(RetriggerEnabled);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePolyphony
	void SetEnablePolyphony(bool bEnablePolyphony) // [0xecb0b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[47]);
		func(bEnablePolyphony);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePatch
	bool SetEnablePatch(FPatchId PatchId, bool BIsEnabled) // [0xecafe0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FPatchId, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[48]);
		return func(PatchId, BIsEnabled);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableLegato
	void SetEnableLegato(bool LegatoEnabled) // [0xecaf50] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[49]);
		func(LegatoEnabled);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetDecayTime
	void SetDecayTime(float DecayTimeMsec) // [0xecaed0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[50]);
		func(DecayTimeMsec);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFrequency
	void SetChorusFrequency(float Frequency) // [0xecae50] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[51]);
		func(Frequency);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFeedback
	void SetChorusFeedback(float Feedback) // [0xecadd0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[52]);
		func(Feedback);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusEnabled
	void SetChorusEnabled(bool EnableChorus) // [0xecad40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[53]);
		func(EnableChorus);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusDepth
	void SetChorusDepth(float Depth) // [0xecacc0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[54]);
		func(Depth);
	}
	// Function /Script/Synthesis.ModularSynthComponent.SetAttackTime
	void SetAttackTime(float AttackTimeMsec) // [0xecac40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[55]);
		func(AttackTimeMsec);
	}
	// Function /Script/Synthesis.ModularSynthComponent.NoteOn
	void NoteOn(float Note, int32_t Velocity, float Duration) // [0xecab20] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float, int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[56]);
		func(Note, Velocity, Duration);
	}
	// Function /Script/Synthesis.ModularSynthComponent.NoteOff
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes) // [0xecaa00] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float, bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[57]);
		func(Note, bAllNotesOff, bKillAllNotes);
	}
	// Function /Script/Synthesis.ModularSynthComponent.CreatePatch
	// FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<FSynth1PatchCable>& PatchCables, bool bEnableByDefault);     // [0xeca8b0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectBitCrusherPreset
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align 8 MaxSize: 0x00F0
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x58];                                      // 0x0068   (0x0058)  MISSED
	FSourceEffectBitCrusherSettings                    Settings;                                                   // 0x00C0   (0x0030)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSettings
	void SetSettings(FSourceEffectBitCrusherBaseSettings& Settings) // [0xed2160] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectBitCrusherBaseSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Settings);
	}
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
	void SetSampleRateModulator(USoundModulatorBase* Modulator) // [0xed20d0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(USoundModulatorBase*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Modulator);
	}
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
	void SetSampleRate(float SampleRate) // [0xed2050] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(SampleRate);
	}
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
	void SetModulationSettings(FSourceEffectBitCrusherSettings& ModulationSettings) // [0xed1ea0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectBitCrusherSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(ModulationSettings);
	}
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBits
	void SetBits(float Bits) // [0xed19e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Bits);
	}
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
	void SetBitModulator(USoundModulatorBase* Modulator) // [0xed1950] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(USoundModulatorBase*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(Modulator);
	}
};

/// Class /Script/Synthesis.SourceEffectChorusPreset
/// Size: 0x0180 (384 bytes) (0x000068 - 0x000180) align 8 MaxSize: 0x0180
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0xA0];                                      // 0x0068   (0x00A0)  MISSED
	FSourceEffectChorusSettings                        Settings;                                                   // 0x0108   (0x0078)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulator
	void SetWetModulator(USoundModulatorBase* Modulator) // [0xed2aa0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(USoundModulatorBase*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Modulator);
	}
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWet
	void SetWet(float WetAmount) // [0xed2a20] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(WetAmount);
	}
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulator
	void SetSpreadModulator(USoundModulatorBase* Modulator) // [0xed2990] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(USoundModulatorBase*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Modulator);
	}
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpread
	void SetSpread(float Spread) // [0xed2910] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Spread);
	}
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSettings
	void SetSettings(FSourceEffectChorusBaseSettings& Settings) // [0xed2210] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectChorusBaseSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Settings);
	}
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetModulationSettings
	void SetModulationSettings(FSourceEffectChorusSettings& ModulationSettings) // [0xed1f50] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectChorusSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(ModulationSettings);
	}
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
	void SetFrequencyModulator(USoundModulatorBase* Modulator) // [0xed1e10] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(USoundModulatorBase*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Modulator);
	}
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequency
	void SetFrequency(float Frequency) // [0xed1d90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(Frequency);
	}
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
	void SetFeedbackModulator(USoundModulatorBase* Modulator) // [0xed1d00] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(USoundModulatorBase*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(Modulator);
	}
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedback
	void SetFeedback(float Feedback) // [0xed1c80] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(Feedback);
	}
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulator
	void SetDryModulator(USoundModulatorBase* Modulator) // [0xed1bf0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(USoundModulatorBase*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(Modulator);
	}
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDry
	void SetDry(float DryAmount) // [0xed1b70] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(DryAmount);
	}
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulator
	void SetDepthModulator(USoundModulatorBase* Modulator) // [0xed1ae0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(USoundModulatorBase*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(Modulator);
	}
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepth
	void SetDepth(float Depth) // [0xed1a60] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(Depth);
	}
};

/// Class /Script/Synthesis.SourceEffectDynamicsProcessorPreset
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align 8 MaxSize: 0x00E0
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x0068   (0x0050)  MISSED
	FSourceEffectDynamicsProcessorSettings             Settings;                                                   // 0x00B8   (0x0028)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
	void SetSettings(FSourceEffectDynamicsProcessorSettings& InSettings) // [0xed22c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectDynamicsProcessorSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
};

/// Class /Script/Synthesis.EnvelopeFollowerListener
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UEnvelopeFollowerListener : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,645) /* FMulticastInlineDelegate */ __um(OnEnvelopeFollowerUpdate);                           // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00C0   (0x0010)  MISSED
};

/// Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
/// Size: 0x00A8 (168 bytes) (0x000068 - 0x0000A8) align 8 MaxSize: 0x00A8
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSourceEffectEnvelopeFollowerSettings              Settings;                                                   // 0x009C   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	void UnregisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener) // [0xed2b30] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UEnvelopeFollowerListener*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(EnvelopeFollowerListener);
	}
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	void SetSettings(FSourceEffectEnvelopeFollowerSettings& InSettings) // [0xed2420] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectEnvelopeFollowerSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InSettings);
	}
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
	void RegisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener) // [0xed18c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UEnvelopeFollowerListener*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(EnvelopeFollowerListener);
	}
};

/// Class /Script/Synthesis.SourceEffectEQPreset
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align 8 MaxSize: 0x00B0
class USourceEffectEQPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSourceEffectEQSettings                            Settings;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectEQPreset.SetSettings
	void SetSettings(FSourceEffectEQSettings& InSettings) // [0xed2370] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectEQSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
};

/// Class /Script/Synthesis.SourceEffectFilterPreset
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align 8 MaxSize: 0x00D0
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0068   (0x0048)  MISSED
	FSourceEffectFilterSettings                        Settings;                                                   // 0x00B0   (0x0020)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectFilterPreset.SetSettings
	void SetSettings(FSourceEffectFilterSettings& InSettings) // [0xed24d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectFilterSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
};

/// Class /Script/Synthesis.SourceEffectFoldbackDistortionPreset
/// Size: 0x00A8 (168 bytes) (0x000068 - 0x0000A8) align 8 MaxSize: 0x00A8
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSourceEffectFoldbackDistortionSettings            Settings;                                                   // 0x009C   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
	void SetSettings(FSourceEffectFoldbackDistortionSettings& InSettings) // [0xed25a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectFoldbackDistortionSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
};

/// Class /Script/Synthesis.SourceEffectMidSideSpreaderPreset
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSourceEffectMidSideSpreaderSettings               Settings;                                                   // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
	void SetSettings(FSourceEffectMidSideSpreaderSettings& InSettings) // [0xed2650] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectMidSideSpreaderSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
};

/// Class /Script/Synthesis.SourceEffectPannerPreset
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSourceEffectPannerSettings                        Settings;                                                   // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectPannerPreset.SetSettings
	void SetSettings(FSourceEffectPannerSettings& InSettings) // [0xed2700] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectPannerSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
};

/// Class /Script/Synthesis.SourceEffectPhaserPreset
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align 8 MaxSize: 0x00B0
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSourceEffectPhaserSettings                        Settings;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectPhaserPreset.SetSettings
	void SetSettings(FSourceEffectPhaserSettings& InSettings) // [0xed27b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectPhaserSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
};

/// Class /Script/Synthesis.SourceEffectRingModulationPreset
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align 8 MaxSize: 0x00D0
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0068   (0x0048)  MISSED
	FSourceEffectRingModulationSettings                Settings;                                                   // 0x00B0   (0x0020)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectRingModulationPreset.SetSettings
	void SetSettings(FSourceEffectRingModulationSettings& InSettings) // [0xed2870] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectRingModulationSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
};

/// Class /Script/Synthesis.SourceEffectSimpleDelayPreset
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align 8 MaxSize: 0x00C0
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x0068   (0x0040)  MISSED
	FSourceEffectSimpleDelaySettings                   Settings;                                                   // 0x00A8   (0x0018)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectSimpleDelayPreset.SetSettings
	void SetSettings(FSourceEffectSimpleDelaySettings& InSettings) // [0xed7050] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectSimpleDelaySettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
};

/// Class /Script/Synthesis.SourceEffectStereoDelayPreset
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align 8 MaxSize: 0x00D8
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x4C];                                      // 0x0068   (0x004C)  MISSED
	FSourceEffectStereoDelaySettings                   Settings;                                                   // 0x00B4   (0x0024)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectStereoDelayPreset.SetSettings
	void SetSettings(FSourceEffectStereoDelaySettings& InSettings) // [0xed7100] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectStereoDelaySettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
};

/// Class /Script/Synthesis.SourceEffectWaveShaperPreset
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSourceEffectWaveShaperSettings                    Settings;                                                   // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectWaveShaperPreset.SetSettings
	void SetSettings(FSourceEffectWaveShaperSettings& InSettings) // [0xed2700] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSourceEffectWaveShaperSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
};

/// Class /Script/Synthesis.AudioImpulseResponse
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UAudioImpulseResponse : public UObject
{ 
public:
	TArray<float>                                      ImpulseResponse;                                            // 0x0028   (0x0010)  
	int32_t                                            NumChannels;                                                // 0x0038   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x003C   (0x0004)  
	float                                              NormalizationVolumeDb;                                      // 0x0040   (0x0004)  
	bool                                               bTrueStereo;                                                // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	TArray<float>                                      IRData;                                                     // 0x0048   (0x0010)  
};

/// Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align 8 MaxSize: 0x00F0
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{ 
public:
	class UAudioImpulseResponse*                       ImpulseResponse;                                            // 0x0068   (0x0008)  
	FSubmixEffectConvolutionReverbSettings             Settings;                                                   // 0x0070   (0x0028)  
	ESubmixEffectConvolutionReverbBlockSize            BlockSize;                                                  // 0x0098   (0x0001)  
	bool                                               bEnableHardwareAcceleration;                                // 0x0099   (0x0001)  
	unsigned char                                      UnknownData00_7[0x56];                                      // 0x009A   (0x0056)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	void SetSettings(FSubmixEffectConvolutionReverbSettings& InSettings) // [0xed71d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSubmixEffectConvolutionReverbSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
	void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse) // [0xed6da0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UAudioImpulseResponse*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InImpulseResponse);
	}
};

/// Class /Script/Synthesis.SubmixEffectDelayPreset
/// Size: 0x00B8 (184 bytes) (0x000068 - 0x0000B8) align 8 MaxSize: 0x00B8
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSubmixEffectDelaySettings                         Settings;                                                   // 0x009C   (0x000C)  
	FSubmixEffectDelaySettings                         DynamicSettings;                                            // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetSettings
	void SetSettings(FSubmixEffectDelaySettings& InSettings) // [0xed7270] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSubmixEffectDelaySettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	void SetInterpolationTime(float Time) // [0xed6ec0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Time);
	}
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDelay
	void SetDelay(float Length) // [0xed6a20] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Length);
	}
	// Function /Script/Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
	float GetMaxDelayInMilliseconds() // [0xed6780] Final|Native|Public|BlueprintCallable 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
};

/// Class /Script/Synthesis.SubmixEffectFilterPreset
/// Size: 0x00A8 (168 bytes) (0x000068 - 0x0000A8) align 8 MaxSize: 0x00A8
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSubmixEffectFilterSettings                        Settings;                                                   // 0x009C   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetSettings
	void SetSettings(FSubmixEffectFilterSettings& InSettings) // [0xed7330] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSubmixEffectFilterSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterType
	void SetFilterType(ESubmixFilterType InType) // [0xed6d20] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ESubmixFilterType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InType);
	}
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	void SetFilterQMod(float InQ) // [0xed6ca0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InQ);
	}
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQ
	void SetFilterQ(float InQ) // [0xed6c20] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(InQ);
	}
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	void SetFilterCutoffFrequencyMod(float InFrequency) // [0xed6ba0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(InFrequency);
	}
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	void SetFilterCutoffFrequency(float InFrequency) // [0xed6b20] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(InFrequency);
	}
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
	void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm) // [0xed6aa0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ESubmixFilterAlgorithm);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(InAlgorithm);
	}
};

/// Class /Script/Synthesis.SubmixEffectFlexiverbPreset
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align 8 MaxSize: 0x00B0
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSubmixEffectFlexiverbSettings                     Settings;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFlexiverbPreset.SetSettings
	void SetSettings(FSubmixEffectFlexiverbSettings& InSettings) // [0xed73e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSubmixEffectFlexiverbSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
};

/// Class /Script/Synthesis.SubmixEffectMultibandCompressorPreset
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align 8 MaxSize: 0x00D0
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0068   (0x0048)  MISSED
	FSubmixEffectMultibandCompressorSettings           Settings;                                                   // 0x00B0   (0x0020)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
	void SetSettings(FSubmixEffectMultibandCompressorSettings& InSettings) // [0xed74a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSubmixEffectMultibandCompressorSettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
};

/// Class /Script/Synthesis.SubmixEffectStereoDelayPreset
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align 8 MaxSize: 0x00D8
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x4C];                                      // 0x0068   (0x004C)  MISSED
	FSubmixEffectStereoDelaySettings                   Settings;                                                   // 0x00B4   (0x0024)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectStereoDelayPreset.SetSettings
	void SetSettings(FSubmixEffectStereoDelaySettings& InSettings) // [0xed7100] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSubmixEffectStereoDelaySettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSettings);
	}
};

/// Class /Script/Synthesis.SubmixEffectTapDelayPreset
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align 8 MaxSize: 0x00D8
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x0068   (0x0040)  MISSED
	FSubmixEffectTapDelaySettings                      Settings;                                                   // 0x00A8   (0x0018)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x00C0   (0x0018)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetTap
	void SetTap(int32_t TapId, FTapDelayInfo& TapInfo) // [0xed7730] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, FTapDelayInfo&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(TapId, TapInfo);
	}
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetSettings
	void SetSettings(FSubmixEffectTapDelaySettings& InSettings) // [0xed7560] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSubmixEffectTapDelaySettings&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InSettings);
	}
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	void SetInterpolationTime(float Time) // [0xed6f40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Time);
	}
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	void RemoveTap(int32_t TapId) // [0xed6990] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(TapId);
	}
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	void GetTapIds(TArray<int32_t>& TapIds) // [0xed68a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(TArray<int32_t>&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(TapIds);
	}
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTap
	void GetTap(int32_t TapId, FTapDelayInfo& TapInfo) // [0xed67c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, FTapDelayInfo&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(TapId, TapInfo);
	}
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	float GetMaxDelayInMilliseconds() // [0xed67a0] Final|Native|Public|BlueprintCallable 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.AddTap
	void AddTap(int32_t& TapId) // [0xed66f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(TapId);
	}
};

/// Class /Script/Synthesis.Synth2DSlider
/// Size: 0x0478 (1144 bytes) (0x000108 - 0x000478) align 8 MaxSize: 0x0478
class USynth2DSlider : public UWidget
{ 
public:
	float                                              ValueX;                                                     // 0x0108   (0x0004)  
	float                                              ValueY;                                                     // 0x010C   (0x0004)  
	SDK_UNDEFINED(16,646) /* FDelegateProperty */      __um(ValueXDelegate);                                       // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,647) /* FDelegateProperty */      __um(ValueYDelegate);                                       // 0x0120   (0x0010)  
	FSynth2DSliderStyle                                WidgetStyle;                                                // 0x0130   (0x02B8)  
	FLinearColor                                       SliderHandleColor;                                          // 0x03E8   (0x0010)  
	bool                                               IndentHandle;                                               // 0x03F8   (0x0001)  
	bool                                               Locked;                                                     // 0x03F9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x03FA   (0x0002)  MISSED
	float                                              StepSize;                                                   // 0x03FC   (0x0004)  
	bool                                               IsFocusable;                                                // 0x0400   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0401   (0x0007)  MISSED
	SDK_UNDEFINED(16,648) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                                // 0x0408   (0x0010)  
	SDK_UNDEFINED(16,649) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                  // 0x0418   (0x0010)  
	SDK_UNDEFINED(16,650) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                           // 0x0428   (0x0010)  
	SDK_UNDEFINED(16,651) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                             // 0x0438   (0x0010)  
	SDK_UNDEFINED(16,652) /* FMulticastInlineDelegate */ __um(OnValueChangedX);                                    // 0x0448   (0x0010)  
	SDK_UNDEFINED(16,653) /* FMulticastInlineDelegate */ __um(OnValueChangedY);                                    // 0x0458   (0x0010)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0468   (0x0010)  MISSED


	/// Functions
	// Function /Script/Synthesis.Synth2DSlider.SetValue
	void SetValue(FVector2D InValue) // [0xed7810] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FVector2D);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InValue);
	}
	// Function /Script/Synthesis.Synth2DSlider.SetStepSize
	void SetStepSize(float InValue) // [0xed76b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InValue);
	}
	// Function /Script/Synthesis.Synth2DSlider.SetSliderHandleColor
	void SetSliderHandleColor(FLinearColor InValue) // [0xed7620] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FLinearColor);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InValue);
	}
	// Function /Script/Synthesis.Synth2DSlider.SetLocked
	void SetLocked(bool InValue) // [0xed6fc0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(InValue);
	}
	// Function /Script/Synthesis.Synth2DSlider.SetIndentHandle
	void SetIndentHandle(bool InValue) // [0xed6e30] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(InValue);
	}
	// Function /Script/Synthesis.Synth2DSlider.GetValue
	FVector2D GetValue() // [0xed6950] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FVector2D (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
};

/// Class /Script/Synthesis.GranularSynth
/// Size: 0x0A80 (2688 bytes) (0x0006C0 - 0x000A80) align 16 MaxSize: 0x0A80
class UGranularSynth : public USynthComponent
{ 
public:
	class USoundWave*                                  GranulatedSoundWave;                                        // 0x06C0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x3B8];                                     // 0x06C8   (0x03B8)  MISSED


	/// Functions
	// Function /Script/Synthesis.GranularSynth.SetSustainGain
	void SetSustainGain(float SustainGain) // [0xedbd00] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(SustainGain);
	}
	// Function /Script/Synthesis.GranularSynth.SetSoundWave
	void SetSoundWave(USoundWave* InSoundWave) // [0xedbbe0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(USoundWave*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InSoundWave);
	}
	// Function /Script/Synthesis.GranularSynth.SetScrubMode
	void SetScrubMode(bool bScrubMode) // [0xedba40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(bScrubMode);
	}
	// Function /Script/Synthesis.GranularSynth.SetReleaseTimeMsec
	void SetReleaseTimeMsec(float ReleaseTimeMsec) // [0xedb9c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(ReleaseTimeMsec);
	}
	// Function /Script/Synthesis.GranularSynth.SetPlayheadTime
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType) // [0xedb310] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float, float, EGranularSynthSeekType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(InPositionSec, LerpTimeSec, SeekType);
	}
	// Function /Script/Synthesis.GranularSynth.SetPlaybackSpeed
	void SetPlaybackSpeed(float InPlayheadRate) // [0xedb290] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(InPlayheadRate);
	}
	// Function /Script/Synthesis.GranularSynth.SetGrainVolume
	void SetGrainVolume(float BaseVolume, FVector2D VolumeRange) // [0xedb000] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float, FVector2D);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(BaseVolume, VolumeRange);
	}
	// Function /Script/Synthesis.GranularSynth.SetGrainsPerSecond
	void SetGrainsPerSecond(float InGrainsPerSecond) // [0xedb0c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(InGrainsPerSecond);
	}
	// Function /Script/Synthesis.GranularSynth.SetGrainProbability
	void SetGrainProbability(float InGrainProbability) // [0xedaf80] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(InGrainProbability);
	}
	// Function /Script/Synthesis.GranularSynth.SetGrainPitch
	void SetGrainPitch(float BasePitch, FVector2D PitchRange) // [0xedaec0] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float, FVector2D);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(BasePitch, PitchRange);
	}
	// Function /Script/Synthesis.GranularSynth.SetGrainPan
	void SetGrainPan(float BasePan, FVector2D PanRange) // [0xedae00] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float, FVector2D);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(BasePan, PanRange);
	}
	// Function /Script/Synthesis.GranularSynth.SetGrainEnvelopeType
	void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType) // [0xedad80] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EGranularSynthEnvelopeType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(EnvelopeType);
	}
	// Function /Script/Synthesis.GranularSynth.SetGrainDuration
	void SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange) // [0xedacc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float, FVector2D);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(BaseDurationMsec, DurationRange);
	}
	// Function /Script/Synthesis.GranularSynth.SetDecayTime
	void SetDecayTime(float DecayTimeMsec) // [0xeda370] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(DecayTimeMsec);
	}
	// Function /Script/Synthesis.GranularSynth.SetAttackTime
	void SetAttackTime(float AttackTimeMsec) // [0xeda370] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func(AttackTimeMsec);
	}
	// Function /Script/Synthesis.GranularSynth.NoteOn
	void NoteOn(float Note, int32_t Velocity, float Duration) // [0xed9b90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float, int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func(Note, Velocity, Duration);
	}
	// Function /Script/Synthesis.GranularSynth.NoteOff
	void NoteOff(float Note, bool bKill) // [0xed9a30] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func(Note, bKill);
	}
	// Function /Script/Synthesis.GranularSynth.IsLoaded
	bool IsLoaded() // [0xed99d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func();
	}
	// Function /Script/Synthesis.GranularSynth.GetSampleDuration
	float GetSampleDuration() // [0xed9970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func();
	}
	// Function /Script/Synthesis.GranularSynth.GetCurrentPlayheadTime
	float GetCurrentPlayheadTime() // [0xed93f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func();
	}
};

/// Class /Script/Synthesis.MonoWaveTableSynthPreset
/// Size: 0x0170 (368 bytes) (0x000028 - 0x000170) align 8 MaxSize: 0x0170
class UMonoWaveTableSynthPreset : public UObject
{ 
public:
	FString                                            PresetName;                                                 // 0x0028   (0x0010)  
	bool                                               bLockKeyframesToGridBool : 1;                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            LockKeyframesToGrid;                                        // 0x003C   (0x0004)  
	int32_t                                            WaveTableResolution;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FRuntimeFloatCurve>                         WaveTable;                                                  // 0x0048   (0x0010)  
	bool                                               bNormalizeWaveTables : 1;                                   // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData02_7[0x117];                                     // 0x0059   (0x0117)  MISSED
};

/// Class /Script/Synthesis.SynthComponentMonoWaveTable
/// Size: 0x0E00 (3584 bytes) (0x0006C0 - 0x000E00) align 16 MaxSize: 0x0E00
class USynthComponentMonoWaveTable : public USynthComponent
{ 
public:
	SDK_UNDEFINED(16,654) /* FMulticastInlineDelegate */ __um(OnTableAltered);                                     // 0x06C0   (0x0010)  
	SDK_UNDEFINED(16,655) /* FMulticastInlineDelegate */ __um(OnNumTablesChanged);                                 // 0x06D0   (0x0010)  
	class UMonoWaveTableSynthPreset*                   CurrentPreset;                                              // 0x06E0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x718];                                     // 0x06E8   (0x0718)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	void SetWaveTablePosition(float InPosition) // [0xedbe90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InPosition);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	void SetSustainPedalState(bool InSustainPedalState) // [0xedbd80] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InSustainPedalState);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	void SetPosLfoType(ESynthLFOType InLfoType) // [0xedb520] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ESynthLFOType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InLfoType);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	void SetPosLfoFrequency(float InLfoFrequency) // [0xedb4a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(InLfoFrequency);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	void SetPosLfoDepth(float InLfoDepth) // [0xedb420] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(InLfoDepth);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	void SetPositionEnvelopeSustainGain(float InSustainGain) // [0xedb940] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(InSustainGain);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec) // [0xedb8c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(InReleaseTimeMsec);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	void SetPositionEnvelopeInvert(bool bInInvert) // [0xedb830] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(bInInvert);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	void SetPositionEnvelopeDepth(float InDepth) // [0xedb7b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(InDepth);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec) // [0xedb730] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(InDecayTimeMsec);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert) // [0xedb6a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(bInBiasInvert);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	void SetPositionEnvelopeBiasDepth(float InDepth) // [0xedb620] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(InDepth);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec) // [0xedb5a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(InAttackTimeMsec);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	void SetLowPassFilterResonance(float InNewQ) // [0xedb140] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(InNewQ);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	void SetFrequencyWithMidiNote(float InMidiNote) // [0xedac40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func(InMidiNote);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	void SetFrequencyPitchBend(float FrequencyOffsetCents) // [0xedabc0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func(FrequencyOffsetCents);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequency
	void SetFrequency(float FrequencyHz) // [0xedaac0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func(FrequencyHz);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	void SetFilterEnvelopeSustainGain(float InSustainGain) // [0xeda9c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		func(InSustainGain);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec) // [0xeda940] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		func(InReleaseTimeMsec);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec) // [0xedaa40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		func(InDecayTimeMsec);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	void SetFilterEnvelopeInvert(bool bInInvert) // [0xeda8b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		func(bInInvert);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	void SetFilterEnvelopeDepth(float InDepth) // [0xeda830] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		func(InDepth);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert) // [0xeda7a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		func(bInBiasInvert);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	void SetFilterEnvelopeBiasDepth(float InDepth) // [0xeda720] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		func(InDepth);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec) // [0xeda6a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		func(InAttackTimeMsec);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue) // [0xeda590] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t, int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func(TableIndex, KeyframeIndex, NewValue);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent) // [0xeda4c0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func(TableIndex, InNewTangent);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32_t TableIndex) // [0xeda3f0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(CurveInterpolationType, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func(InterpolationType, TableIndex);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	void SetAmpEnvelopeSustainGain(float InSustainGain) // [0xeda2f0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		func(InSustainGain);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec) // [0xeda270] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		func(InReleaseTimeMsec);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	void SetAmpEnvelopeInvert(bool bInInvert) // [0xeda1e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		func(bInInvert);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	void SetAmpEnvelopeDepth(float InDepth) // [0xeda160] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		func(InDepth);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec) // [0xeda0e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		func(InDecayTimeMsec);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert) // [0xeda050] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		func(bInBiasInvert);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	void SetAmpEnvelopeBiasDepth(float InDepth) // [0xed9fd0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		func(InDepth);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec) // [0xed9f50] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		func(InAttackTimeMsec);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	void RefreshWaveTable(int32_t Index) // [0xed9da0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		func(Index);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	void RefreshAllWaveTables() // [0xed9d80] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		func();
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOn
	void NoteOn(float InMidiNote, float InVelocity) // [0xed9cb0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		func(InMidiNote, InVelocity);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOff
	void NoteOff(float InMidiNote) // [0xed9b10] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[39]);
		func(InMidiNote);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	int32_t GetNumTableEntries() // [0xed9940] Final|Native|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[40]);
		return func();
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	int32_t GetMaxTableIndex() // [0xed9900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[41]);
		return func();
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	TArray<float> GetKeyFrameValuesForTable(float TableIndex) // [0xed94c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef TArray<float> (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[42]);
		return func(TableIndex);
	}
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
	float GetCurveTangent(int32_t TableIndex) // [0xed9420] Final|Native|Public|BlueprintCallable 
	{
		typedef float (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[43]);
		return func(TableIndex);
	}
};

/// Class /Script/Synthesis.SynthComponentToneGenerator
/// Size: 0x06E0 (1760 bytes) (0x0006C0 - 0x0006E0) align 16 MaxSize: 0x06E0
class USynthComponentToneGenerator : public USynthComponent
{ 
public:
	float                                              Frequency;                                                  // 0x06C0   (0x0004)  
	float                                              Volume;                                                     // 0x06C4   (0x0004)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x06C8   (0x0018)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetVolume
	void SetVolume(float InVolume) // [0xedbe10] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InVolume);
	}
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetFrequency
	void SetFrequency(float InFrequency) // [0xedab40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InFrequency);
	}
};

/// Class /Script/Synthesis.SynthSamplePlayer
/// Size: 0x07F0 (2032 bytes) (0x0006C0 - 0x0007F0) align 16 MaxSize: 0x07F0
class USynthSamplePlayer : public USynthComponent
{ 
public:
	class USoundWave*                                  SoundWave;                                                  // 0x06C0   (0x0008)  
	SDK_UNDEFINED(16,656) /* FMulticastInlineDelegate */ __um(OnSampleLoaded);                                     // 0x06C8   (0x0010)  
	SDK_UNDEFINED(16,657) /* FMulticastInlineDelegate */ __um(OnSamplePlaybackProgress);                           // 0x06D8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x108];                                     // 0x06E8   (0x0108)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthSamplePlayer.SetSoundWave
	void SetSoundWave(USoundWave* InSoundWave) // [0xedbc70] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(USoundWave*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSoundWave);
	}
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	void SetScrubTimeWidth(float InScrubTimeWidthSec) // [0xedbb60] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InScrubTimeWidthSec);
	}
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubMode
	void SetScrubMode(bool bScrubMode) // [0xedbad0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(bScrubMode);
	}
	// Function /Script/Synthesis.SynthSamplePlayer.SetPitch
	void SetPitch(float InPitch, float TimeSec) // [0xedb1c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(InPitch, TimeSec);
	}
	// Function /Script/Synthesis.SynthSamplePlayer.SeekToTime
	void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap) // [0xed9e30] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float, ESamplePlayerSeekType, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(TimeSec, SeekType, bWrap);
	}
	// Function /Script/Synthesis.SynthSamplePlayer.IsLoaded
	bool IsLoaded() // [0xed9a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/Synthesis.SynthSamplePlayer.GetSampleDuration
	float GetSampleDuration() // [0xed99a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	float GetCurrentPlaybackProgressTime() // [0xed93c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func();
	}
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
	float GetCurrentPlaybackProgressPercent() // [0xed9390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
};

/// Class /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
	float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax) // [0xed9750] Final|Native|Static|Private|BlueprintCallable 
	{
		typedef float (*FuncPtr)(float, float, float, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(InLinearValue, InDomainMin, InDomainMax, InRangeMin, InRangeMax);
	}
	// Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
	float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax) // [0xed95a0] Final|Native|Static|Private|BlueprintCallable 
	{
		typedef float (*FuncPtr)(float, float, float, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(InLogFrequencyValue, InDomainMin, InDomainMax, InRangeMin, InRangeMax);
	}
};

/// Class /Script/Synthesis.SynthKnob
/// Size: 0x0400 (1024 bytes) (0x000108 - 0x000400) align 8 MaxSize: 0x0400
class USynthKnob : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0108   (0x0004)  
	float                                              StepSize;                                                   // 0x010C   (0x0004)  
	float                                              MouseSpeed;                                                 // 0x0110   (0x0004)  
	float                                              MouseFineTuneSpeed;                                         // 0x0114   (0x0004)  
	bool                                               ShowTooltipInfo : 1;                                        // 0x0118:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0119   (0x0007)  MISSED
	FText                                              ParameterName;                                              // 0x0120   (0x0018)  
	FText                                              ParameterUnits;                                             // 0x0138   (0x0018)  
	SDK_UNDEFINED(16,658) /* FDelegateProperty */      __um(ValueDelegate);                                        // 0x0150   (0x0010)  
	FSynthKnobStyle                                    WidgetStyle;                                                // 0x0160   (0x0238)  
	bool                                               Locked;                                                     // 0x0398   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0399   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x039A   (0x0006)  MISSED
	SDK_UNDEFINED(16,659) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                                // 0x03A0   (0x0010)  
	SDK_UNDEFINED(16,660) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                  // 0x03B0   (0x0010)  
	SDK_UNDEFINED(16,661) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                           // 0x03C0   (0x0010)  
	SDK_UNDEFINED(16,662) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                             // 0x03D0   (0x0010)  
	SDK_UNDEFINED(16,663) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                     // 0x03E0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x03F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthKnob.SetValue
	void SetValue(float InValue) // [0xedc7b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InValue);
	}
	// Function /Script/Synthesis.SynthKnob.SetStepSize
	void SetStepSize(float InValue) // [0xedc730] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InValue);
	}
	// Function /Script/Synthesis.SynthKnob.SetLocked
	void SetLocked(bool InValue) // [0xedc6a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InValue);
	}
	// Function /Script/Synthesis.SynthKnob.GetValue
	float GetValue() // [0xedc670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
};

#pragma pack(pop)


static_assert(sizeof(FSynth1PatchCable) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FEpicSynth1Patch) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FModularSynthPreset) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FModularSynthPresetBankEntry) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(UModularSynthPresetBank) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UModularSynthLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModularSynthComponent) == 0x0D80); // 3456 bytes (0x0006C0 - 0x000D80)
static_assert(sizeof(FSourceEffectBitCrusherSettings) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(USourceEffectBitCrusherPreset) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FSourceEffectChorusSettings) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(USourceEffectChorusPreset) == 0x0180); // 384 bytes (0x000068 - 0x000180)
static_assert(sizeof(FSourceEffectDynamicsProcessorSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(USourceEffectDynamicsProcessorPreset) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(UEnvelopeFollowerListener) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(FSourceEffectEnvelopeFollowerSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(USourceEffectEnvelopeFollowerPreset) == 0x00A8); // 168 bytes (0x000068 - 0x0000A8)
static_assert(sizeof(FSourceEffectEQBand) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSourceEffectEQSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(USourceEffectEQPreset) == 0x00B0); // 176 bytes (0x000068 - 0x0000B0)
static_assert(sizeof(FSourceEffectFilterAudioBusModulationSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSourceEffectFilterSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(USourceEffectFilterPreset) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FSourceEffectFoldbackDistortionSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(USourceEffectFoldbackDistortionPreset) == 0x00A8); // 168 bytes (0x000068 - 0x0000A8)
static_assert(sizeof(FSourceEffectMidSideSpreaderSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(USourceEffectMidSideSpreaderPreset) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FSourceEffectPannerSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(USourceEffectPannerPreset) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FSourceEffectPhaserSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(USourceEffectPhaserPreset) == 0x00B0); // 176 bytes (0x000068 - 0x0000B0)
static_assert(sizeof(FSourceEffectRingModulationSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(USourceEffectRingModulationPreset) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FSourceEffectSimpleDelaySettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(USourceEffectSimpleDelayPreset) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(FSourceEffectStereoDelaySettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(USourceEffectStereoDelayPreset) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(FSourceEffectWaveShaperSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(USourceEffectWaveShaperPreset) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(UAudioImpulseResponse) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FSubmixEffectConvolutionReverbSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(USubmixEffectConvolutionReverbPreset) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FSubmixEffectDelaySettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(USubmixEffectDelayPreset) == 0x00B8); // 184 bytes (0x000068 - 0x0000B8)
static_assert(sizeof(FSubmixEffectFilterSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(USubmixEffectFilterPreset) == 0x00A8); // 168 bytes (0x000068 - 0x0000A8)
static_assert(sizeof(FSubmixEffectFlexiverbSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(USubmixEffectFlexiverbPreset) == 0x00B0); // 176 bytes (0x000068 - 0x0000B0)
static_assert(sizeof(FDynamicsBandSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSubmixEffectMultibandCompressorSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(USubmixEffectMultibandCompressorPreset) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FSubmixEffectStereoDelaySettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(USubmixEffectStereoDelayPreset) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(FTapDelayInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSubmixEffectTapDelaySettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(USubmixEffectTapDelayPreset) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(FSynth2DSliderStyle) == 0x02B8); // 696 bytes (0x000008 - 0x0002B8)
static_assert(sizeof(USynth2DSlider) == 0x0478); // 1144 bytes (0x000108 - 0x000478)
static_assert(sizeof(UGranularSynth) == 0x0A80); // 2688 bytes (0x0006C0 - 0x000A80)
static_assert(sizeof(UMonoWaveTableSynthPreset) == 0x0170); // 368 bytes (0x000028 - 0x000170)
static_assert(sizeof(USynthComponentMonoWaveTable) == 0x0E00); // 3584 bytes (0x0006C0 - 0x000E00)
static_assert(sizeof(USynthComponentToneGenerator) == 0x06E0); // 1760 bytes (0x0006C0 - 0x0006E0)
static_assert(sizeof(USynthSamplePlayer) == 0x07F0); // 2032 bytes (0x0006C0 - 0x0007F0)
static_assert(sizeof(USynthesisUtilitiesBlueprintFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSynthKnobStyle) == 0x0238); // 568 bytes (0x000008 - 0x000238)
static_assert(sizeof(USynthKnob) == 0x0400); // 1024 bytes (0x000108 - 0x000400)
static_assert(sizeof(FPatchId) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSourceEffectBitCrusherBaseSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSourceEffectChorusBaseSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSynthSlateStyle) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(offsetof(FSynth1PatchCable, Destination) == 0x0004);
static_assert(offsetof(FEpicSynth1Patch, PatchSource) == 0x0000);
static_assert(offsetof(FEpicSynth1Patch, PatchCables) == 0x0008);
static_assert(offsetof(FModularSynthPreset, Osc1Type) == 0x000C);
static_assert(offsetof(FModularSynthPreset, Osc2Type) == 0x0024);
static_assert(offsetof(FModularSynthPreset, LFO1Type) == 0x0054);
static_assert(offsetof(FModularSynthPreset, LFO1Mode) == 0x0055);
static_assert(offsetof(FModularSynthPreset, LFO1PatchType) == 0x0056);
static_assert(offsetof(FModularSynthPreset, LFO2Type) == 0x0060);
static_assert(offsetof(FModularSynthPreset, LFO2Mode) == 0x0061);
static_assert(offsetof(FModularSynthPreset, LFO2PatchType) == 0x0062);
static_assert(offsetof(FModularSynthPreset, ModEnvPatchType) == 0x0078);
static_assert(offsetof(FModularSynthPreset, ModEnvBiasPatchType) == 0x0079);
static_assert(offsetof(FModularSynthPreset, FilterType) == 0x00A0);
static_assert(offsetof(FModularSynthPreset, FilterAlgorithm) == 0x00A1);
static_assert(offsetof(FModularSynthPreset, StereoDelayMode) == 0x00A8);
static_assert(offsetof(FModularSynthPreset, Patches) == 0x00D0);
static_assert(offsetof(FModularSynthPresetBankEntry, PresetName) == 0x0000);
static_assert(offsetof(FModularSynthPresetBankEntry, Preset) == 0x0010);
static_assert(offsetof(UModularSynthPresetBank, Presets) == 0x0028);
static_assert(offsetof(FSourceEffectBitCrusherSettings, SampleRateModulation) == 0x0008);
static_assert(offsetof(FSourceEffectBitCrusherSettings, BitModulation) == 0x0020);
static_assert(offsetof(USourceEffectBitCrusherPreset, Settings) == 0x00C0);
static_assert(offsetof(FSourceEffectChorusSettings, DepthModulation) == 0x0018);
static_assert(offsetof(FSourceEffectChorusSettings, FrequencyModulation) == 0x0028);
static_assert(offsetof(FSourceEffectChorusSettings, FeedbackModulation) == 0x0038);
static_assert(offsetof(FSourceEffectChorusSettings, WetModulation) == 0x0048);
static_assert(offsetof(FSourceEffectChorusSettings, DryModulation) == 0x0058);
static_assert(offsetof(FSourceEffectChorusSettings, SpreadModulation) == 0x0068);
static_assert(offsetof(USourceEffectChorusPreset, Settings) == 0x0108);
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, DynamicsProcessorType) == 0x0000);
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, PeakMode) == 0x0001);
static_assert(offsetof(USourceEffectDynamicsProcessorPreset, Settings) == 0x00B8);
static_assert(offsetof(FSourceEffectEnvelopeFollowerSettings, PeakMode) == 0x0008);
static_assert(offsetof(USourceEffectEnvelopeFollowerPreset, Settings) == 0x009C);
static_assert(offsetof(FSourceEffectEQSettings, EQBands) == 0x0000);
static_assert(offsetof(USourceEffectEQPreset, Settings) == 0x00A0);
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, AudioBus) == 0x0000);
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, FilterParam) == 0x0014);
static_assert(offsetof(FSourceEffectFilterSettings, FilterCircuit) == 0x0000);
static_assert(offsetof(FSourceEffectFilterSettings, FilterType) == 0x0001);
static_assert(offsetof(FSourceEffectFilterSettings, AudioBusModulation) == 0x0010);
static_assert(offsetof(USourceEffectFilterPreset, Settings) == 0x00B0);
static_assert(offsetof(USourceEffectFoldbackDistortionPreset, Settings) == 0x009C);
static_assert(offsetof(FSourceEffectMidSideSpreaderSettings, InputMode) == 0x0004);
static_assert(offsetof(FSourceEffectMidSideSpreaderSettings, OutputMode) == 0x0005);
static_assert(offsetof(USourceEffectMidSideSpreaderPreset, Settings) == 0x0098);
static_assert(offsetof(USourceEffectPannerPreset, Settings) == 0x0098);
static_assert(offsetof(FSourceEffectPhaserSettings, LFOType) == 0x000C);
static_assert(offsetof(USourceEffectPhaserPreset, Settings) == 0x00A0);
static_assert(offsetof(FSourceEffectRingModulationSettings, ModulatorType) == 0x0000);
static_assert(offsetof(FSourceEffectRingModulationSettings, AudioBusModulator) == 0x0018);
static_assert(offsetof(USourceEffectRingModulationPreset, Settings) == 0x00B0);
static_assert(offsetof(USourceEffectSimpleDelayPreset, Settings) == 0x00A8);
static_assert(offsetof(FSourceEffectStereoDelaySettings, DelayMode) == 0x0000);
static_assert(offsetof(FSourceEffectStereoDelaySettings, FilterType) == 0x0019);
static_assert(offsetof(USourceEffectStereoDelayPreset, Settings) == 0x00B4);
static_assert(offsetof(USourceEffectWaveShaperPreset, Settings) == 0x0098);
static_assert(offsetof(UAudioImpulseResponse, ImpulseResponse) == 0x0028);
static_assert(offsetof(UAudioImpulseResponse, IRData) == 0x0048);
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, ImpulseResponse) == 0x0018);
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, ImpulseResponse) == 0x0068);
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, Settings) == 0x0070);
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, BlockSize) == 0x0098);
static_assert(offsetof(USubmixEffectDelayPreset, Settings) == 0x009C);
static_assert(offsetof(USubmixEffectDelayPreset, DynamicSettings) == 0x00A8);
static_assert(offsetof(FSubmixEffectFilterSettings, FilterType) == 0x0000);
static_assert(offsetof(FSubmixEffectFilterSettings, FilterAlgorithm) == 0x0001);
static_assert(offsetof(USubmixEffectFilterPreset, Settings) == 0x009C);
static_assert(offsetof(USubmixEffectFlexiverbPreset, Settings) == 0x00A0);
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, DynamicsProcessorType) == 0x0000);
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, PeakMode) == 0x0001);
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, Bands) == 0x0010);
static_assert(offsetof(USubmixEffectMultibandCompressorPreset, Settings) == 0x00B0);
static_assert(offsetof(FSubmixEffectStereoDelaySettings, DelayMode) == 0x0000);
static_assert(offsetof(FSubmixEffectStereoDelaySettings, FilterType) == 0x0019);
static_assert(offsetof(USubmixEffectStereoDelayPreset, Settings) == 0x00B4);
static_assert(offsetof(FTapDelayInfo, TapLineMode) == 0x0000);
static_assert(offsetof(FSubmixEffectTapDelaySettings, Taps) == 0x0008);
static_assert(offsetof(USubmixEffectTapDelayPreset, Settings) == 0x00A8);
static_assert(offsetof(FSynth2DSliderStyle, NormalThumbImage) == 0x0008);
static_assert(offsetof(FSynth2DSliderStyle, DisabledThumbImage) == 0x0090);
static_assert(offsetof(FSynth2DSliderStyle, NormalBarImage) == 0x0118);
static_assert(offsetof(FSynth2DSliderStyle, DisabledBarImage) == 0x01A0);
static_assert(offsetof(FSynth2DSliderStyle, BackgroundImage) == 0x0228);
static_assert(offsetof(USynth2DSlider, WidgetStyle) == 0x0130);
static_assert(offsetof(USynth2DSlider, SliderHandleColor) == 0x03E8);
static_assert(offsetof(UGranularSynth, GranulatedSoundWave) == 0x06C0);
static_assert(offsetof(UMonoWaveTableSynthPreset, PresetName) == 0x0028);
static_assert(offsetof(UMonoWaveTableSynthPreset, WaveTable) == 0x0048);
static_assert(offsetof(USynthComponentMonoWaveTable, CurrentPreset) == 0x06E0);
static_assert(offsetof(USynthSamplePlayer, SoundWave) == 0x06C0);
static_assert(offsetof(FSynthKnobStyle, LargeKnob) == 0x0008);
static_assert(offsetof(FSynthKnobStyle, LargeKnobOverlay) == 0x0090);
static_assert(offsetof(FSynthKnobStyle, MediumKnob) == 0x0118);
static_assert(offsetof(FSynthKnobStyle, MediumKnobOverlay) == 0x01A0);
static_assert(offsetof(FSynthKnobStyle, KnobSize) == 0x0230);
static_assert(offsetof(USynthKnob, ParameterName) == 0x0120);
static_assert(offsetof(USynthKnob, ParameterUnits) == 0x0138);
static_assert(offsetof(USynthKnob, WidgetStyle) == 0x0160);
static_assert(offsetof(FSynthSlateStyle, SizeType) == 0x0008);
static_assert(offsetof(FSynthSlateStyle, ColorStyle) == 0x0009);
