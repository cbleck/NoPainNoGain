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

// BeatSynchronizer/AudioStartAction
struct AudioStartAction_t1987195065;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void BeatSynchronizer/AudioStartAction::.ctor(System.Object,System.IntPtr)
extern "C"  void AudioStartAction__ctor_m1442987024 (AudioStartAction_t1987195065 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BeatSynchronizer/AudioStartAction::Invoke(System.Double)
extern "C"  void AudioStartAction_Invoke_m2052594456 (AudioStartAction_t1987195065 * __this, double ___syncTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BeatSynchronizer/AudioStartAction::BeginInvoke(System.Double,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AudioStartAction_BeginInvoke_m1256947365 (AudioStartAction_t1987195065 * __this, double ___syncTime0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BeatSynchronizer/AudioStartAction::EndInvoke(System.IAsyncResult)
extern "C"  void AudioStartAction_EndInvoke_m1417033248 (AudioStartAction_t1987195065 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
