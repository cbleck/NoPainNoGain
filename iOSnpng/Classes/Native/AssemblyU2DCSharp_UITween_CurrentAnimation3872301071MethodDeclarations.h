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

// UITween.CurrentAnimation
struct CurrentAnimation_t3872301071;
// UITween.AnimationParts
struct AnimationParts_t4290477440;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UITween_AnimationParts4290477440.h"
#include "UnityEngine_UnityEngine_RectTransform972643934.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_AnimationCurve3667593487.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Void UITween.CurrentAnimation::.ctor(UITween.AnimationParts)
extern "C"  void CurrentAnimation__ctor_m921667526 (CurrentAnimation_t3872301071 * __this, AnimationParts_t4290477440 * ___animationPart0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::AnimationFrame(UnityEngine.RectTransform)
extern "C"  void CurrentAnimation_AnimationFrame_m2355919085 (CurrentAnimation_t3872301071 * __this, RectTransform_t972643934 * ___rectTransform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::SetAnimationOnFrame(UnityEngine.RectTransform,System.Single)
extern "C"  void CurrentAnimation_SetAnimationOnFrame_m2296428387 (CurrentAnimation_t3872301071 * __this, RectTransform_t972643934 * ___rectTransform0, float ___percentage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::LateAnimationFrame(UnityEngine.RectTransform)
extern "C"  void CurrentAnimation_LateAnimationFrame_m927731175 (CurrentAnimation_t3872301071 * __this, RectTransform_t972643934 * ___rectTransform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::PlayOpenAnimations()
extern "C"  void CurrentAnimation_PlayOpenAnimations_m3798939448 (CurrentAnimation_t3872301071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::SetStatus(System.Boolean)
extern "C"  void CurrentAnimation_SetStatus_m337475618 (CurrentAnimation_t3872301071 * __this, bool ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::PlayCloseAnimations()
extern "C"  void CurrentAnimation_PlayCloseAnimations_m3386424170 (CurrentAnimation_t3872301071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::SetAnimationPos(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.RectTransform)
extern "C"  void CurrentAnimation_SetAnimationPos_m4170296672 (CurrentAnimation_t3872301071 * __this, Vector2_t4282066565  ___StartAnchoredPos0, Vector2_t4282066565  ___EndAnchoredPos1, AnimationCurve_t3667593487 * ___EntryTween2, AnimationCurve_t3667593487 * ___ExitTween3, RectTransform_t972643934 * ___rectTransform4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::SetAnimationScale(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve)
extern "C"  void CurrentAnimation_SetAnimationScale_m3631654511 (CurrentAnimation_t3872301071 * __this, Vector2_t4282066565  ___StartAnchoredScale0, Vector2_t4282066565  ___EndAnchoredScale1, AnimationCurve_t3667593487 * ___EntryTween2, AnimationCurve_t3667593487 * ___ExitTween3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::SetAnimationRotation(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve)
extern "C"  void CurrentAnimation_SetAnimationRotation_m468204515 (CurrentAnimation_t3872301071 * __this, Vector2_t4282066565  ___StartAnchoredEulerAng0, Vector2_t4282066565  ___EndAnchoredEulerAng1, AnimationCurve_t3667593487 * ___EntryTween2, AnimationCurve_t3667593487 * ___ExitTween3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::SetFade(System.Boolean)
extern "C"  void CurrentAnimation_SetFade_m4004030636 (CurrentAnimation_t3872301071 * __this, bool ___OverrideFade0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::SetFadeValuesStartEnd(System.Single,System.Single)
extern "C"  void CurrentAnimation_SetFadeValuesStartEnd_m1730649248 (CurrentAnimation_t3872301071 * __this, float ___startAlphaValue0, float ___endAlphaValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITween.CurrentAnimation::IsObjectOpened()
extern "C"  bool CurrentAnimation_IsObjectOpened_m1592603601 (CurrentAnimation_t3872301071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::SetAniamtioDuration(System.Single)
extern "C"  void CurrentAnimation_SetAniamtioDuration_m816778444 (CurrentAnimation_t3872301071 * __this, float ___duration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITween.CurrentAnimation::GetAnimationDuration()
extern "C"  float CurrentAnimation_GetAnimationDuration_m719667481 (CurrentAnimation_t3872301071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::SetCurrentAnimPos(UnityEngine.AnimationCurve,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void CurrentAnimation_SetCurrentAnimPos_m2494854247 (CurrentAnimation_t3872301071 * __this, AnimationCurve_t3667593487 * ___currentAnimationCurvePos0, Vector3_t4282066566  ___currentStartPos1, Vector3_t4282066566  ___currentEndPos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::MoveAnimation(UnityEngine.RectTransform,System.Single)
extern "C"  void CurrentAnimation_MoveAnimation_m4193172284 (CurrentAnimation_t3872301071 * __this, RectTransform_t972643934 * ____rectTransform0, float ____counterTween1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::SetCurrentAnimScale(UnityEngine.AnimationCurve,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void CurrentAnimation_SetCurrentAnimScale_m4239404253 (CurrentAnimation_t3872301071 * __this, AnimationCurve_t3667593487 * ___currentAnimationCurveScale0, Vector3_t4282066566  ___currentStartScale1, Vector3_t4282066566  ___currentEndScale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::ScaleAnimation(UnityEngine.RectTransform,System.Single)
extern "C"  void CurrentAnimation_ScaleAnimation_m2551231265 (CurrentAnimation_t3872301071 * __this, RectTransform_t972643934 * ____rectTransform0, float ____counterTween1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::SetCurrentAnimRot(UnityEngine.AnimationCurve,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void CurrentAnimation_SetCurrentAnimRot_m1281190506 (CurrentAnimation_t3872301071 * __this, AnimationCurve_t3667593487 * ___currentAnimationCurveRot0, Vector3_t4282066566  ___currentStartRot1, Vector3_t4282066566  ___currentEndRot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::RotateAnimation(UnityEngine.RectTransform,System.Single)
extern "C"  void CurrentAnimation_RotateAnimation_m3512040390 (CurrentAnimation_t3872301071 * __this, RectTransform_t972643934 * ____rectTransform0, float ____counterTween1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::SetFadeAnimation(System.Single,System.Single)
extern "C"  void CurrentAnimation_SetFadeAnimation_m1879468991 (CurrentAnimation_t3872301071 * __this, float ___startAlphaValue0, float ___endAlphaValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.CurrentAnimation::SetAlphaValue(UnityEngine.Transform,System.Single)
extern "C"  void CurrentAnimation_SetAlphaValue_m56629110 (CurrentAnimation_t3872301071 * __this, Transform_t1659122786 * ____objectToSetAlpha0, float ____counterTween1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
