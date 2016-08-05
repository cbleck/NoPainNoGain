#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

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
	// System.Single BeatSynchronizer::bpm
	float ___bpm_2;
	// System.Single BeatSynchronizer::startDelay
	float ___startDelay_3;

public:
	inline static int32_t get_offset_of_bpm_2() { return static_cast<int32_t>(offsetof(BeatSynchronizer_t4126494744, ___bpm_2)); }
	inline float get_bpm_2() const { return ___bpm_2; }
	inline float* get_address_of_bpm_2() { return &___bpm_2; }
	inline void set_bpm_2(float value)
	{
		___bpm_2 = value;
	}

	inline static int32_t get_offset_of_startDelay_3() { return static_cast<int32_t>(offsetof(BeatSynchronizer_t4126494744, ___startDelay_3)); }
	inline float get_startDelay_3() const { return ___startDelay_3; }
	inline float* get_address_of_startDelay_3() { return &___startDelay_3; }
	inline void set_startDelay_3(float value)
	{
		___startDelay_3 = value;
	}
};

struct BeatSynchronizer_t4126494744_StaticFields
{
public:
	// BeatSynchronizer/AudioStartAction BeatSynchronizer::OnAudioStart
	AudioStartAction_t1987195065 * ___OnAudioStart_4;

public:
	inline static int32_t get_offset_of_OnAudioStart_4() { return static_cast<int32_t>(offsetof(BeatSynchronizer_t4126494744_StaticFields, ___OnAudioStart_4)); }
	inline AudioStartAction_t1987195065 * get_OnAudioStart_4() const { return ___OnAudioStart_4; }
	inline AudioStartAction_t1987195065 ** get_address_of_OnAudioStart_4() { return &___OnAudioStart_4; }
	inline void set_OnAudioStart_4(AudioStartAction_t1987195065 * value)
	{
		___OnAudioStart_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnAudioStart_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
