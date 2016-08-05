#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;
// BeatObserver
struct BeatObserver_t2441021644;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NumberExpand
struct  NumberExpand_t822648675  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Animator NumberExpand::anim
	Animator_t2776330603 * ___anim_2;
	// BeatObserver NumberExpand::beatObserver
	BeatObserver_t2441021644 * ___beatObserver_3;
	// System.Int32 NumberExpand::currentNumber
	int32_t ___currentNumber_4;
	// System.Int32 NumberExpand::currentCycle
	int32_t ___currentCycle_5;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(NumberExpand_t822648675, ___anim_2)); }
	inline Animator_t2776330603 * get_anim_2() const { return ___anim_2; }
	inline Animator_t2776330603 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t2776330603 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier(&___anim_2, value);
	}

	inline static int32_t get_offset_of_beatObserver_3() { return static_cast<int32_t>(offsetof(NumberExpand_t822648675, ___beatObserver_3)); }
	inline BeatObserver_t2441021644 * get_beatObserver_3() const { return ___beatObserver_3; }
	inline BeatObserver_t2441021644 ** get_address_of_beatObserver_3() { return &___beatObserver_3; }
	inline void set_beatObserver_3(BeatObserver_t2441021644 * value)
	{
		___beatObserver_3 = value;
		Il2CppCodeGenWriteBarrier(&___beatObserver_3, value);
	}

	inline static int32_t get_offset_of_currentNumber_4() { return static_cast<int32_t>(offsetof(NumberExpand_t822648675, ___currentNumber_4)); }
	inline int32_t get_currentNumber_4() const { return ___currentNumber_4; }
	inline int32_t* get_address_of_currentNumber_4() { return &___currentNumber_4; }
	inline void set_currentNumber_4(int32_t value)
	{
		___currentNumber_4 = value;
	}

	inline static int32_t get_offset_of_currentCycle_5() { return static_cast<int32_t>(offsetof(NumberExpand_t822648675, ___currentCycle_5)); }
	inline int32_t get_currentCycle_5() const { return ___currentCycle_5; }
	inline int32_t* get_address_of_currentCycle_5() { return &___currentCycle_5; }
	inline void set_currentCycle_5(int32_t value)
	{
		___currentCycle_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
