#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_SynchronizerData_BeatValue234763805.h"
#include "AssemblyU2DCSharp_SynchronizerData_BeatType1309133334.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BeatCounter
struct  BeatCounter_t2687895878  : public MonoBehaviour_t667441552
{
public:
	// SynchronizerData.BeatValue BeatCounter::beatValue
	int32_t ___beatValue_2;
	// System.Int32 BeatCounter::beatScalar
	int32_t ___beatScalar_3;
	// SynchronizerData.BeatValue BeatCounter::beatOffset
	int32_t ___beatOffset_4;
	// System.Boolean BeatCounter::negativeBeatOffset
	bool ___negativeBeatOffset_5;
	// SynchronizerData.BeatType BeatCounter::beatType
	int32_t ___beatType_6;
	// System.Single BeatCounter::loopTime
	float ___loopTime_7;
	// UnityEngine.AudioSource BeatCounter::audioSource
	AudioSource_t1740077639 * ___audioSource_8;
	// UnityEngine.GameObject[] BeatCounter::observers
	GameObjectU5BU5D_t2662109048* ___observers_9;
	// System.Single BeatCounter::nextBeatSample
	float ___nextBeatSample_10;
	// System.Single BeatCounter::samplePeriod
	float ___samplePeriod_11;
	// System.Single BeatCounter::sampleOffset
	float ___sampleOffset_12;
	// System.Single BeatCounter::currentSample
	float ___currentSample_13;

public:
	inline static int32_t get_offset_of_beatValue_2() { return static_cast<int32_t>(offsetof(BeatCounter_t2687895878, ___beatValue_2)); }
	inline int32_t get_beatValue_2() const { return ___beatValue_2; }
	inline int32_t* get_address_of_beatValue_2() { return &___beatValue_2; }
	inline void set_beatValue_2(int32_t value)
	{
		___beatValue_2 = value;
	}

	inline static int32_t get_offset_of_beatScalar_3() { return static_cast<int32_t>(offsetof(BeatCounter_t2687895878, ___beatScalar_3)); }
	inline int32_t get_beatScalar_3() const { return ___beatScalar_3; }
	inline int32_t* get_address_of_beatScalar_3() { return &___beatScalar_3; }
	inline void set_beatScalar_3(int32_t value)
	{
		___beatScalar_3 = value;
	}

	inline static int32_t get_offset_of_beatOffset_4() { return static_cast<int32_t>(offsetof(BeatCounter_t2687895878, ___beatOffset_4)); }
	inline int32_t get_beatOffset_4() const { return ___beatOffset_4; }
	inline int32_t* get_address_of_beatOffset_4() { return &___beatOffset_4; }
	inline void set_beatOffset_4(int32_t value)
	{
		___beatOffset_4 = value;
	}

	inline static int32_t get_offset_of_negativeBeatOffset_5() { return static_cast<int32_t>(offsetof(BeatCounter_t2687895878, ___negativeBeatOffset_5)); }
	inline bool get_negativeBeatOffset_5() const { return ___negativeBeatOffset_5; }
	inline bool* get_address_of_negativeBeatOffset_5() { return &___negativeBeatOffset_5; }
	inline void set_negativeBeatOffset_5(bool value)
	{
		___negativeBeatOffset_5 = value;
	}

	inline static int32_t get_offset_of_beatType_6() { return static_cast<int32_t>(offsetof(BeatCounter_t2687895878, ___beatType_6)); }
	inline int32_t get_beatType_6() const { return ___beatType_6; }
	inline int32_t* get_address_of_beatType_6() { return &___beatType_6; }
	inline void set_beatType_6(int32_t value)
	{
		___beatType_6 = value;
	}

	inline static int32_t get_offset_of_loopTime_7() { return static_cast<int32_t>(offsetof(BeatCounter_t2687895878, ___loopTime_7)); }
	inline float get_loopTime_7() const { return ___loopTime_7; }
	inline float* get_address_of_loopTime_7() { return &___loopTime_7; }
	inline void set_loopTime_7(float value)
	{
		___loopTime_7 = value;
	}

	inline static int32_t get_offset_of_audioSource_8() { return static_cast<int32_t>(offsetof(BeatCounter_t2687895878, ___audioSource_8)); }
	inline AudioSource_t1740077639 * get_audioSource_8() const { return ___audioSource_8; }
	inline AudioSource_t1740077639 ** get_address_of_audioSource_8() { return &___audioSource_8; }
	inline void set_audioSource_8(AudioSource_t1740077639 * value)
	{
		___audioSource_8 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_8, value);
	}

	inline static int32_t get_offset_of_observers_9() { return static_cast<int32_t>(offsetof(BeatCounter_t2687895878, ___observers_9)); }
	inline GameObjectU5BU5D_t2662109048* get_observers_9() const { return ___observers_9; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_observers_9() { return &___observers_9; }
	inline void set_observers_9(GameObjectU5BU5D_t2662109048* value)
	{
		___observers_9 = value;
		Il2CppCodeGenWriteBarrier(&___observers_9, value);
	}

	inline static int32_t get_offset_of_nextBeatSample_10() { return static_cast<int32_t>(offsetof(BeatCounter_t2687895878, ___nextBeatSample_10)); }
	inline float get_nextBeatSample_10() const { return ___nextBeatSample_10; }
	inline float* get_address_of_nextBeatSample_10() { return &___nextBeatSample_10; }
	inline void set_nextBeatSample_10(float value)
	{
		___nextBeatSample_10 = value;
	}

	inline static int32_t get_offset_of_samplePeriod_11() { return static_cast<int32_t>(offsetof(BeatCounter_t2687895878, ___samplePeriod_11)); }
	inline float get_samplePeriod_11() const { return ___samplePeriod_11; }
	inline float* get_address_of_samplePeriod_11() { return &___samplePeriod_11; }
	inline void set_samplePeriod_11(float value)
	{
		___samplePeriod_11 = value;
	}

	inline static int32_t get_offset_of_sampleOffset_12() { return static_cast<int32_t>(offsetof(BeatCounter_t2687895878, ___sampleOffset_12)); }
	inline float get_sampleOffset_12() const { return ___sampleOffset_12; }
	inline float* get_address_of_sampleOffset_12() { return &___sampleOffset_12; }
	inline void set_sampleOffset_12(float value)
	{
		___sampleOffset_12 = value;
	}

	inline static int32_t get_offset_of_currentSample_13() { return static_cast<int32_t>(offsetof(BeatCounter_t2687895878, ___currentSample_13)); }
	inline float get_currentSample_13() const { return ___currentSample_13; }
	inline float* get_address_of_currentSample_13() { return &___currentSample_13; }
	inline void set_currentSample_13(float value)
	{
		___currentSample_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
