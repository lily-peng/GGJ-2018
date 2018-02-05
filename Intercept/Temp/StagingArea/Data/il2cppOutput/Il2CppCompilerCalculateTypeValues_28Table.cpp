#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.String
struct String_t;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Random
struct Random_t108471755;
// System.Collections.Generic.Dictionary`2<System.Type,MarkerMetro.Unity.WinLegacy.Reflection.TypeCode>
struct Dictionary_2_t1447242568;
// SfxrParams
struct SfxrParams_t1047942071;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// SfxrAudioPlayer
struct SfxrAudioPlayer_t847691291;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.Single[][]
struct SingleU5BU5DU5BU5D_t3206712258;
// PinkNumber
struct PinkNumber_t4016881177;
// SfxrSynth
struct SfxrSynth_t2209560255;
// System.Action
struct Action_t1264377477;
// SfxrCacheSurrogate
struct SfxrCacheSurrogate_t483364290;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// LTBezier[]
struct LTBezierU5BU5D_t3652571610;
// CustomScript
struct CustomScript_t3239276942;
// System.Void
struct Void_t1185182177;
// System.Char[]
struct CharU5BU5D_t3528271667;
// LTRect[]
struct LTRectU5BU5D_t2099225848;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.Rect[]
struct RectU5BU5D_t2936723554;
// LTRect
struct LTRect_t2883103509;
// LTBezierPath
struct LTBezierPath_t1817657086;
// LTSpline
struct LTSpline_t2431306763;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// System.Action`1<System.Single>
struct Action_1_t1569734369;
// System.Action`2<System.Single,System.Single>
struct Action_2_t3683108670;
// System.Action`2<System.Single,System.Object>
struct Action_2_t1070980764;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t2328697118;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t3894781059;
// System.Action`2<UnityEngine.Vector3,System.Object>
struct Action_2_t1344820274;
// System.Action`1<UnityEngine.Color>
struct Action_1_t2728153919;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.Texture
struct Texture_t3661962703;
// LTDescr[]
struct LTDescrU5BU5D_t547118914;
// LTDescr
struct LTDescr_t2043587347;
// System.Action`1<LTEvent>[]
struct Action_1U5BU5D_t1829790072;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t4137855814;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t1494447233;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CGETPROPERTYU3EC__ANONSTOREY0_T1586313928_H
#define U3CGETPROPERTYU3EC__ANONSTOREY0_T1586313928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MarkerMetro.Unity.WinLegacy.Reflection.ReflectionExtensions/<GetProperty>c__AnonStorey0
struct  U3CGetPropertyU3Ec__AnonStorey0_t1586313928  : public RuntimeObject
{
public:
	// System.String MarkerMetro.Unity.WinLegacy.Reflection.ReflectionExtensions/<GetProperty>c__AnonStorey0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CGetPropertyU3Ec__AnonStorey0_t1586313928, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETPROPERTYU3EC__ANONSTOREY0_T1586313928_H
#ifndef PINKNUMBER_T4016881177_H
#define PINKNUMBER_T4016881177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PinkNumber
struct  PinkNumber_t4016881177  : public RuntimeObject
{
public:
	// System.Int32 PinkNumber::max_key
	int32_t ___max_key_0;
	// System.Int32 PinkNumber::key
	int32_t ___key_1;
	// System.UInt32[] PinkNumber::white_values
	UInt32U5BU5D_t2770800703* ___white_values_2;
	// System.UInt32 PinkNumber::range
	uint32_t ___range_3;
	// System.Random PinkNumber::randomGenerator
	Random_t108471755 * ___randomGenerator_4;
	// System.Single PinkNumber::rangeBy5
	float ___rangeBy5_5;
	// System.Int32 PinkNumber::last_key
	int32_t ___last_key_6;
	// System.UInt32 PinkNumber::sum
	uint32_t ___sum_7;
	// System.Int32 PinkNumber::diff
	int32_t ___diff_8;
	// System.Int32 PinkNumber::i
	int32_t ___i_9;

public:
	inline static int32_t get_offset_of_max_key_0() { return static_cast<int32_t>(offsetof(PinkNumber_t4016881177, ___max_key_0)); }
	inline int32_t get_max_key_0() const { return ___max_key_0; }
	inline int32_t* get_address_of_max_key_0() { return &___max_key_0; }
	inline void set_max_key_0(int32_t value)
	{
		___max_key_0 = value;
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(PinkNumber_t4016881177, ___key_1)); }
	inline int32_t get_key_1() const { return ___key_1; }
	inline int32_t* get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(int32_t value)
	{
		___key_1 = value;
	}

	inline static int32_t get_offset_of_white_values_2() { return static_cast<int32_t>(offsetof(PinkNumber_t4016881177, ___white_values_2)); }
	inline UInt32U5BU5D_t2770800703* get_white_values_2() const { return ___white_values_2; }
	inline UInt32U5BU5D_t2770800703** get_address_of_white_values_2() { return &___white_values_2; }
	inline void set_white_values_2(UInt32U5BU5D_t2770800703* value)
	{
		___white_values_2 = value;
		Il2CppCodeGenWriteBarrier((&___white_values_2), value);
	}

	inline static int32_t get_offset_of_range_3() { return static_cast<int32_t>(offsetof(PinkNumber_t4016881177, ___range_3)); }
	inline uint32_t get_range_3() const { return ___range_3; }
	inline uint32_t* get_address_of_range_3() { return &___range_3; }
	inline void set_range_3(uint32_t value)
	{
		___range_3 = value;
	}

	inline static int32_t get_offset_of_randomGenerator_4() { return static_cast<int32_t>(offsetof(PinkNumber_t4016881177, ___randomGenerator_4)); }
	inline Random_t108471755 * get_randomGenerator_4() const { return ___randomGenerator_4; }
	inline Random_t108471755 ** get_address_of_randomGenerator_4() { return &___randomGenerator_4; }
	inline void set_randomGenerator_4(Random_t108471755 * value)
	{
		___randomGenerator_4 = value;
		Il2CppCodeGenWriteBarrier((&___randomGenerator_4), value);
	}

	inline static int32_t get_offset_of_rangeBy5_5() { return static_cast<int32_t>(offsetof(PinkNumber_t4016881177, ___rangeBy5_5)); }
	inline float get_rangeBy5_5() const { return ___rangeBy5_5; }
	inline float* get_address_of_rangeBy5_5() { return &___rangeBy5_5; }
	inline void set_rangeBy5_5(float value)
	{
		___rangeBy5_5 = value;
	}

	inline static int32_t get_offset_of_last_key_6() { return static_cast<int32_t>(offsetof(PinkNumber_t4016881177, ___last_key_6)); }
	inline int32_t get_last_key_6() const { return ___last_key_6; }
	inline int32_t* get_address_of_last_key_6() { return &___last_key_6; }
	inline void set_last_key_6(int32_t value)
	{
		___last_key_6 = value;
	}

	inline static int32_t get_offset_of_sum_7() { return static_cast<int32_t>(offsetof(PinkNumber_t4016881177, ___sum_7)); }
	inline uint32_t get_sum_7() const { return ___sum_7; }
	inline uint32_t* get_address_of_sum_7() { return &___sum_7; }
	inline void set_sum_7(uint32_t value)
	{
		___sum_7 = value;
	}

	inline static int32_t get_offset_of_diff_8() { return static_cast<int32_t>(offsetof(PinkNumber_t4016881177, ___diff_8)); }
	inline int32_t get_diff_8() const { return ___diff_8; }
	inline int32_t* get_address_of_diff_8() { return &___diff_8; }
	inline void set_diff_8(int32_t value)
	{
		___diff_8 = value;
	}

	inline static int32_t get_offset_of_i_9() { return static_cast<int32_t>(offsetof(PinkNumber_t4016881177, ___i_9)); }
	inline int32_t get_i_9() const { return ___i_9; }
	inline int32_t* get_address_of_i_9() { return &___i_9; }
	inline void set_i_9(int32_t value)
	{
		___i_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PINKNUMBER_T4016881177_H
#ifndef U3CU3E__ANONTYPE7_T4196320275_H
#define U3CU3E__ANONTYPE7_T4196320275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <>__AnonType7
struct  U3CU3E__AnonType7_t4196320275  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3E__ANONTYPE7_T4196320275_H
#ifndef REFLECTIONEXTENSIONS_T3785196976_H
#define REFLECTIONEXTENSIONS_T3785196976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MarkerMetro.Unity.WinLegacy.Reflection.ReflectionExtensions
struct  ReflectionExtensions_t3785196976  : public RuntimeObject
{
public:

public:
};

struct ReflectionExtensions_t3785196976_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,MarkerMetro.Unity.WinLegacy.Reflection.TypeCode> MarkerMetro.Unity.WinLegacy.Reflection.ReflectionExtensions::_typeCodeTable
	Dictionary_2_t1447242568 * ____typeCodeTable_0;

public:
	inline static int32_t get_offset_of__typeCodeTable_0() { return static_cast<int32_t>(offsetof(ReflectionExtensions_t3785196976_StaticFields, ____typeCodeTable_0)); }
	inline Dictionary_2_t1447242568 * get__typeCodeTable_0() const { return ____typeCodeTable_0; }
	inline Dictionary_2_t1447242568 ** get_address_of__typeCodeTable_0() { return &____typeCodeTable_0; }
	inline void set__typeCodeTable_0(Dictionary_2_t1447242568 * value)
	{
		____typeCodeTable_0 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodeTable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONEXTENSIONS_T3785196976_H
#ifndef SFXRSYNTH_T2209560255_H
#define SFXRSYNTH_T2209560255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SfxrSynth
struct  SfxrSynth_t2209560255  : public RuntimeObject
{
public:
	// SfxrParams SfxrSynth::_params
	SfxrParams_t1047942071 * ____params_1;
	// UnityEngine.GameObject SfxrSynth::_gameObject
	GameObject_t1113636619 * ____gameObject_2;
	// SfxrAudioPlayer SfxrSynth::_audioPlayer
	SfxrAudioPlayer_t847691291 * ____audioPlayer_3;
	// UnityEngine.Transform SfxrSynth::_parentTransform
	Transform_t3600365921 * ____parentTransform_4;
	// System.Boolean SfxrSynth::_mutation
	bool ____mutation_5;
	// System.Single[] SfxrSynth::_cachedWave
	SingleU5BU5D_t1444911251* ____cachedWave_6;
	// System.UInt32 SfxrSynth::_cachedWavePos
	uint32_t ____cachedWavePos_7;
	// System.Boolean SfxrSynth::_cachingNormal
	bool ____cachingNormal_8;
	// System.Int32 SfxrSynth::_cachingMutation
	int32_t ____cachingMutation_9;
	// System.Single[] SfxrSynth::_cachedMutation
	SingleU5BU5D_t1444911251* ____cachedMutation_10;
	// System.UInt32 SfxrSynth::_cachedMutationPos
	uint32_t ____cachedMutationPos_11;
	// System.Single[][] SfxrSynth::_cachedMutations
	SingleU5BU5DU5BU5D_t3206712258* ____cachedMutations_12;
	// System.UInt32 SfxrSynth::_cachedMutationsNum
	uint32_t ____cachedMutationsNum_13;
	// System.Single SfxrSynth::_cachedMutationAmount
	float ____cachedMutationAmount_14;
	// System.Boolean SfxrSynth::_cachingAsync
	bool ____cachingAsync_15;
	// System.Single[] SfxrSynth::_waveData
	SingleU5BU5D_t1444911251* ____waveData_16;
	// System.UInt32 SfxrSynth::_waveDataPos
	uint32_t ____waveDataPos_17;
	// SfxrParams SfxrSynth::_original
	SfxrParams_t1047942071 * ____original_18;
	// System.Boolean SfxrSynth::_finished
	bool ____finished_19;
	// System.Single SfxrSynth::_masterVolume
	float ____masterVolume_20;
	// System.UInt32 SfxrSynth::_waveType
	uint32_t ____waveType_21;
	// System.Single SfxrSynth::_envelopeVolume
	float ____envelopeVolume_22;
	// System.Int32 SfxrSynth::_envelopeStage
	int32_t ____envelopeStage_23;
	// System.Single SfxrSynth::_envelopeTime
	float ____envelopeTime_24;
	// System.Single SfxrSynth::_envelopeLength
	float ____envelopeLength_25;
	// System.Single SfxrSynth::_envelopeLength0
	float ____envelopeLength0_26;
	// System.Single SfxrSynth::_envelopeLength1
	float ____envelopeLength1_27;
	// System.Single SfxrSynth::_envelopeLength2
	float ____envelopeLength2_28;
	// System.Single SfxrSynth::_envelopeOverLength0
	float ____envelopeOverLength0_29;
	// System.Single SfxrSynth::_envelopeOverLength1
	float ____envelopeOverLength1_30;
	// System.Single SfxrSynth::_envelopeOverLength2
	float ____envelopeOverLength2_31;
	// System.UInt32 SfxrSynth::_envelopeFullLength
	uint32_t ____envelopeFullLength_32;
	// System.Single SfxrSynth::_sustainPunch
	float ____sustainPunch_33;
	// System.Int32 SfxrSynth::_phase
	int32_t ____phase_34;
	// System.Single SfxrSynth::_pos
	float ____pos_35;
	// System.Single SfxrSynth::_period
	float ____period_36;
	// System.Single SfxrSynth::_periodTemp
	float ____periodTemp_37;
	// System.Int32 SfxrSynth::_periodTempInt
	int32_t ____periodTempInt_38;
	// System.Single SfxrSynth::_maxPeriod
	float ____maxPeriod_39;
	// System.Single SfxrSynth::_slide
	float ____slide_40;
	// System.Single SfxrSynth::_deltaSlide
	float ____deltaSlide_41;
	// System.Single SfxrSynth::_minFrequency
	float ____minFrequency_42;
	// System.Single SfxrSynth::_vibratoPhase
	float ____vibratoPhase_43;
	// System.Single SfxrSynth::_vibratoSpeed
	float ____vibratoSpeed_44;
	// System.Single SfxrSynth::_vibratoAmplitude
	float ____vibratoAmplitude_45;
	// System.Single SfxrSynth::_changeAmount
	float ____changeAmount_46;
	// System.Int32 SfxrSynth::_changeTime
	int32_t ____changeTime_47;
	// System.Int32 SfxrSynth::_changeLimit
	int32_t ____changeLimit_48;
	// System.Single SfxrSynth::_squareDuty
	float ____squareDuty_49;
	// System.Single SfxrSynth::_dutySweep
	float ____dutySweep_50;
	// System.Int32 SfxrSynth::_repeatTime
	int32_t ____repeatTime_51;
	// System.Int32 SfxrSynth::_repeatLimit
	int32_t ____repeatLimit_52;
	// System.Boolean SfxrSynth::_phaser
	bool ____phaser_53;
	// System.Single SfxrSynth::_phaserOffset
	float ____phaserOffset_54;
	// System.Single SfxrSynth::_phaserDeltaOffset
	float ____phaserDeltaOffset_55;
	// System.Int32 SfxrSynth::_phaserInt
	int32_t ____phaserInt_56;
	// System.Int32 SfxrSynth::_phaserPos
	int32_t ____phaserPos_57;
	// System.Single[] SfxrSynth::_phaserBuffer
	SingleU5BU5D_t1444911251* ____phaserBuffer_58;
	// System.Boolean SfxrSynth::_filters
	bool ____filters_59;
	// System.Single SfxrSynth::_lpFilterPos
	float ____lpFilterPos_60;
	// System.Single SfxrSynth::_lpFilterOldPos
	float ____lpFilterOldPos_61;
	// System.Single SfxrSynth::_lpFilterDeltaPos
	float ____lpFilterDeltaPos_62;
	// System.Single SfxrSynth::_lpFilterCutoff
	float ____lpFilterCutoff_63;
	// System.Single SfxrSynth::_lpFilterDeltaCutoff
	float ____lpFilterDeltaCutoff_64;
	// System.Single SfxrSynth::_lpFilterDamping
	float ____lpFilterDamping_65;
	// System.Boolean SfxrSynth::_lpFilterOn
	bool ____lpFilterOn_66;
	// System.Single SfxrSynth::_hpFilterPos
	float ____hpFilterPos_67;
	// System.Single SfxrSynth::_hpFilterCutoff
	float ____hpFilterCutoff_68;
	// System.Single SfxrSynth::_hpFilterDeltaCutoff
	float ____hpFilterDeltaCutoff_69;
	// System.Single SfxrSynth::_changePeriod
	float ____changePeriod_70;
	// System.Int32 SfxrSynth::_changePeriodTime
	int32_t ____changePeriodTime_71;
	// System.Boolean SfxrSynth::_changeReached
	bool ____changeReached_72;
	// System.Single SfxrSynth::_changeAmount2
	float ____changeAmount2_73;
	// System.Int32 SfxrSynth::_changeTime2
	int32_t ____changeTime2_74;
	// System.Int32 SfxrSynth::_changeLimit2
	int32_t ____changeLimit2_75;
	// System.Boolean SfxrSynth::_changeReached2
	bool ____changeReached2_76;
	// System.Int32 SfxrSynth::_overtones
	int32_t ____overtones_77;
	// System.Single SfxrSynth::_overtoneFalloff
	float ____overtoneFalloff_78;
	// System.Single SfxrSynth::_bitcrushFreq
	float ____bitcrushFreq_79;
	// System.Single SfxrSynth::_bitcrushFreqSweep
	float ____bitcrushFreqSweep_80;
	// System.Single SfxrSynth::_bitcrushPhase
	float ____bitcrushPhase_81;
	// System.Single SfxrSynth::_bitcrushLast
	float ____bitcrushLast_82;
	// System.Single SfxrSynth::_compressionFactor
	float ____compressionFactor_83;
	// System.Single[] SfxrSynth::_noiseBuffer
	SingleU5BU5D_t1444911251* ____noiseBuffer_84;
	// System.Single[] SfxrSynth::_pinkNoiseBuffer
	SingleU5BU5D_t1444911251* ____pinkNoiseBuffer_85;
	// PinkNumber SfxrSynth::_pinkNumber
	PinkNumber_t4016881177 * ____pinkNumber_86;
	// System.Single[] SfxrSynth::_loResNoiseBuffer
	SingleU5BU5D_t1444911251* ____loResNoiseBuffer_87;
	// System.Single SfxrSynth::_superSample
	float ____superSample_88;
	// System.Single SfxrSynth::_sample
	float ____sample_89;
	// System.Single SfxrSynth::_sample2
	float ____sample2_90;
	// System.Single SfxrSynth::amp
	float ___amp_91;
	// System.Random SfxrSynth::randomGenerator
	Random_t108471755 * ___randomGenerator_92;

public:
	inline static int32_t get_offset_of__params_1() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____params_1)); }
	inline SfxrParams_t1047942071 * get__params_1() const { return ____params_1; }
	inline SfxrParams_t1047942071 ** get_address_of__params_1() { return &____params_1; }
	inline void set__params_1(SfxrParams_t1047942071 * value)
	{
		____params_1 = value;
		Il2CppCodeGenWriteBarrier((&____params_1), value);
	}

