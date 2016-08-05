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

// UITween.AnimationParts
struct AnimationParts_t4290477440;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t1266085011;
// UITween.AnimationParts/DisableOrDestroy
struct DisableOrDestroy_t4252453067;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UITween_AnimationParts_State451125205.h"
#include "AssemblyU2DCSharp_UITween_AnimationParts_EndTweenC1761908940.h"
#include "AssemblyU2DCSharp_UITween_AnimationParts_CallbackC2423460991.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent1266085011.h"
#include "AssemblyU2DCSharp_UITween_AnimationParts_DisableOr4252453067.h"

// System.Void UITween.AnimationParts::.ctor(UITween.AnimationParts/State,System.Boolean,System.Boolean,System.Boolean,UITween.AnimationParts/EndTweenClose,UITween.AnimationParts/CallbackCall,UnityEngine.Events.UnityEvent,UnityEngine.Events.UnityEvent)
extern "C"  void AnimationParts__ctor_m743217775 (AnimationParts_t4290477440 * __this, int32_t ___ObjectState0, bool ___UnscaledTimeAnimation1, bool ___SaveState2, bool ___AtomicAnim3, int32_t ___EndState4, int32_t ___CallCallback5, UnityEvent_t1266085011 * ___IntroEvents6, UnityEvent_t1266085011 * ___ExitEvents7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.AnimationParts::add_OnDisableOrDestroy(UITween.AnimationParts/DisableOrDestroy)
extern "C"  void AnimationParts_add_OnDisableOrDestroy_m475795999 (Il2CppObject * __this /* static, unused */, DisableOrDestroy_t4252453067 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.AnimationParts::remove_OnDisableOrDestroy(UITween.AnimationParts/DisableOrDestroy)
extern "C"  void AnimationParts_remove_OnDisableOrDestroy_m3821145048 (Il2CppObject * __this /* static, unused */, DisableOrDestroy_t4252453067 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.AnimationParts::SetAniamtioDuration(System.Single)
extern "C"  void AnimationParts_SetAniamtioDuration_m2064867261 (AnimationParts_t4290477440 * __this, float ___duration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITween.AnimationParts::GetAnimationDuration()
extern "C"  float AnimationParts_GetAnimationDuration_m3980949642 (AnimationParts_t4290477440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.AnimationParts::CheckCallbackStatus()
extern "C"  void AnimationParts_CheckCallbackStatus_m2624905701 (AnimationParts_t4290477440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.AnimationParts::FinalEnd()
extern "C"  void AnimationParts_FinalEnd_m4071780225 (AnimationParts_t4290477440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.AnimationParts::Ended()
extern "C"  void AnimationParts_Ended_m91490016 (AnimationParts_t4290477440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.AnimationParts::FrameCheck()
extern "C"  void AnimationParts_FrameCheck_m2354148183 (AnimationParts_t4290477440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITween.AnimationParts::IsObjectOpened()
extern "C"  bool AnimationParts_IsObjectOpened_m1882320386 (AnimationParts_t4290477440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.AnimationParts::ChangeStatus()
extern "C"  void AnimationParts_ChangeStatus_m2262218494 (AnimationParts_t4290477440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.AnimationParts::SetStatus(System.Boolean)
extern "C"  void AnimationParts_SetStatus_m3857703441 (AnimationParts_t4290477440 * __this, bool ___open0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.AnimationParts::CheckCallBack(UnityEngine.Events.UnityEvent)
extern "C"  void AnimationParts_CheckCallBack_m2754985244 (AnimationParts_t4290477440 * __this, UnityEvent_t1266085011 * ___CallbackObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.AnimationParts::CallCallbackObjects()
extern "C"  void AnimationParts_CallCallbackObjects_m3349944439 (AnimationParts_t4290477440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
