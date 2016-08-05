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

// BeatObserver
struct BeatObserver_t2441021644;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SynchronizerData_BeatType1309133334.h"

// System.Void BeatObserver::.ctor()
extern "C"  void BeatObserver__ctor_m725094223 (BeatObserver_t2441021644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BeatObserver::Start()
extern "C"  void BeatObserver_Start_m3967199311 (BeatObserver_t2441021644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BeatObserver::BeatNotify(SynchronizerData.BeatType)
extern "C"  void BeatObserver_BeatNotify_m4055268652 (BeatObserver_t2441021644 * __this, int32_t ___beatType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BeatObserver::BeatNotify()
extern "C"  void BeatObserver_BeatNotify_m1425581044 (BeatObserver_t2441021644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BeatObserver::WaitOnBeat(SynchronizerData.BeatType)
extern "C"  Il2CppObject * BeatObserver_WaitOnBeat_m4269225369 (BeatObserver_t2441021644 * __this, int32_t ___beatType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