	inline static int32_t get_offset_of__gameObject_2() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____gameObject_2)); }
	inline GameObject_t1113636619 * get__gameObject_2() const { return ____gameObject_2; }
	inline GameObject_t1113636619 ** get_address_of__gameObject_2() { return &____gameObject_2; }
	inline void set__gameObject_2(GameObject_t1113636619 * value)
	{
		____gameObject_2 = value;
		Il2CppCodeGenWriteBarrier((&____gameObject_2), value);
	}

	inline static int32_t get_offset_of__audioPlayer_3() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____audioPlayer_3)); }
	inline SfxrAudioPlayer_t847691291 * get__audioPlayer_3() const { return ____audioPlayer_3; }
	inline SfxrAudioPlayer_t847691291 ** get_address_of__audioPlayer_3() { return &____audioPlayer_3; }
	inline void set__audioPlayer_3(SfxrAudioPlayer_t847691291 * value)
	{
		____audioPlayer_3 = value;
		Il2CppCodeGenWriteBarrier((&____audioPlayer_3), value);
	}

	inline static int32_t get_offset_of__parentTransform_4() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____parentTransform_4)); }
	inline Transform_t3600365921 * get__parentTransform_4() const { return ____parentTransform_4; }
	inline Transform_t3600365921 ** get_address_of__parentTransform_4() { return &____parentTransform_4; }
	inline void set__parentTransform_4(Transform_t3600365921 * value)
	{
		____parentTransform_4 = value;
		Il2CppCodeGenWriteBarrier((&____parentTransform_4), value);
	}

	inline static int32_t get_offset_of__mutation_5() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____mutation_5)); }
	inline bool get__mutation_5() const { return ____mutation_5; }
	inline bool* get_address_of__mutation_5() { return &____mutation_5; }
	inline void set__mutation_5(bool value)
	{
		____mutation_5 = value;
	}

	inline static int32_t get_offset_of__cachedWave_6() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____cachedWave_6)); }
	inline SingleU5BU5D_t1444911251* get__cachedWave_6() const { return ____cachedWave_6; }
	inline SingleU5BU5D_t1444911251** get_address_of__cachedWave_6() { return &____cachedWave_6; }
	inline void set__cachedWave_6(SingleU5BU5D_t1444911251* value)
	{
		____cachedWave_6 = value;
		Il2CppCodeGenWriteBarrier((&____cachedWave_6), value);
	}

	inline static int32_t get_offset_of__cachedWavePos_7() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____cachedWavePos_7)); }
	inline uint32_t get__cachedWavePos_7() const { return ____cachedWavePos_7; }
	inline uint32_t* get_address_of__cachedWavePos_7() { return &____cachedWavePos_7; }
	inline void set__cachedWavePos_7(uint32_t value)
	{
		____cachedWavePos_7 = value;
	}

	inline static int32_t get_offset_of__cachingNormal_8() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____cachingNormal_8)); }
	inline bool get__cachingNormal_8() const { return ____cachingNormal_8; }
	inline bool* get_address_of__cachingNormal_8() { return &____cachingNormal_8; }
	inline void set__cachingNormal_8(bool value)
	{
		____cachingNormal_8 = value;
	}

	inline static int32_t get_offset_of__cachingMutation_9() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____cachingMutation_9)); }
	inline int32_t get__cachingMutation_9() const { return ____cachingMutation_9; }
	inline int32_t* get_address_of__cachingMutation_9() { return &____cachingMutation_9; }
	inline void set__cachingMutation_9(int32_t value)
	{
		____cachingMutation_9 = value;
	}

	inline static int32_t get_offset_of__cachedMutation_10() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____cachedMutation_10)); }
	inline SingleU5BU5D_t1444911251* get__cachedMutation_10() const { return ____cachedMutation_10; }
	inline SingleU5BU5D_t1444911251** get_address_of__cachedMutation_10() { return &____cachedMutation_10; }
	inline void set__cachedMutation_10(SingleU5BU5D_t1444911251* value)
	{
		____cachedMutation_10 = value;
		Il2CppCodeGenWriteBarrier((&____cachedMutation_10), value);
	}

	inline static int32_t get_offset_of__cachedMutationPos_11() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____cachedMutationPos_11)); }
	inline uint32_t get__cachedMutationPos_11() const { return ____cachedMutationPos_11; }
	inline uint32_t* get_address_of__cachedMutationPos_11() { return &____cachedMutationPos_11; }
	inline void set__cachedMutationPos_11(uint32_t value)
	{
		____cachedMutationPos_11 = value;
	}

	inline static int32_t get_offset_of__cachedMutations_12() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____cachedMutations_12)); }
	inline SingleU5BU5DU5BU5D_t3206712258* get__cachedMutations_12() const { return ____cachedMutations_12; }
	inline SingleU5BU5DU5BU5D_t3206712258** get_address_of__cachedMutations_12() { return &____cachedMutations_12; }
	inline void set__cachedMutations_12(SingleU5BU5DU5BU5D_t3206712258* value)
	{
		____cachedMutations_12 = value;
		Il2CppCodeGenWriteBarrier((&____cachedMutations_12), value);
	}

	inline static int32_t get_offset_of__cachedMutationsNum_13() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____cachedMutationsNum_13)); }
	inline uint32_t get__cachedMutationsNum_13() const { return ____cachedMutationsNum_13; }
	inline uint32_t* get_address_of__cachedMutationsNum_13() { return &____cachedMutationsNum_13; }
	inline void set__cachedMutationsNum_13(uint32_t value)
	{
		____cachedMutationsNum_13 = value;
	}

	inline static int32_t get_offset_of__cachedMutationAmount_14() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____cachedMutationAmount_14)); }
	inline float get__cachedMutationAmount_14() const { return ____cachedMutationAmount_14; }
	inline float* get_address_of__cachedMutationAmount_14() { return &____cachedMutationAmount_14; }
	inline void set__cachedMutationAmount_14(float value)
	{
		____cachedMutationAmount_14 = value;
	}

	inline static int32_t get_offset_of__cachingAsync_15() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____cachingAsync_15)); }
	inline bool get__cachingAsync_15() const { return ____cachingAsync_15; }
	inline bool* get_address_of__cachingAsync_15() { return &____cachingAsync_15; }
	inline void set__cachingAsync_15(bool value)
	{
		____cachingAsync_15 = value;
	}

	inline static int32_t get_offset_of__waveData_16() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____waveData_16)); }
	inline SingleU5BU5D_t1444911251* get__waveData_16() const { return ____waveData_16; }
	inline SingleU5BU5D_t1444911251** get_address_of__waveData_16() { return &____waveData_16; }
	inline void set__waveData_16(SingleU5BU5D_t1444911251* value)
	{
		____waveData_16 = value;
		Il2CppCodeGenWriteBarrier((&____waveData_16), value);
	}

	inline static int32_t get_offset_of__waveDataPos_17() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____waveDataPos_17)); }
	inline uint32_t get__waveDataPos_17() const { return ____waveDataPos_17; }
	inline uint32_t* get_address_of__waveDataPos_17() { return &____waveDataPos_17; }
	inline void set__waveDataPos_17(uint32_t value)
	{
		____waveDataPos_17 = value;
	}

	inline static int32_t get_offset_of__original_18() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____original_18)); }
	inline SfxrParams_t1047942071 * get__original_18() const { return ____original_18; }
	inline SfxrParams_t1047942071 ** get_address_of__original_18() { return &____original_18; }
	inline void set__original_18(SfxrParams_t1047942071 * value)
	{
		____original_18 = value;
		Il2CppCodeGenWriteBarrier((&____original_18), value);
	}

	inline static int32_t get_offset_of__finished_19() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____finished_19)); }
	inline bool get__finished_19() const { return ____finished_19; }
	inline bool* get_address_of__finished_19() { return &____finished_19; }
	inline void set__finished_19(bool value)
	{
		____finished_19 = value;
	}

	inline static int32_t get_offset_of__masterVolume_20() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____masterVolume_20)); }
	inline float get__masterVolume_20() const { return ____masterVolume_20; }
	inline float* get_address_of__masterVolume_20() { return &____masterVolume_20; }
	inline void set__masterVolume_20(float value)
	{
		____masterVolume_20 = value;
	}

	inline static int32_t get_offset_of__waveType_21() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____waveType_21)); }
	inline uint32_t get__waveType_21() const { return ____waveType_21; }
	inline uint32_t* get_address_of__waveType_21() { return &____waveType_21; }
	inline void set__waveType_21(uint32_t value)
	{
		____waveType_21 = value;
	}

	inline static int32_t get_offset_of__envelopeVolume_22() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____envelopeVolume_22)); }
	inline float get__envelopeVolume_22() const { return ____envelopeVolume_22; }
	inline float* get_address_of__envelopeVolume_22() { return &____envelopeVolume_22; }
	inline void set__envelopeVolume_22(float value)
	{
		____envelopeVolume_22 = value;
	}

	inline static int32_t get_offset_of__envelopeStage_23() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____envelopeStage_23)); }
	inline int32_t get__envelopeStage_23() const { return ____envelopeStage_23; }
	inline int32_t* get_address_of__envelopeStage_23() { return &____envelopeStage_23; }
	inline void set__envelopeStage_23(int32_t value)
	{
		____envelopeStage_23 = value;
	}

	inline static int32_t get_offset_of__envelopeTime_24() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____envelopeTime_24)); }
	inline float get__envelopeTime_24() const { return ____envelopeTime_24; }
	inline float* get_address_of__envelopeTime_24() { return &____envelopeTime_24; }
	inline void set__envelopeTime_24(float value)
	{
		____envelopeTime_24 = value;
	}

	inline static int32_t get_offset_of__envelopeLength_25() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____envelopeLength_25)); }
	inline float get__envelopeLength_25() const { return ____envelopeLength_25; }
	inline float* get_address_of__envelopeLength_25() { return &____envelopeLength_25; }
	inline void set__envelopeLength_25(float value)
	{
		____envelopeLength_25 = value;
	}

	inline static int32_t get_offset_of__envelopeLength0_26() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____envelopeLength0_26)); }
	inline float get__envelopeLength0_26() const { return ____envelopeLength0_26; }
	inline float* get_address_of__envelopeLength0_26() { return &____envelopeLength0_26; }
	inline void set__envelopeLength0_26(float value)
	{
		____envelopeLength0_26 = value;
	}

	inline static int32_t get_offset_of__envelopeLength1_27() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____envelopeLength1_27)); }
	inline float get__envelopeLength1_27() const { return ____envelopeLength1_27; }
	inline float* get_address_of__envelopeLength1_27() { return &____envelopeLength1_27; }
	inline void set__envelopeLength1_27(float value)
	{
		____envelopeLength1_27 = value;
	}

	inline static int32_t get_offset_of__envelopeLength2_28() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____envelopeLength2_28)); }
	inline float get__envelopeLength2_28() const { return ____envelopeLength2_28; }
	inline float* get_address_of__envelopeLength2_28() { return &____envelopeLength2_28; }
	inline void set__envelopeLength2_28(float value)
	{
		____envelopeLength2_28 = value;
	}

	inline static int32_t get_offset_of__envelopeOverLength0_29() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____envelopeOverLength0_29)); }
	inline float get__envelopeOverLength0_29() const { return ____envelopeOverLength0_29; }
	inline float* get_address_of__envelopeOverLength0_29() { return &____envelopeOverLength0_29; }
	inline void set__envelopeOverLength0_29(float value)
	{
		____envelopeOverLength0_29 = value;
	}

	inline static int32_t get_offset_of__envelopeOverLength1_30() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____envelopeOverLength1_30)); }
	inline float get__envelopeOverLength1_30() const { return ____envelopeOverLength1_30; }
	inline float* get_address_of__envelopeOverLength1_30() { return &____envelopeOverLength1_30; }
	inline void set__envelopeOverLength1_30(float value)
	{
		____envelopeOverLength1_30 = value;
	}

	inline static int32_t get_offset_of__envelopeOverLength2_31() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____envelopeOverLength2_31)); }
	inline float get__envelopeOverLength2_31() const { return ____envelopeOverLength2_31; }
	inline float* get_address_of__envelopeOverLength2_31() { return &____envelopeOverLength2_31; }
	inline void set__envelopeOverLength2_31(float value)
	{
		____envelopeOverLength2_31 = value;
	}

	inline static int32_t get_offset_of__envelopeFullLength_32() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____envelopeFullLength_32)); }
	inline uint32_t get__envelopeFullLength_32() const { return ____envelopeFullLength_32; }
	inline uint32_t* get_address_of__envelopeFullLength_32() { return &____envelopeFullLength_32; }
	inline void set__envelopeFullLength_32(uint32_t value)
	{
		____envelopeFullLength_32 = value;
	}

	inline static int32_t get_offset_of__sustainPunch_33() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____sustainPunch_33)); }
	inline float get__sustainPunch_33() const { return ____sustainPunch_33; }
	inline float* get_address_of__sustainPunch_33() { return &____sustainPunch_33; }
	inline void set__sustainPunch_33(float value)
	{
		____sustainPunch_33 = value;
	}

	inline static int32_t get_offset_of__phase_34() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____phase_34)); }
	inline int32_t get__phase_34() const { return ____phase_34; }
	inline int32_t* get_address_of__phase_34() { return &____phase_34; }
	inline void set__phase_34(int32_t value)
	{
		____phase_34 = value;
	}

	inline static int32_t get_offset_of__pos_35() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____pos_35)); }
	inline float get__pos_35() const { return ____pos_35; }
	inline float* get_address_of__pos_35() { return &____pos_35; }
	inline void set__pos_35(float value)
	{
		____pos_35 = value;
	}

	inline static int32_t get_offset_of__period_36() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____period_36)); }
	inline float get__period_36() const { return ____period_36; }
	inline float* get_address_of__period_36() { return &____period_36; }
	inline void set__period_36(float value)
	{
		____period_36 = value;
	}

	inline static int32_t get_offset_of__periodTemp_37() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____periodTemp_37)); }
	inline float get__periodTemp_37() const { return ____periodTemp_37; }
	inline float* get_address_of__periodTemp_37() { return &____periodTemp_37; }
	inline void set__periodTemp_37(float value)
	{
		____periodTemp_37 = value;
	}

	inline static int32_t get_offset_of__periodTempInt_38() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____periodTempInt_38)); }
	inline int32_t get__periodTempInt_38() const { return ____periodTempInt_38; }
	inline int32_t* get_address_of__periodTempInt_38() { return &____periodTempInt_38; }
	inline void set__periodTempInt_38(int32_t value)
	{
		____periodTempInt_38 = value;
	}

	inline static int32_t get_offset_of__maxPeriod_39() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____maxPeriod_39)); }
	inline float get__maxPeriod_39() const { return ____maxPeriod_39; }
	inline float* get_address_of__maxPeriod_39() { return &____maxPeriod_39; }
	inline void set__maxPeriod_39(float value)
	{
		____maxPeriod_39 = value;
	}

	inline static int32_t get_offset_of__slide_40() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____slide_40)); }
	inline float get__slide_40() const { return ____slide_40; }
	inline float* get_address_of__slide_40() { return &____slide_40; }
	inline void set__slide_40(float value)
	{
		____slide_40 = value;
	}

	inline static int32_t get_offset_of__deltaSlide_41() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____deltaSlide_41)); }
	inline float get__deltaSlide_41() const { return ____deltaSlide_41; }
	inline float* get_address_of__deltaSlide_41() { return &____deltaSlide_41; }
	inline void set__deltaSlide_41(float value)
	{
		____deltaSlide_41 = value;
	}

	inline static int32_t get_offset_of__minFrequency_42() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____minFrequency_42)); }
	inline float get__minFrequency_42() const { return ____minFrequency_42; }
	inline float* get_address_of__minFrequency_42() { return &____minFrequency_42; }
	inline void set__minFrequency_42(float value)
	{
		____minFrequency_42 = value;
	}

	inline static int32_t get_offset_of__vibratoPhase_43() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____vibratoPhase_43)); }
	inline float get__vibratoPhase_43() const { return ____vibratoPhase_43; }
	inline float* get_address_of__vibratoPhase_43() { return &____vibratoPhase_43; }
	inline void set__vibratoPhase_43(float value)
	{
		____vibratoPhase_43 = value;
	}

	inline static int32_t get_offset_of__vibratoSpeed_44() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____vibratoSpeed_44)); }
	inline float get__vibratoSpeed_44() const { return ____vibratoSpeed_44; }
	inline float* get_address_of__vibratoSpeed_44() { return &____vibratoSpeed_44; }
	inline void set__vibratoSpeed_44(float value)
	{
		____vibratoSpeed_44 = value;
	}

	inline static int32_t get_offset_of__vibratoAmplitude_45() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____vibratoAmplitude_45)); }
	inline float get__vibratoAmplitude_45() const { return ____vibratoAmplitude_45; }
	inline float* get_address_of__vibratoAmplitude_45() { return &____vibratoAmplitude_45; }
	inline void set__vibratoAmplitude_45(float value)
	{
		____vibratoAmplitude_45 = value;
	}

	inline static int32_t get_offset_of__changeAmount_46() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____changeAmount_46)); }
	inline float get__changeAmount_46() const { return ____changeAmount_46; }
	inline float* get_address_of__changeAmount_46() { return &____changeAmount_46; }
	inline void set__changeAmount_46(float value)
	{
		____changeAmount_46 = value;
	}

	inline static int32_t get_offset_of__changeTime_47() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____changeTime_47)); }
	inline int32_t get__changeTime_47() const { return ____changeTime_47; }
	inline int32_t* get_address_of__changeTime_47() { return &____changeTime_47; }
	inline void set__changeTime_47(int32_t value)
	{
		____changeTime_47 = value;
	}

	inline static int32_t get_offset_of__changeLimit_48() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____changeLimit_48)); }
	inline int32_t get__changeLimit_48() const { return ____changeLimit_48; }
	inline int32_t* get_address_of__changeLimit_48() { return &____changeLimit_48; }
	inline void set__changeLimit_48(int32_t value)
	{
		____changeLimit_48 = value;
	}

	inline static int32_t get_offset_of__squareDuty_49() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____squareDuty_49)); }
	inline float get__squareDuty_49() const { return ____squareDuty_49; }
	inline float* get_address_of__squareDuty_49() { return &____squareDuty_49; }
	inline void set__squareDuty_49(float value)
	{
		____squareDuty_49 = value;
	}

	inline static int32_t get_offset_of__dutySweep_50() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____dutySweep_50)); }
	inline float get__dutySweep_50() const { return ____dutySweep_50; }
	inline float* get_address_of__dutySweep_50() { return &____dutySweep_50; }
	inline void set__dutySweep_50(float value)
	{
		____dutySweep_50 = value;
	}

	inline static int32_t get_offset_of__repeatTime_51() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____repeatTime_51)); }
	inline int32_t get__repeatTime_51() const { return ____repeatTime_51; }
	inline int32_t* get_address_of__repeatTime_51() { return &____repeatTime_51; }
	inline void set__repeatTime_51(int32_t value)
	{
		____repeatTime_51 = value;
	}

	inline static int32_t get_offset_of__repeatLimit_52() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____repeatLimit_52)); }
	inline int32_t get__repeatLimit_52() const { return ____repeatLimit_52; }
	inline int32_t* get_address_of__repeatLimit_52() { return &____repeatLimit_52; }
	inline void set__repeatLimit_52(int32_t value)
	{
		____repeatLimit_52 = value;
	}

	inline static int32_t get_offset_of__phaser_53() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____phaser_53)); }
	inline bool get__phaser_53() const { return ____phaser_53; }
	inline bool* get_address_of__phaser_53() { return &____phaser_53; }
	inline void set__phaser_53(bool value)
	{
		____phaser_53 = value;
	}

	inline static int32_t get_offset_of__phaserOffset_54() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____phaserOffset_54)); }
	inline float get__phaserOffset_54() const { return ____phaserOffset_54; }
	inline float* get_address_of__phaserOffset_54() { return &____phaserOffset_54; }
	inline void set__phaserOffset_54(float value)
	{
		____phaserOffset_54 = value;
	}

	inline static int32_t get_offset_of__phaserDeltaOffset_55() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____phaserDeltaOffset_55)); }
	inline float get__phaserDeltaOffset_55() const { return ____phaserDeltaOffset_55; }
	inline float* get_address_of__phaserDeltaOffset_55() { return &____phaserDeltaOffset_55; }
	inline void set__phaserDeltaOffset_55(float value)
	{
		____phaserDeltaOffset_55 = value;
	}

	inline static int32_t get_offset_of__phaserInt_56() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____phaserInt_56)); }
	inline int32_t get__phaserInt_56() const { return ____phaserInt_56; }
	inline int32_t* get_address_of__phaserInt_56() { return &____phaserInt_56; }
	inline void set__phaserInt_56(int32_t value)
	{
		____phaserInt_56 = value;
	}

	inline static int32_t get_offset_of__phaserPos_57() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____phaserPos_57)); }
	inline int32_t get__phaserPos_57() const { return ____phaserPos_57; }
	inline int32_t* get_address_of__phaserPos_57() { return &____phaserPos_57; }
	inline void set__phaserPos_57(int32_t value)
	{
		____phaserPos_57 = value;
	}

	inline static int32_t get_offset_of__phaserBuffer_58() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____phaserBuffer_58)); }
	inline SingleU5BU5D_t1444911251* get__phaserBuffer_58() const { return ____phaserBuffer_58; }
	inline SingleU5BU5D_t1444911251** get_address_of__phaserBuffer_58() { return &____phaserBuffer_58; }
	inline void set__phaserBuffer_58(SingleU5BU5D_t1444911251* value)
	{
		____phaserBuffer_58 = value;
		Il2CppCodeGenWriteBarrier((&____phaserBuffer_58), value);
	}

	inline static int32_t get_offset_of__filters_59() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____filters_59)); }
	inline bool get__filters_59() const { return ____filters_59; }
	inline bool* get_address_of__filters_59() { return &____filters_59; }
	inline void set__filters_59(bool value)
	{
		____filters_59 = value;
	}

	inline static int32_t get_offset_of__lpFilterPos_60() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____lpFilterPos_60)); }
	inline float get__lpFilterPos_60() const { return ____lpFilterPos_60; }
	inline float* get_address_of__lpFilterPos_60() { return &____lpFilterPos_60; }
	inline void set__lpFilterPos_60(float value)
	{
		____lpFilterPos_60 = value;
	}

	inline static int32_t get_offset_of__lpFilterOldPos_61() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____lpFilterOldPos_61)); }
	inline float get__lpFilterOldPos_61() const { return ____lpFilterOldPos_61; }
	inline float* get_address_of__lpFilterOldPos_61() { return &____lpFilterOldPos_61; }
	inline void set__lpFilterOldPos_61(float value)
	{
		____lpFilterOldPos_61 = value;
	}

	inline static int32_t get_offset_of__lpFilterDeltaPos_62() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____lpFilterDeltaPos_62)); }
	inline float get__lpFilterDeltaPos_62() const { return ____lpFilterDeltaPos_62; }
	inline float* get_address_of__lpFilterDeltaPos_62() { return &____lpFilterDeltaPos_62; }
	inline void set__lpFilterDeltaPos_62(float value)
	{
		____lpFilterDeltaPos_62 = value;
	}

	inline static int32_t get_offset_of__lpFilterCutoff_63() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____lpFilterCutoff_63)); }
	inline float get__lpFilterCutoff_63() const { return ____lpFilterCutoff_63; }
	inline float* get_address_of__lpFilterCutoff_63() { return &____lpFilterCutoff_63; }
	inline void set__lpFilterCutoff_63(float value)
	{
		____lpFilterCutoff_63 = value;
	}

	inline static int32_t get_offset_of__lpFilterDeltaCutoff_64() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____lpFilterDeltaCutoff_64)); }
	inline float get__lpFilterDeltaCutoff_64() const { return ____lpFilterDeltaCutoff_64; }
	inline float* get_address_of__lpFilterDeltaCutoff_64() { return &____lpFilterDeltaCutoff_64; }
	inline void set__lpFilterDeltaCutoff_64(float value)
	{
		____lpFilterDeltaCutoff_64 = value;
	}

	inline static int32_t get_offset_of__lpFilterDamping_65() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____lpFilterDamping_65)); }
	inline float get__lpFilterDamping_65() const { return ____lpFilterDamping_65; }
	inline float* get_address_of__lpFilterDamping_65() { return &____lpFilterDamping_65; }
	inline void set__lpFilterDamping_65(float value)
	{
		____lpFilterDamping_65 = value;
	}

	inline static int32_t get_offset_of__lpFilterOn_66() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____lpFilterOn_66)); }
	inline bool get__lpFilterOn_66() const { return ____lpFilterOn_66; }
	inline bool* get_address_of__lpFilterOn_66() { return &____lpFilterOn_66; }
	inline void set__lpFilterOn_66(bool value)
	{
		____lpFilterOn_66 = value;
	}

	inline static int32_t get_offset_of__hpFilterPos_67() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____hpFilterPos_67)); }
	inline float get__hpFilterPos_67() const { return ____hpFilterPos_67; }
	inline float* get_address_of__hpFilterPos_67() { return &____hpFilterPos_67; }
	inline void set__hpFilterPos_67(float value)
	{
		____hpFilterPos_67 = value;
	}

	inline static int32_t get_offset_of__hpFilterCutoff_68() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____hpFilterCutoff_68)); }
	inline float get__hpFilterCutoff_68() const { return ____hpFilterCutoff_68; }
	inline float* get_address_of__hpFilterCutoff_68() { return &____hpFilterCutoff_68; }
	inline void set__hpFilterCutoff_68(float value)
	{
		____hpFilterCutoff_68 = value;
	}

	inline static int32_t get_offset_of__hpFilterDeltaCutoff_69() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____hpFilterDeltaCutoff_69)); }
	inline float get__hpFilterDeltaCutoff_69() const { return ____hpFilterDeltaCutoff_69; }
	inline float* get_address_of__hpFilterDeltaCutoff_69() { return &____hpFilterDeltaCutoff_69; }
	inline void set__hpFilterDeltaCutoff_69(float value)
	{
		____hpFilterDeltaCutoff_69 = value;
	}

	inline static int32_t get_offset_of__changePeriod_70() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____changePeriod_70)); }
	inline float get__changePeriod_70() const { return ____changePeriod_70; }
	inline float* get_address_of__changePeriod_70() { return &____changePeriod_70; }
	inline void set__changePeriod_70(float value)
	{
		____changePeriod_70 = value;
	}

	inline static int32_t get_offset_of__changePeriodTime_71() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____changePeriodTime_71)); }
	inline int32_t get__changePeriodTime_71() const { return ____changePeriodTime_71; }
	inline int32_t* get_address_of__changePeriodTime_71() { return &____changePeriodTime_71; }
	inline void set__changePeriodTime_71(int32_t value)
	{
		____changePeriodTime_71 = value;
	}

	inline static int32_t get_offset_of__changeReached_72() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____changeReached_72)); }
	inline bool get__changeReached_72() const { return ____changeReached_72; }
	inline bool* get_address_of__changeReached_72() { return &____changeReached_72; }
	inline void set__changeReached_72(bool value)
	{
		____changeReached_72 = value;
	}

	inline static int32_t get_offset_of__changeAmount2_73() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____changeAmount2_73)); }
	inline float get__changeAmount2_73() const { return ____changeAmount2_73; }
	inline float* get_address_of__changeAmount2_73() { return &____changeAmount2_73; }
	inline void set__changeAmount2_73(float value)
	{
		____changeAmount2_73 = value;
	}

	inline static int32_t get_offset_of__changeTime2_74() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____changeTime2_74)); }
	inline int32_t get__changeTime2_74() const { return ____changeTime2_74; }
	inline int32_t* get_address_of__changeTime2_74() { return &____changeTime2_74; }
	inline void set__changeTime2_74(int32_t value)
	{
		____changeTime2_74 = value;
	}

	inline static int32_t get_offset_of__changeLimit2_75() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____changeLimit2_75)); }
	inline int32_t get__changeLimit2_75() const { return ____changeLimit2_75; }
	inline int32_t* get_address_of__changeLimit2_75() { return &____changeLimit2_75; }
	inline void set__changeLimit2_75(int32_t value)
	{
		____changeLimit2_75 = value;
	}

	inline static int32_t get_offset_of__changeReached2_76() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____changeReached2_76)); }
	inline bool get__changeReached2_76() const { return ____changeReached2_76; }
	inline bool* get_address_of__changeReached2_76() { return &____changeReached2_76; }
	inline void set__changeReached2_76(bool value)
	{
		____changeReached2_76 = value;
	}

	inline static int32_t get_offset_of__overtones_77() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____overtones_77)); }
	inline int32_t get__overtones_77() const { return ____overtones_77; }
	inline int32_t* get_address_of__overtones_77() { return &____overtones_77; }
	inline void set__overtones_77(int32_t value)
	{
		____overtones_77 = value;
	}

	inline static int32_t get_offset_of__overtoneFalloff_78() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____overtoneFalloff_78)); }
	inline float get__overtoneFalloff_78() const { return ____overtoneFalloff_78; }
	inline float* get_address_of__overtoneFalloff_78() { return &____overtoneFalloff_78; }
	inline void set__overtoneFalloff_78(float value)
	{
		____overtoneFalloff_78 = value;
	}

	inline static int32_t get_offset_of__bitcrushFreq_79() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____bitcrushFreq_79)); }
	inline float get__bitcrushFreq_79() const { return ____bitcrushFreq_79; }
	inline float* get_address_of__bitcrushFreq_79() { return &____bitcrushFreq_79; }
	inline void set__bitcrushFreq_79(float value)
	{
		____bitcrushFreq_79 = value;
	}

	inline static int32_t get_offset_of__bitcrushFreqSweep_80() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____bitcrushFreqSweep_80)); }
	inline float get__bitcrushFreqSweep_80() const { return ____bitcrushFreqSweep_80; }
	inline float* get_address_of__bitcrushFreqSweep_80() { return &____bitcrushFreqSweep_80; }
	inline void set__bitcrushFreqSweep_80(float value)
	{
		____bitcrushFreqSweep_80 = value;
	}

	inline static int32_t get_offset_of__bitcrushPhase_81() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____bitcrushPhase_81)); }
	inline float get__bitcrushPhase_81() const { return ____bitcrushPhase_81; }
	inline float* get_address_of__bitcrushPhase_81() { return &____bitcrushPhase_81; }
	inline void set__bitcrushPhase_81(float value)
	{
		____bitcrushPhase_81 = value;
	}

	inline static int32_t get_offset_of__bitcrushLast_82() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____bitcrushLast_82)); }
	inline float get__bitcrushLast_82() const { return ____bitcrushLast_82; }
	inline float* get_address_of__bitcrushLast_82() { return &____bitcrushLast_82; }
	inline void set__bitcrushLast_82(float value)
	{
		____bitcrushLast_82 = value;
	}

	inline static int32_t get_offset_of__compressionFactor_83() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____compressionFactor_83)); }
	inline float get__compressionFactor_83() const { return ____compressionFactor_83; }
	inline float* get_address_of__compressionFactor_83() { return &____compressionFactor_83; }
	inline void set__compressionFactor_83(float value)
	{
		____compressionFactor_83 = value;
	}

	inline static int32_t get_offset_of__noiseBuffer_84() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____noiseBuffer_84)); }
	inline SingleU5BU5D_t1444911251* get__noiseBuffer_84() const { return ____noiseBuffer_84; }
	inline SingleU5BU5D_t1444911251** get_address_of__noiseBuffer_84() { return &____noiseBuffer_84; }
	inline void set__noiseBuffer_84(SingleU5BU5D_t1444911251* value)
	{
		____noiseBuffer_84 = value;
		Il2CppCodeGenWriteBarrier((&____noiseBuffer_84), value);
	}

	inline static int32_t get_offset_of__pinkNoiseBuffer_85() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____pinkNoiseBuffer_85)); }
	inline SingleU5BU5D_t1444911251* get__pinkNoiseBuffer_85() const { return ____pinkNoiseBuffer_85; }
	inline SingleU5BU5D_t1444911251** get_address_of__pinkNoiseBuffer_85() { return &____pinkNoiseBuffer_85; }
	inline void set__pinkNoiseBuffer_85(SingleU5BU5D_t1444911251* value)
	{
		____pinkNoiseBuffer_85 = value;
		Il2CppCodeGenWriteBarrier((&____pinkNoiseBuffer_85), value);
	}

	inline static int32_t get_offset_of__pinkNumber_86() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____pinkNumber_86)); }
	inline PinkNumber_t4016881177 * get__pinkNumber_86() const { return ____pinkNumber_86; }
	inline PinkNumber_t4016881177 ** get_address_of__pinkNumber_86() { return &____pinkNumber_86; }
	inline void set__pinkNumber_86(PinkNumber_t4016881177 * value)
	{
		____pinkNumber_86 = value;
		Il2CppCodeGenWriteBarrier((&____pinkNumber_86), value);
	}

	inline static int32_t get_offset_of__loResNoiseBuffer_87() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____loResNoiseBuffer_87)); }
	inline SingleU5BU5D_t1444911251* get__loResNoiseBuffer_87() const { return ____loResNoiseBuffer_87; }
	inline SingleU5BU5D_t1444911251** get_address_of__loResNoiseBuffer_87() { return &____loResNoiseBuffer_87; }
	inline void set__loResNoiseBuffer_87(SingleU5BU5D_t1444911251* value)
	{
		____loResNoiseBuffer_87 = value;
		Il2CppCodeGenWriteBarrier((&____loResNoiseBuffer_87), value);
	}

	inline static int32_t get_offset_of__superSample_88() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____superSample_88)); }
	inline float get__superSample_88() const { return ____superSample_88; }
	inline float* get_address_of__superSample_88() { return &____superSample_88; }
	inline void set__superSample_88(float value)
	{
		____superSample_88 = value;
	}

	inline static int32_t get_offset_of__sample_89() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____sample_89)); }
	inline float get__sample_89() const { return ____sample_89; }
	inline float* get_address_of__sample_89() { return &____sample_89; }
	inline void set__sample_89(float value)
	{
		____sample_89 = value;
	}

	inline static int32_t get_offset_of__sample2_90() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ____sample2_90)); }
	inline float get__sample2_90() const { return ____sample2_90; }
	inline float* get_address_of__sample2_90() { return &____sample2_90; }
	inline void set__sample2_90(float value)
	{
		____sample2_90 = value;
	}

	inline static int32_t get_offset_of_amp_91() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ___amp_91)); }
	inline float get_amp_91() const { return ___amp_91; }
	inline float* get_address_of_amp_91() { return &___amp_91; }
	inline void set_amp_91(float value)
	{
		___amp_91 = value;
	}

	inline static int32_t get_offset_of_randomGenerator_92() { return static_cast<int32_t>(offsetof(SfxrSynth_t2209560255, ___randomGenerator_92)); }
	inline Random_t108471755 * get_randomGenerator_92() const { return ___randomGenerator_92; }
	inline Random_t108471755 ** get_address_of_randomGenerator_92() { return &___randomGenerator_92; }
	inline void set_randomGenerator_92(Random_t108471755 * value)
	{
		___randomGenerator_92 = value;
		Il2CppCodeGenWriteBarrier((&___randomGenerator_92), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SFXRSYNTH_T2209560255_H
#ifndef SFXRPARAMS_T1047942071_H
#define SFXRPARAMS_T1047942071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SfxrParams
struct  SfxrParams_t1047942071  : public RuntimeObject
{
public:
	// System.Boolean SfxrParams::paramsDirty
	bool ___paramsDirty_0;
	// System.UInt32 SfxrParams::_waveType
	uint32_t ____waveType_1;
	// System.Single SfxrParams::_masterVolume
	float ____masterVolume_2;
	// System.Single SfxrParams::_attackTime
	float ____attackTime_3;
	// System.Single SfxrParams::_sustainTime
	float ____sustainTime_4;
	// System.Single SfxrParams::_sustainPunch
	float ____sustainPunch_5;
	// System.Single SfxrParams::_decayTime
	float ____decayTime_6;
	// System.Single SfxrParams::_startFrequency
	float ____startFrequency_7;
	// System.Single SfxrParams::_minFrequency
	float ____minFrequency_8;
	// System.Single SfxrParams::_slide
	float ____slide_9;
	// System.Single SfxrParams::_deltaSlide
	float ____deltaSlide_10;
	// System.Single SfxrParams::_vibratoDepth
	float ____vibratoDepth_11;
	// System.Single SfxrParams::_vibratoSpeed
	float ____vibratoSpeed_12;
	// System.Single SfxrParams::_changeAmount
	float ____changeAmount_13;
	// System.Single SfxrParams::_changeSpeed
	float ____changeSpeed_14;
	// System.Single SfxrParams::_squareDuty
	float ____squareDuty_15;
	// System.Single SfxrParams::_dutySweep
	float ____dutySweep_16;
	// System.Single SfxrParams::_repeatSpeed
	float ____repeatSpeed_17;
	// System.Single SfxrParams::_phaserOffset
	float ____phaserOffset_18;
	// System.Single SfxrParams::_phaserSweep
	float ____phaserSweep_19;
	// System.Single SfxrParams::_lpFilterCutoff
	float ____lpFilterCutoff_20;
	// System.Single SfxrParams::_lpFilterCutoffSweep
	float ____lpFilterCutoffSweep_21;
	// System.Single SfxrParams::_lpFilterResonance
	float ____lpFilterResonance_22;
	// System.Single SfxrParams::_hpFilterCutoff
	float ____hpFilterCutoff_23;
	// System.Single SfxrParams::_hpFilterCutoffSweep
	float ____hpFilterCutoffSweep_24;
	// System.Single SfxrParams::_changeRepeat
	float ____changeRepeat_25;
	// System.Single SfxrParams::_changeAmount2
	float ____changeAmount2_26;
	// System.Single SfxrParams::_changeSpeed2
	float ____changeSpeed2_27;
	// System.Single SfxrParams::_compressionAmount
	float ____compressionAmount_28;
	// System.Single SfxrParams::_overtones
	float ____overtones_29;
	// System.Single SfxrParams::_overtoneFalloff
	float ____overtoneFalloff_30;
	// System.Single SfxrParams::_bitCrush
	float ____bitCrush_31;
	// System.Single SfxrParams::_bitCrushSweep
	float ____bitCrushSweep_32;

public:
	inline static int32_t get_offset_of_paramsDirty_0() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ___paramsDirty_0)); }
	inline bool get_paramsDirty_0() const { return ___paramsDirty_0; }
	inline bool* get_address_of_paramsDirty_0() { return &___paramsDirty_0; }
	inline void set_paramsDirty_0(bool value)
	{
		___paramsDirty_0 = value;
	}

	inline static int32_t get_offset_of__waveType_1() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____waveType_1)); }
	inline uint32_t get__waveType_1() const { return ____waveType_1; }
	inline uint32_t* get_address_of__waveType_1() { return &____waveType_1; }
	inline void set__waveType_1(uint32_t value)
	{
		____waveType_1 = value;
	}

	inline static int32_t get_offset_of__masterVolume_2() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____masterVolume_2)); }
	inline float get__masterVolume_2() const { return ____masterVolume_2; }
	inline float* get_address_of__masterVolume_2() { return &____masterVolume_2; }
	inline void set__masterVolume_2(float value)
	{
		____masterVolume_2 = value;
	}

	inline static int32_t get_offset_of__attackTime_3() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____attackTime_3)); }
	inline float get__attackTime_3() const { return ____attackTime_3; }
	inline float* get_address_of__attackTime_3() { return &____attackTime_3; }
	inline void set__attackTime_3(float value)
	{
		____attackTime_3 = value;
	}

	inline static int32_t get_offset_of__sustainTime_4() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____sustainTime_4)); }
	inline float get__sustainTime_4() const { return ____sustainTime_4; }
	inline float* get_address_of__sustainTime_4() { return &____sustainTime_4; }
	inline void set__sustainTime_4(float value)
	{
		____sustainTime_4 = value;
	}

	inline static int32_t get_offset_of__sustainPunch_5() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____sustainPunch_5)); }
	inline float get__sustainPunch_5() const { return ____sustainPunch_5; }
	inline float* get_address_of__sustainPunch_5() { return &____sustainPunch_5; }
	inline void set__sustainPunch_5(float value)
	{
		____sustainPunch_5 = value;
	}

	inline static int32_t get_offset_of__decayTime_6() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____decayTime_6)); }
	inline float get__decayTime_6() const { return ____decayTime_6; }
	inline float* get_address_of__decayTime_6() { return &____decayTime_6; }
	inline void set__decayTime_6(float value)
	{
		____decayTime_6 = value;
	}

	inline static int32_t get_offset_of__startFrequency_7() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____startFrequency_7)); }
	inline float get__startFrequency_7() const { return ____startFrequency_7; }
	inline float* get_address_of__startFrequency_7() { return &____startFrequency_7; }
	inline void set__startFrequency_7(float value)
	{
		____startFrequency_7 = value;
	}

	inline static int32_t get_offset_of__minFrequency_8() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____minFrequency_8)); }
	inline float get__minFrequency_8() const { return ____minFrequency_8; }
	inline float* get_address_of__minFrequency_8() { return &____minFrequency_8; }
	inline void set__minFrequency_8(float value)
	{
		____minFrequency_8 = value;
	}

	inline static int32_t get_offset_of__slide_9() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____slide_9)); }
	inline float get__slide_9() const { return ____slide_9; }
	inline float* get_address_of__slide_9() { return &____slide_9; }
	inline void set__slide_9(float value)
	{
		____slide_9 = value;
	}

	inline static int32_t get_offset_of__deltaSlide_10() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____deltaSlide_10)); }
	inline float get__deltaSlide_10() const { return ____deltaSlide_10; }
	inline float* get_address_of__deltaSlide_10() { return &____deltaSlide_10; }
	inline void set__deltaSlide_10(float value)
	{
		____deltaSlide_10 = value;
	}

	inline static int32_t get_offset_of__vibratoDepth_11() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____vibratoDepth_11)); }
	inline float get__vibratoDepth_11() const { return ____vibratoDepth_11; }
	inline float* get_address_of__vibratoDepth_11() { return &____vibratoDepth_11; }
	inline void set__vibratoDepth_11(float value)
	{
		____vibratoDepth_11 = value;
	}

	inline static int32_t get_offset_of__vibratoSpeed_12() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____vibratoSpeed_12)); }
	inline float get__vibratoSpeed_12() const { return ____vibratoSpeed_12; }
	inline float* get_address_of__vibratoSpeed_12() { return &____vibratoSpeed_12; }
	inline void set__vibratoSpeed_12(float value)
	{
		____vibratoSpeed_12 = value;
	}

	inline static int32_t get_offset_of__changeAmount_13() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____changeAmount_13)); }
	inline float get__changeAmount_13() const { return ____changeAmount_13; }
	inline float* get_address_of__changeAmount_13() { return &____changeAmount_13; }
	inline void set__changeAmount_13(float value)
	{
		____changeAmount_13 = value;
	}

	inline static int32_t get_offset_of__changeSpeed_14() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____changeSpeed_14)); }
	inline float get__changeSpeed_14() const { return ____changeSpeed_14; }
	inline float* get_address_of__changeSpeed_14() { return &____changeSpeed_14; }
	inline void set__changeSpeed_14(float value)
	{
		____changeSpeed_14 = value;
	}

	inline static int32_t get_offset_of__squareDuty_15() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____squareDuty_15)); }
	inline float get__squareDuty_15() const { return ____squareDuty_15; }
	inline float* get_address_of__squareDuty_15() { return &____squareDuty_15; }
	inline void set__squareDuty_15(float value)
	{
		____squareDuty_15 = value;
	}

	inline static int32_t get_offset_of__dutySweep_16() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____dutySweep_16)); }
	inline float get__dutySweep_16() const { return ____dutySweep_16; }
	inline float* get_address_of__dutySweep_16() { return &____dutySweep_16; }
	inline void set__dutySweep_16(float value)
	{
		____dutySweep_16 = value;
	}

	inline static int32_t get_offset_of__repeatSpeed_17() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____repeatSpeed_17)); }
	inline float get__repeatSpeed_17() const { return ____repeatSpeed_17; }
	inline float* get_address_of__repeatSpeed_17() { return &____repeatSpeed_17; }
	inline void set__repeatSpeed_17(float value)
	{
		____repeatSpeed_17 = value;
	}

	inline static int32_t get_offset_of__phaserOffset_18() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____phaserOffset_18)); }
	inline float get__phaserOffset_18() const { return ____phaserOffset_18; }
	inline float* get_address_of__phaserOffset_18() { return &____phaserOffset_18; }
	inline void set__phaserOffset_18(float value)
	{
		____phaserOffset_18 = value;
	}

	inline static int32_t get_offset_of__phaserSweep_19() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____phaserSweep_19)); }
	inline float get__phaserSweep_19() const { return ____phaserSweep_19; }
	inline float* get_address_of__phaserSweep_19() { return &____phaserSweep_19; }
	inline void set__phaserSweep_19(float value)
	{
		____phaserSweep_19 = value;
	}

	inline static int32_t get_offset_of__lpFilterCutoff_20() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____lpFilterCutoff_20)); }
	inline float get__lpFilterCutoff_20() const { return ____lpFilterCutoff_20; }
	inline float* get_address_of__lpFilterCutoff_20() { return &____lpFilterCutoff_20; }
	inline void set__lpFilterCutoff_20(float value)
	{
		____lpFilterCutoff_20 = value;
	}

	inline static int32_t get_offset_of__lpFilterCutoffSweep_21() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____lpFilterCutoffSweep_21)); }
	inline float get__lpFilterCutoffSweep_21() const { return ____lpFilterCutoffSweep_21; }
	inline float* get_address_of__lpFilterCutoffSweep_21() { return &____lpFilterCutoffSweep_21; }
	inline void set__lpFilterCutoffSweep_21(float value)
	{
		____lpFilterCutoffSweep_21 = value;
	}

	inline static int32_t get_offset_of__lpFilterResonance_22() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____lpFilterResonance_22)); }
	inline float get__lpFilterResonance_22() const { return ____lpFilterResonance_22; }
	inline float* get_address_of__lpFilterResonance_22() { return &____lpFilterResonance_22; }
	inline void set__lpFilterResonance_22(float value)
	{
		____lpFilterResonance_22 = value;
	}

	inline static int32_t get_offset_of__hpFilterCutoff_23() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____hpFilterCutoff_23)); }
	inline float get__hpFilterCutoff_23() const { return ____hpFilterCutoff_23; }
	inline float* get_address_of__hpFilterCutoff_23() { return &____hpFilterCutoff_23; }
	inline void set__hpFilterCutoff_23(float value)
	{
		____hpFilterCutoff_23 = value;
	}

	inline static int32_t get_offset_of__hpFilterCutoffSweep_24() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____hpFilterCutoffSweep_24)); }
	inline float get__hpFilterCutoffSweep_24() const { return ____hpFilterCutoffSweep_24; }
	inline float* get_address_of__hpFilterCutoffSweep_24() { return &____hpFilterCutoffSweep_24; }
	inline void set__hpFilterCutoffSweep_24(float value)
	{
		____hpFilterCutoffSweep_24 = value;
	}

	inline static int32_t get_offset_of__changeRepeat_25() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____changeRepeat_25)); }
	inline float get__changeRepeat_25() const { return ____changeRepeat_25; }
	inline float* get_address_of__changeRepeat_25() { return &____changeRepeat_25; }
	inline void set__changeRepeat_25(float value)
	{
		____changeRepeat_25 = value;
	}

	inline static int32_t get_offset_of__changeAmount2_26() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____changeAmount2_26)); }
	inline float get__changeAmount2_26() const { return ____changeAmount2_26; }
	inline float* get_address_of__changeAmount2_26() { return &____changeAmount2_26; }
	inline void set__changeAmount2_26(float value)
	{
		____changeAmount2_26 = value;
	}

	inline static int32_t get_offset_of__changeSpeed2_27() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____changeSpeed2_27)); }
	inline float get__changeSpeed2_27() const { return ____changeSpeed2_27; }
	inline float* get_address_of__changeSpeed2_27() { return &____changeSpeed2_27; }
	inline void set__changeSpeed2_27(float value)
	{
		____changeSpeed2_27 = value;
	}

	inline static int32_t get_offset_of__compressionAmount_28() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____compressionAmount_28)); }
	inline float get__compressionAmount_28() const { return ____compressionAmount_28; }
	inline float* get_address_of__compressionAmount_28() { return &____compressionAmount_28; }
	inline void set__compressionAmount_28(float value)
	{
		____compressionAmount_28 = value;
	}

	inline static int32_t get_offset_of__overtones_29() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____overtones_29)); }
	inline float get__overtones_29() const { return ____overtones_29; }
	inline float* get_address_of__overtones_29() { return &____overtones_29; }
	inline void set__overtones_29(float value)
	{
		____overtones_29 = value;
	}

	inline static int32_t get_offset_of__overtoneFalloff_30() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____overtoneFalloff_30)); }
	inline float get__overtoneFalloff_30() const { return ____overtoneFalloff_30; }
	inline float* get_address_of__overtoneFalloff_30() { return &____overtoneFalloff_30; }
	inline void set__overtoneFalloff_30(float value)
	{
		____overtoneFalloff_30 = value;
	}

	inline static int32_t get_offset_of__bitCrush_31() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____bitCrush_31)); }
	inline float get__bitCrush_31() const { return ____bitCrush_31; }
	inline float* get_address_of__bitCrush_31() { return &____bitCrush_31; }
	inline void set__bitCrush_31(float value)
	{
		____bitCrush_31 = value;
	}

	inline static int32_t get_offset_of__bitCrushSweep_32() { return static_cast<int32_t>(offsetof(SfxrParams_t1047942071, ____bitCrushSweep_32)); }
	inline float get__bitCrushSweep_32() const { return ____bitCrushSweep_32; }
	inline float* get_address_of__bitCrushSweep_32() { return &____bitCrushSweep_32; }
	inline void set__bitCrushSweep_32(float value)
	{
		____bitCrushSweep_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SFXRPARAMS_T1047942071_H
#ifndef U3CCACHESOUNDASYNCHRONOUSLYU3EC__ITERATOR0_T1250109478_H
#define U3CCACHESOUNDASYNCHRONOUSLYU3EC__ITERATOR0_T1250109478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SfxrCacheSurrogate/<CacheSoundAsynchronously>c__Iterator0
struct  U3CCacheSoundAsynchronouslyU3Ec__Iterator0_t1250109478  : public RuntimeObject
{
public:
	// SfxrSynth SfxrCacheSurrogate/<CacheSoundAsynchronously>c__Iterator0::__synth
	SfxrSynth_t2209560255 * _____synth_0;
	// System.Action SfxrCacheSurrogate/<CacheSoundAsynchronously>c__Iterator0::__callback
	Action_t1264377477 * _____callback_1;
	// SfxrCacheSurrogate SfxrCacheSurrogate/<CacheSoundAsynchronously>c__Iterator0::$this
	SfxrCacheSurrogate_t483364290 * ___U24this_2;
	// System.Object SfxrCacheSurrogate/<CacheSoundAsynchronously>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean SfxrCacheSurrogate/<CacheSoundAsynchronously>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 SfxrCacheSurrogate/<CacheSoundAsynchronously>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of___synth_0() { return static_cast<int32_t>(offsetof(U3CCacheSoundAsynchronouslyU3Ec__Iterator0_t1250109478, _____synth_0)); }
	inline SfxrSynth_t2209560255 * get___synth_0() const { return _____synth_0; }
	inline SfxrSynth_t2209560255 ** get_address_of___synth_0() { return &_____synth_0; }
	inline void set___synth_0(SfxrSynth_t2209560255 * value)
	{
		_____synth_0 = value;
		Il2CppCodeGenWriteBarrier((&_____synth_0), value);
	}

	inline static int32_t get_offset_of___callback_1() { return static_cast<int32_t>(offsetof(U3CCacheSoundAsynchronouslyU3Ec__Iterator0_t1250109478, _____callback_1)); }
	inline Action_t1264377477 * get___callback_1() const { return _____callback_1; }
	inline Action_t1264377477 ** get_address_of___callback_1() { return &_____callback_1; }
	inline void set___callback_1(Action_t1264377477 * value)
	{
		_____callback_1 = value;
		Il2CppCodeGenWriteBarrier((&_____callback_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CCacheSoundAsynchronouslyU3Ec__Iterator0_t1250109478, ___U24this_2)); }
	inline SfxrCacheSurrogate_t483364290 * get_U24this_2() const { return ___U24this_2; }
	inline SfxrCacheSurrogate_t483364290 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(SfxrCacheSurrogate_t483364290 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CCacheSoundAsynchronouslyU3Ec__Iterator0_t1250109478, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CCacheSoundAsynchronouslyU3Ec__Iterator0_t1250109478, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CCacheSoundAsynchronouslyU3Ec__Iterator0_t1250109478, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCACHESOUNDASYNCHRONOUSLYU3EC__ITERATOR0_T1250109478_H
#ifndef U3CCACHEMUTATIONSASYNCHRONOUSLYU3EC__ITERATOR1_T2158179161_H
#define U3CCACHEMUTATIONSASYNCHRONOUSLYU3EC__ITERATOR1_T2158179161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SfxrCacheSurrogate/<CacheMutationsAsynchronously>c__Iterator1
struct  U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161  : public RuntimeObject
{
public:
	// SfxrSynth SfxrCacheSurrogate/<CacheMutationsAsynchronously>c__Iterator1::__synth
	SfxrSynth_t2209560255 * _____synth_0;
	// System.UInt32 SfxrCacheSurrogate/<CacheMutationsAsynchronously>c__Iterator1::__mutationsNum
	uint32_t _____mutationsNum_1;
	// System.Single SfxrCacheSurrogate/<CacheMutationsAsynchronously>c__Iterator1::__mutationAmount
	float _____mutationAmount_2;
	// System.Action SfxrCacheSurrogate/<CacheMutationsAsynchronously>c__Iterator1::__callback
	Action_t1264377477 * _____callback_3;
	// SfxrCacheSurrogate SfxrCacheSurrogate/<CacheMutationsAsynchronously>c__Iterator1::$this
	SfxrCacheSurrogate_t483364290 * ___U24this_4;
	// System.Object SfxrCacheSurrogate/<CacheMutationsAsynchronously>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean SfxrCacheSurrogate/<CacheMutationsAsynchronously>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 SfxrCacheSurrogate/<CacheMutationsAsynchronously>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of___synth_0() { return static_cast<int32_t>(offsetof(U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161, _____synth_0)); }
	inline SfxrSynth_t2209560255 * get___synth_0() const { return _____synth_0; }
	inline SfxrSynth_t2209560255 ** get_address_of___synth_0() { return &_____synth_0; }
	inline void set___synth_0(SfxrSynth_t2209560255 * value)
	{
		_____synth_0 = value;
		Il2CppCodeGenWriteBarrier((&_____synth_0), value);
	}

	inline static int32_t get_offset_of___mutationsNum_1() { return static_cast<int32_t>(offsetof(U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161, _____mutationsNum_1)); }
	inline uint32_t get___mutationsNum_1() const { return _____mutationsNum_1; }
	inline uint32_t* get_address_of___mutationsNum_1() { return &_____mutationsNum_1; }
	inline void set___mutationsNum_1(uint32_t value)
	{
		_____mutationsNum_1 = value;
	}

	inline static int32_t get_offset_of___mutationAmount_2() { return static_cast<int32_t>(offsetof(U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161, _____mutationAmount_2)); }
	inline float get___mutationAmount_2() const { return _____mutationAmount_2; }
	inline float* get_address_of___mutationAmount_2() { return &_____mutationAmount_2; }
	inline void set___mutationAmount_2(float value)
	{
		_____mutationAmount_2 = value;
	}

	inline static int32_t get_offset_of___callback_3() { return static_cast<int32_t>(offsetof(U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161, _____callback_3)); }
	inline Action_t1264377477 * get___callback_3() const { return _____callback_3; }
	inline Action_t1264377477 ** get_address_of___callback_3() { return &_____callback_3; }
	inline void set___callback_3(Action_t1264377477 * value)
	{
		_____callback_3 = value;
		Il2CppCodeGenWriteBarrier((&_____callback_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161, ___U24this_4)); }
	inline SfxrCacheSurrogate_t483364290 * get_U24this_4() const { return ___U24this_4; }
	inline SfxrCacheSurrogate_t483364290 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(SfxrCacheSurrogate_t483364290 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCACHEMUTATIONSASYNCHRONOUSLYU3EC__ITERATOR1_T2158179161_H
#ifndef LTUTILITY_T4124338238_H
#define LTUTILITY_T4124338238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTUtility
struct  LTUtility_t4124338238  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTUTILITY_T4124338238_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef LTBEZIERPATH_T1817657086_H
#define LTBEZIERPATH_T1817657086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTBezierPath
struct  LTBezierPath_t1817657086  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] LTBezierPath::pts
	Vector3U5BU5D_t1718750761* ___pts_0;
	// System.Single LTBezierPath::length
	float ___length_1;
	// System.Boolean LTBezierPath::orientToPath
	bool ___orientToPath_2;
	// System.Boolean LTBezierPath::orientToPath2d
	bool ___orientToPath2d_3;
	// LTBezier[] LTBezierPath::beziers
	LTBezierU5BU5D_t3652571610* ___beziers_4;
	// System.Single[] LTBezierPath::lengthRatio
	SingleU5BU5D_t1444911251* ___lengthRatio_5;
	// System.Int32 LTBezierPath::currentBezier
	int32_t ___currentBezier_6;
	// System.Int32 LTBezierPath::previousBezier
	int32_t ___previousBezier_7;

public:
	inline static int32_t get_offset_of_pts_0() { return static_cast<int32_t>(offsetof(LTBezierPath_t1817657086, ___pts_0)); }
	inline Vector3U5BU5D_t1718750761* get_pts_0() const { return ___pts_0; }
	inline Vector3U5BU5D_t1718750761** get_address_of_pts_0() { return &___pts_0; }
	inline void set_pts_0(Vector3U5BU5D_t1718750761* value)
	{
		___pts_0 = value;
		Il2CppCodeGenWriteBarrier((&___pts_0), value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(LTBezierPath_t1817657086, ___length_1)); }
	inline float get_length_1() const { return ___length_1; }
	inline float* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(float value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_orientToPath_2() { return static_cast<int32_t>(offsetof(LTBezierPath_t1817657086, ___orientToPath_2)); }
	inline bool get_orientToPath_2() const { return ___orientToPath_2; }
	inline bool* get_address_of_orientToPath_2() { return &___orientToPath_2; }
	inline void set_orientToPath_2(bool value)
	{
		___orientToPath_2 = value;
	}

	inline static int32_t get_offset_of_orientToPath2d_3() { return static_cast<int32_t>(offsetof(LTBezierPath_t1817657086, ___orientToPath2d_3)); }
	inline bool get_orientToPath2d_3() const { return ___orientToPath2d_3; }
	inline bool* get_address_of_orientToPath2d_3() { return &___orientToPath2d_3; }
	inline void set_orientToPath2d_3(bool value)
	{
		___orientToPath2d_3 = value;
	}

	inline static int32_t get_offset_of_beziers_4() { return static_cast<int32_t>(offsetof(LTBezierPath_t1817657086, ___beziers_4)); }
	inline LTBezierU5BU5D_t3652571610* get_beziers_4() const { return ___beziers_4; }
	inline LTBezierU5BU5D_t3652571610** get_address_of_beziers_4() { return &___beziers_4; }
	inline void set_beziers_4(LTBezierU5BU5D_t3652571610* value)
	{
		___beziers_4 = value;
		Il2CppCodeGenWriteBarrier((&___beziers_4), value);
	}

	inline static int32_t get_offset_of_lengthRatio_5() { return static_cast<int32_t>(offsetof(LTBezierPath_t1817657086, ___lengthRatio_5)); }
	inline SingleU5BU5D_t1444911251* get_lengthRatio_5() const { return ___lengthRatio_5; }
	inline SingleU5BU5D_t1444911251** get_address_of_lengthRatio_5() { return &___lengthRatio_5; }
	inline void set_lengthRatio_5(SingleU5BU5D_t1444911251* value)
	{
		___lengthRatio_5 = value;
		Il2CppCodeGenWriteBarrier((&___lengthRatio_5), value);
	}

	inline static int32_t get_offset_of_currentBezier_6() { return static_cast<int32_t>(offsetof(LTBezierPath_t1817657086, ___currentBezier_6)); }
	inline int32_t get_currentBezier_6() const { return ___currentBezier_6; }
	inline int32_t* get_address_of_currentBezier_6() { return &___currentBezier_6; }
	inline void set_currentBezier_6(int32_t value)
	{
		___currentBezier_6 = value;
	}

	inline static int32_t get_offset_of_previousBezier_7() { return static_cast<int32_t>(offsetof(LTBezierPath_t1817657086, ___previousBezier_7)); }
	inline int32_t get_previousBezier_7() const { return ___previousBezier_7; }
	inline int32_t* get_address_of_previousBezier_7() { return &___previousBezier_7; }
	inline void set_previousBezier_7(int32_t value)
	{
		___previousBezier_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTBEZIERPATH_T1817657086_H
#ifndef LTSPLINE_T2431306763_H
#define LTSPLINE_T2431306763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTSpline
struct  LTSpline_t2431306763  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] LTSpline::pts
	Vector3U5BU5D_t1718750761* ___pts_2;
	// UnityEngine.Vector3[] LTSpline::ptsAdj
	Vector3U5BU5D_t1718750761* ___ptsAdj_3;
	// System.Int32 LTSpline::ptsAdjLength
	int32_t ___ptsAdjLength_4;
	// System.Boolean LTSpline::orientToPath
	bool ___orientToPath_5;
	// System.Boolean LTSpline::orientToPath2d
	bool ___orientToPath2d_6;
	// System.Int32 LTSpline::numSections
	int32_t ___numSections_7;
	// System.Int32 LTSpline::currPt
	int32_t ___currPt_8;
	// System.Single LTSpline::totalLength
	float ___totalLength_9;

public:
	inline static int32_t get_offset_of_pts_2() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___pts_2)); }
	inline Vector3U5BU5D_t1718750761* get_pts_2() const { return ___pts_2; }
	inline Vector3U5BU5D_t1718750761** get_address_of_pts_2() { return &___pts_2; }
	inline void set_pts_2(Vector3U5BU5D_t1718750761* value)
	{
		___pts_2 = value;
		Il2CppCodeGenWriteBarrier((&___pts_2), value);
	}

	inline static int32_t get_offset_of_ptsAdj_3() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___ptsAdj_3)); }
	inline Vector3U5BU5D_t1718750761* get_ptsAdj_3() const { return ___ptsAdj_3; }
	inline Vector3U5BU5D_t1718750761** get_address_of_ptsAdj_3() { return &___ptsAdj_3; }
	inline void set_ptsAdj_3(Vector3U5BU5D_t1718750761* value)
	{
		___ptsAdj_3 = value;
		Il2CppCodeGenWriteBarrier((&___ptsAdj_3), value);
	}

	inline static int32_t get_offset_of_ptsAdjLength_4() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___ptsAdjLength_4)); }
	inline int32_t get_ptsAdjLength_4() const { return ___ptsAdjLength_4; }
	inline int32_t* get_address_of_ptsAdjLength_4() { return &___ptsAdjLength_4; }
	inline void set_ptsAdjLength_4(int32_t value)
	{
		___ptsAdjLength_4 = value;
	}

	inline static int32_t get_offset_of_orientToPath_5() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___orientToPath_5)); }
	inline bool get_orientToPath_5() const { return ___orientToPath_5; }
	inline bool* get_address_of_orientToPath_5() { return &___orientToPath_5; }
	inline void set_orientToPath_5(bool value)
	{
		___orientToPath_5 = value;
	}

	inline static int32_t get_offset_of_orientToPath2d_6() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___orientToPath2d_6)); }
	inline bool get_orientToPath2d_6() const { return ___orientToPath2d_6; }
	inline bool* get_address_of_orientToPath2d_6() { return &___orientToPath2d_6; }
	inline void set_orientToPath2d_6(bool value)
	{
		___orientToPath2d_6 = value;
	}

	inline static int32_t get_offset_of_numSections_7() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___numSections_7)); }
	inline int32_t get_numSections_7() const { return ___numSections_7; }
	inline int32_t* get_address_of_numSections_7() { return &___numSections_7; }
	inline void set_numSections_7(int32_t value)
	{
		___numSections_7 = value;
	}

	inline static int32_t get_offset_of_currPt_8() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___currPt_8)); }
	inline int32_t get_currPt_8() const { return ___currPt_8; }
	inline int32_t* get_address_of_currPt_8() { return &___currPt_8; }
	inline void set_currPt_8(int32_t value)
	{
		___currPt_8 = value;
	}

	inline static int32_t get_offset_of_totalLength_9() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___totalLength_9)); }
	inline float get_totalLength_9() const { return ___totalLength_9; }
	inline float* get_address_of_totalLength_9() { return &___totalLength_9; }
	inline void set_totalLength_9(float value)
	{
		___totalLength_9 = value;
	}
};

