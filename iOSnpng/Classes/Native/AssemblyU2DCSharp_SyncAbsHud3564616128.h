﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SyncAbsHud
struct  SyncAbsHud_t3564616128  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Image SyncAbsHud::circleSync
	Image_t538875265 * ___circleSync_2;
	// System.Single SyncAbsHud::speed
	float ___speed_3;

public:
	inline static int32_t get_offset_of_circleSync_2() { return static_cast<int32_t>(offsetof(SyncAbsHud_t3564616128, ___circleSync_2)); }
	inline Image_t538875265 * get_circleSync_2() const { return ___circleSync_2; }
	inline Image_t538875265 ** get_address_of_circleSync_2() { return &___circleSync_2; }
	inline void set_circleSync_2(Image_t538875265 * value)
	{
		___circleSync_2 = value;
		Il2CppCodeGenWriteBarrier(&___circleSync_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(SyncAbsHud_t3564616128, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
