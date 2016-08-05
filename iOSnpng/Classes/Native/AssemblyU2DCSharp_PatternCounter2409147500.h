#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SynchronizerData.BeatValue[]
struct BeatValueU5BU5D_t3674776784;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PatternCounter
struct  PatternCounter_t2409147500  : public MonoBehaviour_t667441552
{
public:
	// SynchronizerData.BeatValue[] PatternCounter::beatValues
	BeatValueU5BU5D_t3674776784* ___beatValues_2;
	// System.Int32 PatternCounter::beatScalar
	int32_t ___beatScalar_3;
	// System.Single PatternCounter::loopTime
	float ___loopTime_4;
	// UnityEngine.AudioSource PatternCounter::audioSource
	AudioSource_t1740077639 * ___audioSource_5;
	// UnityEngine.GameObject[] PatternCounter::observers
	GameObjectU5BU5D_t2662109048* ___observers_6;
	// System.Single PatternCounter::nextBeatSample
	float ___nextBeatSample_7;
	// System.Single[] PatternCounter::samplePeriods
	SingleU5BU5D_t2316563989* ___samplePeriods_8;
	// System.Int32 PatternCounter::sequenceIndex
	int32_t ___sequenceIndex_9;
	// System.Single PatternCounter::currentSample
	float ___currentSample_10;

public:
	inline static int32_t get_offset_of_beatValues_2() { return static_cast<int32_t>(offsetof(PatternCounter_t2409147500, ___beatValues_2)); }
	inline BeatValueU5BU5D_t3674776784* get_beatValues_2() const { return ___beatValues_2; }
	inline BeatValueU5BU5D_t3674776784** get_address_of_beatValues_2() { return &___beatValues_2; }
	inline void set_beatValues_2(BeatValueU5BU5D_t3674776784* value)
	{
		___beatValues_2 = value;
		Il2CppCodeGenWriteBarrier(&___beatValues_2, value);
	}

	inline static int32_t get_offset_of_beatScalar_3() { return static_cast<int32_t>(offsetof(PatternCounter_t2409147500, ___beatScalar_3)); }
	inline int32_t get_beatScalar_3() const { return ___beatScalar_3; }
	inline int32_t* get_address_of_beatScalar_3() { return &___beatScalar_3; }
	inline void set_beatScalar_3(int32_t value)
	{
		___beatScalar_3 = value;
	}

	inline static int32_t get_offset_of_loopTime_4() { return static_cast<int32_t>(offsetof(PatternCounter_t2409147500, ___loopTime_4)); }
	inline float get_loopTime_4() const { return ___loopTime_4; }
	inline float* get_address_of_loopTime_4() { return &___loopTime_4; }
	inline void set_loopTime_4(float value)
	{
		___loopTime_4 = value;
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(PatternCounter_t2409147500, ___audioSource_5)); }
	inline AudioSource_t1740077639 * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_t1740077639 ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_t1740077639 * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_5, value);
	}

	inline static int32_t get_offset_of_observers_6() { return static_cast<int32_t>(offsetof(PatternCounter_t2409147500, ___observers_6)); }
	inline GameObjectU5BU5D_t2662109048* get_observers_6() const { return ___observers_6; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_observers_6() { return &___observers_6; }
	inline void set_observers_6(GameObjectU5BU5D_t2662109048* value)
	{
		___observers_6 = value;
		Il2CppCodeGenWriteBarrier(&___observers_6, value);
	}

	inline static int32_t get_offset_of_nextBeatSample_7() { return static_cast<int32_t>(offsetof(PatternCounter_t2409147500, ___nextBeatSample_7)); }
	inline float get_nextBeatSample_7() const { return ___nextBeatSample_7; }
	inline float* get_address_of_nextBeatSample_7() { return &___nextBeatSample_7; }
	inline void set_nextBeatSample_7(float value)
	{
		___nextBeatSample_7 = value;
	}

	inline static int32_t get_offset_of_samplePeriods_8() { return static_cast<int32_t>(offsetof(PatternCounter_t2409147500, ___samplePeriods_8)); }
	inline SingleU5BU5D_t2316563989* get_samplePeriods_8() const { return ___samplePeriods_8; }
	inline SingleU5BU5D_t2316563989** get_address_of_samplePeriods_8() { return &___samplePeriods_8; }
	inline void set_samplePeriods_8(SingleU5BU5D_t2316563989* value)
	{
		___samplePeriods_8 = value;
		Il2CppCodeGenWriteBarrier(&___samplePeriods_8, value);
	}

	inline static int32_t get_offset_of_sequenceIndex_9() { return static_cast<int32_t>(offsetof(PatternCounter_t2409147500, ___sequenceIndex_9)); }
	inline int32_t get_sequenceIndex_9() const { return ___sequenceIndex_9; }
	inline int32_t* get_address_of_sequenceIndex_9() { return &___sequenceIndex_9; }
	inline void set_sequenceIndex_9(int32_t value)
	{
		___sequenceIndex_9 = value;
	}

	inline static int32_t get_offset_of_currentSample_10() { return static_cast<int32_t>(offsetof(PatternCounter_t2409147500, ___currentSample_10)); }
	inline float get_currentSample_10() const { return ___currentSample_10; }
	inline float* get_address_of_currentSample_10() { return &___currentSample_10; }
	inline void set_currentSample_10(float value)
	{
		___currentSample_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
