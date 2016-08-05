#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// EasyTween
struct EasyTween_t3917628265;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// UITween.AnimationParts
struct AnimationParts_t4290477440;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_AnimationCurve3667593487.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_UITween_AnimationParts4290477440.h"

// System.Void EasyTween::.ctor()
extern "C"  void EasyTween__ctor_m2425591842 (EasyTween_t3917628265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::OpenCloseObjectAnimation()
extern "C"  void EasyTween_OpenCloseObjectAnimation_m645046265 (EasyTween_t3917628265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyTween::IsObjectOpened()
extern "C"  bool EasyTween_IsObjectOpened_m402888384 (EasyTween_t3917628265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::SetUnscaledTimeAnimation(System.Boolean)
extern "C"  void EasyTween_SetUnscaledTimeAnimation_m2802250459 (EasyTween_t3917628265 * __this, bool ___UnscaledTimeAnimation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::SetAnimatioDuration(System.Single)
extern "C"  void EasyTween_SetAnimatioDuration_m2453087307 (EasyTween_t3917628265 * __this, float ___duration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyTween::GetAnimationDuration()
extern "C"  float EasyTween_GetAnimationDuration_m3541486488 (EasyTween_t3917628265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::SetAnimationPosition(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve)
extern "C"  void EasyTween_SetAnimationPosition_m3963557281 (EasyTween_t3917628265 * __this, Vector2_t4282066565  ___StartAnchoredPos0, Vector2_t4282066565  ___EndAnchoredPos1, AnimationCurve_t3667593487 * ___EntryTween2, AnimationCurve_t3667593487 * ___ExitTween3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::SetAnimationScale(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve)
extern "C"  void EasyTween_SetAnimationScale_m841679492 (EasyTween_t3917628265 * __this, Vector3_t4282066566  ___StartAnchoredScale0, Vector3_t4282066566  ___EndAnchoredScale1, AnimationCurve_t3667593487 * ___EntryTween2, AnimationCurve_t3667593487 * ___ExitTween3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::SetAnimationRotation(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve)
extern "C"  void EasyTween_SetAnimationRotation_m1258208490 (EasyTween_t3917628265 * __this, Vector3_t4282066566  ___StartAnchoredEulerAng0, Vector3_t4282066566  ___EndAnchoredEulerAng1, AnimationCurve_t3667593487 * ___EntryTween2, AnimationCurve_t3667593487 * ___ExitTween3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::SetFade(System.Boolean)
extern "C"  void EasyTween_SetFade_m1094994165 (EasyTween_t3917628265 * __this, bool ___OverrideFade0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::SetFade()
extern "C"  void EasyTween_SetFade_m2968152062 (EasyTween_t3917628265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::SetFadeStartEndValues(System.Single,System.Single)
extern "C"  void EasyTween_SetFadeStartEndValues_m4012706679 (EasyTween_t3917628265 * __this, float ___startValua0, float ___endValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::SetAnimationProperties(UITween.AnimationParts)
extern "C"  void EasyTween_SetAnimationProperties_m2536121572 (EasyTween_t3917628265 * __this, AnimationParts_t4290477440 * ___animationParts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::ChangeSetState(System.Boolean)
extern "C"  void EasyTween_ChangeSetState_m595772600 (EasyTween_t3917628265 * __this, bool ___opened0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::Start()
extern "C"  void EasyTween_Start_m1372729634 (EasyTween_t3917628265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::OnDestroy()
extern "C"  void EasyTween_OnDestroy_m4273507355 (EasyTween_t3917628265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::Update()
extern "C"  void EasyTween_Update_m3905765163 (EasyTween_t3917628265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::LateUpdate()
extern "C"  void EasyTween_LateUpdate_m3871700849 (EasyTween_t3917628265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::TriggerOpenClose()
extern "C"  void EasyTween_TriggerOpenClose_m712947928 (EasyTween_t3917628265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::CheckTriggerEndState(System.Boolean,UITween.AnimationParts)
extern "C"  void EasyTween_CheckTriggerEndState_m3648472788 (EasyTween_t3917628265 * __this, bool ___disable0, AnimationParts_t4290477440 * ___part1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTween::CheckIfCurrenAnimationGoingExits()
extern "C"  void EasyTween_CheckIfCurrenAnimationGoingExits_m1184422497 (EasyTween_t3917628265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
