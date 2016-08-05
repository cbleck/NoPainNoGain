#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UITween.PositionPropetiesAnim
struct PositionPropetiesAnim_t3297200579;
// UITween.ScalePropetiesAnim
struct ScalePropetiesAnim_t205839632;
// UITween.RotationPropetiesAnim
struct RotationPropetiesAnim_t2262074766;
// UITween.FadePropetiesAnim
struct FadePropetiesAnim_t145139664;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t1266085011;
// UITween.AnimationParts/DisableOrDestroy
struct DisableOrDestroy_t4252453067;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_UITween_AnimationParts_State451125205.h"
#include "AssemblyU2DCSharp_UITween_AnimationParts_EndTweenC1761908940.h"
#include "AssemblyU2DCSharp_UITween_AnimationParts_CallbackC2423460991.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITween.AnimationParts
struct  AnimationParts_t4290477440  : public Il2CppObject
{
public:
	// UITween.PositionPropetiesAnim UITween.AnimationParts::PositionPropetiesAnim
	PositionPropetiesAnim_t3297200579 * ___PositionPropetiesAnim_0;
	// UITween.ScalePropetiesAnim UITween.AnimationParts::ScalePropetiesAnim
	ScalePropetiesAnim_t205839632 * ___ScalePropetiesAnim_1;
	// UITween.RotationPropetiesAnim UITween.AnimationParts::RotationPropetiesAnim
	RotationPropetiesAnim_t2262074766 * ___RotationPropetiesAnim_2;
	// UITween.FadePropetiesAnim UITween.AnimationParts::FadePropetiesAnim
	FadePropetiesAnim_t145139664 * ___FadePropetiesAnim_3;
	// System.Boolean UITween.AnimationParts::UnscaledTimeAnimation
	bool ___UnscaledTimeAnimation_4;
	// System.Boolean UITween.AnimationParts::SaveState
	bool ___SaveState_5;
	// System.Boolean UITween.AnimationParts::AtomicAnimation
	bool ___AtomicAnimation_6;
	// UITween.AnimationParts/State UITween.AnimationParts::ObjectState
	int32_t ___ObjectState_7;
	// UITween.AnimationParts/EndTweenClose UITween.AnimationParts::EndState
	int32_t ___EndState_8;
	// UITween.AnimationParts/CallbackCall UITween.AnimationParts::CallCallback
	int32_t ___CallCallback_9;
	// UnityEngine.Events.UnityEvent UITween.AnimationParts::IntroEvents
	UnityEvent_t1266085011 * ___IntroEvents_10;
	// UnityEngine.Events.UnityEvent UITween.AnimationParts::ExitEvents
	UnityEvent_t1266085011 * ___ExitEvents_11;
	// UnityEngine.Events.UnityEvent UITween.AnimationParts::CallBackObject
	UnityEvent_t1266085011 * ___CallBackObject_12;
	// System.Boolean UITween.AnimationParts::CheckNextFrame
	bool ___CheckNextFrame_13;
	// System.Boolean UITween.AnimationParts::CallOnThisFrame
	bool ___CallOnThisFrame_14;
	// System.Single UITween.AnimationParts::animationDuration
	float ___animationDuration_15;

public:
	inline static int32_t get_offset_of_PositionPropetiesAnim_0() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___PositionPropetiesAnim_0)); }
	inline PositionPropetiesAnim_t3297200579 * get_PositionPropetiesAnim_0() const { return ___PositionPropetiesAnim_0; }
	inline PositionPropetiesAnim_t3297200579 ** get_address_of_PositionPropetiesAnim_0() { return &___PositionPropetiesAnim_0; }
	inline void set_PositionPropetiesAnim_0(PositionPropetiesAnim_t3297200579 * value)
	{
		___PositionPropetiesAnim_0 = value;
		Il2CppCodeGenWriteBarrier(&___PositionPropetiesAnim_0, value);
	}

	inline static int32_t get_offset_of_ScalePropetiesAnim_1() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___ScalePropetiesAnim_1)); }
	inline ScalePropetiesAnim_t205839632 * get_ScalePropetiesAnim_1() const { return ___ScalePropetiesAnim_1; }
	inline ScalePropetiesAnim_t205839632 ** get_address_of_ScalePropetiesAnim_1() { return &___ScalePropetiesAnim_1; }
	inline void set_ScalePropetiesAnim_1(ScalePropetiesAnim_t205839632 * value)
	{
		___ScalePropetiesAnim_1 = value;
		Il2CppCodeGenWriteBarrier(&___ScalePropetiesAnim_1, value);
	}

	inline static int32_t get_offset_of_RotationPropetiesAnim_2() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___RotationPropetiesAnim_2)); }
	inline RotationPropetiesAnim_t2262074766 * get_RotationPropetiesAnim_2() const { return ___RotationPropetiesAnim_2; }
	inline RotationPropetiesAnim_t2262074766 ** get_address_of_RotationPropetiesAnim_2() { return &___RotationPropetiesAnim_2; }
	inline void set_RotationPropetiesAnim_2(RotationPropetiesAnim_t2262074766 * value)
	{
		___RotationPropetiesAnim_2 = value;
		Il2CppCodeGenWriteBarrier(&___RotationPropetiesAnim_2, value);
	}

	inline static int32_t get_offset_of_FadePropetiesAnim_3() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___FadePropetiesAnim_3)); }
	inline FadePropetiesAnim_t145139664 * get_FadePropetiesAnim_3() const { return ___FadePropetiesAnim_3; }
	inline FadePropetiesAnim_t145139664 ** get_address_of_FadePropetiesAnim_3() { return &___FadePropetiesAnim_3; }
	inline void set_FadePropetiesAnim_3(FadePropetiesAnim_t145139664 * value)
	{
		___FadePropetiesAnim_3 = value;
		Il2CppCodeGenWriteBarrier(&___FadePropetiesAnim_3, value);
	}

	inline static int32_t get_offset_of_UnscaledTimeAnimation_4() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___UnscaledTimeAnimation_4)); }
	inline bool get_UnscaledTimeAnimation_4() const { return ___UnscaledTimeAnimation_4; }
	inline bool* get_address_of_UnscaledTimeAnimation_4() { return &___UnscaledTimeAnimation_4; }
	inline void set_UnscaledTimeAnimation_4(bool value)
	{
		___UnscaledTimeAnimation_4 = value;
	}

	inline static int32_t get_offset_of_SaveState_5() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___SaveState_5)); }
	inline bool get_SaveState_5() const { return ___SaveState_5; }
	inline bool* get_address_of_SaveState_5() { return &___SaveState_5; }
	inline void set_SaveState_5(bool value)
	{
		___SaveState_5 = value;
	}

	inline static int32_t get_offset_of_AtomicAnimation_6() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___AtomicAnimation_6)); }
	inline bool get_AtomicAnimation_6() const { return ___AtomicAnimation_6; }
	inline bool* get_address_of_AtomicAnimation_6() { return &___AtomicAnimation_6; }
	inline void set_AtomicAnimation_6(bool value)
	{
		___AtomicAnimation_6 = value;
	}

	inline static int32_t get_offset_of_ObjectState_7() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___ObjectState_7)); }
	inline int32_t get_ObjectState_7() const { return ___ObjectState_7; }
	inline int32_t* get_address_of_ObjectState_7() { return &___ObjectState_7; }
	inline void set_ObjectState_7(int32_t value)
	{
		___ObjectState_7 = value;
	}

	inline static int32_t get_offset_of_EndState_8() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___EndState_8)); }
	inline int32_t get_EndState_8() const { return ___EndState_8; }
	inline int32_t* get_address_of_EndState_8() { return &___EndState_8; }
	inline void set_EndState_8(int32_t value)
	{
		___EndState_8 = value;
	}

	inline static int32_t get_offset_of_CallCallback_9() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___CallCallback_9)); }
	inline int32_t get_CallCallback_9() const { return ___CallCallback_9; }
	inline int32_t* get_address_of_CallCallback_9() { return &___CallCallback_9; }
	inline void set_CallCallback_9(int32_t value)
	{
		___CallCallback_9 = value;
	}

	inline static int32_t get_offset_of_IntroEvents_10() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___IntroEvents_10)); }
	inline UnityEvent_t1266085011 * get_IntroEvents_10() const { return ___IntroEvents_10; }
	inline UnityEvent_t1266085011 ** get_address_of_IntroEvents_10() { return &___IntroEvents_10; }
	inline void set_IntroEvents_10(UnityEvent_t1266085011 * value)
	{
		___IntroEvents_10 = value;
		Il2CppCodeGenWriteBarrier(&___IntroEvents_10, value);
	}

	inline static int32_t get_offset_of_ExitEvents_11() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___ExitEvents_11)); }
	inline UnityEvent_t1266085011 * get_ExitEvents_11() const { return ___ExitEvents_11; }
	inline UnityEvent_t1266085011 ** get_address_of_ExitEvents_11() { return &___ExitEvents_11; }
	inline void set_ExitEvents_11(UnityEvent_t1266085011 * value)
	{
		___ExitEvents_11 = value;
		Il2CppCodeGenWriteBarrier(&___ExitEvents_11, value);
	}

	inline static int32_t get_offset_of_CallBackObject_12() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___CallBackObject_12)); }
	inline UnityEvent_t1266085011 * get_CallBackObject_12() const { return ___CallBackObject_12; }
	inline UnityEvent_t1266085011 ** get_address_of_CallBackObject_12() { return &___CallBackObject_12; }
	inline void set_CallBackObject_12(UnityEvent_t1266085011 * value)
	{
		___CallBackObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___CallBackObject_12, value);
	}

	inline static int32_t get_offset_of_CheckNextFrame_13() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___CheckNextFrame_13)); }
	inline bool get_CheckNextFrame_13() const { return ___CheckNextFrame_13; }
	inline bool* get_address_of_CheckNextFrame_13() { return &___CheckNextFrame_13; }
	inline void set_CheckNextFrame_13(bool value)
	{
		___CheckNextFrame_13 = value;
	}

	inline static int32_t get_offset_of_CallOnThisFrame_14() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___CallOnThisFrame_14)); }
	inline bool get_CallOnThisFrame_14() const { return ___CallOnThisFrame_14; }
	inline bool* get_address_of_CallOnThisFrame_14() { return &___CallOnThisFrame_14; }
	inline void set_CallOnThisFrame_14(bool value)
	{
		___CallOnThisFrame_14 = value;
	}

	inline static int32_t get_offset_of_animationDuration_15() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440, ___animationDuration_15)); }
	inline float get_animationDuration_15() const { return ___animationDuration_15; }
	inline float* get_address_of_animationDuration_15() { return &___animationDuration_15; }
	inline void set_animationDuration_15(float value)
	{
		___animationDuration_15 = value;
	}
};

struct AnimationParts_t4290477440_StaticFields
{
public:
	// UITween.AnimationParts/DisableOrDestroy UITween.AnimationParts::OnDisableOrDestroy
	DisableOrDestroy_t4252453067 * ___OnDisableOrDestroy_16;

public:
	inline static int32_t get_offset_of_OnDisableOrDestroy_16() { return static_cast<int32_t>(offsetof(AnimationParts_t4290477440_StaticFields, ___OnDisableOrDestroy_16)); }
	inline DisableOrDestroy_t4252453067 * get_OnDisableOrDestroy_16() const { return ___OnDisableOrDestroy_16; }
	inline DisableOrDestroy_t4252453067 ** get_address_of_OnDisableOrDestroy_16() { return &___OnDisableOrDestroy_16; }
	inline void set_OnDisableOrDestroy_16(DisableOrDestroy_t4252453067 * value)
	{
		___OnDisableOrDestroy_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnDisableOrDestroy_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
