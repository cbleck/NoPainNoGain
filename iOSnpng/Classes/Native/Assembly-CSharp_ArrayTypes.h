#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// CreateAnimImage
struct CreateAnimImage_t2928946190;
// EasyTween
struct EasyTween_t3917628265;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_SynchronizerData_BeatValue234763805.h"
#include "AssemblyU2DCSharp_CreateAnimImage2928946190.h"
#include "AssemblyU2DCSharp_EasyTween3917628265.h"

#pragma once
// SynchronizerData.BeatValue[]
struct BeatValueU5BU5D_t3674776784  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// CreateAnimImage[]
struct CreateAnimImageU5BU5D_t2857274363  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) CreateAnimImage_t2928946190 * m_Items[1];

public:
	inline CreateAnimImage_t2928946190 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline CreateAnimImage_t2928946190 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, CreateAnimImage_t2928946190 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// EasyTween[]
struct EasyTweenU5BU5D_t2174885076  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) EasyTween_t3917628265 * m_Items[1];

public:
	inline EasyTween_t3917628265 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline EasyTween_t3917628265 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, EasyTween_t3917628265 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
