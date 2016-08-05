#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CreateAnimImage[]
struct CreateAnimImageU5BU5D_t2857274363;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// System.Collections.Generic.List`1<EasyTween>
struct List_1_t990846521;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreateAnimImage
struct  CreateAnimImage_t2928946190  : public MonoBehaviour_t667441552
{
public:
	// CreateAnimImage[] CreateAnimImage::createImageOtherReference
	CreateAnimImageU5BU5D_t2857274363* ___createImageOtherReference_2;
	// UnityEngine.GameObject CreateAnimImage::CreateInstance
	GameObject_t3674682005 * ___CreateInstance_3;
	// System.Int32 CreateAnimImage::HowManyButtons
	int32_t ___HowManyButtons_4;
	// UnityEngine.Vector3 CreateAnimImage::StartAnim
	Vector3_t4282066566  ___StartAnim_5;
	// UnityEngine.Vector3 CreateAnimImage::EndAnim
	Vector3_t4282066566  ___EndAnim_6;
	// System.Single CreateAnimImage::Offset
	float ___Offset_7;
	// UnityEngine.AnimationCurve CreateAnimImage::EnterAnim
	AnimationCurve_t3667593487 * ___EnterAnim_8;
	// UnityEngine.AnimationCurve CreateAnimImage::ExitAnim
	AnimationCurve_t3667593487 * ___ExitAnim_9;
	// UnityEngine.RectTransform CreateAnimImage::RootRect
	RectTransform_t972643934 * ___RootRect_10;
	// UnityEngine.RectTransform CreateAnimImage::RootCanvas
	RectTransform_t972643934 * ___RootCanvas_11;
	// System.Collections.Generic.List`1<EasyTween> CreateAnimImage::Created
	List_1_t990846521 * ___Created_12;
	// UnityEngine.Vector2 CreateAnimImage::InitialCanvasScrollSize
	Vector2_t4282066565  ___InitialCanvasScrollSize_13;
	// System.Single CreateAnimImage::totalWidth
	float ___totalWidth_14;

public:
	inline static int32_t get_offset_of_createImageOtherReference_2() { return static_cast<int32_t>(offsetof(CreateAnimImage_t2928946190, ___createImageOtherReference_2)); }
	inline CreateAnimImageU5BU5D_t2857274363* get_createImageOtherReference_2() const { return ___createImageOtherReference_2; }
	inline CreateAnimImageU5BU5D_t2857274363** get_address_of_createImageOtherReference_2() { return &___createImageOtherReference_2; }
	inline void set_createImageOtherReference_2(CreateAnimImageU5BU5D_t2857274363* value)
	{
		___createImageOtherReference_2 = value;
		Il2CppCodeGenWriteBarrier(&___createImageOtherReference_2, value);
	}

	inline static int32_t get_offset_of_CreateInstance_3() { return static_cast<int32_t>(offsetof(CreateAnimImage_t2928946190, ___CreateInstance_3)); }
	inline GameObject_t3674682005 * get_CreateInstance_3() const { return ___CreateInstance_3; }
	inline GameObject_t3674682005 ** get_address_of_CreateInstance_3() { return &___CreateInstance_3; }
	inline void set_CreateInstance_3(GameObject_t3674682005 * value)
	{
		___CreateInstance_3 = value;
		Il2CppCodeGenWriteBarrier(&___CreateInstance_3, value);
	}

	inline static int32_t get_offset_of_HowManyButtons_4() { return static_cast<int32_t>(offsetof(CreateAnimImage_t2928946190, ___HowManyButtons_4)); }
	inline int32_t get_HowManyButtons_4() const { return ___HowManyButtons_4; }
	inline int32_t* get_address_of_HowManyButtons_4() { return &___HowManyButtons_4; }
	inline void set_HowManyButtons_4(int32_t value)
	{
		___HowManyButtons_4 = value;
	}

	inline static int32_t get_offset_of_StartAnim_5() { return static_cast<int32_t>(offsetof(CreateAnimImage_t2928946190, ___StartAnim_5)); }
	inline Vector3_t4282066566  get_StartAnim_5() const { return ___StartAnim_5; }
	inline Vector3_t4282066566 * get_address_of_StartAnim_5() { return &___StartAnim_5; }
	inline void set_StartAnim_5(Vector3_t4282066566  value)
	{
		___StartAnim_5 = value;
	}

	inline static int32_t get_offset_of_EndAnim_6() { return static_cast<int32_t>(offsetof(CreateAnimImage_t2928946190, ___EndAnim_6)); }
	inline Vector3_t4282066566  get_EndAnim_6() const { return ___EndAnim_6; }
	inline Vector3_t4282066566 * get_address_of_EndAnim_6() { return &___EndAnim_6; }
	inline void set_EndAnim_6(Vector3_t4282066566  value)
	{
		___EndAnim_6 = value;
	}

