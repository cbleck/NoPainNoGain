#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_SynchronizerData_BeatType1309133334.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BeatObserver
struct  BeatObserver_t2441021644  : public MonoBehaviour_t667441552
{
public:
	// System.Single BeatObserver::beatWindow
	float ___beatWindow_2;
	// SynchronizerData.BeatType BeatObserver::beatMask
	int32_t ___beatMask_3;

public:
	inline static int32_t get_offset_of_beatWindow_2() { return static_cast<int32_t>(offsetof(BeatObserver_t2441021644, ___beatWindow_2)); }
	inline float get_beatWindow_2() const { return ___beatWindow_2; }
	inline float* get_address_of_beatWindow_2() { return &___beatWindow_2; }
	inline void set_beatWindow_2(float value)
	{
		___beatWindow_2 = value;
	}

	inline static int32_t get_offset_of_beatMask_3() { return static_cast<int32_t>(offsetof(BeatObserver_t2441021644, ___beatMask_3)); }
	inline int32_t get_beatMask_3() const { return ___beatMask_3; }
	inline int32_t* get_address_of_beatMask_3() { return &___beatMask_3; }
	inline void set_beatMask_3(int32_t value)
	{
		___beatMask_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
