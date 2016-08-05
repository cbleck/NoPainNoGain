#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuChanger
struct  MenuChanger_t3898119235  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color MenuChanger::initialBackgroundColor
	Color_t4194546905  ___initialBackgroundColor_2;
	// UnityEngine.Color MenuChanger::finalBackgroundColor
	Color_t4194546905  ___finalBackgroundColor_3;
	// System.Single MenuChanger::speed
	float ___speed_4;
	// System.Single MenuChanger::startTime
	float ___startTime_5;

public:
	inline static int32_t get_offset_of_initialBackgroundColor_2() { return static_cast<int32_t>(offsetof(MenuChanger_t3898119235, ___initialBackgroundColor_2)); }
	inline Color_t4194546905  get_initialBackgroundColor_2() const { return ___initialBackgroundColor_2; }
	inline Color_t4194546905 * get_address_of_initialBackgroundColor_2() { return &___initialBackgroundColor_2; }
	inline void set_initialBackgroundColor_2(Color_t4194546905  value)
	{
		___initialBackgroundColor_2 = value;
	}

	inline static int32_t get_offset_of_finalBackgroundColor_3() { return static_cast<int32_t>(offsetof(MenuChanger_t3898119235, ___finalBackgroundColor_3)); }
	inline Color_t4194546905  get_finalBackgroundColor_3() const { return ___finalBackgroundColor_3; }
	inline Color_t4194546905 * get_address_of_finalBackgroundColor_3() { return &___finalBackgroundColor_3; }
	inline void set_finalBackgroundColor_3(Color_t4194546905  value)
	{
		___finalBackgroundColor_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(MenuChanger_t3898119235, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_startTime_5() { return static_cast<int32_t>(offsetof(MenuChanger_t3898119235, ___startTime_5)); }
	inline float get_startTime_5() const { return ___startTime_5; }
	inline float* get_address_of_startTime_5() { return &___startTime_5; }
	inline void set_startTime_5(float value)
	{
		___startTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
