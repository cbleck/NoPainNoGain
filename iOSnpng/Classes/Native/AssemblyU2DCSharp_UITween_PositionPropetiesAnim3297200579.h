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

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITween.PositionPropetiesAnim
struct  PositionPropetiesAnim_t3297200579  : public Il2CppObject
{
public:
	// System.Boolean UITween.PositionPropetiesAnim::positionEnabled
	bool ___positionEnabled_0;
	// UnityEngine.AnimationCurve UITween.PositionPropetiesAnim::TweenCurveEnterPos
	AnimationCurve_t3667593487 * ___TweenCurveEnterPos_1;
	// UnityEngine.AnimationCurve UITween.PositionPropetiesAnim::TweenCurveExitPos
	AnimationCurve_t3667593487 * ___TweenCurveExitPos_2;
	// UnityEngine.Vector3 UITween.PositionPropetiesAnim::StartPos
	Vector3_t4282066566  ___StartPos_3;
	// UnityEngine.Vector3 UITween.PositionPropetiesAnim::EndPos
	Vector3_t4282066566  ___EndPos_4;

public:
	inline static int32_t get_offset_of_positionEnabled_0() { return static_cast<int32_t>(offsetof(PositionPropetiesAnim_t3297200579, ___positionEnabled_0)); }
	inline bool get_positionEnabled_0() const { return ___positionEnabled_0; }
	inline bool* get_address_of_positionEnabled_0() { return &___positionEnabled_0; }
	inline void set_positionEnabled_0(bool value)
	{
		___positionEnabled_0 = value;
	}

	inline static int32_t get_offset_of_TweenCurveEnterPos_1() { return static_cast<int32_t>(offsetof(PositionPropetiesAnim_t3297200579, ___TweenCurveEnterPos_1)); }
	inline AnimationCurve_t3667593487 * get_TweenCurveEnterPos_1() const { return ___TweenCurveEnterPos_1; }
	inline AnimationCurve_t3667593487 ** get_address_of_TweenCurveEnterPos_1() { return &___TweenCurveEnterPos_1; }
	inline void set_TweenCurveEnterPos_1(AnimationCurve_t3667593487 * value)
	{
		___TweenCurveEnterPos_1 = value;
		Il2CppCodeGenWriteBarrier(&___TweenCurveEnterPos_1, value);
	}

	inline static int32_t get_offset_of_TweenCurveExitPos_2() { return static_cast<int32_t>(offsetof(PositionPropetiesAnim_t3297200579, ___TweenCurveExitPos_2)); }
	inline AnimationCurve_t3667593487 * get_TweenCurveExitPos_2() const { return ___TweenCurveExitPos_2; }
	inline AnimationCurve_t3667593487 ** get_address_of_TweenCurveExitPos_2() { return &___TweenCurveExitPos_2; }
	inline void set_TweenCurveExitPos_2(AnimationCurve_t3667593487 * value)
	{
		___TweenCurveExitPos_2 = value;
		Il2CppCodeGenWriteBarrier(&___TweenCurveExitPos_2, value);
	}

	inline static int32_t get_offset_of_StartPos_3() { return static_cast<int32_t>(offsetof(PositionPropetiesAnim_t3297200579, ___StartPos_3)); }
	inline Vector3_t4282066566  get_StartPos_3() const { return ___StartPos_3; }
	inline Vector3_t4282066566 * get_address_of_StartPos_3() { return &___StartPos_3; }
	inline void set_StartPos_3(Vector3_t4282066566  value)
	{
		___StartPos_3 = value;
	}

	inline static int32_t get_offset_of_EndPos_4() { return static_cast<int32_t>(offsetof(PositionPropetiesAnim_t3297200579, ___EndPos_4)); }
	inline Vector3_t4282066566  get_EndPos_4() const { return ___EndPos_4; }
	inline Vector3_t4282066566 * get_address_of_EndPos_4() { return &___EndPos_4; }
	inline void set_EndPos_4(Vector3_t4282066566  value)
	{
		___EndPos_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
