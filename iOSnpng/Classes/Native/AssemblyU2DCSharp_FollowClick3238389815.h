#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// EasyTween
struct EasyTween_t3917628265;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FollowClick
struct  FollowClick_t3238389815  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AnimationCurve FollowClick::LeftClick
	AnimationCurve_t3667593487 * ___LeftClick_2;
	// UnityEngine.AnimationCurve FollowClick::RightClick
	AnimationCurve_t3667593487 * ___RightClick_3;
	// EasyTween FollowClick::TweenToControl
	EasyTween_t3917628265 * ___TweenToControl_4;
	// UnityEngine.Transform FollowClick::RootCanvas
	Transform_t1659122786 * ___RootCanvas_5;

public:
	inline static int32_t get_offset_of_LeftClick_2() { return static_cast<int32_t>(offsetof(FollowClick_t3238389815, ___LeftClick_2)); }
	inline AnimationCurve_t3667593487 * get_LeftClick_2() const { return ___LeftClick_2; }
	inline AnimationCurve_t3667593487 ** get_address_of_LeftClick_2() { return &___LeftClick_2; }
	inline void set_LeftClick_2(AnimationCurve_t3667593487 * value)
	{
		___LeftClick_2 = value;
		Il2CppCodeGenWriteBarrier(&___LeftClick_2, value);
	}

	inline static int32_t get_offset_of_RightClick_3() { return static_cast<int32_t>(offsetof(FollowClick_t3238389815, ___RightClick_3)); }
	inline AnimationCurve_t3667593487 * get_RightClick_3() const { return ___RightClick_3; }
	inline AnimationCurve_t3667593487 ** get_address_of_RightClick_3() { return &___RightClick_3; }
	inline void set_RightClick_3(AnimationCurve_t3667593487 * value)
	{
		___RightClick_3 = value;
		Il2CppCodeGenWriteBarrier(&___RightClick_3, value);
	}

	inline static int32_t get_offset_of_TweenToControl_4() { return static_cast<int32_t>(offsetof(FollowClick_t3238389815, ___TweenToControl_4)); }
	inline EasyTween_t3917628265 * get_TweenToControl_4() const { return ___TweenToControl_4; }
	inline EasyTween_t3917628265 ** get_address_of_TweenToControl_4() { return &___TweenToControl_4; }
	inline void set_TweenToControl_4(EasyTween_t3917628265 * value)
	{
		___TweenToControl_4 = value;
		Il2CppCodeGenWriteBarrier(&___TweenToControl_4, value);
	}

	inline static int32_t get_offset_of_RootCanvas_5() { return static_cast<int32_t>(offsetof(FollowClick_t3238389815, ___RootCanvas_5)); }
	inline Transform_t1659122786 * get_RootCanvas_5() const { return ___RootCanvas_5; }
	inline Transform_t1659122786 ** get_address_of_RootCanvas_5() { return &___RootCanvas_5; }
	inline void set_RootCanvas_5(Transform_t1659122786 * value)
	{
		___RootCanvas_5 = value;
		Il2CppCodeGenWriteBarrier(&___RootCanvas_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
