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

// UITween.AnimationParts/DisableOrDestroy
struct DisableOrDestroy_t4252453067;
// System.Object
struct Il2CppObject;
// UITween.AnimationParts
struct AnimationParts_t4290477440;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_UITween_AnimationParts4290477440.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UITween.AnimationParts/DisableOrDestroy::.ctor(System.Object,System.IntPtr)
extern "C"  void DisableOrDestroy__ctor_m4277289250 (DisableOrDestroy_t4252453067 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.AnimationParts/DisableOrDestroy::Invoke(System.Boolean,UITween.AnimationParts)
extern "C"  void DisableOrDestroy_Invoke_m1508925664 (DisableOrDestroy_t4252453067 * __this, bool ___disable0, AnimationParts_t4290477440 * ___part1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UITween.AnimationParts/DisableOrDestroy::BeginInvoke(System.Boolean,UITween.AnimationParts,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DisableOrDestroy_BeginInvoke_m1610579961 (DisableOrDestroy_t4252453067 * __this, bool ___disable0, AnimationParts_t4290477440 * ___part1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITween.AnimationParts/DisableOrDestroy::EndInvoke(System.IAsyncResult)
extern "C"  void DisableOrDestroy_EndInvoke_m541561906 (DisableOrDestroy_t4252453067 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
