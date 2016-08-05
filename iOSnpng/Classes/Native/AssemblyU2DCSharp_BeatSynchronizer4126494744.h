#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// BeatSynchronizer/AudioStartAction
struct AudioStartAction_t1987195065;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BeatSynchronizer
struct  BeatSynchronizer_t4126494744  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject BeatSynchronizer::playerCharacter
	GameObject_t3674682005 * ___playerCharacter_2;
	// System.Single BeatSynchronizer::bpm
	float ___bpm_3;
	// System.Single BeatSynchronizer::startDelay
	float ___startDelay_4;
	// System.Double BeatSynchronizer::initTime
	double ___initTime_5;

public:
	inline static int32_t get_offset_of_playerCharacter_2() { return static_cast<int32_t>(offsetof(BeatSynchronizer_t4126494744, ___playerCharacter_2)); }
	inline GameObject_t3674682005 * get_playerCharacter_2() const { return ___playerCharacter_2; }
	inline GameObject_t3674682005 ** get_address_of_playerCharacter_2() { return &___playerCharacter_2; }
	inline void set_playerCharacter_2(GameObject_t3674682005 * value)
	{
		___playerCharacter_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerCharacter_2, value);
	}

	inline static int32_t get_offset_of_bpm_3() { return static_cast<int32_t>(offsetof(BeatSynchronizer_t4126494744, ___bpm_3)); }
	inline float get_bpm_3() const { return ___bpm_3; }
	inline float* get_address_of_bpm_3() { return &___bpm_3; }
	inline void set_bpm_3(float value)
	{
		___bpm_3 = value;
	}

	inline static int32_t get_offset_of_startDelay_4() { return static_cast<int32_t>(offsetof(BeatSynchronizer_t4126494744, ___startDelay_4)); }
	inline float get_startDelay_4() const { return ___startDelay_4; }
	inline float* get_address_of_startDelay_4() { return &___startDelay_4; }
	inline void set_startDelay_4(float value)
	{
		___startDelay_4 = value;
	}

	inline static int32_t get_offset_of_initTime_5() { return static_cast<int32_t>(offsetof(BeatSynchronizer_t4126494744, ___initTime_5)); }
	inline double get_initTime_5() const { return ___initTime_5; }
	inline double* get_address_of_initTime_5() { return &___initTime_5; }
	inline void set_initTime_5(double value)
	{
		___initTime_5 = value;
	}
};

struct BeatSynchronizer_t4126494744_StaticFields
{
public:
	// BeatSynchronizer/AudioStartAction BeatSynchronizer::OnAudioStart
	AudioStartAction_t1987195065 * ___OnAudioStart_6;

public:
	inline static int32_t get_offset_of_OnAudioStart_6() { return static_cast<int32_t>(offsetof(BeatSynchronizer_t4126494744_StaticFields, ___OnAudioStart_6)); }
	inline AudioStartAction_t1987195065 * get_OnAudioStart_6() const { return ___OnAudioStart_6; }
	inline AudioStartAction_t1987195065 ** get_address_of_OnAudioStart_6() { return &___OnAudioStart_6; }
	inline void set_OnAudioStart_6(AudioStartAction_t1987195065 * value)
	{
		___OnAudioStart_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnAudioStart_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