struct LTSpline_t2431306763_StaticFields
{
public:
	// System.Int32 LTSpline::DISTANCE_COUNT
	int32_t ___DISTANCE_COUNT_0;
	// System.Int32 LTSpline::SUBLINE_COUNT
	int32_t ___SUBLINE_COUNT_1;

public:
	inline static int32_t get_offset_of_DISTANCE_COUNT_0() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763_StaticFields, ___DISTANCE_COUNT_0)); }
	inline int32_t get_DISTANCE_COUNT_0() const { return ___DISTANCE_COUNT_0; }
	inline int32_t* get_address_of_DISTANCE_COUNT_0() { return &___DISTANCE_COUNT_0; }
	inline void set_DISTANCE_COUNT_0(int32_t value)
	{
		___DISTANCE_COUNT_0 = value;
	}

	inline static int32_t get_offset_of_SUBLINE_COUNT_1() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763_StaticFields, ___SUBLINE_COUNT_1)); }
	inline int32_t get_SUBLINE_COUNT_1() const { return ___SUBLINE_COUNT_1; }
	inline int32_t* get_address_of_SUBLINE_COUNT_1() { return &___SUBLINE_COUNT_1; }
	inline void set_SUBLINE_COUNT_1(int32_t value)
	{
		___SUBLINE_COUNT_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTSPLINE_T2431306763_H
#ifndef U3CMYCOROUTINEU3EC__ITERATOR0_T2782165003_H
#define U3CMYCOROUTINEU3EC__ITERATOR0_T2782165003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomScript/<MyCoroutine>c__Iterator0
struct  U3CMyCoroutineU3Ec__Iterator0_t2782165003  : public RuntimeObject
{
public:
	// CustomScript CustomScript/<MyCoroutine>c__Iterator0::$this
	CustomScript_t3239276942 * ___U24this_0;
	// System.Object CustomScript/<MyCoroutine>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean CustomScript/<MyCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 CustomScript/<MyCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CMyCoroutineU3Ec__Iterator0_t2782165003, ___U24this_0)); }
	inline CustomScript_t3239276942 * get_U24this_0() const { return ___U24this_0; }
	inline CustomScript_t3239276942 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(CustomScript_t3239276942 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CMyCoroutineU3Ec__Iterator0_t2782165003, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CMyCoroutineU3Ec__Iterator0_t2782165003, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CMyCoroutineU3Ec__Iterator0_t2782165003, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMYCOROUTINEU3EC__ITERATOR0_T2782165003_H
#ifndef LTEVENT_T176071434_H
#define LTEVENT_T176071434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTEvent
struct  LTEvent_t176071434  : public RuntimeObject
{
public:
	// System.Int32 LTEvent::id
	int32_t ___id_0;
	// System.Object LTEvent::data
	RuntimeObject * ___data_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(LTEvent_t176071434, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(LTEvent_t176071434, ___data_1)); }
	inline RuntimeObject * get_data_1() const { return ___data_1; }
	inline RuntimeObject ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(RuntimeObject * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTEVENT_T176071434_H
#ifndef U24ARRAYTYPEU3D8_T3242499063_H
#define U24ARRAYTYPEU3D8_T3242499063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=8
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D8_t3242499063 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D8_t3242499063__padding[8];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D8_T3242499063_H
#ifndef U24ARRAYTYPEU3D128_T4235014459_H
#define U24ARRAYTYPEU3D128_T4235014459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=128
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D128_t4235014459 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D128_t4235014459__padding[128];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D128_T4235014459_H
#ifndef U24ARRAYTYPEU3D20_T1702832645_H
#define U24ARRAYTYPEU3D20_T1702832645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=20
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D20_t1702832645 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D20_t1702832645__padding[20];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D20_T1702832645_H
#ifndef U24ARRAYTYPEU3D12_T2488454197_H
#define U24ARRAYTYPEU3D12_T2488454197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t2488454197 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t2488454197__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T2488454197_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef TWEENACTION_T2598825989_H
#define TWEENACTION_T2598825989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenAction
struct  TweenAction_t2598825989 
{
public:
	// System.Int32 TweenAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TweenAction_t2598825989, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENACTION_T2598825989_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255366  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-CAD8623838274740D6497489F547CE972C42A942
	U24ArrayTypeU3D20_t1702832645  ___U24fieldU2DCAD8623838274740D6497489F547CE972C42A942_0;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-92DC78AF759B423C04558A0433EDDBBA32C620F2
	U24ArrayTypeU3D8_t3242499063  ___U24fieldU2D92DC78AF759B423C04558A0433EDDBBA32C620F2_1;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-C5F731B7FA1D7871AC062CB4A4C43BE4516A1184
	U24ArrayTypeU3D8_t3242499063  ___U24fieldU2DC5F731B7FA1D7871AC062CB4A4C43BE4516A1184_2;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-ECA70CAEBAA14765D9F29EEB12583CD7E3E7A08B
	U24ArrayTypeU3D8_t3242499063  ___U24fieldU2DECA70CAEBAA14765D9F29EEB12583CD7E3E7A08B_3;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-87137E630C3837BC71D4E9D0A4EB1E7CF85C9909
	U24ArrayTypeU3D12_t2488454197  ___U24fieldU2D87137E630C3837BC71D4E9D0A4EB1E7CF85C9909_4;
	// <PrivateImplementationDetails>/$ArrayType=128 <PrivateImplementationDetails>::$field-CC30EB56895403A5A7C395936819CAA1EE0F5446
	U24ArrayTypeU3D128_t4235014459  ___U24fieldU2DCC30EB56895403A5A7C395936819CAA1EE0F5446_5;

public:
	inline static int32_t get_offset_of_U24fieldU2DCAD8623838274740D6497489F547CE972C42A942_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2DCAD8623838274740D6497489F547CE972C42A942_0)); }
	inline U24ArrayTypeU3D20_t1702832645  get_U24fieldU2DCAD8623838274740D6497489F547CE972C42A942_0() const { return ___U24fieldU2DCAD8623838274740D6497489F547CE972C42A942_0; }
	inline U24ArrayTypeU3D20_t1702832645 * get_address_of_U24fieldU2DCAD8623838274740D6497489F547CE972C42A942_0() { return &___U24fieldU2DCAD8623838274740D6497489F547CE972C42A942_0; }
	inline void set_U24fieldU2DCAD8623838274740D6497489F547CE972C42A942_0(U24ArrayTypeU3D20_t1702832645  value)
	{
		___U24fieldU2DCAD8623838274740D6497489F547CE972C42A942_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D92DC78AF759B423C04558A0433EDDBBA32C620F2_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2D92DC78AF759B423C04558A0433EDDBBA32C620F2_1)); }
	inline U24ArrayTypeU3D8_t3242499063  get_U24fieldU2D92DC78AF759B423C04558A0433EDDBBA32C620F2_1() const { return ___U24fieldU2D92DC78AF759B423C04558A0433EDDBBA32C620F2_1; }
	inline U24ArrayTypeU3D8_t3242499063 * get_address_of_U24fieldU2D92DC78AF759B423C04558A0433EDDBBA32C620F2_1() { return &___U24fieldU2D92DC78AF759B423C04558A0433EDDBBA32C620F2_1; }
	inline void set_U24fieldU2D92DC78AF759B423C04558A0433EDDBBA32C620F2_1(U24ArrayTypeU3D8_t3242499063  value)
	{
		___U24fieldU2D92DC78AF759B423C04558A0433EDDBBA32C620F2_1 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC5F731B7FA1D7871AC062CB4A4C43BE4516A1184_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2DC5F731B7FA1D7871AC062CB4A4C43BE4516A1184_2)); }
	inline U24ArrayTypeU3D8_t3242499063  get_U24fieldU2DC5F731B7FA1D7871AC062CB4A4C43BE4516A1184_2() const { return ___U24fieldU2DC5F731B7FA1D7871AC062CB4A4C43BE4516A1184_2; }
	inline U24ArrayTypeU3D8_t3242499063 * get_address_of_U24fieldU2DC5F731B7FA1D7871AC062CB4A4C43BE4516A1184_2() { return &___U24fieldU2DC5F731B7FA1D7871AC062CB4A4C43BE4516A1184_2; }
	inline void set_U24fieldU2DC5F731B7FA1D7871AC062CB4A4C43BE4516A1184_2(U24ArrayTypeU3D8_t3242499063  value)
	{
		___U24fieldU2DC5F731B7FA1D7871AC062CB4A4C43BE4516A1184_2 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DECA70CAEBAA14765D9F29EEB12583CD7E3E7A08B_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2DECA70CAEBAA14765D9F29EEB12583CD7E3E7A08B_3)); }
	inline U24ArrayTypeU3D8_t3242499063  get_U24fieldU2DECA70CAEBAA14765D9F29EEB12583CD7E3E7A08B_3() const { return ___U24fieldU2DECA70CAEBAA14765D9F29EEB12583CD7E3E7A08B_3; }
	inline U24ArrayTypeU3D8_t3242499063 * get_address_of_U24fieldU2DECA70CAEBAA14765D9F29EEB12583CD7E3E7A08B_3() { return &___U24fieldU2DECA70CAEBAA14765D9F29EEB12583CD7E3E7A08B_3; }
	inline void set_U24fieldU2DECA70CAEBAA14765D9F29EEB12583CD7E3E7A08B_3(U24ArrayTypeU3D8_t3242499063  value)
	{
		___U24fieldU2DECA70CAEBAA14765D9F29EEB12583CD7E3E7A08B_3 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D87137E630C3837BC71D4E9D0A4EB1E7CF85C9909_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2D87137E630C3837BC71D4E9D0A4EB1E7CF85C9909_4)); }
	inline U24ArrayTypeU3D12_t2488454197  get_U24fieldU2D87137E630C3837BC71D4E9D0A4EB1E7CF85C9909_4() const { return ___U24fieldU2D87137E630C3837BC71D4E9D0A4EB1E7CF85C9909_4; }
	inline U24ArrayTypeU3D12_t2488454197 * get_address_of_U24fieldU2D87137E630C3837BC71D4E9D0A4EB1E7CF85C9909_4() { return &___U24fieldU2D87137E630C3837BC71D4E9D0A4EB1E7CF85C9909_4; }
	inline void set_U24fieldU2D87137E630C3837BC71D4E9D0A4EB1E7CF85C9909_4(U24ArrayTypeU3D12_t2488454197  value)
	{
		___U24fieldU2D87137E630C3837BC71D4E9D0A4EB1E7CF85C9909_4 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DCC30EB56895403A5A7C395936819CAA1EE0F5446_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2DCC30EB56895403A5A7C395936819CAA1EE0F5446_5)); }
	inline U24ArrayTypeU3D128_t4235014459  get_U24fieldU2DCC30EB56895403A5A7C395936819CAA1EE0F5446_5() const { return ___U24fieldU2DCC30EB56895403A5A7C395936819CAA1EE0F5446_5; }
	inline U24ArrayTypeU3D128_t4235014459 * get_address_of_U24fieldU2DCC30EB56895403A5A7C395936819CAA1EE0F5446_5() { return &___U24fieldU2DCC30EB56895403A5A7C395936819CAA1EE0F5446_5; }
	inline void set_U24fieldU2DCC30EB56895403A5A7C395936819CAA1EE0F5446_5(U24ArrayTypeU3D128_t4235014459  value)
	{
		___U24fieldU2DCC30EB56895403A5A7C395936819CAA1EE0F5446_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifndef LTBEZIER_T3079809627_H
#define LTBEZIER_T3079809627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTBezier
struct  LTBezier_t3079809627  : public RuntimeObject
{
public:
	// System.Single LTBezier::length
	float ___length_0;
	// UnityEngine.Vector3 LTBezier::a
	Vector3_t3722313464  ___a_1;
	// UnityEngine.Vector3 LTBezier::aa
	Vector3_t3722313464  ___aa_2;
	// UnityEngine.Vector3 LTBezier::bb
	Vector3_t3722313464  ___bb_3;
	// UnityEngine.Vector3 LTBezier::cc
	Vector3_t3722313464  ___cc_4;
	// System.Single LTBezier::len
	float ___len_5;
	// System.Single[] LTBezier::arcLengths
	SingleU5BU5D_t1444911251* ___arcLengths_6;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(LTBezier_t3079809627, ___length_0)); }
	inline float get_length_0() const { return ___length_0; }
	inline float* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(float value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_a_1() { return static_cast<int32_t>(offsetof(LTBezier_t3079809627, ___a_1)); }
	inline Vector3_t3722313464  get_a_1() const { return ___a_1; }
	inline Vector3_t3722313464 * get_address_of_a_1() { return &___a_1; }
	inline void set_a_1(Vector3_t3722313464  value)
	{
		___a_1 = value;
	}

	inline static int32_t get_offset_of_aa_2() { return static_cast<int32_t>(offsetof(LTBezier_t3079809627, ___aa_2)); }
	inline Vector3_t3722313464  get_aa_2() const { return ___aa_2; }
	inline Vector3_t3722313464 * get_address_of_aa_2() { return &___aa_2; }
	inline void set_aa_2(Vector3_t3722313464  value)
	{
		___aa_2 = value;
	}

	inline static int32_t get_offset_of_bb_3() { return static_cast<int32_t>(offsetof(LTBezier_t3079809627, ___bb_3)); }
	inline Vector3_t3722313464  get_bb_3() const { return ___bb_3; }
	inline Vector3_t3722313464 * get_address_of_bb_3() { return &___bb_3; }
	inline void set_bb_3(Vector3_t3722313464  value)
	{
		___bb_3 = value;
	}

	inline static int32_t get_offset_of_cc_4() { return static_cast<int32_t>(offsetof(LTBezier_t3079809627, ___cc_4)); }
	inline Vector3_t3722313464  get_cc_4() const { return ___cc_4; }
	inline Vector3_t3722313464 * get_address_of_cc_4() { return &___cc_4; }
	inline void set_cc_4(Vector3_t3722313464  value)
	{
		___cc_4 = value;
	}

	inline static int32_t get_offset_of_len_5() { return static_cast<int32_t>(offsetof(LTBezier_t3079809627, ___len_5)); }
	inline float get_len_5() const { return ___len_5; }
	inline float* get_address_of_len_5() { return &___len_5; }
	inline void set_len_5(float value)
	{
		___len_5 = value;
	}

	inline static int32_t get_offset_of_arcLengths_6() { return static_cast<int32_t>(offsetof(LTBezier_t3079809627, ___arcLengths_6)); }
	inline SingleU5BU5D_t1444911251* get_arcLengths_6() const { return ___arcLengths_6; }
	inline SingleU5BU5D_t1444911251** get_address_of_arcLengths_6() { return &___arcLengths_6; }
	inline void set_arcLengths_6(SingleU5BU5D_t1444911251* value)
	{
		___arcLengths_6 = value;
		Il2CppCodeGenWriteBarrier((&___arcLengths_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTBEZIER_T3079809627_H
#ifndef LTGUI_T651246514_H
#define LTGUI_T651246514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTGUI
struct  LTGUI_t651246514  : public RuntimeObject
{
public:

public:
};

struct LTGUI_t651246514_StaticFields
{
public:
	// System.Int32 LTGUI::RECT_LEVELS
	int32_t ___RECT_LEVELS_0;
	// System.Int32 LTGUI::RECTS_PER_LEVEL
	int32_t ___RECTS_PER_LEVEL_1;
	// System.Int32 LTGUI::BUTTONS_MAX
	int32_t ___BUTTONS_MAX_2;
	// LTRect[] LTGUI::levels
	LTRectU5BU5D_t2099225848* ___levels_3;
	// System.Int32[] LTGUI::levelDepths
	Int32U5BU5D_t385246372* ___levelDepths_4;
	// UnityEngine.Rect[] LTGUI::buttons
	RectU5BU5D_t2936723554* ___buttons_5;
	// System.Int32[] LTGUI::buttonLevels
	Int32U5BU5D_t385246372* ___buttonLevels_6;
	// System.Int32[] LTGUI::buttonLastFrame
	Int32U5BU5D_t385246372* ___buttonLastFrame_7;
	// LTRect LTGUI::r
	LTRect_t2883103509 * ___r_8;
	// UnityEngine.Color LTGUI::color
	Color_t2555686324  ___color_9;
	// System.Boolean LTGUI::isGUIEnabled
	bool ___isGUIEnabled_10;
	// System.Int32 LTGUI::global_counter
	int32_t ___global_counter_11;

public:
	inline static int32_t get_offset_of_RECT_LEVELS_0() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___RECT_LEVELS_0)); }
	inline int32_t get_RECT_LEVELS_0() const { return ___RECT_LEVELS_0; }
	inline int32_t* get_address_of_RECT_LEVELS_0() { return &___RECT_LEVELS_0; }
	inline void set_RECT_LEVELS_0(int32_t value)
	{
		___RECT_LEVELS_0 = value;
	}

	inline static int32_t get_offset_of_RECTS_PER_LEVEL_1() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___RECTS_PER_LEVEL_1)); }
	inline int32_t get_RECTS_PER_LEVEL_1() const { return ___RECTS_PER_LEVEL_1; }
	inline int32_t* get_address_of_RECTS_PER_LEVEL_1() { return &___RECTS_PER_LEVEL_1; }
	inline void set_RECTS_PER_LEVEL_1(int32_t value)
	{
		___RECTS_PER_LEVEL_1 = value;
	}

	inline static int32_t get_offset_of_BUTTONS_MAX_2() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___BUTTONS_MAX_2)); }
	inline int32_t get_BUTTONS_MAX_2() const { return ___BUTTONS_MAX_2; }
	inline int32_t* get_address_of_BUTTONS_MAX_2() { return &___BUTTONS_MAX_2; }
	inline void set_BUTTONS_MAX_2(int32_t value)
	{
		___BUTTONS_MAX_2 = value;
	}

	inline static int32_t get_offset_of_levels_3() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___levels_3)); }
	inline LTRectU5BU5D_t2099225848* get_levels_3() const { return ___levels_3; }
	inline LTRectU5BU5D_t2099225848** get_address_of_levels_3() { return &___levels_3; }
	inline void set_levels_3(LTRectU5BU5D_t2099225848* value)
	{
		___levels_3 = value;
		Il2CppCodeGenWriteBarrier((&___levels_3), value);
	}

	inline static int32_t get_offset_of_levelDepths_4() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___levelDepths_4)); }
	inline Int32U5BU5D_t385246372* get_levelDepths_4() const { return ___levelDepths_4; }
	inline Int32U5BU5D_t385246372** get_address_of_levelDepths_4() { return &___levelDepths_4; }
	inline void set_levelDepths_4(Int32U5BU5D_t385246372* value)
	{
		___levelDepths_4 = value;
		Il2CppCodeGenWriteBarrier((&___levelDepths_4), value);
	}

	inline static int32_t get_offset_of_buttons_5() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___buttons_5)); }
	inline RectU5BU5D_t2936723554* get_buttons_5() const { return ___buttons_5; }
	inline RectU5BU5D_t2936723554** get_address_of_buttons_5() { return &___buttons_5; }
	inline void set_buttons_5(RectU5BU5D_t2936723554* value)
	{
		___buttons_5 = value;
		Il2CppCodeGenWriteBarrier((&___buttons_5), value);
	}

	inline static int32_t get_offset_of_buttonLevels_6() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___buttonLevels_6)); }
	inline Int32U5BU5D_t385246372* get_buttonLevels_6() const { return ___buttonLevels_6; }
	inline Int32U5BU5D_t385246372** get_address_of_buttonLevels_6() { return &___buttonLevels_6; }
	inline void set_buttonLevels_6(Int32U5BU5D_t385246372* value)
	{
		___buttonLevels_6 = value;
		Il2CppCodeGenWriteBarrier((&___buttonLevels_6), value);
	}

	inline static int32_t get_offset_of_buttonLastFrame_7() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___buttonLastFrame_7)); }
	inline Int32U5BU5D_t385246372* get_buttonLastFrame_7() const { return ___buttonLastFrame_7; }
	inline Int32U5BU5D_t385246372** get_address_of_buttonLastFrame_7() { return &___buttonLastFrame_7; }
	inline void set_buttonLastFrame_7(Int32U5BU5D_t385246372* value)
	{
		___buttonLastFrame_7 = value;
		Il2CppCodeGenWriteBarrier((&___buttonLastFrame_7), value);
	}

	inline static int32_t get_offset_of_r_8() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___r_8)); }
	inline LTRect_t2883103509 * get_r_8() const { return ___r_8; }
	inline LTRect_t2883103509 ** get_address_of_r_8() { return &___r_8; }
	inline void set_r_8(LTRect_t2883103509 * value)
	{
		___r_8 = value;
		Il2CppCodeGenWriteBarrier((&___r_8), value);
	}

	inline static int32_t get_offset_of_color_9() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___color_9)); }
	inline Color_t2555686324  get_color_9() const { return ___color_9; }
	inline Color_t2555686324 * get_address_of_color_9() { return &___color_9; }
	inline void set_color_9(Color_t2555686324  value)
	{
		___color_9 = value;
	}

	inline static int32_t get_offset_of_isGUIEnabled_10() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___isGUIEnabled_10)); }
	inline bool get_isGUIEnabled_10() const { return ___isGUIEnabled_10; }
	inline bool* get_address_of_isGUIEnabled_10() { return &___isGUIEnabled_10; }
	inline void set_isGUIEnabled_10(bool value)
	{
		___isGUIEnabled_10 = value;
	}

	inline static int32_t get_offset_of_global_counter_11() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___global_counter_11)); }
	inline int32_t get_global_counter_11() const { return ___global_counter_11; }
	inline int32_t* get_address_of_global_counter_11() { return &___global_counter_11; }
	inline void set_global_counter_11(int32_t value)
	{
		___global_counter_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTGUI_T651246514_H
#ifndef ELEMENT_TYPE_T1916908453_H
#define ELEMENT_TYPE_T1916908453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTGUI/Element_Type
struct  Element_Type_t1916908453 
{
public:
	// System.Int32 LTGUI/Element_Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Element_Type_t1916908453, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENT_TYPE_T1916908453_H
#ifndef BINDINGFLAGS_T1175828095_H
#define BINDINGFLAGS_T1175828095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MarkerMetro.Unity.WinLegacy.Reflection.BindingFlags
struct  BindingFlags_t1175828095 
{
public:
	// System.Int32 MarkerMetro.Unity.WinLegacy.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t1175828095, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T1175828095_H
#ifndef TYPECODE_T3297862800_H
#define TYPECODE_T3297862800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MarkerMetro.Unity.WinLegacy.Reflection.TypeCode
struct  TypeCode_t3297862800 
{
public:
	// System.Int32 MarkerMetro.Unity.WinLegacy.Reflection.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t3297862800, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECODE_T3297862800_H
#ifndef ENDIAN_T4180634426_H
#define ENDIAN_T4180634426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SfxrSynth/Endian
struct  Endian_t4180634426 
{
public:
	// System.Int32 SfxrSynth/Endian::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Endian_t4180634426, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDIAN_T4180634426_H
#ifndef LEANTWEENTYPE_T619681147_H
#define LEANTWEENTYPE_T619681147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeanTweenType
struct  LeanTweenType_t619681147 
{
public:
	// System.Int32 LeanTweenType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LeanTweenType_t619681147, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEANTWEENTYPE_T619681147_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef LTDESCR_T2043587347_H
#define LTDESCR_T2043587347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTDescr
struct  LTDescr_t2043587347  : public RuntimeObject
{
public:
	// System.Boolean LTDescr::toggle
	bool ___toggle_0;
	// System.Boolean LTDescr::useEstimatedTime
	bool ___useEstimatedTime_1;
	// System.Boolean LTDescr::useFrames
	bool ___useFrames_2;
	// System.Boolean LTDescr::useManualTime
	bool ___useManualTime_3;
	// System.Boolean LTDescr::hasInitiliazed
	bool ___hasInitiliazed_4;
	// System.Boolean LTDescr::hasPhysics
	bool ___hasPhysics_5;
	// System.Boolean LTDescr::onCompleteOnRepeat
	bool ___onCompleteOnRepeat_6;
	// System.Boolean LTDescr::onCompleteOnStart
	bool ___onCompleteOnStart_7;
	// System.Single LTDescr::passed
	float ___passed_8;
	// System.Single LTDescr::delay
	float ___delay_9;
	// System.Single LTDescr::time
	float ___time_10;
	// System.Single LTDescr::lastVal
	float ___lastVal_11;
	// System.UInt32 LTDescr::_id
	uint32_t ____id_12;
	// System.Int32 LTDescr::loopCount
	int32_t ___loopCount_13;
	// System.UInt32 LTDescr::counter
	uint32_t ___counter_14;
	// System.Single LTDescr::direction
	float ___direction_15;
	// System.Single LTDescr::directionLast
	float ___directionLast_16;
	// System.Single LTDescr::overshoot
	float ___overshoot_17;
	// System.Single LTDescr::period
	float ___period_18;
	// System.Boolean LTDescr::destroyOnComplete
	bool ___destroyOnComplete_19;
	// UnityEngine.Transform LTDescr::trans
	Transform_t3600365921 * ___trans_20;
	// LTRect LTDescr::ltRect
	LTRect_t2883103509 * ___ltRect_21;
	// UnityEngine.Vector3 LTDescr::from
	Vector3_t3722313464  ___from_22;
	// UnityEngine.Vector3 LTDescr::to
	Vector3_t3722313464  ___to_23;
	// UnityEngine.Vector3 LTDescr::diff
	Vector3_t3722313464  ___diff_24;
	// UnityEngine.Vector3 LTDescr::point
	Vector3_t3722313464  ___point_25;
	// UnityEngine.Vector3 LTDescr::axis
	Vector3_t3722313464  ___axis_26;
	// UnityEngine.Quaternion LTDescr::origRotation
	Quaternion_t2301928331  ___origRotation_27;
	// LTBezierPath LTDescr::path
	LTBezierPath_t1817657086 * ___path_28;
	// LTSpline LTDescr::spline
	LTSpline_t2431306763 * ___spline_29;
	// TweenAction LTDescr::type
	int32_t ___type_30;
	// LeanTweenType LTDescr::tweenType
	int32_t ___tweenType_31;
	// UnityEngine.AnimationCurve LTDescr::animationCurve
	AnimationCurve_t3046754366 * ___animationCurve_32;
	// LeanTweenType LTDescr::loopType
	int32_t ___loopType_33;
	// System.Boolean LTDescr::hasUpdateCallback
	bool ___hasUpdateCallback_34;
	// System.Action`1<System.Single> LTDescr::onUpdateFloat
	Action_1_t1569734369 * ___onUpdateFloat_35;
	// System.Action`2<System.Single,System.Single> LTDescr::onUpdateFloatRatio
	Action_2_t3683108670 * ___onUpdateFloatRatio_36;
	// System.Action`2<System.Single,System.Object> LTDescr::onUpdateFloatObject
	Action_2_t1070980764 * ___onUpdateFloatObject_37;
	// System.Action`1<UnityEngine.Vector2> LTDescr::onUpdateVector2
	Action_1_t2328697118 * ___onUpdateVector2_38;
	// System.Action`1<UnityEngine.Vector3> LTDescr::onUpdateVector3
	Action_1_t3894781059 * ___onUpdateVector3_39;
	// System.Action`2<UnityEngine.Vector3,System.Object> LTDescr::onUpdateVector3Object
	Action_2_t1344820274 * ___onUpdateVector3Object_40;
	// System.Action`1<UnityEngine.Color> LTDescr::onUpdateColor
	Action_1_t2728153919 * ___onUpdateColor_41;
	// System.Action LTDescr::onComplete
	Action_t1264377477 * ___onComplete_42;
	// System.Action`1<System.Object> LTDescr::onCompleteObject
	Action_1_t3252573759 * ___onCompleteObject_43;
	// System.Object LTDescr::onCompleteParam
	RuntimeObject * ___onCompleteParam_44;
	// System.Object LTDescr::onUpdateParam
	RuntimeObject * ___onUpdateParam_45;
	// System.Action LTDescr::onStart
	Action_t1264377477 * ___onStart_46;
	// UnityEngine.RectTransform LTDescr::rectTransform
	RectTransform_t3704657025 * ___rectTransform_47;
	// UnityEngine.UI.Text LTDescr::uiText
	Text_t1901882714 * ___uiText_48;
	// UnityEngine.UI.Image LTDescr::uiImage
	Image_t2670269651 * ___uiImage_49;
	// UnityEngine.Sprite[] LTDescr::sprites
	SpriteU5BU5D_t2581906349* ___sprites_50;

public:
	inline static int32_t get_offset_of_toggle_0() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___toggle_0)); }
	inline bool get_toggle_0() const { return ___toggle_0; }
	inline bool* get_address_of_toggle_0() { return &___toggle_0; }
	inline void set_toggle_0(bool value)
	{
		___toggle_0 = value;
	}

	inline static int32_t get_offset_of_useEstimatedTime_1() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___useEstimatedTime_1)); }
	inline bool get_useEstimatedTime_1() const { return ___useEstimatedTime_1; }
	inline bool* get_address_of_useEstimatedTime_1() { return &___useEstimatedTime_1; }
	inline void set_useEstimatedTime_1(bool value)
	{
		___useEstimatedTime_1 = value;
	}

	inline static int32_t get_offset_of_useFrames_2() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___useFrames_2)); }
	inline bool get_useFrames_2() const { return ___useFrames_2; }
	inline bool* get_address_of_useFrames_2() { return &___useFrames_2; }
	inline void set_useFrames_2(bool value)
	{
		___useFrames_2 = value;
	}

	inline static int32_t get_offset_of_useManualTime_3() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___useManualTime_3)); }
	inline bool get_useManualTime_3() const { return ___useManualTime_3; }
	inline bool* get_address_of_useManualTime_3() { return &___useManualTime_3; }
	inline void set_useManualTime_3(bool value)
	{
		___useManualTime_3 = value;
	}

	inline static int32_t get_offset_of_hasInitiliazed_4() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___hasInitiliazed_4)); }
	inline bool get_hasInitiliazed_4() const { return ___hasInitiliazed_4; }
	inline bool* get_address_of_hasInitiliazed_4() { return &___hasInitiliazed_4; }
	inline void set_hasInitiliazed_4(bool value)
	{
		___hasInitiliazed_4 = value;
	}

	inline static int32_t get_offset_of_hasPhysics_5() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___hasPhysics_5)); }
	inline bool get_hasPhysics_5() const { return ___hasPhysics_5; }
	inline bool* get_address_of_hasPhysics_5() { return &___hasPhysics_5; }
	inline void set_hasPhysics_5(bool value)
	{
		___hasPhysics_5 = value;
	}

	inline static int32_t get_offset_of_onCompleteOnRepeat_6() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onCompleteOnRepeat_6)); }
	inline bool get_onCompleteOnRepeat_6() const { return ___onCompleteOnRepeat_6; }
	inline bool* get_address_of_onCompleteOnRepeat_6() { return &___onCompleteOnRepeat_6; }
	inline void set_onCompleteOnRepeat_6(bool value)
	{
		___onCompleteOnRepeat_6 = value;
	}

	inline static int32_t get_offset_of_onCompleteOnStart_7() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onCompleteOnStart_7)); }
	inline bool get_onCompleteOnStart_7() const { return ___onCompleteOnStart_7; }
	inline bool* get_address_of_onCompleteOnStart_7() { return &___onCompleteOnStart_7; }
	inline void set_onCompleteOnStart_7(bool value)
	{
		___onCompleteOnStart_7 = value;
	}

	inline static int32_t get_offset_of_passed_8() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___passed_8)); }
	inline float get_passed_8() const { return ___passed_8; }
	inline float* get_address_of_passed_8() { return &___passed_8; }
	inline void set_passed_8(float value)
	{
		___passed_8 = value;
	}

	inline static int32_t get_offset_of_delay_9() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___delay_9)); }
	inline float get_delay_9() const { return ___delay_9; }
	inline float* get_address_of_delay_9() { return &___delay_9; }
	inline void set_delay_9(float value)
	{
		___delay_9 = value;
	}

	inline static int32_t get_offset_of_time_10() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___time_10)); }
	inline float get_time_10() const { return ___time_10; }
	inline float* get_address_of_time_10() { return &___time_10; }
	inline void set_time_10(float value)
	{
		___time_10 = value;
	}

	inline static int32_t get_offset_of_lastVal_11() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___lastVal_11)); }
	inline float get_lastVal_11() const { return ___lastVal_11; }
	inline float* get_address_of_lastVal_11() { return &___lastVal_11; }
	inline void set_lastVal_11(float value)
	{
		___lastVal_11 = value;
	}

	inline static int32_t get_offset_of__id_12() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ____id_12)); }
	inline uint32_t get__id_12() const { return ____id_12; }
	inline uint32_t* get_address_of__id_12() { return &____id_12; }
	inline void set__id_12(uint32_t value)
	{
		____id_12 = value;
	}

	inline static int32_t get_offset_of_loopCount_13() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___loopCount_13)); }
	inline int32_t get_loopCount_13() const { return ___loopCount_13; }
	inline int32_t* get_address_of_loopCount_13() { return &___loopCount_13; }
	inline void set_loopCount_13(int32_t value)
	{
		___loopCount_13 = value;
	}

	inline static int32_t get_offset_of_counter_14() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___counter_14)); }
	inline uint32_t get_counter_14() const { return ___counter_14; }
	inline uint32_t* get_address_of_counter_14() { return &___counter_14; }
	inline void set_counter_14(uint32_t value)
	{
		___counter_14 = value;
	}

	inline static int32_t get_offset_of_direction_15() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___direction_15)); }
	inline float get_direction_15() const { return ___direction_15; }
	inline float* get_address_of_direction_15() { return &___direction_15; }
	inline void set_direction_15(float value)
	{
		___direction_15 = value;
	}

	inline static int32_t get_offset_of_directionLast_16() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___directionLast_16)); }
	inline float get_directionLast_16() const { return ___directionLast_16; }
	inline float* get_address_of_directionLast_16() { return &___directionLast_16; }
	inline void set_directionLast_16(float value)
	{
		___directionLast_16 = value;
	}

	inline static int32_t get_offset_of_overshoot_17() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___overshoot_17)); }
	inline float get_overshoot_17() const { return ___overshoot_17; }
	inline float* get_address_of_overshoot_17() { return &___overshoot_17; }
	inline void set_overshoot_17(float value)
	{
		___overshoot_17 = value;
	}

	inline static int32_t get_offset_of_period_18() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___period_18)); }
	inline float get_period_18() const { return ___period_18; }
	inline float* get_address_of_period_18() { return &___period_18; }
	inline void set_period_18(float value)
	{
		___period_18 = value;
	}

	inline static int32_t get_offset_of_destroyOnComplete_19() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___destroyOnComplete_19)); }
	inline bool get_destroyOnComplete_19() const { return ___destroyOnComplete_19; }
	inline bool* get_address_of_destroyOnComplete_19() { return &___destroyOnComplete_19; }
	inline void set_destroyOnComplete_19(bool value)
	{
		___destroyOnComplete_19 = value;
	}

	inline static int32_t get_offset_of_trans_20() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___trans_20)); }
	inline Transform_t3600365921 * get_trans_20() const { return ___trans_20; }
	inline Transform_t3600365921 ** get_address_of_trans_20() { return &___trans_20; }
	inline void set_trans_20(Transform_t3600365921 * value)
	{
		___trans_20 = value;
		Il2CppCodeGenWriteBarrier((&___trans_20), value);
	}

	inline static int32_t get_offset_of_ltRect_21() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___ltRect_21)); }
	inline LTRect_t2883103509 * get_ltRect_21() const { return ___ltRect_21; }
	inline LTRect_t2883103509 ** get_address_of_ltRect_21() { return &___ltRect_21; }
	inline void set_ltRect_21(LTRect_t2883103509 * value)
	{
		___ltRect_21 = value;
		Il2CppCodeGenWriteBarrier((&___ltRect_21), value);
	}

	inline static int32_t get_offset_of_from_22() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___from_22)); }
	inline Vector3_t3722313464  get_from_22() const { return ___from_22; }
	inline Vector3_t3722313464 * get_address_of_from_22() { return &___from_22; }
	inline void set_from_22(Vector3_t3722313464  value)
	{
		___from_22 = value;
	}

	inline static int32_t get_offset_of_to_23() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___to_23)); }
	inline Vector3_t3722313464  get_to_23() const { return ___to_23; }
	inline Vector3_t3722313464 * get_address_of_to_23() { return &___to_23; }
	inline void set_to_23(Vector3_t3722313464  value)
	{
		___to_23 = value;
	}

	inline static int32_t get_offset_of_diff_24() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___diff_24)); }
	inline Vector3_t3722313464  get_diff_24() const { return ___diff_24; }
	inline Vector3_t3722313464 * get_address_of_diff_24() { return &___diff_24; }
	inline void set_diff_24(Vector3_t3722313464  value)
	{
		___diff_24 = value;
	}

	inline static int32_t get_offset_of_point_25() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___point_25)); }
	inline Vector3_t3722313464  get_point_25() const { return ___point_25; }
	inline Vector3_t3722313464 * get_address_of_point_25() { return &___point_25; }
	inline void set_point_25(Vector3_t3722313464  value)
	{
		___point_25 = value;
	}

	inline static int32_t get_offset_of_axis_26() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___axis_26)); }
	inline Vector3_t3722313464  get_axis_26() const { return ___axis_26; }
	inline Vector3_t3722313464 * get_address_of_axis_26() { return &___axis_26; }
	inline void set_axis_26(Vector3_t3722313464  value)
	{
		___axis_26 = value;
	}

	inline static int32_t get_offset_of_origRotation_27() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___origRotation_27)); }
	inline Quaternion_t2301928331  get_origRotation_27() const { return ___origRotation_27; }
	inline Quaternion_t2301928331 * get_address_of_origRotation_27() { return &___origRotation_27; }
	inline void set_origRotation_27(Quaternion_t2301928331  value)
	{
		___origRotation_27 = value;
	}

	inline static int32_t get_offset_of_path_28() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___path_28)); }
	inline LTBezierPath_t1817657086 * get_path_28() const { return ___path_28; }
	inline LTBezierPath_t1817657086 ** get_address_of_path_28() { return &___path_28; }
	inline void set_path_28(LTBezierPath_t1817657086 * value)
	{
		___path_28 = value;
		Il2CppCodeGenWriteBarrier((&___path_28), value);
	}

	inline static int32_t get_offset_of_spline_29() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___spline_29)); }
	inline LTSpline_t2431306763 * get_spline_29() const { return ___spline_29; }
	inline LTSpline_t2431306763 ** get_address_of_spline_29() { return &___spline_29; }
	inline void set_spline_29(LTSpline_t2431306763 * value)
	{
		___spline_29 = value;
		Il2CppCodeGenWriteBarrier((&___spline_29), value);
	}

	inline static int32_t get_offset_of_type_30() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___type_30)); }
	inline int32_t get_type_30() const { return ___type_30; }
	inline int32_t* get_address_of_type_30() { return &___type_30; }
	inline void set_type_30(int32_t value)
	{
		___type_30 = value;
	}

	inline static int32_t get_offset_of_tweenType_31() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___tweenType_31)); }
	inline int32_t get_tweenType_31() const { return ___tweenType_31; }
	inline int32_t* get_address_of_tweenType_31() { return &___tweenType_31; }
	inline void set_tweenType_31(int32_t value)
	{
		___tweenType_31 = value;
	}

	inline static int32_t get_offset_of_animationCurve_32() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___animationCurve_32)); }
	inline AnimationCurve_t3046754366 * get_animationCurve_32() const { return ___animationCurve_32; }
	inline AnimationCurve_t3046754366 ** get_address_of_animationCurve_32() { return &___animationCurve_32; }
	inline void set_animationCurve_32(AnimationCurve_t3046754366 * value)
	{
		___animationCurve_32 = value;
		Il2CppCodeGenWriteBarrier((&___animationCurve_32), value);
	}

	inline static int32_t get_offset_of_loopType_33() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___loopType_33)); }
	inline int32_t get_loopType_33() const { return ___loopType_33; }
	inline int32_t* get_address_of_loopType_33() { return &___loopType_33; }
	inline void set_loopType_33(int32_t value)
	{
		___loopType_33 = value;
	}

	inline static int32_t get_offset_of_hasUpdateCallback_34() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___hasUpdateCallback_34)); }
	inline bool get_hasUpdateCallback_34() const { return ___hasUpdateCallback_34; }
	inline bool* get_address_of_hasUpdateCallback_34() { return &___hasUpdateCallback_34; }
	inline void set_hasUpdateCallback_34(bool value)
	{
		___hasUpdateCallback_34 = value;
	}

	inline static int32_t get_offset_of_onUpdateFloat_35() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onUpdateFloat_35)); }
	inline Action_1_t1569734369 * get_onUpdateFloat_35() const { return ___onUpdateFloat_35; }
	inline Action_1_t1569734369 ** get_address_of_onUpdateFloat_35() { return &___onUpdateFloat_35; }
	inline void set_onUpdateFloat_35(Action_1_t1569734369 * value)
	{
		___onUpdateFloat_35 = value;
		Il2CppCodeGenWriteBarrier((&___onUpdateFloat_35), value);
	}

	inline static int32_t get_offset_of_onUpdateFloatRatio_36() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onUpdateFloatRatio_36)); }
	inline Action_2_t3683108670 * get_onUpdateFloatRatio_36() const { return ___onUpdateFloatRatio_36; }
	inline Action_2_t3683108670 ** get_address_of_onUpdateFloatRatio_36() { return &___onUpdateFloatRatio_36; }
	inline void set_onUpdateFloatRatio_36(Action_2_t3683108670 * value)
	{
		___onUpdateFloatRatio_36 = value;
		Il2CppCodeGenWriteBarrier((&___onUpdateFloatRatio_36), value);
	}

	inline static int32_t get_offset_of_onUpdateFloatObject_37() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onUpdateFloatObject_37)); }
	inline Action_2_t1070980764 * get_onUpdateFloatObject_37() const { return ___onUpdateFloatObject_37; }
	inline Action_2_t1070980764 ** get_address_of_onUpdateFloatObject_37() { return &___onUpdateFloatObject_37; }
	inline void set_onUpdateFloatObject_37(Action_2_t1070980764 * value)
	{
		___onUpdateFloatObject_37 = value;
		Il2CppCodeGenWriteBarrier((&___onUpdateFloatObject_37), value);
	}

	inline static int32_t get_offset_of_onUpdateVector2_38() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onUpdateVector2_38)); }
	inline Action_1_t2328697118 * get_onUpdateVector2_38() const { return ___onUpdateVector2_38; }
	inline Action_1_t2328697118 ** get_address_of_onUpdateVector2_38() { return &___onUpdateVector2_38; }
	inline void set_onUpdateVector2_38(Action_1_t2328697118 * value)
	{
		___onUpdateVector2_38 = value;
		Il2CppCodeGenWriteBarrier((&___onUpdateVector2_38), value);
	}

	inline static int32_t get_offset_of_onUpdateVector3_39() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onUpdateVector3_39)); }
	inline Action_1_t3894781059 * get_onUpdateVector3_39() const { return ___onUpdateVector3_39; }
	inline Action_1_t3894781059 ** get_address_of_onUpdateVector3_39() { return &___onUpdateVector3_39; }
	inline void set_onUpdateVector3_39(Action_1_t3894781059 * value)
	{
		___onUpdateVector3_39 = value;
		Il2CppCodeGenWriteBarrier((&___onUpdateVector3_39), value);
	}

	inline static int32_t get_offset_of_onUpdateVector3Object_40() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onUpdateVector3Object_40)); }
	inline Action_2_t1344820274 * get_onUpdateVector3Object_40() const { return ___onUpdateVector3Object_40; }
	inline Action_2_t1344820274 ** get_address_of_onUpdateVector3Object_40() { return &___onUpdateVector3Object_40; }
	inline void set_onUpdateVector3Object_40(Action_2_t1344820274 * value)
	{
		___onUpdateVector3Object_40 = value;
		Il2CppCodeGenWriteBarrier((&___onUpdateVector3Object_40), value);
	}

	inline static int32_t get_offset_of_onUpdateColor_41() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onUpdateColor_41)); }
	inline Action_1_t2728153919 * get_onUpdateColor_41() const { return ___onUpdateColor_41; }
	inline Action_1_t2728153919 ** get_address_of_onUpdateColor_41() { return &___onUpdateColor_41; }
	inline void set_onUpdateColor_41(Action_1_t2728153919 * value)
	{
		___onUpdateColor_41 = value;
		Il2CppCodeGenWriteBarrier((&___onUpdateColor_41), value);
	}

	inline static int32_t get_offset_of_onComplete_42() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onComplete_42)); }
	inline Action_t1264377477 * get_onComplete_42() const { return ___onComplete_42; }
	inline Action_t1264377477 ** get_address_of_onComplete_42() { return &___onComplete_42; }
	inline void set_onComplete_42(Action_t1264377477 * value)
	{
		___onComplete_42 = value;
		Il2CppCodeGenWriteBarrier((&___onComplete_42), value);
	}

	inline static int32_t get_offset_of_onCompleteObject_43() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onCompleteObject_43)); }
	inline Action_1_t3252573759 * get_onCompleteObject_43() const { return ___onCompleteObject_43; }
	inline Action_1_t3252573759 ** get_address_of_onCompleteObject_43() { return &___onCompleteObject_43; }
	inline void set_onCompleteObject_43(Action_1_t3252573759 * value)
	{
		___onCompleteObject_43 = value;
		Il2CppCodeGenWriteBarrier((&___onCompleteObject_43), value);
	}

	inline static int32_t get_offset_of_onCompleteParam_44() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onCompleteParam_44)); }
	inline RuntimeObject * get_onCompleteParam_44() const { return ___onCompleteParam_44; }
	inline RuntimeObject ** get_address_of_onCompleteParam_44() { return &___onCompleteParam_44; }
	inline void set_onCompleteParam_44(RuntimeObject * value)
	{
		___onCompleteParam_44 = value;
		Il2CppCodeGenWriteBarrier((&___onCompleteParam_44), value);
	}

	inline static int32_t get_offset_of_onUpdateParam_45() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onUpdateParam_45)); }
	inline RuntimeObject * get_onUpdateParam_45() const { return ___onUpdateParam_45; }
	inline RuntimeObject ** get_address_of_onUpdateParam_45() { return &___onUpdateParam_45; }
	inline void set_onUpdateParam_45(RuntimeObject * value)
	{
		___onUpdateParam_45 = value;
		Il2CppCodeGenWriteBarrier((&___onUpdateParam_45), value);
	}

	inline static int32_t get_offset_of_onStart_46() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onStart_46)); }
	inline Action_t1264377477 * get_onStart_46() const { return ___onStart_46; }
	inline Action_t1264377477 ** get_address_of_onStart_46() { return &___onStart_46; }
	inline void set_onStart_46(Action_t1264377477 * value)
	{
		___onStart_46 = value;
		Il2CppCodeGenWriteBarrier((&___onStart_46), value);
	}

	inline static int32_t get_offset_of_rectTransform_47() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___rectTransform_47)); }
	inline RectTransform_t3704657025 * get_rectTransform_47() const { return ___rectTransform_47; }
	inline RectTransform_t3704657025 ** get_address_of_rectTransform_47() { return &___rectTransform_47; }
	inline void set_rectTransform_47(RectTransform_t3704657025 * value)
	{
		___rectTransform_47 = value;
		Il2CppCodeGenWriteBarrier((&___rectTransform_47), value);
	}

	inline static int32_t get_offset_of_uiText_48() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___uiText_48)); }
	inline Text_t1901882714 * get_uiText_48() const { return ___uiText_48; }
	inline Text_t1901882714 ** get_address_of_uiText_48() { return &___uiText_48; }
	inline void set_uiText_48(Text_t1901882714 * value)
	{
		___uiText_48 = value;
		Il2CppCodeGenWriteBarrier((&___uiText_48), value);
	}

	inline static int32_t get_offset_of_uiImage_49() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___uiImage_49)); }
	inline Image_t2670269651 * get_uiImage_49() const { return ___uiImage_49; }
	inline Image_t2670269651 ** get_address_of_uiImage_49() { return &___uiImage_49; }
	inline void set_uiImage_49(Image_t2670269651 * value)
	{
		___uiImage_49 = value;
		Il2CppCodeGenWriteBarrier((&___uiImage_49), value);
	}

	inline static int32_t get_offset_of_sprites_50() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___sprites_50)); }
	inline SpriteU5BU5D_t2581906349* get_sprites_50() const { return ___sprites_50; }
	inline SpriteU5BU5D_t2581906349** get_address_of_sprites_50() { return &___sprites_50; }
	inline void set_sprites_50(SpriteU5BU5D_t2581906349* value)
	{
		___sprites_50 = value;
		Il2CppCodeGenWriteBarrier((&___sprites_50), value);
	}
};

