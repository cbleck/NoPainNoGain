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

// Pool
struct Pool_t2493500;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Void Pool::.ctor()
extern "C"  void Pool__ctor_m2057142751 (Pool_t2493500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pool::CreatePool(UnityEngine.GameObject,System.Int32)
extern "C"  void Pool_CreatePool_m1264299394 (Pool_t2493500 * __this, GameObject_t3674682005 * ___ObjectToPool0, int32_t ___numberOfObjects1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Pool::GetObject()
extern "C"  GameObject_t3674682005 * Pool_GetObject_m1066736605 (Pool_t2493500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
