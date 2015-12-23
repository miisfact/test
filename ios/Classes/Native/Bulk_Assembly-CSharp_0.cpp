#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Aspect
struct Aspect_t1;
// UnityEngine.Camera
struct Camera_t17;
// System.Object
struct Object_t;
// FadeManager/<TransScene>c__Iterator0
struct U3CTransSceneU3Ec__Iterator0_t3;
// FadeManager
struct FadeManager_t4;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t16;
// endtext
struct endtext_t7;
// UnityEngine.GUIText
struct GUIText_t8;
// main
struct main_t9;
// UnityEngine.GameObject
struct GameObject_t18;
// UnityEngine.AudioSource
struct AudioSource_t27;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DCSharp_Aspect.h"
#include "AssemblyU2DCSharp_AspectMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera.h"
#include "mscorlib_System_Single.h"
#include "UnityEngine_UnityEngine_GameObject.h"
#include "mscorlib_System_Int32.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Object.h"
#include "AssemblyU2DCSharp_FadeManager_U3CTransSceneU3Ec__Iterator0.h"
#include "AssemblyU2DCSharp_FadeManager_U3CTransSceneU3Ec__Iterator0MethodDeclarations.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "mscorlib_System_Object.h"
#include "mscorlib_System_Boolean.h"
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
#include "mscorlib_System_UInt32.h"
#include "AssemblyU2DCSharp_FadeManager.h"
#include "mscorlib_System_String.h"
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
#include "mscorlib_System_NotSupportedException.h"
#include "AssemblyU2DCSharp_FadeManagerMethodDeclarations.h"
#include "AssemblyU2DCSharp_SingletonMonoBehaviour_1_genMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Texture2D.h"
#include "UnityEngine_UnityEngine_TextureFormat.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Texture.h"
#include "UnityEngine_UnityEngine_Coroutine.h"
#include "AssemblyU2DCSharp_endtext.h"
#include "AssemblyU2DCSharp_endtextMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIText.h"
#include "UnityEngine_UnityEngine_Component.h"
#include "UnityEngine_UnityEngine_GUITextMethodDeclarations.h"
#include "AssemblyU2DCSharp_main.h"
#include "AssemblyU2DCSharp_mainMethodDeclarations.h"
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "mscorlib_System_Int32MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Char.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUISkin.h"
#include "UnityEngine_UnityEngine_GUIStyle.h"
#include "UnityEngine_UnityEngine_AudioSource.h"

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m80_gshared (GameObject_t18 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m80(__this, method) (( Object_t * (*) (GameObject_t18 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m80_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
#define GameObject_GetComponent_TisCamera_t17_m32(__this, method) (( Camera_t17 * (*) (GameObject_t18 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m80_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m81_gshared (Component_t29 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m81(__this, method) (( Object_t * (*) (Component_t29 *, const MethodInfo*))Component_GetComponent_TisObject_t_m81_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUIText>()
#define Component_GetComponent_TisGUIText_t8_m56(__this, method) (( GUIText_t8 * (*) (Component_t29 *, const MethodInfo*))Component_GetComponent_TisObject_t_m81_gshared)(__this, method)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" Object_t * Object_Instantiate_TisObject_t_m82_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define Object_Instantiate_TisObject_t_m82(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Object_Instantiate_TisObject_t_m82_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t18_m71(__this /* static, unused */, p0, method) (( GameObject_t18 * (*) (Object_t * /* static, unused */, GameObject_t18 *, const MethodInfo*))Object_Instantiate_TisObject_t_m82_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
#define GameObject_GetComponent_TisAudioSource_t27_m76(__this, method) (( AudioSource_t27 * (*) (GameObject_t18 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m80_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Aspect::.ctor()
extern "C" void Aspect__ctor_m0 (Aspect_t1 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m30(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Aspect::Awake()
extern const MethodInfo* GameObject_GetComponent_TisCamera_t17_m32_MethodInfo_var;
extern "C" void Aspect_Awake_m1 (Aspect_t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCamera_t17_m32_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	Camera_t17 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		GameObject_t18 * L_0 = Component_get_gameObject_m31(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Camera_t17 * L_1 = GameObject_GetComponent_TisCamera_t17_m32(L_0, /*hidden argument*/GameObject_GetComponent_TisCamera_t17_m32_MethodInfo_var);
		V_0 = L_1;
		V_1 = (0.75f);
		int32_t L_2 = Screen_get_height_m33(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m34(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)((float)(((float)((float)L_2)))/(float)(((float)((float)L_3)))));
		float L_4 = V_1;
		float L_5 = V_2;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0053;
		}
	}
	{
		float L_6 = V_2;
		float L_7 = V_1;
		V_3 = ((float)((float)L_6/(float)L_7));
		Camera_t17 * L_8 = V_0;
		float L_9 = V_3;
		float L_10 = V_3;
		Rect_t19  L_11 = {0};
		Rect__ctor_m35(&L_11, ((float)((float)((float)((float)(1.0f)-(float)L_9))*(float)(0.5f))), (0.0f), L_10, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Camera_set_rect_m36(L_8, L_11, /*hidden argument*/NULL);
		goto IL_007a;
	}

IL_0053:
	{
		float L_12 = V_1;
		float L_13 = V_2;
		V_3 = ((float)((float)L_12/(float)L_13));
		Camera_t17 * L_14 = V_0;
		float L_15 = V_3;
		float L_16 = V_3;
		Rect_t19  L_17 = {0};
		Rect__ctor_m35(&L_17, (0.0f), ((float)((float)((float)((float)(1.0f)-(float)L_15))*(float)(0.5f))), (1.0f), L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Camera_set_rect_m36(L_14, L_17, /*hidden argument*/NULL);
	}

IL_007a:
	{
		Object_Destroy_m37(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FadeManager/<TransScene>c__Iterator0::.ctor()
extern "C" void U3CTransSceneU3Ec__Iterator0__ctor_m2 (U3CTransSceneU3Ec__Iterator0_t3 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m38(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object FadeManager/<TransScene>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CTransSceneU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3 (U3CTransSceneU3Ec__Iterator0_t3 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Object FadeManager/<TransScene>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CTransSceneU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m4 (U3CTransSceneU3Ec__Iterator0_t3 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean FadeManager/<TransScene>c__Iterator0::MoveNext()
extern TypeInfo* Mathf_t20_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t21_il2cpp_TypeInfo_var;
extern "C" bool U3CTransSceneU3Ec__Iterator0_MoveNext_m5 (U3CTransSceneU3Ec__Iterator0_t3 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Int32_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_3);
		V_0 = L_0;
		__this->___U24PC_3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_0092;
		}
		if (L_1 == 2)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_0133;
	}

IL_0025:
	{
		FadeManager_t4 * L_2 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_2);
		L_2->___isFading_5 = 1;
		__this->___U3CtimeU3E__0_0 = (0.0f);
		goto IL_0092;
	}

IL_0041:
	{
		FadeManager_t4 * L_3 = (__this->___U3CU3Ef__this_7);
		float L_4 = (__this->___U3CtimeU3E__0_0);
		float L_5 = (__this->___interval_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t20_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Lerp_m39(NULL /*static, unused*/, (0.0f), (1.0f), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->___fadeAlpha_4 = L_6;
		float L_7 = (__this->___U3CtimeU3E__0_0);
		float L_8 = Time_get_deltaTime_m40(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CtimeU3E__0_0 = ((float)((float)L_7+(float)L_8));
		int32_t L_9 = 0;
		Object_t * L_10 = Box(Int32_t21_il2cpp_TypeInfo_var, &L_9);
		__this->___U24current_4 = L_10;
		__this->___U24PC_3 = 1;
		goto IL_0135;
	}

IL_0092:
	{
		float L_11 = (__this->___U3CtimeU3E__0_0);
		float L_12 = (__this->___interval_1);
		if ((((float)L_11) <= ((float)L_12)))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_13 = (__this->___scene_2);
		Application_LoadLevel_m41(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		__this->___U3CtimeU3E__0_0 = (0.0f);
		goto IL_010f;
	}

IL_00be:
	{
		FadeManager_t4 * L_14 = (__this->___U3CU3Ef__this_7);
		float L_15 = (__this->___U3CtimeU3E__0_0);
		float L_16 = (__this->___interval_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t20_il2cpp_TypeInfo_var);
		float L_17 = Mathf_Lerp_m39(NULL /*static, unused*/, (1.0f), (0.0f), ((float)((float)L_15/(float)L_16)), /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->___fadeAlpha_4 = L_17;
		float L_18 = (__this->___U3CtimeU3E__0_0);
		float L_19 = Time_get_deltaTime_m40(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CtimeU3E__0_0 = ((float)((float)L_18+(float)L_19));
		int32_t L_20 = 0;
		Object_t * L_21 = Box(Int32_t21_il2cpp_TypeInfo_var, &L_20);
		__this->___U24current_4 = L_21;
		__this->___U24PC_3 = 2;
		goto IL_0135;
	}

IL_010f:
	{
		float L_22 = (__this->___U3CtimeU3E__0_0);
		float L_23 = (__this->___interval_1);
		if ((((float)L_22) <= ((float)L_23)))
		{
			goto IL_00be;
		}
	}
	{
		FadeManager_t4 * L_24 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_24);
		L_24->___isFading_5 = 0;
		__this->___U24PC_3 = (-1);
	}

IL_0133:
	{
		return 0;
	}

IL_0135:
	{
		return 1;
	}
	// Dead block : IL_0137: ldloc.1
}
// System.Void FadeManager/<TransScene>c__Iterator0::Dispose()
extern "C" void U3CTransSceneU3Ec__Iterator0_Dispose_m6 (U3CTransSceneU3Ec__Iterator0_t3 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void FadeManager/<TransScene>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t22_il2cpp_TypeInfo_var;
extern "C" void U3CTransSceneU3Ec__Iterator0_Reset_m7 (U3CTransSceneU3Ec__Iterator0_t3 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t22 * L_0 = (NotSupportedException_t22 *)il2cpp_codegen_object_new (NotSupportedException_t22_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m42(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void FadeManager::.ctor()
extern const MethodInfo* SingletonMonoBehaviour_1__ctor_m43_MethodInfo_var;
extern "C" void FadeManager__ctor_m8 (FadeManager_t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SingletonMonoBehaviour_1__ctor_m43_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	{
		SingletonMonoBehaviour_1__ctor_m43(__this, /*hidden argument*/SingletonMonoBehaviour_1__ctor_m43_MethodInfo_var);
		return;
	}
}
// System.Void FadeManager::Awake()
extern TypeInfo* Texture2D_t6_il2cpp_TypeInfo_var;
extern const MethodInfo* SingletonMonoBehaviour_1_get_Instance_m44_MethodInfo_var;
extern "C" void FadeManager_Awake_m9 (FadeManager_t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		SingletonMonoBehaviour_1_get_Instance_m44_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	{
		FadeManager_t4 * L_0 = SingletonMonoBehaviour_1_get_Instance_m44(NULL /*static, unused*/, /*hidden argument*/SingletonMonoBehaviour_1_get_Instance_m44_MethodInfo_var);
		bool L_1 = Object_op_Inequality_m45(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Object_Destroy_m37(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}

IL_0017:
	{
		GameObject_t18 * L_2 = Component_get_gameObject_m31(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m46(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Texture2D_t6 * L_3 = (Texture2D_t6 *)il2cpp_codegen_object_new (Texture2D_t6_il2cpp_TypeInfo_var);
		Texture2D__ctor_m47(L_3, ((int32_t)32), ((int32_t)32), 3, 0, /*hidden argument*/NULL);
		__this->___blackTexture_3 = L_3;
		Texture2D_t6 * L_4 = (__this->___blackTexture_3);
		Rect_t19  L_5 = {0};
		Rect__ctor_m35(&L_5, (0.0f), (0.0f), (32.0f), (32.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Texture2D_ReadPixels_m48(L_4, L_5, 0, 0, 0, /*hidden argument*/NULL);
		Texture2D_t6 * L_6 = (__this->___blackTexture_3);
		Color_t23  L_7 = Color_get_white_m49(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		Texture2D_SetPixel_m50(L_6, 0, 0, L_7, /*hidden argument*/NULL);
		Texture2D_t6 * L_8 = (__this->___blackTexture_3);
		NullCheck(L_8);
		Texture2D_Apply_m51(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FadeManager::OnGUI()
extern TypeInfo* GUI_t24_il2cpp_TypeInfo_var;
extern "C" void FadeManager_OnGUI_m10 (FadeManager_t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___isFading_5);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		float L_1 = (__this->___fadeAlpha_4);
		Color_t23  L_2 = {0};
		Color__ctor_m52(&L_2, (0.0f), (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		GUI_set_color_m53(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m34(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m33(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t19  L_5 = {0};
		Rect__ctor_m35(&L_5, (0.0f), (0.0f), (((float)((float)L_3))), (((float)((float)L_4))), /*hidden argument*/NULL);
		Texture2D_t6 * L_6 = (__this->___blackTexture_3);
		GUI_DrawTexture_m54(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FadeManager::LoadLevel(System.String,System.Single)
extern "C" void FadeManager_LoadLevel_m11 (FadeManager_t4 * __this, String_t* ___scene, float ___interval, const MethodInfo* method)
{
	{
		String_t* L_0 = ___scene;
		float L_1 = ___interval;
		Object_t * L_2 = FadeManager_TransScene_m12(__this, L_0, L_1, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m55(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator FadeManager::TransScene(System.String,System.Single)
extern TypeInfo* U3CTransSceneU3Ec__Iterator0_t3_il2cpp_TypeInfo_var;
extern "C" Object_t * FadeManager_TransScene_m12 (FadeManager_t4 * __this, String_t* ___scene, float ___interval, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CTransSceneU3Ec__Iterator0_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	U3CTransSceneU3Ec__Iterator0_t3 * V_0 = {0};
	{
		U3CTransSceneU3Ec__Iterator0_t3 * L_0 = (U3CTransSceneU3Ec__Iterator0_t3 *)il2cpp_codegen_object_new (U3CTransSceneU3Ec__Iterator0_t3_il2cpp_TypeInfo_var);
		U3CTransSceneU3Ec__Iterator0__ctor_m2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTransSceneU3Ec__Iterator0_t3 * L_1 = V_0;
		float L_2 = ___interval;
		NullCheck(L_1);
		L_1->___interval_1 = L_2;
		U3CTransSceneU3Ec__Iterator0_t3 * L_3 = V_0;
		String_t* L_4 = ___scene;
		NullCheck(L_3);
		L_3->___scene_2 = L_4;
		U3CTransSceneU3Ec__Iterator0_t3 * L_5 = V_0;
		float L_6 = ___interval;
		NullCheck(L_5);
		L_5->___U3CU24U3Einterval_5 = L_6;
		U3CTransSceneU3Ec__Iterator0_t3 * L_7 = V_0;
		String_t* L_8 = ___scene;
		NullCheck(L_7);
		L_7->___U3CU24U3Escene_6 = L_8;
		U3CTransSceneU3Ec__Iterator0_t3 * L_9 = V_0;
		NullCheck(L_9);
		L_9->___U3CU3Ef__this_7 = __this;
		U3CTransSceneU3Ec__Iterator0_t3 * L_10 = V_0;
		return L_10;
	}
}
// System.Void endtext::.ctor()
extern "C" void endtext__ctor_m13 (endtext_t7 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m30(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void endtext::Start()
extern "C" void endtext_Start_m14 (endtext_t7 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void endtext::Update()
extern const MethodInfo* Component_GetComponent_TisGUIText_t8_m56_MethodInfo_var;
extern "C" void endtext_Update_m15 (endtext_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisGUIText_t8_m56_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___time_5);
		float L_1 = Time_get_deltaTime_m40(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___time_5 = ((float)((float)L_0+(float)L_1));
		float L_2 = (__this->___time_5);
		if ((!(((float)L_2) >= ((float)(2.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		endtext_Text_m16(__this, /*hidden argument*/NULL);
		__this->___time_5 = (-2.0f);
		goto IL_0044;
	}

IL_0038:
	{
		GUIText_t8 * L_3 = Component_GetComponent_TisGUIText_t8_m56(__this, /*hidden argument*/Component_GetComponent_TisGUIText_t8_m56_MethodInfo_var);
		__this->___txt_2 = L_3;
	}

IL_0044:
	{
		return;
	}
}
// System.Void endtext::Text()
extern const MethodInfo* Component_GetComponent_TisGUIText_t8_m56_MethodInfo_var;
extern const MethodInfo* SingletonMonoBehaviour_1_get_Instance_m44_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral1;
extern Il2CppCodeGenString* _stringLiteral2;
extern Il2CppCodeGenString* _stringLiteral3;
extern Il2CppCodeGenString* _stringLiteral4;
extern Il2CppCodeGenString* _stringLiteral5;
extern Il2CppCodeGenString* _stringLiteral6;
extern Il2CppCodeGenString* _stringLiteral7;
extern Il2CppCodeGenString* _stringLiteral8;
extern Il2CppCodeGenString* _stringLiteral9;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral11;
extern Il2CppCodeGenString* _stringLiteral12;
extern Il2CppCodeGenString* _stringLiteral13;
extern Il2CppCodeGenString* _stringLiteral14;
extern "C" void endtext_Text_m16 (endtext_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisGUIText_t8_m56_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		SingletonMonoBehaviour_1_get_Instance_m44_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		_stringLiteral7 = il2cpp_codegen_string_literal_from_index(7);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		_stringLiteral12 = il2cpp_codegen_string_literal_from_index(12);
		_stringLiteral13 = il2cpp_codegen_string_literal_from_index(13);
		_stringLiteral14 = il2cpp_codegen_string_literal_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIText_t8 * L_0 = Component_GetComponent_TisGUIText_t8_m56(__this, /*hidden argument*/Component_GetComponent_TisGUIText_t8_m56_MethodInfo_var);
		__this->___txt_2 = L_0;
		int32_t L_1 = (__this->___t_4);
		if (L_1)
		{
			goto IL_0043;
		}
	}
	{
		GUIText_t8 * L_2 = (__this->___txtchar_3);
		NullCheck(L_2);
		GUIText_set_text_m57(L_2, _stringLiteral0, /*hidden argument*/NULL);
		GUIText_t8 * L_3 = (__this->___txt_2);
		NullCheck(L_3);
		GUIText_set_text_m57(L_3, _stringLiteral1, /*hidden argument*/NULL);
		__this->___t_4 = 1;
		goto IL_02a6;
	}

IL_0043:
	{
		int32_t L_4 = (__this->___t_4);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_007b;
		}
	}
	{
		GUIText_t8 * L_5 = (__this->___txtchar_3);
		NullCheck(L_5);
		GUIText_set_text_m57(L_5, _stringLiteral2, /*hidden argument*/NULL);
		GUIText_t8 * L_6 = (__this->___txt_2);
		NullCheck(L_6);
		GUIText_set_text_m57(L_6, _stringLiteral3, /*hidden argument*/NULL);
		__this->___t_4 = 2;
		goto IL_02a6;
	}

IL_007b:
	{
		int32_t L_7 = (__this->___t_4);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_00b3;
		}
	}
	{
		GUIText_t8 * L_8 = (__this->___txtchar_3);
		NullCheck(L_8);
		GUIText_set_text_m57(L_8, _stringLiteral0, /*hidden argument*/NULL);
		GUIText_t8 * L_9 = (__this->___txt_2);
		NullCheck(L_9);
		GUIText_set_text_m57(L_9, _stringLiteral4, /*hidden argument*/NULL);
		__this->___t_4 = 3;
		goto IL_02a6;
	}

IL_00b3:
	{
		int32_t L_10 = (__this->___t_4);
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_00eb;
		}
	}
	{
		GUIText_t8 * L_11 = (__this->___txtchar_3);
		NullCheck(L_11);
		GUIText_set_text_m57(L_11, _stringLiteral2, /*hidden argument*/NULL);
		GUIText_t8 * L_12 = (__this->___txt_2);
		NullCheck(L_12);
		GUIText_set_text_m57(L_12, _stringLiteral5, /*hidden argument*/NULL);
		__this->___t_4 = 4;
		goto IL_02a6;
	}

IL_00eb:
	{
		int32_t L_13 = (__this->___t_4);
		if ((!(((uint32_t)L_13) == ((uint32_t)4))))
		{
			goto IL_012e;
		}
	}
	{
		GUIText_t8 * L_14 = (__this->___txtchar_3);
		NullCheck(L_14);
		GUIText_set_text_m57(L_14, _stringLiteral0, /*hidden argument*/NULL);
		GUIText_t8 * L_15 = (__this->___txt_2);
		NullCheck(L_15);
		GUIText_set_text_m57(L_15, _stringLiteral6, /*hidden argument*/NULL);
		__this->___time_5 = (-1.0f);
		__this->___t_4 = 5;
		goto IL_02a6;
	}

IL_012e:
	{
		int32_t L_16 = (__this->___t_4);
		if ((!(((uint32_t)L_16) == ((uint32_t)5))))
		{
			goto IL_0166;
		}
	}
	{
		GUIText_t8 * L_17 = (__this->___txtchar_3);
		NullCheck(L_17);
		GUIText_set_text_m57(L_17, _stringLiteral2, /*hidden argument*/NULL);
		GUIText_t8 * L_18 = (__this->___txt_2);
		NullCheck(L_18);
		GUIText_set_text_m57(L_18, _stringLiteral7, /*hidden argument*/NULL);
		__this->___t_4 = 6;
		goto IL_02a6;
	}

IL_0166:
	{
		int32_t L_19 = (__this->___t_4);
		if ((!(((uint32_t)L_19) == ((uint32_t)6))))
		{
			goto IL_018e;
		}
	}
	{
		GUIText_t8 * L_20 = (__this->___txt_2);
		NullCheck(L_20);
		GUIText_set_text_m57(L_20, _stringLiteral8, /*hidden argument*/NULL);
		__this->___t_4 = 7;
		goto IL_02a6;
	}

IL_018e:
	{
		int32_t L_21 = (__this->___t_4);
		if ((!(((uint32_t)L_21) == ((uint32_t)7))))
		{
			goto IL_01c6;
		}
	}
	{
		GUIText_t8 * L_22 = (__this->___txtchar_3);
		NullCheck(L_22);
		GUIText_set_text_m57(L_22, _stringLiteral9, /*hidden argument*/NULL);
		GUIText_t8 * L_23 = (__this->___txt_2);
		NullCheck(L_23);
		GUIText_set_text_m57(L_23, _stringLiteral10, /*hidden argument*/NULL);
		__this->___t_4 = 8;
		goto IL_02a6;
	}

IL_01c6:
	{
		int32_t L_24 = (__this->___t_4);
		if ((!(((uint32_t)L_24) == ((uint32_t)8))))
		{
			goto IL_01ff;
		}
	}
	{
		GUIText_t8 * L_25 = (__this->___txtchar_3);
		NullCheck(L_25);
		GUIText_set_text_m57(L_25, _stringLiteral0, /*hidden argument*/NULL);
		GUIText_t8 * L_26 = (__this->___txt_2);
		NullCheck(L_26);
		GUIText_set_text_m57(L_26, _stringLiteral11, /*hidden argument*/NULL);
		__this->___t_4 = ((int32_t)9);
		goto IL_02a6;
	}

IL_01ff:
	{
		int32_t L_27 = (__this->___t_4);
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0239;
		}
	}
	{
		GUIText_t8 * L_28 = (__this->___txtchar_3);
		NullCheck(L_28);
		GUIText_set_text_m57(L_28, _stringLiteral2, /*hidden argument*/NULL);
		GUIText_t8 * L_29 = (__this->___txt_2);
		NullCheck(L_29);
		GUIText_set_text_m57(L_29, _stringLiteral12, /*hidden argument*/NULL);
		__this->___t_4 = ((int32_t)10);
		goto IL_02a6;
	}

IL_0239:
	{
		int32_t L_30 = (__this->___t_4);
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_027e;
		}
	}
	{
		GUIText_t8 * L_31 = (__this->___txtchar_3);
		NullCheck(L_31);
		GUIText_set_text_m57(L_31, _stringLiteral9, /*hidden argument*/NULL);
		GUIText_t8 * L_32 = (__this->___txt_2);
		NullCheck(L_32);
		GUIText_set_text_m57(L_32, _stringLiteral13, /*hidden argument*/NULL);
		__this->___time_5 = (-30.0f);
		__this->___t_4 = ((int32_t)11);
		goto IL_02a6;
	}

IL_027e:
	{
		int32_t L_33 = (__this->___t_4);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_02a6;
		}
	}
	{
		__this->___t_4 = 0;
		FadeManager_t4 * L_34 = SingletonMonoBehaviour_1_get_Instance_m44(NULL /*static, unused*/, /*hidden argument*/SingletonMonoBehaviour_1_get_Instance_m44_MethodInfo_var);
		NullCheck(L_34);
		FadeManager_LoadLevel_m11(L_34, _stringLiteral14, (1.0f), /*hidden argument*/NULL);
	}

IL_02a6:
	{
		return;
	}
}
// System.Void main::.ctor()
extern Il2CppCodeGenString* _stringLiteral15;
extern Il2CppCodeGenString* _stringLiteral16;
extern Il2CppCodeGenString* _stringLiteral17;
extern Il2CppCodeGenString* _stringLiteral18;
extern Il2CppCodeGenString* _stringLiteral19;
extern Il2CppCodeGenString* _stringLiteral20;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern Il2CppCodeGenString* _stringLiteral23;
extern "C" void main__ctor_m17 (main_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		_stringLiteral20 = il2cpp_codegen_string_literal_from_index(20);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___fwidth_5 = (900.0f);
		__this->___fheight_6 = (600.0f);
		__this->___buttonsize_12 = (25.0f);
		__this->___buttonsize2_13 = (17.0f);
		__this->___startTime_44 = (2.0f);
		__this->___Data1_46 = _stringLiteral15;
		__this->___Data2_47 = _stringLiteral16;
		__this->___Data3_48 = _stringLiteral17;
		__this->___Data4_49 = _stringLiteral18;
		__this->___Data5_50 = _stringLiteral19;
		__this->___Data6_51 = _stringLiteral20;
		__this->___Data7_52 = _stringLiteral21;
		__this->___savesyuueki_56 = _stringLiteral22;
		__this->___savescore_57 = _stringLiteral23;
		MonoBehaviour__ctor_m30(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void main::Start()
extern TypeInfo* CharU5BU5D_t25_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral24;
extern Il2CppCodeGenString* _stringLiteral25;
extern Il2CppCodeGenString* _stringLiteral26;
extern Il2CppCodeGenString* _stringLiteral27;
extern Il2CppCodeGenString* _stringLiteral28;
extern "C" void main_Start_m18 (main_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		_stringLiteral27 = il2cpp_codegen_string_literal_from_index(27);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = Screen_get_width_m34(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___width_7 = (((float)((float)L_0)));
		int32_t L_1 = Screen_get_height_m33(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___height_8 = (((float)((float)L_1)));
		float L_2 = (__this->___width_7);
		float L_3 = (__this->___height_8);
		__this->___aspect_14 = ((float)((float)L_2/(float)L_3));
		float L_4 = (__this->___width_7);
		float L_5 = (__this->___fwidth_5);
		__this->___sw_9 = ((float)((float)L_4/(float)L_5));
		float L_6 = (__this->___height_8);
		float L_7 = (__this->___fheight_6);
		__this->___sh_10 = ((float)((float)L_6/(float)L_7));
		float L_8 = (__this->___width_7);
		float L_9 = (__this->___height_8);
		__this->___aspect_14 = ((float)((float)L_8/(float)L_9));
		float L_10 = (__this->___aspect_14);
		if ((!(((double)(((double)((double)L_10)))) <= ((double)(1.55)))))
		{
			goto IL_0079;
		}
	}

IL_0079:
	{
		float L_11 = (__this->___aspect_14);
		if ((!(((double)(((double)((double)L_11)))) <= ((double)(1.6)))))
		{
			goto IL_00bc;
		}
	}
	{
		float L_12 = (__this->___aspect_14);
		if ((!(((double)(((double)((double)L_12)))) > ((double)(1.45)))))
		{
			goto IL_00bc;
		}
	}
	{
		float L_13 = (__this->___width_7);
		float L_14 = (__this->___fwidth_5);
		__this->___sw_9 = ((float)((float)L_13/(float)((float)((float)L_14+(float)(50.0f)))));
	}

IL_00bc:
	{
		float L_15 = (__this->___aspect_14);
		if ((!(((double)(((double)((double)L_15)))) <= ((double)(1.7)))))
		{
			goto IL_00ff;
		}
	}
	{
		float L_16 = (__this->___aspect_14);
		if ((!(((double)(((double)((double)L_16)))) > ((double)(1.6)))))
		{
			goto IL_00ff;
		}
	}
	{
		float L_17 = (__this->___width_7);
		float L_18 = (__this->___fwidth_5);
		__this->___sw_9 = ((float)((float)L_17/(float)((float)((float)L_18+(float)(70.0f)))));
	}

IL_00ff:
	{
		float L_19 = (__this->___aspect_14);
		if ((!(((double)(((double)((double)L_19)))) > ((double)(1.7)))))
		{
			goto IL_012d;
		}
	}
	{
		float L_20 = (__this->___width_7);
		float L_21 = (__this->___fwidth_5);
		__this->___sw_9 = ((float)((float)L_20/(float)((float)((float)L_21+(float)(110.0f)))));
	}

IL_012d:
	{
		float L_22 = (__this->___buttonsize_12);
		float L_23 = (__this->___sw_9);
		__this->___buttonsize_12 = ((float)((float)L_22*(float)L_23));
		float L_24 = (__this->___buttonsize2_13);
		float L_25 = (__this->___sw_9);
		__this->___buttonsize2_13 = ((float)((float)L_24*(float)L_25));
		String_t* L_26 = (__this->___Data1_46);
		int32_t L_27 = PlayerPrefs_GetInt_m58(NULL /*static, unused*/, L_26, 1, /*hidden argument*/NULL);
		__this->___day_28 = L_27;
		String_t* L_28 = (__this->___Data2_47);
		int32_t L_29 = PlayerPrefs_GetInt_m58(NULL /*static, unused*/, L_28, ((int32_t)100), /*hidden argument*/NULL);
		__this->___money_32 = L_29;
		String_t* L_30 = (__this->___Data3_48);
		int32_t L_31 = PlayerPrefs_GetInt_m58(NULL /*static, unused*/, L_30, 0, /*hidden argument*/NULL);
		__this->___syuueki_29 = L_31;
		String_t* L_32 = (__this->___Data4_49);
		int32_t L_33 = PlayerPrefs_GetInt_m58(NULL /*static, unused*/, L_32, 0, /*hidden argument*/NULL);
		__this->___money2_33 = L_33;
		String_t* L_34 = (__this->___Data5_50);
		int32_t L_35 = PlayerPrefs_GetInt_m58(NULL /*static, unused*/, L_34, 0, /*hidden argument*/NULL);
		__this->___syuueki2_30 = L_35;
		String_t* L_36 = (__this->___Data6_51);
		String_t* L_37 = PlayerPrefs_GetString_m59(NULL /*static, unused*/, L_36, _stringLiteral24, /*hidden argument*/NULL);
		__this->___savemaplv_38 = L_37;
		String_t* L_38 = (__this->___Data7_52);
		String_t* L_39 = PlayerPrefs_GetString_m59(NULL /*static, unused*/, L_38, _stringLiteral25, /*hidden argument*/NULL);
		__this->___savemoney_39 = L_39;
		int32_t L_40 = PlayerPrefs_GetInt_m58(NULL /*static, unused*/, _stringLiteral26, 1, /*hidden argument*/NULL);
		__this->___savesyuu_55 = L_40;
		int32_t L_41 = PlayerPrefs_GetInt_m58(NULL /*static, unused*/, _stringLiteral27, 1, /*hidden argument*/NULL);
		__this->___score_54 = L_41;
		String_t* L_42 = (__this->___savemaplv_38);
		CharU5BU5D_t25* L_43 = ((CharU5BU5D_t25*)SZArrayNew(CharU5BU5D_t25_il2cpp_TypeInfo_var, 1));
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_43, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)44);
		NullCheck(L_42);
		StringU5BU5D_t14* L_44 = String_Split_m60(L_42, L_43, /*hidden argument*/NULL);
		__this->___savemaplv1_37 = L_44;
		V_0 = 0;
		goto IL_0238;
	}

IL_021f:
	{
		Int32U5BU5D_t15* L_45 = (__this->___maplv_27);
		int32_t L_46 = V_0;
		StringU5BU5D_t14* L_47 = (__this->___savemaplv1_37);
		int32_t L_48 = V_0;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		int32_t L_49 = L_48;
		int32_t L_50 = Int32_Parse_m61(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_47, L_49, sizeof(String_t*))), /*hidden argument*/NULL);
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_45, L_46, sizeof(int32_t))) = (int32_t)L_50;
		int32_t L_51 = V_0;
		V_0 = ((int32_t)((int32_t)L_51+(int32_t)1));
	}

IL_0238:
	{
		int32_t L_52 = V_0;
		if ((((int32_t)L_52) < ((int32_t)((int32_t)25))))
		{
			goto IL_021f;
		}
	}
	{
		String_t* L_53 = (__this->___savemoney_39);
		CharU5BU5D_t25* L_54 = ((CharU5BU5D_t25*)SZArrayNew(CharU5BU5D_t25_il2cpp_TypeInfo_var, 1));
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_54, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)44);
		NullCheck(L_53);
		StringU5BU5D_t14* L_55 = String_Split_m60(L_53, L_54, /*hidden argument*/NULL);
		__this->___savemoneys_40 = L_55;
		V_1 = 0;
		goto IL_027c;
	}

IL_0263:
	{
		Int32U5BU5D_t15* L_56 = (__this->___savemoneyi_41);
		int32_t L_57 = V_1;
		StringU5BU5D_t14* L_58 = (__this->___savemoneys_40);
		int32_t L_59 = V_1;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = L_59;
		int32_t L_61 = Int32_Parse_m61(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_58, L_60, sizeof(String_t*))), /*hidden argument*/NULL);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_56, L_57, sizeof(int32_t))) = (int32_t)L_61;
		int32_t L_62 = V_1;
		V_1 = ((int32_t)((int32_t)L_62+(int32_t)1));
	}

IL_027c:
	{
		int32_t L_63 = V_1;
		if ((((int32_t)L_63) < ((int32_t)((int32_t)35))))
		{
			goto IL_0263;
		}
	}
	{
		GameObjectU5BU5D_t12* L_64 = (__this->___music_21);
		GameObject_t18 * L_65 = GameObject_Find_m62(NULL /*static, unused*/, _stringLiteral28, /*hidden argument*/NULL);
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, 0);
		ArrayElementTypeCheck (L_64, L_65);
		*((GameObject_t18 **)(GameObject_t18 **)SZArrayLdElema(L_64, 0, sizeof(GameObject_t18 *))) = (GameObject_t18 *)L_65;
		main_reset_m19(__this, /*hidden argument*/NULL);
		main_syuuekik_m23(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_texts_m26(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void main::reset()
extern "C" void main_reset_m19 (main_t9 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___startTime_44);
		__this->___timer_45 = L_0;
		return;
	}
}
// System.Void main::Update()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t14_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral29;
extern Il2CppCodeGenString* _stringLiteral30;
extern "C" void main_Update_m20 (main_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		StringU5BU5D_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral29 = il2cpp_codegen_string_literal_from_index(29);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUITextU5BU5D_t13* L_0 = (__this->___menu_17);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 1);
		int32_t L_1 = 1;
		int32_t* L_2 = &(__this->___day_28);
		String_t* L_3 = Int32_ToString_m63(L_2, /*hidden argument*/NULL);
		NullCheck((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_0, L_1, sizeof(GUIText_t8 *))));
		GUIText_set_text_m57((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_0, L_1, sizeof(GUIText_t8 *))), L_3, /*hidden argument*/NULL);
		GUITextU5BU5D_t13* L_4 = (__this->___menu_17);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		int32_t L_5 = 2;
		int32_t* L_6 = &(__this->___syuueki_29);
		String_t* L_7 = Int32_ToString_m63(L_6, /*hidden argument*/NULL);
		NullCheck((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_4, L_5, sizeof(GUIText_t8 *))));
		GUIText_set_text_m57((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_4, L_5, sizeof(GUIText_t8 *))), L_7, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___syuueki2_30);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		GUITextU5BU5D_t13* L_9 = (__this->___menu_17);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 2);
		int32_t L_10 = 2;
		int32_t* L_11 = &(__this->___syuueki2_30);
		String_t* L_12 = Int32_ToString_m63(L_11, /*hidden argument*/NULL);
		int32_t* L_13 = &(__this->___syuueki_29);
		String_t* L_14 = Int32_ToString_m63(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m64(NULL /*static, unused*/, L_12, _stringLiteral29, L_14, /*hidden argument*/NULL);
		NullCheck((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_9, L_10, sizeof(GUIText_t8 *))));
		GUIText_set_text_m57((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_9, L_10, sizeof(GUIText_t8 *))), L_15, /*hidden argument*/NULL);
	}

IL_0069:
	{
		int32_t L_16 = (__this->___syuueki3_31);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		GUITextU5BU5D_t13* L_17 = (__this->___menu_17);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		int32_t L_18 = 2;
		StringU5BU5D_t14* L_19 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 5));
		int32_t* L_20 = &(__this->___syuueki3_31);
		String_t* L_21 = Int32_ToString_m63(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		ArrayElementTypeCheck (L_19, L_21);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, 0, sizeof(String_t*))) = (String_t*)L_21;
		StringU5BU5D_t14* L_22 = L_19;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 1);
		ArrayElementTypeCheck (L_22, _stringLiteral30);
		*((String_t**)(String_t**)SZArrayLdElema(L_22, 1, sizeof(String_t*))) = (String_t*)_stringLiteral30;
		StringU5BU5D_t14* L_23 = L_22;
		int32_t* L_24 = &(__this->___syuueki2_30);
		String_t* L_25 = Int32_ToString_m63(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 2);
		ArrayElementTypeCheck (L_23, L_25);
		*((String_t**)(String_t**)SZArrayLdElema(L_23, 2, sizeof(String_t*))) = (String_t*)L_25;
		StringU5BU5D_t14* L_26 = L_23;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 3);
		ArrayElementTypeCheck (L_26, _stringLiteral29);
		*((String_t**)(String_t**)SZArrayLdElema(L_26, 3, sizeof(String_t*))) = (String_t*)_stringLiteral29;
		StringU5BU5D_t14* L_27 = L_26;
		int32_t* L_28 = &(__this->___syuueki_29);
		String_t* L_29 = Int32_ToString_m63(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 4);
		ArrayElementTypeCheck (L_27, L_29);
		*((String_t**)(String_t**)SZArrayLdElema(L_27, 4, sizeof(String_t*))) = (String_t*)L_29;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_30 = String_Concat_m65(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		NullCheck((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_17, L_18, sizeof(GUIText_t8 *))));
		GUIText_set_text_m57((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_17, L_18, sizeof(GUIText_t8 *))), L_30, /*hidden argument*/NULL);
	}

IL_00c7:
	{
		GUITextU5BU5D_t13* L_31 = (__this->___menu_17);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 3);
		int32_t L_32 = 3;
		int32_t* L_33 = &(__this->___money_32);
		String_t* L_34 = Int32_ToString_m63(L_33, /*hidden argument*/NULL);
		NullCheck((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_31, L_32, sizeof(GUIText_t8 *))));
		GUIText_set_text_m57((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_31, L_32, sizeof(GUIText_t8 *))), L_34, /*hidden argument*/NULL);
		int32_t L_35 = (__this->___money2_33);
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_0118;
		}
	}
	{
		GUITextU5BU5D_t13* L_36 = (__this->___menu_17);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 3);
		int32_t L_37 = 3;
		int32_t* L_38 = &(__this->___money2_33);
		String_t* L_39 = Int32_ToString_m63(L_38, /*hidden argument*/NULL);
		int32_t* L_40 = &(__this->___money_32);
		String_t* L_41 = Int32_ToString_m63(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_42 = String_Concat_m64(NULL /*static, unused*/, L_39, _stringLiteral29, L_41, /*hidden argument*/NULL);
		NullCheck((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_36, L_37, sizeof(GUIText_t8 *))));
		GUIText_set_text_m57((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_36, L_37, sizeof(GUIText_t8 *))), L_42, /*hidden argument*/NULL);
	}

IL_0118:
	{
		int32_t L_43 = (__this->___money3_34);
		if ((((int32_t)L_43) <= ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		GUITextU5BU5D_t13* L_44 = (__this->___menu_17);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, 3);
		int32_t L_45 = 3;
		StringU5BU5D_t14* L_46 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 5));
		int32_t* L_47 = &(__this->___money3_34);
		String_t* L_48 = Int32_ToString_m63(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 0);
		ArrayElementTypeCheck (L_46, L_48);
		*((String_t**)(String_t**)SZArrayLdElema(L_46, 0, sizeof(String_t*))) = (String_t*)L_48;
		StringU5BU5D_t14* L_49 = L_46;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 1);
		ArrayElementTypeCheck (L_49, _stringLiteral30);
		*((String_t**)(String_t**)SZArrayLdElema(L_49, 1, sizeof(String_t*))) = (String_t*)_stringLiteral30;
		StringU5BU5D_t14* L_50 = L_49;
		int32_t* L_51 = &(__this->___money2_33);
		String_t* L_52 = Int32_ToString_m63(L_51, /*hidden argument*/NULL);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 2);
		ArrayElementTypeCheck (L_50, L_52);
		*((String_t**)(String_t**)SZArrayLdElema(L_50, 2, sizeof(String_t*))) = (String_t*)L_52;
		StringU5BU5D_t14* L_53 = L_50;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 3);
		ArrayElementTypeCheck (L_53, _stringLiteral29);
		*((String_t**)(String_t**)SZArrayLdElema(L_53, 3, sizeof(String_t*))) = (String_t*)_stringLiteral29;
		StringU5BU5D_t14* L_54 = L_53;
		int32_t* L_55 = &(__this->___money_32);
		String_t* L_56 = Int32_ToString_m63(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 4);
		ArrayElementTypeCheck (L_54, L_56);
		*((String_t**)(String_t**)SZArrayLdElema(L_54, 4, sizeof(String_t*))) = (String_t*)L_56;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_57 = String_Concat_m65(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		NullCheck((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_44, L_45, sizeof(GUIText_t8 *))));
		GUIText_set_text_m57((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_44, L_45, sizeof(GUIText_t8 *))), L_57, /*hidden argument*/NULL);
	}

IL_0176:
	{
		float L_58 = (__this->___timer_45);
		float L_59 = Time_get_deltaTime_m40(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___timer_45 = ((float)((float)L_58-(float)L_59));
		float L_60 = (__this->___timer_45);
		if ((!(((float)L_60) <= ((float)(0.0f)))))
		{
			goto IL_01c7;
		}
	}
	{
		main_dayk_m22(__this, /*hidden argument*/NULL);
		main_syuuekik_m23(__this, /*hidden argument*/NULL);
		main_datasave_m21(__this, /*hidden argument*/NULL);
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
		main_texts_m26(__this, /*hidden argument*/NULL);
		__this->___timer_45 = (2.0f);
	}

IL_01c7:
	{
		return;
	}
}
// System.Void main::datasave()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral31;
extern "C" void main_datasave_m21 (main_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		_stringLiteral31 = il2cpp_codegen_string_literal_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0024;
	}

IL_0007:
	{
		StringU5BU5D_t14* L_0 = (__this->___savemaplv1_37);
		int32_t L_1 = V_0;
		Int32U5BU5D_t15* L_2 = (__this->___maplv_27);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		String_t* L_4 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3, sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		ArrayElementTypeCheck (L_0, L_4);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, L_1, sizeof(String_t*))) = (String_t*)L_4;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)25))))
		{
			goto IL_0007;
		}
	}
	{
		StringU5BU5D_t14* L_7 = (__this->___savemaplv1_37);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Join_m66(NULL /*static, unused*/, _stringLiteral31, L_7, /*hidden argument*/NULL);
		__this->___savemaplv_38 = L_8;
		V_1 = 0;
		goto IL_0066;
	}

IL_0049:
	{
		StringU5BU5D_t14* L_9 = (__this->___savemoneys_40);
		int32_t L_10 = V_1;
		Int32U5BU5D_t15* L_11 = (__this->___savemoneyi_41);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		String_t* L_13 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12, sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		ArrayElementTypeCheck (L_9, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, L_10, sizeof(String_t*))) = (String_t*)L_13;
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0066:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)35))))
		{
			goto IL_0049;
		}
	}
	{
		StringU5BU5D_t14* L_16 = (__this->___savemoneys_40);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Join_m66(NULL /*static, unused*/, _stringLiteral31, L_16, /*hidden argument*/NULL);
		__this->___savemoney_39 = L_17;
		String_t* L_18 = (__this->___Data1_46);
		int32_t L_19 = (__this->___day_28);
		PlayerPrefs_SetInt_m67(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		String_t* L_20 = (__this->___Data2_47);
		int32_t L_21 = (__this->___money_32);
		PlayerPrefs_SetInt_m67(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		String_t* L_22 = (__this->___Data3_48);
		int32_t L_23 = (__this->___syuueki_29);
		PlayerPrefs_SetInt_m67(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		String_t* L_24 = (__this->___Data4_49);
		int32_t L_25 = (__this->___money2_33);
		PlayerPrefs_SetInt_m67(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		String_t* L_26 = (__this->___Data5_50);
		int32_t L_27 = (__this->___syuueki2_30);
		PlayerPrefs_SetInt_m67(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		String_t* L_28 = (__this->___Data6_51);
		String_t* L_29 = (__this->___savemaplv_38);
		PlayerPrefs_SetString_m68(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		String_t* L_30 = (__this->___Data7_52);
		String_t* L_31 = (__this->___savemoney_39);
		PlayerPrefs_SetString_m68(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		return;
	}
}
// System.Void main::dayk()
extern "C" void main_dayk_m22 (main_t9 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___day_28);
		__this->___day_28 = ((int32_t)((int32_t)L_0+(int32_t)1));
		return;
	}
}
// System.Void main::syuuekik()
extern "C" void main_syuuekik_m23 (main_t9 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___syuueki_29);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)100000000))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_1 = (__this->___syuueki2_30);
		__this->___syuueki2_30 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = (__this->___syuueki_29);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_2-(int32_t)((int32_t)100000000)));
	}

IL_0030:
	{
		int32_t L_3 = (__this->___syuueki2_30);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)100000000))))
		{
			goto IL_004b;
		}
	}
	{
		__this->___syuueki2_30 = ((int32_t)100000000);
	}

IL_004b:
	{
		int32_t L_4 = (__this->___syuueki3_31);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)1000000000))))
		{
			goto IL_0066;
		}
	}
	{
		__this->___syuueki3_31 = ((int32_t)999999999);
	}

IL_0066:
	{
		int32_t L_5 = (__this->___money_32);
		int32_t L_6 = (__this->___syuueki_29);
		__this->___money_32 = ((int32_t)((int32_t)L_5+(int32_t)L_6));
		int32_t L_7 = (__this->___money2_33);
		int32_t L_8 = (__this->___syuueki2_30);
		__this->___money2_33 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		int32_t L_9 = (__this->___money3_34);
		int32_t L_10 = (__this->___syuueki3_31);
		__this->___money3_34 = ((int32_t)((int32_t)L_9+(int32_t)L_10));
		return;
	}
}
// System.Void main::moneyk()
extern "C" void main_moneyk_m24 (main_t9 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___money_32);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)100000000))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_1 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_2-(int32_t)((int32_t)100000000)));
	}

IL_0030:
	{
		int32_t L_3 = (__this->___money2_33);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)100000000))))
		{
			goto IL_004b;
		}
	}
	{
		__this->___money2_33 = ((int32_t)100000000);
	}

IL_004b:
	{
		int32_t L_4 = (__this->___money3_34);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)1000000000))))
		{
			goto IL_0066;
		}
	}
	{
		__this->___money3_34 = ((int32_t)999999999);
	}

IL_0066:
	{
		Int32U5BU5D_t15* L_5 = (__this->___mapste1_43);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, 3, sizeof(int32_t))) = (int32_t)1;
		V_0 = 2;
		goto IL_00a4;
	}

IL_0076:
	{
		Int32U5BU5D_t15* L_6 = (__this->___maplv_27);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_8, sizeof(int32_t)))) < ((int32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		Int32U5BU5D_t15* L_9 = (__this->___mapste1_43);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		int32_t* L_10 = ((int32_t*)(int32_t*)SZArrayLdElema(L_9, 3, sizeof(int32_t)));
		Int32U5BU5D_t15* L_11 = (__this->___maplv_27);
		int32_t L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		int32_t L_14 = V_0;
		*((int32_t*)(L_10)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_10))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_13, sizeof(int32_t)))*(int32_t)L_14))-(int32_t)1))));
	}

IL_00a0:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_00a4:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)21))))
		{
			goto IL_0076;
		}
	}
	{
		Int32U5BU5D_t15* L_17 = (__this->___mapste1_43);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 3);
		int32_t L_18 = 3;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_17, L_18, sizeof(int32_t)))) < ((int32_t)((int32_t)1000000000))))
		{
			goto IL_00cb;
		}
	}
	{
		Int32U5BU5D_t15* L_19 = (__this->___mapste1_43);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_19, 3, sizeof(int32_t))) = (int32_t)((int32_t)999999999);
	}

IL_00cb:
	{
		StringU5BU5D_t14* L_20 = (__this->___buttonmoney_35);
		Int32U5BU5D_t15* L_21 = (__this->___mapste1_43);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		String_t* L_22 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_21, 3, sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		ArrayElementTypeCheck (L_20, L_22);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, 1, sizeof(String_t*))) = (String_t*)L_22;
		return;
	}
}
// System.Void main::mapmoneyk()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral29;
extern "C" void main_mapmoneyk_m25 (main_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		_stringLiteral29 = il2cpp_codegen_string_literal_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_0024;
	}

IL_0007:
	{
		StringU5BU5D_t14* L_0 = (__this->___savemoneys_40);
		int32_t L_1 = V_0;
		Int32U5BU5D_t15* L_2 = (__this->___savemoneyi_41);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		String_t* L_4 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3, sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		ArrayElementTypeCheck (L_0, L_4);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, L_1, sizeof(String_t*))) = (String_t*)L_4;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)26))))
		{
			goto IL_0007;
		}
	}
	{
		V_1 = 0;
		goto IL_005e;
	}

IL_0033:
	{
		StringU5BU5D_t14* L_7 = (__this->___savemoneys_40);
		int32_t L_8 = V_1;
		Int32U5BU5D_t15* L_9 = (__this->___savemoneyi_41);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)((int32_t)L_10*(int32_t)2)));
		String_t* L_11 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_9, ((int32_t)((int32_t)L_10*(int32_t)2)), sizeof(int32_t))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m69(NULL /*static, unused*/, L_11, _stringLiteral29, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)L_8*(int32_t)2)));
		ArrayElementTypeCheck (L_7, L_12);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, ((int32_t)((int32_t)L_8*(int32_t)2)), sizeof(String_t*))) = (String_t*)L_12;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)14))))
		{
			goto IL_0033;
		}
	}
	{
		V_2 = 0;
		goto IL_008f;
	}

IL_006d:
	{
		Int32U5BU5D_t15* L_15 = (__this->___savemoneyi_41);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16*(int32_t)2)));
		int32_t L_17 = ((int32_t)((int32_t)L_16*(int32_t)2));
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_15, L_17, sizeof(int32_t))))
		{
			goto IL_008b;
		}
	}
	{
		StringU5BU5D_t14* L_18 = (__this->___savemoneys_40);
		int32_t L_19 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)((int32_t)L_19*(int32_t)2)));
		ArrayElementTypeCheck (L_18, L_20);
		*((String_t**)(String_t**)SZArrayLdElema(L_18, ((int32_t)((int32_t)L_19*(int32_t)2)), sizeof(String_t*))) = (String_t*)L_20;
	}

IL_008b:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_008f:
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)14))))
		{
			goto IL_006d;
		}
	}
	{
		V_3 = ((int32_t)27);
		goto IL_00c6;
	}

IL_009f:
	{
		StringU5BU5D_t14* L_23 = (__this->___savemoneys_40);
		int32_t L_24 = V_3;
		Int32U5BU5D_t15* L_25 = (__this->___savemoneyi_41);
		int32_t L_26 = V_3;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		String_t* L_27 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_25, L_26, sizeof(int32_t))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m69(NULL /*static, unused*/, L_27, _stringLiteral29, /*hidden argument*/NULL);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		ArrayElementTypeCheck (L_23, L_28);
		*((String_t**)(String_t**)SZArrayLdElema(L_23, L_24, sizeof(String_t*))) = (String_t*)L_28;
		int32_t L_29 = V_3;
		V_3 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00c6:
	{
		int32_t L_30 = V_3;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)35))))
		{
			goto IL_009f;
		}
	}
	{
		return;
	}
}
// System.Void main::texts()
extern const MethodInfo* Object_Instantiate_TisGameObject_t18_m71_MethodInfo_var;
extern "C" void main_texts_m26 (main_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_Instantiate_TisGameObject_t18_m71_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->___TextDeg_23);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)25))))
		{
			goto IL_00b9;
		}
	}
	{
		GameObjectU5BU5D_t12* L_1 = (__this->___charTexture_16);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		int32_t L_2 = 0;
		Object_Destroy_m37(NULL /*static, unused*/, (*(GameObject_t18 **)(GameObject_t18 **)SZArrayLdElema(L_1, L_2, sizeof(GameObject_t18 *))), /*hidden argument*/NULL);
		__this->___Textv_24 = 0;
		V_0 = 2;
		goto IL_0048;
	}

IL_0028:
	{
		Int32U5BU5D_t15* L_3 = (__this->___maplv_27);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_5, sizeof(int32_t)))) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_6 = (__this->___Textv_24);
		__this->___Textv_24 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0044:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)21))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_9 = (__this->___Textv_24);
		int32_t L_10 = Random_Range_m70(NULL /*static, unused*/, 1, ((int32_t)((int32_t)5+(int32_t)L_9)), /*hidden argument*/NULL);
		__this->___TextDeg_23 = L_10;
		main_ctexts_m27(__this, /*hidden argument*/NULL);
		V_1 = 1;
		goto IL_00ab;
	}

IL_0071:
	{
		int32_t L_11 = (__this->___TextDeg_23);
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00a7;
		}
	}
	{
		GameObjectU5BU5D_t12* L_13 = (__this->___charTexture_16);
		GameObjectU5BU5D_t12* L_14 = (__this->___charTexture_16);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		GameObject_t18 * L_17 = Object_Instantiate_TisGameObject_t18_m71(NULL /*static, unused*/, (*(GameObject_t18 **)(GameObject_t18 **)SZArrayLdElema(L_14, L_16, sizeof(GameObject_t18 *))), /*hidden argument*/Object_Instantiate_TisGameObject_t18_m71_MethodInfo_var);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		ArrayElementTypeCheck (L_13, L_17);
		*((GameObject_t18 **)(GameObject_t18 **)SZArrayLdElema(L_13, 0, sizeof(GameObject_t18 *))) = (GameObject_t18 *)L_17;
		GUITextU5BU5D_t13* L_18 = (__this->___text1_18);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 2);
		int32_t L_19 = 2;
		StringU5BU5D_t14* L_20 = (__this->___chartext_26);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		NullCheck((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_18, L_19, sizeof(GUIText_t8 *))));
		GUIText_set_text_m57((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_18, L_19, sizeof(GUIText_t8 *))), (*(String_t**)(String_t**)SZArrayLdElema(L_20, L_22, sizeof(String_t*))), /*hidden argument*/NULL);
	}

IL_00a7:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_24 = V_1;
		int32_t L_25 = (__this->___Textv_24);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)((int32_t)5+(int32_t)L_25)))))
		{
			goto IL_0071;
		}
	}

IL_00b9:
	{
		int32_t L_26 = (__this->___TextDeg_23);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)30))))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_27 = (__this->___TextP_25);
		if (L_27)
		{
			goto IL_0135;
		}
	}
	{
		GameObjectU5BU5D_t12* L_28 = (__this->___charTexture_16);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 0);
		int32_t L_29 = 0;
		Object_Destroy_m37(NULL /*static, unused*/, (*(GameObject_t18 **)(GameObject_t18 **)SZArrayLdElema(L_28, L_29, sizeof(GameObject_t18 *))), /*hidden argument*/NULL);
		V_2 = ((int32_t)30);
		goto IL_012d;
	}

IL_00e6:
	{
		int32_t L_30 = (__this->___TextDeg_23);
		int32_t L_31 = V_2;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_0129;
		}
	}
	{
		GameObjectU5BU5D_t12* L_32 = (__this->___charTexture_16);
		GameObjectU5BU5D_t12* L_33 = (__this->___charTexture_16);
		int32_t L_34 = V_2;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)((int32_t)L_34-(int32_t)((int32_t)25))));
		int32_t L_35 = ((int32_t)((int32_t)L_34-(int32_t)((int32_t)25)));
		GameObject_t18 * L_36 = Object_Instantiate_TisGameObject_t18_m71(NULL /*static, unused*/, (*(GameObject_t18 **)(GameObject_t18 **)SZArrayLdElema(L_33, L_35, sizeof(GameObject_t18 *))), /*hidden argument*/Object_Instantiate_TisGameObject_t18_m71_MethodInfo_var);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 0);
		ArrayElementTypeCheck (L_32, L_36);
		*((GameObject_t18 **)(GameObject_t18 **)SZArrayLdElema(L_32, 0, sizeof(GameObject_t18 *))) = (GameObject_t18 *)L_36;
		int32_t L_37 = V_2;
		main_ctexts1_m28(__this, ((int32_t)((int32_t)L_37-(int32_t)((int32_t)20))), /*hidden argument*/NULL);
		GUITextU5BU5D_t13* L_38 = (__this->___text1_18);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 2);
		int32_t L_39 = 2;
		StringU5BU5D_t14* L_40 = (__this->___chartext_26);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		int32_t L_41 = 0;
		NullCheck((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_38, L_39, sizeof(GUIText_t8 *))));
		GUIText_set_text_m57((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_38, L_39, sizeof(GUIText_t8 *))), (*(String_t**)(String_t**)SZArrayLdElema(L_40, L_41, sizeof(String_t*))), /*hidden argument*/NULL);
	}

IL_0129:
	{
		int32_t L_42 = V_2;
		V_2 = ((int32_t)((int32_t)L_42+(int32_t)1));
	}

IL_012d:
	{
		int32_t L_43 = V_2;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)49))))
		{
			goto IL_00e6;
		}
	}

IL_0135:
	{
		return;
	}
}
// System.Void main::ctexts()
extern Il2CppCodeGenString* _stringLiteral32;
extern Il2CppCodeGenString* _stringLiteral33;
extern Il2CppCodeGenString* _stringLiteral34;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral36;
extern Il2CppCodeGenString* _stringLiteral37;
extern Il2CppCodeGenString* _stringLiteral38;
extern Il2CppCodeGenString* _stringLiteral39;
extern Il2CppCodeGenString* _stringLiteral40;
extern Il2CppCodeGenString* _stringLiteral41;
extern Il2CppCodeGenString* _stringLiteral42;
extern Il2CppCodeGenString* _stringLiteral43;
extern Il2CppCodeGenString* _stringLiteral44;
extern Il2CppCodeGenString* _stringLiteral45;
extern Il2CppCodeGenString* _stringLiteral46;
extern Il2CppCodeGenString* _stringLiteral47;
extern Il2CppCodeGenString* _stringLiteral48;
extern Il2CppCodeGenString* _stringLiteral49;
extern Il2CppCodeGenString* _stringLiteral50;
extern Il2CppCodeGenString* _stringLiteral51;
extern Il2CppCodeGenString* _stringLiteral52;
extern Il2CppCodeGenString* _stringLiteral53;
extern Il2CppCodeGenString* _stringLiteral54;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern "C" void main_ctexts_m27 (main_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral32 = il2cpp_codegen_string_literal_from_index(32);
		_stringLiteral33 = il2cpp_codegen_string_literal_from_index(33);
		_stringLiteral34 = il2cpp_codegen_string_literal_from_index(34);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral36 = il2cpp_codegen_string_literal_from_index(36);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		_stringLiteral38 = il2cpp_codegen_string_literal_from_index(38);
		_stringLiteral39 = il2cpp_codegen_string_literal_from_index(39);
		_stringLiteral40 = il2cpp_codegen_string_literal_from_index(40);
		_stringLiteral41 = il2cpp_codegen_string_literal_from_index(41);
		_stringLiteral42 = il2cpp_codegen_string_literal_from_index(42);
		_stringLiteral43 = il2cpp_codegen_string_literal_from_index(43);
		_stringLiteral44 = il2cpp_codegen_string_literal_from_index(44);
		_stringLiteral45 = il2cpp_codegen_string_literal_from_index(45);
		_stringLiteral46 = il2cpp_codegen_string_literal_from_index(46);
		_stringLiteral47 = il2cpp_codegen_string_literal_from_index(47);
		_stringLiteral48 = il2cpp_codegen_string_literal_from_index(48);
		_stringLiteral49 = il2cpp_codegen_string_literal_from_index(49);
		_stringLiteral50 = il2cpp_codegen_string_literal_from_index(50);
		_stringLiteral51 = il2cpp_codegen_string_literal_from_index(51);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		_stringLiteral53 = il2cpp_codegen_string_literal_from_index(53);
		_stringLiteral54 = il2cpp_codegen_string_literal_from_index(54);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t14* L_0 = (__this->___chartext_26);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 1);
		ArrayElementTypeCheck (L_0, _stringLiteral32);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 1, sizeof(String_t*))) = (String_t*)_stringLiteral32;
		StringU5BU5D_t14* L_1 = (__this->___chartext_26);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 2);
		ArrayElementTypeCheck (L_1, _stringLiteral33);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 2, sizeof(String_t*))) = (String_t*)_stringLiteral33;
		StringU5BU5D_t14* L_2 = (__this->___chartext_26);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 3);
		ArrayElementTypeCheck (L_2, _stringLiteral34);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 3, sizeof(String_t*))) = (String_t*)_stringLiteral34;
		StringU5BU5D_t14* L_3 = (__this->___chartext_26);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 4);
		ArrayElementTypeCheck (L_3, _stringLiteral35);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 4, sizeof(String_t*))) = (String_t*)_stringLiteral35;
		StringU5BU5D_t14* L_4 = (__this->___chartext_26);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, _stringLiteral36);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 0, sizeof(String_t*))) = (String_t*)_stringLiteral36;
		StringU5BU5D_t14* L_5 = (__this->___chartext_26);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, _stringLiteral37);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5, sizeof(String_t*))) = (String_t*)_stringLiteral37;
		StringU5BU5D_t14* L_6 = (__this->___chartext_26);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, _stringLiteral38);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6, sizeof(String_t*))) = (String_t*)_stringLiteral38;
		StringU5BU5D_t14* L_7 = (__this->___chartext_26);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 7);
		ArrayElementTypeCheck (L_7, _stringLiteral39);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 7, sizeof(String_t*))) = (String_t*)_stringLiteral39;
		StringU5BU5D_t14* L_8 = (__this->___chartext_26);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 8);
		ArrayElementTypeCheck (L_8, _stringLiteral40);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 8, sizeof(String_t*))) = (String_t*)_stringLiteral40;
		StringU5BU5D_t14* L_9 = (__this->___chartext_26);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)9));
		ArrayElementTypeCheck (L_9, _stringLiteral41);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, ((int32_t)9), sizeof(String_t*))) = (String_t*)_stringLiteral41;
		StringU5BU5D_t14* L_10 = (__this->___chartext_26);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)10));
		ArrayElementTypeCheck (L_10, _stringLiteral42);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, ((int32_t)10), sizeof(String_t*))) = (String_t*)_stringLiteral42;
		StringU5BU5D_t14* L_11 = (__this->___chartext_26);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, ((int32_t)11));
		ArrayElementTypeCheck (L_11, _stringLiteral43);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, ((int32_t)11), sizeof(String_t*))) = (String_t*)_stringLiteral43;
		StringU5BU5D_t14* L_12 = (__this->___chartext_26);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, ((int32_t)12));
		ArrayElementTypeCheck (L_12, _stringLiteral44);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, ((int32_t)12), sizeof(String_t*))) = (String_t*)_stringLiteral44;
		StringU5BU5D_t14* L_13 = (__this->___chartext_26);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, ((int32_t)13));
		ArrayElementTypeCheck (L_13, _stringLiteral45);
		*((String_t**)(String_t**)SZArrayLdElema(L_13, ((int32_t)13), sizeof(String_t*))) = (String_t*)_stringLiteral45;
		StringU5BU5D_t14* L_14 = (__this->___chartext_26);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, ((int32_t)14));
		ArrayElementTypeCheck (L_14, _stringLiteral46);
		*((String_t**)(String_t**)SZArrayLdElema(L_14, ((int32_t)14), sizeof(String_t*))) = (String_t*)_stringLiteral46;
		StringU5BU5D_t14* L_15 = (__this->___chartext_26);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)15));
		ArrayElementTypeCheck (L_15, _stringLiteral47);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, ((int32_t)15), sizeof(String_t*))) = (String_t*)_stringLiteral47;
		StringU5BU5D_t14* L_16 = (__this->___chartext_26);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)16));
		ArrayElementTypeCheck (L_16, _stringLiteral48);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, ((int32_t)16), sizeof(String_t*))) = (String_t*)_stringLiteral48;
		StringU5BU5D_t14* L_17 = (__this->___chartext_26);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)17));
		ArrayElementTypeCheck (L_17, _stringLiteral49);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, ((int32_t)17), sizeof(String_t*))) = (String_t*)_stringLiteral49;
		StringU5BU5D_t14* L_18 = (__this->___chartext_26);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)18));
		ArrayElementTypeCheck (L_18, _stringLiteral50);
		*((String_t**)(String_t**)SZArrayLdElema(L_18, ((int32_t)18), sizeof(String_t*))) = (String_t*)_stringLiteral50;
		StringU5BU5D_t14* L_19 = (__this->___chartext_26);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)19));
		ArrayElementTypeCheck (L_19, _stringLiteral51);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, ((int32_t)19), sizeof(String_t*))) = (String_t*)_stringLiteral51;
		StringU5BU5D_t14* L_20 = (__this->___chartext_26);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)20));
		ArrayElementTypeCheck (L_20, _stringLiteral52);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, ((int32_t)20), sizeof(String_t*))) = (String_t*)_stringLiteral52;
		StringU5BU5D_t14* L_21 = (__this->___chartext_26);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)21));
		ArrayElementTypeCheck (L_21, _stringLiteral53);
		*((String_t**)(String_t**)SZArrayLdElema(L_21, ((int32_t)21), sizeof(String_t*))) = (String_t*)_stringLiteral53;
		StringU5BU5D_t14* L_22 = (__this->___chartext_26);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, ((int32_t)22));
		ArrayElementTypeCheck (L_22, _stringLiteral54);
		*((String_t**)(String_t**)SZArrayLdElema(L_22, ((int32_t)22), sizeof(String_t*))) = (String_t*)_stringLiteral54;
		StringU5BU5D_t14* L_23 = (__this->___chartext_26);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)23));
		ArrayElementTypeCheck (L_23, _stringLiteral55);
		*((String_t**)(String_t**)SZArrayLdElema(L_23, ((int32_t)23), sizeof(String_t*))) = (String_t*)_stringLiteral55;
		StringU5BU5D_t14* L_24 = (__this->___chartext_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)24));
		ArrayElementTypeCheck (L_24, _stringLiteral56);
		*((String_t**)(String_t**)SZArrayLdElema(L_24, ((int32_t)24), sizeof(String_t*))) = (String_t*)_stringLiteral56;
		return;
	}
}
// System.Void main::ctexts1(System.Int32)
extern Il2CppCodeGenString* _stringLiteral57;
extern Il2CppCodeGenString* _stringLiteral58;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral60;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral62;
extern Il2CppCodeGenString* _stringLiteral63;
extern Il2CppCodeGenString* _stringLiteral64;
extern Il2CppCodeGenString* _stringLiteral65;
extern Il2CppCodeGenString* _stringLiteral66;
extern Il2CppCodeGenString* _stringLiteral67;
extern Il2CppCodeGenString* _stringLiteral68;
extern Il2CppCodeGenString* _stringLiteral69;
extern Il2CppCodeGenString* _stringLiteral70;
extern Il2CppCodeGenString* _stringLiteral71;
extern Il2CppCodeGenString* _stringLiteral72;
extern Il2CppCodeGenString* _stringLiteral73;
extern Il2CppCodeGenString* _stringLiteral74;
extern Il2CppCodeGenString* _stringLiteral75;
extern Il2CppCodeGenString* _stringLiteral76;
extern Il2CppCodeGenString* _stringLiteral77;
extern Il2CppCodeGenString* _stringLiteral78;
extern Il2CppCodeGenString* _stringLiteral79;
extern Il2CppCodeGenString* _stringLiteral80;
extern Il2CppCodeGenString* _stringLiteral81;
extern Il2CppCodeGenString* _stringLiteral82;
extern Il2CppCodeGenString* _stringLiteral83;
extern Il2CppCodeGenString* _stringLiteral84;
extern Il2CppCodeGenString* _stringLiteral85;
extern Il2CppCodeGenString* _stringLiteral86;
extern Il2CppCodeGenString* _stringLiteral87;
extern Il2CppCodeGenString* _stringLiteral88;
extern Il2CppCodeGenString* _stringLiteral89;
extern Il2CppCodeGenString* _stringLiteral90;
extern Il2CppCodeGenString* _stringLiteral91;
extern Il2CppCodeGenString* _stringLiteral92;
extern Il2CppCodeGenString* _stringLiteral93;
extern Il2CppCodeGenString* _stringLiteral94;
extern Il2CppCodeGenString* _stringLiteral95;
extern Il2CppCodeGenString* _stringLiteral96;
extern Il2CppCodeGenString* _stringLiteral97;
extern Il2CppCodeGenString* _stringLiteral98;
extern Il2CppCodeGenString* _stringLiteral99;
extern Il2CppCodeGenString* _stringLiteral100;
extern Il2CppCodeGenString* _stringLiteral101;
extern Il2CppCodeGenString* _stringLiteral102;
extern Il2CppCodeGenString* _stringLiteral103;
extern Il2CppCodeGenString* _stringLiteral104;
extern Il2CppCodeGenString* _stringLiteral105;
extern Il2CppCodeGenString* _stringLiteral106;
extern Il2CppCodeGenString* _stringLiteral107;
extern Il2CppCodeGenString* _stringLiteral108;
extern Il2CppCodeGenString* _stringLiteral109;
extern Il2CppCodeGenString* _stringLiteral110;
extern Il2CppCodeGenString* _stringLiteral111;
extern Il2CppCodeGenString* _stringLiteral112;
extern Il2CppCodeGenString* _stringLiteral113;
extern Il2CppCodeGenString* _stringLiteral114;
extern Il2CppCodeGenString* _stringLiteral115;
extern Il2CppCodeGenString* _stringLiteral116;
extern Il2CppCodeGenString* _stringLiteral117;
extern Il2CppCodeGenString* _stringLiteral118;
extern Il2CppCodeGenString* _stringLiteral119;
extern Il2CppCodeGenString* _stringLiteral120;
extern Il2CppCodeGenString* _stringLiteral121;
extern Il2CppCodeGenString* _stringLiteral122;
extern Il2CppCodeGenString* _stringLiteral123;
extern Il2CppCodeGenString* _stringLiteral124;
extern Il2CppCodeGenString* _stringLiteral125;
extern Il2CppCodeGenString* _stringLiteral126;
extern Il2CppCodeGenString* _stringLiteral127;
extern Il2CppCodeGenString* _stringLiteral128;
extern Il2CppCodeGenString* _stringLiteral129;
extern Il2CppCodeGenString* _stringLiteral130;
extern Il2CppCodeGenString* _stringLiteral131;
extern Il2CppCodeGenString* _stringLiteral132;
extern Il2CppCodeGenString* _stringLiteral133;
extern Il2CppCodeGenString* _stringLiteral134;
extern Il2CppCodeGenString* _stringLiteral135;
extern Il2CppCodeGenString* _stringLiteral136;
extern Il2CppCodeGenString* _stringLiteral137;
extern Il2CppCodeGenString* _stringLiteral138;
extern Il2CppCodeGenString* _stringLiteral139;
extern Il2CppCodeGenString* _stringLiteral140;
extern Il2CppCodeGenString* _stringLiteral141;
extern Il2CppCodeGenString* _stringLiteral142;
extern Il2CppCodeGenString* _stringLiteral143;
extern Il2CppCodeGenString* _stringLiteral144;
extern Il2CppCodeGenString* _stringLiteral145;
extern Il2CppCodeGenString* _stringLiteral146;
extern Il2CppCodeGenString* _stringLiteral147;
extern Il2CppCodeGenString* _stringLiteral148;
extern Il2CppCodeGenString* _stringLiteral149;
extern Il2CppCodeGenString* _stringLiteral150;
extern Il2CppCodeGenString* _stringLiteral151;
extern Il2CppCodeGenString* _stringLiteral152;
extern Il2CppCodeGenString* _stringLiteral153;
extern Il2CppCodeGenString* _stringLiteral154;
extern Il2CppCodeGenString* _stringLiteral155;
extern Il2CppCodeGenString* _stringLiteral156;
extern Il2CppCodeGenString* _stringLiteral157;
extern Il2CppCodeGenString* _stringLiteral158;
extern Il2CppCodeGenString* _stringLiteral159;
extern Il2CppCodeGenString* _stringLiteral160;
extern Il2CppCodeGenString* _stringLiteral161;
extern Il2CppCodeGenString* _stringLiteral162;
extern Il2CppCodeGenString* _stringLiteral163;
extern Il2CppCodeGenString* _stringLiteral164;
extern Il2CppCodeGenString* _stringLiteral165;
extern Il2CppCodeGenString* _stringLiteral166;
extern Il2CppCodeGenString* _stringLiteral167;
extern Il2CppCodeGenString* _stringLiteral168;
extern Il2CppCodeGenString* _stringLiteral169;
extern Il2CppCodeGenString* _stringLiteral170;
extern Il2CppCodeGenString* _stringLiteral171;
extern Il2CppCodeGenString* _stringLiteral172;
extern Il2CppCodeGenString* _stringLiteral173;
extern Il2CppCodeGenString* _stringLiteral174;
extern Il2CppCodeGenString* _stringLiteral175;
extern Il2CppCodeGenString* _stringLiteral176;
extern Il2CppCodeGenString* _stringLiteral177;
extern Il2CppCodeGenString* _stringLiteral178;
extern Il2CppCodeGenString* _stringLiteral179;
extern Il2CppCodeGenString* _stringLiteral180;
extern Il2CppCodeGenString* _stringLiteral181;
extern Il2CppCodeGenString* _stringLiteral182;
extern Il2CppCodeGenString* _stringLiteral183;
extern Il2CppCodeGenString* _stringLiteral184;
extern Il2CppCodeGenString* _stringLiteral185;
extern Il2CppCodeGenString* _stringLiteral186;
extern Il2CppCodeGenString* _stringLiteral187;
extern Il2CppCodeGenString* _stringLiteral188;
extern Il2CppCodeGenString* _stringLiteral189;
extern Il2CppCodeGenString* _stringLiteral190;
extern Il2CppCodeGenString* _stringLiteral191;
extern Il2CppCodeGenString* _stringLiteral192;
extern Il2CppCodeGenString* _stringLiteral193;
extern Il2CppCodeGenString* _stringLiteral194;
extern Il2CppCodeGenString* _stringLiteral195;
extern Il2CppCodeGenString* _stringLiteral196;
extern Il2CppCodeGenString* _stringLiteral197;
extern Il2CppCodeGenString* _stringLiteral198;
extern Il2CppCodeGenString* _stringLiteral199;
extern Il2CppCodeGenString* _stringLiteral200;
extern Il2CppCodeGenString* _stringLiteral201;
extern Il2CppCodeGenString* _stringLiteral202;
extern Il2CppCodeGenString* _stringLiteral203;
extern Il2CppCodeGenString* _stringLiteral204;
extern Il2CppCodeGenString* _stringLiteral205;
extern Il2CppCodeGenString* _stringLiteral206;
extern Il2CppCodeGenString* _stringLiteral207;
extern Il2CppCodeGenString* _stringLiteral208;
extern Il2CppCodeGenString* _stringLiteral209;
extern Il2CppCodeGenString* _stringLiteral210;
extern Il2CppCodeGenString* _stringLiteral211;
extern Il2CppCodeGenString* _stringLiteral212;
extern Il2CppCodeGenString* _stringLiteral213;
extern Il2CppCodeGenString* _stringLiteral214;
extern Il2CppCodeGenString* _stringLiteral215;
extern Il2CppCodeGenString* _stringLiteral216;
extern Il2CppCodeGenString* _stringLiteral217;
extern Il2CppCodeGenString* _stringLiteral218;
extern Il2CppCodeGenString* _stringLiteral219;
extern Il2CppCodeGenString* _stringLiteral220;
extern Il2CppCodeGenString* _stringLiteral221;
extern Il2CppCodeGenString* _stringLiteral222;
extern Il2CppCodeGenString* _stringLiteral223;
extern Il2CppCodeGenString* _stringLiteral224;
extern Il2CppCodeGenString* _stringLiteral225;
extern Il2CppCodeGenString* _stringLiteral226;
extern Il2CppCodeGenString* _stringLiteral227;
extern Il2CppCodeGenString* _stringLiteral228;
extern Il2CppCodeGenString* _stringLiteral229;
extern Il2CppCodeGenString* _stringLiteral230;
extern Il2CppCodeGenString* _stringLiteral231;
extern Il2CppCodeGenString* _stringLiteral232;
extern Il2CppCodeGenString* _stringLiteral233;
extern Il2CppCodeGenString* _stringLiteral234;
extern Il2CppCodeGenString* _stringLiteral235;
extern Il2CppCodeGenString* _stringLiteral236;
extern Il2CppCodeGenString* _stringLiteral237;
extern Il2CppCodeGenString* _stringLiteral238;
extern Il2CppCodeGenString* _stringLiteral239;
extern Il2CppCodeGenString* _stringLiteral240;
extern Il2CppCodeGenString* _stringLiteral241;
extern "C" void main_ctexts1_m28 (main_t9 * __this, int32_t ___i, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		_stringLiteral58 = il2cpp_codegen_string_literal_from_index(58);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral60 = il2cpp_codegen_string_literal_from_index(60);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral62 = il2cpp_codegen_string_literal_from_index(62);
		_stringLiteral63 = il2cpp_codegen_string_literal_from_index(63);
		_stringLiteral64 = il2cpp_codegen_string_literal_from_index(64);
		_stringLiteral65 = il2cpp_codegen_string_literal_from_index(65);
		_stringLiteral66 = il2cpp_codegen_string_literal_from_index(66);
		_stringLiteral67 = il2cpp_codegen_string_literal_from_index(67);
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		_stringLiteral70 = il2cpp_codegen_string_literal_from_index(70);
		_stringLiteral71 = il2cpp_codegen_string_literal_from_index(71);
		_stringLiteral72 = il2cpp_codegen_string_literal_from_index(72);
		_stringLiteral73 = il2cpp_codegen_string_literal_from_index(73);
		_stringLiteral74 = il2cpp_codegen_string_literal_from_index(74);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
		_stringLiteral76 = il2cpp_codegen_string_literal_from_index(76);
		_stringLiteral77 = il2cpp_codegen_string_literal_from_index(77);
		_stringLiteral78 = il2cpp_codegen_string_literal_from_index(78);
		_stringLiteral79 = il2cpp_codegen_string_literal_from_index(79);
		_stringLiteral80 = il2cpp_codegen_string_literal_from_index(80);
		_stringLiteral81 = il2cpp_codegen_string_literal_from_index(81);
		_stringLiteral82 = il2cpp_codegen_string_literal_from_index(82);
		_stringLiteral83 = il2cpp_codegen_string_literal_from_index(83);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		_stringLiteral85 = il2cpp_codegen_string_literal_from_index(85);
		_stringLiteral86 = il2cpp_codegen_string_literal_from_index(86);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		_stringLiteral88 = il2cpp_codegen_string_literal_from_index(88);
		_stringLiteral89 = il2cpp_codegen_string_literal_from_index(89);
		_stringLiteral90 = il2cpp_codegen_string_literal_from_index(90);
		_stringLiteral91 = il2cpp_codegen_string_literal_from_index(91);
		_stringLiteral92 = il2cpp_codegen_string_literal_from_index(92);
		_stringLiteral93 = il2cpp_codegen_string_literal_from_index(93);
		_stringLiteral94 = il2cpp_codegen_string_literal_from_index(94);
		_stringLiteral95 = il2cpp_codegen_string_literal_from_index(95);
		_stringLiteral96 = il2cpp_codegen_string_literal_from_index(96);
		_stringLiteral97 = il2cpp_codegen_string_literal_from_index(97);
		_stringLiteral98 = il2cpp_codegen_string_literal_from_index(98);
		_stringLiteral99 = il2cpp_codegen_string_literal_from_index(99);
		_stringLiteral100 = il2cpp_codegen_string_literal_from_index(100);
		_stringLiteral101 = il2cpp_codegen_string_literal_from_index(101);
		_stringLiteral102 = il2cpp_codegen_string_literal_from_index(102);
		_stringLiteral103 = il2cpp_codegen_string_literal_from_index(103);
		_stringLiteral104 = il2cpp_codegen_string_literal_from_index(104);
		_stringLiteral105 = il2cpp_codegen_string_literal_from_index(105);
		_stringLiteral106 = il2cpp_codegen_string_literal_from_index(106);
		_stringLiteral107 = il2cpp_codegen_string_literal_from_index(107);
		_stringLiteral108 = il2cpp_codegen_string_literal_from_index(108);
		_stringLiteral109 = il2cpp_codegen_string_literal_from_index(109);
		_stringLiteral110 = il2cpp_codegen_string_literal_from_index(110);
		_stringLiteral111 = il2cpp_codegen_string_literal_from_index(111);
		_stringLiteral112 = il2cpp_codegen_string_literal_from_index(112);
		_stringLiteral113 = il2cpp_codegen_string_literal_from_index(113);
		_stringLiteral114 = il2cpp_codegen_string_literal_from_index(114);
		_stringLiteral115 = il2cpp_codegen_string_literal_from_index(115);
		_stringLiteral116 = il2cpp_codegen_string_literal_from_index(116);
		_stringLiteral117 = il2cpp_codegen_string_literal_from_index(117);
		_stringLiteral118 = il2cpp_codegen_string_literal_from_index(118);
		_stringLiteral119 = il2cpp_codegen_string_literal_from_index(119);
		_stringLiteral120 = il2cpp_codegen_string_literal_from_index(120);
		_stringLiteral121 = il2cpp_codegen_string_literal_from_index(121);
		_stringLiteral122 = il2cpp_codegen_string_literal_from_index(122);
		_stringLiteral123 = il2cpp_codegen_string_literal_from_index(123);
		_stringLiteral124 = il2cpp_codegen_string_literal_from_index(124);
		_stringLiteral125 = il2cpp_codegen_string_literal_from_index(125);
		_stringLiteral126 = il2cpp_codegen_string_literal_from_index(126);
		_stringLiteral127 = il2cpp_codegen_string_literal_from_index(127);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		_stringLiteral129 = il2cpp_codegen_string_literal_from_index(129);
		_stringLiteral130 = il2cpp_codegen_string_literal_from_index(130);
		_stringLiteral131 = il2cpp_codegen_string_literal_from_index(131);
		_stringLiteral132 = il2cpp_codegen_string_literal_from_index(132);
		_stringLiteral133 = il2cpp_codegen_string_literal_from_index(133);
		_stringLiteral134 = il2cpp_codegen_string_literal_from_index(134);
		_stringLiteral135 = il2cpp_codegen_string_literal_from_index(135);
		_stringLiteral136 = il2cpp_codegen_string_literal_from_index(136);
		_stringLiteral137 = il2cpp_codegen_string_literal_from_index(137);
		_stringLiteral138 = il2cpp_codegen_string_literal_from_index(138);
		_stringLiteral139 = il2cpp_codegen_string_literal_from_index(139);
		_stringLiteral140 = il2cpp_codegen_string_literal_from_index(140);
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		_stringLiteral142 = il2cpp_codegen_string_literal_from_index(142);
		_stringLiteral143 = il2cpp_codegen_string_literal_from_index(143);
		_stringLiteral144 = il2cpp_codegen_string_literal_from_index(144);
		_stringLiteral145 = il2cpp_codegen_string_literal_from_index(145);
		_stringLiteral146 = il2cpp_codegen_string_literal_from_index(146);
		_stringLiteral147 = il2cpp_codegen_string_literal_from_index(147);
		_stringLiteral148 = il2cpp_codegen_string_literal_from_index(148);
		_stringLiteral149 = il2cpp_codegen_string_literal_from_index(149);
		_stringLiteral150 = il2cpp_codegen_string_literal_from_index(150);
		_stringLiteral151 = il2cpp_codegen_string_literal_from_index(151);
		_stringLiteral152 = il2cpp_codegen_string_literal_from_index(152);
		_stringLiteral153 = il2cpp_codegen_string_literal_from_index(153);
		_stringLiteral154 = il2cpp_codegen_string_literal_from_index(154);
		_stringLiteral155 = il2cpp_codegen_string_literal_from_index(155);
		_stringLiteral156 = il2cpp_codegen_string_literal_from_index(156);
		_stringLiteral157 = il2cpp_codegen_string_literal_from_index(157);
		_stringLiteral158 = il2cpp_codegen_string_literal_from_index(158);
		_stringLiteral159 = il2cpp_codegen_string_literal_from_index(159);
		_stringLiteral160 = il2cpp_codegen_string_literal_from_index(160);
		_stringLiteral161 = il2cpp_codegen_string_literal_from_index(161);
		_stringLiteral162 = il2cpp_codegen_string_literal_from_index(162);
		_stringLiteral163 = il2cpp_codegen_string_literal_from_index(163);
		_stringLiteral164 = il2cpp_codegen_string_literal_from_index(164);
		_stringLiteral165 = il2cpp_codegen_string_literal_from_index(165);
		_stringLiteral166 = il2cpp_codegen_string_literal_from_index(166);
		_stringLiteral167 = il2cpp_codegen_string_literal_from_index(167);
		_stringLiteral168 = il2cpp_codegen_string_literal_from_index(168);
		_stringLiteral169 = il2cpp_codegen_string_literal_from_index(169);
		_stringLiteral170 = il2cpp_codegen_string_literal_from_index(170);
		_stringLiteral171 = il2cpp_codegen_string_literal_from_index(171);
		_stringLiteral172 = il2cpp_codegen_string_literal_from_index(172);
		_stringLiteral173 = il2cpp_codegen_string_literal_from_index(173);
		_stringLiteral174 = il2cpp_codegen_string_literal_from_index(174);
		_stringLiteral175 = il2cpp_codegen_string_literal_from_index(175);
		_stringLiteral176 = il2cpp_codegen_string_literal_from_index(176);
		_stringLiteral177 = il2cpp_codegen_string_literal_from_index(177);
		_stringLiteral178 = il2cpp_codegen_string_literal_from_index(178);
		_stringLiteral179 = il2cpp_codegen_string_literal_from_index(179);
		_stringLiteral180 = il2cpp_codegen_string_literal_from_index(180);
		_stringLiteral181 = il2cpp_codegen_string_literal_from_index(181);
		_stringLiteral182 = il2cpp_codegen_string_literal_from_index(182);
		_stringLiteral183 = il2cpp_codegen_string_literal_from_index(183);
		_stringLiteral184 = il2cpp_codegen_string_literal_from_index(184);
		_stringLiteral185 = il2cpp_codegen_string_literal_from_index(185);
		_stringLiteral186 = il2cpp_codegen_string_literal_from_index(186);
		_stringLiteral187 = il2cpp_codegen_string_literal_from_index(187);
		_stringLiteral188 = il2cpp_codegen_string_literal_from_index(188);
		_stringLiteral189 = il2cpp_codegen_string_literal_from_index(189);
		_stringLiteral190 = il2cpp_codegen_string_literal_from_index(190);
		_stringLiteral191 = il2cpp_codegen_string_literal_from_index(191);
		_stringLiteral192 = il2cpp_codegen_string_literal_from_index(192);
		_stringLiteral193 = il2cpp_codegen_string_literal_from_index(193);
		_stringLiteral194 = il2cpp_codegen_string_literal_from_index(194);
		_stringLiteral195 = il2cpp_codegen_string_literal_from_index(195);
		_stringLiteral196 = il2cpp_codegen_string_literal_from_index(196);
		_stringLiteral197 = il2cpp_codegen_string_literal_from_index(197);
		_stringLiteral198 = il2cpp_codegen_string_literal_from_index(198);
		_stringLiteral199 = il2cpp_codegen_string_literal_from_index(199);
		_stringLiteral200 = il2cpp_codegen_string_literal_from_index(200);
		_stringLiteral201 = il2cpp_codegen_string_literal_from_index(201);
		_stringLiteral202 = il2cpp_codegen_string_literal_from_index(202);
		_stringLiteral203 = il2cpp_codegen_string_literal_from_index(203);
		_stringLiteral204 = il2cpp_codegen_string_literal_from_index(204);
		_stringLiteral205 = il2cpp_codegen_string_literal_from_index(205);
		_stringLiteral206 = il2cpp_codegen_string_literal_from_index(206);
		_stringLiteral207 = il2cpp_codegen_string_literal_from_index(207);
		_stringLiteral208 = il2cpp_codegen_string_literal_from_index(208);
		_stringLiteral209 = il2cpp_codegen_string_literal_from_index(209);
		_stringLiteral210 = il2cpp_codegen_string_literal_from_index(210);
		_stringLiteral211 = il2cpp_codegen_string_literal_from_index(211);
		_stringLiteral212 = il2cpp_codegen_string_literal_from_index(212);
		_stringLiteral213 = il2cpp_codegen_string_literal_from_index(213);
		_stringLiteral214 = il2cpp_codegen_string_literal_from_index(214);
		_stringLiteral215 = il2cpp_codegen_string_literal_from_index(215);
		_stringLiteral216 = il2cpp_codegen_string_literal_from_index(216);
		_stringLiteral217 = il2cpp_codegen_string_literal_from_index(217);
		_stringLiteral218 = il2cpp_codegen_string_literal_from_index(218);
		_stringLiteral219 = il2cpp_codegen_string_literal_from_index(219);
		_stringLiteral220 = il2cpp_codegen_string_literal_from_index(220);
		_stringLiteral221 = il2cpp_codegen_string_literal_from_index(221);
		_stringLiteral222 = il2cpp_codegen_string_literal_from_index(222);
		_stringLiteral223 = il2cpp_codegen_string_literal_from_index(223);
		_stringLiteral224 = il2cpp_codegen_string_literal_from_index(224);
		_stringLiteral225 = il2cpp_codegen_string_literal_from_index(225);
		_stringLiteral226 = il2cpp_codegen_string_literal_from_index(226);
		_stringLiteral227 = il2cpp_codegen_string_literal_from_index(227);
		_stringLiteral228 = il2cpp_codegen_string_literal_from_index(228);
		_stringLiteral229 = il2cpp_codegen_string_literal_from_index(229);
		_stringLiteral230 = il2cpp_codegen_string_literal_from_index(230);
		_stringLiteral231 = il2cpp_codegen_string_literal_from_index(231);
		_stringLiteral232 = il2cpp_codegen_string_literal_from_index(232);
		_stringLiteral233 = il2cpp_codegen_string_literal_from_index(233);
		_stringLiteral234 = il2cpp_codegen_string_literal_from_index(234);
		_stringLiteral235 = il2cpp_codegen_string_literal_from_index(235);
		_stringLiteral236 = il2cpp_codegen_string_literal_from_index(236);
		_stringLiteral237 = il2cpp_codegen_string_literal_from_index(237);
		_stringLiteral238 = il2cpp_codegen_string_literal_from_index(238);
		_stringLiteral239 = il2cpp_codegen_string_literal_from_index(239);
		_stringLiteral240 = il2cpp_codegen_string_literal_from_index(240);
		_stringLiteral241 = il2cpp_codegen_string_literal_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___i;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_008b;
		}
	}
	{
		StringU5BU5D_t14* L_1 = (__this->___chartext_26);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, _stringLiteral57);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 0, sizeof(String_t*))) = (String_t*)_stringLiteral57;
		StringU5BU5D_t14* L_2 = (__this->___chartext_26);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral58);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 1, sizeof(String_t*))) = (String_t*)_stringLiteral58;
		StringU5BU5D_t14* L_3 = (__this->___chartext_26);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, _stringLiteral59);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 2, sizeof(String_t*))) = (String_t*)_stringLiteral59;
		StringU5BU5D_t14* L_4 = (__this->___chartext_26);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, _stringLiteral60);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 3, sizeof(String_t*))) = (String_t*)_stringLiteral60;
		StringU5BU5D_t14* L_5 = (__this->___chartext_26);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 4);
		ArrayElementTypeCheck (L_5, _stringLiteral61);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 4, sizeof(String_t*))) = (String_t*)_stringLiteral61;
		StringU5BU5D_t14* L_6 = (__this->___chartext_26);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 5);
		ArrayElementTypeCheck (L_6, _stringLiteral62);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 5, sizeof(String_t*))) = (String_t*)_stringLiteral62;
		StringU5BU5D_t14* L_7 = (__this->___chartext_26);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 6);
		ArrayElementTypeCheck (L_7, _stringLiteral63);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 6, sizeof(String_t*))) = (String_t*)_stringLiteral63;
		StringU5BU5D_t14* L_8 = (__this->___chartext_26);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 7);
		ArrayElementTypeCheck (L_8, _stringLiteral64);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 7, sizeof(String_t*))) = (String_t*)_stringLiteral64;
		StringU5BU5D_t14* L_9 = (__this->___chartext_26);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 8);
		ArrayElementTypeCheck (L_9, _stringLiteral65);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, 8, sizeof(String_t*))) = (String_t*)_stringLiteral65;
		StringU5BU5D_t14* L_10 = (__this->___chartext_26);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)9));
		ArrayElementTypeCheck (L_10, _stringLiteral66);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, ((int32_t)9), sizeof(String_t*))) = (String_t*)_stringLiteral66;
	}

IL_008b:
	{
		int32_t L_11 = ___i;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0132;
		}
	}
	{
		StringU5BU5D_t14* L_12 = (__this->___chartext_26);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		ArrayElementTypeCheck (L_12, _stringLiteral67);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 0, sizeof(String_t*))) = (String_t*)_stringLiteral67;
		StringU5BU5D_t14* L_13 = (__this->___chartext_26);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, _stringLiteral68);
		*((String_t**)(String_t**)SZArrayLdElema(L_13, 1, sizeof(String_t*))) = (String_t*)_stringLiteral68;
		StringU5BU5D_t14* L_14 = (__this->___chartext_26);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
		ArrayElementTypeCheck (L_14, _stringLiteral69);
		*((String_t**)(String_t**)SZArrayLdElema(L_14, 2, sizeof(String_t*))) = (String_t*)_stringLiteral69;
		StringU5BU5D_t14* L_15 = (__this->___chartext_26);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 3);
		ArrayElementTypeCheck (L_15, _stringLiteral70);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 3, sizeof(String_t*))) = (String_t*)_stringLiteral70;
		StringU5BU5D_t14* L_16 = (__this->___chartext_26);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, _stringLiteral71);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 4, sizeof(String_t*))) = (String_t*)_stringLiteral71;
		StringU5BU5D_t14* L_17 = (__this->___chartext_26);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 5);
		ArrayElementTypeCheck (L_17, _stringLiteral72);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, 5, sizeof(String_t*))) = (String_t*)_stringLiteral72;
		StringU5BU5D_t14* L_18 = (__this->___chartext_26);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 6);
		ArrayElementTypeCheck (L_18, _stringLiteral73);
		*((String_t**)(String_t**)SZArrayLdElema(L_18, 6, sizeof(String_t*))) = (String_t*)_stringLiteral73;
		StringU5BU5D_t14* L_19 = (__this->___chartext_26);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 7);
		ArrayElementTypeCheck (L_19, _stringLiteral74);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, 7, sizeof(String_t*))) = (String_t*)_stringLiteral74;
		StringU5BU5D_t14* L_20 = (__this->___chartext_26);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 8);
		ArrayElementTypeCheck (L_20, _stringLiteral75);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, 8, sizeof(String_t*))) = (String_t*)_stringLiteral75;
		StringU5BU5D_t14* L_21 = (__this->___chartext_26);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)9));
		ArrayElementTypeCheck (L_21, _stringLiteral76);
		*((String_t**)(String_t**)SZArrayLdElema(L_21, ((int32_t)9), sizeof(String_t*))) = (String_t*)_stringLiteral76;
		StringU5BU5D_t14* L_22 = (__this->___chartext_26);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, ((int32_t)10));
		ArrayElementTypeCheck (L_22, _stringLiteral77);
		*((String_t**)(String_t**)SZArrayLdElema(L_22, ((int32_t)10), sizeof(String_t*))) = (String_t*)_stringLiteral77;
		StringU5BU5D_t14* L_23 = (__this->___chartext_26);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)11));
		ArrayElementTypeCheck (L_23, _stringLiteral78);
		*((String_t**)(String_t**)SZArrayLdElema(L_23, ((int32_t)11), sizeof(String_t*))) = (String_t*)_stringLiteral78;
	}

IL_0132:
	{
		int32_t L_24 = ___i;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_01a2;
		}
	}
	{
		StringU5BU5D_t14* L_25 = (__this->___chartext_26);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, _stringLiteral79);
		*((String_t**)(String_t**)SZArrayLdElema(L_25, 0, sizeof(String_t*))) = (String_t*)_stringLiteral79;
		StringU5BU5D_t14* L_26 = (__this->___chartext_26);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 1);
		ArrayElementTypeCheck (L_26, _stringLiteral80);
		*((String_t**)(String_t**)SZArrayLdElema(L_26, 1, sizeof(String_t*))) = (String_t*)_stringLiteral80;
		StringU5BU5D_t14* L_27 = (__this->___chartext_26);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 2);
		ArrayElementTypeCheck (L_27, _stringLiteral81);
		*((String_t**)(String_t**)SZArrayLdElema(L_27, 2, sizeof(String_t*))) = (String_t*)_stringLiteral81;
		StringU5BU5D_t14* L_28 = (__this->___chartext_26);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 3);
		ArrayElementTypeCheck (L_28, _stringLiteral82);
		*((String_t**)(String_t**)SZArrayLdElema(L_28, 3, sizeof(String_t*))) = (String_t*)_stringLiteral82;
		StringU5BU5D_t14* L_29 = (__this->___chartext_26);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 4);
		ArrayElementTypeCheck (L_29, _stringLiteral83);
		*((String_t**)(String_t**)SZArrayLdElema(L_29, 4, sizeof(String_t*))) = (String_t*)_stringLiteral83;
		StringU5BU5D_t14* L_30 = (__this->___chartext_26);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 5);
		ArrayElementTypeCheck (L_30, _stringLiteral84);
		*((String_t**)(String_t**)SZArrayLdElema(L_30, 5, sizeof(String_t*))) = (String_t*)_stringLiteral84;
		StringU5BU5D_t14* L_31 = (__this->___chartext_26);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 6);
		ArrayElementTypeCheck (L_31, _stringLiteral85);
		*((String_t**)(String_t**)SZArrayLdElema(L_31, 6, sizeof(String_t*))) = (String_t*)_stringLiteral85;
		StringU5BU5D_t14* L_32 = (__this->___chartext_26);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 7);
		ArrayElementTypeCheck (L_32, _stringLiteral86);
		*((String_t**)(String_t**)SZArrayLdElema(L_32, 7, sizeof(String_t*))) = (String_t*)_stringLiteral86;
	}

IL_01a2:
	{
		int32_t L_33 = ___i;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0205;
		}
	}
	{
		StringU5BU5D_t14* L_34 = (__this->___chartext_26);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 0);
		ArrayElementTypeCheck (L_34, _stringLiteral87);
		*((String_t**)(String_t**)SZArrayLdElema(L_34, 0, sizeof(String_t*))) = (String_t*)_stringLiteral87;
		StringU5BU5D_t14* L_35 = (__this->___chartext_26);
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 1);
		ArrayElementTypeCheck (L_35, _stringLiteral88);
		*((String_t**)(String_t**)SZArrayLdElema(L_35, 1, sizeof(String_t*))) = (String_t*)_stringLiteral88;
		StringU5BU5D_t14* L_36 = (__this->___chartext_26);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 2);
		ArrayElementTypeCheck (L_36, _stringLiteral89);
		*((String_t**)(String_t**)SZArrayLdElema(L_36, 2, sizeof(String_t*))) = (String_t*)_stringLiteral89;
		StringU5BU5D_t14* L_37 = (__this->___chartext_26);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 3);
		ArrayElementTypeCheck (L_37, _stringLiteral90);
		*((String_t**)(String_t**)SZArrayLdElema(L_37, 3, sizeof(String_t*))) = (String_t*)_stringLiteral90;
		StringU5BU5D_t14* L_38 = (__this->___chartext_26);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 4);
		ArrayElementTypeCheck (L_38, _stringLiteral91);
		*((String_t**)(String_t**)SZArrayLdElema(L_38, 4, sizeof(String_t*))) = (String_t*)_stringLiteral91;
		StringU5BU5D_t14* L_39 = (__this->___chartext_26);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 5);
		ArrayElementTypeCheck (L_39, _stringLiteral92);
		*((String_t**)(String_t**)SZArrayLdElema(L_39, 5, sizeof(String_t*))) = (String_t*)_stringLiteral92;
		StringU5BU5D_t14* L_40 = (__this->___chartext_26);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 6);
		ArrayElementTypeCheck (L_40, _stringLiteral93);
		*((String_t**)(String_t**)SZArrayLdElema(L_40, 6, sizeof(String_t*))) = (String_t*)_stringLiteral93;
	}

IL_0205:
	{
		int32_t L_41 = ___i;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_0282;
		}
	}
	{
		StringU5BU5D_t14* L_42 = (__this->___chartext_26);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		ArrayElementTypeCheck (L_42, _stringLiteral94);
		*((String_t**)(String_t**)SZArrayLdElema(L_42, 0, sizeof(String_t*))) = (String_t*)_stringLiteral94;
		StringU5BU5D_t14* L_43 = (__this->___chartext_26);
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 1);
		ArrayElementTypeCheck (L_43, _stringLiteral95);
		*((String_t**)(String_t**)SZArrayLdElema(L_43, 1, sizeof(String_t*))) = (String_t*)_stringLiteral95;
		StringU5BU5D_t14* L_44 = (__this->___chartext_26);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, 2);
		ArrayElementTypeCheck (L_44, _stringLiteral96);
		*((String_t**)(String_t**)SZArrayLdElema(L_44, 2, sizeof(String_t*))) = (String_t*)_stringLiteral96;
		StringU5BU5D_t14* L_45 = (__this->___chartext_26);
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 3);
		ArrayElementTypeCheck (L_45, _stringLiteral97);
		*((String_t**)(String_t**)SZArrayLdElema(L_45, 3, sizeof(String_t*))) = (String_t*)_stringLiteral97;
		StringU5BU5D_t14* L_46 = (__this->___chartext_26);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 4);
		ArrayElementTypeCheck (L_46, _stringLiteral98);
		*((String_t**)(String_t**)SZArrayLdElema(L_46, 4, sizeof(String_t*))) = (String_t*)_stringLiteral98;
		StringU5BU5D_t14* L_47 = (__this->___chartext_26);
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 5);
		ArrayElementTypeCheck (L_47, _stringLiteral99);
		*((String_t**)(String_t**)SZArrayLdElema(L_47, 5, sizeof(String_t*))) = (String_t*)_stringLiteral99;
		StringU5BU5D_t14* L_48 = (__this->___chartext_26);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, 6);
		ArrayElementTypeCheck (L_48, _stringLiteral100);
		*((String_t**)(String_t**)SZArrayLdElema(L_48, 6, sizeof(String_t*))) = (String_t*)_stringLiteral100;
		StringU5BU5D_t14* L_49 = (__this->___chartext_26);
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 7);
		ArrayElementTypeCheck (L_49, _stringLiteral101);
		*((String_t**)(String_t**)SZArrayLdElema(L_49, 7, sizeof(String_t*))) = (String_t*)_stringLiteral101;
		StringU5BU5D_t14* L_50 = (__this->___chartext_26);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 8);
		ArrayElementTypeCheck (L_50, _stringLiteral102);
		*((String_t**)(String_t**)SZArrayLdElema(L_50, 8, sizeof(String_t*))) = (String_t*)_stringLiteral102;
	}

IL_0282:
	{
		int32_t L_51 = ___i;
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_030d;
		}
	}
	{
		StringU5BU5D_t14* L_52 = (__this->___chartext_26);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 0);
		ArrayElementTypeCheck (L_52, _stringLiteral103);
		*((String_t**)(String_t**)SZArrayLdElema(L_52, 0, sizeof(String_t*))) = (String_t*)_stringLiteral103;
		StringU5BU5D_t14* L_53 = (__this->___chartext_26);
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 1);
		ArrayElementTypeCheck (L_53, _stringLiteral104);
		*((String_t**)(String_t**)SZArrayLdElema(L_53, 1, sizeof(String_t*))) = (String_t*)_stringLiteral104;
		StringU5BU5D_t14* L_54 = (__this->___chartext_26);
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 2);
		ArrayElementTypeCheck (L_54, _stringLiteral105);
		*((String_t**)(String_t**)SZArrayLdElema(L_54, 2, sizeof(String_t*))) = (String_t*)_stringLiteral105;
		StringU5BU5D_t14* L_55 = (__this->___chartext_26);
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 3);
		ArrayElementTypeCheck (L_55, _stringLiteral106);
		*((String_t**)(String_t**)SZArrayLdElema(L_55, 3, sizeof(String_t*))) = (String_t*)_stringLiteral106;
		StringU5BU5D_t14* L_56 = (__this->___chartext_26);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 4);
		ArrayElementTypeCheck (L_56, _stringLiteral107);
		*((String_t**)(String_t**)SZArrayLdElema(L_56, 4, sizeof(String_t*))) = (String_t*)_stringLiteral107;
		StringU5BU5D_t14* L_57 = (__this->___chartext_26);
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 5);
		ArrayElementTypeCheck (L_57, _stringLiteral108);
		*((String_t**)(String_t**)SZArrayLdElema(L_57, 5, sizeof(String_t*))) = (String_t*)_stringLiteral108;
		StringU5BU5D_t14* L_58 = (__this->___chartext_26);
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, 6);
		ArrayElementTypeCheck (L_58, _stringLiteral109);
		*((String_t**)(String_t**)SZArrayLdElema(L_58, 6, sizeof(String_t*))) = (String_t*)_stringLiteral109;
		StringU5BU5D_t14* L_59 = (__this->___chartext_26);
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, 7);
		ArrayElementTypeCheck (L_59, _stringLiteral110);
		*((String_t**)(String_t**)SZArrayLdElema(L_59, 7, sizeof(String_t*))) = (String_t*)_stringLiteral110;
		StringU5BU5D_t14* L_60 = (__this->___chartext_26);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, 8);
		ArrayElementTypeCheck (L_60, _stringLiteral111);
		*((String_t**)(String_t**)SZArrayLdElema(L_60, 8, sizeof(String_t*))) = (String_t*)_stringLiteral111;
		StringU5BU5D_t14* L_61 = (__this->___chartext_26);
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, ((int32_t)9));
		ArrayElementTypeCheck (L_61, _stringLiteral112);
		*((String_t**)(String_t**)SZArrayLdElema(L_61, ((int32_t)9), sizeof(String_t*))) = (String_t*)_stringLiteral112;
	}

IL_030d:
	{
		int32_t L_62 = ___i;
		if ((!(((uint32_t)L_62) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0363;
		}
	}
	{
		StringU5BU5D_t14* L_63 = (__this->___chartext_26);
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, 0);
		ArrayElementTypeCheck (L_63, _stringLiteral113);
		*((String_t**)(String_t**)SZArrayLdElema(L_63, 0, sizeof(String_t*))) = (String_t*)_stringLiteral113;
		StringU5BU5D_t14* L_64 = (__this->___chartext_26);
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, 1);
		ArrayElementTypeCheck (L_64, _stringLiteral114);
		*((String_t**)(String_t**)SZArrayLdElema(L_64, 1, sizeof(String_t*))) = (String_t*)_stringLiteral114;
		StringU5BU5D_t14* L_65 = (__this->___chartext_26);
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, 2);
		ArrayElementTypeCheck (L_65, _stringLiteral115);
		*((String_t**)(String_t**)SZArrayLdElema(L_65, 2, sizeof(String_t*))) = (String_t*)_stringLiteral115;
		StringU5BU5D_t14* L_66 = (__this->___chartext_26);
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, 3);
		ArrayElementTypeCheck (L_66, _stringLiteral116);
		*((String_t**)(String_t**)SZArrayLdElema(L_66, 3, sizeof(String_t*))) = (String_t*)_stringLiteral116;
		StringU5BU5D_t14* L_67 = (__this->___chartext_26);
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, 4);
		ArrayElementTypeCheck (L_67, _stringLiteral117);
		*((String_t**)(String_t**)SZArrayLdElema(L_67, 4, sizeof(String_t*))) = (String_t*)_stringLiteral117;
		StringU5BU5D_t14* L_68 = (__this->___chartext_26);
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, 5);
		ArrayElementTypeCheck (L_68, _stringLiteral118);
		*((String_t**)(String_t**)SZArrayLdElema(L_68, 5, sizeof(String_t*))) = (String_t*)_stringLiteral118;
	}

IL_0363:
	{
		int32_t L_69 = ___i;
		if ((!(((uint32_t)L_69) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0434;
		}
	}
	{
		StringU5BU5D_t14* L_70 = (__this->___chartext_26);
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, 0);
		ArrayElementTypeCheck (L_70, _stringLiteral119);
		*((String_t**)(String_t**)SZArrayLdElema(L_70, 0, sizeof(String_t*))) = (String_t*)_stringLiteral119;
		StringU5BU5D_t14* L_71 = (__this->___chartext_26);
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		ArrayElementTypeCheck (L_71, _stringLiteral120);
		*((String_t**)(String_t**)SZArrayLdElema(L_71, 1, sizeof(String_t*))) = (String_t*)_stringLiteral120;
		StringU5BU5D_t14* L_72 = (__this->___chartext_26);
		NullCheck(L_72);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_72, 2);
		ArrayElementTypeCheck (L_72, _stringLiteral121);
		*((String_t**)(String_t**)SZArrayLdElema(L_72, 2, sizeof(String_t*))) = (String_t*)_stringLiteral121;
		StringU5BU5D_t14* L_73 = (__this->___chartext_26);
		NullCheck(L_73);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_73, 3);
		ArrayElementTypeCheck (L_73, _stringLiteral122);
		*((String_t**)(String_t**)SZArrayLdElema(L_73, 3, sizeof(String_t*))) = (String_t*)_stringLiteral122;
		StringU5BU5D_t14* L_74 = (__this->___chartext_26);
		NullCheck(L_74);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_74, 4);
		ArrayElementTypeCheck (L_74, _stringLiteral123);
		*((String_t**)(String_t**)SZArrayLdElema(L_74, 4, sizeof(String_t*))) = (String_t*)_stringLiteral123;
		StringU5BU5D_t14* L_75 = (__this->___chartext_26);
		NullCheck(L_75);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_75, 5);
		ArrayElementTypeCheck (L_75, _stringLiteral124);
		*((String_t**)(String_t**)SZArrayLdElema(L_75, 5, sizeof(String_t*))) = (String_t*)_stringLiteral124;
		StringU5BU5D_t14* L_76 = (__this->___chartext_26);
		NullCheck(L_76);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_76, 6);
		ArrayElementTypeCheck (L_76, _stringLiteral125);
		*((String_t**)(String_t**)SZArrayLdElema(L_76, 6, sizeof(String_t*))) = (String_t*)_stringLiteral125;
		StringU5BU5D_t14* L_77 = (__this->___chartext_26);
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 7);
		ArrayElementTypeCheck (L_77, _stringLiteral126);
		*((String_t**)(String_t**)SZArrayLdElema(L_77, 7, sizeof(String_t*))) = (String_t*)_stringLiteral126;
		StringU5BU5D_t14* L_78 = (__this->___chartext_26);
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 8);
		ArrayElementTypeCheck (L_78, _stringLiteral127);
		*((String_t**)(String_t**)SZArrayLdElema(L_78, 8, sizeof(String_t*))) = (String_t*)_stringLiteral127;
		StringU5BU5D_t14* L_79 = (__this->___chartext_26);
		NullCheck(L_79);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_79, ((int32_t)9));
		ArrayElementTypeCheck (L_79, _stringLiteral128);
		*((String_t**)(String_t**)SZArrayLdElema(L_79, ((int32_t)9), sizeof(String_t*))) = (String_t*)_stringLiteral128;
		StringU5BU5D_t14* L_80 = (__this->___chartext_26);
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, ((int32_t)10));
		ArrayElementTypeCheck (L_80, _stringLiteral129);
		*((String_t**)(String_t**)SZArrayLdElema(L_80, ((int32_t)10), sizeof(String_t*))) = (String_t*)_stringLiteral129;
		StringU5BU5D_t14* L_81 = (__this->___chartext_26);
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, ((int32_t)11));
		ArrayElementTypeCheck (L_81, _stringLiteral130);
		*((String_t**)(String_t**)SZArrayLdElema(L_81, ((int32_t)11), sizeof(String_t*))) = (String_t*)_stringLiteral130;
		StringU5BU5D_t14* L_82 = (__this->___chartext_26);
		NullCheck(L_82);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_82, ((int32_t)12));
		ArrayElementTypeCheck (L_82, _stringLiteral131);
		*((String_t**)(String_t**)SZArrayLdElema(L_82, ((int32_t)12), sizeof(String_t*))) = (String_t*)_stringLiteral131;
		StringU5BU5D_t14* L_83 = (__this->___chartext_26);
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, ((int32_t)13));
		ArrayElementTypeCheck (L_83, _stringLiteral132);
		*((String_t**)(String_t**)SZArrayLdElema(L_83, ((int32_t)13), sizeof(String_t*))) = (String_t*)_stringLiteral132;
		StringU5BU5D_t14* L_84 = (__this->___chartext_26);
		NullCheck(L_84);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_84, ((int32_t)14));
		ArrayElementTypeCheck (L_84, _stringLiteral133);
		*((String_t**)(String_t**)SZArrayLdElema(L_84, ((int32_t)14), sizeof(String_t*))) = (String_t*)_stringLiteral133;
	}

IL_0434:
	{
		int32_t L_85 = ___i;
		if ((!(((uint32_t)L_85) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_04b1;
		}
	}
	{
		StringU5BU5D_t14* L_86 = (__this->___chartext_26);
		NullCheck(L_86);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_86, 0);
		ArrayElementTypeCheck (L_86, _stringLiteral134);
		*((String_t**)(String_t**)SZArrayLdElema(L_86, 0, sizeof(String_t*))) = (String_t*)_stringLiteral134;
		StringU5BU5D_t14* L_87 = (__this->___chartext_26);
		NullCheck(L_87);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_87, 1);
		ArrayElementTypeCheck (L_87, _stringLiteral135);
		*((String_t**)(String_t**)SZArrayLdElema(L_87, 1, sizeof(String_t*))) = (String_t*)_stringLiteral135;
		StringU5BU5D_t14* L_88 = (__this->___chartext_26);
		NullCheck(L_88);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_88, 2);
		ArrayElementTypeCheck (L_88, _stringLiteral136);
		*((String_t**)(String_t**)SZArrayLdElema(L_88, 2, sizeof(String_t*))) = (String_t*)_stringLiteral136;
		StringU5BU5D_t14* L_89 = (__this->___chartext_26);
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 3);
		ArrayElementTypeCheck (L_89, _stringLiteral137);
		*((String_t**)(String_t**)SZArrayLdElema(L_89, 3, sizeof(String_t*))) = (String_t*)_stringLiteral137;
		StringU5BU5D_t14* L_90 = (__this->___chartext_26);
		NullCheck(L_90);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_90, 4);
		ArrayElementTypeCheck (L_90, _stringLiteral138);
		*((String_t**)(String_t**)SZArrayLdElema(L_90, 4, sizeof(String_t*))) = (String_t*)_stringLiteral138;
		StringU5BU5D_t14* L_91 = (__this->___chartext_26);
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 5);
		ArrayElementTypeCheck (L_91, _stringLiteral139);
		*((String_t**)(String_t**)SZArrayLdElema(L_91, 5, sizeof(String_t*))) = (String_t*)_stringLiteral139;
		StringU5BU5D_t14* L_92 = (__this->___chartext_26);
		NullCheck(L_92);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_92, 6);
		ArrayElementTypeCheck (L_92, _stringLiteral140);
		*((String_t**)(String_t**)SZArrayLdElema(L_92, 6, sizeof(String_t*))) = (String_t*)_stringLiteral140;
		StringU5BU5D_t14* L_93 = (__this->___chartext_26);
		NullCheck(L_93);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_93, 7);
		ArrayElementTypeCheck (L_93, _stringLiteral141);
		*((String_t**)(String_t**)SZArrayLdElema(L_93, 7, sizeof(String_t*))) = (String_t*)_stringLiteral141;
		StringU5BU5D_t14* L_94 = (__this->___chartext_26);
		NullCheck(L_94);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_94, 8);
		ArrayElementTypeCheck (L_94, _stringLiteral142);
		*((String_t**)(String_t**)SZArrayLdElema(L_94, 8, sizeof(String_t*))) = (String_t*)_stringLiteral142;
	}

IL_04b1:
	{
		int32_t L_95 = ___i;
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)19)))))
		{
			goto IL_0521;
		}
	}
	{
		StringU5BU5D_t14* L_96 = (__this->___chartext_26);
		NullCheck(L_96);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_96, 0);
		ArrayElementTypeCheck (L_96, _stringLiteral143);
		*((String_t**)(String_t**)SZArrayLdElema(L_96, 0, sizeof(String_t*))) = (String_t*)_stringLiteral143;
		StringU5BU5D_t14* L_97 = (__this->___chartext_26);
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 1);
		ArrayElementTypeCheck (L_97, _stringLiteral144);
		*((String_t**)(String_t**)SZArrayLdElema(L_97, 1, sizeof(String_t*))) = (String_t*)_stringLiteral144;
		StringU5BU5D_t14* L_98 = (__this->___chartext_26);
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		ArrayElementTypeCheck (L_98, _stringLiteral145);
		*((String_t**)(String_t**)SZArrayLdElema(L_98, 2, sizeof(String_t*))) = (String_t*)_stringLiteral145;
		StringU5BU5D_t14* L_99 = (__this->___chartext_26);
		NullCheck(L_99);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_99, 3);
		ArrayElementTypeCheck (L_99, _stringLiteral146);
		*((String_t**)(String_t**)SZArrayLdElema(L_99, 3, sizeof(String_t*))) = (String_t*)_stringLiteral146;
		StringU5BU5D_t14* L_100 = (__this->___chartext_26);
		NullCheck(L_100);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_100, 4);
		ArrayElementTypeCheck (L_100, _stringLiteral147);
		*((String_t**)(String_t**)SZArrayLdElema(L_100, 4, sizeof(String_t*))) = (String_t*)_stringLiteral147;
		StringU5BU5D_t14* L_101 = (__this->___chartext_26);
		NullCheck(L_101);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_101, 5);
		ArrayElementTypeCheck (L_101, _stringLiteral148);
		*((String_t**)(String_t**)SZArrayLdElema(L_101, 5, sizeof(String_t*))) = (String_t*)_stringLiteral148;
		StringU5BU5D_t14* L_102 = (__this->___chartext_26);
		NullCheck(L_102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_102, 6);
		ArrayElementTypeCheck (L_102, _stringLiteral149);
		*((String_t**)(String_t**)SZArrayLdElema(L_102, 6, sizeof(String_t*))) = (String_t*)_stringLiteral149;
		StringU5BU5D_t14* L_103 = (__this->___chartext_26);
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, 7);
		ArrayElementTypeCheck (L_103, _stringLiteral150);
		*((String_t**)(String_t**)SZArrayLdElema(L_103, 7, sizeof(String_t*))) = (String_t*)_stringLiteral150;
	}

IL_0521:
	{
		int32_t L_104 = ___i;
		if ((!(((uint32_t)L_104) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_05ac;
		}
	}
	{
		StringU5BU5D_t14* L_105 = (__this->___chartext_26);
		NullCheck(L_105);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_105, 0);
		ArrayElementTypeCheck (L_105, _stringLiteral151);
		*((String_t**)(String_t**)SZArrayLdElema(L_105, 0, sizeof(String_t*))) = (String_t*)_stringLiteral151;
		StringU5BU5D_t14* L_106 = (__this->___chartext_26);
		NullCheck(L_106);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_106, 1);
		ArrayElementTypeCheck (L_106, _stringLiteral152);
		*((String_t**)(String_t**)SZArrayLdElema(L_106, 1, sizeof(String_t*))) = (String_t*)_stringLiteral152;
		StringU5BU5D_t14* L_107 = (__this->___chartext_26);
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, 2);
		ArrayElementTypeCheck (L_107, _stringLiteral153);
		*((String_t**)(String_t**)SZArrayLdElema(L_107, 2, sizeof(String_t*))) = (String_t*)_stringLiteral153;
		StringU5BU5D_t14* L_108 = (__this->___chartext_26);
		NullCheck(L_108);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_108, 3);
		ArrayElementTypeCheck (L_108, _stringLiteral154);
		*((String_t**)(String_t**)SZArrayLdElema(L_108, 3, sizeof(String_t*))) = (String_t*)_stringLiteral154;
		StringU5BU5D_t14* L_109 = (__this->___chartext_26);
		NullCheck(L_109);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_109, 4);
		ArrayElementTypeCheck (L_109, _stringLiteral155);
		*((String_t**)(String_t**)SZArrayLdElema(L_109, 4, sizeof(String_t*))) = (String_t*)_stringLiteral155;
		StringU5BU5D_t14* L_110 = (__this->___chartext_26);
		NullCheck(L_110);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_110, 5);
		ArrayElementTypeCheck (L_110, _stringLiteral156);
		*((String_t**)(String_t**)SZArrayLdElema(L_110, 5, sizeof(String_t*))) = (String_t*)_stringLiteral156;
		StringU5BU5D_t14* L_111 = (__this->___chartext_26);
		NullCheck(L_111);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_111, 6);
		ArrayElementTypeCheck (L_111, _stringLiteral157);
		*((String_t**)(String_t**)SZArrayLdElema(L_111, 6, sizeof(String_t*))) = (String_t*)_stringLiteral157;
		StringU5BU5D_t14* L_112 = (__this->___chartext_26);
		NullCheck(L_112);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_112, 7);
		ArrayElementTypeCheck (L_112, _stringLiteral158);
		*((String_t**)(String_t**)SZArrayLdElema(L_112, 7, sizeof(String_t*))) = (String_t*)_stringLiteral158;
		StringU5BU5D_t14* L_113 = (__this->___chartext_26);
		NullCheck(L_113);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_113, 8);
		ArrayElementTypeCheck (L_113, _stringLiteral159);
		*((String_t**)(String_t**)SZArrayLdElema(L_113, 8, sizeof(String_t*))) = (String_t*)_stringLiteral159;
		StringU5BU5D_t14* L_114 = (__this->___chartext_26);
		NullCheck(L_114);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_114, ((int32_t)9));
		ArrayElementTypeCheck (L_114, _stringLiteral160);
		*((String_t**)(String_t**)SZArrayLdElema(L_114, ((int32_t)9), sizeof(String_t*))) = (String_t*)_stringLiteral160;
	}

IL_05ac:
	{
		int32_t L_115 = ___i;
		if ((!(((uint32_t)L_115) == ((uint32_t)((int32_t)21)))))
		{
			goto IL_0653;
		}
	}
	{
		StringU5BU5D_t14* L_116 = (__this->___chartext_26);
		NullCheck(L_116);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_116, 0);
		ArrayElementTypeCheck (L_116, _stringLiteral161);
		*((String_t**)(String_t**)SZArrayLdElema(L_116, 0, sizeof(String_t*))) = (String_t*)_stringLiteral161;
		StringU5BU5D_t14* L_117 = (__this->___chartext_26);
		NullCheck(L_117);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_117, 1);
		ArrayElementTypeCheck (L_117, _stringLiteral162);
		*((String_t**)(String_t**)SZArrayLdElema(L_117, 1, sizeof(String_t*))) = (String_t*)_stringLiteral162;
		StringU5BU5D_t14* L_118 = (__this->___chartext_26);
		NullCheck(L_118);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_118, 2);
		ArrayElementTypeCheck (L_118, _stringLiteral163);
		*((String_t**)(String_t**)SZArrayLdElema(L_118, 2, sizeof(String_t*))) = (String_t*)_stringLiteral163;
		StringU5BU5D_t14* L_119 = (__this->___chartext_26);
		NullCheck(L_119);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_119, 3);
		ArrayElementTypeCheck (L_119, _stringLiteral164);
		*((String_t**)(String_t**)SZArrayLdElema(L_119, 3, sizeof(String_t*))) = (String_t*)_stringLiteral164;
		StringU5BU5D_t14* L_120 = (__this->___chartext_26);
		NullCheck(L_120);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_120, 4);
		ArrayElementTypeCheck (L_120, _stringLiteral165);
		*((String_t**)(String_t**)SZArrayLdElema(L_120, 4, sizeof(String_t*))) = (String_t*)_stringLiteral165;
		StringU5BU5D_t14* L_121 = (__this->___chartext_26);
		NullCheck(L_121);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_121, 5);
		ArrayElementTypeCheck (L_121, _stringLiteral166);
		*((String_t**)(String_t**)SZArrayLdElema(L_121, 5, sizeof(String_t*))) = (String_t*)_stringLiteral166;
		StringU5BU5D_t14* L_122 = (__this->___chartext_26);
		NullCheck(L_122);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_122, 6);
		ArrayElementTypeCheck (L_122, _stringLiteral167);
		*((String_t**)(String_t**)SZArrayLdElema(L_122, 6, sizeof(String_t*))) = (String_t*)_stringLiteral167;
		StringU5BU5D_t14* L_123 = (__this->___chartext_26);
		NullCheck(L_123);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_123, 7);
		ArrayElementTypeCheck (L_123, _stringLiteral168);
		*((String_t**)(String_t**)SZArrayLdElema(L_123, 7, sizeof(String_t*))) = (String_t*)_stringLiteral168;
		StringU5BU5D_t14* L_124 = (__this->___chartext_26);
		NullCheck(L_124);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_124, 8);
		ArrayElementTypeCheck (L_124, _stringLiteral169);
		*((String_t**)(String_t**)SZArrayLdElema(L_124, 8, sizeof(String_t*))) = (String_t*)_stringLiteral169;
		StringU5BU5D_t14* L_125 = (__this->___chartext_26);
		NullCheck(L_125);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_125, ((int32_t)9));
		ArrayElementTypeCheck (L_125, _stringLiteral132);
		*((String_t**)(String_t**)SZArrayLdElema(L_125, ((int32_t)9), sizeof(String_t*))) = (String_t*)_stringLiteral132;
		StringU5BU5D_t14* L_126 = (__this->___chartext_26);
		NullCheck(L_126);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_126, ((int32_t)10));
		ArrayElementTypeCheck (L_126, _stringLiteral170);
		*((String_t**)(String_t**)SZArrayLdElema(L_126, ((int32_t)10), sizeof(String_t*))) = (String_t*)_stringLiteral170;
		StringU5BU5D_t14* L_127 = (__this->___chartext_26);
		NullCheck(L_127);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_127, ((int32_t)11));
		ArrayElementTypeCheck (L_127, _stringLiteral171);
		*((String_t**)(String_t**)SZArrayLdElema(L_127, ((int32_t)11), sizeof(String_t*))) = (String_t*)_stringLiteral171;
	}

IL_0653:
	{
		int32_t L_128 = ___i;
		if ((!(((uint32_t)L_128) == ((uint32_t)((int32_t)22)))))
		{
			goto IL_06de;
		}
	}
	{
		StringU5BU5D_t14* L_129 = (__this->___chartext_26);
		NullCheck(L_129);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_129, 0);
		ArrayElementTypeCheck (L_129, _stringLiteral172);
		*((String_t**)(String_t**)SZArrayLdElema(L_129, 0, sizeof(String_t*))) = (String_t*)_stringLiteral172;
		StringU5BU5D_t14* L_130 = (__this->___chartext_26);
		NullCheck(L_130);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_130, 1);
		ArrayElementTypeCheck (L_130, _stringLiteral173);
		*((String_t**)(String_t**)SZArrayLdElema(L_130, 1, sizeof(String_t*))) = (String_t*)_stringLiteral173;
		StringU5BU5D_t14* L_131 = (__this->___chartext_26);
		NullCheck(L_131);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_131, 2);
		ArrayElementTypeCheck (L_131, _stringLiteral174);
		*((String_t**)(String_t**)SZArrayLdElema(L_131, 2, sizeof(String_t*))) = (String_t*)_stringLiteral174;
		StringU5BU5D_t14* L_132 = (__this->___chartext_26);
		NullCheck(L_132);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_132, 3);
		ArrayElementTypeCheck (L_132, _stringLiteral175);
		*((String_t**)(String_t**)SZArrayLdElema(L_132, 3, sizeof(String_t*))) = (String_t*)_stringLiteral175;
		StringU5BU5D_t14* L_133 = (__this->___chartext_26);
		NullCheck(L_133);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_133, 4);
		ArrayElementTypeCheck (L_133, _stringLiteral176);
		*((String_t**)(String_t**)SZArrayLdElema(L_133, 4, sizeof(String_t*))) = (String_t*)_stringLiteral176;
		StringU5BU5D_t14* L_134 = (__this->___chartext_26);
		NullCheck(L_134);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_134, 5);
		ArrayElementTypeCheck (L_134, _stringLiteral177);
		*((String_t**)(String_t**)SZArrayLdElema(L_134, 5, sizeof(String_t*))) = (String_t*)_stringLiteral177;
		StringU5BU5D_t14* L_135 = (__this->___chartext_26);
		NullCheck(L_135);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_135, 6);
		ArrayElementTypeCheck (L_135, _stringLiteral178);
		*((String_t**)(String_t**)SZArrayLdElema(L_135, 6, sizeof(String_t*))) = (String_t*)_stringLiteral178;
		StringU5BU5D_t14* L_136 = (__this->___chartext_26);
		NullCheck(L_136);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_136, 7);
		ArrayElementTypeCheck (L_136, _stringLiteral179);
		*((String_t**)(String_t**)SZArrayLdElema(L_136, 7, sizeof(String_t*))) = (String_t*)_stringLiteral179;
		StringU5BU5D_t14* L_137 = (__this->___chartext_26);
		NullCheck(L_137);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_137, 8);
		ArrayElementTypeCheck (L_137, _stringLiteral180);
		*((String_t**)(String_t**)SZArrayLdElema(L_137, 8, sizeof(String_t*))) = (String_t*)_stringLiteral180;
		StringU5BU5D_t14* L_138 = (__this->___chartext_26);
		NullCheck(L_138);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_138, ((int32_t)9));
		ArrayElementTypeCheck (L_138, _stringLiteral181);
		*((String_t**)(String_t**)SZArrayLdElema(L_138, ((int32_t)9), sizeof(String_t*))) = (String_t*)_stringLiteral181;
	}

IL_06de:
	{
		int32_t L_139 = ___i;
		if ((!(((uint32_t)L_139) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_0785;
		}
	}
	{
		StringU5BU5D_t14* L_140 = (__this->___chartext_26);
		NullCheck(L_140);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_140, 0);
		ArrayElementTypeCheck (L_140, _stringLiteral182);
		*((String_t**)(String_t**)SZArrayLdElema(L_140, 0, sizeof(String_t*))) = (String_t*)_stringLiteral182;
		StringU5BU5D_t14* L_141 = (__this->___chartext_26);
		NullCheck(L_141);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_141, 1);
		ArrayElementTypeCheck (L_141, _stringLiteral183);
		*((String_t**)(String_t**)SZArrayLdElema(L_141, 1, sizeof(String_t*))) = (String_t*)_stringLiteral183;
		StringU5BU5D_t14* L_142 = (__this->___chartext_26);
		NullCheck(L_142);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_142, 2);
		ArrayElementTypeCheck (L_142, _stringLiteral184);
		*((String_t**)(String_t**)SZArrayLdElema(L_142, 2, sizeof(String_t*))) = (String_t*)_stringLiteral184;
		StringU5BU5D_t14* L_143 = (__this->___chartext_26);
		NullCheck(L_143);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_143, 3);
		ArrayElementTypeCheck (L_143, _stringLiteral185);
		*((String_t**)(String_t**)SZArrayLdElema(L_143, 3, sizeof(String_t*))) = (String_t*)_stringLiteral185;
		StringU5BU5D_t14* L_144 = (__this->___chartext_26);
		NullCheck(L_144);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_144, 4);
		ArrayElementTypeCheck (L_144, _stringLiteral186);
		*((String_t**)(String_t**)SZArrayLdElema(L_144, 4, sizeof(String_t*))) = (String_t*)_stringLiteral186;
		StringU5BU5D_t14* L_145 = (__this->___chartext_26);
		NullCheck(L_145);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_145, 5);
		ArrayElementTypeCheck (L_145, _stringLiteral187);
		*((String_t**)(String_t**)SZArrayLdElema(L_145, 5, sizeof(String_t*))) = (String_t*)_stringLiteral187;
		StringU5BU5D_t14* L_146 = (__this->___chartext_26);
		NullCheck(L_146);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_146, 6);
		ArrayElementTypeCheck (L_146, _stringLiteral188);
		*((String_t**)(String_t**)SZArrayLdElema(L_146, 6, sizeof(String_t*))) = (String_t*)_stringLiteral188;
		StringU5BU5D_t14* L_147 = (__this->___chartext_26);
		NullCheck(L_147);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_147, 7);
		ArrayElementTypeCheck (L_147, _stringLiteral189);
		*((String_t**)(String_t**)SZArrayLdElema(L_147, 7, sizeof(String_t*))) = (String_t*)_stringLiteral189;
		StringU5BU5D_t14* L_148 = (__this->___chartext_26);
		NullCheck(L_148);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_148, 8);
		ArrayElementTypeCheck (L_148, _stringLiteral190);
		*((String_t**)(String_t**)SZArrayLdElema(L_148, 8, sizeof(String_t*))) = (String_t*)_stringLiteral190;
		StringU5BU5D_t14* L_149 = (__this->___chartext_26);
		NullCheck(L_149);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_149, ((int32_t)9));
		ArrayElementTypeCheck (L_149, _stringLiteral191);
		*((String_t**)(String_t**)SZArrayLdElema(L_149, ((int32_t)9), sizeof(String_t*))) = (String_t*)_stringLiteral191;
		StringU5BU5D_t14* L_150 = (__this->___chartext_26);
		NullCheck(L_150);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_150, ((int32_t)10));
		ArrayElementTypeCheck (L_150, _stringLiteral192);
		*((String_t**)(String_t**)SZArrayLdElema(L_150, ((int32_t)10), sizeof(String_t*))) = (String_t*)_stringLiteral192;
		StringU5BU5D_t14* L_151 = (__this->___chartext_26);
		NullCheck(L_151);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_151, ((int32_t)11));
		ArrayElementTypeCheck (L_151, _stringLiteral193);
		*((String_t**)(String_t**)SZArrayLdElema(L_151, ((int32_t)11), sizeof(String_t*))) = (String_t*)_stringLiteral193;
	}

IL_0785:
	{
		int32_t L_152 = ___i;
		if ((!(((uint32_t)L_152) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_07f5;
		}
	}
	{
		StringU5BU5D_t14* L_153 = (__this->___chartext_26);
		NullCheck(L_153);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_153, 0);
		ArrayElementTypeCheck (L_153, _stringLiteral194);
		*((String_t**)(String_t**)SZArrayLdElema(L_153, 0, sizeof(String_t*))) = (String_t*)_stringLiteral194;
		StringU5BU5D_t14* L_154 = (__this->___chartext_26);
		NullCheck(L_154);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_154, 1);
		ArrayElementTypeCheck (L_154, _stringLiteral195);
		*((String_t**)(String_t**)SZArrayLdElema(L_154, 1, sizeof(String_t*))) = (String_t*)_stringLiteral195;
		StringU5BU5D_t14* L_155 = (__this->___chartext_26);
		NullCheck(L_155);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_155, 2);
		ArrayElementTypeCheck (L_155, _stringLiteral196);
		*((String_t**)(String_t**)SZArrayLdElema(L_155, 2, sizeof(String_t*))) = (String_t*)_stringLiteral196;
		StringU5BU5D_t14* L_156 = (__this->___chartext_26);
		NullCheck(L_156);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_156, 3);
		ArrayElementTypeCheck (L_156, _stringLiteral197);
		*((String_t**)(String_t**)SZArrayLdElema(L_156, 3, sizeof(String_t*))) = (String_t*)_stringLiteral197;
		StringU5BU5D_t14* L_157 = (__this->___chartext_26);
		NullCheck(L_157);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_157, 4);
		ArrayElementTypeCheck (L_157, _stringLiteral198);
		*((String_t**)(String_t**)SZArrayLdElema(L_157, 4, sizeof(String_t*))) = (String_t*)_stringLiteral198;
		StringU5BU5D_t14* L_158 = (__this->___chartext_26);
		NullCheck(L_158);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_158, 5);
		ArrayElementTypeCheck (L_158, _stringLiteral199);
		*((String_t**)(String_t**)SZArrayLdElema(L_158, 5, sizeof(String_t*))) = (String_t*)_stringLiteral199;
		StringU5BU5D_t14* L_159 = (__this->___chartext_26);
		NullCheck(L_159);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_159, 6);
		ArrayElementTypeCheck (L_159, _stringLiteral200);
		*((String_t**)(String_t**)SZArrayLdElema(L_159, 6, sizeof(String_t*))) = (String_t*)_stringLiteral200;
		StringU5BU5D_t14* L_160 = (__this->___chartext_26);
		NullCheck(L_160);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_160, 7);
		ArrayElementTypeCheck (L_160, _stringLiteral201);
		*((String_t**)(String_t**)SZArrayLdElema(L_160, 7, sizeof(String_t*))) = (String_t*)_stringLiteral201;
	}

IL_07f5:
	{
		int32_t L_161 = ___i;
		if ((!(((uint32_t)L_161) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_0872;
		}
	}
	{
		StringU5BU5D_t14* L_162 = (__this->___chartext_26);
		NullCheck(L_162);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_162, 0);
		ArrayElementTypeCheck (L_162, _stringLiteral202);
		*((String_t**)(String_t**)SZArrayLdElema(L_162, 0, sizeof(String_t*))) = (String_t*)_stringLiteral202;
		StringU5BU5D_t14* L_163 = (__this->___chartext_26);
		NullCheck(L_163);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_163, 1);
		ArrayElementTypeCheck (L_163, _stringLiteral203);
		*((String_t**)(String_t**)SZArrayLdElema(L_163, 1, sizeof(String_t*))) = (String_t*)_stringLiteral203;
		StringU5BU5D_t14* L_164 = (__this->___chartext_26);
		NullCheck(L_164);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_164, 2);
		ArrayElementTypeCheck (L_164, _stringLiteral204);
		*((String_t**)(String_t**)SZArrayLdElema(L_164, 2, sizeof(String_t*))) = (String_t*)_stringLiteral204;
		StringU5BU5D_t14* L_165 = (__this->___chartext_26);
		NullCheck(L_165);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_165, 3);
		ArrayElementTypeCheck (L_165, _stringLiteral205);
		*((String_t**)(String_t**)SZArrayLdElema(L_165, 3, sizeof(String_t*))) = (String_t*)_stringLiteral205;
		StringU5BU5D_t14* L_166 = (__this->___chartext_26);
		NullCheck(L_166);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_166, 4);
		ArrayElementTypeCheck (L_166, _stringLiteral206);
		*((String_t**)(String_t**)SZArrayLdElema(L_166, 4, sizeof(String_t*))) = (String_t*)_stringLiteral206;
		StringU5BU5D_t14* L_167 = (__this->___chartext_26);
		NullCheck(L_167);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_167, 5);
		ArrayElementTypeCheck (L_167, _stringLiteral207);
		*((String_t**)(String_t**)SZArrayLdElema(L_167, 5, sizeof(String_t*))) = (String_t*)_stringLiteral207;
		StringU5BU5D_t14* L_168 = (__this->___chartext_26);
		NullCheck(L_168);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_168, 6);
		ArrayElementTypeCheck (L_168, _stringLiteral208);
		*((String_t**)(String_t**)SZArrayLdElema(L_168, 6, sizeof(String_t*))) = (String_t*)_stringLiteral208;
		StringU5BU5D_t14* L_169 = (__this->___chartext_26);
		NullCheck(L_169);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_169, 7);
		ArrayElementTypeCheck (L_169, _stringLiteral209);
		*((String_t**)(String_t**)SZArrayLdElema(L_169, 7, sizeof(String_t*))) = (String_t*)_stringLiteral209;
		StringU5BU5D_t14* L_170 = (__this->___chartext_26);
		NullCheck(L_170);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_170, 8);
		ArrayElementTypeCheck (L_170, _stringLiteral210);
		*((String_t**)(String_t**)SZArrayLdElema(L_170, 8, sizeof(String_t*))) = (String_t*)_stringLiteral210;
	}

IL_0872:
	{
		int32_t L_171 = ___i;
		if ((!(((uint32_t)L_171) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_08fd;
		}
	}
	{
		StringU5BU5D_t14* L_172 = (__this->___chartext_26);
		NullCheck(L_172);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_172, 0);
		ArrayElementTypeCheck (L_172, _stringLiteral211);
		*((String_t**)(String_t**)SZArrayLdElema(L_172, 0, sizeof(String_t*))) = (String_t*)_stringLiteral211;
		StringU5BU5D_t14* L_173 = (__this->___chartext_26);
		NullCheck(L_173);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_173, 1);
		ArrayElementTypeCheck (L_173, _stringLiteral212);
		*((String_t**)(String_t**)SZArrayLdElema(L_173, 1, sizeof(String_t*))) = (String_t*)_stringLiteral212;
		StringU5BU5D_t14* L_174 = (__this->___chartext_26);
		NullCheck(L_174);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_174, 2);
		ArrayElementTypeCheck (L_174, _stringLiteral213);
		*((String_t**)(String_t**)SZArrayLdElema(L_174, 2, sizeof(String_t*))) = (String_t*)_stringLiteral213;
		StringU5BU5D_t14* L_175 = (__this->___chartext_26);
		NullCheck(L_175);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_175, 3);
		ArrayElementTypeCheck (L_175, _stringLiteral214);
		*((String_t**)(String_t**)SZArrayLdElema(L_175, 3, sizeof(String_t*))) = (String_t*)_stringLiteral214;
		StringU5BU5D_t14* L_176 = (__this->___chartext_26);
		NullCheck(L_176);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_176, 4);
		ArrayElementTypeCheck (L_176, _stringLiteral215);
		*((String_t**)(String_t**)SZArrayLdElema(L_176, 4, sizeof(String_t*))) = (String_t*)_stringLiteral215;
		StringU5BU5D_t14* L_177 = (__this->___chartext_26);
		NullCheck(L_177);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_177, 5);
		ArrayElementTypeCheck (L_177, _stringLiteral216);
		*((String_t**)(String_t**)SZArrayLdElema(L_177, 5, sizeof(String_t*))) = (String_t*)_stringLiteral216;
		StringU5BU5D_t14* L_178 = (__this->___chartext_26);
		NullCheck(L_178);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_178, 6);
		ArrayElementTypeCheck (L_178, _stringLiteral217);
		*((String_t**)(String_t**)SZArrayLdElema(L_178, 6, sizeof(String_t*))) = (String_t*)_stringLiteral217;
		StringU5BU5D_t14* L_179 = (__this->___chartext_26);
		NullCheck(L_179);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_179, 7);
		ArrayElementTypeCheck (L_179, _stringLiteral218);
		*((String_t**)(String_t**)SZArrayLdElema(L_179, 7, sizeof(String_t*))) = (String_t*)_stringLiteral218;
		StringU5BU5D_t14* L_180 = (__this->___chartext_26);
		NullCheck(L_180);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_180, 8);
		ArrayElementTypeCheck (L_180, _stringLiteral219);
		*((String_t**)(String_t**)SZArrayLdElema(L_180, 8, sizeof(String_t*))) = (String_t*)_stringLiteral219;
		StringU5BU5D_t14* L_181 = (__this->___chartext_26);
		NullCheck(L_181);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_181, ((int32_t)9));
		ArrayElementTypeCheck (L_181, _stringLiteral220);
		*((String_t**)(String_t**)SZArrayLdElema(L_181, ((int32_t)9), sizeof(String_t*))) = (String_t*)_stringLiteral220;
	}

IL_08fd:
	{
		int32_t L_182 = ___i;
		if ((!(((uint32_t)L_182) == ((uint32_t)((int32_t)27)))))
		{
			goto IL_09a4;
		}
	}
	{
		StringU5BU5D_t14* L_183 = (__this->___chartext_26);
		NullCheck(L_183);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_183, 0);
		ArrayElementTypeCheck (L_183, _stringLiteral221);
		*((String_t**)(String_t**)SZArrayLdElema(L_183, 0, sizeof(String_t*))) = (String_t*)_stringLiteral221;
		StringU5BU5D_t14* L_184 = (__this->___chartext_26);
		NullCheck(L_184);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_184, 1);
		ArrayElementTypeCheck (L_184, _stringLiteral222);
		*((String_t**)(String_t**)SZArrayLdElema(L_184, 1, sizeof(String_t*))) = (String_t*)_stringLiteral222;
		StringU5BU5D_t14* L_185 = (__this->___chartext_26);
		NullCheck(L_185);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_185, 2);
		ArrayElementTypeCheck (L_185, _stringLiteral223);
		*((String_t**)(String_t**)SZArrayLdElema(L_185, 2, sizeof(String_t*))) = (String_t*)_stringLiteral223;
		StringU5BU5D_t14* L_186 = (__this->___chartext_26);
		NullCheck(L_186);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_186, 3);
		ArrayElementTypeCheck (L_186, _stringLiteral224);
		*((String_t**)(String_t**)SZArrayLdElema(L_186, 3, sizeof(String_t*))) = (String_t*)_stringLiteral224;
		StringU5BU5D_t14* L_187 = (__this->___chartext_26);
		NullCheck(L_187);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_187, 4);
		ArrayElementTypeCheck (L_187, _stringLiteral225);
		*((String_t**)(String_t**)SZArrayLdElema(L_187, 4, sizeof(String_t*))) = (String_t*)_stringLiteral225;
		StringU5BU5D_t14* L_188 = (__this->___chartext_26);
		NullCheck(L_188);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_188, 5);
		ArrayElementTypeCheck (L_188, _stringLiteral226);
		*((String_t**)(String_t**)SZArrayLdElema(L_188, 5, sizeof(String_t*))) = (String_t*)_stringLiteral226;
		StringU5BU5D_t14* L_189 = (__this->___chartext_26);
		NullCheck(L_189);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_189, 6);
		ArrayElementTypeCheck (L_189, _stringLiteral227);
		*((String_t**)(String_t**)SZArrayLdElema(L_189, 6, sizeof(String_t*))) = (String_t*)_stringLiteral227;
		StringU5BU5D_t14* L_190 = (__this->___chartext_26);
		NullCheck(L_190);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_190, 7);
		ArrayElementTypeCheck (L_190, _stringLiteral228);
		*((String_t**)(String_t**)SZArrayLdElema(L_190, 7, sizeof(String_t*))) = (String_t*)_stringLiteral228;
		StringU5BU5D_t14* L_191 = (__this->___chartext_26);
		NullCheck(L_191);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_191, 8);
		ArrayElementTypeCheck (L_191, _stringLiteral229);
		*((String_t**)(String_t**)SZArrayLdElema(L_191, 8, sizeof(String_t*))) = (String_t*)_stringLiteral229;
		StringU5BU5D_t14* L_192 = (__this->___chartext_26);
		NullCheck(L_192);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_192, ((int32_t)9));
		ArrayElementTypeCheck (L_192, _stringLiteral230);
		*((String_t**)(String_t**)SZArrayLdElema(L_192, ((int32_t)9), sizeof(String_t*))) = (String_t*)_stringLiteral230;
		StringU5BU5D_t14* L_193 = (__this->___chartext_26);
		NullCheck(L_193);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_193, ((int32_t)10));
		ArrayElementTypeCheck (L_193, _stringLiteral231);
		*((String_t**)(String_t**)SZArrayLdElema(L_193, ((int32_t)10), sizeof(String_t*))) = (String_t*)_stringLiteral231;
		StringU5BU5D_t14* L_194 = (__this->___chartext_26);
		NullCheck(L_194);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_194, ((int32_t)11));
		ArrayElementTypeCheck (L_194, _stringLiteral232);
		*((String_t**)(String_t**)SZArrayLdElema(L_194, ((int32_t)11), sizeof(String_t*))) = (String_t*)_stringLiteral232;
	}

IL_09a4:
	{
		int32_t L_195 = ___i;
		if ((!(((uint32_t)L_195) == ((uint32_t)((int32_t)28)))))
		{
			goto IL_0a21;
		}
	}
	{
		StringU5BU5D_t14* L_196 = (__this->___chartext_26);
		NullCheck(L_196);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_196, 0);
		ArrayElementTypeCheck (L_196, _stringLiteral233);
		*((String_t**)(String_t**)SZArrayLdElema(L_196, 0, sizeof(String_t*))) = (String_t*)_stringLiteral233;
		StringU5BU5D_t14* L_197 = (__this->___chartext_26);
		NullCheck(L_197);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_197, 1);
		ArrayElementTypeCheck (L_197, _stringLiteral234);
		*((String_t**)(String_t**)SZArrayLdElema(L_197, 1, sizeof(String_t*))) = (String_t*)_stringLiteral234;
		StringU5BU5D_t14* L_198 = (__this->___chartext_26);
		NullCheck(L_198);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_198, 2);
		ArrayElementTypeCheck (L_198, _stringLiteral235);
		*((String_t**)(String_t**)SZArrayLdElema(L_198, 2, sizeof(String_t*))) = (String_t*)_stringLiteral235;
		StringU5BU5D_t14* L_199 = (__this->___chartext_26);
		NullCheck(L_199);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_199, 3);
		ArrayElementTypeCheck (L_199, _stringLiteral236);
		*((String_t**)(String_t**)SZArrayLdElema(L_199, 3, sizeof(String_t*))) = (String_t*)_stringLiteral236;
		StringU5BU5D_t14* L_200 = (__this->___chartext_26);
		NullCheck(L_200);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_200, 4);
		ArrayElementTypeCheck (L_200, _stringLiteral237);
		*((String_t**)(String_t**)SZArrayLdElema(L_200, 4, sizeof(String_t*))) = (String_t*)_stringLiteral237;
		StringU5BU5D_t14* L_201 = (__this->___chartext_26);
		NullCheck(L_201);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_201, 5);
		ArrayElementTypeCheck (L_201, _stringLiteral238);
		*((String_t**)(String_t**)SZArrayLdElema(L_201, 5, sizeof(String_t*))) = (String_t*)_stringLiteral238;
		StringU5BU5D_t14* L_202 = (__this->___chartext_26);
		NullCheck(L_202);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_202, 6);
		ArrayElementTypeCheck (L_202, _stringLiteral239);
		*((String_t**)(String_t**)SZArrayLdElema(L_202, 6, sizeof(String_t*))) = (String_t*)_stringLiteral239;
		StringU5BU5D_t14* L_203 = (__this->___chartext_26);
		NullCheck(L_203);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_203, 7);
		ArrayElementTypeCheck (L_203, _stringLiteral240);
		*((String_t**)(String_t**)SZArrayLdElema(L_203, 7, sizeof(String_t*))) = (String_t*)_stringLiteral240;
		StringU5BU5D_t14* L_204 = (__this->___chartext_26);
		NullCheck(L_204);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_204, 8);
		ArrayElementTypeCheck (L_204, _stringLiteral241);
		*((String_t**)(String_t**)SZArrayLdElema(L_204, 8, sizeof(String_t*))) = (String_t*)_stringLiteral241;
	}

IL_0a21:
	{
		return;
	}
}
// System.Void main::OnGUI()
extern TypeInfo* GUI_t24_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t14_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAudioSource_t27_m76_MethodInfo_var;
extern const MethodInfo* SingletonMonoBehaviour_1_get_Instance_m44_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral242;
extern Il2CppCodeGenString* _stringLiteral243;
extern Il2CppCodeGenString* _stringLiteral244;
extern Il2CppCodeGenString* _stringLiteral245;
extern Il2CppCodeGenString* _stringLiteral246;
extern Il2CppCodeGenString* _stringLiteral24;
extern Il2CppCodeGenString* _stringLiteral25;
extern Il2CppCodeGenString* _stringLiteral247;
extern Il2CppCodeGenString* _stringLiteral14;
extern Il2CppCodeGenString* _stringLiteral248;
extern Il2CppCodeGenString* _stringLiteral249;
extern Il2CppCodeGenString* _stringLiteral250;
extern Il2CppCodeGenString* _stringLiteral251;
extern Il2CppCodeGenString* _stringLiteral252;
extern Il2CppCodeGenString* _stringLiteral253;
extern Il2CppCodeGenString* _stringLiteral254;
extern Il2CppCodeGenString* _stringLiteral255;
extern Il2CppCodeGenString* _stringLiteral256;
extern Il2CppCodeGenString* _stringLiteral257;
extern Il2CppCodeGenString* _stringLiteral258;
extern Il2CppCodeGenString* _stringLiteral259;
extern Il2CppCodeGenString* _stringLiteral260;
extern Il2CppCodeGenString* _stringLiteral261;
extern Il2CppCodeGenString* _stringLiteral262;
extern Il2CppCodeGenString* _stringLiteral263;
extern Il2CppCodeGenString* _stringLiteral264;
extern Il2CppCodeGenString* _stringLiteral265;
extern Il2CppCodeGenString* _stringLiteral266;
extern Il2CppCodeGenString* _stringLiteral267;
extern Il2CppCodeGenString* _stringLiteral268;
extern Il2CppCodeGenString* _stringLiteral269;
extern Il2CppCodeGenString* _stringLiteral270;
extern Il2CppCodeGenString* _stringLiteral271;
extern Il2CppCodeGenString* _stringLiteral272;
extern Il2CppCodeGenString* _stringLiteral273;
extern Il2CppCodeGenString* _stringLiteral274;
extern "C" void main_OnGUI_m29 (main_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		StringU5BU5D_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		GameObject_GetComponent_TisAudioSource_t27_m76_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		SingletonMonoBehaviour_1_get_Instance_m44_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		_stringLiteral242 = il2cpp_codegen_string_literal_from_index(242);
		_stringLiteral243 = il2cpp_codegen_string_literal_from_index(243);
		_stringLiteral244 = il2cpp_codegen_string_literal_from_index(244);
		_stringLiteral245 = il2cpp_codegen_string_literal_from_index(245);
		_stringLiteral246 = il2cpp_codegen_string_literal_from_index(246);
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		_stringLiteral247 = il2cpp_codegen_string_literal_from_index(247);
		_stringLiteral14 = il2cpp_codegen_string_literal_from_index(14);
		_stringLiteral248 = il2cpp_codegen_string_literal_from_index(248);
		_stringLiteral249 = il2cpp_codegen_string_literal_from_index(249);
		_stringLiteral250 = il2cpp_codegen_string_literal_from_index(250);
		_stringLiteral251 = il2cpp_codegen_string_literal_from_index(251);
		_stringLiteral252 = il2cpp_codegen_string_literal_from_index(252);
		_stringLiteral253 = il2cpp_codegen_string_literal_from_index(253);
		_stringLiteral254 = il2cpp_codegen_string_literal_from_index(254);
		_stringLiteral255 = il2cpp_codegen_string_literal_from_index(255);
		_stringLiteral256 = il2cpp_codegen_string_literal_from_index(256);
		_stringLiteral257 = il2cpp_codegen_string_literal_from_index(257);
		_stringLiteral258 = il2cpp_codegen_string_literal_from_index(258);
		_stringLiteral259 = il2cpp_codegen_string_literal_from_index(259);
		_stringLiteral260 = il2cpp_codegen_string_literal_from_index(260);
		_stringLiteral261 = il2cpp_codegen_string_literal_from_index(261);
		_stringLiteral262 = il2cpp_codegen_string_literal_from_index(262);
		_stringLiteral263 = il2cpp_codegen_string_literal_from_index(263);
		_stringLiteral264 = il2cpp_codegen_string_literal_from_index(264);
		_stringLiteral265 = il2cpp_codegen_string_literal_from_index(265);
		_stringLiteral266 = il2cpp_codegen_string_literal_from_index(266);
		_stringLiteral267 = il2cpp_codegen_string_literal_from_index(267);
		_stringLiteral268 = il2cpp_codegen_string_literal_from_index(268);
		_stringLiteral269 = il2cpp_codegen_string_literal_from_index(269);
		_stringLiteral270 = il2cpp_codegen_string_literal_from_index(270);
		_stringLiteral271 = il2cpp_codegen_string_literal_from_index(271);
		_stringLiteral272 = il2cpp_codegen_string_literal_from_index(272);
		_stringLiteral273 = il2cpp_codegen_string_literal_from_index(273);
		_stringLiteral274 = il2cpp_codegen_string_literal_from_index(274);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		GUISkin_t26 * L_0 = GUI_get_skin_m72(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t10 * L_1 = GUISkin_get_button_m73(L_0, /*hidden argument*/NULL);
		float L_2 = (__this->___buttonsize2_13);
		NullCheck(L_1);
		GUIStyle_set_fontSize_m74(L_1, (((int32_t)((int32_t)L_2))), /*hidden argument*/NULL);
		int32_t L_3 = (__this->___stopmusic_20);
		if (L_3)
		{
			goto IL_007e;
		}
	}
	{
		float L_4 = (__this->___sw_9);
		float L_5 = (__this->___sh_10);
		float L_6 = (__this->___sw_9);
		float L_7 = (__this->___sh_10);
		Rect_t19  L_8 = {0};
		Rect__ctor_m35(&L_8, ((float)((float)(390.0f)*(float)L_4)), ((float)((float)(5.0f)*(float)L_5)), ((float)((float)(100.0f)*(float)L_6)), ((float)((float)(50.0f)*(float)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_9 = GUI_Button_m75(NULL /*static, unused*/, L_8, _stringLiteral242, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007e;
		}
	}
	{
		GameObjectU5BU5D_t12* L_10 = (__this->___music_21);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		NullCheck((*(GameObject_t18 **)(GameObject_t18 **)SZArrayLdElema(L_10, L_11, sizeof(GameObject_t18 *))));
		AudioSource_t27 * L_12 = GameObject_GetComponent_TisAudioSource_t27_m76((*(GameObject_t18 **)(GameObject_t18 **)SZArrayLdElema(L_10, L_11, sizeof(GameObject_t18 *))), /*hidden argument*/GameObject_GetComponent_TisAudioSource_t27_m76_MethodInfo_var);
		NullCheck(L_12);
		AudioSource_Stop_m77(L_12, /*hidden argument*/NULL);
		__this->___stopmusic_20 = 1;
	}

IL_007e:
	{
		int32_t L_13 = (__this->___stopmusic_20);
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_00e7;
		}
	}
	{
		float L_14 = (__this->___sw_9);
		float L_15 = (__this->___sh_10);
		float L_16 = (__this->___sw_9);
		float L_17 = (__this->___sh_10);
		Rect_t19  L_18 = {0};
		Rect__ctor_m35(&L_18, ((float)((float)(390.0f)*(float)L_14)), ((float)((float)(5.0f)*(float)L_15)), ((float)((float)(100.0f)*(float)L_16)), ((float)((float)(50.0f)*(float)L_17)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_19 = GUI_Button_m75(NULL /*static, unused*/, L_18, _stringLiteral243, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00e7;
		}
	}
	{
		GameObjectU5BU5D_t12* L_20 = (__this->___music_21);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		int32_t L_21 = 0;
		NullCheck((*(GameObject_t18 **)(GameObject_t18 **)SZArrayLdElema(L_20, L_21, sizeof(GameObject_t18 *))));
		AudioSource_t27 * L_22 = GameObject_GetComponent_TisAudioSource_t27_m76((*(GameObject_t18 **)(GameObject_t18 **)SZArrayLdElema(L_20, L_21, sizeof(GameObject_t18 *))), /*hidden argument*/GameObject_GetComponent_TisAudioSource_t27_m76_MethodInfo_var);
		NullCheck(L_22);
		AudioSource_Play_m78(L_22, /*hidden argument*/NULL);
		__this->___stopmusic_20 = 0;
	}

IL_00e7:
	{
		int32_t L_23 = (__this->___TextDeg_23);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)30))))
		{
			goto IL_045c;
		}
	}
	{
		float L_24 = (__this->___sw_9);
		float L_25 = (__this->___sh_10);
		float L_26 = (__this->___sw_9);
		float L_27 = (__this->___sh_10);
		Rect_t19  L_28 = {0};
		Rect__ctor_m35(&L_28, ((float)((float)(620.0f)*(float)L_24)), ((float)((float)(555.0f)*(float)L_25)), ((float)((float)(100.0f)*(float)L_26)), ((float)((float)(50.0f)*(float)L_27)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_29 = GUI_Button_m75(NULL /*static, unused*/, L_28, _stringLiteral244, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_045c;
		}
	}
	{
		int32_t L_30 = (__this->___TextP_25);
		__this->___TextP_25 = ((int32_t)((int32_t)L_30+(int32_t)1));
		int32_t L_31 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_32 = (__this->___TextP_25);
		if ((((int32_t)L_32) <= ((int32_t)((int32_t)9))))
		{
			goto IL_016e;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_016e:
	{
		int32_t L_33 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_34 = (__this->___TextP_25);
		if ((((int32_t)L_34) <= ((int32_t)((int32_t)11))))
		{
			goto IL_0196;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_0196:
	{
		int32_t L_35 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_36 = (__this->___TextP_25);
		if ((((int32_t)L_36) <= ((int32_t)7)))
		{
			goto IL_01bd;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_01bd:
	{
		int32_t L_37 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_01e4;
		}
	}
	{
		int32_t L_38 = (__this->___TextP_25);
		if ((((int32_t)L_38) <= ((int32_t)6)))
		{
			goto IL_01e4;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_01e4:
	{
		int32_t L_39 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_020b;
		}
	}
	{
		int32_t L_40 = (__this->___TextP_25);
		if ((((int32_t)L_40) <= ((int32_t)8)))
		{
			goto IL_020b;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_020b:
	{
		int32_t L_41 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_0233;
		}
	}
	{
		int32_t L_42 = (__this->___TextP_25);
		if ((((int32_t)L_42) <= ((int32_t)((int32_t)9))))
		{
			goto IL_0233;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_0233:
	{
		int32_t L_43 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_025a;
		}
	}
	{
		int32_t L_44 = (__this->___TextP_25);
		if ((((int32_t)L_44) <= ((int32_t)5)))
		{
			goto IL_025a;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_025a:
	{
		int32_t L_45 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0282;
		}
	}
	{
		int32_t L_46 = (__this->___TextP_25);
		if ((((int32_t)L_46) <= ((int32_t)((int32_t)14))))
		{
			goto IL_0282;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_0282:
	{
		int32_t L_47 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_02a9;
		}
	}
	{
		int32_t L_48 = (__this->___TextP_25);
		if ((((int32_t)L_48) <= ((int32_t)8)))
		{
			goto IL_02a9;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_02a9:
	{
		int32_t L_49 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_02d0;
		}
	}
	{
		int32_t L_50 = (__this->___TextP_25);
		if ((((int32_t)L_50) <= ((int32_t)7)))
		{
			goto IL_02d0;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_02d0:
	{
		int32_t L_51 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_02f8;
		}
	}
	{
		int32_t L_52 = (__this->___TextP_25);
		if ((((int32_t)L_52) <= ((int32_t)((int32_t)9))))
		{
			goto IL_02f8;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_02f8:
	{
		int32_t L_53 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_0320;
		}
	}
	{
		int32_t L_54 = (__this->___TextP_25);
		if ((((int32_t)L_54) <= ((int32_t)((int32_t)11))))
		{
			goto IL_0320;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_0320:
	{
		int32_t L_55 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0348;
		}
	}
	{
		int32_t L_56 = (__this->___TextP_25);
		if ((((int32_t)L_56) <= ((int32_t)((int32_t)9))))
		{
			goto IL_0348;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_0348:
	{
		int32_t L_57 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0370;
		}
	}
	{
		int32_t L_58 = (__this->___TextP_25);
		if ((((int32_t)L_58) <= ((int32_t)((int32_t)11))))
		{
			goto IL_0370;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_0370:
	{
		int32_t L_59 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_59) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_0397;
		}
	}
	{
		int32_t L_60 = (__this->___TextP_25);
		if ((((int32_t)L_60) <= ((int32_t)7)))
		{
			goto IL_0397;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_0397:
	{
		int32_t L_61 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_61) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_03be;
		}
	}
	{
		int32_t L_62 = (__this->___TextP_25);
		if ((((int32_t)L_62) <= ((int32_t)8)))
		{
			goto IL_03be;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_03be:
	{
		int32_t L_63 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_63) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_03e6;
		}
	}
	{
		int32_t L_64 = (__this->___TextP_25);
		if ((((int32_t)L_64) <= ((int32_t)((int32_t)9))))
		{
			goto IL_03e6;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_03e6:
	{
		int32_t L_65 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_040e;
		}
	}
	{
		int32_t L_66 = (__this->___TextP_25);
		if ((((int32_t)L_66) <= ((int32_t)((int32_t)11))))
		{
			goto IL_040e;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_040e:
	{
		int32_t L_67 = (__this->___TextDeg_23);
		if ((!(((uint32_t)L_67) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0435;
		}
	}
	{
		int32_t L_68 = (__this->___TextP_25);
		if ((((int32_t)L_68) <= ((int32_t)8)))
		{
			goto IL_0435;
		}
	}
	{
		__this->___TextDeg_23 = 1;
		__this->___TextP_25 = 0;
	}

IL_0435:
	{
		int32_t L_69 = (__this->___TextDeg_23);
		if ((((int32_t)L_69) < ((int32_t)((int32_t)30))))
		{
			goto IL_045c;
		}
	}
	{
		GUITextU5BU5D_t13* L_70 = (__this->___text1_18);
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, 2);
		int32_t L_71 = 2;
		StringU5BU5D_t14* L_72 = (__this->___chartext_26);
		int32_t L_73 = (__this->___TextP_25);
		NullCheck(L_72);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_72, L_73);
		int32_t L_74 = L_73;
		NullCheck((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_70, L_71, sizeof(GUIText_t8 *))));
		GUIText_set_text_m57((*(GUIText_t8 **)(GUIText_t8 **)SZArrayLdElema(L_70, L_71, sizeof(GUIText_t8 *))), (*(String_t**)(String_t**)SZArrayLdElema(L_72, L_74, sizeof(String_t*))), /*hidden argument*/NULL);
	}

IL_045c:
	{
		float L_75 = (__this->___sw_9);
		float L_76 = (__this->___sh_10);
		float L_77 = (__this->___sw_9);
		float L_78 = (__this->___sh_10);
		Rect_t19  L_79 = {0};
		Rect__ctor_m35(&L_79, ((float)((float)(850.0f)*(float)L_75)), ((float)((float)(560.0f)*(float)L_76)), ((float)((float)(100.0f)*(float)L_77)), ((float)((float)(50.0f)*(float)L_78)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_80 = GUI_Button_m75(NULL /*static, unused*/, L_79, _stringLiteral245, /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_04a7;
		}
	}
	{
		__this->___r_22 = 1;
	}

IL_04a7:
	{
		int32_t L_81 = (__this->___r_22);
		if ((!(((uint32_t)L_81) == ((uint32_t)1))))
		{
			goto IL_0601;
		}
	}
	{
		float L_82 = (__this->___sw_9);
		float L_83 = (__this->___sh_10);
		float L_84 = (__this->___sw_9);
		float L_85 = (__this->___sh_10);
		Rect_t19  L_86 = {0};
		Rect__ctor_m35(&L_86, ((float)((float)(160.0f)*(float)L_82)), ((float)((float)(500.0f)*(float)L_83)), ((float)((float)(200.0f)*(float)L_84)), ((float)((float)(100.0f)*(float)L_85)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_87 = GUI_Button_m75(NULL /*static, unused*/, L_86, _stringLiteral246, /*hidden argument*/NULL);
		if (!L_87)
		{
			goto IL_05b6;
		}
	}
	{
		__this->___day_28 = 1;
		__this->___money_32 = ((int32_t)100);
		__this->___syuueki_29 = ((int32_t)10);
		__this->___money2_33 = 0;
		__this->___syuueki2_30 = 0;
		__this->___savemaplv_38 = _stringLiteral24;
		__this->___savemoney_39 = _stringLiteral25;
		PlayerPrefs_SetInt_m67(NULL /*static, unused*/, _stringLiteral247, 0, /*hidden argument*/NULL);
		String_t* L_88 = (__this->___Data1_46);
		PlayerPrefs_SetInt_m67(NULL /*static, unused*/, L_88, 1, /*hidden argument*/NULL);
		String_t* L_89 = (__this->___Data2_47);
		PlayerPrefs_SetInt_m67(NULL /*static, unused*/, L_89, ((int32_t)100), /*hidden argument*/NULL);
		String_t* L_90 = (__this->___Data3_48);
		PlayerPrefs_SetInt_m67(NULL /*static, unused*/, L_90, ((int32_t)10), /*hidden argument*/NULL);
		String_t* L_91 = (__this->___Data4_49);
		PlayerPrefs_SetInt_m67(NULL /*static, unused*/, L_91, 0, /*hidden argument*/NULL);
		String_t* L_92 = (__this->___Data5_50);
		PlayerPrefs_SetInt_m67(NULL /*static, unused*/, L_92, 0, /*hidden argument*/NULL);
		String_t* L_93 = (__this->___Data6_51);
		PlayerPrefs_SetString_m68(NULL /*static, unused*/, L_93, _stringLiteral24, /*hidden argument*/NULL);
		String_t* L_94 = (__this->___Data7_52);
		PlayerPrefs_SetString_m68(NULL /*static, unused*/, L_94, _stringLiteral25, /*hidden argument*/NULL);
		FadeManager_t4 * L_95 = SingletonMonoBehaviour_1_get_Instance_m44(NULL /*static, unused*/, /*hidden argument*/SingletonMonoBehaviour_1_get_Instance_m44_MethodInfo_var);
		NullCheck(L_95);
		FadeManager_LoadLevel_m11(L_95, _stringLiteral14, (1.0f), /*hidden argument*/NULL);
		__this->___r_22 = 0;
	}

IL_05b6:
	{
		float L_96 = (__this->___sw_9);
		float L_97 = (__this->___sh_10);
		float L_98 = (__this->___sw_9);
		float L_99 = (__this->___sh_10);
		Rect_t19  L_100 = {0};
		Rect__ctor_m35(&L_100, ((float)((float)(500.0f)*(float)L_96)), ((float)((float)(500.0f)*(float)L_97)), ((float)((float)(200.0f)*(float)L_98)), ((float)((float)(100.0f)*(float)L_99)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_101 = GUI_Button_m75(NULL /*static, unused*/, L_100, _stringLiteral248, /*hidden argument*/NULL);
		if (!L_101)
		{
			goto IL_0601;
		}
	}
	{
		__this->___r_22 = 0;
	}

IL_0601:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		GUISkin_t26 * L_102 = GUI_get_skin_m72(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_102);
		GUIStyle_t10 * L_103 = GUISkin_get_button_m73(L_102, /*hidden argument*/NULL);
		float L_104 = (__this->___buttonsize_12);
		NullCheck(L_103);
		GUIStyle_set_fontSize_m74(L_103, (((int32_t)((int32_t)L_104))), /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_066c;
	}

IL_061e:
	{
		float L_105 = (__this->___sw_9);
		int32_t L_106 = V_0;
		float L_107 = (__this->___sh_10);
		float L_108 = (__this->___sw_9);
		float L_109 = (__this->___sh_10);
		Rect_t19  L_110 = {0};
		Rect__ctor_m35(&L_110, ((float)((float)(5.0f)*(float)L_105)), ((float)((float)(((float)((float)((int32_t)((int32_t)((int32_t)65)+(int32_t)((int32_t)((int32_t)L_106*(int32_t)((int32_t)58))))))))*(float)L_107)), ((float)((float)(55.0f)*(float)L_108)), ((float)((float)(55.0f)*(float)L_109)), /*hidden argument*/NULL);
		TextureU5BU5D_t11* L_111 = (__this->___buttonTexture_15);
		int32_t L_112 = V_0;
		NullCheck(L_111);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_111, L_112);
		int32_t L_113 = L_112;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_114 = GUI_Button_m79(NULL /*static, unused*/, L_110, (*(Texture_t28 **)(Texture_t28 **)SZArrayLdElema(L_111, L_113, sizeof(Texture_t28 *))), /*hidden argument*/NULL);
		if (!L_114)
		{
			goto IL_0668;
		}
	}

IL_0668:
	{
		int32_t L_115 = V_0;
		V_0 = ((int32_t)((int32_t)L_115+(int32_t)1));
	}

IL_066c:
	{
		int32_t L_116 = V_0;
		if ((((int32_t)L_116) < ((int32_t)7)))
		{
			goto IL_061e;
		}
	}
	{
		float L_117 = (__this->___sw_9);
		float L_118 = (__this->___sh_10);
		float L_119 = (__this->___sw_9);
		float L_120 = (__this->___sh_10);
		Rect_t19  L_121 = {0};
		Rect__ctor_m35(&L_121, ((float)((float)(60.0f)*(float)L_117)), ((float)((float)(65.0f)*(float)L_118)), ((float)((float)(225.0f)*(float)L_119)), ((float)((float)(55.0f)*(float)L_120)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_122 = (__this->___buttonmoney_35);
		NullCheck(L_122);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_122, 1);
		int32_t L_123 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_124 = String_Concat_m64(NULL /*static, unused*/, _stringLiteral249, (*(String_t**)(String_t**)SZArrayLdElema(L_122, L_123, sizeof(String_t*))), _stringLiteral250, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_125 = GUI_Button_m75(NULL /*static, unused*/, L_121, L_124, /*hidden argument*/NULL);
		if (!L_125)
		{
			goto IL_06de;
		}
	}
	{
		int32_t L_126 = (__this->___money_32);
		Int32U5BU5D_t15* L_127 = (__this->___mapste1_43);
		NullCheck(L_127);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_127, 3);
		int32_t L_128 = 3;
		__this->___money_32 = ((int32_t)((int32_t)L_126+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_127, L_128, sizeof(int32_t)))));
	}

IL_06de:
	{
		float L_129 = (__this->___sw_9);
		float L_130 = (__this->___sh_10);
		float L_131 = (__this->___sw_9);
		float L_132 = (__this->___sh_10);
		Rect_t19  L_133 = {0};
		Rect__ctor_m35(&L_133, ((float)((float)(60.0f)*(float)L_129)), ((float)((float)(123.0f)*(float)L_130)), ((float)((float)(225.0f)*(float)L_131)), ((float)((float)(55.0f)*(float)L_132)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_134 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 6));
		NullCheck(L_134);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_134, 0);
		ArrayElementTypeCheck (L_134, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_134, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_135 = L_134;
		StringU5BU5D_t14* L_136 = (__this->___savemoneys_40);
		NullCheck(L_136);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_136, 2);
		int32_t L_137 = 2;
		NullCheck(L_135);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_135, 1);
		ArrayElementTypeCheck (L_135, (*(String_t**)(String_t**)SZArrayLdElema(L_136, L_137, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_135, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_136, L_137, sizeof(String_t*)));
		StringU5BU5D_t14* L_138 = L_135;
		StringU5BU5D_t14* L_139 = (__this->___savemoneys_40);
		NullCheck(L_139);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_139, 1);
		int32_t L_140 = 1;
		NullCheck(L_138);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_138, 2);
		ArrayElementTypeCheck (L_138, (*(String_t**)(String_t**)SZArrayLdElema(L_139, L_140, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_138, 2, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_139, L_140, sizeof(String_t*)));
		StringU5BU5D_t14* L_141 = L_138;
		NullCheck(L_141);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_141, 3);
		ArrayElementTypeCheck (L_141, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_141, 3, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_142 = L_141;
		Int32U5BU5D_t15* L_143 = (__this->___mapsyuueki_42);
		NullCheck(L_143);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_143, 1);
		String_t* L_144 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_143, 1, sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_142);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_142, 4);
		ArrayElementTypeCheck (L_142, L_144);
		*((String_t**)(String_t**)SZArrayLdElema(L_142, 4, sizeof(String_t*))) = (String_t*)L_144;
		StringU5BU5D_t14* L_145 = L_142;
		NullCheck(L_145);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_145, 5);
		ArrayElementTypeCheck (L_145, _stringLiteral253);
		*((String_t**)(String_t**)SZArrayLdElema(L_145, 5, sizeof(String_t*))) = (String_t*)_stringLiteral253;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_146 = String_Concat_m65(NULL /*static, unused*/, L_145, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_147 = GUI_Button_m75(NULL /*static, unused*/, L_133, L_146, /*hidden argument*/NULL);
		if (!L_147)
		{
			goto IL_0a7b;
		}
	}
	{
		int32_t L_148 = (__this->___money2_33);
		if ((((int32_t)L_148) <= ((int32_t)0)))
		{
			goto IL_0893;
		}
	}
	{
		int32_t L_149 = (__this->___money2_33);
		Int32U5BU5D_t15* L_150 = (__this->___savemoneyi_41);
		NullCheck(L_150);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_150, 2);
		int32_t L_151 = 2;
		if ((((int32_t)L_149) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_150, L_151, sizeof(int32_t))))))
		{
			goto IL_0887;
		}
	}
	{
		int32_t L_152 = (__this->___money_32);
		Int32U5BU5D_t15* L_153 = (__this->___savemoneyi_41);
		NullCheck(L_153);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_153, 1);
		int32_t L_154 = 1;
		if ((((int32_t)L_152) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_153, L_154, sizeof(int32_t))))))
		{
			goto IL_0887;
		}
	}
	{
		int32_t L_155 = (__this->___money2_33);
		Int32U5BU5D_t15* L_156 = (__this->___savemoneyi_41);
		NullCheck(L_156);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_156, 2);
		int32_t L_157 = 2;
		__this->___money2_33 = ((int32_t)((int32_t)L_155-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_156, L_157, sizeof(int32_t)))));
		int32_t L_158 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_158-(int32_t)1));
		int32_t L_159 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_159+(int32_t)((int32_t)100000000)));
		int32_t L_160 = (__this->___money_32);
		Int32U5BU5D_t15* L_161 = (__this->___savemoneyi_41);
		NullCheck(L_161);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_161, 1);
		int32_t L_162 = 1;
		__this->___money_32 = ((int32_t)((int32_t)L_160-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_161, L_162, sizeof(int32_t)))));
		int32_t L_163 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_164 = (__this->___mapsyuueki_42);
		NullCheck(L_164);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_164, 1);
		int32_t L_165 = 1;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_163+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_164, L_165, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_166 = (__this->___savemoneyi_41);
		NullCheck(L_166);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_166, 1);
		int32_t* L_167 = ((int32_t*)(int32_t*)SZArrayLdElema(L_166, 1, sizeof(int32_t)));
		Int32U5BU5D_t15* L_168 = (__this->___savemoneyi_41);
		NullCheck(L_168);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_168, 1);
		int32_t L_169 = 1;
		*((int32_t*)(L_167)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_167))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_168, L_169, sizeof(int32_t))))))*(double)(0.1))))))));
		Int32U5BU5D_t15* L_170 = (__this->___maplv_27);
		NullCheck(L_170);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_170, 1);
		int32_t* L_171 = ((int32_t*)(int32_t*)SZArrayLdElema(L_170, 1, sizeof(int32_t)));
		*((int32_t*)(L_171)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_171))+(int32_t)1));
		Int32U5BU5D_t15* L_172 = (__this->___savemoneyi_41);
		NullCheck(L_172);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_172, 1);
		int32_t L_173 = 1;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_172, L_173, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_0868;
		}
	}
	{
		Int32U5BU5D_t15* L_174 = (__this->___savemoneyi_41);
		NullCheck(L_174);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_174, 2);
		int32_t* L_175 = ((int32_t*)(int32_t*)SZArrayLdElema(L_174, 2, sizeof(int32_t)));
		*((int32_t*)(L_175)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_175))+(int32_t)1));
		Int32U5BU5D_t15* L_176 = (__this->___savemoneyi_41);
		NullCheck(L_176);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_176, 1);
		int32_t* L_177 = ((int32_t*)(int32_t*)SZArrayLdElema(L_176, 1, sizeof(int32_t)));
		*((int32_t*)(L_177)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_177))-(int32_t)((int32_t)100000000)));
	}

IL_0868:
	{
		Int32U5BU5D_t15* L_178 = (__this->___savemoneyi_41);
		NullCheck(L_178);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_178, 2);
		int32_t L_179 = 2;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_178, L_179, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_0887;
		}
	}
	{
		Int32U5BU5D_t15* L_180 = (__this->___savemoneyi_41);
		NullCheck(L_180);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_180, 2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_180, 2, sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_0887:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_0893:
	{
		int32_t L_181 = (__this->___money2_33);
		if ((((int32_t)L_181) <= ((int32_t)0)))
		{
			goto IL_098e;
		}
	}
	{
		Int32U5BU5D_t15* L_182 = (__this->___savemoneyi_41);
		NullCheck(L_182);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_182, 2);
		int32_t L_183 = 2;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_182, L_183, sizeof(int32_t))))
		{
			goto IL_098e;
		}
	}
	{
		int32_t L_184 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_184-(int32_t)1));
		int32_t L_185 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_185+(int32_t)((int32_t)100000000)));
		int32_t L_186 = (__this->___money_32);
		Int32U5BU5D_t15* L_187 = (__this->___savemoneyi_41);
		NullCheck(L_187);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_187, 1);
		int32_t L_188 = 1;
		__this->___money_32 = ((int32_t)((int32_t)L_186-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_187, L_188, sizeof(int32_t)))));
		int32_t L_189 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_190 = (__this->___mapsyuueki_42);
		NullCheck(L_190);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_190, 1);
		int32_t L_191 = 1;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_189+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_190, L_191, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_192 = (__this->___savemoneyi_41);
		NullCheck(L_192);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_192, 1);
		int32_t* L_193 = ((int32_t*)(int32_t*)SZArrayLdElema(L_192, 1, sizeof(int32_t)));
		Int32U5BU5D_t15* L_194 = (__this->___savemoneyi_41);
		NullCheck(L_194);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_194, 1);
		int32_t L_195 = 1;
		*((int32_t*)(L_193)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_193))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_194, L_195, sizeof(int32_t))))))*(double)(0.1))))))));
		Int32U5BU5D_t15* L_196 = (__this->___maplv_27);
		NullCheck(L_196);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_196, 1);
		int32_t* L_197 = ((int32_t*)(int32_t*)SZArrayLdElema(L_196, 1, sizeof(int32_t)));
		*((int32_t*)(L_197)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_197))+(int32_t)1));
		Int32U5BU5D_t15* L_198 = (__this->___savemoneyi_41);
		NullCheck(L_198);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_198, 1);
		int32_t L_199 = 1;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_198, L_199, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_0963;
		}
	}
	{
		Int32U5BU5D_t15* L_200 = (__this->___savemoneyi_41);
		NullCheck(L_200);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_200, 2);
		int32_t* L_201 = ((int32_t*)(int32_t*)SZArrayLdElema(L_200, 2, sizeof(int32_t)));
		*((int32_t*)(L_201)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_201))+(int32_t)1));
		Int32U5BU5D_t15* L_202 = (__this->___savemoneyi_41);
		NullCheck(L_202);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_202, 1);
		int32_t* L_203 = ((int32_t*)(int32_t*)SZArrayLdElema(L_202, 1, sizeof(int32_t)));
		*((int32_t*)(L_203)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_203))-(int32_t)((int32_t)100000000)));
	}

IL_0963:
	{
		Int32U5BU5D_t15* L_204 = (__this->___savemoneyi_41);
		NullCheck(L_204);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_204, 2);
		int32_t L_205 = 2;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_204, L_205, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_0982;
		}
	}
	{
		Int32U5BU5D_t15* L_206 = (__this->___savemoneyi_41);
		NullCheck(L_206);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_206, 2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_206, 2, sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_0982:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_098e:
	{
		int32_t L_207 = (__this->___money2_33);
		if (L_207)
		{
			goto IL_0a7b;
		}
	}
	{
		Int32U5BU5D_t15* L_208 = (__this->___savemoneyi_41);
		NullCheck(L_208);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_208, 2);
		int32_t L_209 = 2;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_208, L_209, sizeof(int32_t))))
		{
			goto IL_0a7b;
		}
	}
	{
		int32_t L_210 = (__this->___money_32);
		Int32U5BU5D_t15* L_211 = (__this->___savemoneyi_41);
		NullCheck(L_211);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_211, 1);
		int32_t L_212 = 1;
		if ((((int32_t)L_210) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_211, L_212, sizeof(int32_t))))))
		{
			goto IL_0a7b;
		}
	}
	{
		int32_t L_213 = (__this->___money_32);
		Int32U5BU5D_t15* L_214 = (__this->___savemoneyi_41);
		NullCheck(L_214);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_214, 1);
		int32_t L_215 = 1;
		__this->___money_32 = ((int32_t)((int32_t)L_213-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_214, L_215, sizeof(int32_t)))));
		int32_t L_216 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_217 = (__this->___mapsyuueki_42);
		NullCheck(L_217);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_217, 1);
		int32_t L_218 = 1;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_216+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_217, L_218, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_219 = (__this->___savemoneyi_41);
		NullCheck(L_219);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_219, 1);
		int32_t* L_220 = ((int32_t*)(int32_t*)SZArrayLdElema(L_219, 1, sizeof(int32_t)));
		Int32U5BU5D_t15* L_221 = (__this->___savemoneyi_41);
		NullCheck(L_221);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_221, 1);
		int32_t L_222 = 1;
		*((int32_t*)(L_220)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_220))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_221, L_222, sizeof(int32_t))))))*(double)(0.1))))))));
		Int32U5BU5D_t15* L_223 = (__this->___maplv_27);
		NullCheck(L_223);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_223, 1);
		int32_t* L_224 = ((int32_t*)(int32_t*)SZArrayLdElema(L_223, 1, sizeof(int32_t)));
		*((int32_t*)(L_224)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_224))+(int32_t)1));
		Int32U5BU5D_t15* L_225 = (__this->___savemoneyi_41);
		NullCheck(L_225);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_225, 1);
		int32_t L_226 = 1;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_225, L_226, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_0a50;
		}
	}
	{
		Int32U5BU5D_t15* L_227 = (__this->___savemoneyi_41);
		NullCheck(L_227);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_227, 2);
		int32_t* L_228 = ((int32_t*)(int32_t*)SZArrayLdElema(L_227, 2, sizeof(int32_t)));
		*((int32_t*)(L_228)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_228))+(int32_t)1));
		Int32U5BU5D_t15* L_229 = (__this->___savemoneyi_41);
		NullCheck(L_229);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_229, 1);
		int32_t* L_230 = ((int32_t*)(int32_t*)SZArrayLdElema(L_229, 1, sizeof(int32_t)));
		*((int32_t*)(L_230)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_230))-(int32_t)((int32_t)100000000)));
	}

IL_0a50:
	{
		Int32U5BU5D_t15* L_231 = (__this->___savemoneyi_41);
		NullCheck(L_231);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_231, 2);
		int32_t L_232 = 2;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_231, L_232, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_0a6f;
		}
	}
	{
		Int32U5BU5D_t15* L_233 = (__this->___savemoneyi_41);
		NullCheck(L_233);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_233, 2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_233, 2, sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_0a6f:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_0a7b:
	{
		float L_234 = (__this->___sw_9);
		float L_235 = (__this->___sh_10);
		float L_236 = (__this->___sw_9);
		float L_237 = (__this->___sh_10);
		Rect_t19  L_238 = {0};
		Rect__ctor_m35(&L_238, ((float)((float)(60.0f)*(float)L_234)), ((float)((float)(181.0f)*(float)L_235)), ((float)((float)(225.0f)*(float)L_236)), ((float)((float)(55.0f)*(float)L_237)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_239 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 6));
		NullCheck(L_239);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_239, 0);
		ArrayElementTypeCheck (L_239, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_239, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_240 = L_239;
		StringU5BU5D_t14* L_241 = (__this->___savemoneys_40);
		NullCheck(L_241);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_241, 4);
		int32_t L_242 = 4;
		NullCheck(L_240);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_240, 1);
		ArrayElementTypeCheck (L_240, (*(String_t**)(String_t**)SZArrayLdElema(L_241, L_242, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_240, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_241, L_242, sizeof(String_t*)));
		StringU5BU5D_t14* L_243 = L_240;
		StringU5BU5D_t14* L_244 = (__this->___savemoneys_40);
		NullCheck(L_244);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_244, 3);
		int32_t L_245 = 3;
		NullCheck(L_243);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_243, 2);
		ArrayElementTypeCheck (L_243, (*(String_t**)(String_t**)SZArrayLdElema(L_244, L_245, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_243, 2, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_244, L_245, sizeof(String_t*)));
		StringU5BU5D_t14* L_246 = L_243;
		NullCheck(L_246);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_246, 3);
		ArrayElementTypeCheck (L_246, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_246, 3, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_247 = L_246;
		Int32U5BU5D_t15* L_248 = (__this->___mapsyuueki_42);
		NullCheck(L_248);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_248, 2);
		String_t* L_249 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_248, 2, sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_247);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_247, 4);
		ArrayElementTypeCheck (L_247, L_249);
		*((String_t**)(String_t**)SZArrayLdElema(L_247, 4, sizeof(String_t*))) = (String_t*)L_249;
		StringU5BU5D_t14* L_250 = L_247;
		NullCheck(L_250);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_250, 5);
		ArrayElementTypeCheck (L_250, _stringLiteral254);
		*((String_t**)(String_t**)SZArrayLdElema(L_250, 5, sizeof(String_t*))) = (String_t*)_stringLiteral254;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_251 = String_Concat_m65(NULL /*static, unused*/, L_250, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_252 = GUI_Button_m75(NULL /*static, unused*/, L_238, L_251, /*hidden argument*/NULL);
		if (!L_252)
		{
			goto IL_0e57;
		}
	}
	{
		int32_t L_253 = (__this->___money2_33);
		if ((((int32_t)L_253) <= ((int32_t)0)))
		{
			goto IL_0c45;
		}
	}
	{
		int32_t L_254 = (__this->___money2_33);
		Int32U5BU5D_t15* L_255 = (__this->___savemoneyi_41);
		NullCheck(L_255);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_255, 4);
		int32_t L_256 = 4;
		if ((((int32_t)L_254) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_255, L_256, sizeof(int32_t))))))
		{
			goto IL_0c45;
		}
	}
	{
		int32_t L_257 = (__this->___money_32);
		Int32U5BU5D_t15* L_258 = (__this->___savemoneyi_41);
		NullCheck(L_258);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_258, 3);
		int32_t L_259 = 3;
		if ((((int32_t)L_257) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_258, L_259, sizeof(int32_t))))))
		{
			goto IL_0c45;
		}
	}
	{
		int32_t L_260 = (__this->___money2_33);
		Int32U5BU5D_t15* L_261 = (__this->___savemoneyi_41);
		NullCheck(L_261);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_261, 4);
		int32_t L_262 = 4;
		__this->___money2_33 = ((int32_t)((int32_t)L_260-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_261, L_262, sizeof(int32_t)))));
		int32_t L_263 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_263-(int32_t)1));
		int32_t L_264 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_264+(int32_t)((int32_t)100000000)));
		int32_t L_265 = (__this->___money_32);
		Int32U5BU5D_t15* L_266 = (__this->___savemoneyi_41);
		NullCheck(L_266);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_266, 3);
		int32_t L_267 = 3;
		__this->___money_32 = ((int32_t)((int32_t)L_265-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_266, L_267, sizeof(int32_t)))));
		int32_t L_268 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_269 = (__this->___mapsyuueki_42);
		NullCheck(L_269);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_269, 2);
		int32_t L_270 = 2;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_268+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_269, L_270, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_271 = (__this->___savemoneyi_41);
		NullCheck(L_271);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_271, 3);
		int32_t* L_272 = ((int32_t*)(int32_t*)SZArrayLdElema(L_271, 3, sizeof(int32_t)));
		Int32U5BU5D_t15* L_273 = (__this->___savemoneyi_41);
		NullCheck(L_273);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_273, 3);
		int32_t L_274 = 3;
		*((int32_t*)(L_272)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_272))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_273, L_274, sizeof(int32_t))))))*(double)(0.1))))))));
		Int32U5BU5D_t15* L_275 = (__this->___maplv_27);
		NullCheck(L_275);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_275, 2);
		int32_t L_276 = 2;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_275, L_276, sizeof(int32_t))))
		{
			goto IL_0bd1;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)30);
	}

IL_0bd1:
	{
		Int32U5BU5D_t15* L_277 = (__this->___maplv_27);
		NullCheck(L_277);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_277, 2);
		int32_t* L_278 = ((int32_t*)(int32_t*)SZArrayLdElema(L_277, 2, sizeof(int32_t)));
		*((int32_t*)(L_278)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_278))+(int32_t)1));
		Int32U5BU5D_t15* L_279 = (__this->___savemoneyi_41);
		NullCheck(L_279);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_279, 3);
		int32_t L_280 = 3;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_279, L_280, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_0c1a;
		}
	}
	{
		Int32U5BU5D_t15* L_281 = (__this->___savemoneyi_41);
		NullCheck(L_281);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_281, 4);
		int32_t* L_282 = ((int32_t*)(int32_t*)SZArrayLdElema(L_281, 4, sizeof(int32_t)));
		*((int32_t*)(L_282)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_282))+(int32_t)1));
		Int32U5BU5D_t15* L_283 = (__this->___savemoneyi_41);
		NullCheck(L_283);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_283, 3);
		int32_t* L_284 = ((int32_t*)(int32_t*)SZArrayLdElema(L_283, 3, sizeof(int32_t)));
		*((int32_t*)(L_284)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_284))-(int32_t)((int32_t)100000000)));
	}

IL_0c1a:
	{
		Int32U5BU5D_t15* L_285 = (__this->___savemoneyi_41);
		NullCheck(L_285);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_285, 4);
		int32_t L_286 = 4;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_285, L_286, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_0c39;
		}
	}
	{
		Int32U5BU5D_t15* L_287 = (__this->___savemoneyi_41);
		NullCheck(L_287);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_287, 4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_287, 4, sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_0c39:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_0c45:
	{
		int32_t L_288 = (__this->___money2_33);
		if ((((int32_t)L_288) <= ((int32_t)0)))
		{
			goto IL_0d55;
		}
	}
	{
		Int32U5BU5D_t15* L_289 = (__this->___savemoneyi_41);
		NullCheck(L_289);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_289, 4);
		int32_t L_290 = 4;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_289, L_290, sizeof(int32_t))))
		{
			goto IL_0d55;
		}
	}
	{
		int32_t L_291 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_291-(int32_t)1));
		int32_t L_292 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_292+(int32_t)((int32_t)100000000)));
		int32_t L_293 = (__this->___money_32);
		Int32U5BU5D_t15* L_294 = (__this->___savemoneyi_41);
		NullCheck(L_294);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_294, 3);
		int32_t L_295 = 3;
		__this->___money_32 = ((int32_t)((int32_t)L_293-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_294, L_295, sizeof(int32_t)))));
		int32_t L_296 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_297 = (__this->___mapsyuueki_42);
		NullCheck(L_297);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_297, 2);
		int32_t L_298 = 2;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_296+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_297, L_298, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_299 = (__this->___savemoneyi_41);
		NullCheck(L_299);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_299, 3);
		int32_t* L_300 = ((int32_t*)(int32_t*)SZArrayLdElema(L_299, 3, sizeof(int32_t)));
		Int32U5BU5D_t15* L_301 = (__this->___savemoneyi_41);
		NullCheck(L_301);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_301, 3);
		int32_t L_302 = 3;
		*((int32_t*)(L_300)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_300))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_301, L_302, sizeof(int32_t))))))*(double)(0.1))))))));
		Int32U5BU5D_t15* L_303 = (__this->___maplv_27);
		NullCheck(L_303);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_303, 2);
		int32_t L_304 = 2;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_303, L_304, sizeof(int32_t))))
		{
			goto IL_0ce1;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)30);
	}

IL_0ce1:
	{
		Int32U5BU5D_t15* L_305 = (__this->___maplv_27);
		NullCheck(L_305);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_305, 2);
		int32_t* L_306 = ((int32_t*)(int32_t*)SZArrayLdElema(L_305, 2, sizeof(int32_t)));
		*((int32_t*)(L_306)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_306))+(int32_t)1));
		Int32U5BU5D_t15* L_307 = (__this->___savemoneyi_41);
		NullCheck(L_307);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_307, 3);
		int32_t L_308 = 3;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_307, L_308, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_0d2a;
		}
	}
	{
		Int32U5BU5D_t15* L_309 = (__this->___savemoneyi_41);
		NullCheck(L_309);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_309, 4);
		int32_t* L_310 = ((int32_t*)(int32_t*)SZArrayLdElema(L_309, 4, sizeof(int32_t)));
		*((int32_t*)(L_310)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_310))+(int32_t)1));
		Int32U5BU5D_t15* L_311 = (__this->___savemoneyi_41);
		NullCheck(L_311);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_311, 3);
		int32_t* L_312 = ((int32_t*)(int32_t*)SZArrayLdElema(L_311, 3, sizeof(int32_t)));
		*((int32_t*)(L_312)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_312))-(int32_t)((int32_t)100000000)));
	}

IL_0d2a:
	{
		Int32U5BU5D_t15* L_313 = (__this->___savemoneyi_41);
		NullCheck(L_313);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_313, 4);
		int32_t L_314 = 4;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_313, L_314, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_0d49;
		}
	}
	{
		Int32U5BU5D_t15* L_315 = (__this->___savemoneyi_41);
		NullCheck(L_315);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_315, 4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_315, 4, sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_0d49:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_0d55:
	{
		int32_t L_316 = (__this->___money2_33);
		if (L_316)
		{
			goto IL_0e57;
		}
	}
	{
		Int32U5BU5D_t15* L_317 = (__this->___savemoneyi_41);
		NullCheck(L_317);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_317, 4);
		int32_t L_318 = 4;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_317, L_318, sizeof(int32_t))))
		{
			goto IL_0e57;
		}
	}
	{
		int32_t L_319 = (__this->___money_32);
		Int32U5BU5D_t15* L_320 = (__this->___savemoneyi_41);
		NullCheck(L_320);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_320, 3);
		int32_t L_321 = 3;
		if ((((int32_t)L_319) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_320, L_321, sizeof(int32_t))))))
		{
			goto IL_0e57;
		}
	}
	{
		int32_t L_322 = (__this->___money_32);
		Int32U5BU5D_t15* L_323 = (__this->___savemoneyi_41);
		NullCheck(L_323);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_323, 3);
		int32_t L_324 = 3;
		__this->___money_32 = ((int32_t)((int32_t)L_322-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_323, L_324, sizeof(int32_t)))));
		int32_t L_325 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_326 = (__this->___mapsyuueki_42);
		NullCheck(L_326);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_326, 2);
		int32_t L_327 = 2;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_325+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_326, L_327, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_328 = (__this->___savemoneyi_41);
		NullCheck(L_328);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_328, 3);
		int32_t* L_329 = ((int32_t*)(int32_t*)SZArrayLdElema(L_328, 3, sizeof(int32_t)));
		Int32U5BU5D_t15* L_330 = (__this->___savemoneyi_41);
		NullCheck(L_330);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_330, 3);
		int32_t L_331 = 3;
		*((int32_t*)(L_329)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_329))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_330, L_331, sizeof(int32_t))))))*(double)(0.1))))))));
		Int32U5BU5D_t15* L_332 = (__this->___maplv_27);
		NullCheck(L_332);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_332, 2);
		int32_t L_333 = 2;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_332, L_333, sizeof(int32_t))))
		{
			goto IL_0de3;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)30);
	}

IL_0de3:
	{
		Int32U5BU5D_t15* L_334 = (__this->___maplv_27);
		NullCheck(L_334);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_334, 2);
		int32_t* L_335 = ((int32_t*)(int32_t*)SZArrayLdElema(L_334, 2, sizeof(int32_t)));
		*((int32_t*)(L_335)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_335))+(int32_t)1));
		Int32U5BU5D_t15* L_336 = (__this->___savemoneyi_41);
		NullCheck(L_336);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_336, 3);
		int32_t L_337 = 3;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_336, L_337, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_0e2c;
		}
	}
	{
		Int32U5BU5D_t15* L_338 = (__this->___savemoneyi_41);
		NullCheck(L_338);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_338, 4);
		int32_t* L_339 = ((int32_t*)(int32_t*)SZArrayLdElema(L_338, 4, sizeof(int32_t)));
		*((int32_t*)(L_339)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_339))+(int32_t)1));
		Int32U5BU5D_t15* L_340 = (__this->___savemoneyi_41);
		NullCheck(L_340);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_340, 3);
		int32_t* L_341 = ((int32_t*)(int32_t*)SZArrayLdElema(L_340, 3, sizeof(int32_t)));
		*((int32_t*)(L_341)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_341))-(int32_t)((int32_t)100000000)));
	}

IL_0e2c:
	{
		Int32U5BU5D_t15* L_342 = (__this->___savemoneyi_41);
		NullCheck(L_342);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_342, 4);
		int32_t L_343 = 4;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_342, L_343, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_0e4b;
		}
	}
	{
		Int32U5BU5D_t15* L_344 = (__this->___savemoneyi_41);
		NullCheck(L_344);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_344, 4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_344, 4, sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_0e4b:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_0e57:
	{
		float L_345 = (__this->___sw_9);
		float L_346 = (__this->___sh_10);
		float L_347 = (__this->___sw_9);
		float L_348 = (__this->___sh_10);
		Rect_t19  L_349 = {0};
		Rect__ctor_m35(&L_349, ((float)((float)(60.0f)*(float)L_345)), ((float)((float)(239.0f)*(float)L_346)), ((float)((float)(225.0f)*(float)L_347)), ((float)((float)(55.0f)*(float)L_348)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_350 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 6));
		NullCheck(L_350);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_350, 0);
		ArrayElementTypeCheck (L_350, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_350, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_351 = L_350;
		StringU5BU5D_t14* L_352 = (__this->___savemoneys_40);
		NullCheck(L_352);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_352, 6);
		int32_t L_353 = 6;
		NullCheck(L_351);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_351, 1);
		ArrayElementTypeCheck (L_351, (*(String_t**)(String_t**)SZArrayLdElema(L_352, L_353, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_351, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_352, L_353, sizeof(String_t*)));
		StringU5BU5D_t14* L_354 = L_351;
		StringU5BU5D_t14* L_355 = (__this->___savemoneys_40);
		NullCheck(L_355);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_355, 5);
		int32_t L_356 = 5;
		NullCheck(L_354);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_354, 2);
		ArrayElementTypeCheck (L_354, (*(String_t**)(String_t**)SZArrayLdElema(L_355, L_356, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_354, 2, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_355, L_356, sizeof(String_t*)));
		StringU5BU5D_t14* L_357 = L_354;
		NullCheck(L_357);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_357, 3);
		ArrayElementTypeCheck (L_357, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_357, 3, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_358 = L_357;
		Int32U5BU5D_t15* L_359 = (__this->___mapsyuueki_42);
		NullCheck(L_359);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_359, 3);
		String_t* L_360 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_359, 3, sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_358);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_358, 4);
		ArrayElementTypeCheck (L_358, L_360);
		*((String_t**)(String_t**)SZArrayLdElema(L_358, 4, sizeof(String_t*))) = (String_t*)L_360;
		StringU5BU5D_t14* L_361 = L_358;
		NullCheck(L_361);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_361, 5);
		ArrayElementTypeCheck (L_361, _stringLiteral255);
		*((String_t**)(String_t**)SZArrayLdElema(L_361, 5, sizeof(String_t*))) = (String_t*)_stringLiteral255;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_362 = String_Concat_m65(NULL /*static, unused*/, L_361, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_363 = GUI_Button_m75(NULL /*static, unused*/, L_349, L_362, /*hidden argument*/NULL);
		if (!L_363)
		{
			goto IL_1233;
		}
	}
	{
		int32_t L_364 = (__this->___money2_33);
		if ((((int32_t)L_364) <= ((int32_t)0)))
		{
			goto IL_1021;
		}
	}
	{
		int32_t L_365 = (__this->___money2_33);
		Int32U5BU5D_t15* L_366 = (__this->___savemoneyi_41);
		NullCheck(L_366);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_366, 6);
		int32_t L_367 = 6;
		if ((((int32_t)L_365) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_366, L_367, sizeof(int32_t))))))
		{
			goto IL_1021;
		}
	}
	{
		int32_t L_368 = (__this->___money_32);
		Int32U5BU5D_t15* L_369 = (__this->___savemoneyi_41);
		NullCheck(L_369);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_369, 5);
		int32_t L_370 = 5;
		if ((((int32_t)L_368) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_369, L_370, sizeof(int32_t))))))
		{
			goto IL_1021;
		}
	}
	{
		int32_t L_371 = (__this->___money2_33);
		Int32U5BU5D_t15* L_372 = (__this->___savemoneyi_41);
		NullCheck(L_372);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_372, 6);
		int32_t L_373 = 6;
		__this->___money2_33 = ((int32_t)((int32_t)L_371-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_372, L_373, sizeof(int32_t)))));
		int32_t L_374 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_374-(int32_t)1));
		int32_t L_375 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_375+(int32_t)((int32_t)100000000)));
		int32_t L_376 = (__this->___money_32);
		Int32U5BU5D_t15* L_377 = (__this->___savemoneyi_41);
		NullCheck(L_377);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_377, 5);
		int32_t L_378 = 5;
		__this->___money_32 = ((int32_t)((int32_t)L_376-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_377, L_378, sizeof(int32_t)))));
		int32_t L_379 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_380 = (__this->___mapsyuueki_42);
		NullCheck(L_380);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_380, 3);
		int32_t L_381 = 3;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_379+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_380, L_381, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_382 = (__this->___savemoneyi_41);
		NullCheck(L_382);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_382, 5);
		int32_t* L_383 = ((int32_t*)(int32_t*)SZArrayLdElema(L_382, 5, sizeof(int32_t)));
		Int32U5BU5D_t15* L_384 = (__this->___savemoneyi_41);
		NullCheck(L_384);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_384, 5);
		int32_t L_385 = 5;
		*((int32_t*)(L_383)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_383))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_384, L_385, sizeof(int32_t))))))*(double)(0.1))))))));
		Int32U5BU5D_t15* L_386 = (__this->___maplv_27);
		NullCheck(L_386);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_386, 3);
		int32_t L_387 = 3;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_386, L_387, sizeof(int32_t))))
		{
			goto IL_0fad;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)31);
	}

IL_0fad:
	{
		Int32U5BU5D_t15* L_388 = (__this->___maplv_27);
		NullCheck(L_388);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_388, 3);
		int32_t* L_389 = ((int32_t*)(int32_t*)SZArrayLdElema(L_388, 3, sizeof(int32_t)));
		*((int32_t*)(L_389)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_389))+(int32_t)1));
		Int32U5BU5D_t15* L_390 = (__this->___savemoneyi_41);
		NullCheck(L_390);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_390, 5);
		int32_t L_391 = 5;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_390, L_391, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_0ff6;
		}
	}
	{
		Int32U5BU5D_t15* L_392 = (__this->___savemoneyi_41);
		NullCheck(L_392);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_392, 6);
		int32_t* L_393 = ((int32_t*)(int32_t*)SZArrayLdElema(L_392, 6, sizeof(int32_t)));
		*((int32_t*)(L_393)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_393))+(int32_t)1));
		Int32U5BU5D_t15* L_394 = (__this->___savemoneyi_41);
		NullCheck(L_394);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_394, 5);
		int32_t* L_395 = ((int32_t*)(int32_t*)SZArrayLdElema(L_394, 5, sizeof(int32_t)));
		*((int32_t*)(L_395)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_395))-(int32_t)((int32_t)100000000)));
	}

IL_0ff6:
	{
		Int32U5BU5D_t15* L_396 = (__this->___savemoneyi_41);
		NullCheck(L_396);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_396, 6);
		int32_t L_397 = 6;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_396, L_397, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_1015;
		}
	}
	{
		Int32U5BU5D_t15* L_398 = (__this->___savemoneyi_41);
		NullCheck(L_398);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_398, 6);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_398, 6, sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_1015:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_1021:
	{
		int32_t L_399 = (__this->___money2_33);
		if ((((int32_t)L_399) <= ((int32_t)0)))
		{
			goto IL_1131;
		}
	}
	{
		Int32U5BU5D_t15* L_400 = (__this->___savemoneyi_41);
		NullCheck(L_400);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_400, 6);
		int32_t L_401 = 6;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_400, L_401, sizeof(int32_t))))
		{
			goto IL_1131;
		}
	}
	{
		int32_t L_402 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_402-(int32_t)1));
		int32_t L_403 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_403+(int32_t)((int32_t)100000000)));
		int32_t L_404 = (__this->___money_32);
		Int32U5BU5D_t15* L_405 = (__this->___savemoneyi_41);
		NullCheck(L_405);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_405, 6);
		int32_t L_406 = 6;
		__this->___money_32 = ((int32_t)((int32_t)L_404-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_405, L_406, sizeof(int32_t)))));
		int32_t L_407 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_408 = (__this->___mapsyuueki_42);
		NullCheck(L_408);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_408, 3);
		int32_t L_409 = 3;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_407+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_408, L_409, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_410 = (__this->___savemoneyi_41);
		NullCheck(L_410);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_410, 5);
		int32_t* L_411 = ((int32_t*)(int32_t*)SZArrayLdElema(L_410, 5, sizeof(int32_t)));
		Int32U5BU5D_t15* L_412 = (__this->___savemoneyi_41);
		NullCheck(L_412);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_412, 5);
		int32_t L_413 = 5;
		*((int32_t*)(L_411)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_411))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_412, L_413, sizeof(int32_t))))))*(double)(0.1))))))));
		Int32U5BU5D_t15* L_414 = (__this->___maplv_27);
		NullCheck(L_414);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_414, 3);
		int32_t L_415 = 3;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_414, L_415, sizeof(int32_t))))
		{
			goto IL_10bd;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)31);
	}

IL_10bd:
	{
		Int32U5BU5D_t15* L_416 = (__this->___maplv_27);
		NullCheck(L_416);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_416, 3);
		int32_t* L_417 = ((int32_t*)(int32_t*)SZArrayLdElema(L_416, 3, sizeof(int32_t)));
		*((int32_t*)(L_417)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_417))+(int32_t)1));
		Int32U5BU5D_t15* L_418 = (__this->___savemoneyi_41);
		NullCheck(L_418);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_418, 5);
		int32_t L_419 = 5;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_418, L_419, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_1106;
		}
	}
	{
		Int32U5BU5D_t15* L_420 = (__this->___savemoneyi_41);
		NullCheck(L_420);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_420, 6);
		int32_t* L_421 = ((int32_t*)(int32_t*)SZArrayLdElema(L_420, 6, sizeof(int32_t)));
		*((int32_t*)(L_421)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_421))+(int32_t)1));
		Int32U5BU5D_t15* L_422 = (__this->___savemoneyi_41);
		NullCheck(L_422);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_422, 5);
		int32_t* L_423 = ((int32_t*)(int32_t*)SZArrayLdElema(L_422, 5, sizeof(int32_t)));
		*((int32_t*)(L_423)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_423))-(int32_t)((int32_t)100000000)));
	}

IL_1106:
	{
		Int32U5BU5D_t15* L_424 = (__this->___savemoneyi_41);
		NullCheck(L_424);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_424, 6);
		int32_t L_425 = 6;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_424, L_425, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_1125;
		}
	}
	{
		Int32U5BU5D_t15* L_426 = (__this->___savemoneyi_41);
		NullCheck(L_426);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_426, 6);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_426, 6, sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_1125:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_1131:
	{
		int32_t L_427 = (__this->___money2_33);
		if (L_427)
		{
			goto IL_1233;
		}
	}
	{
		Int32U5BU5D_t15* L_428 = (__this->___savemoneyi_41);
		NullCheck(L_428);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_428, 6);
		int32_t L_429 = 6;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_428, L_429, sizeof(int32_t))))
		{
			goto IL_1233;
		}
	}
	{
		int32_t L_430 = (__this->___money_32);
		Int32U5BU5D_t15* L_431 = (__this->___savemoneyi_41);
		NullCheck(L_431);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_431, 5);
		int32_t L_432 = 5;
		if ((((int32_t)L_430) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_431, L_432, sizeof(int32_t))))))
		{
			goto IL_1233;
		}
	}
	{
		int32_t L_433 = (__this->___money_32);
		Int32U5BU5D_t15* L_434 = (__this->___savemoneyi_41);
		NullCheck(L_434);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_434, 5);
		int32_t L_435 = 5;
		__this->___money_32 = ((int32_t)((int32_t)L_433-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_434, L_435, sizeof(int32_t)))));
		int32_t L_436 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_437 = (__this->___mapsyuueki_42);
		NullCheck(L_437);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_437, 3);
		int32_t L_438 = 3;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_436+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_437, L_438, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_439 = (__this->___savemoneyi_41);
		NullCheck(L_439);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_439, 5);
		int32_t* L_440 = ((int32_t*)(int32_t*)SZArrayLdElema(L_439, 5, sizeof(int32_t)));
		Int32U5BU5D_t15* L_441 = (__this->___savemoneyi_41);
		NullCheck(L_441);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_441, 5);
		int32_t L_442 = 5;
		*((int32_t*)(L_440)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_440))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_441, L_442, sizeof(int32_t))))))*(double)(0.1))))))));
		Int32U5BU5D_t15* L_443 = (__this->___maplv_27);
		NullCheck(L_443);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_443, 3);
		int32_t L_444 = 3;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_443, L_444, sizeof(int32_t))))
		{
			goto IL_11bf;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)31);
	}

IL_11bf:
	{
		Int32U5BU5D_t15* L_445 = (__this->___maplv_27);
		NullCheck(L_445);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_445, 3);
		int32_t* L_446 = ((int32_t*)(int32_t*)SZArrayLdElema(L_445, 3, sizeof(int32_t)));
		*((int32_t*)(L_446)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_446))+(int32_t)1));
		Int32U5BU5D_t15* L_447 = (__this->___savemoneyi_41);
		NullCheck(L_447);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_447, 5);
		int32_t L_448 = 5;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_447, L_448, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_1208;
		}
	}
	{
		Int32U5BU5D_t15* L_449 = (__this->___savemoneyi_41);
		NullCheck(L_449);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_449, 6);
		int32_t* L_450 = ((int32_t*)(int32_t*)SZArrayLdElema(L_449, 6, sizeof(int32_t)));
		*((int32_t*)(L_450)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_450))+(int32_t)1));
		Int32U5BU5D_t15* L_451 = (__this->___savemoneyi_41);
		NullCheck(L_451);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_451, 5);
		int32_t* L_452 = ((int32_t*)(int32_t*)SZArrayLdElema(L_451, 5, sizeof(int32_t)));
		*((int32_t*)(L_452)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_452))-(int32_t)((int32_t)100000000)));
	}

IL_1208:
	{
		Int32U5BU5D_t15* L_453 = (__this->___savemoneyi_41);
		NullCheck(L_453);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_453, 6);
		int32_t L_454 = 6;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_453, L_454, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_1227;
		}
	}
	{
		Int32U5BU5D_t15* L_455 = (__this->___savemoneyi_41);
		NullCheck(L_455);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_455, 6);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_455, 6, sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_1227:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_1233:
	{
		float L_456 = (__this->___sw_9);
		float L_457 = (__this->___sh_10);
		float L_458 = (__this->___sw_9);
		float L_459 = (__this->___sh_10);
		Rect_t19  L_460 = {0};
		Rect__ctor_m35(&L_460, ((float)((float)(60.0f)*(float)L_456)), ((float)((float)(297.0f)*(float)L_457)), ((float)((float)(225.0f)*(float)L_458)), ((float)((float)(55.0f)*(float)L_459)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_461 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 6));
		NullCheck(L_461);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_461, 0);
		ArrayElementTypeCheck (L_461, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_461, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_462 = L_461;
		StringU5BU5D_t14* L_463 = (__this->___savemoneys_40);
		NullCheck(L_463);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_463, 8);
		int32_t L_464 = 8;
		NullCheck(L_462);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_462, 1);
		ArrayElementTypeCheck (L_462, (*(String_t**)(String_t**)SZArrayLdElema(L_463, L_464, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_462, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_463, L_464, sizeof(String_t*)));
		StringU5BU5D_t14* L_465 = L_462;
		StringU5BU5D_t14* L_466 = (__this->___savemoneys_40);
		NullCheck(L_466);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_466, 7);
		int32_t L_467 = 7;
		NullCheck(L_465);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_465, 2);
		ArrayElementTypeCheck (L_465, (*(String_t**)(String_t**)SZArrayLdElema(L_466, L_467, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_465, 2, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_466, L_467, sizeof(String_t*)));
		StringU5BU5D_t14* L_468 = L_465;
		NullCheck(L_468);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_468, 3);
		ArrayElementTypeCheck (L_468, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_468, 3, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_469 = L_468;
		Int32U5BU5D_t15* L_470 = (__this->___mapsyuueki_42);
		NullCheck(L_470);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_470, 4);
		String_t* L_471 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_470, 4, sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_469);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_469, 4);
		ArrayElementTypeCheck (L_469, L_471);
		*((String_t**)(String_t**)SZArrayLdElema(L_469, 4, sizeof(String_t*))) = (String_t*)L_471;
		StringU5BU5D_t14* L_472 = L_469;
		NullCheck(L_472);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_472, 5);
		ArrayElementTypeCheck (L_472, _stringLiteral256);
		*((String_t**)(String_t**)SZArrayLdElema(L_472, 5, sizeof(String_t*))) = (String_t*)_stringLiteral256;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_473 = String_Concat_m65(NULL /*static, unused*/, L_472, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_474 = GUI_Button_m75(NULL /*static, unused*/, L_460, L_473, /*hidden argument*/NULL);
		if (!L_474)
		{
			goto IL_160f;
		}
	}
	{
		int32_t L_475 = (__this->___money2_33);
		if ((((int32_t)L_475) <= ((int32_t)0)))
		{
			goto IL_13fd;
		}
	}
	{
		int32_t L_476 = (__this->___money2_33);
		Int32U5BU5D_t15* L_477 = (__this->___savemoneyi_41);
		NullCheck(L_477);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_477, 8);
		int32_t L_478 = 8;
		if ((((int32_t)L_476) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_477, L_478, sizeof(int32_t))))))
		{
			goto IL_13fd;
		}
	}
	{
		int32_t L_479 = (__this->___money_32);
		Int32U5BU5D_t15* L_480 = (__this->___savemoneyi_41);
		NullCheck(L_480);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_480, 7);
		int32_t L_481 = 7;
		if ((((int32_t)L_479) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_480, L_481, sizeof(int32_t))))))
		{
			goto IL_13fd;
		}
	}
	{
		int32_t L_482 = (__this->___money2_33);
		Int32U5BU5D_t15* L_483 = (__this->___savemoneyi_41);
		NullCheck(L_483);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_483, 8);
		int32_t L_484 = 8;
		__this->___money2_33 = ((int32_t)((int32_t)L_482-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_483, L_484, sizeof(int32_t)))));
		int32_t L_485 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_485-(int32_t)1));
		int32_t L_486 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_486+(int32_t)((int32_t)100000000)));
		int32_t L_487 = (__this->___money_32);
		Int32U5BU5D_t15* L_488 = (__this->___savemoneyi_41);
		NullCheck(L_488);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_488, 7);
		int32_t L_489 = 7;
		__this->___money_32 = ((int32_t)((int32_t)L_487-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_488, L_489, sizeof(int32_t)))));
		int32_t L_490 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_491 = (__this->___mapsyuueki_42);
		NullCheck(L_491);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_491, 4);
		int32_t L_492 = 4;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_490+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_491, L_492, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_493 = (__this->___savemoneyi_41);
		NullCheck(L_493);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_493, 7);
		int32_t* L_494 = ((int32_t*)(int32_t*)SZArrayLdElema(L_493, 7, sizeof(int32_t)));
		Int32U5BU5D_t15* L_495 = (__this->___savemoneyi_41);
		NullCheck(L_495);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_495, 7);
		int32_t L_496 = 7;
		*((int32_t*)(L_494)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_494))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_495, L_496, sizeof(int32_t))))))*(double)(0.2))))))));
		Int32U5BU5D_t15* L_497 = (__this->___maplv_27);
		NullCheck(L_497);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_497, 4);
		int32_t L_498 = 4;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_497, L_498, sizeof(int32_t))))
		{
			goto IL_1389;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)32);
	}

IL_1389:
	{
		Int32U5BU5D_t15* L_499 = (__this->___maplv_27);
		NullCheck(L_499);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_499, 4);
		int32_t* L_500 = ((int32_t*)(int32_t*)SZArrayLdElema(L_499, 4, sizeof(int32_t)));
		*((int32_t*)(L_500)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_500))+(int32_t)1));
		Int32U5BU5D_t15* L_501 = (__this->___savemoneyi_41);
		NullCheck(L_501);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_501, 7);
		int32_t L_502 = 7;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_501, L_502, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_13d2;
		}
	}
	{
		Int32U5BU5D_t15* L_503 = (__this->___savemoneyi_41);
		NullCheck(L_503);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_503, 8);
		int32_t* L_504 = ((int32_t*)(int32_t*)SZArrayLdElema(L_503, 8, sizeof(int32_t)));
		*((int32_t*)(L_504)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_504))+(int32_t)1));
		Int32U5BU5D_t15* L_505 = (__this->___savemoneyi_41);
		NullCheck(L_505);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_505, 7);
		int32_t* L_506 = ((int32_t*)(int32_t*)SZArrayLdElema(L_505, 7, sizeof(int32_t)));
		*((int32_t*)(L_506)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_506))-(int32_t)((int32_t)100000000)));
	}

IL_13d2:
	{
		Int32U5BU5D_t15* L_507 = (__this->___savemoneyi_41);
		NullCheck(L_507);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_507, 8);
		int32_t L_508 = 8;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_507, L_508, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_13f1;
		}
	}
	{
		Int32U5BU5D_t15* L_509 = (__this->___savemoneyi_41);
		NullCheck(L_509);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_509, 8);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_509, 8, sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_13f1:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_13fd:
	{
		int32_t L_510 = (__this->___money2_33);
		if ((((int32_t)L_510) <= ((int32_t)0)))
		{
			goto IL_150d;
		}
	}
	{
		Int32U5BU5D_t15* L_511 = (__this->___savemoneyi_41);
		NullCheck(L_511);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_511, 8);
		int32_t L_512 = 8;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_511, L_512, sizeof(int32_t))))
		{
			goto IL_150d;
		}
	}
	{
		int32_t L_513 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_513-(int32_t)1));
		int32_t L_514 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_514+(int32_t)((int32_t)100000000)));
		int32_t L_515 = (__this->___money_32);
		Int32U5BU5D_t15* L_516 = (__this->___savemoneyi_41);
		NullCheck(L_516);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_516, 7);
		int32_t L_517 = 7;
		__this->___money_32 = ((int32_t)((int32_t)L_515-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_516, L_517, sizeof(int32_t)))));
		int32_t L_518 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_519 = (__this->___mapsyuueki_42);
		NullCheck(L_519);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_519, 4);
		int32_t L_520 = 4;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_518+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_519, L_520, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_521 = (__this->___savemoneyi_41);
		NullCheck(L_521);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_521, 7);
		int32_t* L_522 = ((int32_t*)(int32_t*)SZArrayLdElema(L_521, 7, sizeof(int32_t)));
		Int32U5BU5D_t15* L_523 = (__this->___savemoneyi_41);
		NullCheck(L_523);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_523, 7);
		int32_t L_524 = 7;
		*((int32_t*)(L_522)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_522))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_523, L_524, sizeof(int32_t))))))*(double)(0.2))))))));
		Int32U5BU5D_t15* L_525 = (__this->___maplv_27);
		NullCheck(L_525);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_525, 4);
		int32_t L_526 = 4;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_525, L_526, sizeof(int32_t))))
		{
			goto IL_1499;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)32);
	}

IL_1499:
	{
		Int32U5BU5D_t15* L_527 = (__this->___maplv_27);
		NullCheck(L_527);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_527, 4);
		int32_t* L_528 = ((int32_t*)(int32_t*)SZArrayLdElema(L_527, 4, sizeof(int32_t)));
		*((int32_t*)(L_528)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_528))+(int32_t)1));
		Int32U5BU5D_t15* L_529 = (__this->___savemoneyi_41);
		NullCheck(L_529);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_529, 7);
		int32_t L_530 = 7;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_529, L_530, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_14e2;
		}
	}
	{
		Int32U5BU5D_t15* L_531 = (__this->___savemoneyi_41);
		NullCheck(L_531);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_531, 8);
		int32_t* L_532 = ((int32_t*)(int32_t*)SZArrayLdElema(L_531, 8, sizeof(int32_t)));
		*((int32_t*)(L_532)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_532))+(int32_t)1));
		Int32U5BU5D_t15* L_533 = (__this->___savemoneyi_41);
		NullCheck(L_533);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_533, 7);
		int32_t* L_534 = ((int32_t*)(int32_t*)SZArrayLdElema(L_533, 7, sizeof(int32_t)));
		*((int32_t*)(L_534)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_534))-(int32_t)((int32_t)100000000)));
	}

IL_14e2:
	{
		Int32U5BU5D_t15* L_535 = (__this->___savemoneyi_41);
		NullCheck(L_535);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_535, 8);
		int32_t L_536 = 8;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_535, L_536, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_1501;
		}
	}
	{
		Int32U5BU5D_t15* L_537 = (__this->___savemoneyi_41);
		NullCheck(L_537);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_537, 8);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_537, 8, sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_1501:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_150d:
	{
		int32_t L_538 = (__this->___money2_33);
		if (L_538)
		{
			goto IL_160f;
		}
	}
	{
		Int32U5BU5D_t15* L_539 = (__this->___savemoneyi_41);
		NullCheck(L_539);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_539, 8);
		int32_t L_540 = 8;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_539, L_540, sizeof(int32_t))))
		{
			goto IL_160f;
		}
	}
	{
		int32_t L_541 = (__this->___money_32);
		Int32U5BU5D_t15* L_542 = (__this->___savemoneyi_41);
		NullCheck(L_542);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_542, 7);
		int32_t L_543 = 7;
		if ((((int32_t)L_541) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_542, L_543, sizeof(int32_t))))))
		{
			goto IL_160f;
		}
	}
	{
		int32_t L_544 = (__this->___money_32);
		Int32U5BU5D_t15* L_545 = (__this->___savemoneyi_41);
		NullCheck(L_545);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_545, 7);
		int32_t L_546 = 7;
		__this->___money_32 = ((int32_t)((int32_t)L_544-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_545, L_546, sizeof(int32_t)))));
		int32_t L_547 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_548 = (__this->___mapsyuueki_42);
		NullCheck(L_548);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_548, 4);
		int32_t L_549 = 4;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_547+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_548, L_549, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_550 = (__this->___savemoneyi_41);
		NullCheck(L_550);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_550, 7);
		int32_t* L_551 = ((int32_t*)(int32_t*)SZArrayLdElema(L_550, 7, sizeof(int32_t)));
		Int32U5BU5D_t15* L_552 = (__this->___savemoneyi_41);
		NullCheck(L_552);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_552, 7);
		int32_t L_553 = 7;
		*((int32_t*)(L_551)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_551))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_552, L_553, sizeof(int32_t))))))*(double)(0.2))))))));
		Int32U5BU5D_t15* L_554 = (__this->___maplv_27);
		NullCheck(L_554);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_554, 4);
		int32_t L_555 = 4;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_554, L_555, sizeof(int32_t))))
		{
			goto IL_159b;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)32);
	}

IL_159b:
	{
		Int32U5BU5D_t15* L_556 = (__this->___maplv_27);
		NullCheck(L_556);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_556, 4);
		int32_t* L_557 = ((int32_t*)(int32_t*)SZArrayLdElema(L_556, 4, sizeof(int32_t)));
		*((int32_t*)(L_557)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_557))+(int32_t)1));
		Int32U5BU5D_t15* L_558 = (__this->___savemoneyi_41);
		NullCheck(L_558);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_558, 7);
		int32_t L_559 = 7;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_558, L_559, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_15e4;
		}
	}
	{
		Int32U5BU5D_t15* L_560 = (__this->___savemoneyi_41);
		NullCheck(L_560);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_560, 8);
		int32_t* L_561 = ((int32_t*)(int32_t*)SZArrayLdElema(L_560, 8, sizeof(int32_t)));
		*((int32_t*)(L_561)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_561))+(int32_t)1));
		Int32U5BU5D_t15* L_562 = (__this->___savemoneyi_41);
		NullCheck(L_562);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_562, 7);
		int32_t* L_563 = ((int32_t*)(int32_t*)SZArrayLdElema(L_562, 7, sizeof(int32_t)));
		*((int32_t*)(L_563)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_563))-(int32_t)((int32_t)100000000)));
	}

IL_15e4:
	{
		Int32U5BU5D_t15* L_564 = (__this->___savemoneyi_41);
		NullCheck(L_564);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_564, 8);
		int32_t L_565 = 8;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_564, L_565, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_1603;
		}
	}
	{
		Int32U5BU5D_t15* L_566 = (__this->___savemoneyi_41);
		NullCheck(L_566);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_566, 8);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_566, 8, sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_1603:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_160f:
	{
		float L_567 = (__this->___sw_9);
		float L_568 = (__this->___sh_10);
		float L_569 = (__this->___sw_9);
		float L_570 = (__this->___sh_10);
		Rect_t19  L_571 = {0};
		Rect__ctor_m35(&L_571, ((float)((float)(60.0f)*(float)L_567)), ((float)((float)(355.0f)*(float)L_568)), ((float)((float)(225.0f)*(float)L_569)), ((float)((float)(55.0f)*(float)L_570)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_572 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 6));
		NullCheck(L_572);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_572, 0);
		ArrayElementTypeCheck (L_572, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_572, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_573 = L_572;
		StringU5BU5D_t14* L_574 = (__this->___savemoneys_40);
		NullCheck(L_574);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_574, ((int32_t)10));
		int32_t L_575 = ((int32_t)10);
		NullCheck(L_573);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_573, 1);
		ArrayElementTypeCheck (L_573, (*(String_t**)(String_t**)SZArrayLdElema(L_574, L_575, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_573, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_574, L_575, sizeof(String_t*)));
		StringU5BU5D_t14* L_576 = L_573;
		StringU5BU5D_t14* L_577 = (__this->___savemoneys_40);
		NullCheck(L_577);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_577, ((int32_t)9));
		int32_t L_578 = ((int32_t)9);
		NullCheck(L_576);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_576, 2);
		ArrayElementTypeCheck (L_576, (*(String_t**)(String_t**)SZArrayLdElema(L_577, L_578, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_576, 2, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_577, L_578, sizeof(String_t*)));
		StringU5BU5D_t14* L_579 = L_576;
		NullCheck(L_579);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_579, 3);
		ArrayElementTypeCheck (L_579, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_579, 3, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_580 = L_579;
		Int32U5BU5D_t15* L_581 = (__this->___mapsyuueki_42);
		NullCheck(L_581);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_581, 5);
		String_t* L_582 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_581, 5, sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_580);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_580, 4);
		ArrayElementTypeCheck (L_580, L_582);
		*((String_t**)(String_t**)SZArrayLdElema(L_580, 4, sizeof(String_t*))) = (String_t*)L_582;
		StringU5BU5D_t14* L_583 = L_580;
		NullCheck(L_583);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_583, 5);
		ArrayElementTypeCheck (L_583, _stringLiteral257);
		*((String_t**)(String_t**)SZArrayLdElema(L_583, 5, sizeof(String_t*))) = (String_t*)_stringLiteral257;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_584 = String_Concat_m65(NULL /*static, unused*/, L_583, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_585 = GUI_Button_m75(NULL /*static, unused*/, L_571, L_584, /*hidden argument*/NULL);
		if (!L_585)
		{
			goto IL_1a0b;
		}
	}
	{
		int32_t L_586 = (__this->___money2_33);
		if ((((int32_t)L_586) <= ((int32_t)0)))
		{
			goto IL_17e6;
		}
	}
	{
		int32_t L_587 = (__this->___money2_33);
		Int32U5BU5D_t15* L_588 = (__this->___savemoneyi_41);
		NullCheck(L_588);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_588, ((int32_t)10));
		int32_t L_589 = ((int32_t)10);
		if ((((int32_t)L_587) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_588, L_589, sizeof(int32_t))))))
		{
			goto IL_17e6;
		}
	}
	{
		int32_t L_590 = (__this->___money_32);
		Int32U5BU5D_t15* L_591 = (__this->___savemoneyi_41);
		NullCheck(L_591);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_591, ((int32_t)9));
		int32_t L_592 = ((int32_t)9);
		if ((((int32_t)L_590) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_591, L_592, sizeof(int32_t))))))
		{
			goto IL_17e6;
		}
	}
	{
		int32_t L_593 = (__this->___money2_33);
		Int32U5BU5D_t15* L_594 = (__this->___savemoneyi_41);
		NullCheck(L_594);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_594, ((int32_t)10));
		int32_t L_595 = ((int32_t)10);
		__this->___money2_33 = ((int32_t)((int32_t)L_593-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_594, L_595, sizeof(int32_t)))));
		int32_t L_596 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_596-(int32_t)1));
		int32_t L_597 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_597+(int32_t)((int32_t)100000000)));
		int32_t L_598 = (__this->___money_32);
		Int32U5BU5D_t15* L_599 = (__this->___savemoneyi_41);
		NullCheck(L_599);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_599, ((int32_t)9));
		int32_t L_600 = ((int32_t)9);
		__this->___money_32 = ((int32_t)((int32_t)L_598-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_599, L_600, sizeof(int32_t)))));
		int32_t L_601 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_602 = (__this->___mapsyuueki_42);
		NullCheck(L_602);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_602, 5);
		int32_t L_603 = 5;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_601+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_602, L_603, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_604 = (__this->___savemoneyi_41);
		NullCheck(L_604);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_604, ((int32_t)9));
		int32_t* L_605 = ((int32_t*)(int32_t*)SZArrayLdElema(L_604, ((int32_t)9), sizeof(int32_t)));
		Int32U5BU5D_t15* L_606 = (__this->___savemoneyi_41);
		NullCheck(L_606);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_606, ((int32_t)9));
		int32_t L_607 = ((int32_t)9);
		*((int32_t*)(L_605)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_605))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_606, L_607, sizeof(int32_t))))))*(double)(0.2))))))));
		Int32U5BU5D_t15* L_608 = (__this->___maplv_27);
		NullCheck(L_608);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_608, 5);
		int32_t L_609 = 5;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_608, L_609, sizeof(int32_t))))
		{
			goto IL_176d;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)33);
	}

IL_176d:
	{
		Int32U5BU5D_t15* L_610 = (__this->___maplv_27);
		NullCheck(L_610);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_610, 5);
		int32_t* L_611 = ((int32_t*)(int32_t*)SZArrayLdElema(L_610, 5, sizeof(int32_t)));
		*((int32_t*)(L_611)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_611))+(int32_t)1));
		Int32U5BU5D_t15* L_612 = (__this->___savemoneyi_41);
		NullCheck(L_612);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_612, ((int32_t)9));
		int32_t L_613 = ((int32_t)9);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_612, L_613, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_17b9;
		}
	}
	{
		Int32U5BU5D_t15* L_614 = (__this->___savemoneyi_41);
		NullCheck(L_614);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_614, ((int32_t)10));
		int32_t* L_615 = ((int32_t*)(int32_t*)SZArrayLdElema(L_614, ((int32_t)10), sizeof(int32_t)));
		*((int32_t*)(L_615)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_615))+(int32_t)1));
		Int32U5BU5D_t15* L_616 = (__this->___savemoneyi_41);
		NullCheck(L_616);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_616, ((int32_t)9));
		int32_t* L_617 = ((int32_t*)(int32_t*)SZArrayLdElema(L_616, ((int32_t)9), sizeof(int32_t)));
		*((int32_t*)(L_617)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_617))-(int32_t)((int32_t)100000000)));
	}

IL_17b9:
	{
		Int32U5BU5D_t15* L_618 = (__this->___savemoneyi_41);
		NullCheck(L_618);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_618, ((int32_t)10));
		int32_t L_619 = ((int32_t)10);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_618, L_619, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_17da;
		}
	}
	{
		Int32U5BU5D_t15* L_620 = (__this->___savemoneyi_41);
		NullCheck(L_620);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_620, ((int32_t)10));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_620, ((int32_t)10), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_17da:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_17e6:
	{
		int32_t L_621 = (__this->___money2_33);
		if ((((int32_t)L_621) <= ((int32_t)0)))
		{
			goto IL_18ff;
		}
	}
	{
		Int32U5BU5D_t15* L_622 = (__this->___savemoneyi_41);
		NullCheck(L_622);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_622, ((int32_t)10));
		int32_t L_623 = ((int32_t)10);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_622, L_623, sizeof(int32_t))))
		{
			goto IL_18ff;
		}
	}
	{
		int32_t L_624 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_624-(int32_t)1));
		int32_t L_625 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_625+(int32_t)((int32_t)100000000)));
		int32_t L_626 = (__this->___money_32);
		Int32U5BU5D_t15* L_627 = (__this->___savemoneyi_41);
		NullCheck(L_627);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_627, ((int32_t)9));
		int32_t L_628 = ((int32_t)9);
		__this->___money_32 = ((int32_t)((int32_t)L_626-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_627, L_628, sizeof(int32_t)))));
		int32_t L_629 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_630 = (__this->___mapsyuueki_42);
		NullCheck(L_630);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_630, 5);
		int32_t L_631 = 5;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_629+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_630, L_631, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_632 = (__this->___savemoneyi_41);
		NullCheck(L_632);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_632, ((int32_t)9));
		int32_t* L_633 = ((int32_t*)(int32_t*)SZArrayLdElema(L_632, ((int32_t)9), sizeof(int32_t)));
		Int32U5BU5D_t15* L_634 = (__this->___savemoneyi_41);
		NullCheck(L_634);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_634, ((int32_t)9));
		int32_t L_635 = ((int32_t)9);
		*((int32_t*)(L_633)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_633))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_634, L_635, sizeof(int32_t))))))*(double)(0.2))))))));
		Int32U5BU5D_t15* L_636 = (__this->___maplv_27);
		NullCheck(L_636);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_636, 5);
		int32_t L_637 = 5;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_636, L_637, sizeof(int32_t))))
		{
			goto IL_1886;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)33);
	}

IL_1886:
	{
		Int32U5BU5D_t15* L_638 = (__this->___maplv_27);
		NullCheck(L_638);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_638, 5);
		int32_t* L_639 = ((int32_t*)(int32_t*)SZArrayLdElema(L_638, 5, sizeof(int32_t)));
		*((int32_t*)(L_639)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_639))+(int32_t)1));
		Int32U5BU5D_t15* L_640 = (__this->___savemoneyi_41);
		NullCheck(L_640);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_640, ((int32_t)9));
		int32_t L_641 = ((int32_t)9);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_640, L_641, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_18d2;
		}
	}
	{
		Int32U5BU5D_t15* L_642 = (__this->___savemoneyi_41);
		NullCheck(L_642);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_642, ((int32_t)10));
		int32_t* L_643 = ((int32_t*)(int32_t*)SZArrayLdElema(L_642, ((int32_t)10), sizeof(int32_t)));
		*((int32_t*)(L_643)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_643))+(int32_t)1));
		Int32U5BU5D_t15* L_644 = (__this->___savemoneyi_41);
		NullCheck(L_644);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_644, ((int32_t)9));
		int32_t* L_645 = ((int32_t*)(int32_t*)SZArrayLdElema(L_644, ((int32_t)9), sizeof(int32_t)));
		*((int32_t*)(L_645)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_645))-(int32_t)((int32_t)100000000)));
	}

IL_18d2:
	{
		Int32U5BU5D_t15* L_646 = (__this->___savemoneyi_41);
		NullCheck(L_646);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_646, ((int32_t)10));
		int32_t L_647 = ((int32_t)10);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_646, L_647, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_18f3;
		}
	}
	{
		Int32U5BU5D_t15* L_648 = (__this->___savemoneyi_41);
		NullCheck(L_648);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_648, ((int32_t)10));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_648, ((int32_t)10), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_18f3:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_18ff:
	{
		int32_t L_649 = (__this->___money2_33);
		if (L_649)
		{
			goto IL_1a0b;
		}
	}
	{
		Int32U5BU5D_t15* L_650 = (__this->___savemoneyi_41);
		NullCheck(L_650);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_650, ((int32_t)10));
		int32_t L_651 = ((int32_t)10);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_650, L_651, sizeof(int32_t))))
		{
			goto IL_1a0b;
		}
	}
	{
		int32_t L_652 = (__this->___money_32);
		Int32U5BU5D_t15* L_653 = (__this->___savemoneyi_41);
		NullCheck(L_653);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_653, ((int32_t)9));
		int32_t L_654 = ((int32_t)9);
		if ((((int32_t)L_652) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_653, L_654, sizeof(int32_t))))))
		{
			goto IL_1a0b;
		}
	}
	{
		int32_t L_655 = (__this->___money_32);
		Int32U5BU5D_t15* L_656 = (__this->___savemoneyi_41);
		NullCheck(L_656);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_656, ((int32_t)9));
		int32_t L_657 = ((int32_t)9);
		__this->___money_32 = ((int32_t)((int32_t)L_655-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_656, L_657, sizeof(int32_t)))));
		int32_t L_658 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_659 = (__this->___mapsyuueki_42);
		NullCheck(L_659);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_659, 5);
		int32_t L_660 = 5;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_658+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_659, L_660, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_661 = (__this->___savemoneyi_41);
		NullCheck(L_661);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_661, ((int32_t)9));
		int32_t* L_662 = ((int32_t*)(int32_t*)SZArrayLdElema(L_661, ((int32_t)9), sizeof(int32_t)));
		Int32U5BU5D_t15* L_663 = (__this->___savemoneyi_41);
		NullCheck(L_663);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_663, ((int32_t)9));
		int32_t L_664 = ((int32_t)9);
		*((int32_t*)(L_662)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_662))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_663, L_664, sizeof(int32_t))))))*(double)(0.2))))))));
		Int32U5BU5D_t15* L_665 = (__this->___maplv_27);
		NullCheck(L_665);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_665, 5);
		int32_t L_666 = 5;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_665, L_666, sizeof(int32_t))))
		{
			goto IL_1992;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)33);
	}

IL_1992:
	{
		Int32U5BU5D_t15* L_667 = (__this->___maplv_27);
		NullCheck(L_667);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_667, 5);
		int32_t* L_668 = ((int32_t*)(int32_t*)SZArrayLdElema(L_667, 5, sizeof(int32_t)));
		*((int32_t*)(L_668)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_668))+(int32_t)1));
		Int32U5BU5D_t15* L_669 = (__this->___savemoneyi_41);
		NullCheck(L_669);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_669, ((int32_t)9));
		int32_t L_670 = ((int32_t)9);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_669, L_670, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_19de;
		}
	}
	{
		Int32U5BU5D_t15* L_671 = (__this->___savemoneyi_41);
		NullCheck(L_671);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_671, ((int32_t)10));
		int32_t* L_672 = ((int32_t*)(int32_t*)SZArrayLdElema(L_671, ((int32_t)10), sizeof(int32_t)));
		*((int32_t*)(L_672)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_672))+(int32_t)1));
		Int32U5BU5D_t15* L_673 = (__this->___savemoneyi_41);
		NullCheck(L_673);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_673, ((int32_t)9));
		int32_t* L_674 = ((int32_t*)(int32_t*)SZArrayLdElema(L_673, ((int32_t)9), sizeof(int32_t)));
		*((int32_t*)(L_674)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_674))-(int32_t)((int32_t)100000000)));
	}

IL_19de:
	{
		Int32U5BU5D_t15* L_675 = (__this->___savemoneyi_41);
		NullCheck(L_675);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_675, ((int32_t)10));
		int32_t L_676 = ((int32_t)10);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_675, L_676, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_19ff;
		}
	}
	{
		Int32U5BU5D_t15* L_677 = (__this->___savemoneyi_41);
		NullCheck(L_677);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_677, ((int32_t)10));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_677, ((int32_t)10), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_19ff:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_1a0b:
	{
		float L_678 = (__this->___sw_9);
		float L_679 = (__this->___sh_10);
		float L_680 = (__this->___sw_9);
		float L_681 = (__this->___sh_10);
		Rect_t19  L_682 = {0};
		Rect__ctor_m35(&L_682, ((float)((float)(60.0f)*(float)L_678)), ((float)((float)(413.0f)*(float)L_679)), ((float)((float)(225.0f)*(float)L_680)), ((float)((float)(55.0f)*(float)L_681)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_683 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 6));
		NullCheck(L_683);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_683, 0);
		ArrayElementTypeCheck (L_683, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_683, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_684 = L_683;
		StringU5BU5D_t14* L_685 = (__this->___savemoneys_40);
		NullCheck(L_685);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_685, ((int32_t)12));
		int32_t L_686 = ((int32_t)12);
		NullCheck(L_684);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_684, 1);
		ArrayElementTypeCheck (L_684, (*(String_t**)(String_t**)SZArrayLdElema(L_685, L_686, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_684, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_685, L_686, sizeof(String_t*)));
		StringU5BU5D_t14* L_687 = L_684;
		StringU5BU5D_t14* L_688 = (__this->___savemoneys_40);
		NullCheck(L_688);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_688, ((int32_t)11));
		int32_t L_689 = ((int32_t)11);
		NullCheck(L_687);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_687, 2);
		ArrayElementTypeCheck (L_687, (*(String_t**)(String_t**)SZArrayLdElema(L_688, L_689, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_687, 2, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_688, L_689, sizeof(String_t*)));
		StringU5BU5D_t14* L_690 = L_687;
		NullCheck(L_690);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_690, 3);
		ArrayElementTypeCheck (L_690, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_690, 3, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_691 = L_690;
		Int32U5BU5D_t15* L_692 = (__this->___mapsyuueki_42);
		NullCheck(L_692);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_692, 6);
		String_t* L_693 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_692, 6, sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_691);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_691, 4);
		ArrayElementTypeCheck (L_691, L_693);
		*((String_t**)(String_t**)SZArrayLdElema(L_691, 4, sizeof(String_t*))) = (String_t*)L_693;
		StringU5BU5D_t14* L_694 = L_691;
		NullCheck(L_694);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_694, 5);
		ArrayElementTypeCheck (L_694, _stringLiteral258);
		*((String_t**)(String_t**)SZArrayLdElema(L_694, 5, sizeof(String_t*))) = (String_t*)_stringLiteral258;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_695 = String_Concat_m65(NULL /*static, unused*/, L_694, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_696 = GUI_Button_m75(NULL /*static, unused*/, L_682, L_695, /*hidden argument*/NULL);
		if (!L_696)
		{
			goto IL_1e07;
		}
	}
	{
		int32_t L_697 = (__this->___money2_33);
		if ((((int32_t)L_697) <= ((int32_t)0)))
		{
			goto IL_1be2;
		}
	}
	{
		int32_t L_698 = (__this->___money2_33);
		Int32U5BU5D_t15* L_699 = (__this->___savemoneyi_41);
		NullCheck(L_699);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_699, ((int32_t)12));
		int32_t L_700 = ((int32_t)12);
		if ((((int32_t)L_698) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_699, L_700, sizeof(int32_t))))))
		{
			goto IL_1be2;
		}
	}
	{
		int32_t L_701 = (__this->___money_32);
		Int32U5BU5D_t15* L_702 = (__this->___savemoneyi_41);
		NullCheck(L_702);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_702, ((int32_t)11));
		int32_t L_703 = ((int32_t)11);
		if ((((int32_t)L_701) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_702, L_703, sizeof(int32_t))))))
		{
			goto IL_1be2;
		}
	}
	{
		int32_t L_704 = (__this->___money2_33);
		Int32U5BU5D_t15* L_705 = (__this->___savemoneyi_41);
		NullCheck(L_705);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_705, ((int32_t)12));
		int32_t L_706 = ((int32_t)12);
		__this->___money2_33 = ((int32_t)((int32_t)L_704-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_705, L_706, sizeof(int32_t)))));
		int32_t L_707 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_707-(int32_t)1));
		int32_t L_708 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_708+(int32_t)((int32_t)100000000)));
		int32_t L_709 = (__this->___money_32);
		Int32U5BU5D_t15* L_710 = (__this->___savemoneyi_41);
		NullCheck(L_710);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_710, ((int32_t)12));
		int32_t L_711 = ((int32_t)12);
		__this->___money_32 = ((int32_t)((int32_t)L_709-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_710, L_711, sizeof(int32_t)))));
		int32_t L_712 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_713 = (__this->___mapsyuueki_42);
		NullCheck(L_713);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_713, 6);
		int32_t L_714 = 6;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_712+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_713, L_714, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_715 = (__this->___savemoneyi_41);
		NullCheck(L_715);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_715, ((int32_t)11));
		int32_t* L_716 = ((int32_t*)(int32_t*)SZArrayLdElema(L_715, ((int32_t)11), sizeof(int32_t)));
		Int32U5BU5D_t15* L_717 = (__this->___savemoneyi_41);
		NullCheck(L_717);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_717, ((int32_t)11));
		int32_t L_718 = ((int32_t)11);
		*((int32_t*)(L_716)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_716))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_717, L_718, sizeof(int32_t))))))*(double)(0.2))))))));
		Int32U5BU5D_t15* L_719 = (__this->___maplv_27);
		NullCheck(L_719);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_719, 6);
		int32_t L_720 = 6;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_719, L_720, sizeof(int32_t))))
		{
			goto IL_1b69;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)34);
	}

IL_1b69:
	{
		Int32U5BU5D_t15* L_721 = (__this->___maplv_27);
		NullCheck(L_721);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_721, 6);
		int32_t* L_722 = ((int32_t*)(int32_t*)SZArrayLdElema(L_721, 6, sizeof(int32_t)));
		*((int32_t*)(L_722)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_722))+(int32_t)1));
		Int32U5BU5D_t15* L_723 = (__this->___savemoneyi_41);
		NullCheck(L_723);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_723, ((int32_t)11));
		int32_t L_724 = ((int32_t)11);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_723, L_724, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_1bb5;
		}
	}
	{
		Int32U5BU5D_t15* L_725 = (__this->___savemoneyi_41);
		NullCheck(L_725);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_725, ((int32_t)12));
		int32_t* L_726 = ((int32_t*)(int32_t*)SZArrayLdElema(L_725, ((int32_t)12), sizeof(int32_t)));
		*((int32_t*)(L_726)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_726))+(int32_t)1));
		Int32U5BU5D_t15* L_727 = (__this->___savemoneyi_41);
		NullCheck(L_727);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_727, ((int32_t)11));
		int32_t* L_728 = ((int32_t*)(int32_t*)SZArrayLdElema(L_727, ((int32_t)11), sizeof(int32_t)));
		*((int32_t*)(L_728)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_728))-(int32_t)((int32_t)100000000)));
	}

IL_1bb5:
	{
		Int32U5BU5D_t15* L_729 = (__this->___savemoneyi_41);
		NullCheck(L_729);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_729, ((int32_t)12));
		int32_t L_730 = ((int32_t)12);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_729, L_730, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_1bd6;
		}
	}
	{
		Int32U5BU5D_t15* L_731 = (__this->___savemoneyi_41);
		NullCheck(L_731);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_731, ((int32_t)12));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_731, ((int32_t)12), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_1bd6:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_1be2:
	{
		int32_t L_732 = (__this->___money2_33);
		if ((((int32_t)L_732) <= ((int32_t)0)))
		{
			goto IL_1cfb;
		}
	}
	{
		Int32U5BU5D_t15* L_733 = (__this->___savemoneyi_41);
		NullCheck(L_733);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_733, ((int32_t)12));
		int32_t L_734 = ((int32_t)12);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_733, L_734, sizeof(int32_t))))
		{
			goto IL_1cfb;
		}
	}
	{
		int32_t L_735 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_735-(int32_t)1));
		int32_t L_736 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_736+(int32_t)((int32_t)100000000)));
		int32_t L_737 = (__this->___money_32);
		Int32U5BU5D_t15* L_738 = (__this->___savemoneyi_41);
		NullCheck(L_738);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_738, ((int32_t)11));
		int32_t L_739 = ((int32_t)11);
		__this->___money_32 = ((int32_t)((int32_t)L_737-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_738, L_739, sizeof(int32_t)))));
		int32_t L_740 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_741 = (__this->___mapsyuueki_42);
		NullCheck(L_741);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_741, 6);
		int32_t L_742 = 6;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_740+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_741, L_742, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_743 = (__this->___savemoneyi_41);
		NullCheck(L_743);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_743, ((int32_t)11));
		int32_t* L_744 = ((int32_t*)(int32_t*)SZArrayLdElema(L_743, ((int32_t)11), sizeof(int32_t)));
		Int32U5BU5D_t15* L_745 = (__this->___savemoneyi_41);
		NullCheck(L_745);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_745, ((int32_t)11));
		int32_t L_746 = ((int32_t)11);
		*((int32_t*)(L_744)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_744))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_745, L_746, sizeof(int32_t))))))*(double)(0.2))))))));
		Int32U5BU5D_t15* L_747 = (__this->___maplv_27);
		NullCheck(L_747);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_747, 6);
		int32_t L_748 = 6;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_747, L_748, sizeof(int32_t))))
		{
			goto IL_1c82;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)34);
	}

IL_1c82:
	{
		Int32U5BU5D_t15* L_749 = (__this->___maplv_27);
		NullCheck(L_749);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_749, 6);
		int32_t* L_750 = ((int32_t*)(int32_t*)SZArrayLdElema(L_749, 6, sizeof(int32_t)));
		*((int32_t*)(L_750)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_750))+(int32_t)1));
		Int32U5BU5D_t15* L_751 = (__this->___savemoneyi_41);
		NullCheck(L_751);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_751, ((int32_t)11));
		int32_t L_752 = ((int32_t)11);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_751, L_752, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_1cce;
		}
	}
	{
		Int32U5BU5D_t15* L_753 = (__this->___savemoneyi_41);
		NullCheck(L_753);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_753, ((int32_t)12));
		int32_t* L_754 = ((int32_t*)(int32_t*)SZArrayLdElema(L_753, ((int32_t)12), sizeof(int32_t)));
		*((int32_t*)(L_754)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_754))+(int32_t)1));
		Int32U5BU5D_t15* L_755 = (__this->___savemoneyi_41);
		NullCheck(L_755);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_755, ((int32_t)11));
		int32_t* L_756 = ((int32_t*)(int32_t*)SZArrayLdElema(L_755, ((int32_t)11), sizeof(int32_t)));
		*((int32_t*)(L_756)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_756))-(int32_t)((int32_t)100000000)));
	}

IL_1cce:
	{
		Int32U5BU5D_t15* L_757 = (__this->___savemoneyi_41);
		NullCheck(L_757);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_757, ((int32_t)12));
		int32_t L_758 = ((int32_t)12);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_757, L_758, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_1cef;
		}
	}
	{
		Int32U5BU5D_t15* L_759 = (__this->___savemoneyi_41);
		NullCheck(L_759);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_759, ((int32_t)12));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_759, ((int32_t)12), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_1cef:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_1cfb:
	{
		int32_t L_760 = (__this->___money2_33);
		if (L_760)
		{
			goto IL_1e07;
		}
	}
	{
		Int32U5BU5D_t15* L_761 = (__this->___savemoneyi_41);
		NullCheck(L_761);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_761, ((int32_t)12));
		int32_t L_762 = ((int32_t)12);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_761, L_762, sizeof(int32_t))))
		{
			goto IL_1e07;
		}
	}
	{
		int32_t L_763 = (__this->___money_32);
		Int32U5BU5D_t15* L_764 = (__this->___savemoneyi_41);
		NullCheck(L_764);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_764, ((int32_t)11));
		int32_t L_765 = ((int32_t)11);
		if ((((int32_t)L_763) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_764, L_765, sizeof(int32_t))))))
		{
			goto IL_1e07;
		}
	}
	{
		int32_t L_766 = (__this->___money_32);
		Int32U5BU5D_t15* L_767 = (__this->___savemoneyi_41);
		NullCheck(L_767);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_767, ((int32_t)11));
		int32_t L_768 = ((int32_t)11);
		__this->___money_32 = ((int32_t)((int32_t)L_766-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_767, L_768, sizeof(int32_t)))));
		int32_t L_769 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_770 = (__this->___mapsyuueki_42);
		NullCheck(L_770);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_770, 6);
		int32_t L_771 = 6;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_769+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_770, L_771, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_772 = (__this->___savemoneyi_41);
		NullCheck(L_772);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_772, ((int32_t)11));
		int32_t* L_773 = ((int32_t*)(int32_t*)SZArrayLdElema(L_772, ((int32_t)11), sizeof(int32_t)));
		Int32U5BU5D_t15* L_774 = (__this->___savemoneyi_41);
		NullCheck(L_774);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_774, ((int32_t)11));
		int32_t L_775 = ((int32_t)11);
		*((int32_t*)(L_773)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_773))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_774, L_775, sizeof(int32_t))))))*(double)(0.2))))))));
		Int32U5BU5D_t15* L_776 = (__this->___maplv_27);
		NullCheck(L_776);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_776, 6);
		int32_t L_777 = 6;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_776, L_777, sizeof(int32_t))))
		{
			goto IL_1d8e;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)34);
	}

IL_1d8e:
	{
		Int32U5BU5D_t15* L_778 = (__this->___maplv_27);
		NullCheck(L_778);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_778, 6);
		int32_t* L_779 = ((int32_t*)(int32_t*)SZArrayLdElema(L_778, 6, sizeof(int32_t)));
		*((int32_t*)(L_779)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_779))+(int32_t)1));
		Int32U5BU5D_t15* L_780 = (__this->___savemoneyi_41);
		NullCheck(L_780);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_780, ((int32_t)11));
		int32_t L_781 = ((int32_t)11);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_780, L_781, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_1dda;
		}
	}
	{
		Int32U5BU5D_t15* L_782 = (__this->___savemoneyi_41);
		NullCheck(L_782);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_782, ((int32_t)12));
		int32_t* L_783 = ((int32_t*)(int32_t*)SZArrayLdElema(L_782, ((int32_t)12), sizeof(int32_t)));
		*((int32_t*)(L_783)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_783))+(int32_t)1));
		Int32U5BU5D_t15* L_784 = (__this->___savemoneyi_41);
		NullCheck(L_784);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_784, ((int32_t)11));
		int32_t* L_785 = ((int32_t*)(int32_t*)SZArrayLdElema(L_784, ((int32_t)11), sizeof(int32_t)));
		*((int32_t*)(L_785)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_785))-(int32_t)((int32_t)100000000)));
	}

IL_1dda:
	{
		Int32U5BU5D_t15* L_786 = (__this->___savemoneyi_41);
		NullCheck(L_786);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_786, ((int32_t)12));
		int32_t L_787 = ((int32_t)12);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_786, L_787, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_1dfb;
		}
	}
	{
		Int32U5BU5D_t15* L_788 = (__this->___savemoneyi_41);
		NullCheck(L_788);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_788, ((int32_t)12));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_788, ((int32_t)12), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_1dfb:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_1e07:
	{
		V_1 = 0;
		goto IL_1e5e;
	}

IL_1e0e:
	{
		float L_789 = (__this->___sw_9);
		int32_t L_790 = V_1;
		float L_791 = (__this->___sh_10);
		float L_792 = (__this->___sw_9);
		float L_793 = (__this->___sh_10);
		Rect_t19  L_794 = {0};
		Rect__ctor_m35(&L_794, ((float)((float)(305.0f)*(float)L_789)), ((float)((float)(((float)((float)((int32_t)((int32_t)((int32_t)65)+(int32_t)((int32_t)((int32_t)L_790*(int32_t)((int32_t)58))))))))*(float)L_791)), ((float)((float)(55.0f)*(float)L_792)), ((float)((float)(55.0f)*(float)L_793)), /*hidden argument*/NULL);
		TextureU5BU5D_t11* L_795 = (__this->___buttonTexture_15);
		int32_t L_796 = V_1;
		NullCheck(L_795);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_795, ((int32_t)((int32_t)L_796+(int32_t)7)));
		int32_t L_797 = ((int32_t)((int32_t)L_796+(int32_t)7));
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_798 = GUI_Button_m79(NULL /*static, unused*/, L_794, (*(Texture_t28 **)(Texture_t28 **)SZArrayLdElema(L_795, L_797, sizeof(Texture_t28 *))), /*hidden argument*/NULL);
		if (!L_798)
		{
			goto IL_1e5a;
		}
	}

IL_1e5a:
	{
		int32_t L_799 = V_1;
		V_1 = ((int32_t)((int32_t)L_799+(int32_t)1));
	}

IL_1e5e:
	{
		int32_t L_800 = V_1;
		if ((((int32_t)L_800) < ((int32_t)7)))
		{
			goto IL_1e0e;
		}
	}
	{
		float L_801 = (__this->___sw_9);
		float L_802 = (__this->___sh_10);
		float L_803 = (__this->___sw_9);
		float L_804 = (__this->___sh_10);
		Rect_t19  L_805 = {0};
		Rect__ctor_m35(&L_805, ((float)((float)(360.0f)*(float)L_801)), ((float)((float)(65.0f)*(float)L_802)), ((float)((float)(225.0f)*(float)L_803)), ((float)((float)(55.0f)*(float)L_804)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_806 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 6));
		NullCheck(L_806);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_806, 0);
		ArrayElementTypeCheck (L_806, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_806, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_807 = L_806;
		StringU5BU5D_t14* L_808 = (__this->___savemoneys_40);
		NullCheck(L_808);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_808, ((int32_t)14));
		int32_t L_809 = ((int32_t)14);
		NullCheck(L_807);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_807, 1);
		ArrayElementTypeCheck (L_807, (*(String_t**)(String_t**)SZArrayLdElema(L_808, L_809, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_807, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_808, L_809, sizeof(String_t*)));
		StringU5BU5D_t14* L_810 = L_807;
		StringU5BU5D_t14* L_811 = (__this->___savemoneys_40);
		NullCheck(L_811);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_811, ((int32_t)13));
		int32_t L_812 = ((int32_t)13);
		NullCheck(L_810);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_810, 2);
		ArrayElementTypeCheck (L_810, (*(String_t**)(String_t**)SZArrayLdElema(L_811, L_812, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_810, 2, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_811, L_812, sizeof(String_t*)));
		StringU5BU5D_t14* L_813 = L_810;
		NullCheck(L_813);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_813, 3);
		ArrayElementTypeCheck (L_813, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_813, 3, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_814 = L_813;
		Int32U5BU5D_t15* L_815 = (__this->___mapsyuueki_42);
		NullCheck(L_815);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_815, 7);
		String_t* L_816 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_815, 7, sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_814);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_814, 4);
		ArrayElementTypeCheck (L_814, L_816);
		*((String_t**)(String_t**)SZArrayLdElema(L_814, 4, sizeof(String_t*))) = (String_t*)L_816;
		StringU5BU5D_t14* L_817 = L_814;
		NullCheck(L_817);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_817, 5);
		ArrayElementTypeCheck (L_817, _stringLiteral259);
		*((String_t**)(String_t**)SZArrayLdElema(L_817, 5, sizeof(String_t*))) = (String_t*)_stringLiteral259;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_818 = String_Concat_m65(NULL /*static, unused*/, L_817, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_819 = GUI_Button_m75(NULL /*static, unused*/, L_805, L_818, /*hidden argument*/NULL);
		if (!L_819)
		{
			goto IL_2261;
		}
	}
	{
		int32_t L_820 = (__this->___money2_33);
		if ((((int32_t)L_820) <= ((int32_t)0)))
		{
			goto IL_203c;
		}
	}
	{
		int32_t L_821 = (__this->___money2_33);
		Int32U5BU5D_t15* L_822 = (__this->___savemoneyi_41);
		NullCheck(L_822);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_822, ((int32_t)14));
		int32_t L_823 = ((int32_t)14);
		if ((((int32_t)L_821) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_822, L_823, sizeof(int32_t))))))
		{
			goto IL_203c;
		}
	}
	{
		int32_t L_824 = (__this->___money_32);
		Int32U5BU5D_t15* L_825 = (__this->___savemoneyi_41);
		NullCheck(L_825);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_825, ((int32_t)13));
		int32_t L_826 = ((int32_t)13);
		if ((((int32_t)L_824) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_825, L_826, sizeof(int32_t))))))
		{
			goto IL_203c;
		}
	}
	{
		int32_t L_827 = (__this->___money2_33);
		Int32U5BU5D_t15* L_828 = (__this->___savemoneyi_41);
		NullCheck(L_828);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_828, ((int32_t)14));
		int32_t L_829 = ((int32_t)14);
		__this->___money2_33 = ((int32_t)((int32_t)L_827-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_828, L_829, sizeof(int32_t)))));
		int32_t L_830 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_830-(int32_t)1));
		int32_t L_831 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_831+(int32_t)((int32_t)100000000)));
		int32_t L_832 = (__this->___money_32);
		Int32U5BU5D_t15* L_833 = (__this->___savemoneyi_41);
		NullCheck(L_833);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_833, ((int32_t)13));
		int32_t L_834 = ((int32_t)13);
		__this->___money_32 = ((int32_t)((int32_t)L_832-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_833, L_834, sizeof(int32_t)))));
		int32_t L_835 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_836 = (__this->___mapsyuueki_42);
		NullCheck(L_836);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_836, 7);
		int32_t L_837 = 7;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_835+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_836, L_837, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_838 = (__this->___savemoneyi_41);
		NullCheck(L_838);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_838, ((int32_t)13));
		int32_t* L_839 = ((int32_t*)(int32_t*)SZArrayLdElema(L_838, ((int32_t)13), sizeof(int32_t)));
		Int32U5BU5D_t15* L_840 = (__this->___savemoneyi_41);
		NullCheck(L_840);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_840, ((int32_t)13));
		int32_t L_841 = ((int32_t)13);
		*((int32_t*)(L_839)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_839))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_840, L_841, sizeof(int32_t))))))*(double)(0.3))))))));
		Int32U5BU5D_t15* L_842 = (__this->___maplv_27);
		NullCheck(L_842);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_842, 7);
		int32_t L_843 = 7;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_842, L_843, sizeof(int32_t))))
		{
			goto IL_1fc3;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)35);
	}

IL_1fc3:
	{
		Int32U5BU5D_t15* L_844 = (__this->___maplv_27);
		NullCheck(L_844);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_844, 7);
		int32_t* L_845 = ((int32_t*)(int32_t*)SZArrayLdElema(L_844, 7, sizeof(int32_t)));
		*((int32_t*)(L_845)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_845))+(int32_t)1));
		Int32U5BU5D_t15* L_846 = (__this->___savemoneyi_41);
		NullCheck(L_846);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_846, ((int32_t)13));
		int32_t L_847 = ((int32_t)13);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_846, L_847, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_200f;
		}
	}
	{
		Int32U5BU5D_t15* L_848 = (__this->___savemoneyi_41);
		NullCheck(L_848);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_848, ((int32_t)14));
		int32_t* L_849 = ((int32_t*)(int32_t*)SZArrayLdElema(L_848, ((int32_t)14), sizeof(int32_t)));
		*((int32_t*)(L_849)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_849))+(int32_t)1));
		Int32U5BU5D_t15* L_850 = (__this->___savemoneyi_41);
		NullCheck(L_850);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_850, ((int32_t)13));
		int32_t* L_851 = ((int32_t*)(int32_t*)SZArrayLdElema(L_850, ((int32_t)13), sizeof(int32_t)));
		*((int32_t*)(L_851)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_851))-(int32_t)((int32_t)100000000)));
	}

IL_200f:
	{
		Int32U5BU5D_t15* L_852 = (__this->___savemoneyi_41);
		NullCheck(L_852);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_852, ((int32_t)14));
		int32_t L_853 = ((int32_t)14);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_852, L_853, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2030;
		}
	}
	{
		Int32U5BU5D_t15* L_854 = (__this->___savemoneyi_41);
		NullCheck(L_854);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_854, ((int32_t)14));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_854, ((int32_t)14), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_2030:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_203c:
	{
		int32_t L_855 = (__this->___money2_33);
		if ((((int32_t)L_855) <= ((int32_t)0)))
		{
			goto IL_2155;
		}
	}
	{
		Int32U5BU5D_t15* L_856 = (__this->___savemoneyi_41);
		NullCheck(L_856);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_856, ((int32_t)14));
		int32_t L_857 = ((int32_t)14);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_856, L_857, sizeof(int32_t))))
		{
			goto IL_2155;
		}
	}
	{
		int32_t L_858 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_858-(int32_t)1));
		int32_t L_859 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_859+(int32_t)((int32_t)100000000)));
		int32_t L_860 = (__this->___money_32);
		Int32U5BU5D_t15* L_861 = (__this->___savemoneyi_41);
		NullCheck(L_861);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_861, ((int32_t)13));
		int32_t L_862 = ((int32_t)13);
		__this->___money_32 = ((int32_t)((int32_t)L_860-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_861, L_862, sizeof(int32_t)))));
		int32_t L_863 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_864 = (__this->___mapsyuueki_42);
		NullCheck(L_864);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_864, 7);
		int32_t L_865 = 7;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_863+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_864, L_865, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_866 = (__this->___savemoneyi_41);
		NullCheck(L_866);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_866, ((int32_t)13));
		int32_t* L_867 = ((int32_t*)(int32_t*)SZArrayLdElema(L_866, ((int32_t)13), sizeof(int32_t)));
		Int32U5BU5D_t15* L_868 = (__this->___savemoneyi_41);
		NullCheck(L_868);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_868, ((int32_t)13));
		int32_t L_869 = ((int32_t)13);
		*((int32_t*)(L_867)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_867))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_868, L_869, sizeof(int32_t))))))*(double)(0.3))))))));
		Int32U5BU5D_t15* L_870 = (__this->___maplv_27);
		NullCheck(L_870);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_870, 7);
		int32_t L_871 = 7;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_870, L_871, sizeof(int32_t))))
		{
			goto IL_20dc;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)35);
	}

IL_20dc:
	{
		Int32U5BU5D_t15* L_872 = (__this->___maplv_27);
		NullCheck(L_872);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_872, 7);
		int32_t* L_873 = ((int32_t*)(int32_t*)SZArrayLdElema(L_872, 7, sizeof(int32_t)));
		*((int32_t*)(L_873)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_873))+(int32_t)1));
		Int32U5BU5D_t15* L_874 = (__this->___savemoneyi_41);
		NullCheck(L_874);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_874, ((int32_t)13));
		int32_t L_875 = ((int32_t)13);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_874, L_875, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2128;
		}
	}
	{
		Int32U5BU5D_t15* L_876 = (__this->___savemoneyi_41);
		NullCheck(L_876);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_876, ((int32_t)14));
		int32_t* L_877 = ((int32_t*)(int32_t*)SZArrayLdElema(L_876, ((int32_t)14), sizeof(int32_t)));
		*((int32_t*)(L_877)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_877))+(int32_t)1));
		Int32U5BU5D_t15* L_878 = (__this->___savemoneyi_41);
		NullCheck(L_878);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_878, ((int32_t)13));
		int32_t* L_879 = ((int32_t*)(int32_t*)SZArrayLdElema(L_878, ((int32_t)13), sizeof(int32_t)));
		*((int32_t*)(L_879)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_879))-(int32_t)((int32_t)100000000)));
	}

IL_2128:
	{
		Int32U5BU5D_t15* L_880 = (__this->___savemoneyi_41);
		NullCheck(L_880);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_880, ((int32_t)14));
		int32_t L_881 = ((int32_t)14);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_880, L_881, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2149;
		}
	}
	{
		Int32U5BU5D_t15* L_882 = (__this->___savemoneyi_41);
		NullCheck(L_882);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_882, ((int32_t)14));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_882, ((int32_t)14), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_2149:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_2155:
	{
		int32_t L_883 = (__this->___money2_33);
		if (L_883)
		{
			goto IL_2261;
		}
	}
	{
		Int32U5BU5D_t15* L_884 = (__this->___savemoneyi_41);
		NullCheck(L_884);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_884, ((int32_t)14));
		int32_t L_885 = ((int32_t)14);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_884, L_885, sizeof(int32_t))))
		{
			goto IL_2261;
		}
	}
	{
		int32_t L_886 = (__this->___money_32);
		Int32U5BU5D_t15* L_887 = (__this->___savemoneyi_41);
		NullCheck(L_887);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_887, ((int32_t)13));
		int32_t L_888 = ((int32_t)13);
		if ((((int32_t)L_886) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_887, L_888, sizeof(int32_t))))))
		{
			goto IL_2261;
		}
	}
	{
		int32_t L_889 = (__this->___money_32);
		Int32U5BU5D_t15* L_890 = (__this->___savemoneyi_41);
		NullCheck(L_890);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_890, ((int32_t)13));
		int32_t L_891 = ((int32_t)13);
		__this->___money_32 = ((int32_t)((int32_t)L_889-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_890, L_891, sizeof(int32_t)))));
		int32_t L_892 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_893 = (__this->___mapsyuueki_42);
		NullCheck(L_893);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_893, 7);
		int32_t L_894 = 7;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_892+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_893, L_894, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_895 = (__this->___savemoneyi_41);
		NullCheck(L_895);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_895, ((int32_t)13));
		int32_t* L_896 = ((int32_t*)(int32_t*)SZArrayLdElema(L_895, ((int32_t)13), sizeof(int32_t)));
		Int32U5BU5D_t15* L_897 = (__this->___savemoneyi_41);
		NullCheck(L_897);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_897, ((int32_t)13));
		int32_t L_898 = ((int32_t)13);
		*((int32_t*)(L_896)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_896))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_897, L_898, sizeof(int32_t))))))*(double)(0.3))))))));
		Int32U5BU5D_t15* L_899 = (__this->___maplv_27);
		NullCheck(L_899);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_899, 7);
		int32_t L_900 = 7;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_899, L_900, sizeof(int32_t))))
		{
			goto IL_21e8;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)35);
	}

IL_21e8:
	{
		Int32U5BU5D_t15* L_901 = (__this->___maplv_27);
		NullCheck(L_901);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_901, 7);
		int32_t* L_902 = ((int32_t*)(int32_t*)SZArrayLdElema(L_901, 7, sizeof(int32_t)));
		*((int32_t*)(L_902)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_902))+(int32_t)1));
		Int32U5BU5D_t15* L_903 = (__this->___savemoneyi_41);
		NullCheck(L_903);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_903, ((int32_t)13));
		int32_t L_904 = ((int32_t)13);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_903, L_904, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2234;
		}
	}
	{
		Int32U5BU5D_t15* L_905 = (__this->___savemoneyi_41);
		NullCheck(L_905);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_905, ((int32_t)14));
		int32_t* L_906 = ((int32_t*)(int32_t*)SZArrayLdElema(L_905, ((int32_t)14), sizeof(int32_t)));
		*((int32_t*)(L_906)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_906))+(int32_t)1));
		Int32U5BU5D_t15* L_907 = (__this->___savemoneyi_41);
		NullCheck(L_907);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_907, ((int32_t)13));
		int32_t* L_908 = ((int32_t*)(int32_t*)SZArrayLdElema(L_907, ((int32_t)13), sizeof(int32_t)));
		*((int32_t*)(L_908)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_908))-(int32_t)((int32_t)100000000)));
	}

IL_2234:
	{
		Int32U5BU5D_t15* L_909 = (__this->___savemoneyi_41);
		NullCheck(L_909);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_909, ((int32_t)14));
		int32_t L_910 = ((int32_t)14);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_909, L_910, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2255;
		}
	}
	{
		Int32U5BU5D_t15* L_911 = (__this->___savemoneyi_41);
		NullCheck(L_911);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_911, ((int32_t)14));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_911, ((int32_t)14), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_2255:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_2261:
	{
		float L_912 = (__this->___sw_9);
		float L_913 = (__this->___sh_10);
		float L_914 = (__this->___sw_9);
		float L_915 = (__this->___sh_10);
		Rect_t19  L_916 = {0};
		Rect__ctor_m35(&L_916, ((float)((float)(360.0f)*(float)L_912)), ((float)((float)(123.0f)*(float)L_913)), ((float)((float)(225.0f)*(float)L_914)), ((float)((float)(55.0f)*(float)L_915)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_917 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 6));
		NullCheck(L_917);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_917, 0);
		ArrayElementTypeCheck (L_917, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_917, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_918 = L_917;
		StringU5BU5D_t14* L_919 = (__this->___savemoneys_40);
		NullCheck(L_919);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_919, ((int32_t)16));
		int32_t L_920 = ((int32_t)16);
		NullCheck(L_918);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_918, 1);
		ArrayElementTypeCheck (L_918, (*(String_t**)(String_t**)SZArrayLdElema(L_919, L_920, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_918, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_919, L_920, sizeof(String_t*)));
		StringU5BU5D_t14* L_921 = L_918;
		StringU5BU5D_t14* L_922 = (__this->___savemoneys_40);
		NullCheck(L_922);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_922, ((int32_t)15));
		int32_t L_923 = ((int32_t)15);
		NullCheck(L_921);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_921, 2);
		ArrayElementTypeCheck (L_921, (*(String_t**)(String_t**)SZArrayLdElema(L_922, L_923, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_921, 2, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_922, L_923, sizeof(String_t*)));
		StringU5BU5D_t14* L_924 = L_921;
		NullCheck(L_924);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_924, 3);
		ArrayElementTypeCheck (L_924, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_924, 3, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_925 = L_924;
		Int32U5BU5D_t15* L_926 = (__this->___mapsyuueki_42);
		NullCheck(L_926);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_926, 8);
		String_t* L_927 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_926, 8, sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_925);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_925, 4);
		ArrayElementTypeCheck (L_925, L_927);
		*((String_t**)(String_t**)SZArrayLdElema(L_925, 4, sizeof(String_t*))) = (String_t*)L_927;
		StringU5BU5D_t14* L_928 = L_925;
		NullCheck(L_928);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_928, 5);
		ArrayElementTypeCheck (L_928, _stringLiteral260);
		*((String_t**)(String_t**)SZArrayLdElema(L_928, 5, sizeof(String_t*))) = (String_t*)_stringLiteral260;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_929 = String_Concat_m65(NULL /*static, unused*/, L_928, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_930 = GUI_Button_m75(NULL /*static, unused*/, L_916, L_929, /*hidden argument*/NULL);
		if (!L_930)
		{
			goto IL_265c;
		}
	}
	{
		int32_t L_931 = (__this->___money2_33);
		if ((((int32_t)L_931) <= ((int32_t)0)))
		{
			goto IL_2438;
		}
	}
	{
		int32_t L_932 = (__this->___money2_33);
		Int32U5BU5D_t15* L_933 = (__this->___savemoneyi_41);
		NullCheck(L_933);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_933, ((int32_t)16));
		int32_t L_934 = ((int32_t)16);
		if ((((int32_t)L_932) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_933, L_934, sizeof(int32_t))))))
		{
			goto IL_2438;
		}
	}
	{
		int32_t L_935 = (__this->___money_32);
		Int32U5BU5D_t15* L_936 = (__this->___savemoneyi_41);
		NullCheck(L_936);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_936, ((int32_t)15));
		int32_t L_937 = ((int32_t)15);
		if ((((int32_t)L_935) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_936, L_937, sizeof(int32_t))))))
		{
			goto IL_2438;
		}
	}
	{
		int32_t L_938 = (__this->___money2_33);
		Int32U5BU5D_t15* L_939 = (__this->___savemoneyi_41);
		NullCheck(L_939);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_939, ((int32_t)16));
		int32_t L_940 = ((int32_t)16);
		__this->___money2_33 = ((int32_t)((int32_t)L_938-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_939, L_940, sizeof(int32_t)))));
		int32_t L_941 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_941-(int32_t)1));
		int32_t L_942 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_942+(int32_t)((int32_t)100000000)));
		int32_t L_943 = (__this->___money_32);
		Int32U5BU5D_t15* L_944 = (__this->___savemoneyi_41);
		NullCheck(L_944);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_944, ((int32_t)15));
		int32_t L_945 = ((int32_t)15);
		__this->___money_32 = ((int32_t)((int32_t)L_943-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_944, L_945, sizeof(int32_t)))));
		int32_t L_946 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_947 = (__this->___mapsyuueki_42);
		NullCheck(L_947);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_947, 8);
		int32_t L_948 = 8;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_946+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_947, L_948, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_949 = (__this->___savemoneyi_41);
		NullCheck(L_949);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_949, ((int32_t)15));
		int32_t* L_950 = ((int32_t*)(int32_t*)SZArrayLdElema(L_949, ((int32_t)15), sizeof(int32_t)));
		Int32U5BU5D_t15* L_951 = (__this->___savemoneyi_41);
		NullCheck(L_951);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_951, ((int32_t)15));
		int32_t L_952 = ((int32_t)15);
		*((int32_t*)(L_950)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_950))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_951, L_952, sizeof(int32_t))))))*(double)(0.3))))))));
		Int32U5BU5D_t15* L_953 = (__this->___maplv_27);
		NullCheck(L_953);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_953, 8);
		int32_t L_954 = 8;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_953, L_954, sizeof(int32_t))))
		{
			goto IL_23bf;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)36);
	}

IL_23bf:
	{
		Int32U5BU5D_t15* L_955 = (__this->___maplv_27);
		NullCheck(L_955);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_955, 8);
		int32_t* L_956 = ((int32_t*)(int32_t*)SZArrayLdElema(L_955, 8, sizeof(int32_t)));
		*((int32_t*)(L_956)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_956))+(int32_t)1));
		Int32U5BU5D_t15* L_957 = (__this->___savemoneyi_41);
		NullCheck(L_957);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_957, ((int32_t)15));
		int32_t L_958 = ((int32_t)15);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_957, L_958, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_240b;
		}
	}
	{
		Int32U5BU5D_t15* L_959 = (__this->___savemoneyi_41);
		NullCheck(L_959);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_959, ((int32_t)16));
		int32_t* L_960 = ((int32_t*)(int32_t*)SZArrayLdElema(L_959, ((int32_t)16), sizeof(int32_t)));
		*((int32_t*)(L_960)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_960))+(int32_t)1));
		Int32U5BU5D_t15* L_961 = (__this->___savemoneyi_41);
		NullCheck(L_961);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_961, ((int32_t)15));
		int32_t* L_962 = ((int32_t*)(int32_t*)SZArrayLdElema(L_961, ((int32_t)15), sizeof(int32_t)));
		*((int32_t*)(L_962)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_962))-(int32_t)((int32_t)100000000)));
	}

IL_240b:
	{
		Int32U5BU5D_t15* L_963 = (__this->___savemoneyi_41);
		NullCheck(L_963);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_963, ((int32_t)16));
		int32_t L_964 = ((int32_t)16);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_963, L_964, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_242c;
		}
	}
	{
		Int32U5BU5D_t15* L_965 = (__this->___savemoneyi_41);
		NullCheck(L_965);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_965, ((int32_t)16));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_965, ((int32_t)16), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_242c:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_2438:
	{
		int32_t L_966 = (__this->___money2_33);
		if ((((int32_t)L_966) <= ((int32_t)0)))
		{
			goto IL_2550;
		}
	}
	{
		Int32U5BU5D_t15* L_967 = (__this->___savemoneyi_41);
		NullCheck(L_967);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_967, 4);
		int32_t L_968 = 4;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_967, L_968, sizeof(int32_t))))
		{
			goto IL_2550;
		}
	}
	{
		int32_t L_969 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_969-(int32_t)1));
		int32_t L_970 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_970+(int32_t)((int32_t)100000000)));
		int32_t L_971 = (__this->___money_32);
		Int32U5BU5D_t15* L_972 = (__this->___savemoneyi_41);
		NullCheck(L_972);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_972, ((int32_t)15));
		int32_t L_973 = ((int32_t)15);
		__this->___money_32 = ((int32_t)((int32_t)L_971-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_972, L_973, sizeof(int32_t)))));
		int32_t L_974 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_975 = (__this->___mapsyuueki_42);
		NullCheck(L_975);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_975, 8);
		int32_t L_976 = 8;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_974+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_975, L_976, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_977 = (__this->___savemoneyi_41);
		NullCheck(L_977);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_977, ((int32_t)15));
		int32_t* L_978 = ((int32_t*)(int32_t*)SZArrayLdElema(L_977, ((int32_t)15), sizeof(int32_t)));
		Int32U5BU5D_t15* L_979 = (__this->___savemoneyi_41);
		NullCheck(L_979);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_979, ((int32_t)15));
		int32_t L_980 = ((int32_t)15);
		*((int32_t*)(L_978)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_978))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_979, L_980, sizeof(int32_t))))))*(double)(0.3))))))));
		Int32U5BU5D_t15* L_981 = (__this->___maplv_27);
		NullCheck(L_981);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_981, 8);
		int32_t L_982 = 8;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_981, L_982, sizeof(int32_t))))
		{
			goto IL_24d7;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)36);
	}

IL_24d7:
	{
		Int32U5BU5D_t15* L_983 = (__this->___maplv_27);
		NullCheck(L_983);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_983, 8);
		int32_t* L_984 = ((int32_t*)(int32_t*)SZArrayLdElema(L_983, 8, sizeof(int32_t)));
		*((int32_t*)(L_984)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_984))+(int32_t)1));
		Int32U5BU5D_t15* L_985 = (__this->___savemoneyi_41);
		NullCheck(L_985);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_985, ((int32_t)15));
		int32_t L_986 = ((int32_t)15);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_985, L_986, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2523;
		}
	}
	{
		Int32U5BU5D_t15* L_987 = (__this->___savemoneyi_41);
		NullCheck(L_987);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_987, ((int32_t)16));
		int32_t* L_988 = ((int32_t*)(int32_t*)SZArrayLdElema(L_987, ((int32_t)16), sizeof(int32_t)));
		*((int32_t*)(L_988)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_988))+(int32_t)1));
		Int32U5BU5D_t15* L_989 = (__this->___savemoneyi_41);
		NullCheck(L_989);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_989, ((int32_t)15));
		int32_t* L_990 = ((int32_t*)(int32_t*)SZArrayLdElema(L_989, ((int32_t)15), sizeof(int32_t)));
		*((int32_t*)(L_990)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_990))-(int32_t)((int32_t)100000000)));
	}

IL_2523:
	{
		Int32U5BU5D_t15* L_991 = (__this->___savemoneyi_41);
		NullCheck(L_991);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_991, ((int32_t)16));
		int32_t L_992 = ((int32_t)16);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_991, L_992, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2544;
		}
	}
	{
		Int32U5BU5D_t15* L_993 = (__this->___savemoneyi_41);
		NullCheck(L_993);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_993, ((int32_t)16));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_993, ((int32_t)16), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_2544:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_2550:
	{
		int32_t L_994 = (__this->___money2_33);
		if (L_994)
		{
			goto IL_265c;
		}
	}
	{
		Int32U5BU5D_t15* L_995 = (__this->___savemoneyi_41);
		NullCheck(L_995);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_995, ((int32_t)16));
		int32_t L_996 = ((int32_t)16);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_995, L_996, sizeof(int32_t))))
		{
			goto IL_265c;
		}
	}
	{
		int32_t L_997 = (__this->___money_32);
		Int32U5BU5D_t15* L_998 = (__this->___savemoneyi_41);
		NullCheck(L_998);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_998, ((int32_t)15));
		int32_t L_999 = ((int32_t)15);
		if ((((int32_t)L_997) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_998, L_999, sizeof(int32_t))))))
		{
			goto IL_265c;
		}
	}
	{
		int32_t L_1000 = (__this->___money_32);
		Int32U5BU5D_t15* L_1001 = (__this->___savemoneyi_41);
		NullCheck(L_1001);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1001, ((int32_t)15));
		int32_t L_1002 = ((int32_t)15);
		__this->___money_32 = ((int32_t)((int32_t)L_1000-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1001, L_1002, sizeof(int32_t)))));
		int32_t L_1003 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1004 = (__this->___mapsyuueki_42);
		NullCheck(L_1004);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1004, 8);
		int32_t L_1005 = 8;
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1003+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1004, L_1005, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1006 = (__this->___savemoneyi_41);
		NullCheck(L_1006);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1006, ((int32_t)15));
		int32_t* L_1007 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1006, ((int32_t)15), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1008 = (__this->___savemoneyi_41);
		NullCheck(L_1008);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1008, ((int32_t)15));
		int32_t L_1009 = ((int32_t)15);
		*((int32_t*)(L_1007)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1007))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1008, L_1009, sizeof(int32_t))))))*(double)(0.3))))))));
		Int32U5BU5D_t15* L_1010 = (__this->___maplv_27);
		NullCheck(L_1010);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1010, 8);
		int32_t L_1011 = 8;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1010, L_1011, sizeof(int32_t))))
		{
			goto IL_25e3;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)36);
	}

IL_25e3:
	{
		Int32U5BU5D_t15* L_1012 = (__this->___maplv_27);
		NullCheck(L_1012);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1012, 8);
		int32_t* L_1013 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1012, 8, sizeof(int32_t)));
		*((int32_t*)(L_1013)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1013))+(int32_t)1));
		Int32U5BU5D_t15* L_1014 = (__this->___savemoneyi_41);
		NullCheck(L_1014);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1014, ((int32_t)15));
		int32_t L_1015 = ((int32_t)15);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1014, L_1015, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_262f;
		}
	}
	{
		Int32U5BU5D_t15* L_1016 = (__this->___savemoneyi_41);
		NullCheck(L_1016);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1016, ((int32_t)16));
		int32_t* L_1017 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1016, ((int32_t)16), sizeof(int32_t)));
		*((int32_t*)(L_1017)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1017))+(int32_t)1));
		Int32U5BU5D_t15* L_1018 = (__this->___savemoneyi_41);
		NullCheck(L_1018);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1018, ((int32_t)15));
		int32_t* L_1019 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1018, ((int32_t)15), sizeof(int32_t)));
		*((int32_t*)(L_1019)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1019))-(int32_t)((int32_t)100000000)));
	}

IL_262f:
	{
		Int32U5BU5D_t15* L_1020 = (__this->___savemoneyi_41);
		NullCheck(L_1020);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1020, ((int32_t)16));
		int32_t L_1021 = ((int32_t)16);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1020, L_1021, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2650;
		}
	}
	{
		Int32U5BU5D_t15* L_1022 = (__this->___savemoneyi_41);
		NullCheck(L_1022);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1022, ((int32_t)16));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1022, ((int32_t)16), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_2650:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_265c:
	{
		float L_1023 = (__this->___sw_9);
		float L_1024 = (__this->___sh_10);
		float L_1025 = (__this->___sw_9);
		float L_1026 = (__this->___sh_10);
		Rect_t19  L_1027 = {0};
		Rect__ctor_m35(&L_1027, ((float)((float)(360.0f)*(float)L_1023)), ((float)((float)(181.0f)*(float)L_1024)), ((float)((float)(225.0f)*(float)L_1025)), ((float)((float)(55.0f)*(float)L_1026)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_1028 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 6));
		NullCheck(L_1028);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1028, 0);
		ArrayElementTypeCheck (L_1028, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_1028, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_1029 = L_1028;
		StringU5BU5D_t14* L_1030 = (__this->___savemoneys_40);
		NullCheck(L_1030);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1030, ((int32_t)18));
		int32_t L_1031 = ((int32_t)18);
		NullCheck(L_1029);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1029, 1);
		ArrayElementTypeCheck (L_1029, (*(String_t**)(String_t**)SZArrayLdElema(L_1030, L_1031, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1029, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1030, L_1031, sizeof(String_t*)));
		StringU5BU5D_t14* L_1032 = L_1029;
		StringU5BU5D_t14* L_1033 = (__this->___savemoneys_40);
		NullCheck(L_1033);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1033, ((int32_t)17));
		int32_t L_1034 = ((int32_t)17);
		NullCheck(L_1032);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1032, 2);
		ArrayElementTypeCheck (L_1032, (*(String_t**)(String_t**)SZArrayLdElema(L_1033, L_1034, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1032, 2, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1033, L_1034, sizeof(String_t*)));
		StringU5BU5D_t14* L_1035 = L_1032;
		NullCheck(L_1035);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1035, 3);
		ArrayElementTypeCheck (L_1035, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_1035, 3, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_1036 = L_1035;
		Int32U5BU5D_t15* L_1037 = (__this->___mapsyuueki_42);
		NullCheck(L_1037);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1037, ((int32_t)9));
		String_t* L_1038 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_1037, ((int32_t)9), sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_1036);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1036, 4);
		ArrayElementTypeCheck (L_1036, L_1038);
		*((String_t**)(String_t**)SZArrayLdElema(L_1036, 4, sizeof(String_t*))) = (String_t*)L_1038;
		StringU5BU5D_t14* L_1039 = L_1036;
		NullCheck(L_1039);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1039, 5);
		ArrayElementTypeCheck (L_1039, _stringLiteral261);
		*((String_t**)(String_t**)SZArrayLdElema(L_1039, 5, sizeof(String_t*))) = (String_t*)_stringLiteral261;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1040 = String_Concat_m65(NULL /*static, unused*/, L_1039, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_1041 = GUI_Button_m75(NULL /*static, unused*/, L_1027, L_1040, /*hidden argument*/NULL);
		if (!L_1041)
		{
			goto IL_2a62;
		}
	}
	{
		int32_t L_1042 = (__this->___money2_33);
		if ((((int32_t)L_1042) <= ((int32_t)0)))
		{
			goto IL_2837;
		}
	}
	{
		int32_t L_1043 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1044 = (__this->___savemoneyi_41);
		NullCheck(L_1044);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1044, ((int32_t)18));
		int32_t L_1045 = ((int32_t)18);
		if ((((int32_t)L_1043) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1044, L_1045, sizeof(int32_t))))))
		{
			goto IL_2837;
		}
	}
	{
		int32_t L_1046 = (__this->___money_32);
		Int32U5BU5D_t15* L_1047 = (__this->___savemoneyi_41);
		NullCheck(L_1047);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1047, ((int32_t)17));
		int32_t L_1048 = ((int32_t)17);
		if ((((int32_t)L_1046) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1047, L_1048, sizeof(int32_t))))))
		{
			goto IL_2837;
		}
	}
	{
		int32_t L_1049 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1050 = (__this->___savemoneyi_41);
		NullCheck(L_1050);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1050, ((int32_t)18));
		int32_t L_1051 = ((int32_t)18);
		__this->___money2_33 = ((int32_t)((int32_t)L_1049-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1050, L_1051, sizeof(int32_t)))));
		int32_t L_1052 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_1052-(int32_t)1));
		int32_t L_1053 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_1053+(int32_t)((int32_t)100000000)));
		int32_t L_1054 = (__this->___money_32);
		Int32U5BU5D_t15* L_1055 = (__this->___savemoneyi_41);
		NullCheck(L_1055);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1055, ((int32_t)18));
		int32_t L_1056 = ((int32_t)18);
		__this->___money_32 = ((int32_t)((int32_t)L_1054-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1055, L_1056, sizeof(int32_t)))));
		int32_t L_1057 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1058 = (__this->___mapsyuueki_42);
		NullCheck(L_1058);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1058, ((int32_t)9));
		int32_t L_1059 = ((int32_t)9);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1057+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1058, L_1059, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1060 = (__this->___savemoneyi_41);
		NullCheck(L_1060);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1060, ((int32_t)17));
		int32_t* L_1061 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1060, ((int32_t)17), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1062 = (__this->___savemoneyi_41);
		NullCheck(L_1062);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1062, ((int32_t)17));
		int32_t L_1063 = ((int32_t)17);
		*((int32_t*)(L_1061)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1061))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1062, L_1063, sizeof(int32_t))))))*(double)(0.3))))))));
		Int32U5BU5D_t15* L_1064 = (__this->___maplv_27);
		NullCheck(L_1064);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1064, ((int32_t)9));
		int32_t L_1065 = ((int32_t)9);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1064, L_1065, sizeof(int32_t))))
		{
			goto IL_27bd;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)37);
	}

IL_27bd:
	{
		Int32U5BU5D_t15* L_1066 = (__this->___maplv_27);
		NullCheck(L_1066);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1066, ((int32_t)9));
		int32_t* L_1067 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1066, ((int32_t)9), sizeof(int32_t)));
		*((int32_t*)(L_1067)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1067))+(int32_t)1));
		Int32U5BU5D_t15* L_1068 = (__this->___savemoneyi_41);
		NullCheck(L_1068);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1068, ((int32_t)17));
		int32_t L_1069 = ((int32_t)17);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1068, L_1069, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_280a;
		}
	}
	{
		Int32U5BU5D_t15* L_1070 = (__this->___savemoneyi_41);
		NullCheck(L_1070);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1070, ((int32_t)18));
		int32_t* L_1071 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1070, ((int32_t)18), sizeof(int32_t)));
		*((int32_t*)(L_1071)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1071))+(int32_t)1));
		Int32U5BU5D_t15* L_1072 = (__this->___savemoneyi_41);
		NullCheck(L_1072);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1072, ((int32_t)17));
		int32_t* L_1073 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1072, ((int32_t)17), sizeof(int32_t)));
		*((int32_t*)(L_1073)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1073))-(int32_t)((int32_t)100000000)));
	}

IL_280a:
	{
		Int32U5BU5D_t15* L_1074 = (__this->___savemoneyi_41);
		NullCheck(L_1074);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1074, ((int32_t)18));
		int32_t L_1075 = ((int32_t)18);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1074, L_1075, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_282b;
		}
	}
	{
		Int32U5BU5D_t15* L_1076 = (__this->___savemoneyi_41);
		NullCheck(L_1076);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1076, ((int32_t)18));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1076, ((int32_t)18), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_282b:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_2837:
	{
		int32_t L_1077 = (__this->___money2_33);
		if ((((int32_t)L_1077) <= ((int32_t)0)))
		{
			goto IL_2953;
		}
	}
	{
		Int32U5BU5D_t15* L_1078 = (__this->___savemoneyi_41);
		NullCheck(L_1078);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1078, ((int32_t)18));
		int32_t L_1079 = ((int32_t)18);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1078, L_1079, sizeof(int32_t))))
		{
			goto IL_2953;
		}
	}
	{
		int32_t L_1080 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_1080-(int32_t)1));
		int32_t L_1081 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_1081+(int32_t)((int32_t)100000000)));
		int32_t L_1082 = (__this->___money_32);
		Int32U5BU5D_t15* L_1083 = (__this->___savemoneyi_41);
		NullCheck(L_1083);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1083, ((int32_t)17));
		int32_t L_1084 = ((int32_t)17);
		__this->___money_32 = ((int32_t)((int32_t)L_1082-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1083, L_1084, sizeof(int32_t)))));
		int32_t L_1085 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1086 = (__this->___mapsyuueki_42);
		NullCheck(L_1086);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1086, ((int32_t)9));
		int32_t L_1087 = ((int32_t)9);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1085+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1086, L_1087, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1088 = (__this->___savemoneyi_41);
		NullCheck(L_1088);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1088, ((int32_t)17));
		int32_t* L_1089 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1088, ((int32_t)17), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1090 = (__this->___savemoneyi_41);
		NullCheck(L_1090);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1090, ((int32_t)17));
		int32_t L_1091 = ((int32_t)17);
		*((int32_t*)(L_1089)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1089))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1090, L_1091, sizeof(int32_t))))))*(double)(0.3))))))));
		Int32U5BU5D_t15* L_1092 = (__this->___maplv_27);
		NullCheck(L_1092);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1092, ((int32_t)9));
		int32_t L_1093 = ((int32_t)9);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1092, L_1093, sizeof(int32_t))))
		{
			goto IL_28d9;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)37);
	}

IL_28d9:
	{
		Int32U5BU5D_t15* L_1094 = (__this->___maplv_27);
		NullCheck(L_1094);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1094, ((int32_t)9));
		int32_t* L_1095 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1094, ((int32_t)9), sizeof(int32_t)));
		*((int32_t*)(L_1095)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1095))+(int32_t)1));
		Int32U5BU5D_t15* L_1096 = (__this->___savemoneyi_41);
		NullCheck(L_1096);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1096, ((int32_t)17));
		int32_t L_1097 = ((int32_t)17);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1096, L_1097, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2926;
		}
	}
	{
		Int32U5BU5D_t15* L_1098 = (__this->___savemoneyi_41);
		NullCheck(L_1098);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1098, ((int32_t)18));
		int32_t* L_1099 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1098, ((int32_t)18), sizeof(int32_t)));
		*((int32_t*)(L_1099)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1099))+(int32_t)1));
		Int32U5BU5D_t15* L_1100 = (__this->___savemoneyi_41);
		NullCheck(L_1100);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1100, ((int32_t)17));
		int32_t* L_1101 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1100, ((int32_t)17), sizeof(int32_t)));
		*((int32_t*)(L_1101)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1101))-(int32_t)((int32_t)100000000)));
	}

IL_2926:
	{
		Int32U5BU5D_t15* L_1102 = (__this->___savemoneyi_41);
		NullCheck(L_1102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1102, ((int32_t)18));
		int32_t L_1103 = ((int32_t)18);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1102, L_1103, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2947;
		}
	}
	{
		Int32U5BU5D_t15* L_1104 = (__this->___savemoneyi_41);
		NullCheck(L_1104);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1104, ((int32_t)18));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1104, ((int32_t)18), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_2947:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_2953:
	{
		int32_t L_1105 = (__this->___money2_33);
		if (L_1105)
		{
			goto IL_2a62;
		}
	}
	{
		Int32U5BU5D_t15* L_1106 = (__this->___savemoneyi_41);
		NullCheck(L_1106);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1106, ((int32_t)18));
		int32_t L_1107 = ((int32_t)18);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1106, L_1107, sizeof(int32_t))))
		{
			goto IL_2a62;
		}
	}
	{
		int32_t L_1108 = (__this->___money_32);
		Int32U5BU5D_t15* L_1109 = (__this->___savemoneyi_41);
		NullCheck(L_1109);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1109, ((int32_t)17));
		int32_t L_1110 = ((int32_t)17);
		if ((((int32_t)L_1108) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1109, L_1110, sizeof(int32_t))))))
		{
			goto IL_2a62;
		}
	}
	{
		int32_t L_1111 = (__this->___money_32);
		Int32U5BU5D_t15* L_1112 = (__this->___savemoneyi_41);
		NullCheck(L_1112);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1112, ((int32_t)17));
		int32_t L_1113 = ((int32_t)17);
		__this->___money_32 = ((int32_t)((int32_t)L_1111-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1112, L_1113, sizeof(int32_t)))));
		int32_t L_1114 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1115 = (__this->___mapsyuueki_42);
		NullCheck(L_1115);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1115, ((int32_t)9));
		int32_t L_1116 = ((int32_t)9);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1114+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1115, L_1116, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1117 = (__this->___savemoneyi_41);
		NullCheck(L_1117);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1117, ((int32_t)17));
		int32_t* L_1118 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1117, ((int32_t)17), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1119 = (__this->___savemoneyi_41);
		NullCheck(L_1119);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1119, ((int32_t)17));
		int32_t L_1120 = ((int32_t)17);
		*((int32_t*)(L_1118)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1118))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1119, L_1120, sizeof(int32_t))))))*(double)(0.3))))))));
		Int32U5BU5D_t15* L_1121 = (__this->___maplv_27);
		NullCheck(L_1121);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1121, ((int32_t)9));
		int32_t L_1122 = ((int32_t)9);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1121, L_1122, sizeof(int32_t))))
		{
			goto IL_29e8;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)37);
	}

IL_29e8:
	{
		Int32U5BU5D_t15* L_1123 = (__this->___maplv_27);
		NullCheck(L_1123);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1123, ((int32_t)9));
		int32_t* L_1124 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1123, ((int32_t)9), sizeof(int32_t)));
		*((int32_t*)(L_1124)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1124))+(int32_t)1));
		Int32U5BU5D_t15* L_1125 = (__this->___savemoneyi_41);
		NullCheck(L_1125);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1125, ((int32_t)17));
		int32_t L_1126 = ((int32_t)17);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1125, L_1126, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2a35;
		}
	}
	{
		Int32U5BU5D_t15* L_1127 = (__this->___savemoneyi_41);
		NullCheck(L_1127);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1127, ((int32_t)18));
		int32_t* L_1128 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1127, ((int32_t)18), sizeof(int32_t)));
		*((int32_t*)(L_1128)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1128))+(int32_t)1));
		Int32U5BU5D_t15* L_1129 = (__this->___savemoneyi_41);
		NullCheck(L_1129);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1129, ((int32_t)17));
		int32_t* L_1130 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1129, ((int32_t)17), sizeof(int32_t)));
		*((int32_t*)(L_1130)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1130))-(int32_t)((int32_t)100000000)));
	}

IL_2a35:
	{
		Int32U5BU5D_t15* L_1131 = (__this->___savemoneyi_41);
		NullCheck(L_1131);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1131, ((int32_t)18));
		int32_t L_1132 = ((int32_t)18);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1131, L_1132, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2a56;
		}
	}
	{
		Int32U5BU5D_t15* L_1133 = (__this->___savemoneyi_41);
		NullCheck(L_1133);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1133, ((int32_t)18));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1133, ((int32_t)18), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_2a56:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_2a62:
	{
		float L_1134 = (__this->___sw_9);
		float L_1135 = (__this->___sh_10);
		float L_1136 = (__this->___sw_9);
		float L_1137 = (__this->___sh_10);
		Rect_t19  L_1138 = {0};
		Rect__ctor_m35(&L_1138, ((float)((float)(360.0f)*(float)L_1134)), ((float)((float)(239.0f)*(float)L_1135)), ((float)((float)(225.0f)*(float)L_1136)), ((float)((float)(55.0f)*(float)L_1137)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_1139 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 6));
		NullCheck(L_1139);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1139, 0);
		ArrayElementTypeCheck (L_1139, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_1139, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_1140 = L_1139;
		StringU5BU5D_t14* L_1141 = (__this->___savemoneys_40);
		NullCheck(L_1141);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1141, ((int32_t)20));
		int32_t L_1142 = ((int32_t)20);
		NullCheck(L_1140);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1140, 1);
		ArrayElementTypeCheck (L_1140, (*(String_t**)(String_t**)SZArrayLdElema(L_1141, L_1142, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1140, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1141, L_1142, sizeof(String_t*)));
		StringU5BU5D_t14* L_1143 = L_1140;
		StringU5BU5D_t14* L_1144 = (__this->___savemoneys_40);
		NullCheck(L_1144);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1144, ((int32_t)19));
		int32_t L_1145 = ((int32_t)19);
		NullCheck(L_1143);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1143, 2);
		ArrayElementTypeCheck (L_1143, (*(String_t**)(String_t**)SZArrayLdElema(L_1144, L_1145, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1143, 2, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1144, L_1145, sizeof(String_t*)));
		StringU5BU5D_t14* L_1146 = L_1143;
		NullCheck(L_1146);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1146, 3);
		ArrayElementTypeCheck (L_1146, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_1146, 3, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_1147 = L_1146;
		Int32U5BU5D_t15* L_1148 = (__this->___mapsyuueki_42);
		NullCheck(L_1148);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1148, ((int32_t)10));
		String_t* L_1149 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_1148, ((int32_t)10), sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_1147);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1147, 4);
		ArrayElementTypeCheck (L_1147, L_1149);
		*((String_t**)(String_t**)SZArrayLdElema(L_1147, 4, sizeof(String_t*))) = (String_t*)L_1149;
		StringU5BU5D_t14* L_1150 = L_1147;
		NullCheck(L_1150);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1150, 5);
		ArrayElementTypeCheck (L_1150, _stringLiteral262);
		*((String_t**)(String_t**)SZArrayLdElema(L_1150, 5, sizeof(String_t*))) = (String_t*)_stringLiteral262;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1151 = String_Concat_m65(NULL /*static, unused*/, L_1150, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_1152 = GUI_Button_m75(NULL /*static, unused*/, L_1138, L_1151, /*hidden argument*/NULL);
		if (!L_1152)
		{
			goto IL_2e68;
		}
	}
	{
		int32_t L_1153 = (__this->___money2_33);
		if ((((int32_t)L_1153) <= ((int32_t)0)))
		{
			goto IL_2c3d;
		}
	}
	{
		int32_t L_1154 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1155 = (__this->___savemoneyi_41);
		NullCheck(L_1155);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1155, ((int32_t)20));
		int32_t L_1156 = ((int32_t)20);
		if ((((int32_t)L_1154) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1155, L_1156, sizeof(int32_t))))))
		{
			goto IL_2c3d;
		}
	}
	{
		int32_t L_1157 = (__this->___money_32);
		Int32U5BU5D_t15* L_1158 = (__this->___savemoneyi_41);
		NullCheck(L_1158);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1158, ((int32_t)19));
		int32_t L_1159 = ((int32_t)19);
		if ((((int32_t)L_1157) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1158, L_1159, sizeof(int32_t))))))
		{
			goto IL_2c3d;
		}
	}
	{
		int32_t L_1160 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1161 = (__this->___savemoneyi_41);
		NullCheck(L_1161);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1161, ((int32_t)20));
		int32_t L_1162 = ((int32_t)20);
		__this->___money2_33 = ((int32_t)((int32_t)L_1160-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1161, L_1162, sizeof(int32_t)))));
		int32_t L_1163 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_1163-(int32_t)1));
		int32_t L_1164 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_1164+(int32_t)((int32_t)100000000)));
		int32_t L_1165 = (__this->___money_32);
		Int32U5BU5D_t15* L_1166 = (__this->___savemoneyi_41);
		NullCheck(L_1166);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1166, ((int32_t)19));
		int32_t L_1167 = ((int32_t)19);
		__this->___money_32 = ((int32_t)((int32_t)L_1165-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1166, L_1167, sizeof(int32_t)))));
		int32_t L_1168 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1169 = (__this->___mapsyuueki_42);
		NullCheck(L_1169);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1169, ((int32_t)10));
		int32_t L_1170 = ((int32_t)10);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1168+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1169, L_1170, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1171 = (__this->___savemoneyi_41);
		NullCheck(L_1171);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1171, ((int32_t)19));
		int32_t* L_1172 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1171, ((int32_t)19), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1173 = (__this->___savemoneyi_41);
		NullCheck(L_1173);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1173, ((int32_t)19));
		int32_t L_1174 = ((int32_t)19);
		*((int32_t*)(L_1172)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1172))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1173, L_1174, sizeof(int32_t))))))*(double)(0.4))))))));
		Int32U5BU5D_t15* L_1175 = (__this->___maplv_27);
		NullCheck(L_1175);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1175, ((int32_t)10));
		int32_t L_1176 = ((int32_t)10);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1175, L_1176, sizeof(int32_t))))
		{
			goto IL_2bc3;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)38);
	}

IL_2bc3:
	{
		Int32U5BU5D_t15* L_1177 = (__this->___maplv_27);
		NullCheck(L_1177);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1177, ((int32_t)10));
		int32_t* L_1178 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1177, ((int32_t)10), sizeof(int32_t)));
		*((int32_t*)(L_1178)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1178))+(int32_t)1));
		Int32U5BU5D_t15* L_1179 = (__this->___savemoneyi_41);
		NullCheck(L_1179);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1179, ((int32_t)19));
		int32_t L_1180 = ((int32_t)19);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1179, L_1180, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2c10;
		}
	}
	{
		Int32U5BU5D_t15* L_1181 = (__this->___savemoneyi_41);
		NullCheck(L_1181);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1181, ((int32_t)20));
		int32_t* L_1182 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1181, ((int32_t)20), sizeof(int32_t)));
		*((int32_t*)(L_1182)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1182))+(int32_t)1));
		Int32U5BU5D_t15* L_1183 = (__this->___savemoneyi_41);
		NullCheck(L_1183);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1183, ((int32_t)19));
		int32_t* L_1184 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1183, ((int32_t)19), sizeof(int32_t)));
		*((int32_t*)(L_1184)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1184))-(int32_t)((int32_t)100000000)));
	}

IL_2c10:
	{
		Int32U5BU5D_t15* L_1185 = (__this->___savemoneyi_41);
		NullCheck(L_1185);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1185, ((int32_t)20));
		int32_t L_1186 = ((int32_t)20);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1185, L_1186, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2c31;
		}
	}
	{
		Int32U5BU5D_t15* L_1187 = (__this->___savemoneyi_41);
		NullCheck(L_1187);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1187, ((int32_t)20));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1187, ((int32_t)20), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_2c31:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_2c3d:
	{
		int32_t L_1188 = (__this->___money2_33);
		if ((((int32_t)L_1188) <= ((int32_t)0)))
		{
			goto IL_2d59;
		}
	}
	{
		Int32U5BU5D_t15* L_1189 = (__this->___savemoneyi_41);
		NullCheck(L_1189);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1189, ((int32_t)20));
		int32_t L_1190 = ((int32_t)20);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1189, L_1190, sizeof(int32_t))))
		{
			goto IL_2d59;
		}
	}
	{
		int32_t L_1191 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_1191-(int32_t)1));
		int32_t L_1192 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_1192+(int32_t)((int32_t)100000000)));
		int32_t L_1193 = (__this->___money_32);
		Int32U5BU5D_t15* L_1194 = (__this->___savemoneyi_41);
		NullCheck(L_1194);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1194, ((int32_t)19));
		int32_t L_1195 = ((int32_t)19);
		__this->___money_32 = ((int32_t)((int32_t)L_1193-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1194, L_1195, sizeof(int32_t)))));
		int32_t L_1196 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1197 = (__this->___mapsyuueki_42);
		NullCheck(L_1197);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1197, ((int32_t)10));
		int32_t L_1198 = ((int32_t)10);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1196+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1197, L_1198, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1199 = (__this->___savemoneyi_41);
		NullCheck(L_1199);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1199, ((int32_t)19));
		int32_t* L_1200 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1199, ((int32_t)19), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1201 = (__this->___savemoneyi_41);
		NullCheck(L_1201);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1201, ((int32_t)19));
		int32_t L_1202 = ((int32_t)19);
		*((int32_t*)(L_1200)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1200))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1201, L_1202, sizeof(int32_t))))))*(double)(0.4))))))));
		Int32U5BU5D_t15* L_1203 = (__this->___maplv_27);
		NullCheck(L_1203);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1203, ((int32_t)10));
		int32_t L_1204 = ((int32_t)10);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1203, L_1204, sizeof(int32_t))))
		{
			goto IL_2cdf;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)38);
	}

IL_2cdf:
	{
		Int32U5BU5D_t15* L_1205 = (__this->___maplv_27);
		NullCheck(L_1205);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1205, ((int32_t)10));
		int32_t* L_1206 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1205, ((int32_t)10), sizeof(int32_t)));
		*((int32_t*)(L_1206)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1206))+(int32_t)1));
		Int32U5BU5D_t15* L_1207 = (__this->___savemoneyi_41);
		NullCheck(L_1207);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1207, ((int32_t)19));
		int32_t L_1208 = ((int32_t)19);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1207, L_1208, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2d2c;
		}
	}
	{
		Int32U5BU5D_t15* L_1209 = (__this->___savemoneyi_41);
		NullCheck(L_1209);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1209, ((int32_t)20));
		int32_t* L_1210 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1209, ((int32_t)20), sizeof(int32_t)));
		*((int32_t*)(L_1210)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1210))+(int32_t)1));
		Int32U5BU5D_t15* L_1211 = (__this->___savemoneyi_41);
		NullCheck(L_1211);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1211, ((int32_t)19));
		int32_t* L_1212 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1211, ((int32_t)19), sizeof(int32_t)));
		*((int32_t*)(L_1212)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1212))-(int32_t)((int32_t)100000000)));
	}

IL_2d2c:
	{
		Int32U5BU5D_t15* L_1213 = (__this->___savemoneyi_41);
		NullCheck(L_1213);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1213, ((int32_t)20));
		int32_t L_1214 = ((int32_t)20);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1213, L_1214, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2d4d;
		}
	}
	{
		Int32U5BU5D_t15* L_1215 = (__this->___savemoneyi_41);
		NullCheck(L_1215);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1215, ((int32_t)20));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1215, ((int32_t)20), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_2d4d:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_2d59:
	{
		int32_t L_1216 = (__this->___money2_33);
		if (L_1216)
		{
			goto IL_2e68;
		}
	}
	{
		Int32U5BU5D_t15* L_1217 = (__this->___savemoneyi_41);
		NullCheck(L_1217);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1217, ((int32_t)20));
		int32_t L_1218 = ((int32_t)20);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1217, L_1218, sizeof(int32_t))))
		{
			goto IL_2e68;
		}
	}
	{
		int32_t L_1219 = (__this->___money_32);
		Int32U5BU5D_t15* L_1220 = (__this->___savemoneyi_41);
		NullCheck(L_1220);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1220, ((int32_t)19));
		int32_t L_1221 = ((int32_t)19);
		if ((((int32_t)L_1219) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1220, L_1221, sizeof(int32_t))))))
		{
			goto IL_2e68;
		}
	}
	{
		int32_t L_1222 = (__this->___money_32);
		Int32U5BU5D_t15* L_1223 = (__this->___savemoneyi_41);
		NullCheck(L_1223);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1223, ((int32_t)19));
		int32_t L_1224 = ((int32_t)19);
		__this->___money_32 = ((int32_t)((int32_t)L_1222-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1223, L_1224, sizeof(int32_t)))));
		int32_t L_1225 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1226 = (__this->___mapsyuueki_42);
		NullCheck(L_1226);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1226, ((int32_t)10));
		int32_t L_1227 = ((int32_t)10);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1225+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1226, L_1227, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1228 = (__this->___savemoneyi_41);
		NullCheck(L_1228);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1228, ((int32_t)19));
		int32_t* L_1229 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1228, ((int32_t)19), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1230 = (__this->___savemoneyi_41);
		NullCheck(L_1230);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1230, ((int32_t)19));
		int32_t L_1231 = ((int32_t)19);
		*((int32_t*)(L_1229)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1229))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1230, L_1231, sizeof(int32_t))))))*(double)(0.4))))))));
		Int32U5BU5D_t15* L_1232 = (__this->___maplv_27);
		NullCheck(L_1232);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1232, ((int32_t)10));
		int32_t L_1233 = ((int32_t)10);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1232, L_1233, sizeof(int32_t))))
		{
			goto IL_2dee;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)38);
	}

IL_2dee:
	{
		Int32U5BU5D_t15* L_1234 = (__this->___maplv_27);
		NullCheck(L_1234);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1234, ((int32_t)10));
		int32_t* L_1235 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1234, ((int32_t)10), sizeof(int32_t)));
		*((int32_t*)(L_1235)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1235))+(int32_t)1));
		Int32U5BU5D_t15* L_1236 = (__this->___savemoneyi_41);
		NullCheck(L_1236);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1236, ((int32_t)19));
		int32_t L_1237 = ((int32_t)19);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1236, L_1237, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2e3b;
		}
	}
	{
		Int32U5BU5D_t15* L_1238 = (__this->___savemoneyi_41);
		NullCheck(L_1238);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1238, ((int32_t)20));
		int32_t* L_1239 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1238, ((int32_t)20), sizeof(int32_t)));
		*((int32_t*)(L_1239)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1239))+(int32_t)1));
		Int32U5BU5D_t15* L_1240 = (__this->___savemoneyi_41);
		NullCheck(L_1240);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1240, ((int32_t)19));
		int32_t* L_1241 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1240, ((int32_t)19), sizeof(int32_t)));
		*((int32_t*)(L_1241)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1241))-(int32_t)((int32_t)100000000)));
	}

IL_2e3b:
	{
		Int32U5BU5D_t15* L_1242 = (__this->___savemoneyi_41);
		NullCheck(L_1242);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1242, ((int32_t)20));
		int32_t L_1243 = ((int32_t)20);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1242, L_1243, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_2e5c;
		}
	}
	{
		Int32U5BU5D_t15* L_1244 = (__this->___savemoneyi_41);
		NullCheck(L_1244);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1244, ((int32_t)20));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1244, ((int32_t)20), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_2e5c:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_2e68:
	{
		float L_1245 = (__this->___sw_9);
		float L_1246 = (__this->___sh_10);
		float L_1247 = (__this->___sw_9);
		float L_1248 = (__this->___sh_10);
		Rect_t19  L_1249 = {0};
		Rect__ctor_m35(&L_1249, ((float)((float)(360.0f)*(float)L_1245)), ((float)((float)(297.0f)*(float)L_1246)), ((float)((float)(225.0f)*(float)L_1247)), ((float)((float)(55.0f)*(float)L_1248)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_1250 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 6));
		NullCheck(L_1250);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1250, 0);
		ArrayElementTypeCheck (L_1250, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_1250, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_1251 = L_1250;
		StringU5BU5D_t14* L_1252 = (__this->___savemoneys_40);
		NullCheck(L_1252);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1252, ((int32_t)22));
		int32_t L_1253 = ((int32_t)22);
		NullCheck(L_1251);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1251, 1);
		ArrayElementTypeCheck (L_1251, (*(String_t**)(String_t**)SZArrayLdElema(L_1252, L_1253, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1251, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1252, L_1253, sizeof(String_t*)));
		StringU5BU5D_t14* L_1254 = L_1251;
		StringU5BU5D_t14* L_1255 = (__this->___savemoneys_40);
		NullCheck(L_1255);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1255, ((int32_t)21));
		int32_t L_1256 = ((int32_t)21);
		NullCheck(L_1254);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1254, 2);
		ArrayElementTypeCheck (L_1254, (*(String_t**)(String_t**)SZArrayLdElema(L_1255, L_1256, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1254, 2, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1255, L_1256, sizeof(String_t*)));
		StringU5BU5D_t14* L_1257 = L_1254;
		NullCheck(L_1257);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1257, 3);
		ArrayElementTypeCheck (L_1257, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_1257, 3, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_1258 = L_1257;
		Int32U5BU5D_t15* L_1259 = (__this->___mapsyuueki_42);
		NullCheck(L_1259);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1259, ((int32_t)11));
		String_t* L_1260 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_1259, ((int32_t)11), sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_1258);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1258, 4);
		ArrayElementTypeCheck (L_1258, L_1260);
		*((String_t**)(String_t**)SZArrayLdElema(L_1258, 4, sizeof(String_t*))) = (String_t*)L_1260;
		StringU5BU5D_t14* L_1261 = L_1258;
		NullCheck(L_1261);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1261, 5);
		ArrayElementTypeCheck (L_1261, _stringLiteral263);
		*((String_t**)(String_t**)SZArrayLdElema(L_1261, 5, sizeof(String_t*))) = (String_t*)_stringLiteral263;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1262 = String_Concat_m65(NULL /*static, unused*/, L_1261, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_1263 = GUI_Button_m75(NULL /*static, unused*/, L_1249, L_1262, /*hidden argument*/NULL);
		if (!L_1263)
		{
			goto IL_326e;
		}
	}
	{
		int32_t L_1264 = (__this->___money2_33);
		if ((((int32_t)L_1264) <= ((int32_t)0)))
		{
			goto IL_3043;
		}
	}
	{
		int32_t L_1265 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1266 = (__this->___savemoneyi_41);
		NullCheck(L_1266);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1266, ((int32_t)22));
		int32_t L_1267 = ((int32_t)22);
		if ((((int32_t)L_1265) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1266, L_1267, sizeof(int32_t))))))
		{
			goto IL_3043;
		}
	}
	{
		int32_t L_1268 = (__this->___money_32);
		Int32U5BU5D_t15* L_1269 = (__this->___savemoneyi_41);
		NullCheck(L_1269);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1269, ((int32_t)21));
		int32_t L_1270 = ((int32_t)21);
		if ((((int32_t)L_1268) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1269, L_1270, sizeof(int32_t))))))
		{
			goto IL_3043;
		}
	}
	{
		int32_t L_1271 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1272 = (__this->___savemoneyi_41);
		NullCheck(L_1272);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1272, ((int32_t)22));
		int32_t L_1273 = ((int32_t)22);
		__this->___money2_33 = ((int32_t)((int32_t)L_1271-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1272, L_1273, sizeof(int32_t)))));
		int32_t L_1274 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_1274-(int32_t)1));
		int32_t L_1275 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_1275+(int32_t)((int32_t)100000000)));
		int32_t L_1276 = (__this->___money_32);
		Int32U5BU5D_t15* L_1277 = (__this->___savemoneyi_41);
		NullCheck(L_1277);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1277, ((int32_t)21));
		int32_t L_1278 = ((int32_t)21);
		__this->___money_32 = ((int32_t)((int32_t)L_1276-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1277, L_1278, sizeof(int32_t)))));
		int32_t L_1279 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1280 = (__this->___mapsyuueki_42);
		NullCheck(L_1280);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1280, ((int32_t)11));
		int32_t L_1281 = ((int32_t)11);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1279+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1280, L_1281, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1282 = (__this->___savemoneyi_41);
		NullCheck(L_1282);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1282, ((int32_t)21));
		int32_t* L_1283 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1282, ((int32_t)21), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1284 = (__this->___savemoneyi_41);
		NullCheck(L_1284);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1284, ((int32_t)21));
		int32_t L_1285 = ((int32_t)21);
		*((int32_t*)(L_1283)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1283))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1284, L_1285, sizeof(int32_t))))))*(double)(0.4))))))));
		Int32U5BU5D_t15* L_1286 = (__this->___maplv_27);
		NullCheck(L_1286);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1286, ((int32_t)11));
		int32_t L_1287 = ((int32_t)11);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1286, L_1287, sizeof(int32_t))))
		{
			goto IL_2fc9;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)39);
	}

IL_2fc9:
	{
		Int32U5BU5D_t15* L_1288 = (__this->___maplv_27);
		NullCheck(L_1288);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1288, ((int32_t)11));
		int32_t* L_1289 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1288, ((int32_t)11), sizeof(int32_t)));
		*((int32_t*)(L_1289)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1289))+(int32_t)1));
		Int32U5BU5D_t15* L_1290 = (__this->___savemoneyi_41);
		NullCheck(L_1290);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1290, ((int32_t)21));
		int32_t L_1291 = ((int32_t)21);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1290, L_1291, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3016;
		}
	}
	{
		Int32U5BU5D_t15* L_1292 = (__this->___savemoneyi_41);
		NullCheck(L_1292);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1292, ((int32_t)22));
		int32_t* L_1293 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1292, ((int32_t)22), sizeof(int32_t)));
		*((int32_t*)(L_1293)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1293))+(int32_t)1));
		Int32U5BU5D_t15* L_1294 = (__this->___savemoneyi_41);
		NullCheck(L_1294);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1294, ((int32_t)21));
		int32_t* L_1295 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1294, ((int32_t)21), sizeof(int32_t)));
		*((int32_t*)(L_1295)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1295))-(int32_t)((int32_t)100000000)));
	}

IL_3016:
	{
		Int32U5BU5D_t15* L_1296 = (__this->___savemoneyi_41);
		NullCheck(L_1296);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1296, ((int32_t)22));
		int32_t L_1297 = ((int32_t)22);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1296, L_1297, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3037;
		}
	}
	{
		Int32U5BU5D_t15* L_1298 = (__this->___savemoneyi_41);
		NullCheck(L_1298);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1298, ((int32_t)22));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1298, ((int32_t)22), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_3037:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_3043:
	{
		int32_t L_1299 = (__this->___money2_33);
		if ((((int32_t)L_1299) <= ((int32_t)0)))
		{
			goto IL_315f;
		}
	}
	{
		Int32U5BU5D_t15* L_1300 = (__this->___savemoneyi_41);
		NullCheck(L_1300);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1300, ((int32_t)22));
		int32_t L_1301 = ((int32_t)22);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1300, L_1301, sizeof(int32_t))))
		{
			goto IL_315f;
		}
	}
	{
		int32_t L_1302 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_1302-(int32_t)1));
		int32_t L_1303 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_1303+(int32_t)((int32_t)100000000)));
		int32_t L_1304 = (__this->___money_32);
		Int32U5BU5D_t15* L_1305 = (__this->___savemoneyi_41);
		NullCheck(L_1305);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1305, ((int32_t)21));
		int32_t L_1306 = ((int32_t)21);
		__this->___money_32 = ((int32_t)((int32_t)L_1304-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1305, L_1306, sizeof(int32_t)))));
		int32_t L_1307 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1308 = (__this->___mapsyuueki_42);
		NullCheck(L_1308);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1308, ((int32_t)11));
		int32_t L_1309 = ((int32_t)11);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1307+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1308, L_1309, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1310 = (__this->___savemoneyi_41);
		NullCheck(L_1310);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1310, ((int32_t)21));
		int32_t* L_1311 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1310, ((int32_t)21), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1312 = (__this->___savemoneyi_41);
		NullCheck(L_1312);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1312, ((int32_t)21));
		int32_t L_1313 = ((int32_t)21);
		*((int32_t*)(L_1311)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1311))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1312, L_1313, sizeof(int32_t))))))*(double)(0.4))))))));
		Int32U5BU5D_t15* L_1314 = (__this->___maplv_27);
		NullCheck(L_1314);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1314, ((int32_t)11));
		int32_t L_1315 = ((int32_t)11);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1314, L_1315, sizeof(int32_t))))
		{
			goto IL_30e5;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)39);
	}

IL_30e5:
	{
		Int32U5BU5D_t15* L_1316 = (__this->___maplv_27);
		NullCheck(L_1316);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1316, ((int32_t)11));
		int32_t* L_1317 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1316, ((int32_t)11), sizeof(int32_t)));
		*((int32_t*)(L_1317)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1317))+(int32_t)1));
		Int32U5BU5D_t15* L_1318 = (__this->___savemoneyi_41);
		NullCheck(L_1318);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1318, ((int32_t)21));
		int32_t L_1319 = ((int32_t)21);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1318, L_1319, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3132;
		}
	}
	{
		Int32U5BU5D_t15* L_1320 = (__this->___savemoneyi_41);
		NullCheck(L_1320);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1320, ((int32_t)22));
		int32_t* L_1321 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1320, ((int32_t)22), sizeof(int32_t)));
		*((int32_t*)(L_1321)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1321))+(int32_t)1));
		Int32U5BU5D_t15* L_1322 = (__this->___savemoneyi_41);
		NullCheck(L_1322);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1322, ((int32_t)21));
		int32_t* L_1323 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1322, ((int32_t)21), sizeof(int32_t)));
		*((int32_t*)(L_1323)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1323))-(int32_t)((int32_t)100000000)));
	}

IL_3132:
	{
		Int32U5BU5D_t15* L_1324 = (__this->___savemoneyi_41);
		NullCheck(L_1324);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1324, ((int32_t)22));
		int32_t L_1325 = ((int32_t)22);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1324, L_1325, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3153;
		}
	}
	{
		Int32U5BU5D_t15* L_1326 = (__this->___savemoneyi_41);
		NullCheck(L_1326);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1326, ((int32_t)22));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1326, ((int32_t)22), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_3153:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_315f:
	{
		int32_t L_1327 = (__this->___money2_33);
		if (L_1327)
		{
			goto IL_326e;
		}
	}
	{
		Int32U5BU5D_t15* L_1328 = (__this->___savemoneyi_41);
		NullCheck(L_1328);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1328, ((int32_t)22));
		int32_t L_1329 = ((int32_t)22);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1328, L_1329, sizeof(int32_t))))
		{
			goto IL_326e;
		}
	}
	{
		int32_t L_1330 = (__this->___money_32);
		Int32U5BU5D_t15* L_1331 = (__this->___savemoneyi_41);
		NullCheck(L_1331);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1331, ((int32_t)21));
		int32_t L_1332 = ((int32_t)21);
		if ((((int32_t)L_1330) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1331, L_1332, sizeof(int32_t))))))
		{
			goto IL_326e;
		}
	}
	{
		int32_t L_1333 = (__this->___money_32);
		Int32U5BU5D_t15* L_1334 = (__this->___savemoneyi_41);
		NullCheck(L_1334);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1334, ((int32_t)21));
		int32_t L_1335 = ((int32_t)21);
		__this->___money_32 = ((int32_t)((int32_t)L_1333-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1334, L_1335, sizeof(int32_t)))));
		int32_t L_1336 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1337 = (__this->___mapsyuueki_42);
		NullCheck(L_1337);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1337, ((int32_t)11));
		int32_t L_1338 = ((int32_t)11);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1336+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1337, L_1338, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1339 = (__this->___savemoneyi_41);
		NullCheck(L_1339);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1339, ((int32_t)21));
		int32_t* L_1340 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1339, ((int32_t)21), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1341 = (__this->___savemoneyi_41);
		NullCheck(L_1341);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1341, ((int32_t)21));
		int32_t L_1342 = ((int32_t)21);
		*((int32_t*)(L_1340)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1340))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1341, L_1342, sizeof(int32_t))))))*(double)(0.4))))))));
		Int32U5BU5D_t15* L_1343 = (__this->___maplv_27);
		NullCheck(L_1343);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1343, ((int32_t)11));
		int32_t L_1344 = ((int32_t)11);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1343, L_1344, sizeof(int32_t))))
		{
			goto IL_31f4;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)39);
	}

IL_31f4:
	{
		Int32U5BU5D_t15* L_1345 = (__this->___maplv_27);
		NullCheck(L_1345);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1345, ((int32_t)11));
		int32_t* L_1346 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1345, ((int32_t)11), sizeof(int32_t)));
		*((int32_t*)(L_1346)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1346))+(int32_t)1));
		Int32U5BU5D_t15* L_1347 = (__this->___savemoneyi_41);
		NullCheck(L_1347);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1347, ((int32_t)21));
		int32_t L_1348 = ((int32_t)21);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1347, L_1348, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3241;
		}
	}
	{
		Int32U5BU5D_t15* L_1349 = (__this->___savemoneyi_41);
		NullCheck(L_1349);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1349, ((int32_t)22));
		int32_t* L_1350 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1349, ((int32_t)22), sizeof(int32_t)));
		*((int32_t*)(L_1350)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1350))+(int32_t)1));
		Int32U5BU5D_t15* L_1351 = (__this->___savemoneyi_41);
		NullCheck(L_1351);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1351, ((int32_t)21));
		int32_t* L_1352 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1351, ((int32_t)21), sizeof(int32_t)));
		*((int32_t*)(L_1352)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1352))-(int32_t)((int32_t)100000000)));
	}

IL_3241:
	{
		Int32U5BU5D_t15* L_1353 = (__this->___savemoneyi_41);
		NullCheck(L_1353);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1353, ((int32_t)22));
		int32_t L_1354 = ((int32_t)22);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1353, L_1354, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3262;
		}
	}
	{
		Int32U5BU5D_t15* L_1355 = (__this->___savemoneyi_41);
		NullCheck(L_1355);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1355, ((int32_t)22));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1355, ((int32_t)22), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_3262:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_326e:
	{
		float L_1356 = (__this->___sw_9);
		float L_1357 = (__this->___sh_10);
		float L_1358 = (__this->___sw_9);
		float L_1359 = (__this->___sh_10);
		Rect_t19  L_1360 = {0};
		Rect__ctor_m35(&L_1360, ((float)((float)(360.0f)*(float)L_1356)), ((float)((float)(355.0f)*(float)L_1357)), ((float)((float)(225.0f)*(float)L_1358)), ((float)((float)(55.0f)*(float)L_1359)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_1361 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 6));
		NullCheck(L_1361);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1361, 0);
		ArrayElementTypeCheck (L_1361, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_1361, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_1362 = L_1361;
		StringU5BU5D_t14* L_1363 = (__this->___savemoneys_40);
		NullCheck(L_1363);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1363, ((int32_t)24));
		int32_t L_1364 = ((int32_t)24);
		NullCheck(L_1362);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1362, 1);
		ArrayElementTypeCheck (L_1362, (*(String_t**)(String_t**)SZArrayLdElema(L_1363, L_1364, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1362, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1363, L_1364, sizeof(String_t*)));
		StringU5BU5D_t14* L_1365 = L_1362;
		StringU5BU5D_t14* L_1366 = (__this->___savemoneys_40);
		NullCheck(L_1366);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1366, ((int32_t)23));
		int32_t L_1367 = ((int32_t)23);
		NullCheck(L_1365);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1365, 2);
		ArrayElementTypeCheck (L_1365, (*(String_t**)(String_t**)SZArrayLdElema(L_1366, L_1367, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1365, 2, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1366, L_1367, sizeof(String_t*)));
		StringU5BU5D_t14* L_1368 = L_1365;
		NullCheck(L_1368);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1368, 3);
		ArrayElementTypeCheck (L_1368, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_1368, 3, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_1369 = L_1368;
		Int32U5BU5D_t15* L_1370 = (__this->___mapsyuueki_42);
		NullCheck(L_1370);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1370, ((int32_t)12));
		String_t* L_1371 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_1370, ((int32_t)12), sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_1369);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1369, 4);
		ArrayElementTypeCheck (L_1369, L_1371);
		*((String_t**)(String_t**)SZArrayLdElema(L_1369, 4, sizeof(String_t*))) = (String_t*)L_1371;
		StringU5BU5D_t14* L_1372 = L_1369;
		NullCheck(L_1372);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1372, 5);
		ArrayElementTypeCheck (L_1372, _stringLiteral264);
		*((String_t**)(String_t**)SZArrayLdElema(L_1372, 5, sizeof(String_t*))) = (String_t*)_stringLiteral264;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1373 = String_Concat_m65(NULL /*static, unused*/, L_1372, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_1374 = GUI_Button_m75(NULL /*static, unused*/, L_1360, L_1373, /*hidden argument*/NULL);
		if (!L_1374)
		{
			goto IL_3674;
		}
	}
	{
		int32_t L_1375 = (__this->___money2_33);
		if ((((int32_t)L_1375) <= ((int32_t)0)))
		{
			goto IL_3449;
		}
	}
	{
		int32_t L_1376 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1377 = (__this->___savemoneyi_41);
		NullCheck(L_1377);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1377, ((int32_t)24));
		int32_t L_1378 = ((int32_t)24);
		if ((((int32_t)L_1376) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1377, L_1378, sizeof(int32_t))))))
		{
			goto IL_3449;
		}
	}
	{
		int32_t L_1379 = (__this->___money_32);
		Int32U5BU5D_t15* L_1380 = (__this->___savemoneyi_41);
		NullCheck(L_1380);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1380, ((int32_t)23));
		int32_t L_1381 = ((int32_t)23);
		if ((((int32_t)L_1379) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1380, L_1381, sizeof(int32_t))))))
		{
			goto IL_3449;
		}
	}
	{
		int32_t L_1382 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1383 = (__this->___savemoneyi_41);
		NullCheck(L_1383);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1383, ((int32_t)24));
		int32_t L_1384 = ((int32_t)24);
		__this->___money2_33 = ((int32_t)((int32_t)L_1382-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1383, L_1384, sizeof(int32_t)))));
		int32_t L_1385 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_1385-(int32_t)1));
		int32_t L_1386 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_1386+(int32_t)((int32_t)100000000)));
		int32_t L_1387 = (__this->___money_32);
		Int32U5BU5D_t15* L_1388 = (__this->___savemoneyi_41);
		NullCheck(L_1388);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1388, ((int32_t)23));
		int32_t L_1389 = ((int32_t)23);
		__this->___money_32 = ((int32_t)((int32_t)L_1387-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1388, L_1389, sizeof(int32_t)))));
		int32_t L_1390 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1391 = (__this->___mapsyuueki_42);
		NullCheck(L_1391);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1391, ((int32_t)12));
		int32_t L_1392 = ((int32_t)12);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1390+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1391, L_1392, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1393 = (__this->___savemoneyi_41);
		NullCheck(L_1393);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1393, ((int32_t)23));
		int32_t* L_1394 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1393, ((int32_t)23), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1395 = (__this->___savemoneyi_41);
		NullCheck(L_1395);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1395, ((int32_t)23));
		int32_t L_1396 = ((int32_t)23);
		*((int32_t*)(L_1394)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1394))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1395, L_1396, sizeof(int32_t))))))*(double)(0.5))))))));
		Int32U5BU5D_t15* L_1397 = (__this->___maplv_27);
		NullCheck(L_1397);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1397, ((int32_t)12));
		int32_t L_1398 = ((int32_t)12);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1397, L_1398, sizeof(int32_t))))
		{
			goto IL_33cf;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)40);
	}

IL_33cf:
	{
		Int32U5BU5D_t15* L_1399 = (__this->___maplv_27);
		NullCheck(L_1399);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1399, ((int32_t)12));
		int32_t* L_1400 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1399, ((int32_t)12), sizeof(int32_t)));
		*((int32_t*)(L_1400)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1400))+(int32_t)1));
		Int32U5BU5D_t15* L_1401 = (__this->___savemoneyi_41);
		NullCheck(L_1401);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1401, ((int32_t)23));
		int32_t L_1402 = ((int32_t)23);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1401, L_1402, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_341c;
		}
	}
	{
		Int32U5BU5D_t15* L_1403 = (__this->___savemoneyi_41);
		NullCheck(L_1403);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1403, ((int32_t)24));
		int32_t* L_1404 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1403, ((int32_t)24), sizeof(int32_t)));
		*((int32_t*)(L_1404)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1404))+(int32_t)1));
		Int32U5BU5D_t15* L_1405 = (__this->___savemoneyi_41);
		NullCheck(L_1405);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1405, ((int32_t)23));
		int32_t* L_1406 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1405, ((int32_t)23), sizeof(int32_t)));
		*((int32_t*)(L_1406)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1406))-(int32_t)((int32_t)100000000)));
	}

IL_341c:
	{
		Int32U5BU5D_t15* L_1407 = (__this->___savemoneyi_41);
		NullCheck(L_1407);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1407, ((int32_t)24));
		int32_t L_1408 = ((int32_t)24);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1407, L_1408, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_343d;
		}
	}
	{
		Int32U5BU5D_t15* L_1409 = (__this->___savemoneyi_41);
		NullCheck(L_1409);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1409, ((int32_t)24));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1409, ((int32_t)24), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_343d:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_3449:
	{
		int32_t L_1410 = (__this->___money2_33);
		if ((((int32_t)L_1410) <= ((int32_t)0)))
		{
			goto IL_3565;
		}
	}
	{
		Int32U5BU5D_t15* L_1411 = (__this->___savemoneyi_41);
		NullCheck(L_1411);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1411, ((int32_t)24));
		int32_t L_1412 = ((int32_t)24);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1411, L_1412, sizeof(int32_t))))
		{
			goto IL_3565;
		}
	}
	{
		int32_t L_1413 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_1413-(int32_t)1));
		int32_t L_1414 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_1414+(int32_t)((int32_t)100000000)));
		int32_t L_1415 = (__this->___money_32);
		Int32U5BU5D_t15* L_1416 = (__this->___savemoneyi_41);
		NullCheck(L_1416);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1416, ((int32_t)23));
		int32_t L_1417 = ((int32_t)23);
		__this->___money_32 = ((int32_t)((int32_t)L_1415-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1416, L_1417, sizeof(int32_t)))));
		int32_t L_1418 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1419 = (__this->___mapsyuueki_42);
		NullCheck(L_1419);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1419, ((int32_t)12));
		int32_t L_1420 = ((int32_t)12);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1418+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1419, L_1420, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1421 = (__this->___savemoneyi_41);
		NullCheck(L_1421);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1421, ((int32_t)23));
		int32_t* L_1422 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1421, ((int32_t)23), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1423 = (__this->___savemoneyi_41);
		NullCheck(L_1423);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1423, ((int32_t)23));
		int32_t L_1424 = ((int32_t)23);
		*((int32_t*)(L_1422)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1422))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1423, L_1424, sizeof(int32_t))))))*(double)(0.5))))))));
		Int32U5BU5D_t15* L_1425 = (__this->___maplv_27);
		NullCheck(L_1425);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1425, ((int32_t)12));
		int32_t L_1426 = ((int32_t)12);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1425, L_1426, sizeof(int32_t))))
		{
			goto IL_34eb;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)40);
	}

IL_34eb:
	{
		Int32U5BU5D_t15* L_1427 = (__this->___maplv_27);
		NullCheck(L_1427);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1427, ((int32_t)12));
		int32_t* L_1428 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1427, ((int32_t)12), sizeof(int32_t)));
		*((int32_t*)(L_1428)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1428))+(int32_t)1));
		Int32U5BU5D_t15* L_1429 = (__this->___savemoneyi_41);
		NullCheck(L_1429);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1429, ((int32_t)23));
		int32_t L_1430 = ((int32_t)23);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1429, L_1430, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3538;
		}
	}
	{
		Int32U5BU5D_t15* L_1431 = (__this->___savemoneyi_41);
		NullCheck(L_1431);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1431, ((int32_t)24));
		int32_t* L_1432 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1431, ((int32_t)24), sizeof(int32_t)));
		*((int32_t*)(L_1432)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1432))+(int32_t)1));
		Int32U5BU5D_t15* L_1433 = (__this->___savemoneyi_41);
		NullCheck(L_1433);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1433, ((int32_t)23));
		int32_t* L_1434 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1433, ((int32_t)23), sizeof(int32_t)));
		*((int32_t*)(L_1434)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1434))-(int32_t)((int32_t)100000000)));
	}

IL_3538:
	{
		Int32U5BU5D_t15* L_1435 = (__this->___savemoneyi_41);
		NullCheck(L_1435);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1435, ((int32_t)24));
		int32_t L_1436 = ((int32_t)24);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1435, L_1436, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3559;
		}
	}
	{
		Int32U5BU5D_t15* L_1437 = (__this->___savemoneyi_41);
		NullCheck(L_1437);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1437, ((int32_t)24));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1437, ((int32_t)24), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_3559:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_3565:
	{
		int32_t L_1438 = (__this->___money2_33);
		if (L_1438)
		{
			goto IL_3674;
		}
	}
	{
		Int32U5BU5D_t15* L_1439 = (__this->___savemoneyi_41);
		NullCheck(L_1439);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1439, ((int32_t)24));
		int32_t L_1440 = ((int32_t)24);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1439, L_1440, sizeof(int32_t))))
		{
			goto IL_3674;
		}
	}
	{
		int32_t L_1441 = (__this->___money_32);
		Int32U5BU5D_t15* L_1442 = (__this->___savemoneyi_41);
		NullCheck(L_1442);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1442, ((int32_t)23));
		int32_t L_1443 = ((int32_t)23);
		if ((((int32_t)L_1441) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1442, L_1443, sizeof(int32_t))))))
		{
			goto IL_3674;
		}
	}
	{
		int32_t L_1444 = (__this->___money_32);
		Int32U5BU5D_t15* L_1445 = (__this->___savemoneyi_41);
		NullCheck(L_1445);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1445, ((int32_t)23));
		int32_t L_1446 = ((int32_t)23);
		__this->___money_32 = ((int32_t)((int32_t)L_1444-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1445, L_1446, sizeof(int32_t)))));
		int32_t L_1447 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1448 = (__this->___mapsyuueki_42);
		NullCheck(L_1448);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1448, ((int32_t)12));
		int32_t L_1449 = ((int32_t)12);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1447+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1448, L_1449, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1450 = (__this->___savemoneyi_41);
		NullCheck(L_1450);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1450, ((int32_t)23));
		int32_t* L_1451 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1450, ((int32_t)23), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1452 = (__this->___savemoneyi_41);
		NullCheck(L_1452);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1452, ((int32_t)23));
		int32_t L_1453 = ((int32_t)23);
		*((int32_t*)(L_1451)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1451))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1452, L_1453, sizeof(int32_t))))))*(double)(0.5))))))));
		Int32U5BU5D_t15* L_1454 = (__this->___maplv_27);
		NullCheck(L_1454);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1454, ((int32_t)12));
		int32_t L_1455 = ((int32_t)12);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1454, L_1455, sizeof(int32_t))))
		{
			goto IL_35fa;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)40);
	}

IL_35fa:
	{
		Int32U5BU5D_t15* L_1456 = (__this->___maplv_27);
		NullCheck(L_1456);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1456, ((int32_t)12));
		int32_t* L_1457 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1456, ((int32_t)12), sizeof(int32_t)));
		*((int32_t*)(L_1457)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1457))+(int32_t)1));
		Int32U5BU5D_t15* L_1458 = (__this->___savemoneyi_41);
		NullCheck(L_1458);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1458, ((int32_t)23));
		int32_t L_1459 = ((int32_t)23);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1458, L_1459, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3647;
		}
	}
	{
		Int32U5BU5D_t15* L_1460 = (__this->___savemoneyi_41);
		NullCheck(L_1460);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1460, ((int32_t)24));
		int32_t* L_1461 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1460, ((int32_t)24), sizeof(int32_t)));
		*((int32_t*)(L_1461)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1461))+(int32_t)1));
		Int32U5BU5D_t15* L_1462 = (__this->___savemoneyi_41);
		NullCheck(L_1462);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1462, ((int32_t)23));
		int32_t* L_1463 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1462, ((int32_t)23), sizeof(int32_t)));
		*((int32_t*)(L_1463)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1463))-(int32_t)((int32_t)100000000)));
	}

IL_3647:
	{
		Int32U5BU5D_t15* L_1464 = (__this->___savemoneyi_41);
		NullCheck(L_1464);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1464, ((int32_t)24));
		int32_t L_1465 = ((int32_t)24);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1464, L_1465, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3668;
		}
	}
	{
		Int32U5BU5D_t15* L_1466 = (__this->___savemoneyi_41);
		NullCheck(L_1466);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1466, ((int32_t)24));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1466, ((int32_t)24), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_3668:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_3674:
	{
		float L_1467 = (__this->___sw_9);
		float L_1468 = (__this->___sh_10);
		float L_1469 = (__this->___sw_9);
		float L_1470 = (__this->___sh_10);
		Rect_t19  L_1471 = {0};
		Rect__ctor_m35(&L_1471, ((float)((float)(360.0f)*(float)L_1467)), ((float)((float)(413.0f)*(float)L_1468)), ((float)((float)(225.0f)*(float)L_1469)), ((float)((float)(55.0f)*(float)L_1470)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_1472 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 6));
		NullCheck(L_1472);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1472, 0);
		ArrayElementTypeCheck (L_1472, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_1472, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_1473 = L_1472;
		StringU5BU5D_t14* L_1474 = (__this->___savemoneys_40);
		NullCheck(L_1474);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1474, ((int32_t)26));
		int32_t L_1475 = ((int32_t)26);
		NullCheck(L_1473);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1473, 1);
		ArrayElementTypeCheck (L_1473, (*(String_t**)(String_t**)SZArrayLdElema(L_1474, L_1475, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1473, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1474, L_1475, sizeof(String_t*)));
		StringU5BU5D_t14* L_1476 = L_1473;
		StringU5BU5D_t14* L_1477 = (__this->___savemoneys_40);
		NullCheck(L_1477);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1477, ((int32_t)25));
		int32_t L_1478 = ((int32_t)25);
		NullCheck(L_1476);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1476, 2);
		ArrayElementTypeCheck (L_1476, (*(String_t**)(String_t**)SZArrayLdElema(L_1477, L_1478, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1476, 2, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1477, L_1478, sizeof(String_t*)));
		StringU5BU5D_t14* L_1479 = L_1476;
		NullCheck(L_1479);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1479, 3);
		ArrayElementTypeCheck (L_1479, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_1479, 3, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_1480 = L_1479;
		Int32U5BU5D_t15* L_1481 = (__this->___mapsyuueki_42);
		NullCheck(L_1481);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1481, ((int32_t)13));
		String_t* L_1482 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_1481, ((int32_t)13), sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_1480);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1480, 4);
		ArrayElementTypeCheck (L_1480, L_1482);
		*((String_t**)(String_t**)SZArrayLdElema(L_1480, 4, sizeof(String_t*))) = (String_t*)L_1482;
		StringU5BU5D_t14* L_1483 = L_1480;
		NullCheck(L_1483);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1483, 5);
		ArrayElementTypeCheck (L_1483, _stringLiteral265);
		*((String_t**)(String_t**)SZArrayLdElema(L_1483, 5, sizeof(String_t*))) = (String_t*)_stringLiteral265;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1484 = String_Concat_m65(NULL /*static, unused*/, L_1483, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_1485 = GUI_Button_m75(NULL /*static, unused*/, L_1471, L_1484, /*hidden argument*/NULL);
		if (!L_1485)
		{
			goto IL_3a7a;
		}
	}
	{
		int32_t L_1486 = (__this->___money2_33);
		if ((((int32_t)L_1486) <= ((int32_t)0)))
		{
			goto IL_384f;
		}
	}
	{
		int32_t L_1487 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1488 = (__this->___savemoneyi_41);
		NullCheck(L_1488);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1488, ((int32_t)26));
		int32_t L_1489 = ((int32_t)26);
		if ((((int32_t)L_1487) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1488, L_1489, sizeof(int32_t))))))
		{
			goto IL_384f;
		}
	}
	{
		int32_t L_1490 = (__this->___money_32);
		Int32U5BU5D_t15* L_1491 = (__this->___savemoneyi_41);
		NullCheck(L_1491);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1491, ((int32_t)25));
		int32_t L_1492 = ((int32_t)25);
		if ((((int32_t)L_1490) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1491, L_1492, sizeof(int32_t))))))
		{
			goto IL_384f;
		}
	}
	{
		int32_t L_1493 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1494 = (__this->___savemoneyi_41);
		NullCheck(L_1494);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1494, ((int32_t)26));
		int32_t L_1495 = ((int32_t)26);
		__this->___money2_33 = ((int32_t)((int32_t)L_1493-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1494, L_1495, sizeof(int32_t)))));
		int32_t L_1496 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_1496-(int32_t)1));
		int32_t L_1497 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_1497+(int32_t)((int32_t)100000000)));
		int32_t L_1498 = (__this->___money_32);
		Int32U5BU5D_t15* L_1499 = (__this->___savemoneyi_41);
		NullCheck(L_1499);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1499, ((int32_t)25));
		int32_t L_1500 = ((int32_t)25);
		__this->___money_32 = ((int32_t)((int32_t)L_1498-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1499, L_1500, sizeof(int32_t)))));
		int32_t L_1501 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1502 = (__this->___mapsyuueki_42);
		NullCheck(L_1502);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1502, ((int32_t)13));
		int32_t L_1503 = ((int32_t)13);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1501+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1502, L_1503, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1504 = (__this->___savemoneyi_41);
		NullCheck(L_1504);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1504, ((int32_t)25));
		int32_t* L_1505 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1504, ((int32_t)25), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1506 = (__this->___savemoneyi_41);
		NullCheck(L_1506);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1506, ((int32_t)25));
		int32_t L_1507 = ((int32_t)25);
		*((int32_t*)(L_1505)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1505))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1506, L_1507, sizeof(int32_t))))))*(double)(0.5))))))));
		Int32U5BU5D_t15* L_1508 = (__this->___maplv_27);
		NullCheck(L_1508);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1508, ((int32_t)13));
		int32_t L_1509 = ((int32_t)13);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1508, L_1509, sizeof(int32_t))))
		{
			goto IL_37d5;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)41);
	}

IL_37d5:
	{
		Int32U5BU5D_t15* L_1510 = (__this->___maplv_27);
		NullCheck(L_1510);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1510, ((int32_t)13));
		int32_t* L_1511 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1510, ((int32_t)13), sizeof(int32_t)));
		*((int32_t*)(L_1511)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1511))+(int32_t)1));
		Int32U5BU5D_t15* L_1512 = (__this->___savemoneyi_41);
		NullCheck(L_1512);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1512, ((int32_t)25));
		int32_t L_1513 = ((int32_t)25);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1512, L_1513, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3822;
		}
	}
	{
		Int32U5BU5D_t15* L_1514 = (__this->___savemoneyi_41);
		NullCheck(L_1514);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1514, ((int32_t)26));
		int32_t* L_1515 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1514, ((int32_t)26), sizeof(int32_t)));
		*((int32_t*)(L_1515)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1515))+(int32_t)1));
		Int32U5BU5D_t15* L_1516 = (__this->___savemoneyi_41);
		NullCheck(L_1516);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1516, ((int32_t)25));
		int32_t* L_1517 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1516, ((int32_t)25), sizeof(int32_t)));
		*((int32_t*)(L_1517)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1517))-(int32_t)((int32_t)100000000)));
	}

IL_3822:
	{
		Int32U5BU5D_t15* L_1518 = (__this->___savemoneyi_41);
		NullCheck(L_1518);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1518, ((int32_t)26));
		int32_t L_1519 = ((int32_t)26);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1518, L_1519, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3843;
		}
	}
	{
		Int32U5BU5D_t15* L_1520 = (__this->___savemoneyi_41);
		NullCheck(L_1520);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1520, ((int32_t)26));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1520, ((int32_t)26), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_3843:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_384f:
	{
		int32_t L_1521 = (__this->___money2_33);
		if ((((int32_t)L_1521) <= ((int32_t)0)))
		{
			goto IL_396b;
		}
	}
	{
		Int32U5BU5D_t15* L_1522 = (__this->___savemoneyi_41);
		NullCheck(L_1522);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1522, ((int32_t)26));
		int32_t L_1523 = ((int32_t)26);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1522, L_1523, sizeof(int32_t))))
		{
			goto IL_396b;
		}
	}
	{
		int32_t L_1524 = (__this->___money2_33);
		__this->___money2_33 = ((int32_t)((int32_t)L_1524-(int32_t)1));
		int32_t L_1525 = (__this->___money_32);
		__this->___money_32 = ((int32_t)((int32_t)L_1525+(int32_t)((int32_t)100000000)));
		int32_t L_1526 = (__this->___money_32);
		Int32U5BU5D_t15* L_1527 = (__this->___savemoneyi_41);
		NullCheck(L_1527);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1527, ((int32_t)25));
		int32_t L_1528 = ((int32_t)25);
		__this->___money_32 = ((int32_t)((int32_t)L_1526-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1527, L_1528, sizeof(int32_t)))));
		int32_t L_1529 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1530 = (__this->___mapsyuueki_42);
		NullCheck(L_1530);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1530, ((int32_t)13));
		int32_t L_1531 = ((int32_t)13);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1529+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1530, L_1531, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1532 = (__this->___savemoneyi_41);
		NullCheck(L_1532);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1532, ((int32_t)25));
		int32_t* L_1533 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1532, ((int32_t)25), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1534 = (__this->___savemoneyi_41);
		NullCheck(L_1534);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1534, ((int32_t)25));
		int32_t L_1535 = ((int32_t)25);
		*((int32_t*)(L_1533)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1533))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1534, L_1535, sizeof(int32_t))))))*(double)(0.5))))))));
		Int32U5BU5D_t15* L_1536 = (__this->___maplv_27);
		NullCheck(L_1536);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1536, ((int32_t)13));
		int32_t L_1537 = ((int32_t)13);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1536, L_1537, sizeof(int32_t))))
		{
			goto IL_38f1;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)41);
	}

IL_38f1:
	{
		Int32U5BU5D_t15* L_1538 = (__this->___maplv_27);
		NullCheck(L_1538);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1538, ((int32_t)13));
		int32_t* L_1539 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1538, ((int32_t)13), sizeof(int32_t)));
		*((int32_t*)(L_1539)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1539))+(int32_t)1));
		Int32U5BU5D_t15* L_1540 = (__this->___savemoneyi_41);
		NullCheck(L_1540);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1540, ((int32_t)25));
		int32_t L_1541 = ((int32_t)25);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1540, L_1541, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_393e;
		}
	}
	{
		Int32U5BU5D_t15* L_1542 = (__this->___savemoneyi_41);
		NullCheck(L_1542);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1542, ((int32_t)26));
		int32_t* L_1543 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1542, ((int32_t)26), sizeof(int32_t)));
		*((int32_t*)(L_1543)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1543))+(int32_t)1));
		Int32U5BU5D_t15* L_1544 = (__this->___savemoneyi_41);
		NullCheck(L_1544);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1544, ((int32_t)25));
		int32_t* L_1545 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1544, ((int32_t)25), sizeof(int32_t)));
		*((int32_t*)(L_1545)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1545))-(int32_t)((int32_t)100000000)));
	}

IL_393e:
	{
		Int32U5BU5D_t15* L_1546 = (__this->___savemoneyi_41);
		NullCheck(L_1546);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1546, ((int32_t)26));
		int32_t L_1547 = ((int32_t)26);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1546, L_1547, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_395f;
		}
	}
	{
		Int32U5BU5D_t15* L_1548 = (__this->___savemoneyi_41);
		NullCheck(L_1548);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1548, ((int32_t)26));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1548, ((int32_t)26), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_395f:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_396b:
	{
		int32_t L_1549 = (__this->___money2_33);
		if (L_1549)
		{
			goto IL_3a7a;
		}
	}
	{
		Int32U5BU5D_t15* L_1550 = (__this->___savemoneyi_41);
		NullCheck(L_1550);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1550, ((int32_t)26));
		int32_t L_1551 = ((int32_t)26);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1550, L_1551, sizeof(int32_t))))
		{
			goto IL_3a7a;
		}
	}
	{
		int32_t L_1552 = (__this->___money_32);
		Int32U5BU5D_t15* L_1553 = (__this->___savemoneyi_41);
		NullCheck(L_1553);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1553, ((int32_t)25));
		int32_t L_1554 = ((int32_t)25);
		if ((((int32_t)L_1552) <= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1553, L_1554, sizeof(int32_t))))))
		{
			goto IL_3a7a;
		}
	}
	{
		int32_t L_1555 = (__this->___money_32);
		Int32U5BU5D_t15* L_1556 = (__this->___savemoneyi_41);
		NullCheck(L_1556);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1556, ((int32_t)26));
		int32_t L_1557 = ((int32_t)26);
		__this->___money_32 = ((int32_t)((int32_t)L_1555-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1556, L_1557, sizeof(int32_t)))));
		int32_t L_1558 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1559 = (__this->___mapsyuueki_42);
		NullCheck(L_1559);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1559, ((int32_t)13));
		int32_t L_1560 = ((int32_t)13);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1558+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1559, L_1560, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1561 = (__this->___savemoneyi_41);
		NullCheck(L_1561);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1561, ((int32_t)25));
		int32_t* L_1562 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1561, ((int32_t)25), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1563 = (__this->___savemoneyi_41);
		NullCheck(L_1563);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1563, ((int32_t)25));
		int32_t L_1564 = ((int32_t)25);
		*((int32_t*)(L_1562)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1562))+(int32_t)(((int32_t)((int32_t)((double)((double)(((double)((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1563, L_1564, sizeof(int32_t))))))*(double)(0.5))))))));
		Int32U5BU5D_t15* L_1565 = (__this->___maplv_27);
		NullCheck(L_1565);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1565, ((int32_t)13));
		int32_t L_1566 = ((int32_t)13);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1565, L_1566, sizeof(int32_t))))
		{
			goto IL_3a00;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)41);
	}

IL_3a00:
	{
		Int32U5BU5D_t15* L_1567 = (__this->___maplv_27);
		NullCheck(L_1567);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1567, ((int32_t)13));
		int32_t* L_1568 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1567, ((int32_t)13), sizeof(int32_t)));
		*((int32_t*)(L_1568)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1568))+(int32_t)1));
		Int32U5BU5D_t15* L_1569 = (__this->___savemoneyi_41);
		NullCheck(L_1569);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1569, ((int32_t)25));
		int32_t L_1570 = ((int32_t)25);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1569, L_1570, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3a4d;
		}
	}
	{
		Int32U5BU5D_t15* L_1571 = (__this->___savemoneyi_41);
		NullCheck(L_1571);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1571, ((int32_t)26));
		int32_t* L_1572 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1571, ((int32_t)26), sizeof(int32_t)));
		*((int32_t*)(L_1572)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1572))+(int32_t)1));
		Int32U5BU5D_t15* L_1573 = (__this->___savemoneyi_41);
		NullCheck(L_1573);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1573, ((int32_t)25));
		int32_t* L_1574 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1573, ((int32_t)25), sizeof(int32_t)));
		*((int32_t*)(L_1574)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1574))-(int32_t)((int32_t)100000000)));
	}

IL_3a4d:
	{
		Int32U5BU5D_t15* L_1575 = (__this->___savemoneyi_41);
		NullCheck(L_1575);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1575, ((int32_t)26));
		int32_t L_1576 = ((int32_t)26);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1575, L_1576, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3a6e;
		}
	}
	{
		Int32U5BU5D_t15* L_1577 = (__this->___savemoneyi_41);
		NullCheck(L_1577);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1577, ((int32_t)26));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1577, ((int32_t)26), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_3a6e:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_3a7a:
	{
		V_2 = 0;
		goto IL_3ad1;
	}

IL_3a81:
	{
		float L_1578 = (__this->___sw_9);
		int32_t L_1579 = V_2;
		float L_1580 = (__this->___sh_10);
		float L_1581 = (__this->___sw_9);
		float L_1582 = (__this->___sh_10);
		Rect_t19  L_1583 = {0};
		Rect__ctor_m35(&L_1583, ((float)((float)(605.0f)*(float)L_1578)), ((float)((float)(((float)((float)((int32_t)((int32_t)7+(int32_t)((int32_t)((int32_t)L_1579*(int32_t)((int32_t)58))))))))*(float)L_1580)), ((float)((float)(55.0f)*(float)L_1581)), ((float)((float)(55.0f)*(float)L_1582)), /*hidden argument*/NULL);
		TextureU5BU5D_t11* L_1584 = (__this->___buttonTexture_15);
		int32_t L_1585 = V_2;
		NullCheck(L_1584);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1584, ((int32_t)((int32_t)L_1585+(int32_t)((int32_t)14))));
		int32_t L_1586 = ((int32_t)((int32_t)L_1585+(int32_t)((int32_t)14)));
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_1587 = GUI_Button_m79(NULL /*static, unused*/, L_1583, (*(Texture_t28 **)(Texture_t28 **)SZArrayLdElema(L_1584, L_1586, sizeof(Texture_t28 *))), /*hidden argument*/NULL);
		if (!L_1587)
		{
			goto IL_3acd;
		}
	}

IL_3acd:
	{
		int32_t L_1588 = V_2;
		V_2 = ((int32_t)((int32_t)L_1588+(int32_t)1));
	}

IL_3ad1:
	{
		int32_t L_1589 = V_2;
		if ((((int32_t)L_1589) < ((int32_t)8)))
		{
			goto IL_3a81;
		}
	}
	{
		float L_1590 = (__this->___sw_9);
		float L_1591 = (__this->___sh_10);
		float L_1592 = (__this->___sw_9);
		float L_1593 = (__this->___sh_10);
		Rect_t19  L_1594 = {0};
		Rect__ctor_m35(&L_1594, ((float)((float)(660.0f)*(float)L_1590)), ((float)((float)(7.0f)*(float)L_1591)), ((float)((float)(215.0f)*(float)L_1592)), ((float)((float)(55.0f)*(float)L_1593)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_1595 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 5));
		NullCheck(L_1595);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1595, 0);
		ArrayElementTypeCheck (L_1595, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_1595, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_1596 = L_1595;
		StringU5BU5D_t14* L_1597 = (__this->___savemoneys_40);
		NullCheck(L_1597);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1597, ((int32_t)27));
		int32_t L_1598 = ((int32_t)27);
		NullCheck(L_1596);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1596, 1);
		ArrayElementTypeCheck (L_1596, (*(String_t**)(String_t**)SZArrayLdElema(L_1597, L_1598, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1596, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1597, L_1598, sizeof(String_t*)));
		StringU5BU5D_t14* L_1599 = L_1596;
		NullCheck(L_1599);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1599, 2);
		ArrayElementTypeCheck (L_1599, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_1599, 2, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_1600 = L_1599;
		Int32U5BU5D_t15* L_1601 = (__this->___mapsyuueki_42);
		NullCheck(L_1601);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1601, ((int32_t)14));
		String_t* L_1602 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_1601, ((int32_t)14), sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_1600);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1600, 3);
		ArrayElementTypeCheck (L_1600, L_1602);
		*((String_t**)(String_t**)SZArrayLdElema(L_1600, 3, sizeof(String_t*))) = (String_t*)L_1602;
		StringU5BU5D_t14* L_1603 = L_1600;
		NullCheck(L_1603);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1603, 4);
		ArrayElementTypeCheck (L_1603, _stringLiteral266);
		*((String_t**)(String_t**)SZArrayLdElema(L_1603, 4, sizeof(String_t*))) = (String_t*)_stringLiteral266;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1604 = String_Concat_m65(NULL /*static, unused*/, L_1603, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_1605 = GUI_Button_m75(NULL /*static, unused*/, L_1594, L_1604, /*hidden argument*/NULL);
		if (!L_1605)
		{
			goto IL_3c16;
		}
	}
	{
		int32_t L_1606 = (__this->___money2_33);
		if ((((int32_t)L_1606) <= ((int32_t)0)))
		{
			goto IL_3c16;
		}
	}
	{
		int32_t L_1607 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1608 = (__this->___savemoneyi_41);
		NullCheck(L_1608);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1608, ((int32_t)27));
		int32_t L_1609 = ((int32_t)27);
		if ((((int32_t)L_1607) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1608, L_1609, sizeof(int32_t))))))
		{
			goto IL_3c16;
		}
	}
	{
		int32_t L_1610 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1611 = (__this->___savemoneyi_41);
		NullCheck(L_1611);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1611, ((int32_t)27));
		int32_t L_1612 = ((int32_t)27);
		__this->___money2_33 = ((int32_t)((int32_t)L_1610-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1611, L_1612, sizeof(int32_t)))));
		int32_t L_1613 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1614 = (__this->___mapsyuueki_42);
		NullCheck(L_1614);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1614, ((int32_t)14));
		int32_t L_1615 = ((int32_t)14);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1613+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1614, L_1615, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1616 = (__this->___savemoneyi_41);
		NullCheck(L_1616);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1616, ((int32_t)27));
		int32_t* L_1617 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1616, ((int32_t)27), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1618 = (__this->___savemoneyi_41);
		NullCheck(L_1618);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1618, ((int32_t)27));
		int32_t L_1619 = ((int32_t)27);
		*((int32_t*)(L_1617)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1617))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1618, L_1619, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1620 = (__this->___maplv_27);
		NullCheck(L_1620);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1620, ((int32_t)14));
		int32_t L_1621 = ((int32_t)14);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1620, L_1621, sizeof(int32_t))))
		{
			goto IL_3bd7;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)42);
	}

IL_3bd7:
	{
		Int32U5BU5D_t15* L_1622 = (__this->___maplv_27);
		NullCheck(L_1622);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1622, ((int32_t)14));
		int32_t* L_1623 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1622, ((int32_t)14), sizeof(int32_t)));
		*((int32_t*)(L_1623)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1623))+(int32_t)1));
		Int32U5BU5D_t15* L_1624 = (__this->___savemoneyi_41);
		NullCheck(L_1624);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1624, ((int32_t)27));
		int32_t L_1625 = ((int32_t)27);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1624, L_1625, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3c0a;
		}
	}
	{
		Int32U5BU5D_t15* L_1626 = (__this->___savemoneyi_41);
		NullCheck(L_1626);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1626, ((int32_t)27));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1626, ((int32_t)27), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_3c0a:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_3c16:
	{
		float L_1627 = (__this->___sw_9);
		float L_1628 = (__this->___sh_10);
		float L_1629 = (__this->___sw_9);
		float L_1630 = (__this->___sh_10);
		Rect_t19  L_1631 = {0};
		Rect__ctor_m35(&L_1631, ((float)((float)(660.0f)*(float)L_1627)), ((float)((float)(65.0f)*(float)L_1628)), ((float)((float)(215.0f)*(float)L_1629)), ((float)((float)(55.0f)*(float)L_1630)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_1632 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 5));
		NullCheck(L_1632);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1632, 0);
		ArrayElementTypeCheck (L_1632, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_1632, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_1633 = L_1632;
		StringU5BU5D_t14* L_1634 = (__this->___savemoneys_40);
		NullCheck(L_1634);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1634, ((int32_t)28));
		int32_t L_1635 = ((int32_t)28);
		NullCheck(L_1633);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1633, 1);
		ArrayElementTypeCheck (L_1633, (*(String_t**)(String_t**)SZArrayLdElema(L_1634, L_1635, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1633, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1634, L_1635, sizeof(String_t*)));
		StringU5BU5D_t14* L_1636 = L_1633;
		NullCheck(L_1636);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1636, 2);
		ArrayElementTypeCheck (L_1636, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_1636, 2, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_1637 = L_1636;
		Int32U5BU5D_t15* L_1638 = (__this->___mapsyuueki_42);
		NullCheck(L_1638);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1638, ((int32_t)15));
		String_t* L_1639 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_1638, ((int32_t)15), sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_1637);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1637, 3);
		ArrayElementTypeCheck (L_1637, L_1639);
		*((String_t**)(String_t**)SZArrayLdElema(L_1637, 3, sizeof(String_t*))) = (String_t*)L_1639;
		StringU5BU5D_t14* L_1640 = L_1637;
		NullCheck(L_1640);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1640, 4);
		ArrayElementTypeCheck (L_1640, _stringLiteral267);
		*((String_t**)(String_t**)SZArrayLdElema(L_1640, 4, sizeof(String_t*))) = (String_t*)_stringLiteral267;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1641 = String_Concat_m65(NULL /*static, unused*/, L_1640, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_1642 = GUI_Button_m75(NULL /*static, unused*/, L_1631, L_1641, /*hidden argument*/NULL);
		if (!L_1642)
		{
			goto IL_3d54;
		}
	}
	{
		int32_t L_1643 = (__this->___money2_33);
		if ((((int32_t)L_1643) <= ((int32_t)0)))
		{
			goto IL_3d54;
		}
	}
	{
		int32_t L_1644 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1645 = (__this->___savemoneyi_41);
		NullCheck(L_1645);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1645, ((int32_t)28));
		int32_t L_1646 = ((int32_t)28);
		if ((((int32_t)L_1644) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1645, L_1646, sizeof(int32_t))))))
		{
			goto IL_3d54;
		}
	}
	{
		int32_t L_1647 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1648 = (__this->___savemoneyi_41);
		NullCheck(L_1648);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1648, ((int32_t)28));
		int32_t L_1649 = ((int32_t)28);
		__this->___money2_33 = ((int32_t)((int32_t)L_1647-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1648, L_1649, sizeof(int32_t)))));
		int32_t L_1650 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1651 = (__this->___mapsyuueki_42);
		NullCheck(L_1651);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1651, ((int32_t)15));
		int32_t L_1652 = ((int32_t)15);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1650+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1651, L_1652, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1653 = (__this->___savemoneyi_41);
		NullCheck(L_1653);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1653, ((int32_t)28));
		int32_t* L_1654 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1653, ((int32_t)28), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1655 = (__this->___savemoneyi_41);
		NullCheck(L_1655);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1655, ((int32_t)28));
		int32_t L_1656 = ((int32_t)28);
		*((int32_t*)(L_1654)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1654))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1655, L_1656, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1657 = (__this->___maplv_27);
		NullCheck(L_1657);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1657, ((int32_t)15));
		int32_t L_1658 = ((int32_t)15);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1657, L_1658, sizeof(int32_t))))
		{
			goto IL_3d15;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)43);
	}

IL_3d15:
	{
		Int32U5BU5D_t15* L_1659 = (__this->___maplv_27);
		NullCheck(L_1659);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1659, ((int32_t)15));
		int32_t* L_1660 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1659, ((int32_t)15), sizeof(int32_t)));
		*((int32_t*)(L_1660)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1660))+(int32_t)1));
		Int32U5BU5D_t15* L_1661 = (__this->___savemoneyi_41);
		NullCheck(L_1661);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1661, ((int32_t)28));
		int32_t L_1662 = ((int32_t)28);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1661, L_1662, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3d48;
		}
	}
	{
		Int32U5BU5D_t15* L_1663 = (__this->___savemoneyi_41);
		NullCheck(L_1663);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1663, ((int32_t)28));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1663, ((int32_t)28), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_3d48:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_3d54:
	{
		float L_1664 = (__this->___sw_9);
		float L_1665 = (__this->___sh_10);
		float L_1666 = (__this->___sw_9);
		float L_1667 = (__this->___sh_10);
		Rect_t19  L_1668 = {0};
		Rect__ctor_m35(&L_1668, ((float)((float)(660.0f)*(float)L_1664)), ((float)((float)(123.0f)*(float)L_1665)), ((float)((float)(215.0f)*(float)L_1666)), ((float)((float)(55.0f)*(float)L_1667)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_1669 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 5));
		NullCheck(L_1669);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1669, 0);
		ArrayElementTypeCheck (L_1669, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_1669, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_1670 = L_1669;
		StringU5BU5D_t14* L_1671 = (__this->___savemoneys_40);
		NullCheck(L_1671);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1671, ((int32_t)29));
		int32_t L_1672 = ((int32_t)29);
		NullCheck(L_1670);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1670, 1);
		ArrayElementTypeCheck (L_1670, (*(String_t**)(String_t**)SZArrayLdElema(L_1671, L_1672, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1670, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1671, L_1672, sizeof(String_t*)));
		StringU5BU5D_t14* L_1673 = L_1670;
		NullCheck(L_1673);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1673, 2);
		ArrayElementTypeCheck (L_1673, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_1673, 2, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_1674 = L_1673;
		Int32U5BU5D_t15* L_1675 = (__this->___mapsyuueki_42);
		NullCheck(L_1675);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1675, ((int32_t)16));
		String_t* L_1676 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_1675, ((int32_t)16), sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_1674);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1674, 3);
		ArrayElementTypeCheck (L_1674, L_1676);
		*((String_t**)(String_t**)SZArrayLdElema(L_1674, 3, sizeof(String_t*))) = (String_t*)L_1676;
		StringU5BU5D_t14* L_1677 = L_1674;
		NullCheck(L_1677);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1677, 4);
		ArrayElementTypeCheck (L_1677, _stringLiteral268);
		*((String_t**)(String_t**)SZArrayLdElema(L_1677, 4, sizeof(String_t*))) = (String_t*)_stringLiteral268;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1678 = String_Concat_m65(NULL /*static, unused*/, L_1677, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_1679 = GUI_Button_m75(NULL /*static, unused*/, L_1668, L_1678, /*hidden argument*/NULL);
		if (!L_1679)
		{
			goto IL_3e92;
		}
	}
	{
		int32_t L_1680 = (__this->___money2_33);
		if ((((int32_t)L_1680) <= ((int32_t)0)))
		{
			goto IL_3e92;
		}
	}
	{
		int32_t L_1681 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1682 = (__this->___savemoneyi_41);
		NullCheck(L_1682);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1682, ((int32_t)29));
		int32_t L_1683 = ((int32_t)29);
		if ((((int32_t)L_1681) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1682, L_1683, sizeof(int32_t))))))
		{
			goto IL_3e92;
		}
	}
	{
		int32_t L_1684 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1685 = (__this->___savemoneyi_41);
		NullCheck(L_1685);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1685, ((int32_t)29));
		int32_t L_1686 = ((int32_t)29);
		__this->___money2_33 = ((int32_t)((int32_t)L_1684-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1685, L_1686, sizeof(int32_t)))));
		int32_t L_1687 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1688 = (__this->___mapsyuueki_42);
		NullCheck(L_1688);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1688, ((int32_t)16));
		int32_t L_1689 = ((int32_t)16);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1687+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1688, L_1689, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1690 = (__this->___savemoneyi_41);
		NullCheck(L_1690);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1690, ((int32_t)29));
		int32_t* L_1691 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1690, ((int32_t)29), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1692 = (__this->___savemoneyi_41);
		NullCheck(L_1692);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1692, ((int32_t)29));
		int32_t L_1693 = ((int32_t)29);
		*((int32_t*)(L_1691)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1691))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1692, L_1693, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1694 = (__this->___maplv_27);
		NullCheck(L_1694);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1694, ((int32_t)16));
		int32_t L_1695 = ((int32_t)16);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1694, L_1695, sizeof(int32_t))))
		{
			goto IL_3e53;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)44);
	}

IL_3e53:
	{
		Int32U5BU5D_t15* L_1696 = (__this->___maplv_27);
		NullCheck(L_1696);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1696, ((int32_t)16));
		int32_t* L_1697 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1696, ((int32_t)16), sizeof(int32_t)));
		*((int32_t*)(L_1697)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1697))+(int32_t)1));
		Int32U5BU5D_t15* L_1698 = (__this->___savemoneyi_41);
		NullCheck(L_1698);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1698, ((int32_t)29));
		int32_t L_1699 = ((int32_t)29);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1698, L_1699, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3e86;
		}
	}
	{
		Int32U5BU5D_t15* L_1700 = (__this->___savemoneyi_41);
		NullCheck(L_1700);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1700, ((int32_t)29));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1700, ((int32_t)29), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_3e86:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_3e92:
	{
		float L_1701 = (__this->___sw_9);
		float L_1702 = (__this->___sh_10);
		float L_1703 = (__this->___sw_9);
		float L_1704 = (__this->___sh_10);
		Rect_t19  L_1705 = {0};
		Rect__ctor_m35(&L_1705, ((float)((float)(660.0f)*(float)L_1701)), ((float)((float)(181.0f)*(float)L_1702)), ((float)((float)(215.0f)*(float)L_1703)), ((float)((float)(55.0f)*(float)L_1704)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_1706 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 5));
		NullCheck(L_1706);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1706, 0);
		ArrayElementTypeCheck (L_1706, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_1706, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_1707 = L_1706;
		StringU5BU5D_t14* L_1708 = (__this->___savemoneys_40);
		NullCheck(L_1708);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1708, ((int32_t)30));
		int32_t L_1709 = ((int32_t)30);
		NullCheck(L_1707);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1707, 1);
		ArrayElementTypeCheck (L_1707, (*(String_t**)(String_t**)SZArrayLdElema(L_1708, L_1709, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1707, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1708, L_1709, sizeof(String_t*)));
		StringU5BU5D_t14* L_1710 = L_1707;
		NullCheck(L_1710);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1710, 2);
		ArrayElementTypeCheck (L_1710, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_1710, 2, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_1711 = L_1710;
		Int32U5BU5D_t15* L_1712 = (__this->___mapsyuueki_42);
		NullCheck(L_1712);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1712, ((int32_t)17));
		String_t* L_1713 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_1712, ((int32_t)17), sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_1711);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1711, 3);
		ArrayElementTypeCheck (L_1711, L_1713);
		*((String_t**)(String_t**)SZArrayLdElema(L_1711, 3, sizeof(String_t*))) = (String_t*)L_1713;
		StringU5BU5D_t14* L_1714 = L_1711;
		NullCheck(L_1714);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1714, 4);
		ArrayElementTypeCheck (L_1714, _stringLiteral269);
		*((String_t**)(String_t**)SZArrayLdElema(L_1714, 4, sizeof(String_t*))) = (String_t*)_stringLiteral269;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1715 = String_Concat_m65(NULL /*static, unused*/, L_1714, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_1716 = GUI_Button_m75(NULL /*static, unused*/, L_1705, L_1715, /*hidden argument*/NULL);
		if (!L_1716)
		{
			goto IL_3fd0;
		}
	}
	{
		int32_t L_1717 = (__this->___money2_33);
		if ((((int32_t)L_1717) <= ((int32_t)0)))
		{
			goto IL_3fd0;
		}
	}
	{
		int32_t L_1718 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1719 = (__this->___savemoneyi_41);
		NullCheck(L_1719);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1719, ((int32_t)30));
		int32_t L_1720 = ((int32_t)30);
		if ((((int32_t)L_1718) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1719, L_1720, sizeof(int32_t))))))
		{
			goto IL_3fd0;
		}
	}
	{
		int32_t L_1721 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1722 = (__this->___savemoneyi_41);
		NullCheck(L_1722);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1722, ((int32_t)30));
		int32_t L_1723 = ((int32_t)30);
		__this->___money2_33 = ((int32_t)((int32_t)L_1721-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1722, L_1723, sizeof(int32_t)))));
		int32_t L_1724 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1725 = (__this->___mapsyuueki_42);
		NullCheck(L_1725);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1725, ((int32_t)17));
		int32_t L_1726 = ((int32_t)17);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1724+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1725, L_1726, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1727 = (__this->___savemoneyi_41);
		NullCheck(L_1727);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1727, ((int32_t)30));
		int32_t* L_1728 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1727, ((int32_t)30), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1729 = (__this->___savemoneyi_41);
		NullCheck(L_1729);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1729, ((int32_t)30));
		int32_t L_1730 = ((int32_t)30);
		*((int32_t*)(L_1728)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1728))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1729, L_1730, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1731 = (__this->___maplv_27);
		NullCheck(L_1731);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1731, ((int32_t)17));
		int32_t L_1732 = ((int32_t)17);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1731, L_1732, sizeof(int32_t))))
		{
			goto IL_3f91;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)45);
	}

IL_3f91:
	{
		Int32U5BU5D_t15* L_1733 = (__this->___maplv_27);
		NullCheck(L_1733);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1733, ((int32_t)17));
		int32_t* L_1734 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1733, ((int32_t)17), sizeof(int32_t)));
		*((int32_t*)(L_1734)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1734))+(int32_t)1));
		Int32U5BU5D_t15* L_1735 = (__this->___savemoneyi_41);
		NullCheck(L_1735);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1735, ((int32_t)30));
		int32_t L_1736 = ((int32_t)30);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1735, L_1736, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_3fc4;
		}
	}
	{
		Int32U5BU5D_t15* L_1737 = (__this->___savemoneyi_41);
		NullCheck(L_1737);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1737, ((int32_t)30));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1737, ((int32_t)30), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_3fc4:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_3fd0:
	{
		float L_1738 = (__this->___sw_9);
		float L_1739 = (__this->___sh_10);
		float L_1740 = (__this->___sw_9);
		float L_1741 = (__this->___sh_10);
		Rect_t19  L_1742 = {0};
		Rect__ctor_m35(&L_1742, ((float)((float)(660.0f)*(float)L_1738)), ((float)((float)(239.0f)*(float)L_1739)), ((float)((float)(215.0f)*(float)L_1740)), ((float)((float)(55.0f)*(float)L_1741)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_1743 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 5));
		NullCheck(L_1743);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1743, 0);
		ArrayElementTypeCheck (L_1743, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_1743, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_1744 = L_1743;
		StringU5BU5D_t14* L_1745 = (__this->___savemoneys_40);
		NullCheck(L_1745);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1745, ((int32_t)31));
		int32_t L_1746 = ((int32_t)31);
		NullCheck(L_1744);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1744, 1);
		ArrayElementTypeCheck (L_1744, (*(String_t**)(String_t**)SZArrayLdElema(L_1745, L_1746, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1744, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1745, L_1746, sizeof(String_t*)));
		StringU5BU5D_t14* L_1747 = L_1744;
		NullCheck(L_1747);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1747, 2);
		ArrayElementTypeCheck (L_1747, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_1747, 2, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_1748 = L_1747;
		Int32U5BU5D_t15* L_1749 = (__this->___mapsyuueki_42);
		NullCheck(L_1749);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1749, ((int32_t)18));
		String_t* L_1750 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_1749, ((int32_t)18), sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_1748);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1748, 3);
		ArrayElementTypeCheck (L_1748, L_1750);
		*((String_t**)(String_t**)SZArrayLdElema(L_1748, 3, sizeof(String_t*))) = (String_t*)L_1750;
		StringU5BU5D_t14* L_1751 = L_1748;
		NullCheck(L_1751);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1751, 4);
		ArrayElementTypeCheck (L_1751, _stringLiteral270);
		*((String_t**)(String_t**)SZArrayLdElema(L_1751, 4, sizeof(String_t*))) = (String_t*)_stringLiteral270;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1752 = String_Concat_m65(NULL /*static, unused*/, L_1751, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_1753 = GUI_Button_m75(NULL /*static, unused*/, L_1742, L_1752, /*hidden argument*/NULL);
		if (!L_1753)
		{
			goto IL_410e;
		}
	}
	{
		int32_t L_1754 = (__this->___money2_33);
		if ((((int32_t)L_1754) <= ((int32_t)0)))
		{
			goto IL_410e;
		}
	}
	{
		int32_t L_1755 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1756 = (__this->___savemoneyi_41);
		NullCheck(L_1756);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1756, ((int32_t)31));
		int32_t L_1757 = ((int32_t)31);
		if ((((int32_t)L_1755) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1756, L_1757, sizeof(int32_t))))))
		{
			goto IL_410e;
		}
	}
	{
		int32_t L_1758 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1759 = (__this->___savemoneyi_41);
		NullCheck(L_1759);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1759, ((int32_t)31));
		int32_t L_1760 = ((int32_t)31);
		__this->___money2_33 = ((int32_t)((int32_t)L_1758-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1759, L_1760, sizeof(int32_t)))));
		int32_t L_1761 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1762 = (__this->___mapsyuueki_42);
		NullCheck(L_1762);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1762, ((int32_t)18));
		int32_t L_1763 = ((int32_t)18);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1761+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1762, L_1763, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1764 = (__this->___savemoneyi_41);
		NullCheck(L_1764);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1764, ((int32_t)31));
		int32_t* L_1765 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1764, ((int32_t)31), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1766 = (__this->___savemoneyi_41);
		NullCheck(L_1766);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1766, ((int32_t)31));
		int32_t L_1767 = ((int32_t)31);
		*((int32_t*)(L_1765)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1765))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1766, L_1767, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1768 = (__this->___maplv_27);
		NullCheck(L_1768);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1768, ((int32_t)18));
		int32_t L_1769 = ((int32_t)18);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1768, L_1769, sizeof(int32_t))))
		{
			goto IL_40cf;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)46);
	}

IL_40cf:
	{
		Int32U5BU5D_t15* L_1770 = (__this->___maplv_27);
		NullCheck(L_1770);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1770, ((int32_t)18));
		int32_t* L_1771 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1770, ((int32_t)18), sizeof(int32_t)));
		*((int32_t*)(L_1771)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1771))+(int32_t)1));
		Int32U5BU5D_t15* L_1772 = (__this->___savemoneyi_41);
		NullCheck(L_1772);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1772, ((int32_t)31));
		int32_t L_1773 = ((int32_t)31);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1772, L_1773, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_4102;
		}
	}
	{
		Int32U5BU5D_t15* L_1774 = (__this->___savemoneyi_41);
		NullCheck(L_1774);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1774, ((int32_t)31));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1774, ((int32_t)31), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_4102:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_410e:
	{
		float L_1775 = (__this->___sw_9);
		float L_1776 = (__this->___sh_10);
		float L_1777 = (__this->___sw_9);
		float L_1778 = (__this->___sh_10);
		Rect_t19  L_1779 = {0};
		Rect__ctor_m35(&L_1779, ((float)((float)(660.0f)*(float)L_1775)), ((float)((float)(297.0f)*(float)L_1776)), ((float)((float)(215.0f)*(float)L_1777)), ((float)((float)(55.0f)*(float)L_1778)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_1780 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 5));
		NullCheck(L_1780);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1780, 0);
		ArrayElementTypeCheck (L_1780, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_1780, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_1781 = L_1780;
		StringU5BU5D_t14* L_1782 = (__this->___savemoneys_40);
		NullCheck(L_1782);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1782, ((int32_t)32));
		int32_t L_1783 = ((int32_t)32);
		NullCheck(L_1781);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1781, 1);
		ArrayElementTypeCheck (L_1781, (*(String_t**)(String_t**)SZArrayLdElema(L_1782, L_1783, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1781, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1782, L_1783, sizeof(String_t*)));
		StringU5BU5D_t14* L_1784 = L_1781;
		NullCheck(L_1784);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1784, 2);
		ArrayElementTypeCheck (L_1784, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_1784, 2, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_1785 = L_1784;
		Int32U5BU5D_t15* L_1786 = (__this->___mapsyuueki_42);
		NullCheck(L_1786);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1786, ((int32_t)19));
		String_t* L_1787 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_1786, ((int32_t)19), sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_1785);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1785, 3);
		ArrayElementTypeCheck (L_1785, L_1787);
		*((String_t**)(String_t**)SZArrayLdElema(L_1785, 3, sizeof(String_t*))) = (String_t*)L_1787;
		StringU5BU5D_t14* L_1788 = L_1785;
		NullCheck(L_1788);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1788, 4);
		ArrayElementTypeCheck (L_1788, _stringLiteral271);
		*((String_t**)(String_t**)SZArrayLdElema(L_1788, 4, sizeof(String_t*))) = (String_t*)_stringLiteral271;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1789 = String_Concat_m65(NULL /*static, unused*/, L_1788, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_1790 = GUI_Button_m75(NULL /*static, unused*/, L_1779, L_1789, /*hidden argument*/NULL);
		if (!L_1790)
		{
			goto IL_424c;
		}
	}
	{
		int32_t L_1791 = (__this->___money2_33);
		if ((((int32_t)L_1791) <= ((int32_t)0)))
		{
			goto IL_424c;
		}
	}
	{
		int32_t L_1792 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1793 = (__this->___savemoneyi_41);
		NullCheck(L_1793);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1793, ((int32_t)32));
		int32_t L_1794 = ((int32_t)32);
		if ((((int32_t)L_1792) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1793, L_1794, sizeof(int32_t))))))
		{
			goto IL_424c;
		}
	}
	{
		int32_t L_1795 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1796 = (__this->___savemoneyi_41);
		NullCheck(L_1796);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1796, ((int32_t)32));
		int32_t L_1797 = ((int32_t)32);
		__this->___money2_33 = ((int32_t)((int32_t)L_1795-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1796, L_1797, sizeof(int32_t)))));
		int32_t L_1798 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1799 = (__this->___mapsyuueki_42);
		NullCheck(L_1799);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1799, ((int32_t)19));
		int32_t L_1800 = ((int32_t)19);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1798+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1799, L_1800, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1801 = (__this->___savemoneyi_41);
		NullCheck(L_1801);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1801, ((int32_t)32));
		int32_t* L_1802 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1801, ((int32_t)32), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1803 = (__this->___savemoneyi_41);
		NullCheck(L_1803);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1803, ((int32_t)32));
		int32_t L_1804 = ((int32_t)32);
		*((int32_t*)(L_1802)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1802))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1803, L_1804, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1805 = (__this->___maplv_27);
		NullCheck(L_1805);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1805, ((int32_t)19));
		int32_t L_1806 = ((int32_t)19);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1805, L_1806, sizeof(int32_t))))
		{
			goto IL_420d;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)47);
	}

IL_420d:
	{
		Int32U5BU5D_t15* L_1807 = (__this->___maplv_27);
		NullCheck(L_1807);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1807, ((int32_t)19));
		int32_t* L_1808 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1807, ((int32_t)19), sizeof(int32_t)));
		*((int32_t*)(L_1808)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1808))+(int32_t)1));
		Int32U5BU5D_t15* L_1809 = (__this->___savemoneyi_41);
		NullCheck(L_1809);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1809, ((int32_t)32));
		int32_t L_1810 = ((int32_t)32);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1809, L_1810, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_4240;
		}
	}
	{
		Int32U5BU5D_t15* L_1811 = (__this->___savemoneyi_41);
		NullCheck(L_1811);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1811, ((int32_t)32));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1811, ((int32_t)32), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_4240:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_424c:
	{
		float L_1812 = (__this->___sw_9);
		float L_1813 = (__this->___sh_10);
		float L_1814 = (__this->___sw_9);
		float L_1815 = (__this->___sh_10);
		Rect_t19  L_1816 = {0};
		Rect__ctor_m35(&L_1816, ((float)((float)(660.0f)*(float)L_1812)), ((float)((float)(355.0f)*(float)L_1813)), ((float)((float)(215.0f)*(float)L_1814)), ((float)((float)(55.0f)*(float)L_1815)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_1817 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 5));
		NullCheck(L_1817);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1817, 0);
		ArrayElementTypeCheck (L_1817, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_1817, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_1818 = L_1817;
		StringU5BU5D_t14* L_1819 = (__this->___savemoneys_40);
		NullCheck(L_1819);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1819, ((int32_t)33));
		int32_t L_1820 = ((int32_t)33);
		NullCheck(L_1818);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1818, 1);
		ArrayElementTypeCheck (L_1818, (*(String_t**)(String_t**)SZArrayLdElema(L_1819, L_1820, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1818, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1819, L_1820, sizeof(String_t*)));
		StringU5BU5D_t14* L_1821 = L_1818;
		NullCheck(L_1821);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1821, 2);
		ArrayElementTypeCheck (L_1821, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_1821, 2, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_1822 = L_1821;
		Int32U5BU5D_t15* L_1823 = (__this->___mapsyuueki_42);
		NullCheck(L_1823);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1823, ((int32_t)20));
		String_t* L_1824 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_1823, ((int32_t)20), sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_1822);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1822, 3);
		ArrayElementTypeCheck (L_1822, L_1824);
		*((String_t**)(String_t**)SZArrayLdElema(L_1822, 3, sizeof(String_t*))) = (String_t*)L_1824;
		StringU5BU5D_t14* L_1825 = L_1822;
		NullCheck(L_1825);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1825, 4);
		ArrayElementTypeCheck (L_1825, _stringLiteral272);
		*((String_t**)(String_t**)SZArrayLdElema(L_1825, 4, sizeof(String_t*))) = (String_t*)_stringLiteral272;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1826 = String_Concat_m65(NULL /*static, unused*/, L_1825, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_1827 = GUI_Button_m75(NULL /*static, unused*/, L_1816, L_1826, /*hidden argument*/NULL);
		if (!L_1827)
		{
			goto IL_438a;
		}
	}
	{
		int32_t L_1828 = (__this->___money2_33);
		if ((((int32_t)L_1828) <= ((int32_t)0)))
		{
			goto IL_438a;
		}
	}
	{
		int32_t L_1829 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1830 = (__this->___savemoneyi_41);
		NullCheck(L_1830);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1830, ((int32_t)33));
		int32_t L_1831 = ((int32_t)33);
		if ((((int32_t)L_1829) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1830, L_1831, sizeof(int32_t))))))
		{
			goto IL_438a;
		}
	}
	{
		int32_t L_1832 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1833 = (__this->___savemoneyi_41);
		NullCheck(L_1833);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1833, ((int32_t)33));
		int32_t L_1834 = ((int32_t)33);
		__this->___money2_33 = ((int32_t)((int32_t)L_1832-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1833, L_1834, sizeof(int32_t)))));
		int32_t L_1835 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1836 = (__this->___mapsyuueki_42);
		NullCheck(L_1836);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1836, ((int32_t)20));
		int32_t L_1837 = ((int32_t)20);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1835+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1836, L_1837, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1838 = (__this->___savemoneyi_41);
		NullCheck(L_1838);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1838, ((int32_t)33));
		int32_t* L_1839 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1838, ((int32_t)33), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1840 = (__this->___savemoneyi_41);
		NullCheck(L_1840);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1840, ((int32_t)33));
		int32_t L_1841 = ((int32_t)33);
		*((int32_t*)(L_1839)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1839))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1840, L_1841, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1842 = (__this->___maplv_27);
		NullCheck(L_1842);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1842, ((int32_t)20));
		int32_t L_1843 = ((int32_t)20);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_1842, L_1843, sizeof(int32_t))))
		{
			goto IL_434b;
		}
	}
	{
		__this->___TextDeg_23 = ((int32_t)48);
	}

IL_434b:
	{
		Int32U5BU5D_t15* L_1844 = (__this->___maplv_27);
		NullCheck(L_1844);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1844, ((int32_t)20));
		int32_t* L_1845 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1844, ((int32_t)20), sizeof(int32_t)));
		*((int32_t*)(L_1845)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1845))+(int32_t)1));
		Int32U5BU5D_t15* L_1846 = (__this->___savemoneyi_41);
		NullCheck(L_1846);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1846, ((int32_t)33));
		int32_t L_1847 = ((int32_t)33);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1846, L_1847, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_437e;
		}
	}
	{
		Int32U5BU5D_t15* L_1848 = (__this->___savemoneyi_41);
		NullCheck(L_1848);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1848, ((int32_t)33));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1848, ((int32_t)33), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_437e:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
	}

IL_438a:
	{
		float L_1849 = (__this->___sw_9);
		float L_1850 = (__this->___sh_10);
		float L_1851 = (__this->___sw_9);
		float L_1852 = (__this->___sh_10);
		Rect_t19  L_1853 = {0};
		Rect__ctor_m35(&L_1853, ((float)((float)(660.0f)*(float)L_1849)), ((float)((float)(413.0f)*(float)L_1850)), ((float)((float)(215.0f)*(float)L_1851)), ((float)((float)(55.0f)*(float)L_1852)), /*hidden argument*/NULL);
		StringU5BU5D_t14* L_1854 = ((StringU5BU5D_t14*)SZArrayNew(StringU5BU5D_t14_il2cpp_TypeInfo_var, 5));
		NullCheck(L_1854);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1854, 0);
		ArrayElementTypeCheck (L_1854, _stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_1854, 0, sizeof(String_t*))) = (String_t*)_stringLiteral251;
		StringU5BU5D_t14* L_1855 = L_1854;
		StringU5BU5D_t14* L_1856 = (__this->___savemoneys_40);
		NullCheck(L_1856);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1856, ((int32_t)34));
		int32_t L_1857 = ((int32_t)34);
		NullCheck(L_1855);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1855, 1);
		ArrayElementTypeCheck (L_1855, (*(String_t**)(String_t**)SZArrayLdElema(L_1856, L_1857, sizeof(String_t*))));
		*((String_t**)(String_t**)SZArrayLdElema(L_1855, 1, sizeof(String_t*))) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_1856, L_1857, sizeof(String_t*)));
		StringU5BU5D_t14* L_1858 = L_1855;
		NullCheck(L_1858);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1858, 2);
		ArrayElementTypeCheck (L_1858, _stringLiteral252);
		*((String_t**)(String_t**)SZArrayLdElema(L_1858, 2, sizeof(String_t*))) = (String_t*)_stringLiteral252;
		StringU5BU5D_t14* L_1859 = L_1858;
		Int32U5BU5D_t15* L_1860 = (__this->___mapsyuueki_42);
		NullCheck(L_1860);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1860, ((int32_t)21));
		String_t* L_1861 = Int32_ToString_m63(((int32_t*)(int32_t*)SZArrayLdElema(L_1860, ((int32_t)21), sizeof(int32_t))), /*hidden argument*/NULL);
		NullCheck(L_1859);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1859, 3);
		ArrayElementTypeCheck (L_1859, L_1861);
		*((String_t**)(String_t**)SZArrayLdElema(L_1859, 3, sizeof(String_t*))) = (String_t*)L_1861;
		StringU5BU5D_t14* L_1862 = L_1859;
		NullCheck(L_1862);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1862, 4);
		ArrayElementTypeCheck (L_1862, _stringLiteral273);
		*((String_t**)(String_t**)SZArrayLdElema(L_1862, 4, sizeof(String_t*))) = (String_t*)_stringLiteral273;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1863 = String_Concat_m65(NULL /*static, unused*/, L_1862, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t24_il2cpp_TypeInfo_var);
		bool L_1864 = GUI_Button_m75(NULL /*static, unused*/, L_1853, L_1863, /*hidden argument*/NULL);
		if (!L_1864)
		{
			goto IL_44c6;
		}
	}
	{
		int32_t L_1865 = (__this->___money2_33);
		if ((((int32_t)L_1865) <= ((int32_t)0)))
		{
			goto IL_44c6;
		}
	}
	{
		int32_t L_1866 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1867 = (__this->___savemoneyi_41);
		NullCheck(L_1867);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1867, ((int32_t)34));
		int32_t L_1868 = ((int32_t)34);
		if ((((int32_t)L_1866) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1867, L_1868, sizeof(int32_t))))))
		{
			goto IL_44c6;
		}
	}
	{
		int32_t L_1869 = (__this->___money2_33);
		Int32U5BU5D_t15* L_1870 = (__this->___savemoneyi_41);
		NullCheck(L_1870);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1870, ((int32_t)34));
		int32_t L_1871 = ((int32_t)34);
		__this->___money2_33 = ((int32_t)((int32_t)L_1869-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1870, L_1871, sizeof(int32_t)))));
		int32_t L_1872 = (__this->___syuueki_29);
		Int32U5BU5D_t15* L_1873 = (__this->___mapsyuueki_42);
		NullCheck(L_1873);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1873, ((int32_t)21));
		int32_t L_1874 = ((int32_t)21);
		__this->___syuueki_29 = ((int32_t)((int32_t)L_1872+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1873, L_1874, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1875 = (__this->___savemoneyi_41);
		NullCheck(L_1875);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1875, ((int32_t)34));
		int32_t* L_1876 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1875, ((int32_t)34), sizeof(int32_t)));
		Int32U5BU5D_t15* L_1877 = (__this->___savemoneyi_41);
		NullCheck(L_1877);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1877, ((int32_t)34));
		int32_t L_1878 = ((int32_t)34);
		*((int32_t*)(L_1876)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1876))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1877, L_1878, sizeof(int32_t)))));
		Int32U5BU5D_t15* L_1879 = (__this->___maplv_27);
		NullCheck(L_1879);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1879, ((int32_t)21));
		int32_t* L_1880 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1879, ((int32_t)21), sizeof(int32_t)));
		*((int32_t*)(L_1880)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1880))+(int32_t)1));
		Int32U5BU5D_t15* L_1881 = (__this->___savemoneyi_41);
		NullCheck(L_1881);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1881, ((int32_t)34));
		int32_t L_1882 = ((int32_t)34);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1881, L_1882, sizeof(int32_t)))) <= ((int32_t)((int32_t)99999999))))
		{
			goto IL_44a6;
		}
	}
	{
		Int32U5BU5D_t15* L_1883 = (__this->___savemoneyi_41);
		NullCheck(L_1883);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1883, ((int32_t)34));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1883, ((int32_t)34), sizeof(int32_t))) = (int32_t)((int32_t)100000000);
	}

IL_44a6:
	{
		main_mapmoneyk_m25(__this, /*hidden argument*/NULL);
		main_moneyk_m24(__this, /*hidden argument*/NULL);
		FadeManager_t4 * L_1884 = SingletonMonoBehaviour_1_get_Instance_m44(NULL /*static, unused*/, /*hidden argument*/SingletonMonoBehaviour_1_get_Instance_m44_MethodInfo_var);
		NullCheck(L_1884);
		FadeManager_LoadLevel_m11(L_1884, _stringLiteral274, (1.0f), /*hidden argument*/NULL);
	}

IL_44c6:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
