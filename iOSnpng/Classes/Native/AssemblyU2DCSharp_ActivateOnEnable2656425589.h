#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyTween
struct EasyTween_t3917628265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ActivateOnEnable
struct  ActivateOnEnable_t2656425589  : public MonoBehaviour_t667441552
{
public:
	// EasyTween ActivateOnEnable::EasyTweenStart
	EasyTween_t3917628265 * ___EasyTweenStart_2;

public:
	inline static int32_t get_offset_of_EasyTweenStart_2() { return static_cast<int32_t>(offsetof(ActivateOnEnable_t2656425589, ___EasyTweenStart_2)); }
	inline EasyTween_t3917628265 * get_EasyTweenStart_2() const { return ___EasyTweenStart_2; }
	inline EasyTween_t3917628265 ** get_address_of_EasyTweenStart_2() { return &___EasyTweenStart_2; }
	inline void set_EasyTweenStart_2(EasyTween_t3917628265 * value)
	{
		___EasyTweenStart_2 = value;
		Il2CppCodeGenWriteBarrier(&___EasyTweenStart_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
