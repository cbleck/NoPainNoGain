﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITween.ScalePropetiesAnim
struct  ScalePropetiesAnim_t205839632  : public Il2CppObject
{
public:
	// System.Boolean UITween.ScalePropetiesAnim::scaleEnabled
	bool ___scaleEnabled_0;
	// UnityEngine.AnimationCurve UITween.ScalePropetiesAnim::TweenCurveEnterScale
	AnimationCurve_t3667593487 * ___TweenCurveEnterScale_1;
	// UnityEngine.AnimationCurve UITween.ScalePropetiesAnim::TweenCurveExitScale
	AnimationCurve_t3667593487 * ___TweenCurveExitScale_2;
	// UnityEngine.Vector3 UITween.ScalePropetiesAnim::StartScale
	Vector3_t4282066566  ___StartScale_3;
	// UnityEngine.Vector3 UITween.ScalePropetiesAnim::EndScale
	Vector3_t4282066566  ___EndScale_4;

public:
	inline static int32_t get_offset_of_scaleEnabled_0() { return static_cast<int32_t>(offsetof(ScalePropetiesAnim_t205839632, ___scaleEnabled_0)); }
	inline bool get_scaleEnabled_0() const { return ___scaleEnabled_0; }
	inline bool* get_address_of_scaleEnabled_0() { return &___scaleEnabled_0; }
	inline void set_scaleEnabled_0(bool value)
	{
		___scaleEnabled_0 = value;
	}

	inline static int32_t get_offset_of_TweenCurveEnterScale_1() { return static_cast<int32_t>(offsetof(ScalePropetiesAnim_t205839632, ___TweenCurveEnterScale_1)); }
	inline AnimationCurve_t3667593487 * get_TweenCurveEnterScale_1() const { return ___TweenCurveEnterScale_1; }
	inline AnimationCurve_t3667593487 ** get_address_of_TweenCurveEnterScale_1() { return &___TweenCurveEnterScale_1; }
	inline void set_TweenCurveEnterScale_1(AnimationCurve_t3667593487 * value)
	{
		___TweenCurveEnterScale_1 = value;
		Il2CppCodeGenWriteBarrier(&___TweenCurveEnterScale_1, value);
	}

	inline static int32_t get_offset_of_TweenCurveExitScale_2() { return static_cast<int32_t>(offsetof(ScalePropetiesAnim_t205839632, ___TweenCurveExitScale_2)); }
	inline AnimationCurve_t3667593487 * get_TweenCurveExitScale_2() const { return ___TweenCurveExitScale_2; }
	inline AnimationCurve_t3667593487 ** get_address_of_TweenCurveExitScale_2() { return &___TweenCurveExitScale_2; }
	inline void set_TweenCurveExitScale_2(AnimationCurve_t3667593487 * value)
	{
		___TweenCurveExitScale_2 = value;
		Il2CppCodeGenWriteBarrier(&___TweenCurveExitScale_2, value);
	}

	inline static int32_t get_offset_of_StartScale_3() { return static_cast<int32_t>(offsetof(ScalePropetiesAnim_t205839632, ___StartScale_3)); }
	inline Vector3_t4282066566  get_StartScale_3() const { return ___StartScale_3; }
	inline Vector3_t4282066566 * get_address_of_StartScale_3() { return &___StartScale_3; }
	inline void set_StartScale_3(Vector3_t4282066566  value)
	{
		___StartScale_3 = value;
	}

	inline static int32_t get_offset_of_EndScale_4() { return static_cast<int32_t>(offsetof(ScalePropetiesAnim_t205839632, ___EndScale_4)); }
	inline Vector3_t4282066566  get_EndScale_4() const { return ___EndScale_4; }
	inline Vector3_t4282066566 * get_address_of_EndScale_4() { return &___EndScale_4; }
	inline void set_EndScale_4(Vector3_t4282066566  value)
	{
		___EndScale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
