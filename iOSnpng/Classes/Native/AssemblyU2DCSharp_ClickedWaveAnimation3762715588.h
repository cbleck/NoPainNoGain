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
// Pool
struct Pool_t2493500;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ClickedWaveAnimation
struct  ClickedWaveAnimation_t3762715588  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject ClickedWaveAnimation::WaveObject
	GameObject_t3674682005 * ___WaveObject_2;
	// UnityEngine.GameObject ClickedWaveAnimation::CanvasMain
	GameObject_t3674682005 * ___CanvasMain_3;
	// System.Int32 ClickedWaveAnimation::PoolSize
	int32_t ___PoolSize_4;
	// Pool ClickedWaveAnimation::poolClass
	Pool_t2493500 * ___poolClass_5;

public:
	inline static int32_t get_offset_of_WaveObject_2() { return static_cast<int32_t>(offsetof(ClickedWaveAnimation_t3762715588, ___WaveObject_2)); }
	inline GameObject_t3674682005 * get_WaveObject_2() const { return ___WaveObject_2; }
	inline GameObject_t3674682005 ** get_address_of_WaveObject_2() { return &___WaveObject_2; }
	inline void set_WaveObject_2(GameObject_t3674682005 * value)
	{
		___WaveObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___WaveObject_2, value);
	}

	inline static int32_t get_offset_of_CanvasMain_3() { return static_cast<int32_t>(offsetof(ClickedWaveAnimation_t3762715588, ___CanvasMain_3)); }
	inline GameObject_t3674682005 * get_CanvasMain_3() const { return ___CanvasMain_3; }
	inline GameObject_t3674682005 ** get_address_of_CanvasMain_3() { return &___CanvasMain_3; }
	inline void set_CanvasMain_3(GameObject_t3674682005 * value)
	{
		___CanvasMain_3 = value;
		Il2CppCodeGenWriteBarrier(&___CanvasMain_3, value);
	}

	inline static int32_t get_offset_of_PoolSize_4() { return static_cast<int32_t>(offsetof(ClickedWaveAnimation_t3762715588, ___PoolSize_4)); }
	inline int32_t get_PoolSize_4() const { return ___PoolSize_4; }
	inline int32_t* get_address_of_PoolSize_4() { return &___PoolSize_4; }
	inline void set_PoolSize_4(int32_t value)
	{
		___PoolSize_4 = value;
	}

	inline static int32_t get_offset_of_poolClass_5() { return static_cast<int32_t>(offsetof(ClickedWaveAnimation_t3762715588, ___poolClass_5)); }
	inline Pool_t2493500 * get_poolClass_5() const { return ___poolClass_5; }
	inline Pool_t2493500 ** get_address_of_poolClass_5() { return &___poolClass_5; }
	inline void set_poolClass_5(Pool_t2493500 * value)
	{
		___poolClass_5 = value;
		Il2CppCodeGenWriteBarrier(&___poolClass_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