	inline static int32_t get_offset_of_Offset_7() { return static_cast<int32_t>(offsetof(CreateAnimImage_t2928946190, ___Offset_7)); }
	inline float get_Offset_7() const { return ___Offset_7; }
	inline float* get_address_of_Offset_7() { return &___Offset_7; }
	inline void set_Offset_7(float value)
	{
		___Offset_7 = value;
	}

	inline static int32_t get_offset_of_EnterAnim_8() { return static_cast<int32_t>(offsetof(CreateAnimImage_t2928946190, ___EnterAnim_8)); }
	inline AnimationCurve_t3667593487 * get_EnterAnim_8() const { return ___EnterAnim_8; }
	inline AnimationCurve_t3667593487 ** get_address_of_EnterAnim_8() { return &___EnterAnim_8; }
	inline void set_EnterAnim_8(AnimationCurve_t3667593487 * value)
	{
		___EnterAnim_8 = value;
		Il2CppCodeGenWriteBarrier(&___EnterAnim_8, value);
	}

	inline static int32_t get_offset_of_ExitAnim_9() { return static_cast<int32_t>(offsetof(CreateAnimImage_t2928946190, ___ExitAnim_9)); }
	inline AnimationCurve_t3667593487 * get_ExitAnim_9() const { return ___ExitAnim_9; }
	inline AnimationCurve_t3667593487 ** get_address_of_ExitAnim_9() { return &___ExitAnim_9; }
	inline void set_ExitAnim_9(AnimationCurve_t3667593487 * value)
	{
		___ExitAnim_9 = value;
		Il2CppCodeGenWriteBarrier(&___ExitAnim_9, value);
	}

	inline static int32_t get_offset_of_RootRect_10() { return static_cast<int32_t>(offsetof(CreateAnimImage_t2928946190, ___RootRect_10)); }
	inline RectTransform_t972643934 * get_RootRect_10() const { return ___RootRect_10; }
	inline RectTransform_t972643934 ** get_address_of_RootRect_10() { return &___RootRect_10; }
	inline void set_RootRect_10(RectTransform_t972643934 * value)
	{
		___RootRect_10 = value;
		Il2CppCodeGenWriteBarrier(&___RootRect_10, value);
	}

	inline static int32_t get_offset_of_RootCanvas_11() { return static_cast<int32_t>(offsetof(CreateAnimImage_t2928946190, ___RootCanvas_11)); }
	inline RectTransform_t972643934 * get_RootCanvas_11() const { return ___RootCanvas_11; }
	inline RectTransform_t972643934 ** get_address_of_RootCanvas_11() { return &___RootCanvas_11; }
	inline void set_RootCanvas_11(RectTransform_t972643934 * value)
	{
		___RootCanvas_11 = value;
		Il2CppCodeGenWriteBarrier(&___RootCanvas_11, value);
	}

	inline static int32_t get_offset_of_Created_12() { return static_cast<int32_t>(offsetof(CreateAnimImage_t2928946190, ___Created_12)); }
	inline List_1_t990846521 * get_Created_12() const { return ___Created_12; }
	inline List_1_t990846521 ** get_address_of_Created_12() { return &___Created_12; }
	inline void set_Created_12(List_1_t990846521 * value)
	{
		___Created_12 = value;
		Il2CppCodeGenWriteBarrier(&___Created_12, value);
	}

	inline static int32_t get_offset_of_InitialCanvasScrollSize_13() { return static_cast<int32_t>(offsetof(CreateAnimImage_t2928946190, ___InitialCanvasScrollSize_13)); }
	inline Vector2_t4282066565  get_InitialCanvasScrollSize_13() const { return ___InitialCanvasScrollSize_13; }
	inline Vector2_t4282066565 * get_address_of_InitialCanvasScrollSize_13() { return &___InitialCanvasScrollSize_13; }
	inline void set_InitialCanvasScrollSize_13(Vector2_t4282066565  value)
	{
		___InitialCanvasScrollSize_13 = value;
	}

	inline static int32_t get_offset_of_totalWidth_14() { return static_cast<int32_t>(offsetof(CreateAnimImage_t2928946190, ___totalWidth_14)); }
	inline float get_totalWidth_14() const { return ___totalWidth_14; }
	inline float* get_address_of_totalWidth_14() { return &___totalWidth_14; }
	inline void set_totalWidth_14(float value)
	{
		___totalWidth_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