struct LTDescr_t2043587347_StaticFields
{
public:
	// System.UInt32 LTDescr::global_counter
	uint32_t ___global_counter_51;

public:
	inline static int32_t get_offset_of_global_counter_51() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347_StaticFields, ___global_counter_51)); }
	inline uint32_t get_global_counter_51() const { return ___global_counter_51; }
	inline uint32_t* get_address_of_global_counter_51() { return &___global_counter_51; }
	inline void set_global_counter_51(uint32_t value)
	{
		___global_counter_51 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTDESCR_T2043587347_H
#ifndef LTRECT_T2883103509_H
#define LTRECT_T2883103509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTRect
struct  LTRect_t2883103509  : public RuntimeObject
{
public:
	// UnityEngine.Rect LTRect::_rect
	Rect_t2360479859  ____rect_0;
	// System.Single LTRect::alpha
	float ___alpha_1;
	// System.Single LTRect::rotation
	float ___rotation_2;
	// UnityEngine.Vector2 LTRect::pivot
	Vector2_t2156229523  ___pivot_3;
	// UnityEngine.Vector2 LTRect::margin
	Vector2_t2156229523  ___margin_4;
	// UnityEngine.Rect LTRect::relativeRect
	Rect_t2360479859  ___relativeRect_5;
	// System.Boolean LTRect::rotateEnabled
	bool ___rotateEnabled_6;
	// System.Boolean LTRect::rotateFinished
	bool ___rotateFinished_7;
	// System.Boolean LTRect::alphaEnabled
	bool ___alphaEnabled_8;
	// System.String LTRect::labelStr
	String_t* ___labelStr_9;
	// LTGUI/Element_Type LTRect::type
	int32_t ___type_10;
	// UnityEngine.GUIStyle LTRect::style
	GUIStyle_t3956901511 * ___style_11;
	// System.Boolean LTRect::useColor
	bool ___useColor_12;
	// UnityEngine.Color LTRect::color
	Color_t2555686324  ___color_13;
	// System.Boolean LTRect::fontScaleToFit
	bool ___fontScaleToFit_14;
	// System.Boolean LTRect::useSimpleScale
	bool ___useSimpleScale_15;
	// System.Boolean LTRect::sizeByHeight
	bool ___sizeByHeight_16;
	// UnityEngine.Texture LTRect::texture
	Texture_t3661962703 * ___texture_17;
	// System.Int32 LTRect::_id
	int32_t ____id_18;
	// System.Int32 LTRect::counter
	int32_t ___counter_19;

public:
	inline static int32_t get_offset_of__rect_0() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ____rect_0)); }
	inline Rect_t2360479859  get__rect_0() const { return ____rect_0; }
	inline Rect_t2360479859 * get_address_of__rect_0() { return &____rect_0; }
	inline void set__rect_0(Rect_t2360479859  value)
	{
		____rect_0 = value;
	}

	inline static int32_t get_offset_of_alpha_1() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___alpha_1)); }
	inline float get_alpha_1() const { return ___alpha_1; }
	inline float* get_address_of_alpha_1() { return &___alpha_1; }
	inline void set_alpha_1(float value)
	{
		___alpha_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___rotation_2)); }
	inline float get_rotation_2() const { return ___rotation_2; }
	inline float* get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(float value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_pivot_3() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___pivot_3)); }
	inline Vector2_t2156229523  get_pivot_3() const { return ___pivot_3; }
	inline Vector2_t2156229523 * get_address_of_pivot_3() { return &___pivot_3; }
	inline void set_pivot_3(Vector2_t2156229523  value)
	{
		___pivot_3 = value;
	}

	inline static int32_t get_offset_of_margin_4() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___margin_4)); }
	inline Vector2_t2156229523  get_margin_4() const { return ___margin_4; }
	inline Vector2_t2156229523 * get_address_of_margin_4() { return &___margin_4; }
	inline void set_margin_4(Vector2_t2156229523  value)
	{
		___margin_4 = value;
	}

	inline static int32_t get_offset_of_relativeRect_5() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___relativeRect_5)); }
	inline Rect_t2360479859  get_relativeRect_5() const { return ___relativeRect_5; }
	inline Rect_t2360479859 * get_address_of_relativeRect_5() { return &___relativeRect_5; }
	inline void set_relativeRect_5(Rect_t2360479859  value)
	{
		___relativeRect_5 = value;
	}

	inline static int32_t get_offset_of_rotateEnabled_6() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___rotateEnabled_6)); }
	inline bool get_rotateEnabled_6() const { return ___rotateEnabled_6; }
	inline bool* get_address_of_rotateEnabled_6() { return &___rotateEnabled_6; }
	inline void set_rotateEnabled_6(bool value)
	{
		___rotateEnabled_6 = value;
	}

	inline static int32_t get_offset_of_rotateFinished_7() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___rotateFinished_7)); }
	inline bool get_rotateFinished_7() const { return ___rotateFinished_7; }
	inline bool* get_address_of_rotateFinished_7() { return &___rotateFinished_7; }
	inline void set_rotateFinished_7(bool value)
	{
		___rotateFinished_7 = value;
	}

	inline static int32_t get_offset_of_alphaEnabled_8() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___alphaEnabled_8)); }
	inline bool get_alphaEnabled_8() const { return ___alphaEnabled_8; }
	inline bool* get_address_of_alphaEnabled_8() { return &___alphaEnabled_8; }
	inline void set_alphaEnabled_8(bool value)
	{
		___alphaEnabled_8 = value;
	}

	inline static int32_t get_offset_of_labelStr_9() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___labelStr_9)); }
	inline String_t* get_labelStr_9() const { return ___labelStr_9; }
	inline String_t** get_address_of_labelStr_9() { return &___labelStr_9; }
	inline void set_labelStr_9(String_t* value)
	{
		___labelStr_9 = value;
		Il2CppCodeGenWriteBarrier((&___labelStr_9), value);
	}

	inline static int32_t get_offset_of_type_10() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___type_10)); }
	inline int32_t get_type_10() const { return ___type_10; }
	inline int32_t* get_address_of_type_10() { return &___type_10; }
	inline void set_type_10(int32_t value)
	{
		___type_10 = value;
	}

	inline static int32_t get_offset_of_style_11() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___style_11)); }
	inline GUIStyle_t3956901511 * get_style_11() const { return ___style_11; }
	inline GUIStyle_t3956901511 ** get_address_of_style_11() { return &___style_11; }
	inline void set_style_11(GUIStyle_t3956901511 * value)
	{
		___style_11 = value;
		Il2CppCodeGenWriteBarrier((&___style_11), value);
	}

	inline static int32_t get_offset_of_useColor_12() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___useColor_12)); }
	inline bool get_useColor_12() const { return ___useColor_12; }
	inline bool* get_address_of_useColor_12() { return &___useColor_12; }
	inline void set_useColor_12(bool value)
	{
		___useColor_12 = value;
	}

	inline static int32_t get_offset_of_color_13() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___color_13)); }
	inline Color_t2555686324  get_color_13() const { return ___color_13; }
	inline Color_t2555686324 * get_address_of_color_13() { return &___color_13; }
	inline void set_color_13(Color_t2555686324  value)
	{
		___color_13 = value;
	}

	inline static int32_t get_offset_of_fontScaleToFit_14() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___fontScaleToFit_14)); }
	inline bool get_fontScaleToFit_14() const { return ___fontScaleToFit_14; }
	inline bool* get_address_of_fontScaleToFit_14() { return &___fontScaleToFit_14; }
	inline void set_fontScaleToFit_14(bool value)
	{
		___fontScaleToFit_14 = value;
	}

	inline static int32_t get_offset_of_useSimpleScale_15() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___useSimpleScale_15)); }
	inline bool get_useSimpleScale_15() const { return ___useSimpleScale_15; }
	inline bool* get_address_of_useSimpleScale_15() { return &___useSimpleScale_15; }
	inline void set_useSimpleScale_15(bool value)
	{
		___useSimpleScale_15 = value;
	}

	inline static int32_t get_offset_of_sizeByHeight_16() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___sizeByHeight_16)); }
	inline bool get_sizeByHeight_16() const { return ___sizeByHeight_16; }
	inline bool* get_address_of_sizeByHeight_16() { return &___sizeByHeight_16; }
	inline void set_sizeByHeight_16(bool value)
	{
		___sizeByHeight_16 = value;
	}

	inline static int32_t get_offset_of_texture_17() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___texture_17)); }
	inline Texture_t3661962703 * get_texture_17() const { return ___texture_17; }
	inline Texture_t3661962703 ** get_address_of_texture_17() { return &___texture_17; }
	inline void set_texture_17(Texture_t3661962703 * value)
	{
		___texture_17 = value;
		Il2CppCodeGenWriteBarrier((&___texture_17), value);
	}

	inline static int32_t get_offset_of__id_18() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ____id_18)); }
	inline int32_t get__id_18() const { return ____id_18; }
	inline int32_t* get_address_of__id_18() { return &____id_18; }
	inline void set__id_18(int32_t value)
	{
		____id_18 = value;
	}

	inline static int32_t get_offset_of_counter_19() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___counter_19)); }
	inline int32_t get_counter_19() const { return ___counter_19; }
	inline int32_t* get_address_of_counter_19() { return &___counter_19; }
	inline void set_counter_19(int32_t value)
	{
		___counter_19 = value;
	}
};

