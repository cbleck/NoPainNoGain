#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pool
struct  Pool_t2493500  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject[] Pool::ObjectPool
	GameObjectU5BU5D_t2662109048* ___ObjectPool_2;
	// UnityEngine.GameObject Pool::ObjectToPool
	GameObject_t3674682005 * ___ObjectToPool_3;

public:
	inline static int32_t get_offset_of_ObjectPool_2() { return static_cast<int32_t>(offsetof(Pool_t2493500, ___ObjectPool_2)); }
	inline GameObjectU5BU5D_t2662109048* get_ObjectPool_2() const { return ___ObjectPool_2; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_ObjectPool_2() { return &___ObjectPool_2; }
	inline void set_ObjectPool_2(GameObjectU5BU5D_t2662109048* value)
	{
		___ObjectPool_2 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectPool_2, value);
	}

	inline static int32_t get_offset_of_ObjectToPool_3() { return static_cast<int32_t>(offsetof(Pool_t2493500, ___ObjectToPool_3)); }
	inline GameObject_t3674682005 * get_ObjectToPool_3() const { return ___ObjectToPool_3; }
	inline GameObject_t3674682005 ** get_address_of_ObjectToPool_3() { return &___ObjectToPool_3; }
	inline void set_ObjectToPool_3(GameObject_t3674682005 * value)
	{
		___ObjectToPool_3 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectToPool_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