struct LTRect_t2883103509_StaticFields
{
public:
	// System.Boolean LTRect::colorTouched
	bool ___colorTouched_20;

public:
	inline static int32_t get_offset_of_colorTouched_20() { return static_cast<int32_t>(offsetof(LTRect_t2883103509_StaticFields, ___colorTouched_20)); }
	inline bool get_colorTouched_20() const { return ___colorTouched_20; }
	inline bool* get_address_of_colorTouched_20() { return &___colorTouched_20; }
	inline void set_colorTouched_20(bool value)
	{
		___colorTouched_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTRECT_T2883103509_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SFXRCACHESURROGATE_T483364290_H
#define SFXRCACHESURROGATE_T483364290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SfxrCacheSurrogate
struct  SfxrCacheSurrogate_t483364290  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SFXRCACHESURROGATE_T483364290_H
#ifndef LEANTWEEN_T1803894739_H
#define LEANTWEEN_T1803894739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeanTween
struct  LeanTween_t1803894739  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct LeanTween_t1803894739_StaticFields
{
public:
	// System.Boolean LeanTween::throwErrors
	bool ___throwErrors_2;
	// System.Single LeanTween::tau
	float ___tau_3;
	// LTDescr[] LeanTween::tweens
	LTDescrU5BU5D_t547118914* ___tweens_4;
	// System.Int32[] LeanTween::tweensFinished
	Int32U5BU5D_t385246372* ___tweensFinished_5;
	// LTDescr LeanTween::tween
	LTDescr_t2043587347 * ___tween_6;
	// System.Int32 LeanTween::tweenMaxSearch
	int32_t ___tweenMaxSearch_7;
	// System.Int32 LeanTween::maxTweens
	int32_t ___maxTweens_8;
	// System.Int32 LeanTween::frameRendered
	int32_t ___frameRendered_9;
	// UnityEngine.GameObject LeanTween::_tweenEmpty
	GameObject_t1113636619 * ____tweenEmpty_10;
	// System.Single LeanTween::dtEstimated
	float ___dtEstimated_11;
	// System.Single LeanTween::dtManual
	float ___dtManual_12;
	// System.Single LeanTween::dt
	float ___dt_13;
	// System.Single LeanTween::dtActual
	float ___dtActual_14;
	// System.Int32 LeanTween::i
	int32_t ___i_15;
	// System.Int32 LeanTween::j
	int32_t ___j_16;
	// System.Int32 LeanTween::finishedCnt
	int32_t ___finishedCnt_17;
	// UnityEngine.AnimationCurve LeanTween::punch
	AnimationCurve_t3046754366 * ___punch_18;
	// UnityEngine.AnimationCurve LeanTween::shake
	AnimationCurve_t3046754366 * ___shake_19;
	// UnityEngine.Transform LeanTween::trans
	Transform_t3600365921 * ___trans_20;
	// System.Single LeanTween::timeTotal
	float ___timeTotal_21;
	// TweenAction LeanTween::tweenAction
	int32_t ___tweenAction_22;
	// System.Single LeanTween::ratioPassed
	float ___ratioPassed_23;
	// System.Single LeanTween::from
	float ___from_24;
	// System.Single LeanTween::val
	float ___val_25;
	// System.Boolean LeanTween::isTweenFinished
	bool ___isTweenFinished_26;
	// System.Int32 LeanTween::maxTweenReached
	int32_t ___maxTweenReached_27;
	// UnityEngine.Vector3 LeanTween::newVect
	Vector3_t3722313464  ___newVect_28;
	// UnityEngine.GameObject LeanTween::target
	GameObject_t1113636619 * ___target_29;
	// UnityEngine.GameObject LeanTween::customTarget
	GameObject_t1113636619 * ___customTarget_30;
	// System.Int32 LeanTween::startSearch
	int32_t ___startSearch_31;
	// LTDescr LeanTween::d
	LTDescr_t2043587347 * ___d_32;
	// System.Action`1<LTEvent>[] LeanTween::eventListeners
	Action_1U5BU5D_t1829790072* ___eventListeners_33;
	// UnityEngine.GameObject[] LeanTween::goListeners
	GameObjectU5BU5D_t3328599146* ___goListeners_34;
	// System.Int32 LeanTween::eventsMaxSearch
	int32_t ___eventsMaxSearch_35;
	// System.Int32 LeanTween::EVENTS_MAX
	int32_t ___EVENTS_MAX_36;
	// System.Int32 LeanTween::LISTENERS_MAX
	int32_t ___LISTENERS_MAX_37;
	// System.Int32 LeanTween::INIT_LISTENERS_MAX
	int32_t ___INIT_LISTENERS_MAX_38;

public:
	inline static int32_t get_offset_of_throwErrors_2() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___throwErrors_2)); }
	inline bool get_throwErrors_2() const { return ___throwErrors_2; }
	inline bool* get_address_of_throwErrors_2() { return &___throwErrors_2; }
	inline void set_throwErrors_2(bool value)
	{
		___throwErrors_2 = value;
	}

	inline static int32_t get_offset_of_tau_3() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___tau_3)); }
	inline float get_tau_3() const { return ___tau_3; }
	inline float* get_address_of_tau_3() { return &___tau_3; }
	inline void set_tau_3(float value)
	{
		___tau_3 = value;
	}

	inline static int32_t get_offset_of_tweens_4() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___tweens_4)); }
	inline LTDescrU5BU5D_t547118914* get_tweens_4() const { return ___tweens_4; }
	inline LTDescrU5BU5D_t547118914** get_address_of_tweens_4() { return &___tweens_4; }
	inline void set_tweens_4(LTDescrU5BU5D_t547118914* value)
	{
		___tweens_4 = value;
		Il2CppCodeGenWriteBarrier((&___tweens_4), value);
	}

	inline static int32_t get_offset_of_tweensFinished_5() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___tweensFinished_5)); }
	inline Int32U5BU5D_t385246372* get_tweensFinished_5() const { return ___tweensFinished_5; }
	inline Int32U5BU5D_t385246372** get_address_of_tweensFinished_5() { return &___tweensFinished_5; }
	inline void set_tweensFinished_5(Int32U5BU5D_t385246372* value)
	{
		___tweensFinished_5 = value;
		Il2CppCodeGenWriteBarrier((&___tweensFinished_5), value);
	}

	inline static int32_t get_offset_of_tween_6() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___tween_6)); }
	inline LTDescr_t2043587347 * get_tween_6() const { return ___tween_6; }
	inline LTDescr_t2043587347 ** get_address_of_tween_6() { return &___tween_6; }
	inline void set_tween_6(LTDescr_t2043587347 * value)
	{
		___tween_6 = value;
		Il2CppCodeGenWriteBarrier((&___tween_6), value);
	}

	inline static int32_t get_offset_of_tweenMaxSearch_7() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___tweenMaxSearch_7)); }
	inline int32_t get_tweenMaxSearch_7() const { return ___tweenMaxSearch_7; }
	inline int32_t* get_address_of_tweenMaxSearch_7() { return &___tweenMaxSearch_7; }
	inline void set_tweenMaxSearch_7(int32_t value)
	{
		___tweenMaxSearch_7 = value;
	}

	inline static int32_t get_offset_of_maxTweens_8() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___maxTweens_8)); }
	inline int32_t get_maxTweens_8() const { return ___maxTweens_8; }
	inline int32_t* get_address_of_maxTweens_8() { return &___maxTweens_8; }
	inline void set_maxTweens_8(int32_t value)
	{
		___maxTweens_8 = value;
	}

	inline static int32_t get_offset_of_frameRendered_9() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___frameRendered_9)); }
	inline int32_t get_frameRendered_9() const { return ___frameRendered_9; }
	inline int32_t* get_address_of_frameRendered_9() { return &___frameRendered_9; }
	inline void set_frameRendered_9(int32_t value)
	{
		___frameRendered_9 = value;
	}

	inline static int32_t get_offset_of__tweenEmpty_10() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ____tweenEmpty_10)); }
	inline GameObject_t1113636619 * get__tweenEmpty_10() const { return ____tweenEmpty_10; }
	inline GameObject_t1113636619 ** get_address_of__tweenEmpty_10() { return &____tweenEmpty_10; }
	inline void set__tweenEmpty_10(GameObject_t1113636619 * value)
	{
		____tweenEmpty_10 = value;
		Il2CppCodeGenWriteBarrier((&____tweenEmpty_10), value);
	}

	inline static int32_t get_offset_of_dtEstimated_11() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___dtEstimated_11)); }
	inline float get_dtEstimated_11() const { return ___dtEstimated_11; }
	inline float* get_address_of_dtEstimated_11() { return &___dtEstimated_11; }
	inline void set_dtEstimated_11(float value)
	{
		___dtEstimated_11 = value;
	}

	inline static int32_t get_offset_of_dtManual_12() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___dtManual_12)); }
	inline float get_dtManual_12() const { return ___dtManual_12; }
	inline float* get_address_of_dtManual_12() { return &___dtManual_12; }
	inline void set_dtManual_12(float value)
	{
		___dtManual_12 = value;
	}

	inline static int32_t get_offset_of_dt_13() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___dt_13)); }
	inline float get_dt_13() const { return ___dt_13; }
	inline float* get_address_of_dt_13() { return &___dt_13; }
	inline void set_dt_13(float value)
	{
		___dt_13 = value;
	}

	inline static int32_t get_offset_of_dtActual_14() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___dtActual_14)); }
	inline float get_dtActual_14() const { return ___dtActual_14; }
	inline float* get_address_of_dtActual_14() { return &___dtActual_14; }
	inline void set_dtActual_14(float value)
	{
		___dtActual_14 = value;
	}

	inline static int32_t get_offset_of_i_15() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___i_15)); }
	inline int32_t get_i_15() const { return ___i_15; }
	inline int32_t* get_address_of_i_15() { return &___i_15; }
	inline void set_i_15(int32_t value)
	{
		___i_15 = value;
	}

	inline static int32_t get_offset_of_j_16() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___j_16)); }
	inline int32_t get_j_16() const { return ___j_16; }
	inline int32_t* get_address_of_j_16() { return &___j_16; }
	inline void set_j_16(int32_t value)
	{
		___j_16 = value;
	}

	inline static int32_t get_offset_of_finishedCnt_17() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___finishedCnt_17)); }
	inline int32_t get_finishedCnt_17() const { return ___finishedCnt_17; }
	inline int32_t* get_address_of_finishedCnt_17() { return &___finishedCnt_17; }
	inline void set_finishedCnt_17(int32_t value)
	{
		___finishedCnt_17 = value;
	}

	inline static int32_t get_offset_of_punch_18() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___punch_18)); }
	inline AnimationCurve_t3046754366 * get_punch_18() const { return ___punch_18; }
	inline AnimationCurve_t3046754366 ** get_address_of_punch_18() { return &___punch_18; }
	inline void set_punch_18(AnimationCurve_t3046754366 * value)
	{
		___punch_18 = value;
		Il2CppCodeGenWriteBarrier((&___punch_18), value);
	}

	inline static int32_t get_offset_of_shake_19() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___shake_19)); }
	inline AnimationCurve_t3046754366 * get_shake_19() const { return ___shake_19; }
	inline AnimationCurve_t3046754366 ** get_address_of_shake_19() { return &___shake_19; }
	inline void set_shake_19(AnimationCurve_t3046754366 * value)
	{
		___shake_19 = value;
		Il2CppCodeGenWriteBarrier((&___shake_19), value);
	}

	inline static int32_t get_offset_of_trans_20() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___trans_20)); }
	inline Transform_t3600365921 * get_trans_20() const { return ___trans_20; }
	inline Transform_t3600365921 ** get_address_of_trans_20() { return &___trans_20; }
	inline void set_trans_20(Transform_t3600365921 * value)
	{
		___trans_20 = value;
		Il2CppCodeGenWriteBarrier((&___trans_20), value);
	}

	inline static int32_t get_offset_of_timeTotal_21() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___timeTotal_21)); }
	inline float get_timeTotal_21() const { return ___timeTotal_21; }
	inline float* get_address_of_timeTotal_21() { return &___timeTotal_21; }
	inline void set_timeTotal_21(float value)
	{
		___timeTotal_21 = value;
	}

	inline static int32_t get_offset_of_tweenAction_22() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___tweenAction_22)); }
	inline int32_t get_tweenAction_22() const { return ___tweenAction_22; }
	inline int32_t* get_address_of_tweenAction_22() { return &___tweenAction_22; }
	inline void set_tweenAction_22(int32_t value)
	{
		___tweenAction_22 = value;
	}

	inline static int32_t get_offset_of_ratioPassed_23() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___ratioPassed_23)); }
	inline float get_ratioPassed_23() const { return ___ratioPassed_23; }
	inline float* get_address_of_ratioPassed_23() { return &___ratioPassed_23; }
	inline void set_ratioPassed_23(float value)
	{
		___ratioPassed_23 = value;
	}

	inline static int32_t get_offset_of_from_24() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___from_24)); }
	inline float get_from_24() const { return ___from_24; }
	inline float* get_address_of_from_24() { return &___from_24; }
	inline void set_from_24(float value)
	{
		___from_24 = value;
	}

	inline static int32_t get_offset_of_val_25() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___val_25)); }
	inline float get_val_25() const { return ___val_25; }
	inline float* get_address_of_val_25() { return &___val_25; }
	inline void set_val_25(float value)
	{
		___val_25 = value;
	}

	inline static int32_t get_offset_of_isTweenFinished_26() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___isTweenFinished_26)); }
	inline bool get_isTweenFinished_26() const { return ___isTweenFinished_26; }
	inline bool* get_address_of_isTweenFinished_26() { return &___isTweenFinished_26; }
	inline void set_isTweenFinished_26(bool value)
	{
		___isTweenFinished_26 = value;
	}

	inline static int32_t get_offset_of_maxTweenReached_27() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___maxTweenReached_27)); }
	inline int32_t get_maxTweenReached_27() const { return ___maxTweenReached_27; }
	inline int32_t* get_address_of_maxTweenReached_27() { return &___maxTweenReached_27; }
	inline void set_maxTweenReached_27(int32_t value)
	{
		___maxTweenReached_27 = value;
	}

	inline static int32_t get_offset_of_newVect_28() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___newVect_28)); }
	inline Vector3_t3722313464  get_newVect_28() const { return ___newVect_28; }
	inline Vector3_t3722313464 * get_address_of_newVect_28() { return &___newVect_28; }
	inline void set_newVect_28(Vector3_t3722313464  value)
	{
		___newVect_28 = value;
	}

	inline static int32_t get_offset_of_target_29() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___target_29)); }
	inline GameObject_t1113636619 * get_target_29() const { return ___target_29; }
	inline GameObject_t1113636619 ** get_address_of_target_29() { return &___target_29; }
	inline void set_target_29(GameObject_t1113636619 * value)
	{
		___target_29 = value;
		Il2CppCodeGenWriteBarrier((&___target_29), value);
	}

	inline static int32_t get_offset_of_customTarget_30() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___customTarget_30)); }
	inline GameObject_t1113636619 * get_customTarget_30() const { return ___customTarget_30; }
	inline GameObject_t1113636619 ** get_address_of_customTarget_30() { return &___customTarget_30; }
	inline void set_customTarget_30(GameObject_t1113636619 * value)
	{
		___customTarget_30 = value;
		Il2CppCodeGenWriteBarrier((&___customTarget_30), value);
	}

	inline static int32_t get_offset_of_startSearch_31() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___startSearch_31)); }
	inline int32_t get_startSearch_31() const { return ___startSearch_31; }
	inline int32_t* get_address_of_startSearch_31() { return &___startSearch_31; }
	inline void set_startSearch_31(int32_t value)
	{
		___startSearch_31 = value;
	}

	inline static int32_t get_offset_of_d_32() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___d_32)); }
	inline LTDescr_t2043587347 * get_d_32() const { return ___d_32; }
	inline LTDescr_t2043587347 ** get_address_of_d_32() { return &___d_32; }
	inline void set_d_32(LTDescr_t2043587347 * value)
	{
		___d_32 = value;
		Il2CppCodeGenWriteBarrier((&___d_32), value);
	}

	inline static int32_t get_offset_of_eventListeners_33() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___eventListeners_33)); }
	inline Action_1U5BU5D_t1829790072* get_eventListeners_33() const { return ___eventListeners_33; }
	inline Action_1U5BU5D_t1829790072** get_address_of_eventListeners_33() { return &___eventListeners_33; }
	inline void set_eventListeners_33(Action_1U5BU5D_t1829790072* value)
	{
		___eventListeners_33 = value;
		Il2CppCodeGenWriteBarrier((&___eventListeners_33), value);
	}

	inline static int32_t get_offset_of_goListeners_34() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___goListeners_34)); }
	inline GameObjectU5BU5D_t3328599146* get_goListeners_34() const { return ___goListeners_34; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_goListeners_34() { return &___goListeners_34; }
	inline void set_goListeners_34(GameObjectU5BU5D_t3328599146* value)
	{
		___goListeners_34 = value;
		Il2CppCodeGenWriteBarrier((&___goListeners_34), value);
	}

	inline static int32_t get_offset_of_eventsMaxSearch_35() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___eventsMaxSearch_35)); }
	inline int32_t get_eventsMaxSearch_35() const { return ___eventsMaxSearch_35; }
	inline int32_t* get_address_of_eventsMaxSearch_35() { return &___eventsMaxSearch_35; }
	inline void set_eventsMaxSearch_35(int32_t value)
	{
		___eventsMaxSearch_35 = value;
	}

	inline static int32_t get_offset_of_EVENTS_MAX_36() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___EVENTS_MAX_36)); }
	inline int32_t get_EVENTS_MAX_36() const { return ___EVENTS_MAX_36; }
	inline int32_t* get_address_of_EVENTS_MAX_36() { return &___EVENTS_MAX_36; }
	inline void set_EVENTS_MAX_36(int32_t value)
	{
		___EVENTS_MAX_36 = value;
	}

	inline static int32_t get_offset_of_LISTENERS_MAX_37() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___LISTENERS_MAX_37)); }
	inline int32_t get_LISTENERS_MAX_37() const { return ___LISTENERS_MAX_37; }
	inline int32_t* get_address_of_LISTENERS_MAX_37() { return &___LISTENERS_MAX_37; }
	inline void set_LISTENERS_MAX_37(int32_t value)
	{
		___LISTENERS_MAX_37 = value;
	}

	inline static int32_t get_offset_of_INIT_LISTENERS_MAX_38() { return static_cast<int32_t>(offsetof(LeanTween_t1803894739_StaticFields, ___INIT_LISTENERS_MAX_38)); }
	inline int32_t get_INIT_LISTENERS_MAX_38() const { return ___INIT_LISTENERS_MAX_38; }
	inline int32_t* get_address_of_INIT_LISTENERS_MAX_38() { return &___INIT_LISTENERS_MAX_38; }
	inline void set_INIT_LISTENERS_MAX_38(int32_t value)
	{
		___INIT_LISTENERS_MAX_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEANTWEEN_T1803894739_H
#ifndef SCROLL_T1061044057_H
#define SCROLL_T1061044057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scroll
struct  Scroll_t1061044057  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.ScrollRect Scroll::myScrollRect
	ScrollRect_t4137855814 * ___myScrollRect_2;
	// UnityEngine.UI.Scrollbar Scroll::newScrollBar
	Scrollbar_t1494447233 * ___newScrollBar_3;

public:
	inline static int32_t get_offset_of_myScrollRect_2() { return static_cast<int32_t>(offsetof(Scroll_t1061044057, ___myScrollRect_2)); }
	inline ScrollRect_t4137855814 * get_myScrollRect_2() const { return ___myScrollRect_2; }
	inline ScrollRect_t4137855814 ** get_address_of_myScrollRect_2() { return &___myScrollRect_2; }
	inline void set_myScrollRect_2(ScrollRect_t4137855814 * value)
	{
		___myScrollRect_2 = value;
		Il2CppCodeGenWriteBarrier((&___myScrollRect_2), value);
	}

	inline static int32_t get_offset_of_newScrollBar_3() { return static_cast<int32_t>(offsetof(Scroll_t1061044057, ___newScrollBar_3)); }
	inline Scrollbar_t1494447233 * get_newScrollBar_3() const { return ___newScrollBar_3; }
	inline Scrollbar_t1494447233 ** get_address_of_newScrollBar_3() { return &___newScrollBar_3; }
	inline void set_newScrollBar_3(Scrollbar_t1494447233 * value)
	{
		___newScrollBar_3 = value;
		Il2CppCodeGenWriteBarrier((&___newScrollBar_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLL_T1061044057_H
#ifndef SPRITECOLORCHANGEFROMFUNGUSMOUSEEVENT_T3733448097_H
#define SPRITECOLORCHANGEFROMFUNGUSMOUSEEVENT_T3733448097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fungus.Examples.SpriteColorChangeFromFungusMouseEvent
struct  SpriteColorChangeFromFungusMouseEvent_t3733448097  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.SpriteRenderer Fungus.Examples.SpriteColorChangeFromFungusMouseEvent::rend
	SpriteRenderer_t3235626157 * ___rend_2;

public:
	inline static int32_t get_offset_of_rend_2() { return static_cast<int32_t>(offsetof(SpriteColorChangeFromFungusMouseEvent_t3733448097, ___rend_2)); }
	inline SpriteRenderer_t3235626157 * get_rend_2() const { return ___rend_2; }
	inline SpriteRenderer_t3235626157 ** get_address_of_rend_2() { return &___rend_2; }
	inline void set_rend_2(SpriteRenderer_t3235626157 * value)
	{
		___rend_2 = value;
		Il2CppCodeGenWriteBarrier((&___rend_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITECOLORCHANGEFROMFUNGUSMOUSEEVENT_T3733448097_H
#ifndef CUSTOMSCRIPT_T3239276942_H
#define CUSTOMSCRIPT_T3239276942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomScript
struct  CustomScript_t3239276942  : public MonoBehaviour_t3962482529
{
public:
	// System.String CustomScript::myString
	String_t* ___myString_2;
	// System.Single CustomScript::timeToWait
	float ___timeToWait_3;

public:
	inline static int32_t get_offset_of_myString_2() { return static_cast<int32_t>(offsetof(CustomScript_t3239276942, ___myString_2)); }
	inline String_t* get_myString_2() const { return ___myString_2; }
	inline String_t** get_address_of_myString_2() { return &___myString_2; }
	inline void set_myString_2(String_t* value)
	{
		___myString_2 = value;
		Il2CppCodeGenWriteBarrier((&___myString_2), value);
	}

	inline static int32_t get_offset_of_timeToWait_3() { return static_cast<int32_t>(offsetof(CustomScript_t3239276942, ___timeToWait_3)); }
	inline float get_timeToWait_3() const { return ___timeToWait_3; }
	inline float* get_address_of_timeToWait_3() { return &___timeToWait_3; }
	inline void set_timeToWait_3(float value)
	{
		___timeToWait_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMSCRIPT_T3239276942_H
#ifndef SFXRAUDIOPLAYER_T847691291_H
#define SFXRAUDIOPLAYER_T847691291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SfxrAudioPlayer
struct  SfxrAudioPlayer_t847691291  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean SfxrAudioPlayer::isDestroyed
	bool ___isDestroyed_2;
	// System.Boolean SfxrAudioPlayer::needsToDestroy
	bool ___needsToDestroy_3;
	// System.Boolean SfxrAudioPlayer::runningInEditMode
	bool ___runningInEditMode_4;
	// SfxrSynth SfxrAudioPlayer::sfxrSynth
	SfxrSynth_t2209560255 * ___sfxrSynth_5;

public:
	inline static int32_t get_offset_of_isDestroyed_2() { return static_cast<int32_t>(offsetof(SfxrAudioPlayer_t847691291, ___isDestroyed_2)); }
	inline bool get_isDestroyed_2() const { return ___isDestroyed_2; }
	inline bool* get_address_of_isDestroyed_2() { return &___isDestroyed_2; }
	inline void set_isDestroyed_2(bool value)
	{
		___isDestroyed_2 = value;
	}

	inline static int32_t get_offset_of_needsToDestroy_3() { return static_cast<int32_t>(offsetof(SfxrAudioPlayer_t847691291, ___needsToDestroy_3)); }
	inline bool get_needsToDestroy_3() const { return ___needsToDestroy_3; }
	inline bool* get_address_of_needsToDestroy_3() { return &___needsToDestroy_3; }
	inline void set_needsToDestroy_3(bool value)
	{
		___needsToDestroy_3 = value;
	}

	inline static int32_t get_offset_of_runningInEditMode_4() { return static_cast<int32_t>(offsetof(SfxrAudioPlayer_t847691291, ___runningInEditMode_4)); }
	inline bool get_runningInEditMode_4() const { return ___runningInEditMode_4; }
	inline bool* get_address_of_runningInEditMode_4() { return &___runningInEditMode_4; }
	inline void set_runningInEditMode_4(bool value)
	{
		___runningInEditMode_4 = value;
	}

	inline static int32_t get_offset_of_sfxrSynth_5() { return static_cast<int32_t>(offsetof(SfxrAudioPlayer_t847691291, ___sfxrSynth_5)); }
	inline SfxrSynth_t2209560255 * get_sfxrSynth_5() const { return ___sfxrSynth_5; }
	inline SfxrSynth_t2209560255 ** get_address_of_sfxrSynth_5() { return &___sfxrSynth_5; }
	inline void set_sfxrSynth_5(SfxrSynth_t2209560255 * value)
	{
		___sfxrSynth_5 = value;
		Il2CppCodeGenWriteBarrier((&___sfxrSynth_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SFXRAUDIOPLAYER_T847691291_H
#ifndef CHANGEINPUTRED_T1897694459_H
#define CHANGEINPUTRED_T1897694459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeInputRed
struct  ChangeInputRed_t1897694459  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANGEINPUTRED_T1897694459_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2800 = { sizeof (LeanTweenType_t619681147)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2800[40] = 
{
	LeanTweenType_t619681147::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2801 = { sizeof (LTDescr_t2043587347), -1, sizeof(LTDescr_t2043587347_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2801[52] = 
{
	LTDescr_t2043587347::get_offset_of_toggle_0(),
	LTDescr_t2043587347::get_offset_of_useEstimatedTime_1(),
	LTDescr_t2043587347::get_offset_of_useFrames_2(),
	LTDescr_t2043587347::get_offset_of_useManualTime_3(),
	LTDescr_t2043587347::get_offset_of_hasInitiliazed_4(),
	LTDescr_t2043587347::get_offset_of_hasPhysics_5(),
	LTDescr_t2043587347::get_offset_of_onCompleteOnRepeat_6(),
	LTDescr_t2043587347::get_offset_of_onCompleteOnStart_7(),
	LTDescr_t2043587347::get_offset_of_passed_8(),
	LTDescr_t2043587347::get_offset_of_delay_9(),
	LTDescr_t2043587347::get_offset_of_time_10(),
	LTDescr_t2043587347::get_offset_of_lastVal_11(),
	LTDescr_t2043587347::get_offset_of__id_12(),
	LTDescr_t2043587347::get_offset_of_loopCount_13(),
	LTDescr_t2043587347::get_offset_of_counter_14(),
	LTDescr_t2043587347::get_offset_of_direction_15(),
	LTDescr_t2043587347::get_offset_of_directionLast_16(),
	LTDescr_t2043587347::get_offset_of_overshoot_17(),
	LTDescr_t2043587347::get_offset_of_period_18(),
	LTDescr_t2043587347::get_offset_of_destroyOnComplete_19(),
	LTDescr_t2043587347::get_offset_of_trans_20(),
	LTDescr_t2043587347::get_offset_of_ltRect_21(),
	LTDescr_t2043587347::get_offset_of_from_22(),
	LTDescr_t2043587347::get_offset_of_to_23(),
	LTDescr_t2043587347::get_offset_of_diff_24(),
	LTDescr_t2043587347::get_offset_of_point_25(),
	LTDescr_t2043587347::get_offset_of_axis_26(),
	LTDescr_t2043587347::get_offset_of_origRotation_27(),
	LTDescr_t2043587347::get_offset_of_path_28(),
	LTDescr_t2043587347::get_offset_of_spline_29(),
	LTDescr_t2043587347::get_offset_of_type_30(),
	LTDescr_t2043587347::get_offset_of_tweenType_31(),
	LTDescr_t2043587347::get_offset_of_animationCurve_32(),
	LTDescr_t2043587347::get_offset_of_loopType_33(),
	LTDescr_t2043587347::get_offset_of_hasUpdateCallback_34(),
	LTDescr_t2043587347::get_offset_of_onUpdateFloat_35(),
	LTDescr_t2043587347::get_offset_of_onUpdateFloatRatio_36(),
	LTDescr_t2043587347::get_offset_of_onUpdateFloatObject_37(),
	LTDescr_t2043587347::get_offset_of_onUpdateVector2_38(),
	LTDescr_t2043587347::get_offset_of_onUpdateVector3_39(),
	LTDescr_t2043587347::get_offset_of_onUpdateVector3Object_40(),
	LTDescr_t2043587347::get_offset_of_onUpdateColor_41(),
	LTDescr_t2043587347::get_offset_of_onComplete_42(),
	LTDescr_t2043587347::get_offset_of_onCompleteObject_43(),
	LTDescr_t2043587347::get_offset_of_onCompleteParam_44(),
	LTDescr_t2043587347::get_offset_of_onUpdateParam_45(),
	LTDescr_t2043587347::get_offset_of_onStart_46(),
	LTDescr_t2043587347::get_offset_of_rectTransform_47(),
	LTDescr_t2043587347::get_offset_of_uiText_48(),
	LTDescr_t2043587347::get_offset_of_uiImage_49(),
	LTDescr_t2043587347::get_offset_of_sprites_50(),
	LTDescr_t2043587347_StaticFields::get_offset_of_global_counter_51(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2802 = { sizeof (LTUtility_t4124338238), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2803 = { sizeof (LeanTween_t1803894739), -1, sizeof(LeanTween_t1803894739_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2803[37] = 
{
	LeanTween_t1803894739_StaticFields::get_offset_of_throwErrors_2(),
	LeanTween_t1803894739_StaticFields::get_offset_of_tau_3(),
	LeanTween_t1803894739_StaticFields::get_offset_of_tweens_4(),
	LeanTween_t1803894739_StaticFields::get_offset_of_tweensFinished_5(),
	LeanTween_t1803894739_StaticFields::get_offset_of_tween_6(),
	LeanTween_t1803894739_StaticFields::get_offset_of_tweenMaxSearch_7(),
	LeanTween_t1803894739_StaticFields::get_offset_of_maxTweens_8(),
	LeanTween_t1803894739_StaticFields::get_offset_of_frameRendered_9(),
	LeanTween_t1803894739_StaticFields::get_offset_of__tweenEmpty_10(),
	LeanTween_t1803894739_StaticFields::get_offset_of_dtEstimated_11(),
	LeanTween_t1803894739_StaticFields::get_offset_of_dtManual_12(),
	LeanTween_t1803894739_StaticFields::get_offset_of_dt_13(),
	LeanTween_t1803894739_StaticFields::get_offset_of_dtActual_14(),
	LeanTween_t1803894739_StaticFields::get_offset_of_i_15(),
	LeanTween_t1803894739_StaticFields::get_offset_of_j_16(),
	LeanTween_t1803894739_StaticFields::get_offset_of_finishedCnt_17(),
	LeanTween_t1803894739_StaticFields::get_offset_of_punch_18(),
	LeanTween_t1803894739_StaticFields::get_offset_of_shake_19(),
	LeanTween_t1803894739_StaticFields::get_offset_of_trans_20(),
	LeanTween_t1803894739_StaticFields::get_offset_of_timeTotal_21(),
	LeanTween_t1803894739_StaticFields::get_offset_of_tweenAction_22(),
	LeanTween_t1803894739_StaticFields::get_offset_of_ratioPassed_23(),
	LeanTween_t1803894739_StaticFields::get_offset_of_from_24(),
	LeanTween_t1803894739_StaticFields::get_offset_of_val_25(),
	LeanTween_t1803894739_StaticFields::get_offset_of_isTweenFinished_26(),
	LeanTween_t1803894739_StaticFields::get_offset_of_maxTweenReached_27(),
	LeanTween_t1803894739_StaticFields::get_offset_of_newVect_28(),
	LeanTween_t1803894739_StaticFields::get_offset_of_target_29(),
	LeanTween_t1803894739_StaticFields::get_offset_of_customTarget_30(),
	LeanTween_t1803894739_StaticFields::get_offset_of_startSearch_31(),
	LeanTween_t1803894739_StaticFields::get_offset_of_d_32(),
	LeanTween_t1803894739_StaticFields::get_offset_of_eventListeners_33(),
	LeanTween_t1803894739_StaticFields::get_offset_of_goListeners_34(),
	LeanTween_t1803894739_StaticFields::get_offset_of_eventsMaxSearch_35(),
	LeanTween_t1803894739_StaticFields::get_offset_of_EVENTS_MAX_36(),
	LeanTween_t1803894739_StaticFields::get_offset_of_LISTENERS_MAX_37(),
	LeanTween_t1803894739_StaticFields::get_offset_of_INIT_LISTENERS_MAX_38(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2804 = { sizeof (LTBezier_t3079809627), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2804[7] = 
{
	LTBezier_t3079809627::get_offset_of_length_0(),
	LTBezier_t3079809627::get_offset_of_a_1(),
	LTBezier_t3079809627::get_offset_of_aa_2(),
	LTBezier_t3079809627::get_offset_of_bb_3(),
	LTBezier_t3079809627::get_offset_of_cc_4(),
	LTBezier_t3079809627::get_offset_of_len_5(),
	LTBezier_t3079809627::get_offset_of_arcLengths_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2805 = { sizeof (LTBezierPath_t1817657086), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2805[8] = 
{
	LTBezierPath_t1817657086::get_offset_of_pts_0(),
	LTBezierPath_t1817657086::get_offset_of_length_1(),
	LTBezierPath_t1817657086::get_offset_of_orientToPath_2(),
	LTBezierPath_t1817657086::get_offset_of_orientToPath2d_3(),
	LTBezierPath_t1817657086::get_offset_of_beziers_4(),
	LTBezierPath_t1817657086::get_offset_of_lengthRatio_5(),
	LTBezierPath_t1817657086::get_offset_of_currentBezier_6(),
	LTBezierPath_t1817657086::get_offset_of_previousBezier_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2806 = { sizeof (LTSpline_t2431306763), -1, sizeof(LTSpline_t2431306763_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2806[10] = 
{
	LTSpline_t2431306763_StaticFields::get_offset_of_DISTANCE_COUNT_0(),
	LTSpline_t2431306763_StaticFields::get_offset_of_SUBLINE_COUNT_1(),
	LTSpline_t2431306763::get_offset_of_pts_2(),
	LTSpline_t2431306763::get_offset_of_ptsAdj_3(),
	LTSpline_t2431306763::get_offset_of_ptsAdjLength_4(),
	LTSpline_t2431306763::get_offset_of_orientToPath_5(),
	LTSpline_t2431306763::get_offset_of_orientToPath2d_6(),
	LTSpline_t2431306763::get_offset_of_numSections_7(),
	LTSpline_t2431306763::get_offset_of_currPt_8(),
	LTSpline_t2431306763::get_offset_of_totalLength_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2807 = { sizeof (LTRect_t2883103509), -1, sizeof(LTRect_t2883103509_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2807[21] = 
{
	LTRect_t2883103509::get_offset_of__rect_0(),
	LTRect_t2883103509::get_offset_of_alpha_1(),
	LTRect_t2883103509::get_offset_of_rotation_2(),
	LTRect_t2883103509::get_offset_of_pivot_3(),
	LTRect_t2883103509::get_offset_of_margin_4(),
	LTRect_t2883103509::get_offset_of_relativeRect_5(),
	LTRect_t2883103509::get_offset_of_rotateEnabled_6(),
	LTRect_t2883103509::get_offset_of_rotateFinished_7(),
	LTRect_t2883103509::get_offset_of_alphaEnabled_8(),
	LTRect_t2883103509::get_offset_of_labelStr_9(),
	LTRect_t2883103509::get_offset_of_type_10(),
	LTRect_t2883103509::get_offset_of_style_11(),
	LTRect_t2883103509::get_offset_of_useColor_12(),
	LTRect_t2883103509::get_offset_of_color_13(),
	LTRect_t2883103509::get_offset_of_fontScaleToFit_14(),
	LTRect_t2883103509::get_offset_of_useSimpleScale_15(),
	LTRect_t2883103509::get_offset_of_sizeByHeight_16(),
	LTRect_t2883103509::get_offset_of_texture_17(),
	LTRect_t2883103509::get_offset_of__id_18(),
	LTRect_t2883103509::get_offset_of_counter_19(),
	LTRect_t2883103509_StaticFields::get_offset_of_colorTouched_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2808 = { sizeof (LTEvent_t176071434), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2808[2] = 
{
	LTEvent_t176071434::get_offset_of_id_0(),
	LTEvent_t176071434::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2809 = { sizeof (LTGUI_t651246514), -1, sizeof(LTGUI_t651246514_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2809[12] = 
{
	LTGUI_t651246514_StaticFields::get_offset_of_RECT_LEVELS_0(),
	LTGUI_t651246514_StaticFields::get_offset_of_RECTS_PER_LEVEL_1(),
	LTGUI_t651246514_StaticFields::get_offset_of_BUTTONS_MAX_2(),
	LTGUI_t651246514_StaticFields::get_offset_of_levels_3(),
	LTGUI_t651246514_StaticFields::get_offset_of_levelDepths_4(),
	LTGUI_t651246514_StaticFields::get_offset_of_buttons_5(),
	LTGUI_t651246514_StaticFields::get_offset_of_buttonLevels_6(),
	LTGUI_t651246514_StaticFields::get_offset_of_buttonLastFrame_7(),
	LTGUI_t651246514_StaticFields::get_offset_of_r_8(),
	LTGUI_t651246514_StaticFields::get_offset_of_color_9(),
	LTGUI_t651246514_StaticFields::get_offset_of_isGUIEnabled_10(),
	LTGUI_t651246514_StaticFields::get_offset_of_global_counter_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2810 = { sizeof (Element_Type_t1916908453)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2810[3] = 
{
	Element_Type_t1916908453::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2811 = { sizeof (BindingFlags_t1175828095)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2811[10] = 
{
	BindingFlags_t1175828095::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2812 = { sizeof (TypeCode_t3297862800)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2812[19] = 
{
	TypeCode_t3297862800::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2813 = { sizeof (ReflectionExtensions_t3785196976), -1, sizeof(ReflectionExtensions_t3785196976_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2813[1] = 
{
	ReflectionExtensions_t3785196976_StaticFields::get_offset_of__typeCodeTable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2814 = { sizeof (U3CGetPropertyU3Ec__AnonStorey0_t1586313928), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2814[1] = 
{
	U3CGetPropertyU3Ec__AnonStorey0_t1586313928::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2815 = { sizeof (SfxrAudioPlayer_t847691291), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2815[4] = 
{
	SfxrAudioPlayer_t847691291::get_offset_of_isDestroyed_2(),
	SfxrAudioPlayer_t847691291::get_offset_of_needsToDestroy_3(),
	SfxrAudioPlayer_t847691291::get_offset_of_runningInEditMode_4(),
	SfxrAudioPlayer_t847691291::get_offset_of_sfxrSynth_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2816 = { sizeof (SfxrCacheSurrogate_t483364290), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2817 = { sizeof (U3CCacheSoundAsynchronouslyU3Ec__Iterator0_t1250109478), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2817[6] = 
{
	U3CCacheSoundAsynchronouslyU3Ec__Iterator0_t1250109478::get_offset_of___synth_0(),
	U3CCacheSoundAsynchronouslyU3Ec__Iterator0_t1250109478::get_offset_of___callback_1(),
	U3CCacheSoundAsynchronouslyU3Ec__Iterator0_t1250109478::get_offset_of_U24this_2(),
	U3CCacheSoundAsynchronouslyU3Ec__Iterator0_t1250109478::get_offset_of_U24current_3(),
	U3CCacheSoundAsynchronouslyU3Ec__Iterator0_t1250109478::get_offset_of_U24disposing_4(),
	U3CCacheSoundAsynchronouslyU3Ec__Iterator0_t1250109478::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2818 = { sizeof (U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2818[8] = 
{
	U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161::get_offset_of___synth_0(),
	U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161::get_offset_of___mutationsNum_1(),
	U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161::get_offset_of___mutationAmount_2(),
	U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161::get_offset_of___callback_3(),
	U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161::get_offset_of_U24this_4(),
	U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161::get_offset_of_U24current_5(),
	U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161::get_offset_of_U24disposing_6(),
	U3CCacheMutationsAsynchronouslyU3Ec__Iterator1_t2158179161::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2819 = { sizeof (SfxrParams_t1047942071), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2819[33] = 
{
	SfxrParams_t1047942071::get_offset_of_paramsDirty_0(),
	SfxrParams_t1047942071::get_offset_of__waveType_1(),
	SfxrParams_t1047942071::get_offset_of__masterVolume_2(),
	SfxrParams_t1047942071::get_offset_of__attackTime_3(),
	SfxrParams_t1047942071::get_offset_of__sustainTime_4(),
	SfxrParams_t1047942071::get_offset_of__sustainPunch_5(),
	SfxrParams_t1047942071::get_offset_of__decayTime_6(),
	SfxrParams_t1047942071::get_offset_of__startFrequency_7(),
	SfxrParams_t1047942071::get_offset_of__minFrequency_8(),
	SfxrParams_t1047942071::get_offset_of__slide_9(),
	SfxrParams_t1047942071::get_offset_of__deltaSlide_10(),
	SfxrParams_t1047942071::get_offset_of__vibratoDepth_11(),
	SfxrParams_t1047942071::get_offset_of__vibratoSpeed_12(),
	SfxrParams_t1047942071::get_offset_of__changeAmount_13(),
	SfxrParams_t1047942071::get_offset_of__changeSpeed_14(),
	SfxrParams_t1047942071::get_offset_of__squareDuty_15(),
	SfxrParams_t1047942071::get_offset_of__dutySweep_16(),
	SfxrParams_t1047942071::get_offset_of__repeatSpeed_17(),
	SfxrParams_t1047942071::get_offset_of__phaserOffset_18(),
	SfxrParams_t1047942071::get_offset_of__phaserSweep_19(),
	SfxrParams_t1047942071::get_offset_of__lpFilterCutoff_20(),
	SfxrParams_t1047942071::get_offset_of__lpFilterCutoffSweep_21(),
	SfxrParams_t1047942071::get_offset_of__lpFilterResonance_22(),
	SfxrParams_t1047942071::get_offset_of__hpFilterCutoff_23(),
	SfxrParams_t1047942071::get_offset_of__hpFilterCutoffSweep_24(),
	SfxrParams_t1047942071::get_offset_of__changeRepeat_25(),
	SfxrParams_t1047942071::get_offset_of__changeAmount2_26(),
	SfxrParams_t1047942071::get_offset_of__changeSpeed2_27(),
	SfxrParams_t1047942071::get_offset_of__compressionAmount_28(),
	SfxrParams_t1047942071::get_offset_of__overtones_29(),
	SfxrParams_t1047942071::get_offset_of__overtoneFalloff_30(),
	SfxrParams_t1047942071::get_offset_of__bitCrush_31(),
	SfxrParams_t1047942071::get_offset_of__bitCrushSweep_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2820 = { sizeof (SfxrSynth_t2209560255), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2820[93] = 
{
	0,
	SfxrSynth_t2209560255::get_offset_of__params_1(),
	SfxrSynth_t2209560255::get_offset_of__gameObject_2(),
	SfxrSynth_t2209560255::get_offset_of__audioPlayer_3(),
	SfxrSynth_t2209560255::get_offset_of__parentTransform_4(),
	SfxrSynth_t2209560255::get_offset_of__mutation_5(),
	SfxrSynth_t2209560255::get_offset_of__cachedWave_6(),
	SfxrSynth_t2209560255::get_offset_of__cachedWavePos_7(),
	SfxrSynth_t2209560255::get_offset_of__cachingNormal_8(),
	SfxrSynth_t2209560255::get_offset_of__cachingMutation_9(),
	SfxrSynth_t2209560255::get_offset_of__cachedMutation_10(),
	SfxrSynth_t2209560255::get_offset_of__cachedMutationPos_11(),
	SfxrSynth_t2209560255::get_offset_of__cachedMutations_12(),
	SfxrSynth_t2209560255::get_offset_of__cachedMutationsNum_13(),
	SfxrSynth_t2209560255::get_offset_of__cachedMutationAmount_14(),
	SfxrSynth_t2209560255::get_offset_of__cachingAsync_15(),
	SfxrSynth_t2209560255::get_offset_of__waveData_16(),
	SfxrSynth_t2209560255::get_offset_of__waveDataPos_17(),
	SfxrSynth_t2209560255::get_offset_of__original_18(),
	SfxrSynth_t2209560255::get_offset_of__finished_19(),
	SfxrSynth_t2209560255::get_offset_of__masterVolume_20(),
	SfxrSynth_t2209560255::get_offset_of__waveType_21(),
	SfxrSynth_t2209560255::get_offset_of__envelopeVolume_22(),
	SfxrSynth_t2209560255::get_offset_of__envelopeStage_23(),
	SfxrSynth_t2209560255::get_offset_of__envelopeTime_24(),
	SfxrSynth_t2209560255::get_offset_of__envelopeLength_25(),
	SfxrSynth_t2209560255::get_offset_of__envelopeLength0_26(),
	SfxrSynth_t2209560255::get_offset_of__envelopeLength1_27(),
	SfxrSynth_t2209560255::get_offset_of__envelopeLength2_28(),
	SfxrSynth_t2209560255::get_offset_of__envelopeOverLength0_29(),
	SfxrSynth_t2209560255::get_offset_of__envelopeOverLength1_30(),
	SfxrSynth_t2209560255::get_offset_of__envelopeOverLength2_31(),
	SfxrSynth_t2209560255::get_offset_of__envelopeFullLength_32(),
	SfxrSynth_t2209560255::get_offset_of__sustainPunch_33(),
	SfxrSynth_t2209560255::get_offset_of__phase_34(),
	SfxrSynth_t2209560255::get_offset_of__pos_35(),
	SfxrSynth_t2209560255::get_offset_of__period_36(),
	SfxrSynth_t2209560255::get_offset_of__periodTemp_37(),
	SfxrSynth_t2209560255::get_offset_of__periodTempInt_38(),
	SfxrSynth_t2209560255::get_offset_of__maxPeriod_39(),
	SfxrSynth_t2209560255::get_offset_of__slide_40(),
	SfxrSynth_t2209560255::get_offset_of__deltaSlide_41(),
	SfxrSynth_t2209560255::get_offset_of__minFrequency_42(),
	SfxrSynth_t2209560255::get_offset_of__vibratoPhase_43(),
	SfxrSynth_t2209560255::get_offset_of__vibratoSpeed_44(),
	SfxrSynth_t2209560255::get_offset_of__vibratoAmplitude_45(),
	SfxrSynth_t2209560255::get_offset_of__changeAmount_46(),
	SfxrSynth_t2209560255::get_offset_of__changeTime_47(),
	SfxrSynth_t2209560255::get_offset_of__changeLimit_48(),
	SfxrSynth_t2209560255::get_offset_of__squareDuty_49(),
	SfxrSynth_t2209560255::get_offset_of__dutySweep_50(),
	SfxrSynth_t2209560255::get_offset_of__repeatTime_51(),
	SfxrSynth_t2209560255::get_offset_of__repeatLimit_52(),
	SfxrSynth_t2209560255::get_offset_of__phaser_53(),
	SfxrSynth_t2209560255::get_offset_of__phaserOffset_54(),
	SfxrSynth_t2209560255::get_offset_of__phaserDeltaOffset_55(),
	SfxrSynth_t2209560255::get_offset_of__phaserInt_56(),
	SfxrSynth_t2209560255::get_offset_of__phaserPos_57(),
	SfxrSynth_t2209560255::get_offset_of__phaserBuffer_58(),
	SfxrSynth_t2209560255::get_offset_of__filters_59(),
	SfxrSynth_t2209560255::get_offset_of__lpFilterPos_60(),
	SfxrSynth_t2209560255::get_offset_of__lpFilterOldPos_61(),
	SfxrSynth_t2209560255::get_offset_of__lpFilterDeltaPos_62(),
	SfxrSynth_t2209560255::get_offset_of__lpFilterCutoff_63(),
	SfxrSynth_t2209560255::get_offset_of__lpFilterDeltaCutoff_64(),
	SfxrSynth_t2209560255::get_offset_of__lpFilterDamping_65(),
	SfxrSynth_t2209560255::get_offset_of__lpFilterOn_66(),
	SfxrSynth_t2209560255::get_offset_of__hpFilterPos_67(),
	SfxrSynth_t2209560255::get_offset_of__hpFilterCutoff_68(),
	SfxrSynth_t2209560255::get_offset_of__hpFilterDeltaCutoff_69(),
	SfxrSynth_t2209560255::get_offset_of__changePeriod_70(),
	SfxrSynth_t2209560255::get_offset_of__changePeriodTime_71(),
	SfxrSynth_t2209560255::get_offset_of__changeReached_72(),
	SfxrSynth_t2209560255::get_offset_of__changeAmount2_73(),
	SfxrSynth_t2209560255::get_offset_of__changeTime2_74(),
	SfxrSynth_t2209560255::get_offset_of__changeLimit2_75(),
	SfxrSynth_t2209560255::get_offset_of__changeReached2_76(),
	SfxrSynth_t2209560255::get_offset_of__overtones_77(),
	SfxrSynth_t2209560255::get_offset_of__overtoneFalloff_78(),
	SfxrSynth_t2209560255::get_offset_of__bitcrushFreq_79(),
	SfxrSynth_t2209560255::get_offset_of__bitcrushFreqSweep_80(),
	SfxrSynth_t2209560255::get_offset_of__bitcrushPhase_81(),
	SfxrSynth_t2209560255::get_offset_of__bitcrushLast_82(),
	SfxrSynth_t2209560255::get_offset_of__compressionFactor_83(),
	SfxrSynth_t2209560255::get_offset_of__noiseBuffer_84(),
	SfxrSynth_t2209560255::get_offset_of__pinkNoiseBuffer_85(),
	SfxrSynth_t2209560255::get_offset_of__pinkNumber_86(),
	SfxrSynth_t2209560255::get_offset_of__loResNoiseBuffer_87(),
	SfxrSynth_t2209560255::get_offset_of__superSample_88(),
	SfxrSynth_t2209560255::get_offset_of__sample_89(),
	SfxrSynth_t2209560255::get_offset_of__sample2_90(),
	SfxrSynth_t2209560255::get_offset_of_amp_91(),
	SfxrSynth_t2209560255::get_offset_of_randomGenerator_92(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2821 = { sizeof (Endian_t4180634426)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2821[3] = 
{
	Endian_t4180634426::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2822 = { sizeof (PinkNumber_t4016881177), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2822[10] = 
{
	PinkNumber_t4016881177::get_offset_of_max_key_0(),
	PinkNumber_t4016881177::get_offset_of_key_1(),
	PinkNumber_t4016881177::get_offset_of_white_values_2(),
	PinkNumber_t4016881177::get_offset_of_range_3(),
	PinkNumber_t4016881177::get_offset_of_randomGenerator_4(),
	PinkNumber_t4016881177::get_offset_of_rangeBy5_5(),
	PinkNumber_t4016881177::get_offset_of_last_key_6(),
	PinkNumber_t4016881177::get_offset_of_sum_7(),
	PinkNumber_t4016881177::get_offset_of_diff_8(),
	PinkNumber_t4016881177::get_offset_of_i_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2823 = { sizeof (ChangeInputRed_t1897694459), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2824 = { sizeof (CustomScript_t3239276942), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2824[2] = 
{
	CustomScript_t3239276942::get_offset_of_myString_2(),
	CustomScript_t3239276942::get_offset_of_timeToWait_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2825 = { sizeof (U3CMyCoroutineU3Ec__Iterator0_t2782165003), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2825[4] = 
{
	U3CMyCoroutineU3Ec__Iterator0_t2782165003::get_offset_of_U24this_0(),
	U3CMyCoroutineU3Ec__Iterator0_t2782165003::get_offset_of_U24current_1(),
	U3CMyCoroutineU3Ec__Iterator0_t2782165003::get_offset_of_U24disposing_2(),
	U3CMyCoroutineU3Ec__Iterator0_t2782165003::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2826 = { sizeof (SpriteColorChangeFromFungusMouseEvent_t3733448097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2826[1] = 
{
	SpriteColorChangeFromFungusMouseEvent_t3733448097::get_offset_of_rend_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2827 = { sizeof (Scroll_t1061044057), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2827[2] = 
{
	Scroll_t1061044057::get_offset_of_myScrollRect_2(),
	Scroll_t1061044057::get_offset_of_newScrollBar_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2828 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255366), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2828[6] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2DCAD8623838274740D6497489F547CE972C42A942_0(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2D92DC78AF759B423C04558A0433EDDBBA32C620F2_1(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2DC5F731B7FA1D7871AC062CB4A4C43BE4516A1184_2(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2DECA70CAEBAA14765D9F29EEB12583CD7E3E7A08B_3(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2D87137E630C3837BC71D4E9D0A4EB1E7CF85C9909_4(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2DCC30EB56895403A5A7C395936819CAA1EE0F5446_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2829 = { sizeof (U24ArrayTypeU3D20_t1702832645)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D20_t1702832645 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2830 = { sizeof (U24ArrayTypeU3D8_t3242499063)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D8_t3242499063 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2831 = { sizeof (U24ArrayTypeU3D12_t2488454197)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D12_t2488454197 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2832 = { sizeof (U24ArrayTypeU3D128_t4235014459)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D128_t4235014459 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2833 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2833[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2834 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2834[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2835 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2835[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2836 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2836[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2837 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2837[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2838 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2838[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2839 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2839[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2840 = { sizeof (U3CU3E__AnonType7_t4196320275), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2841 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2841[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2842 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2842[2] = 
{
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
