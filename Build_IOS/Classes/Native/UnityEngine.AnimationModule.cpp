﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331;
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F;
// UnityEngine.AnimationEvent[]
struct AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E;
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A;
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.HumanBone[]
struct HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.ScriptableObject[]
struct ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78;
// UnityEngine.SkeletonBone[]
struct SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.StateMachineBehaviour[]
struct StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174;
// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02;
// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.Avatar
struct Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC;
// UnityEngine.Animations.NotKeyableAttribute
struct NotKeyableAttribute_tDDB6B25B26F649E3CED893EE1E63B6DE66844483;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5;

IL2CPP_EXTERN_C RuntimeClass* AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HumanBodyBones_tA2A904890A05ABCFFAB7E119244E97C5EA9807E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00974C5D0A39E4A027B0EB44FE85C731384945B0;
IL2CPP_EXTERN_C String_t* _stringLiteral00F97321929E0D7989E72D633D157BD761DD173A;
IL2CPP_EXTERN_C String_t* _stringLiteral05ACCFE2F05290DF031B27B4C6B2AD1DC43CCDC6;
IL2CPP_EXTERN_C String_t* _stringLiteral10F6FECF95C1235E3B90F738314A338A55A4DF3B;
IL2CPP_EXTERN_C String_t* _stringLiteral1767A709DBA16BACAD77F5ED6AF9CBBD95D35D4E;
IL2CPP_EXTERN_C String_t* _stringLiteral4A3C80CF84F07DA0E7531332FF2B387B07C77760;
IL2CPP_EXTERN_C String_t* _stringLiteral4DEE968069F34C26613ADFCD69C41EFC29314286;
IL2CPP_EXTERN_C String_t* _stringLiteral6A5239659C252C3C95FC09A31CA37CA6F6B07FAE;
IL2CPP_EXTERN_C String_t* _stringLiteral82132A808F0B9E6946BE41B8C7B1FDD0D99D773C;
IL2CPP_EXTERN_C String_t* _stringLiteral860B9EA7CDAB02A8A4B38336805EAE2FBA31F09C;
IL2CPP_EXTERN_C String_t* _stringLiteral8DC2252638D84FAF2C30B95D54EC83F52FA6C630;
IL2CPP_EXTERN_C String_t* _stringLiteral972CE48A8E26750559B1B00039204D0DE5B03904;
IL2CPP_EXTERN_C String_t* _stringLiteral98C704D69BD1A288ED31DEE4ED4E50097A2D7018;
IL2CPP_EXTERN_C String_t* _stringLiteral9FD6FF0BE087CD9281920D7CEAF428070CEF0D13;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C8FF345EC45846B2EE6801F84DD49340F0A9E1;
IL2CPP_EXTERN_C String_t* _stringLiteralB31E4AEFDFD2E76052D908F31AC56B3ABCFC7987;
IL2CPP_EXTERN_C String_t* _stringLiteralBF563F6FCC25CE41FFE0BF7590AF9F4475916665;
IL2CPP_EXTERN_C String_t* _stringLiteralD05EE9FE9EFEEB35F354D97C2927EEB880DA9264;
IL2CPP_EXTERN_C String_t* _stringLiteralD1DCB778EB9DF1B12AD26B829002FF8E78A1AFCE;
IL2CPP_EXTERN_C String_t* _stringLiteralD2435BFAEB0372E848D9BE812E3B06AB862CC3D1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE066D08B565F88D413FDACA14C42BFF008FF4EB9;
IL2CPP_EXTERN_C String_t* _stringLiteralE7306902767BBF9821FC01DF5423B33158A3F6ED;
IL2CPP_EXTERN_C String_t* _stringLiteralEF248A46D93F240BD665585183A3658090FB86C2;
IL2CPP_EXTERN_C String_t* _stringLiteralF5510C45DDAD777CCB4893578D995C9739F990F2;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationClip_AddEvent_m7678C740737DCE2CA8ABC4DDE8508B46FE3C1655_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m258DD671FB0A25F3D024F7102432145099174DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetCurrentAnimatorClipInfo_m7C061EE420A67B7D751A2F34D38062FDFF064ED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetNextAnimatorClipInfo_m376D90AA469A7F7268B8D0E5B6930CE7095185D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetParameter_m0F1E53A9845596EA75366518BEB15733FD4E124F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_m06B34A9BC9CCEAD8466D3E991827502A478D3673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_GetBool_mBB5B008988E6CC47C526CF654E53804909C141E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_GetFloat_mAEC50079467900B74F7B485BBAF65A4DE1BBB8DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_GetInt_m58CECCE1A73DB1EA96E287B5B7BF51BF502D8D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_SetBool_m8307F19E9C41A431FC9A71128A305B547BE675C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_SetFloat_m9FA9F67C2AA473A7395EACF2563E7C8A06008C33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_SetInt_m1E7A8AF3165E77EB0148AC17FB641711134DBE48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8;;
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com;
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com;;
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke;
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;;
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126;;
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com;
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com;;
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke;
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke;;

struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F;
struct AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E;
struct AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A;
struct AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52;
struct ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78;
struct SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85;
struct StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8B36B9B16FF72CF5A0EBA03D2FA162E77C86534C 
{
};

// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.Animations.AnimationPlayableGraphExtensions
struct AnimationPlayableGraphExtensions_tF833C072961F30409DB4D2A1B8B1B5BAE53221B3  : public RuntimeObject
{
};

// UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions
struct AnimationPlayableOutputExtensions_tF2D30C326A4F682F2746664FCF2A89E93BD3D104  : public RuntimeObject
{
};

// UnityEngine.Animations.AnimationSceneHandleUtility
struct AnimationSceneHandleUtility_t81E496A69F5C91C343CB2299AE47E8F551D7D939  : public RuntimeObject
{
};

// UnityEngine.Animations.AnimationStreamHandleUtility
struct AnimationStreamHandleUtility_tB5D7BEBDFB3C4BE50805B6EF18FB0CEC6A25A10D  : public RuntimeObject
{
};

// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02  : public RuntimeObject
{
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};
// Native definition for COM marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};

// UnityEngine.Animations.AnimatorJobExtensions
struct AnimatorJobExtensions_tF575992DDBF1EDEAF9D02E1BD755558D929D1E4A  : public RuntimeObject
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.HumanTrait
struct HumanTrait_t4EF6FC8790C40BD5BC9D36765D43202A4FAF219C  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertySceneHandle>
struct NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>
struct NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.AnimatorClipInfo
struct AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 
{
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD 
{
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_HasFixedDuration
	bool ___m_HasFixedDuration_3;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_Duration
	float ___m_Duration_4;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_5;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_6;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Animations.DiscreteEvaluationAttribute
struct DiscreteEvaluationAttribute_tF23FCB5AB01B394BF5BD84623364A965C90F8BB9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.HumanDescription
struct HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44 
{
	// UnityEngine.HumanBone[] UnityEngine.HumanDescription::human
	HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52* ___human_0;
	// UnityEngine.SkeletonBone[] UnityEngine.HumanDescription::skeleton
	SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85* ___skeleton_1;
	// System.Single UnityEngine.HumanDescription::m_ArmTwist
	float ___m_ArmTwist_2;
	// System.Single UnityEngine.HumanDescription::m_ForeArmTwist
	float ___m_ForeArmTwist_3;
	// System.Single UnityEngine.HumanDescription::m_UpperLegTwist
	float ___m_UpperLegTwist_4;
	// System.Single UnityEngine.HumanDescription::m_LegTwist
	float ___m_LegTwist_5;
	// System.Single UnityEngine.HumanDescription::m_ArmStretch
	float ___m_ArmStretch_6;
	// System.Single UnityEngine.HumanDescription::m_LegStretch
	float ___m_LegStretch_7;
	// System.Single UnityEngine.HumanDescription::m_FeetSpacing
	float ___m_FeetSpacing_8;
	// System.Single UnityEngine.HumanDescription::m_GlobalScale
	float ___m_GlobalScale_9;
	// System.String UnityEngine.HumanDescription::m_RootMotionBoneName
	String_t* ___m_RootMotionBoneName_10;
	// System.Boolean UnityEngine.HumanDescription::m_HasTranslationDoF
	bool ___m_HasTranslationDoF_11;
	// System.Boolean UnityEngine.HumanDescription::m_HasExtraRoot
	bool ___m_HasExtraRoot_12;
	// System.Boolean UnityEngine.HumanDescription::m_SkeletonHasParents
	bool ___m_SkeletonHasParents_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.HumanDescription
struct HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_pinvoke
{
	HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke* ___human_0;
	SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke* ___skeleton_1;
	float ___m_ArmTwist_2;
	float ___m_ForeArmTwist_3;
	float ___m_UpperLegTwist_4;
	float ___m_LegTwist_5;
	float ___m_ArmStretch_6;
	float ___m_LegStretch_7;
	float ___m_FeetSpacing_8;
	float ___m_GlobalScale_9;
	char* ___m_RootMotionBoneName_10;
	int32_t ___m_HasTranslationDoF_11;
	int32_t ___m_HasExtraRoot_12;
	int32_t ___m_SkeletonHasParents_13;
};
// Native definition for COM marshalling of UnityEngine.HumanDescription
struct HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_com
{
	HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com* ___human_0;
	SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com* ___skeleton_1;
	float ___m_ArmTwist_2;
	float ___m_ForeArmTwist_3;
	float ___m_UpperLegTwist_4;
	float ___m_LegTwist_5;
	float ___m_ArmStretch_6;
	float ___m_LegStretch_7;
	float ___m_FeetSpacing_8;
	float ___m_GlobalScale_9;
	Il2CppChar* ___m_RootMotionBoneName_10;
	int32_t ___m_HasTranslationDoF_11;
	int32_t ___m_HasExtraRoot_12;
	int32_t ___m_SkeletonHasParents_13;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Animations.NotKeyableAttribute
struct NotKeyableAttribute_tDDB6B25B26F649E3CED893EE1E63B6DE66844483  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Animations.PropertySceneHandle
struct PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 
{
	// System.UInt32 UnityEngine.Animations.PropertySceneHandle::valid
	uint32_t ___valid_0;
	// System.Int32 UnityEngine.Animations.PropertySceneHandle::handleIndex
	int32_t ___handleIndex_1;
};

// UnityEngine.Animations.PropertyStreamHandle
struct PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 
{
	// System.UInt32 UnityEngine.Animations.PropertyStreamHandle::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.Int32 UnityEngine.Animations.PropertyStreamHandle::handleIndex
	int32_t ___handleIndex_1;
	// System.Int32 UnityEngine.Animations.PropertyStreamHandle::valueArrayIndex
	int32_t ___valueArrayIndex_2;
	// System.Int32 UnityEngine.Animations.PropertyStreamHandle::bindType
	int32_t ___bindType_3;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.SharedBetweenAnimatorsAttribute
struct SharedBetweenAnimatorsAttribute_t44FFD5D3B5AEBB394182D66E2198FA398087449C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Animations.TransformSceneHandle
struct TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB 
{
	// System.UInt32 UnityEngine.Animations.TransformSceneHandle::valid
	uint32_t ___valid_0;
	// System.Int32 UnityEngine.Animations.TransformSceneHandle::transformSceneHandleDefinitionIndex
	int32_t ___transformSceneHandleDefinitionIndex_1;
};

// UnityEngine.Animations.TransformStreamHandle
struct TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E 
{
	// System.UInt32 UnityEngine.Animations.TransformStreamHandle::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.Int32 UnityEngine.Animations.TransformStreamHandle::handleIndex
	int32_t ___handleIndex_1;
	// System.Int32 UnityEngine.Animations.TransformStreamHandle::skeletonIndex
	int32_t ___skeletonIndex_2;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Animations.AnimationHumanStream
struct AnimationHumanStream_t31E8EAD3F7C2C29CAE7B4EFB87AA84ECC6DCC6EC 
{
	// System.IntPtr UnityEngine.Animations.AnimationHumanStream::stream
	intptr_t ___stream_0;
};

// UnityEngine.Animations.AnimationStream
struct AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A 
{
	// System.UInt32 UnityEngine.Animations.AnimationStream::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.IntPtr UnityEngine.Animations.AnimationStream::constant
	intptr_t ___constant_1;
	// System.IntPtr UnityEngine.Animations.AnimationStream::input
	intptr_t ___input_2;
	// System.IntPtr UnityEngine.Animations.AnimationStream::output
	intptr_t ___output_3;
	// System.IntPtr UnityEngine.Animations.AnimationStream::workspace
	intptr_t ___workspace_4;
	// System.IntPtr UnityEngine.Animations.AnimationStream::inputStreamAccessor
	intptr_t ___inputStreamAccessor_5;
	// System.IntPtr UnityEngine.Animations.AnimationStream::animationHandleBinder
	intptr_t ___animationHandleBinder_6;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.HumanLimit
struct HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E 
{
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;
};

// UnityEngine.MatchTargetWeightMask
struct MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 
{
	// UnityEngine.Vector3 UnityEngine.MatchTargetWeightMask::m_PositionXYZWeight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PositionXYZWeight_0;
	// System.Single UnityEngine.MatchTargetWeightMask::m_RotationWeight
	float ___m_RotationWeight_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 
{
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};

// UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2  : public RuntimeObject
{
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Animations.AnimationClipPlayable
struct AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174  : public RuntimeObject
{
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationMixerPlayable
struct AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationOffsetPlayable
struct AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationPlayableOutput
struct AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationPosePlayable
struct AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationRemoveScalePlayable
struct AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationScriptPlayable
struct AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE  : public TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2
{
};

// UnityEngine.Animations.AnimatorControllerPlayable
struct AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Avatar
struct Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 
{
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit_2;
};

// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712  : public Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC
{
};

// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493  : public RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254
{
	// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback UnityEngine.AnimatorOverrideController::OnOverrideControllerDirty
	OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* ___OnOverrideControllerDirty_4;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>

// UnityEngine.Animations.AnimationPlayableGraphExtensions

// UnityEngine.Animations.AnimationPlayableGraphExtensions

// UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions

// UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions

// UnityEngine.Animations.AnimationSceneHandleUtility

// UnityEngine.Animations.AnimationSceneHandleUtility

// UnityEngine.Animations.AnimationStreamHandleUtility

// UnityEngine.Animations.AnimationStreamHandleUtility

// UnityEngine.AnimatorControllerParameter

// UnityEngine.AnimatorControllerParameter

// UnityEngine.Animations.AnimatorJobExtensions

// UnityEngine.Animations.AnimatorJobExtensions

// System.Attribute

// System.Attribute

// UnityEngine.HumanTrait

// UnityEngine.HumanTrait

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertySceneHandle>

// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertySceneHandle>

// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>

// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>

// Unity.Collections.NativeArray`1<System.Single>

// Unity.Collections.NativeArray`1<System.Single>

// UnityEngine.AnimatorClipInfo

// UnityEngine.AnimatorClipInfo

// UnityEngine.AnimatorStateInfo

// UnityEngine.AnimatorStateInfo

// UnityEngine.AnimatorTransitionInfo

// UnityEngine.AnimatorTransitionInfo

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Animations.DiscreteEvaluationAttribute

// UnityEngine.Animations.DiscreteEvaluationAttribute

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// UnityEngine.HumanDescription

// UnityEngine.HumanDescription

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Animations.NotKeyableAttribute

// UnityEngine.Animations.NotKeyableAttribute

// UnityEngine.Animations.PropertySceneHandle

// UnityEngine.Animations.PropertySceneHandle

// UnityEngine.Animations.PropertyStreamHandle

// UnityEngine.Animations.PropertyStreamHandle

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.SharedBetweenAnimatorsAttribute

// UnityEngine.SharedBetweenAnimatorsAttribute

// System.Single

// System.Single

// UnityEngine.Animations.TransformSceneHandle

// UnityEngine.Animations.TransformSceneHandle

// UnityEngine.Animations.TransformStreamHandle

// UnityEngine.Animations.TransformStreamHandle

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.Animations.AnimationHumanStream

// UnityEngine.Animations.AnimationHumanStream

// UnityEngine.Animations.AnimationStream

// UnityEngine.Animations.AnimationStream

// UnityEngine.Bounds

// UnityEngine.Bounds

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.HumanLimit

// UnityEngine.HumanLimit

// UnityEngine.MatchTargetWeightMask

// UnityEngine.MatchTargetWeightMask

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Playables.PlayableGraph

// UnityEngine.Playables.PlayableGraph

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableHandle

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null_2;
};

// UnityEngine.Playables.PlayableOutputHandle

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.SkeletonBone

// UnityEngine.SkeletonBone

// UnityEngine.TrackedReference

// UnityEngine.TrackedReference

// UnityEngine.Animations.AnimationClipPlayable

// UnityEngine.Animations.AnimationClipPlayable

// UnityEngine.AnimationEvent

// UnityEngine.AnimationEvent

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_StaticFields
{
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationLayerMixerPlayable

// UnityEngine.Animations.AnimationMixerPlayable
struct AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_StaticFields
{
	// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::m_NullPlayable
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationMixerPlayable

// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_StaticFields
{
	// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_NullPlayable
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationMotionXToDeltaPlayable

// UnityEngine.Animations.AnimationOffsetPlayable
struct AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_StaticFields
{
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationOffsetPlayable

// UnityEngine.Animations.AnimationPlayableOutput

// UnityEngine.Animations.AnimationPlayableOutput

// UnityEngine.Animations.AnimationPosePlayable
struct AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_StaticFields
{
	// UnityEngine.Animations.AnimationPosePlayable UnityEngine.Animations.AnimationPosePlayable::m_NullPlayable
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationPosePlayable

// UnityEngine.Animations.AnimationRemoveScalePlayable
struct AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_StaticFields
{
	// UnityEngine.Animations.AnimationRemoveScalePlayable UnityEngine.Animations.AnimationRemoveScalePlayable::m_NullPlayable
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationRemoveScalePlayable

// UnityEngine.Animations.AnimationScriptPlayable
struct AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_StaticFields
{
	// UnityEngine.Animations.AnimationScriptPlayable UnityEngine.Animations.AnimationScriptPlayable::m_NullPlayable
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationScriptPlayable

// UnityEngine.AnimationState

// UnityEngine.AnimationState

// UnityEngine.Animations.AnimatorControllerPlayable
struct AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_StaticFields
{
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimatorControllerPlayable

// UnityEngine.Avatar

// UnityEngine.Avatar

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.HumanBone

// UnityEngine.HumanBone

// UnityEngine.Motion

// UnityEngine.Motion

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable_1;
};

// UnityEngine.Playables.Playable

// UnityEngine.RuntimeAnimatorController

// UnityEngine.RuntimeAnimatorController

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.AnimationClip

// UnityEngine.AnimationClip

// UnityEngine.AnimatorOverrideController

// UnityEngine.AnimatorOverrideController

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.IndexOutOfRangeException

// System.IndexOutOfRangeException

// System.InvalidCastException

// System.InvalidCastException

// System.InvalidOperationException

// System.InvalidOperationException

// System.NullReferenceException

// System.NullReferenceException

// UnityEngine.StateMachineBehaviour

// UnityEngine.StateMachineBehaviour

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback

// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback

// UnityEngine.Animator

// UnityEngine.Animator

// System.ArgumentNullException

// System.ArgumentNullException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AnimationEvent[]
struct AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* m_Items[1];

	inline AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ScriptableObject[]
struct ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78  : public RuntimeArray
{
	ALIGN_FIELD (8) ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* m_Items[1];

	inline ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.StateMachineBehaviour[]
struct StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89  : public RuntimeArray
{
	ALIGN_FIELD (8) StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* m_Items[1];

	inline StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 m_Items[1];

	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* m_Items[1];

	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.HumanBone[]
struct HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52  : public RuntimeArray
{
	ALIGN_FIELD (8) HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 m_Items[1];

	inline HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_BoneName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_HumanName_1), (void*)NULL);
		#endif
	}
	inline HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_BoneName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_HumanName_1), (void*)NULL);
		#endif
	}
};
// UnityEngine.SkeletonBone[]
struct SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85  : public RuntimeArray
{
	ALIGN_FIELD (8) SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 m_Items[1];

	inline SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parentName_1), (void*)NULL);
		#endif
	}
	inline SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parentName_1), (void*)NULL);
		#endif
	}
};
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* m_Items[1];

	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled);

// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_gshared (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertySceneHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m258DD671FB0A25F3D024F7102432145099174DBC_gshared (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C ___1_handles, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___2_buffer, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertySceneHandle>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_m06B34A9BC9CCEAD8466D3E991827502A478D3673_gshared (NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C ___0_nativeArray, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Single>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___0_nativeArray, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertyStreamHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B_gshared (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 ___1_handles, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___2_buffer, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertyStreamHandle>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3_gshared (NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 ___0_nativeArray, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mB6190858E566BFA1B80D2E94B65CD27920A49443 (Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___0_self, const RuntimeMethod* method) ;
// UnityEngine.WrapMode UnityEngine.AnimationClip::get_wrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,UnityEngine.AnimationClip,System.Single,UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___1_clip, float ___2_inTime, int32_t ___3_wrapMode, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::get_localBounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_get_localBounds_Injected_mC0067D51DBD55799EFCD7B1EC041DEBD1B2C7F53 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::set_localBounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_localBounds_Injected_mDB992FAF16AA2D4E92AC432F1B98162EB10F1044 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::AddEventInternal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_AddEventInternal_m263CAF515A649EF219602FDFF556BAC04B3D54DD (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, RuntimeObject* ___0_evt, const RuntimeMethod* method) ;
// System.Array UnityEngine.AnimationClip::GetEventsInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* AnimationClip_GetEventsInternal_mF2E21B70DC3E96105B7F696767FEA06400EF805F (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::SetEventsInternal(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SetEventsInternal_m8CA32C344715FD2B5558547DDC7ABA4604EA6F13 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, RuntimeArray* ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorStateInfo::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_length_m2FAE317264F7C796427207F8F28E550DB49F9541 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetFloatString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatStringDamp_m81B394E6887978F4A8A92ACF1C7138B23BFC9214 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, float ___2_dampTime, float ___3_deltaTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, float ___2_dampTime, float ___3_deltaTime, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolString_m8698CB03DDD5DF7B991EC772BC424F2A649EB950 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, bool ___1_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerString_m591359704EA3449A83C698CD72EBB7A6FC5F6D9D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::ResetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerID_mD3E0C24AC862F049622D09933E7A3A2CDE256C13 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_velocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_velocity_Injected_mB47827ADE9F826A2ECA302EB7751371A9F18A57E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_angularVelocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_angularVelocity_Injected_m316C33CD3C5CF4F7AA8E53FEB0741B7E1C3D4537 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_rootPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_rootPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_rootPosition_Injected_m9F65EF589C17FECC4350D1D193C20B7741BD7312 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_rootRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_rootRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_rootRotation_Injected_m4DF71DAF4F3EE3B4D460FAB3360E00C74027F11A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.AnimatorUpdateMode UnityEngine.Animator::get_updateMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::CheckIfInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animator::get_bodyPositionInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_bodyPositionInternal_m595442E15D03EA53B40C2760C99B4D52C536EF06 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_bodyPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_m6042D23A6CC550D438B4522C4755BD08692D2F1A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_bodyPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_bodyPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animator::get_bodyRotationInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_bodyRotationInternal_m62411259235851629AB914E29B04029A04D8F165 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_bodyRotationInternal(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_mA381F771D03290AF383D3203071D9B04746BD2E6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animator::GetGoalPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetGoalPosition_mE65C3AB94643D8036BF6C8014408CAB0F9BB5A98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_m0811DE827A66638ECA79A2BAA6A59D9D21D7D5A2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_goalPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_goalPosition, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animator::GetGoalRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_GetGoalRotation_mB7B67DE4EBA3C26D713754D1D76D4F529E783DB2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_m1BFE2425DE75954B1233ABD96D6AB3682D42E5BA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_goalRotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_goalRotation, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetGoalWeightPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, float ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetGoalWeightRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, float ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animator::GetHintPosition(UnityEngine.AvatarIKHint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetHintPosition_mD97BF99EB5303EAD560BFE087E07AC44E1FFF42E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetHintPosition_Injected_m6BE0C46FE3B057D08BA4B111DB6340F958B33FD1 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetHintPosition(UnityEngine.AvatarIKHint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetHintPosition_m446EFD046A753C0604A5487D9606F89A362653E2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_hintPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetHintPosition_Injected_mF7843586B3EA22A800A628735583620FFDF2ADC5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_hintPosition, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetHintWeightPosition(UnityEngine.AvatarIKHint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetHintWeightPosition_mE89238F7EB821743F245E2F9EA4BC8D3B3629830 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetHintWeightPosition(UnityEngine.AvatarIKHint,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetHintWeightPosition_m5BC635B929CACB43C9D5DE73AF292A423B8BF0ED (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLookAtPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_m6A20F2667C36D8363BA0F38A961BAB941E2DDC1B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lookAtPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_lookAtPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_weight, float ___1_bodyWeight, float ___2_headWeight, float ___3_eyesWeight, float ___4_clampWeight, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925 (int32_t ___0_humanId, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBoneLocalRotationInternal(System.Int32,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotationInternal_m29A9991C7C688D3E2B6747C769358F4C935095C7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_humanBoneId, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBoneLocalRotationInternal_Injected(System.Int32,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotationInternal_Injected_m4A2C1DAFEE4883C6A39D33CF56E8DC015D6A0EC5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_humanBoneId, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_rotation, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.ScriptableObject[] UnityEngine.Animator::InternalGetBehavioursByKey(System.Int32,System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* Animator_InternalGetBehavioursByKey_m6B3048864D1DB2483F5298842E9384599FBB8E9F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_fullPathHash, int32_t ___1_layerIndex, Type_t* ___2_type, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, int32_t ___1_stateInfoIndex, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* ___2_info, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* ___1_info, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::GetAnimatorClipInfoCount(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetAnimatorClipInfoCount_m83C02F470FEC1DAF548AB88C578B64B6B3BB8E9B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, bool ___1_current, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorClipInfoInternal_m98028420AD065F1B6F3DC2EB4C6C2A42B8567600 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, bool ___1_isCurrent, RuntimeObject* ___2_clips, const RuntimeMethod* method) ;
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::MatchTarget_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_matchPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_matchRotation, int32_t ___2_targetBodyPart, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25* ___3_weightMask, float ___4_startNormalizedTime, float ___5_targetNormalizedTime, bool ___6_completeMatch, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,UnityEngine.MatchTargetWeightMask,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_mD1C55BE6B64912264BD1280498BFF938B8501596 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_matchPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_matchRotation, int32_t ___2_targetBodyPart, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 ___3_weightMask, float ___4_startNormalizedTime, float ___5_targetNormalizedTime, bool ___6_completeMatch, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::InterruptMatchTarget(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_completeMatch, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateNameHash, int32_t ___1_layer, float ___2_normalizedTime, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateHashName, float ___1_fixedTransitionDuration, int32_t ___2_layer, float ___3_fixedTimeOffset, float ___4_normalizedTransitionTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_mA6769671098D9B30D68A27DF00D355CC5E28D56C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, float ___1_normalizedTransitionDuration, int32_t ___2_layer, float ___3_normalizedTimeOffset, float ___4_normalizedTransitionTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateHashName, float ___1_normalizedTransitionDuration, int32_t ___2_layer, float ___3_normalizedTimeOffset, float ___4_normalizedTransitionTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m8E57011DAD1D97B8071B18115E09FB2151154E21 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, int32_t ___1_layer, float ___2_fixedTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateNameHash, int32_t ___1_layer, float ___2_fixedTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, int32_t ___1_layer, float ___2_normalizedTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_targetPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_targetRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_humanBoneId, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetRecorderStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetRecorderStopTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetCurrentGraph(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetCurrentGraph_mDDDDABBEA3E4BBD025401F92FFFE5B71DAC9486F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::get_logWarnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::IsInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Rebind(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Rebind_mA8163C9B7150958C0FB3F071B7ED41850BE3A130 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_writeDefaultValues, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::EvaluateController(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_EvaluateController_m5A83794E6067230ED84A707365FB70CA9EE64128 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_deltaTime, const RuntimeMethod* method) ;
// System.String UnityEngine.Animator::GetAnimatorStateName(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_GetAnimatorStateName_mEA694401BD4FC9185FFCFDFFCB7C1DCD2B1B8D06 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, bool ___1_current, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::get_keepAnimatorStateOnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_keepAnimatorStateOnDisable_m7FAE9E72FA31D90E7D55664BD627C2903893A76B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_keepAnimatorStateOnDisable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_keepAnimatorStateOnDisable_mE439995234FEE85A9DE7DB5238D301128CABB769 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String UnityEngine.AnimatorControllerParameter::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimatorControllerParameter_get_name_mEB3938ADDF296A0FB37283C987AEE6EC0F4F629E (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_inline (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Avatar::get_humanDescription_Injected(UnityEngine.HumanDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_get_humanDescription_Injected_mB2DC483AC2212729E7C92641B6FFDDB4056BF3D0 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* ___0_ret, const RuntimeMethod* method) ;
// System.Single UnityEngine.Avatar::Internal_GetAxisLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Avatar_Internal_GetAxisLength_mE9BD06F25CA27B0D026E640CB94C53D7039575A2 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Avatar::Internal_GetPreRotation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Avatar_Internal_GetPreRotation_m43FCB48A6F86DA5AC7FADD7B3FFE3ECA49503648 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Avatar::Internal_GetPostRotation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Avatar_Internal_GetPostRotation_m8BEBD14E505A8FC73DCD3EF1CA99F32666FBE7A2 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Avatar::Internal_GetZYPostQ(System.Int32,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Avatar_Internal_GetZYPostQ_mE09886C9F4882D6474F76EC32C6711C4EBAF1F19 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_parentQ, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_q, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Avatar::Internal_GetZYRoll(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Avatar_Internal_GetZYRoll_mB5FB51A11D1DAD6EB587731C57D5AC43F9FAEFC6 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_uvw, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Avatar::Internal_GetLimitSign(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Avatar_Internal_GetLimitSign_m19D7625470364E767DB6F9B575ACBA08FE6BB6A5 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, const RuntimeMethod* method) ;
// System.Void UnityEngine.Avatar::Internal_GetPreRotation_Injected(System.Int32,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_Internal_GetPreRotation_Injected_mE47911DC3BC9882688A130363B8DA9130CEF74E9 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Avatar::Internal_GetPostRotation_Injected(System.Int32,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_Internal_GetPostRotation_Injected_m82DFC2810E003BD5422776882E0EE67BDAFA047C (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Avatar::Internal_GetZYPostQ_Injected(System.Int32,UnityEngine.Quaternion&,UnityEngine.Quaternion&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_Internal_GetZYPostQ_Injected_mC76060C9BE7A4A6B03FE4E272DDEBA1422445467 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_parentQ, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_q, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Avatar::Internal_GetZYRoll_Injected(System.Int32,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_Internal_GetZYRoll_Injected_m7902022BBB7439F281875F47068C37AD57A0AD59 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_uvw, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Avatar::Internal_GetLimitSign_Injected(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_Internal_GetLimitSign_Injected_m9D9713CD9F6973FAE4DF20AE86386B216EDBADB9 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_ret, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_m20E22C1F0C5B12FC0FBB421D93B4BD5A3B62C3FA (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_output, int32_t ___1_streamSource, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder(UnityEngine.Playables.PlayableOutputHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_m67FB54EB92BA287562D0F0E71B3F63233161901E (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_output, int32_t ___1_sortingOrder, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_m52C444A031E6807C93C20CFC8017AC4FEB08BEA7 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, int32_t ___1_streamSource, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_mC9BF96471E656AB7CE06B616AAF2495D35B8CAA3 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, int32_t ___1_sortingOrder, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared)(__this, method);
}
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_handle, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, bool ___1_singleLayerOptimization, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7 (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, String_t* ___1_name, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___2_handle, const RuntimeMethod* method) ;
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E AnimationPlayableOutput_get_Null_mDF5638798B49F3E7ACCF766C266D7F776E553900 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationPlayableOutput::SetTarget(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_handle, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___1_target, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3 (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_CreateHandleInternal_Injected_m6DD2A68DB5A0F7A25529B1899FB308F248C557E3 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_handle, intptr_t ___2_jobReflectionData, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Animations.AnimationStream::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AnimationStream_get_animatorBindingsVersion_mD7D19DCE96F93CE4DC36457F974C5B8562A3B5E4 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationStream::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationStream::CheckIsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_m335ACEAEEAEE7E3FAE1CCBD81DA839C6C1CFF0A9 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animations.AnimationStream::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_get_deltaTime_mECEF75B188313080405BFB556AB4CFD972233861 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime_Injected(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_Injected_mF06679592F1FEFA1DD24E4553554913F59DAAE55 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0__unity_self, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValidInternal_mBF1602E33ABCA25121C7CF70173D29C5291354CC (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValid_m96EE3A490B88868890CF2E754838F97424A65512 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_createdByNative_mCC27504004588C367456D55E8295B745BE2431AC (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Animations.TransformStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TransformStreamHandle_get_animatorBindingsVersion_mD044F88843A162A554BA7EF191E52B58F9F0AFF8 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsSameVersionAsStream_m31E41B516413440AC8F4D5F9F233623A6DE71365 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasSkeletonIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasSkeletonIndex_m8B9589FACB6810B0EFD84033D30057ADFBC4B75F (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::Resolve(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_Resolve_m5DDC5761EF01E700ABDB214030802982DABC3E6E (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolvedInternal_m83781A03679DF4C678FE963CF21F5A2203471585 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolved(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolved_mB2A9548AAB37C1485AFEC2C9CD9A3D4ABC786D52 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_m0008C8228981E9247DA8B0C7739DD1BF1C70EAEA (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetPositionInternal_m4D0EA1C47F1AAB4723411247DBA15135BA6A9D4C (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetPosition_m8980B6C6185653E9B962625D030C3BB1994C8B89 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_m0855C3D765D6635BFEBA847061CDC90B645246CC (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPosition_m45609A840DAAF0410F72218E58E2207841290002 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetRotationInternal_m53A7E32CE6B63F588F44CAE8FCBF23C32E8393C7 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetRotation_m02E0CE9B403FB4138605190A48A19767D6B0C42A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_mE7AB735A2303DC923A69B19537FDE60B5F39CE5A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotation_mA159153895AFFB08B30B8287304A720215C364D1 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalPositionInternal_mDF78249F5365FA56D51A9854D69DBD420CA2408A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalPosition_m30A1BF0A06551177E6D28A73D3DE71522B77C0A4 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_m1758971CB7DC05A269612D1B975A22C8CB2CB890 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPosition_mEC97D6C69019B8212F444B33DB51BDCD9DCD6282 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetLocalRotationInternal_m5AD8291814578D1F199FBBD2E336C43FC387CEAB (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetLocalRotation_mB613F5958303751C9368AD2CC613723E279985AF (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_mDE8F5BF1C73A90573EF3918F1C88ABB73BC10778 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotation_m68B0586FA34978971ECDC909A44E1E0C13443C6A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalScaleInternal_mAE69D739C71A1F9AB26E9E3496294B6662F429A2 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalScale_m559039B8F2285CC33E3E952F078EF899C8ACB451 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_mE108B8F9D39C2C540C8619C7DECFDB685040F85C (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScale(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScale_mEAC5ED65AA0B8F756E2C129ED14D78C7B3698FE2 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_m1B1B9B973843354BCA7D7A5A76CE44EFE7F2A203 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRS_mF633398360834FAD1B1F8E21EF8C2A01B3E38A8D (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_m2FC862511AEAC5C2900D016CF31EB2E25D321D8B (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_scale, bool ___4_useMask, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRS_mA4D470AC9B87FF6FAC880A926BD3A5F4EC30BFB2 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_scale, bool ___4_useMask, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_m71E4832B7C5D99A91FDF742CA3E54F1C43CE34AF (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTR_mA0526AC698E96B95E6BE3E17A477DB028EF8A499 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_m9C62E8BD63B362A404C376B09005C024F54DC7B4 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, bool ___3_useMask, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTR_m8C4F35DE8E639AE7D7F94F1D015AD3C16D2FC406 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, bool ___3_useMask, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_Injected_m3C2F5E0470031F9C0D33DD5C7C392F8B671B9CED (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetPositionInternal_Injected_m3C3917F08A68CD4E24653CB78AEEA3577E043462 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_Injected_mC8D3099FC5DB732B46C4FAD237DA63CA59B2EA5A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetRotationInternal_Injected_m4863F14E289B9627C1ACADB750B56CD81ED6F857 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_Injected_m181A24DB2A658E488E3F0BC684A424547A6A7683 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalPositionInternal_Injected_m365FDC3BE3E31E7E83ED3E348C089A788E25C724 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_Injected_mD54FB99E9BA8700F04F9A6C12F4FD857B1F68258 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalRotationInternal_Injected_m0C379159283C0F4FEA175431383404203C624630 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_Injected_m58D671FC665AF45BE7B6753A65C3F27BDCD89EA3 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalScaleInternal_Injected_m2D639FCDA072EBFE62AF09EFBAE8DD09C1C82903 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_Injected_m0AEE77042B2DC3DE6DD4D92C92129B4A52CD4742 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_Injected_m2684C260C70D030AA66A6D9EE0641C6F8A0F41A1 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___4_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_Injected_m4185E07C39CD19689720F3F5B6161938C39BAAF6 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___4_scale, bool ___5_useMask, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_Injected_mA425C4A4674833F9EEB44FBC2C5DB357B3EB306E (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_Injected_mDE035F852727673707A01C6475FC52E38D98DB6F (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, bool ___4_useMask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_createdByNative_m2610F75D942E639F8D9919D9A8A8E2210503292A (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasBindType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasBindType_mF482FD67DC2BBB8AF20A959C846430577FCC51B3 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsValidInternal_mFE619567B465984FC8E00F07CC24D489802BB51B (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Animations.PropertyStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PropertyStreamHandle_get_animatorBindingsVersion_mAF352761E16C2BC5658A2B37C77EFC88173EA4C0 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsSameVersionAsStream_m105BA0425054D86214E70C3D0746517A0BBD5305 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasValueArrayIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasValueArrayIndex_m6BFF272278DB968E4732EE7BAA990F18258DC610 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsResolvedInternal_m7B96232330AB117B2050D16FE135103D6ED97DFA (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_mFB0A48675D8D847197CB392325CDCA837B82E64C (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_m11E03DE3C420D8F9BFA7926D1F452766BD34B783 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloat(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloat_mAEC50079467900B74F7B485BBAF65A4DE1BBB8DF (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal(UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_m044594EAE3DEEC6030E096DB0A8F0454ADCAD6A8 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloat(UnityEngine.Animations.AnimationStream,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloat_m9FA9F67C2AA473A7395EACF2563E7C8A06008C33 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, float ___1_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_m598EC48F1700FB43EF1A5880178BB841A781D4C9 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetInt(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetInt_m58CECCE1A73DB1EA96E287B5B7BF51BF502D8D98 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal(UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_m37894828B9FD37A78CCE5A6F9F9EB7E1C0FE72A4 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetInt(UnityEngine.Animations.AnimationStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetInt_m1E7A8AF3165E77EB0148AC17FB641711134DBE48 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_m25D06AA6F53B3265E80243E589F39EF4C30E7DAD (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBool(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBool_mBB5B008988E6CC47C526CF654E53804909C141E0 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal(UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_mD237DF6939F5BE683D485E984C37791624C67A26 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBool(UnityEngine.Animations.AnimationStream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBool_m8307F19E9C41A431FC9A71128A305B547BE675C7 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_Injected_m2F38D58EFF0643C85F7ABA035DAC718D5A885B0F (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_Injected_m6604EAC314F4B69CAC8601BE540A723ADCC8734E (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_Injected_mBFF2DBFE042CB9C68B804BB413E28171D465A94F (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, float ___2_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_Injected_mDFDACC53C8FAA687E154D78C9A86B58EA836AF14 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_Injected_m825B4B4CC03932B30E2A9DA34500012C429765FA (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, int32_t ___2_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_Injected_mDE6D207C4962AC0FC356962421418A632D7120D6 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_Injected_m4489226DE93D01A970F9BF2A71E11D0F826C804B (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, bool ___2_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_createdByNative_m40C489AAD66DEDFEB69F6BB25B1177FC51922D3D (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_hasTransformSceneHandleDefinitionIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_mBD4B49152989D4379E6D726B0F7E834EA484383B (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_m19ABA61E5902DA7F1207798BBB4DCFBE515B9537 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformSceneHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_IsValid_m11DB3FA1E3137CA1C2D4D4BC18AD717FCCAC65E2 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::CheckIsValid(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetPositionInternal_mAC29651E3EB5FC3BD4CB49B2B09EB9897375FC29 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetPosition_mDB8261C4AF79828292D555DBF91A6559DE41B3B8 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalPositionInternal_mAFD402FC292DD1D9BDBF6BE446E89CDD85A47182 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalPosition_mF5AFF93B5129702C280CCEB0603100377BFE2D32 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetRotationInternal_m53DDDEE9D5824A6E5BFEE5C5681A33E468E0FC5E (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetRotation_m8F6CA3E2302A43103A808120AEE1C527EB2A2F05 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetLocalRotationInternal_mC63DB1B1DA36584AC8C550683E9E2F67F350A688 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetLocalRotation_mEB7C44D455654A40518C8AE8D8CC0D191E194B8D (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalScaleInternal_m15883C28FC7DE56F00374B6A14F027CFC6C35069 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalScale_m46D9A20E7DC5967A0EE6F7C217FAA68FBB93611E (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_mBB816EAB9B873A23A8B01C96789480F438968497 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRS_m5FBE0248443B3D34C7787A50DE89BB473638CADB (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_m821151819DD1E3F5ABA1D2C8DC5372C67A2DF343 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTR_m7CB0885446CA0894BF681F1954C3E0FB8D31C9EB (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_Injected_m1F0CEB3799D44896F7F501AE0E99BF49938ADA4B (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetPositionInternal_Injected_m5CB0EBF73345BD9F90E504DCEFE1C2D4B349FAB0 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalPositionInternal_Injected_mA2701FE4C3866CF6BB83C18C183D197975A002F8 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetRotationInternal_Injected_m50FA487714327D6B98868DB6322D1F72260B8BBE (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalRotationInternal_Injected_m580089F9FDCF7CB1BFBFDBA70EE7C49BA3B90304 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalScaleInternal_Injected_mD0E2E2A2B1728035C791DC88BAC3E16C3B96FBBE (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_Injected_m09BD17EECEC5ED6D21F7224862F01C0BEAD9CE9C (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___4_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_Injected_mBAF0D818077C87003CFACC9BCE40CD62C5208A26 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertySceneHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
inline int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m258DD671FB0A25F3D024F7102432145099174DBC (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C ___1_handles, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___2_buffer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF, const RuntimeMethod*))AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m258DD671FB0A25F3D024F7102432145099174DBC_gshared)(___0_stream, ___1_handles, ___2_buffer, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertySceneHandle>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_m06B34A9BC9CCEAD8466D3E991827502A478D3673 (NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_m06B34A9BC9CCEAD8466D3E991827502A478D3673_gshared)(___0_nativeArray, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Single>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_gshared)(___0_nativeArray, method);
}
// System.Void UnityEngine.Animations.AnimationSceneHandleUtility::ReadSceneFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSceneHandleUtility_ReadSceneFloatsInternal_mDF52B54C3765CC9856DC4F5A5BF9D358D4D4312A (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, void* ___1_propertySceneHandles, void* ___2_floatBuffer, int32_t ___3_count, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertyStreamHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
inline int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 ___1_handles, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___2_buffer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF, const RuntimeMethod*))AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B_gshared)(___0_stream, ___1_handles, ___2_buffer, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertyStreamHandle>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3 (NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3_gshared)(___0_nativeArray, method);
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::WriteStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_WriteStreamFloatsInternal_m189497A194CA6D6F1EC649B83C6AA42476089649 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, void* ___1_propertyStreamHandles, void* ___2_floatBuffer, int32_t ___3_count, bool ___4_useMask, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::ReadStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_ReadStreamFloatsInternal_m6BAC0676E422F2C256C06AA0EA32F7B66D04F84C (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, void* ___1_propertyStreamHandles, void* ___2_floatBuffer, int32_t ___3_count, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___0_other, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamTransform_m83A49A8A13E2FA7AD67FAECA1B24F11D15550C2F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___2_transformStreamHandle, const RuntimeMethod* method) ;
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 AnimatorJobExtensions_BindStreamProperty_m02E8A9116C4DB619A2B4E28AEADC593ECDE78994 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindCustomStreamProperty_mFD263ACFEF7E93728830EFD5133399F922EF6504 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, String_t* ___1_property, int32_t ___2_propertyType, PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___3_propertyStreamHandle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamProperty_mE09521CB89443739B6428A0FD6B012D8C0601415 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___5_propertyStreamHandle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformSceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneTransform_m5C33CC9DC1C95933DA91E42411080A4DA49216C6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___2_transformSceneHandle, const RuntimeMethod* method) ;
// UnityEngine.Animations.PropertySceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 AnimatorJobExtensions_BindSceneProperty_m5D7AEB5EEDBC08245FDBE69BF129BF0CE66B7743 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertySceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneProperty_m7C4D6BE064BBE342314E1BCD6101F451794E0A11 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1* ___5_propertySceneHandle, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_mB618EFE75A50CBAA3EE6471E64A3E2CA2A2C90FD (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mC1A83A4F693AF3AB51BC592A0CE525CE4F320D6B (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_mC113F0B2F53847F9A6755B82D0AC53C971171CFD (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_m7229D5EFBA432665B9046FC3C21D463FFD281978 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_m310C17694D8D1B9D60D549259A39837F22FD3240 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m0CEFF9E4946BFDC4F7066BEB4C961169DBC5073F (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, int32_t ___1_stateMachinePathHash, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_m384B808E3961C6C2C375DF7487EF2B49E44E6CD7 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, int32_t ___1_stateMachinePathHash, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_m491D81A9A64DE4AE02415A5909B74AE947EAE1B9 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___3_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mF3130BE7BDD7C8B2470303FB1986A336E47CC98C (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___3_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_mD47A506ACE251A6341115CBE5607D05C01747127 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___3_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_m1A01C10E754426572C7BBA7AA13044FDA372FDFC (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___3_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_mCE3B4C71868B564EE6BE4B8663535058705C3B72 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___3_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m0399B12419A4F990F41BD589C833E2D2C0076762 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, int32_t ___1_stateMachinePathHash, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___2_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_mF8BB1A8851B0699FC1D85F538E16EF12C08BBB93 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, int32_t ___1_stateMachinePathHash, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___2_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_m9663A75D1016E16D7E3A48E2D4E6466A041A00AB (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_back(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke& marshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_cleanup(AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_com(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_com_back(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com& marshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_com_cleanup(AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AnimationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationEvent__ctor_mBC954085B1D18B436D08E7ADE3458B91E208F3B2 (AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___m_Time_0 = (0.0f);
		__this->___m_FunctionName_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FunctionName_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___m_StringParameter_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StringParameter_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___m_ObjectReferenceParameter_3 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReferenceParameter_3), (void*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL);
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StateSender_8), (void*)(AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AnimationClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip__ctor_m3F9B3DE671547640479DB976423EEBC689D26F79 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	{
		Motion__ctor_mB6190858E566BFA1B80D2E94B65CD27920A49443(__this, NULL);
		AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___0_self, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(___0_self);
}
// System.Void UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SampleAnimation_mD9BD020CC922D1E818D0C2163D543CF7BBAF6488 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, float ___1_time, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_go;
		float L_1 = ___1_time;
		int32_t L_2;
		L_2 = AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97(__this, NULL);
		AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904(L_0, __this, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,UnityEngine.AnimationClip,System.Single,UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___1_clip, float ___2_inTime, int32_t ___3_wrapMode, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904_ftn) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, float, int32_t);
	static AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,UnityEngine.AnimationClip,System.Single,UnityEngine.WrapMode)");
	_il2cpp_icall_func(___0_go, ___1_clip, ___2_inTime, ___3_wrapMode);
}
// System.Single UnityEngine.AnimationClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_length_mAD91A1C134662285F26886489AC2D8E0EC79AF41 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef float (*AnimationClip_get_length_mAD91A1C134662285F26886489AC2D8E0EC79AF41_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_length_mAD91A1C134662285F26886489AC2D8E0EC79AF41_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_length_mAD91A1C134662285F26886489AC2D8E0EC79AF41_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_length()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.AnimationClip::get_startTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_startTime_m276B72F71A7E8C761AD5232ACE232388879E7B9C (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef float (*AnimationClip_get_startTime_m276B72F71A7E8C761AD5232ACE232388879E7B9C_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_startTime_m276B72F71A7E8C761AD5232ACE232388879E7B9C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_startTime_m276B72F71A7E8C761AD5232ACE232388879E7B9C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_startTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.AnimationClip::get_stopTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_stopTime_m3823D1030E16F3ADE9B646CD249F52CEFBE5FE4D (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef float (*AnimationClip_get_stopTime_m3823D1030E16F3ADE9B646CD249F52CEFBE5FE4D_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_stopTime_m3823D1030E16F3ADE9B646CD249F52CEFBE5FE4D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_stopTime_m3823D1030E16F3ADE9B646CD249F52CEFBE5FE4D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_stopTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.AnimationClip::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_frameRate_mBECE2AAD43501FB8CE2E5F4302BD2989066AF242 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef float (*AnimationClip_get_frameRate_mBECE2AAD43501FB8CE2E5F4302BD2989066AF242_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_frameRate_mBECE2AAD43501FB8CE2E5F4302BD2989066AF242_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_frameRate_mBECE2AAD43501FB8CE2E5F4302BD2989066AF242_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_frameRate()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationClip::set_frameRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_frameRate_m68E3FF5D77738194EFEC9279F1B3FB1FCFEEED74 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_set_frameRate_m68E3FF5D77738194EFEC9279F1B3FB1FCFEEED74_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, float);
	static AnimationClip_set_frameRate_m68E3FF5D77738194EFEC9279F1B3FB1FCFEEED74_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_frameRate_m68E3FF5D77738194EFEC9279F1B3FB1FCFEEED74_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_frameRate(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, String_t* ___0_relativePath, Type_t* ___1_type, String_t* ___2_propertyName, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___3_curve, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, String_t*, Type_t*, String_t*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*);
	static AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)");
	_il2cpp_icall_func(__this, ___0_relativePath, ___1_type, ___2_propertyName, ___3_curve);
}
// System.Void UnityEngine.AnimationClip::EnsureQuaternionContinuity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_EnsureQuaternionContinuity_m9D02889DCA683AA8B285BD6A26A44B8FD615A5EF (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_EnsureQuaternionContinuity_m9D02889DCA683AA8B285BD6A26A44B8FD615A5EF_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_EnsureQuaternionContinuity_m9D02889DCA683AA8B285BD6A26A44B8FD615A5EF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_EnsureQuaternionContinuity_m9D02889DCA683AA8B285BD6A26A44B8FD615A5EF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::EnsureQuaternionContinuity()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationClip::ClearCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_ClearCurves_m4544088FCCDA4CA2B5B5D3336546F3893030232C (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_ClearCurves_m4544088FCCDA4CA2B5B5D3336546F3893030232C_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_ClearCurves_m4544088FCCDA4CA2B5B5D3336546F3893030232C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_ClearCurves_m4544088FCCDA4CA2B5B5D3336546F3893030232C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::ClearCurves()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.WrapMode UnityEngine.AnimationClip::get_wrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_wrapMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationClip::set_wrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_wrapMode_mC6BA022CE7B92CE00A98FA757576847319788AD6 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_set_wrapMode_mC6BA022CE7B92CE00A98FA757576847319788AD6_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, int32_t);
	static AnimationClip_set_wrapMode_mC6BA022CE7B92CE00A98FA757576847319788AD6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_wrapMode_mC6BA022CE7B92CE00A98FA757576847319788AD6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_wrapMode(UnityEngine.WrapMode)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.Bounds UnityEngine.AnimationClip::get_localBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 AnimationClip_get_localBounds_m88CCD1318AAD9B01899E41BB16A4F83D15933348 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationClip_get_localBounds_Injected_mC0067D51DBD55799EFCD7B1EC041DEBD1B2C7F53(__this, (&V_0), NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.AnimationClip::set_localBounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_localBounds_m84BA2E46FC222551E4280B4C11BDB25B5232DB09 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_value, const RuntimeMethod* method) 
{
	{
		AnimationClip_set_localBounds_Injected_mDB992FAF16AA2D4E92AC432F1B98162EB10F1044(__this, (&___0_value), NULL);
		return;
	}
}
// System.Boolean UnityEngine.AnimationClip::get_legacy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_legacy_m2ACB9171DA504B26635D0C0CFF64D5F4DEF9C82B (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_legacy_m2ACB9171DA504B26635D0C0CFF64D5F4DEF9C82B_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_legacy_m2ACB9171DA504B26635D0C0CFF64D5F4DEF9C82B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_legacy_m2ACB9171DA504B26635D0C0CFF64D5F4DEF9C82B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_legacy()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationClip::set_legacy(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, bool);
	static AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_legacy(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Boolean UnityEngine.AnimationClip::get_humanMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_humanMotion_m34334767A9BD7E78BDCF577F14AFD10B2412FE06 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_humanMotion_m34334767A9BD7E78BDCF577F14AFD10B2412FE06_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_humanMotion_m34334767A9BD7E78BDCF577F14AFD10B2412FE06_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_humanMotion_m34334767A9BD7E78BDCF577F14AFD10B2412FE06_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_humanMotion()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_empty_mA55084A0DDBE57E75DC412FCEE2285626E76B986 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_empty_mA55084A0DDBE57E75DC412FCEE2285626E76B986_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_empty_mA55084A0DDBE57E75DC412FCEE2285626E76B986_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_empty_mA55084A0DDBE57E75DC412FCEE2285626E76B986_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_empty()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasGenericRootTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasGenericRootTransform_mED40404C94754A7CE75E96EF8C2CE35CB71B343F (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_hasGenericRootTransform_mED40404C94754A7CE75E96EF8C2CE35CB71B343F_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_hasGenericRootTransform_mED40404C94754A7CE75E96EF8C2CE35CB71B343F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasGenericRootTransform_mED40404C94754A7CE75E96EF8C2CE35CB71B343F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasGenericRootTransform()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasMotionFloatCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasMotionFloatCurves_m66FC0D4BAF9A7BEC0A19DE07CCAB97217A4D1698 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_hasMotionFloatCurves_m66FC0D4BAF9A7BEC0A19DE07CCAB97217A4D1698_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_hasMotionFloatCurves_m66FC0D4BAF9A7BEC0A19DE07CCAB97217A4D1698_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasMotionFloatCurves_m66FC0D4BAF9A7BEC0A19DE07CCAB97217A4D1698_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasMotionFloatCurves()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasMotionCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasMotionCurves_m36F62751D417AC698D8D60A5C43E4EAA49B4FDAF (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_hasMotionCurves_m36F62751D417AC698D8D60A5C43E4EAA49B4FDAF_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_hasMotionCurves_m36F62751D417AC698D8D60A5C43E4EAA49B4FDAF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasMotionCurves_m36F62751D417AC698D8D60A5C43E4EAA49B4FDAF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasMotionCurves()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasRootCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasRootCurves_mD871E5382B94163A7CA3B917BBAC50F0E1405B81 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_hasRootCurves_mD871E5382B94163A7CA3B917BBAC50F0E1405B81_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_hasRootCurves_mD871E5382B94163A7CA3B917BBAC50F0E1405B81_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasRootCurves_mD871E5382B94163A7CA3B917BBAC50F0E1405B81_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasRootCurves()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasRootMotion_mF736536B45B62D56EBD402A8A033767A88CFAE3E (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_hasRootMotion_mF736536B45B62D56EBD402A8A033767A88CFAE3E_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_hasRootMotion_mF736536B45B62D56EBD402A8A033767A88CFAE3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasRootMotion_mF736536B45B62D56EBD402A8A033767A88CFAE3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasRootMotion()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationClip::AddEvent(UnityEngine.AnimationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_AddEvent_m7678C740737DCE2CA8ABC4DDE8508B46FE3C1655 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* ___0_evt, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* L_0 = ___0_evt;
		V_0 = (bool)((((RuntimeObject*)(AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7306902767BBF9821FC01DF5423B33158A3F6ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationClip_AddEvent_m7678C740737DCE2CA8ABC4DDE8508B46FE3C1655_RuntimeMethod_var)));
	}

IL_0014:
	{
		AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* L_3 = ___0_evt;
		AnimationClip_AddEventInternal_m263CAF515A649EF219602FDFF556BAC04B3D54DD(__this, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::AddEventInternal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_AddEventInternal_m263CAF515A649EF219602FDFF556BAC04B3D54DD (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, RuntimeObject* ___0_evt, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_AddEventInternal_m263CAF515A649EF219602FDFF556BAC04B3D54DD_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, RuntimeObject*);
	static AnimationClip_AddEventInternal_m263CAF515A649EF219602FDFF556BAC04B3D54DD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_AddEventInternal_m263CAF515A649EF219602FDFF556BAC04B3D54DD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::AddEventInternal(System.Object)");
	_il2cpp_icall_func(__this, ___0_evt);
}
// UnityEngine.AnimationEvent[] UnityEngine.AnimationClip::get_events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E* AnimationClip_get_events_m700FBB913D1FD2E715139B5C9D9D03B6D8B0078D (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E* V_0 = NULL;
	{
		RuntimeArray* L_0;
		L_0 = AnimationClip_GetEventsInternal_mF2E21B70DC3E96105B7F696767FEA06400EF805F(__this, NULL);
		V_0 = ((AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E*)Castclass((RuntimeObject*)L_0, AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AnimationClip::set_events(UnityEngine.AnimationEvent[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_events_m809F2620D1F000B644AB2A1903BEA342EFC33001 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E* ___0_value, const RuntimeMethod* method) 
{
	{
		AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E* L_0 = ___0_value;
		AnimationClip_SetEventsInternal_m8CA32C344715FD2B5558547DDC7ABA4604EA6F13(__this, (RuntimeArray*)L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::SetEventsInternal(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SetEventsInternal_m8CA32C344715FD2B5558547DDC7ABA4604EA6F13 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, RuntimeArray* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_SetEventsInternal_m8CA32C344715FD2B5558547DDC7ABA4604EA6F13_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, RuntimeArray*);
	static AnimationClip_SetEventsInternal_m8CA32C344715FD2B5558547DDC7ABA4604EA6F13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SetEventsInternal_m8CA32C344715FD2B5558547DDC7ABA4604EA6F13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SetEventsInternal(System.Array)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Array UnityEngine.AnimationClip::GetEventsInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* AnimationClip_GetEventsInternal_mF2E21B70DC3E96105B7F696767FEA06400EF805F (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef RuntimeArray* (*AnimationClip_GetEventsInternal_mF2E21B70DC3E96105B7F696767FEA06400EF805F_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_GetEventsInternal_mF2E21B70DC3E96105B7F696767FEA06400EF805F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_GetEventsInternal_mF2E21B70DC3E96105B7F696767FEA06400EF805F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::GetEventsInternal()");
	RuntimeArray* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationClip::get_localBounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_get_localBounds_Injected_mC0067D51DBD55799EFCD7B1EC041DEBD1B2C7F53 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_get_localBounds_Injected_mC0067D51DBD55799EFCD7B1EC041DEBD1B2C7F53_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*);
	static AnimationClip_get_localBounds_Injected_mC0067D51DBD55799EFCD7B1EC041DEBD1B2C7F53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_localBounds_Injected_mC0067D51DBD55799EFCD7B1EC041DEBD1B2C7F53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_localBounds_Injected(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.AnimationClip::set_localBounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_localBounds_Injected_mDB992FAF16AA2D4E92AC432F1B98162EB10F1044 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_set_localBounds_Injected_mDB992FAF16AA2D4E92AC432F1B98162EB10F1044_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*);
	static AnimationClip_set_localBounds_Injected_mDB992FAF16AA2D4E92AC432F1B98162EB10F1044_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_localBounds_Injected_mDB992FAF16AA2D4E92AC432F1B98162EB10F1044_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_localBounds_Injected(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___0_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.AnimatorStateInfo::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_length_m2FAE317264F7C796427207F8F28E550DB49F9541 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Length_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AnimatorStateInfo_get_length_m2FAE317264F7C796427207F8F28E550DB49F9541_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*>(__this + _offset);
	float _returnValue;
	_returnValue = AnimatorStateInfo_get_length_m2FAE317264F7C796427207F8F28E550DB49F9541(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.___m_HasFixedDuration_3);
	marshaled.___m_Duration_4 = unmarshaled.___m_Duration_4;
	marshaled.___m_NormalizedTime_5 = unmarshaled.___m_NormalizedTime_5;
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.___m_AnyState_6);
	marshaled.___m_TransitionType_7 = unmarshaled.___m_TransitionType_7;
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_back(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke& marshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled)
{
	int32_t unmarshaledm_FullPath_temp_0 = 0;
	unmarshaledm_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_FullPath_0 = unmarshaledm_FullPath_temp_0;
	int32_t unmarshaledm_UserName_temp_1 = 0;
	unmarshaledm_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_UserName_1 = unmarshaledm_UserName_temp_1;
	int32_t unmarshaledm_Name_temp_2 = 0;
	unmarshaledm_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.___m_Name_2 = unmarshaledm_Name_temp_2;
	bool unmarshaledm_HasFixedDuration_temp_3 = false;
	unmarshaledm_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.___m_HasFixedDuration_3 = unmarshaledm_HasFixedDuration_temp_3;
	float unmarshaledm_Duration_temp_4 = 0.0f;
	unmarshaledm_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.___m_Duration_4 = unmarshaledm_Duration_temp_4;
	float unmarshaledm_NormalizedTime_temp_5 = 0.0f;
	unmarshaledm_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.___m_NormalizedTime_5 = unmarshaledm_NormalizedTime_temp_5;
	bool unmarshaledm_AnyState_temp_6 = false;
	unmarshaledm_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.___m_AnyState_6 = unmarshaledm_AnyState_temp_6;
	int32_t unmarshaledm_TransitionType_temp_7 = 0;
	unmarshaledm_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.___m_TransitionType_7 = unmarshaledm_TransitionType_temp_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_cleanup(AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_com(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.___m_HasFixedDuration_3);
	marshaled.___m_Duration_4 = unmarshaled.___m_Duration_4;
	marshaled.___m_NormalizedTime_5 = unmarshaled.___m_NormalizedTime_5;
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.___m_AnyState_6);
	marshaled.___m_TransitionType_7 = unmarshaled.___m_TransitionType_7;
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_com_back(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com& marshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled)
{
	int32_t unmarshaledm_FullPath_temp_0 = 0;
	unmarshaledm_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_FullPath_0 = unmarshaledm_FullPath_temp_0;
	int32_t unmarshaledm_UserName_temp_1 = 0;
	unmarshaledm_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_UserName_1 = unmarshaledm_UserName_temp_1;
	int32_t unmarshaledm_Name_temp_2 = 0;
	unmarshaledm_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.___m_Name_2 = unmarshaledm_Name_temp_2;
	bool unmarshaledm_HasFixedDuration_temp_3 = false;
	unmarshaledm_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.___m_HasFixedDuration_3 = unmarshaledm_HasFixedDuration_temp_3;
	float unmarshaledm_Duration_temp_4 = 0.0f;
	unmarshaledm_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.___m_Duration_4 = unmarshaledm_Duration_temp_4;
	float unmarshaledm_NormalizedTime_temp_5 = 0.0f;
	unmarshaledm_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.___m_NormalizedTime_5 = unmarshaledm_NormalizedTime_temp_5;
	bool unmarshaledm_AnyState_temp_6 = false;
	unmarshaledm_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.___m_AnyState_6 = unmarshaledm_AnyState_temp_6;
	int32_t unmarshaledm_TransitionType_temp_7 = 0;
	unmarshaledm_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.___m_TransitionType_7 = unmarshaledm_TransitionType_temp_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_com_cleanup(AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animator::get_isOptimizable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isOptimizable_mEFD0F96698EF9ED2D9DB8A4DA795E78EF48088C2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_isOptimizable_mEFD0F96698EF9ED2D9DB8A4DA795E78EF48088C2_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_isOptimizable_mEFD0F96698EF9ED2D9DB8A4DA795E78EF48088C2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isOptimizable_mEFD0F96698EF9ED2D9DB8A4DA795E78EF48088C2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isOptimizable()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_isHuman()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isHuman_mE1154471F516DA8BB47B0605410640344028E2A0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_isHuman_mE1154471F516DA8BB47B0605410640344028E2A0_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_isHuman_mE1154471F516DA8BB47B0605410640344028E2A0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isHuman_mE1154471F516DA8BB47B0605410640344028E2A0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isHuman()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_hasRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasRootMotion_mA39728839F19F4E103CF2599281E6F796D2AB341 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_hasRootMotion_mA39728839F19F4E103CF2599281E6F796D2AB341_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_hasRootMotion_mA39728839F19F4E103CF2599281E6F796D2AB341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasRootMotion_mA39728839F19F4E103CF2599281E6F796D2AB341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasRootMotion()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_isRootPositionOrRotationControlledByCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isRootPositionOrRotationControlledByCurves_mC87A9D341EA194B66C41198B0273589EB6B3605A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_isRootPositionOrRotationControlledByCurves_mC87A9D341EA194B66C41198B0273589EB6B3605A_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_isRootPositionOrRotationControlledByCurves_mC87A9D341EA194B66C41198B0273589EB6B3605A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isRootPositionOrRotationControlledByCurves_mC87A9D341EA194B66C41198B0273589EB6B3605A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isRootPositionOrRotationControlledByCurves()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::get_humanScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_humanScale_m4E9B17E752307329C2F19BB1CFEDB6180976F7B6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_humanScale_m4E9B17E752307329C2F19BB1CFEDB6180976F7B6_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_humanScale_m4E9B17E752307329C2F19BB1CFEDB6180976F7B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_humanScale_m4E9B17E752307329C2F19BB1CFEDB6180976F7B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_humanScale()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_isInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isInitialized_m22DA9FAA80F43CBADDD6CDA73BAAE49752E03806 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_isInitialized_m22DA9FAA80F43CBADDD6CDA73BAAE49752E03806_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_isInitialized_m22DA9FAA80F43CBADDD6CDA73BAAE49752E03806_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isInitialized_m22DA9FAA80F43CBADDD6CDA73BAAE49752E03806_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isInitialized()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_m10B455A15EB343175518CCBEE2818C2497CC678A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		String_t* L_0 = ___0_name;
		float L_1;
		L_1 = Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_mEFA968AD9EEB92E6A03AEEB968600798E61F9B1D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___0_id;
		float L_1;
		L_1 = Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		float L_1 = ___1_value;
		Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m018FC1B8BBA989887545ABEF5FB611087F23A4C0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, float ___2_dampTime, float ___3_deltaTime, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		float L_1 = ___1_value;
		float L_2 = ___2_dampTime;
		float L_3 = ___3_deltaTime;
		Animator_SetFloatStringDamp_m81B394E6887978F4A8A92ACF1C7138B23BFC9214(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		float L_1 = ___1_value;
		Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m3FFF291B541476DE7EB1D6432169ECDCBEC7FCD2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, float ___2_dampTime, float ___3_deltaTime, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		float L_1 = ___1_value;
		float L_2 = ___2_dampTime;
		float L_3 = ___3_deltaTime;
		Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = Animator_GetBoolString_m8698CB03DDD5DF7B991EC772BC424F2A649EB950(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_mFEC9C0565C52965FBD5D6A02084484F00F8ECE2C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_id;
		bool L_1;
		L_1 = Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_value;
		Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, bool ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		bool L_1 = ___1_value;
		Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_m8DA635E4373A1E7D649B2BA2DEF382D87EFE603C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_name;
		int32_t L_1;
		L_1 = Animator_GetIntegerString_m591359704EA3449A83C698CD72EBB7A6FC5F6D9D(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Animator::GetInteger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_mF4E1564D3791C968FA8952954B5AAC4C4E2C8B91 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_id;
		int32_t L_1;
		L_1 = Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_value;
		Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mE823EC7492A7FB266FA723C168226D17085DF3E8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ___1_value;
		Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m2DF2C6DE87314918C151616FD5C39EB93EE14011 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		Animator_ResetTriggerID_mD3E0C24AC862F049622D09933E7A3A2CDE256C13(__this, L_0, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurve(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurve_mC65B475495D9A4B01BF5BD33E2899E87245375DE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurve(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurve_mE62E4CAE2725D8AD214D59FF459F63157818C7DF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_id;
		bool L_1;
		L_1 = Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_deltaPosition_m1759DB2D343FDAFAA7FE85ED66451D5210B0A606 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_deltaRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_deltaRotation_m54839D596F81D477E91E2746E4141AB389238FFD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD(__this, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_velocity_mBEC30469C1011C8C92E7991D039D06945FF263BA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_velocity_Injected_mB47827ADE9F826A2ECA302EB7751371A9F18A57E(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_angularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_angularVelocity_m69E6F9C74F6E54F43BBB945E0E8F71CDAF4820B1 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_angularVelocity_Injected_m316C33CD3C5CF4F7AA8E53FEB0741B7E1C3D4537(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_rootPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_rootPosition_m952907486F631E7E8E0384AE7CE86D92BB3C6E71 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_rootPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_rootPosition_m29463566F2F73908602CFB2A59B86310A844286F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Animator_set_rootPosition_Injected_m9F65EF589C17FECC4350D1D193C20B7741BD7312(__this, (&___0_value), NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_rootRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_rootRotation_mE913E618AC95BE36524C88A77D087E67579FAF46 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB(__this, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_rootRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_rootRotation_m916D8E03CAA17B4BD68343BE6CDA3307A0E43B3F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		Animator_set_rootRotation_Injected_m4DF71DAF4F3EE3B4D460FAB3360E00C74027F11A(__this, (&___0_value), NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::get_applyRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_applyRootMotion_mC8C4D583F86A9E0B1BF395BBFFAACACD496EDBB8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_applyRootMotion_mC8C4D583F86A9E0B1BF395BBFFAACACD496EDBB8_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_applyRootMotion_mC8C4D583F86A9E0B1BF395BBFFAACACD496EDBB8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_applyRootMotion_mC8C4D583F86A9E0B1BF395BBFFAACACD496EDBB8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_applyRootMotion()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_applyRootMotion(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Boolean UnityEngine.Animator::get_linearVelocityBlending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_linearVelocityBlending_mD41FD1EE51B7E464CE370EB70F2DAF4546DF9A7F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_linearVelocityBlending_mD41FD1EE51B7E464CE370EB70F2DAF4546DF9A7F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_linearVelocityBlending_mD41FD1EE51B7E464CE370EB70F2DAF4546DF9A7F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_linearVelocityBlending_mD41FD1EE51B7E464CE370EB70F2DAF4546DF9A7F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_linearVelocityBlending()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_linearVelocityBlending(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_linearVelocityBlending_m1F47CE5FC0467A772EBD2F4610BBD6B45F92FB2D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_linearVelocityBlending_m1F47CE5FC0467A772EBD2F4610BBD6B45F92FB2D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_linearVelocityBlending_m1F47CE5FC0467A772EBD2F4610BBD6B45F92FB2D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_linearVelocityBlending_m1F47CE5FC0467A772EBD2F4610BBD6B45F92FB2D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_linearVelocityBlending(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Boolean UnityEngine.Animator::get_animatePhysics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_animatePhysics_m4419359F5EB230CF2C6BA7986529E3F08FFC3BC6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_animatePhysics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_animatePhysics_m5701A0DE6FE0D29B4746B9A1CDA307FD1E76C819 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) 
{
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B2_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B3_1 = NULL;
	{
		bool L_0 = ___0_value;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		NullCheck(G_B3_1);
		Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056(G_B3_1, G_B3_0, NULL);
		return;
	}
}
// UnityEngine.AnimatorUpdateMode UnityEngine.Animator::get_updateMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_updateMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Boolean UnityEngine.Animator::get_hasTransformHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasTransformHierarchy_m45669F672E3EFC79FCCE1179BE17B9F8095FB946 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_hasTransformHierarchy_m45669F672E3EFC79FCCE1179BE17B9F8095FB946_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_hasTransformHierarchy_m45669F672E3EFC79FCCE1179BE17B9F8095FB946_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasTransformHierarchy_m45669F672E3EFC79FCCE1179BE17B9F8095FB946_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasTransformHierarchy()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_allowConstantClipSamplingOptimization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_allowConstantClipSamplingOptimization_m21D999899FCFEFB076185D84675EEF7415604080 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_allowConstantClipSamplingOptimization_m21D999899FCFEFB076185D84675EEF7415604080_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_allowConstantClipSamplingOptimization_m21D999899FCFEFB076185D84675EEF7415604080_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_allowConstantClipSamplingOptimization_m21D999899FCFEFB076185D84675EEF7415604080_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_allowConstantClipSamplingOptimization()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_allowConstantClipSamplingOptimization(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_allowConstantClipSamplingOptimization_mD15A77BF2EDA9211776455E41D0F41F2685D7AA5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_allowConstantClipSamplingOptimization_mD15A77BF2EDA9211776455E41D0F41F2685D7AA5_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_allowConstantClipSamplingOptimization_mD15A77BF2EDA9211776455E41D0F41F2685D7AA5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_allowConstantClipSamplingOptimization_mD15A77BF2EDA9211776455E41D0F41F2685D7AA5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_allowConstantClipSamplingOptimization(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Single UnityEngine.Animator::get_gravityWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_gravityWeight_m5414ADEF41113A6B7C8FAE281578DA1DD607CB00 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_gravityWeight_m5414ADEF41113A6B7C8FAE281578DA1DD607CB00_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_gravityWeight_m5414ADEF41113A6B7C8FAE281578DA1DD607CB00_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_gravityWeight_m5414ADEF41113A6B7C8FAE281578DA1DD607CB00_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_gravityWeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Vector3 UnityEngine.Animator::get_bodyPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_bodyPosition_m0372578D2966019ED1CE5F3AEC1DE6F74DC6EADE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Animator_get_bodyPositionInternal_m595442E15D03EA53B40C2760C99B4D52C536EF06(__this, NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_bodyPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyPosition_m7CFDA1C974A11D5BFC52181879A25FA8AEAFFC61 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		Animator_set_bodyPositionInternal_m6042D23A6CC550D438B4522C4755BD08692D2F1A(__this, L_0, NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_bodyPositionInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_bodyPositionInternal_m595442E15D03EA53B40C2760C99B4D52C536EF06 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_bodyPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_m6042D23A6CC550D438B4522C4755BD08692D2F1A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75(__this, (&___0_value), NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_bodyRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_bodyRotation_mAC0517419CDE876795D7AD59253E3B4F8628091F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Animator_get_bodyRotationInternal_m62411259235851629AB914E29B04029A04D8F165(__this, NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_bodyRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyRotation_m8763282BEFDD626963D985435E3BC3FE576E27BC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		Animator_set_bodyRotationInternal_mA381F771D03290AF383D3203071D9B04746BD2E6(__this, L_0, NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_bodyRotationInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_bodyRotationInternal_m62411259235851629AB914E29B04029A04D8F165 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E(__this, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_bodyRotationInternal(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_mA381F771D03290AF383D3203071D9B04746BD2E6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173(__this, (&___0_value), NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetIKPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetIKPosition_m626E887B0E039C8F79D0A942D469880B05A58962 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Animator_GetGoalPosition_mE65C3AB94643D8036BF6C8014408CAB0F9BB5A98(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetGoalPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetGoalPosition_mE65C3AB94643D8036BF6C8014408CAB0F9BB5A98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_goal;
		Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetIKPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPosition_mB7BE88C93990186D94AF75439E2F216D6ECBCDEE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_goalPosition, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_goalPosition;
		Animator_SetGoalPosition_m0811DE827A66638ECA79A2BAA6A59D9D21D7D5A2(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_m0811DE827A66638ECA79A2BAA6A59D9D21D7D5A2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_goalPosition, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_goal;
		Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707(__this, L_0, (&___1_goalPosition), NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetIKRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_GetIKRotation_mF2969E5FBD59C125EF95AB689A9B3AAB434F79FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Animator_GetGoalRotation_mB7B67DE4EBA3C26D713754D1D76D4F529E783DB2(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetGoalRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_GetGoalRotation_mB7B67DE4EBA3C26D713754D1D76D4F529E783DB2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_goal;
		Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75(__this, L_0, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetIKRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotation_m328A64AD20922F0F2A1D0CD5DBB9F01FE7675DF6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_goalRotation, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_goalRotation;
		Animator_SetGoalRotation_m1BFE2425DE75954B1233ABD96D6AB3682D42E5BA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_m1BFE2425DE75954B1233ABD96D6AB3682D42E5BA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_goalRotation, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_goal;
		Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045(__this, L_0, (&___1_goalRotation), NULL);
		return;
	}
}
// System.Single UnityEngine.Animator::GetIKPositionWeight(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetIKPositionWeight_mA79A863ED8F5E8095FCC9545CCB55483328B3D99 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		float L_1;
		L_1 = Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetGoalWeightPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalWeightPosition(UnityEngine.AvatarIKGoal)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_goal);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetIKPositionWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPositionWeight_m8C707F505FFE2A6F36BE81ED12786B941D3B990C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, float ___1_value, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		float L_1 = ___1_value;
		Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___0_goal, ___1_value);
}
// System.Single UnityEngine.Animator::GetIKRotationWeight(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetIKRotationWeight_mC376AF1B02A0C1D15072AFE215B9D371B09D3059 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		float L_1;
		L_1 = Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetGoalWeightRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalWeightRotation(UnityEngine.AvatarIKGoal)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_goal);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetIKRotationWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotationWeight_m5F0F5BD5A9A85912EA1CDF32917FE483E849978D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, float ___1_value, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		float L_1 = ___1_value;
		Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___0_goal, ___1_value);
}
// UnityEngine.Vector3 UnityEngine.Animator::GetIKHintPosition(UnityEngine.AvatarIKHint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetIKHintPosition_m6FDF4F6FBFD9936686F514907126422A555BE020 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_hint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Animator_GetHintPosition_mD97BF99EB5303EAD560BFE087E07AC44E1FFF42E(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetHintPosition(UnityEngine.AvatarIKHint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetHintPosition_mD97BF99EB5303EAD560BFE087E07AC44E1FFF42E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_hint;
		Animator_GetHintPosition_Injected_m6BE0C46FE3B057D08BA4B111DB6340F958B33FD1(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetIKHintPosition(UnityEngine.AvatarIKHint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKHintPosition_m834ACA024C8824FD458A8F3A55AE40819A660A2F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_hintPosition, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_hint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_hintPosition;
		Animator_SetHintPosition_m446EFD046A753C0604A5487D9606F89A362653E2(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetHintPosition(UnityEngine.AvatarIKHint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetHintPosition_m446EFD046A753C0604A5487D9606F89A362653E2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_hintPosition, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_hint;
		Animator_SetHintPosition_Injected_mF7843586B3EA22A800A628735583620FFDF2ADC5(__this, L_0, (&___1_hintPosition), NULL);
		return;
	}
}
// System.Single UnityEngine.Animator::GetIKHintPositionWeight(UnityEngine.AvatarIKHint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetIKHintPositionWeight_m2DE07F51712E11FC8D929A149D70FE40498CD75D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_hint;
		float L_1;
		L_1 = Animator_GetHintWeightPosition_mE89238F7EB821743F245E2F9EA4BC8D3B3629830(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetHintWeightPosition(UnityEngine.AvatarIKHint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetHintWeightPosition_mE89238F7EB821743F245E2F9EA4BC8D3B3629830 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetHintWeightPosition_mE89238F7EB821743F245E2F9EA4BC8D3B3629830_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetHintWeightPosition_mE89238F7EB821743F245E2F9EA4BC8D3B3629830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetHintWeightPosition_mE89238F7EB821743F245E2F9EA4BC8D3B3629830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetHintWeightPosition(UnityEngine.AvatarIKHint)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_hint);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetIKHintPositionWeight(UnityEngine.AvatarIKHint,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKHintPositionWeight_m3F123E4F07C30ED041B3BB0616CFD9D9460910E9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, float ___1_value, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_hint;
		float L_1 = ___1_value;
		Animator_SetHintWeightPosition_m5BC635B929CACB43C9D5DE73AF292A423B8BF0ED(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetHintWeightPosition(UnityEngine.AvatarIKHint,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetHintWeightPosition_m5BC635B929CACB43C9D5DE73AF292A423B8BF0ED (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetHintWeightPosition_m5BC635B929CACB43C9D5DE73AF292A423B8BF0ED_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetHintWeightPosition_m5BC635B929CACB43C9D5DE73AF292A423B8BF0ED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetHintWeightPosition_m5BC635B929CACB43C9D5DE73AF292A423B8BF0ED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetHintWeightPosition(UnityEngine.AvatarIKHint,System.Single)");
	_il2cpp_icall_func(__this, ___0_hint, ___1_value);
}
// System.Void UnityEngine.Animator::SetLookAtPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPosition_m39A2C326BDE156360972C5EEDA1F9ACEBE34A8A6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lookAtPosition, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lookAtPosition;
		Animator_SetLookAtPositionInternal_m6A20F2667C36D8363BA0F38A961BAB941E2DDC1B(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_m6A20F2667C36D8363BA0F38A961BAB941E2DDC1B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lookAtPosition, const RuntimeMethod* method) 
{
	{
		Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D(__this, (&___0_lookAtPosition), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_mDCC8C8792E2E23C133AF3D91A96C49BEBC828F79 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_weight, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		float L_0 = ___0_weight;
		Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F(__this, L_0, (0.0f), (1.0f), (0.0f), (0.5f), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m0C4D297E270F7E852481EFBED321020E96EBD54D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_weight, float ___1_bodyWeight, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		float L_0 = ___0_weight;
		float L_1 = ___1_bodyWeight;
		Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F(__this, L_0, L_1, (1.0f), (0.0f), (0.5f), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_mD0D92A24E3789891D709E0DCD84524FAE614F870 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_weight, float ___1_bodyWeight, float ___2_headWeight, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		float L_0 = ___0_weight;
		float L_1 = ___1_bodyWeight;
		float L_2 = ___2_headWeight;
		Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F(__this, L_0, L_1, L_2, (0.0f), (0.5f), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m31AE829F22900AD67FA4840D488E1FA9E0880FB2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_weight, float ___1_bodyWeight, float ___2_headWeight, float ___3_eyesWeight, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		float L_0 = ___0_weight;
		float L_1 = ___1_bodyWeight;
		float L_2 = ___2_headWeight;
		float L_3 = ___3_eyesWeight;
		Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F(__this, L_0, L_1, L_2, L_3, (0.5f), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m536B18C7EC83703CF0320924D9FE13CBD93CC752 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_weight, float ___1_bodyWeight, float ___2_headWeight, float ___3_eyesWeight, float ___4_clampWeight, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		float L_0 = ___0_weight;
		float L_1 = ___1_bodyWeight;
		float L_2 = ___2_headWeight;
		float L_3 = ___3_eyesWeight;
		float L_4 = ___4_clampWeight;
		Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_weight, float ___1_bodyWeight, float ___2_headWeight, float ___3_eyesWeight, float ___4_clampWeight, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float, float, float, float, float);
	static Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___0_weight, ___1_bodyWeight, ___2_headWeight, ___3_eyesWeight, ___4_clampWeight);
}
// System.Void UnityEngine.Animator::SetBoneLocalRotation(UnityEngine.HumanBodyBones,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotation_m8294EB788C2BB23708025F5E0246061827321E6D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_humanBoneId, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_humanBoneId;
		int32_t L_1;
		L_1 = HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rotation;
		Animator_SetBoneLocalRotationInternal_m29A9991C7C688D3E2B6747C769358F4C935095C7(__this, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetBoneLocalRotationInternal(System.Int32,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotationInternal_m29A9991C7C688D3E2B6747C769358F4C935095C7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_humanBoneId, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_humanBoneId;
		Animator_SetBoneLocalRotationInternal_Injected_m4A2C1DAFEE4883C6A39D33CF56E8DC015D6A0EC5(__this, L_0, (&___1_rotation), NULL);
		return;
	}
}
// UnityEngine.ScriptableObject UnityEngine.Animator::GetBehaviour(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* Animator_GetBehaviour_mC89D3A58B66C9579FF8980C1F06F518A8C2E489D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	typedef ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* (*Animator_GetBehaviour_mC89D3A58B66C9579FF8980C1F06F518A8C2E489D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Type_t*);
	static Animator_GetBehaviour_mC89D3A58B66C9579FF8980C1F06F518A8C2E489D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBehaviour_mC89D3A58B66C9579FF8980C1F06F518A8C2E489D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBehaviour(System.Type)");
	ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* icallRetVal = _il2cpp_icall_func(__this, ___0_type);
	return icallRetVal;
}
// UnityEngine.ScriptableObject[] UnityEngine.Animator::InternalGetBehaviours(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* Animator_InternalGetBehaviours_m53FE16BAE89AAB75F82132643848FCBFDD441BFE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	typedef ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* (*Animator_InternalGetBehaviours_m53FE16BAE89AAB75F82132643848FCBFDD441BFE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Type_t*);
	static Animator_InternalGetBehaviours_m53FE16BAE89AAB75F82132643848FCBFDD441BFE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_InternalGetBehaviours_m53FE16BAE89AAB75F82132643848FCBFDD441BFE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::InternalGetBehaviours(System.Type)");
	ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* icallRetVal = _il2cpp_icall_func(__this, ___0_type);
	return icallRetVal;
}
// UnityEngine.StateMachineBehaviour[] UnityEngine.Animator::GetBehaviours(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89* Animator_GetBehaviours_m0CB79D09176BD9416D24A19702EDF37575BD9048 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_fullPathHash, int32_t ___1_layerIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89* V_0 = NULL;
	{
		int32_t L_0 = ___0_fullPathHash;
		int32_t L_1 = ___1_layerIndex;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* L_4;
		L_4 = Animator_InternalGetBehavioursByKey_m6B3048864D1DB2483F5298842E9384599FBB8E9F(__this, L_0, L_1, L_3, NULL);
		V_0 = ((StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89*)IsInst((RuntimeObject*)L_4, StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89_il2cpp_TypeInfo_var));
		goto IL_001b;
	}

IL_001b:
	{
		StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89* L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.ScriptableObject[] UnityEngine.Animator::InternalGetBehavioursByKey(System.Int32,System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* Animator_InternalGetBehavioursByKey_m6B3048864D1DB2483F5298842E9384599FBB8E9F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_fullPathHash, int32_t ___1_layerIndex, Type_t* ___2_type, const RuntimeMethod* method) 
{
	typedef ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* (*Animator_InternalGetBehavioursByKey_m6B3048864D1DB2483F5298842E9384599FBB8E9F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t, Type_t*);
	static Animator_InternalGetBehavioursByKey_m6B3048864D1DB2483F5298842E9384599FBB8E9F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_InternalGetBehavioursByKey_m6B3048864D1DB2483F5298842E9384599FBB8E9F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::InternalGetBehavioursByKey(System.Int32,System.Int32,System.Type)");
	ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* icallRetVal = _il2cpp_icall_func(__this, ___0_fullPathHash, ___1_layerIndex, ___2_type);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_stabilizeFeet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_stabilizeFeet_mB1C363699D45D67276ACA07C79FB257E1BB4F5DE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_stabilizeFeet_mB1C363699D45D67276ACA07C79FB257E1BB4F5DE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_stabilizeFeet_mB1C363699D45D67276ACA07C79FB257E1BB4F5DE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_stabilizeFeet_mB1C363699D45D67276ACA07C79FB257E1BB4F5DE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_stabilizeFeet()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_stabilizeFeet(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_stabilizeFeet_m4877796D25F5D046BA6FEF8CFDFEB470620801A0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_stabilizeFeet_m4877796D25F5D046BA6FEF8CFDFEB470620801A0_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_stabilizeFeet_m4877796D25F5D046BA6FEF8CFDFEB470620801A0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_stabilizeFeet_m4877796D25F5D046BA6FEF8CFDFEB470620801A0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_stabilizeFeet(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Int32 UnityEngine.Animator::get_layerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layerCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Animator::GetLayerName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_GetLayerName_m7458E91DE0B0769E79038DFEF32B750BE6801BA7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	typedef String_t* (*Animator_GetLayerName_m7458E91DE0B0769E79038DFEF32B750BE6801BA7_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetLayerName_m7458E91DE0B0769E79038DFEF32B750BE6801BA7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerName_m7458E91DE0B0769E79038DFEF32B750BE6801BA7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerName(System.Int32)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___0_layerIndex);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::GetLayerIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_layerName, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerIndex(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___0_layerName);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerWeight(System.Int32)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_layerIndex);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, float ___1_weight, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___0_layerIndex, ___1_weight);
}
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, int32_t ___1_stateInfoIndex, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* ___2_info, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*);
	static Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)");
	_il2cpp_icall_func(__this, ___0_layerIndex, ___1_stateInfoIndex, ___2_info);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_layerIndex;
		Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D(__this, L_0, 0, (&V_0), NULL);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1 = V_0;
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetNextAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetNextAnimatorStateInfo_m4661892C3F99329907EE3EE1C1FCB7974CDA2433 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_layerIndex;
		Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D(__this, L_0, 1, (&V_0), NULL);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1 = V_0;
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* ___1_info, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD*);
	static Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)");
	_il2cpp_icall_func(__this, ___0_layerIndex, ___1_info);
}
// UnityEngine.AnimatorTransitionInfo UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD Animator_GetAnimatorTransitionInfo_mAB532C0834DEF3685C6E16C82B7A93B8875FC542 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_layerIndex;
		Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9(__this, L_0, (&V_0), NULL);
		AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD L_1 = V_0;
		V_1 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD L_2 = V_1;
		return L_2;
	}
}
// System.Int32 UnityEngine.Animator::GetAnimatorClipInfoCount(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetAnimatorClipInfoCount_m83C02F470FEC1DAF548AB88C578B64B6B3BB8E9B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, bool ___1_current, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_GetAnimatorClipInfoCount_m83C02F470FEC1DAF548AB88C578B64B6B3BB8E9B_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, bool);
	static Animator_GetAnimatorClipInfoCount_m83C02F470FEC1DAF548AB88C578B64B6B3BB8E9B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorClipInfoCount_m83C02F470FEC1DAF548AB88C578B64B6B3BB8E9B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorClipInfoCount(System.Int32,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___0_layerIndex, ___1_current);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::GetCurrentAnimatorClipInfoCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetCurrentAnimatorClipInfoCount_mB506E49EC0B2DD764D78A21D6AE55B4E9AAB9AE4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_layerIndex;
		int32_t L_1;
		L_1 = Animator_GetAnimatorClipInfoCount_m83C02F470FEC1DAF548AB88C578B64B6B3BB8E9B(__this, L_0, (bool)1, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Animator::GetNextAnimatorClipInfoCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetNextAnimatorClipInfoCount_m079742F61B3A1616C4419C82F91B84BD9D5613CC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_layerIndex;
		int32_t L_1;
		L_1 = Animator_GetAnimatorClipInfoCount_m83C02F470FEC1DAF548AB88C578B64B6B3BB8E9B(__this, L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* Animator_GetCurrentAnimatorClipInfo_m963412D4118C301408B2EAFEF1E1CB5E971D5D92 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	typedef AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* (*Animator_GetCurrentAnimatorClipInfo_m963412D4118C301408B2EAFEF1E1CB5E971D5D92_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetCurrentAnimatorClipInfo_m963412D4118C301408B2EAFEF1E1CB5E971D5D92_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetCurrentAnimatorClipInfo_m963412D4118C301408B2EAFEF1E1CB5E971D5D92_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32)");
	AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* icallRetVal = _il2cpp_icall_func(__this, ___0_layerIndex);
	return icallRetVal;
}
// UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* Animator_GetNextAnimatorClipInfo_mF7B457B637128DFED6BAC15CBB45A9FE75205CFE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	typedef AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* (*Animator_GetNextAnimatorClipInfo_mF7B457B637128DFED6BAC15CBB45A9FE75205CFE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetNextAnimatorClipInfo_mF7B457B637128DFED6BAC15CBB45A9FE75205CFE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetNextAnimatorClipInfo_mF7B457B637128DFED6BAC15CBB45A9FE75205CFE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32)");
	AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* icallRetVal = _il2cpp_icall_func(__this, ___0_layerIndex);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetCurrentAnimatorClipInfo_m7C061EE420A67B7D751A2F34D38062FDFF064ED3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* ___1_clips, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* L_0 = ___1_clips;
		V_0 = (bool)((((RuntimeObject*)(List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05ACCFE2F05290DF031B27B4C6B2AD1DC43CCDC6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Animator_GetCurrentAnimatorClipInfo_m7C061EE420A67B7D751A2F34D38062FDFF064ED3_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___0_layerIndex;
		List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* L_4 = ___1_clips;
		Animator_GetAnimatorClipInfoInternal_m98028420AD065F1B6F3DC2EB4C6C2A42B8567600(__this, L_3, (bool)1, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorClipInfoInternal_m98028420AD065F1B6F3DC2EB4C6C2A42B8567600 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, bool ___1_isCurrent, RuntimeObject* ___2_clips, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetAnimatorClipInfoInternal_m98028420AD065F1B6F3DC2EB4C6C2A42B8567600_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, bool, RuntimeObject*);
	static Animator_GetAnimatorClipInfoInternal_m98028420AD065F1B6F3DC2EB4C6C2A42B8567600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorClipInfoInternal_m98028420AD065F1B6F3DC2EB4C6C2A42B8567600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)");
	_il2cpp_icall_func(__this, ___0_layerIndex, ___1_isCurrent, ___2_clips);
}
// System.Void UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetNextAnimatorClipInfo_m376D90AA469A7F7268B8D0E5B6930CE7095185D3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* ___1_clips, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* L_0 = ___1_clips;
		V_0 = (bool)((((RuntimeObject*)(List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05ACCFE2F05290DF031B27B4C6B2AD1DC43CCDC6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Animator_GetNextAnimatorClipInfo_m376D90AA469A7F7268B8D0E5B6930CE7095185D3_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___0_layerIndex;
		List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* L_4 = ___1_clips;
		Animator_GetAnimatorClipInfoInternal_m98028420AD065F1B6F3DC2EB4C6C2A42B8567600(__this, L_3, (bool)0, L_4, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInTransition(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_layerIndex);
	return icallRetVal;
}
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* (*Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_parameters()");
	AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::get_parameterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_parameterCount_m56BDA9B508904594E1B2317A451AC3E40A12943C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_get_parameterCount_m56BDA9B508904594E1B2317A451AC3E40A12943C_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_parameterCount_m56BDA9B508904594E1B2317A451AC3E40A12943C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_parameterCount_m56BDA9B508904594E1B2317A451AC3E40A12943C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_parameterCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.AnimatorControllerParameter UnityEngine.Animator::GetParameter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* Animator_GetParameter_m0F1E53A9845596EA75366518BEB15733FD4E124F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* V_3 = NULL;
	int32_t G_B3_0 = 0;
	{
		AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* L_0;
		L_0 = Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* L_3;
		L_3 = Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B(__this, NULL);
		NullCheck(L_3);
		G_B3_0 = ((((int32_t)((((int32_t)L_2) < ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* L_5;
		L_5 = Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B(__this, NULL);
		NullCheck(L_5);
		V_2 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A3C80CF84F07DA0E7531332FF2B387B07C77760)), L_6, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_8 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Animator_GetParameter_m0F1E53A9845596EA75366518BEB15733FD4E124F_RuntimeMethod_var)));
	}

IL_0041:
	{
		AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* L_9 = V_0;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		goto IL_0047;
	}

IL_0047:
	{
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_13 = V_3;
		return L_13;
	}
}
// System.Single UnityEngine.Animator::get_feetPivotActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_feetPivotActive_m6905716868666F1A61574A07DB455482CBC7B6CF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_feetPivotActive_m6905716868666F1A61574A07DB455482CBC7B6CF_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_feetPivotActive_m6905716868666F1A61574A07DB455482CBC7B6CF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_feetPivotActive_m6905716868666F1A61574A07DB455482CBC7B6CF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_feetPivotActive()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_feetPivotActive(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_feetPivotActive_m0683AF2FD4B62EB9330B7BC347BE189A90809C19 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_feetPivotActive_m0683AF2FD4B62EB9330B7BC347BE189A90809C19_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float);
	static Animator_set_feetPivotActive_m0683AF2FD4B62EB9330B7BC347BE189A90809C19_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_feetPivotActive_m0683AF2FD4B62EB9330B7BC347BE189A90809C19_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_feetPivotActive(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Single UnityEngine.Animator::get_pivotWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_pivotWeight_mFFD3DF6F4506AA829E3E6D726F21EB62EC6A4652 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_pivotWeight_mFFD3DF6F4506AA829E3E6D726F21EB62EC6A4652_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_pivotWeight_mFFD3DF6F4506AA829E3E6D726F21EB62EC6A4652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_pivotWeight_mFFD3DF6F4506AA829E3E6D726F21EB62EC6A4652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_pivotWeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Vector3 UnityEngine.Animator::get_pivotPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_pivotPosition_m2A6E669BC43633E12BEDF96ED73AB86EAACBA11B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,UnityEngine.MatchTargetWeightMask,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_mD1C55BE6B64912264BD1280498BFF938B8501596 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_matchPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_matchRotation, int32_t ___2_targetBodyPart, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 ___3_weightMask, float ___4_startNormalizedTime, float ___5_targetNormalizedTime, bool ___6_completeMatch, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___2_targetBodyPart;
		float L_1 = ___4_startNormalizedTime;
		float L_2 = ___5_targetNormalizedTime;
		bool L_3 = ___6_completeMatch;
		Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7(__this, (&___0_matchPosition), (&___1_matchRotation), L_0, (&___3_weightMask), L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_mBDD980442EC44131EFEED1EDF4FEFEE11B909576 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_matchPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_matchRotation, int32_t ___2_targetBodyPart, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 ___3_weightMask, float ___4_startNormalizedTime, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_matchPosition;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_matchRotation;
		int32_t L_2 = ___2_targetBodyPart;
		MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 L_3 = ___3_weightMask;
		float L_4 = ___4_startNormalizedTime;
		Animator_MatchTarget_mD1C55BE6B64912264BD1280498BFF938B8501596(__this, L_0, L_1, L_2, L_3, L_4, (1.0f), (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_m717CF5422596B401395BE3EDC510FFD34F85D337 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_matchPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_matchRotation, int32_t ___2_targetBodyPart, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 ___3_weightMask, float ___4_startNormalizedTime, float ___5_targetNormalizedTime, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_matchPosition;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_matchRotation;
		int32_t L_2 = ___2_targetBodyPart;
		MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 L_3 = ___3_weightMask;
		float L_4 = ___4_startNormalizedTime;
		float L_5 = ___5_targetNormalizedTime;
		Animator_MatchTarget_mD1C55BE6B64912264BD1280498BFF938B8501596(__this, L_0, L_1, L_2, L_3, L_4, L_5, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_mEFA2D3248BA083F5FA823D83B38E2306336293D3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_matchPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_matchRotation, int32_t ___2_targetBodyPart, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 ___3_weightMask, float ___4_startNormalizedTime, float ___5_targetNormalizedTime, bool ___6_completeMatch, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_matchPosition;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_matchRotation;
		int32_t L_2 = ___2_targetBodyPart;
		MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 L_3 = ___3_weightMask;
		float L_4 = ___4_startNormalizedTime;
		float L_5 = ___5_targetNormalizedTime;
		bool L_6 = ___6_completeMatch;
		Animator_MatchTarget_mD1C55BE6B64912264BD1280498BFF938B8501596(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::InterruptMatchTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_InterruptMatchTarget_mB031E84E81E760C7A5862324B868E76B030F8EF2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	{
		Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::InterruptMatchTarget(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_completeMatch, const RuntimeMethod* method) 
{
	typedef void (*Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::InterruptMatchTarget(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_completeMatch);
}
// System.Boolean UnityEngine.Animator::get_isMatchingTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isMatchingTarget_m56CCA705025C2057D60F5BB9724F864C8B2223B0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_isMatchingTarget_m56CCA705025C2057D60F5BB9724F864C8B2223B0_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_isMatchingTarget_m56CCA705025C2057D60F5BB9724F864C8B2223B0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isMatchingTarget_m56CCA705025C2057D60F5BB9724F864C8B2223B0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isMatchingTarget()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::get_speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_speed()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float);
	static Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Animator::ForceStateNormalizedTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ForceStateNormalizedTime_mFCEEEFD9CD18C26E7128691FCD758690E87AC305 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_normalizedTime, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_normalizedTime;
		Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD(__this, 0, 0, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_mF3F5670768653192DE1784DDAD591E73030F80AA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, float ___1_fixedTransitionDuration, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		V_2 = (-1);
		String_t* L_0 = ___0_stateName;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		float L_2 = ___1_fixedTransitionDuration;
		int32_t L_3 = V_2;
		float L_4 = V_1;
		float L_5 = V_0;
		Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D(__this, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m7F12206926BAF74D1385F1F8BAD36CBD3FDA4A51 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, float ___1_fixedTransitionDuration, int32_t ___2_layer, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		String_t* L_0 = ___0_stateName;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		float L_2 = ___1_fixedTransitionDuration;
		int32_t L_3 = ___2_layer;
		float L_4 = V_1;
		float L_5 = V_0;
		Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D(__this, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_mA1271920E97C315726655B0A5C31DAE69FAC6FC2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, float ___1_fixedTransitionDuration, int32_t ___2_layer, float ___3_fixedTimeOffset, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		String_t* L_0 = ___0_stateName;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		float L_2 = ___1_fixedTransitionDuration;
		int32_t L_3 = ___2_layer;
		float L_4 = ___3_fixedTimeOffset;
		float L_5 = V_0;
		Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D(__this, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_mD3A92E42D472130EE6948AFD9C2374334B6899B0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, float ___1_fixedTransitionDuration, int32_t ___2_layer, float ___3_fixedTimeOffset, float ___4_normalizedTransitionTime, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_stateName;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		float L_2 = ___1_fixedTransitionDuration;
		int32_t L_3 = ___2_layer;
		float L_4 = ___3_fixedTimeOffset;
		float L_5 = ___4_normalizedTransitionTime;
		Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D(__this, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_mC0A7F0188309753098EFF103FFA511A4377EEC55 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateHashName, float ___1_fixedTransitionDuration, int32_t ___2_layer, float ___3_fixedTimeOffset, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		int32_t L_0 = ___0_stateHashName;
		float L_1 = ___1_fixedTransitionDuration;
		int32_t L_2 = ___2_layer;
		float L_3 = ___3_fixedTimeOffset;
		float L_4 = V_0;
		Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m0723F8EDB1F6B0CDDF1E61914BFFBF3FD14ADD8B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateHashName, float ___1_fixedTransitionDuration, int32_t ___2_layer, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		int32_t L_0 = ___0_stateHashName;
		float L_1 = ___1_fixedTransitionDuration;
		int32_t L_2 = ___2_layer;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m31C6FDFE566373C35F8931DE921CAAC4131F1D25 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateHashName, float ___1_fixedTransitionDuration, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		V_2 = (-1);
		int32_t L_0 = ___0_stateHashName;
		float L_1 = ___1_fixedTransitionDuration;
		int32_t L_2 = V_2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateHashName, float ___1_fixedTransitionDuration, int32_t ___2_layer, float ___3_fixedTimeOffset, float ___4_normalizedTransitionTime, const RuntimeMethod* method) 
{
	typedef void (*Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float, int32_t, float, float);
	static Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___0_stateHashName, ___1_fixedTransitionDuration, ___2_layer, ___3_fixedTimeOffset, ___4_normalizedTransitionTime);
}
// System.Void UnityEngine.Animator::WriteDefaultValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_WriteDefaultValues_m28A53BD6205B7543B56F63E841AA4F8230EDD1FB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_WriteDefaultValues_m28A53BD6205B7543B56F63E841AA4F8230EDD1FB_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_WriteDefaultValues_m28A53BD6205B7543B56F63E841AA4F8230EDD1FB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_WriteDefaultValues_m28A53BD6205B7543B56F63E841AA4F8230EDD1FB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::WriteDefaultValues()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m2D91D6C458B15B186365EED0C13A178342789084 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, float ___1_normalizedTransitionDuration, int32_t ___2_layer, float ___3_normalizedTimeOffset, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		String_t* L_0 = ___0_stateName;
		float L_1 = ___1_normalizedTransitionDuration;
		int32_t L_2 = ___2_layer;
		float L_3 = ___3_normalizedTimeOffset;
		float L_4 = V_0;
		Animator_CrossFade_mA6769671098D9B30D68A27DF00D355CC5E28D56C(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m2710B834A3D8C5C222B2CC6BF6D307B7A138055C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, float ___1_normalizedTransitionDuration, int32_t ___2_layer, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___0_stateName;
		float L_1 = ___1_normalizedTransitionDuration;
		int32_t L_2 = ___2_layer;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_mA6769671098D9B30D68A27DF00D355CC5E28D56C(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m9896DFE98F7DC35199C7FDEB22E6645B6F53E998 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, float ___1_normalizedTransitionDuration, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = (-1);
		String_t* L_0 = ___0_stateName;
		float L_1 = ___1_normalizedTransitionDuration;
		int32_t L_2 = V_2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_mA6769671098D9B30D68A27DF00D355CC5E28D56C(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_mA6769671098D9B30D68A27DF00D355CC5E28D56C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, float ___1_normalizedTransitionDuration, int32_t ___2_layer, float ___3_normalizedTimeOffset, float ___4_normalizedTransitionTime, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_stateName;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		float L_2 = ___1_normalizedTransitionDuration;
		int32_t L_3 = ___2_layer;
		float L_4 = ___3_normalizedTimeOffset;
		float L_5 = ___4_normalizedTransitionTime;
		Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186(__this, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateHashName, float ___1_normalizedTransitionDuration, int32_t ___2_layer, float ___3_normalizedTimeOffset, float ___4_normalizedTransitionTime, const RuntimeMethod* method) 
{
	typedef void (*Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float, int32_t, float, float);
	static Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___0_stateHashName, ___1_normalizedTransitionDuration, ___2_layer, ___3_normalizedTimeOffset, ___4_normalizedTransitionTime);
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_mAE4ED75E850B05A529EE726E314EF15A988F37DF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateHashName, float ___1_normalizedTransitionDuration, int32_t ___2_layer, float ___3_normalizedTimeOffset, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		int32_t L_0 = ___0_stateHashName;
		float L_1 = ___1_normalizedTransitionDuration;
		int32_t L_2 = ___2_layer;
		float L_3 = ___3_normalizedTimeOffset;
		float L_4 = V_0;
		Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m140269A1067EC377112460CAE86409FD5A61104C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateHashName, float ___1_normalizedTransitionDuration, int32_t ___2_layer, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		int32_t L_0 = ___0_stateHashName;
		float L_1 = ___1_normalizedTransitionDuration;
		int32_t L_2 = ___2_layer;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m877FD25F61DCAF76F4B321153E4B37B220091C73 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateHashName, float ___1_normalizedTransitionDuration, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = (-1);
		int32_t L_0 = ___0_stateHashName;
		float L_1 = ___1_normalizedTransitionDuration;
		int32_t L_2 = V_2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_mAADE5EC387F7FF8FE6846E31B1EB5A6F28CC1AAF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, int32_t ___1_layer, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___0_stateName;
		int32_t L_1 = ___1_layer;
		float L_2 = V_0;
		Animator_PlayInFixedTime_m8E57011DAD1D97B8071B18115E09FB2151154E21(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m51356C96303FBDAE14D5D83453424F549152E2FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		String_t* L_0 = ___0_stateName;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_PlayInFixedTime_m8E57011DAD1D97B8071B18115E09FB2151154E21(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m8E57011DAD1D97B8071B18115E09FB2151154E21 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, int32_t ___1_layer, float ___2_fixedTime, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_stateName;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		int32_t L_2 = ___1_layer;
		float L_3 = ___2_fixedTime;
		Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D(__this, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateNameHash, int32_t ___1_layer, float ___2_fixedTime, const RuntimeMethod* method) 
{
	typedef void (*Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t, float);
	static Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___0_stateNameHash, ___1_layer, ___2_fixedTime);
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m2CA86C7A32EC02BCAD4EFD0B9CD53272BF06E025 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateNameHash, int32_t ___1_layer, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		int32_t L_0 = ___0_stateNameHash;
		int32_t L_1 = ___1_layer;
		float L_2 = V_0;
		Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_mF3630168236FF27D0AE2212E9CFCFC3F41542C10 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateNameHash, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		int32_t L_0 = ___0_stateNameHash;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m9B1CB1A22951C0B0758AA032F2349B6DD20E96C2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, int32_t ___1_layer, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___0_stateName;
		int32_t L_1 = ___1_layer;
		float L_2 = V_0;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		String_t* L_0 = ___0_stateName;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, int32_t ___1_layer, float ___2_normalizedTime, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_stateName;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		int32_t L_2 = ___1_layer;
		float L_3 = ___2_normalizedTime;
		Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD(__this, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateNameHash, int32_t ___1_layer, float ___2_normalizedTime, const RuntimeMethod* method) 
{
	typedef void (*Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t, float);
	static Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___0_stateNameHash, ___1_layer, ___2_normalizedTime);
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_mA4CA3959A5DBDA56A1B20D4B0E727FE592AAAABA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateNameHash, int32_t ___1_layer, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		int32_t L_0 = ___0_stateNameHash;
		int32_t L_1 = ___1_layer;
		float L_2 = V_0;
		Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_mBA96F0D84A982A338EC976A5EAFE886956AEDDCE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateNameHash, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		int32_t L_0 = ___0_stateNameHash;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTarget(UnityEngine.AvatarTarget,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTarget_mCE0C0F703C38FF190E4F093B394C1D2AFA80A0F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_targetIndex, float ___1_targetNormalizedTime, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetTarget_mCE0C0F703C38FF190E4F093B394C1D2AFA80A0F5_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetTarget_mCE0C0F703C38FF190E4F093B394C1D2AFA80A0F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTarget_mCE0C0F703C38FF190E4F093B394C1D2AFA80A0F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTarget(UnityEngine.AvatarTarget,System.Single)");
	_il2cpp_icall_func(__this, ___0_targetIndex, ___1_targetNormalizedTime);
}
// UnityEngine.Vector3 UnityEngine.Animator::get_targetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_targetPosition_m6A682300C052714BB55F68E192B4AD778179B43D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_targetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_targetRotation_m313EC3BE0F811C7FB61C475298BABFFAA11DA1DC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C(__this, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Animator::IsControlled(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsControlled_m1B8BC43EC53313ECC236FF01E01B86AE634ABCBF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Animator::IsBoneTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsBoneTransform_m8D7D99FD916A153C9560961FC918B0C87846E983 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsBoneTransform_m8D7D99FD916A153C9560961FC918B0C87846E983_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*);
	static Animator_IsBoneTransform_m8D7D99FD916A153C9560961FC918B0C87846E983_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsBoneTransform_m8D7D99FD916A153C9560961FC918B0C87846E983_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsBoneTransform(UnityEngine.Transform)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_transform);
	return icallRetVal;
}
// UnityEngine.Transform UnityEngine.Animator::get_avatarRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_get_avatarRoot_m6942EF35F6F2ACDF787772D405E17C3131A5CA95 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*Animator_get_avatarRoot_m6942EF35F6F2ACDF787772D405E17C3131A5CA95_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_avatarRoot_m6942EF35F6F2ACDF787772D405E17C3131A5CA95_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_avatarRoot_m6942EF35F6F2ACDF787772D405E17C3131A5CA95_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_avatarRoot()");
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransform(UnityEngine.HumanBodyBones)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_humanBoneId, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_humanBoneId;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_humanBoneId;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)55)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		V_1 = ((int32_t)55);
		Il2CppFakeBox<int32_t> L_3(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HumanBodyBones_tA2A904890A05ABCFFAB7E119244E97C5EA9807E6_il2cpp_TypeInfo_var)), (&V_1));
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00F97321929E0D7989E72D633D157BD761DD173A)), L_4, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56_RuntimeMethod_var)));
	}

IL_0034:
	{
		int32_t L_7 = ___0_humanBoneId;
		int32_t L_8;
		L_8 = HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857(__this, L_8, NULL);
		V_2 = L_9;
		goto IL_0043;
	}

IL_0043:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_2;
		return L_10;
	}
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_humanBoneId, const RuntimeMethod* method) 
{
	typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoneTransformInternal(System.Int32)");
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* icallRetVal = _il2cpp_icall_func(__this, ___0_humanBoneId);
	return icallRetVal;
}
// UnityEngine.AnimatorCullingMode UnityEngine.Animator::get_cullingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_cullingMode_m5C9C70B94075022FA6346E17CF1E9C0DEDB21605 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_get_cullingMode_m5C9C70B94075022FA6346E17CF1E9C0DEDB21605_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_cullingMode_m5C9C70B94075022FA6346E17CF1E9C0DEDB21605_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_cullingMode_m5C9C70B94075022FA6346E17CF1E9C0DEDB21605_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_cullingMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_cullingMode_m7520115B5460495336C87393B58014F412B24209 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_cullingMode_m7520115B5460495336C87393B58014F412B24209_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_set_cullingMode_m7520115B5460495336C87393B58014F412B24209_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_cullingMode_m7520115B5460495336C87393B58014F412B24209_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Animator::StartPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_StartPlayback_m981AE4C0AAEADFE8484C9C001FDA17D5D255D500 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_StartPlayback_m981AE4C0AAEADFE8484C9C001FDA17D5D255D500_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_StartPlayback_m981AE4C0AAEADFE8484C9C001FDA17D5D255D500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StartPlayback_m981AE4C0AAEADFE8484C9C001FDA17D5D255D500_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StartPlayback()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::StopPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StopPlayback()");
	_il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Animator::get_playbackTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_playbackTime_m11289709E35A3FF5D524FC92AF4CEA00B107BD3E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_playbackTime_m11289709E35A3FF5D524FC92AF4CEA00B107BD3E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_playbackTime_m11289709E35A3FF5D524FC92AF4CEA00B107BD3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_playbackTime_m11289709E35A3FF5D524FC92AF4CEA00B107BD3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_playbackTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_playbackTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_playbackTime_m223512B44026FAFDA2E25A321B6B0B6F57DB56FA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_playbackTime_m223512B44026FAFDA2E25A321B6B0B6F57DB56FA_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float);
	static Animator_set_playbackTime_m223512B44026FAFDA2E25A321B6B0B6F57DB56FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_playbackTime_m223512B44026FAFDA2E25A321B6B0B6F57DB56FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_playbackTime(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Animator::StartRecording(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_StartRecording_mCCD8C24752A76B5487592BE766D57E6874CCC40E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_frameCount, const RuntimeMethod* method) 
{
	typedef void (*Animator_StartRecording_mCCD8C24752A76B5487592BE766D57E6874CCC40E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_StartRecording_mCCD8C24752A76B5487592BE766D57E6874CCC40E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StartRecording_mCCD8C24752A76B5487592BE766D57E6874CCC40E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StartRecording(System.Int32)");
	_il2cpp_icall_func(__this, ___0_frameCount);
}
// System.Void UnityEngine.Animator::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_StopRecording_mF8048A93508F6159B2377D61AF3589340A6B5256 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_StopRecording_mF8048A93508F6159B2377D61AF3589340A6B5256_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_StopRecording_mF8048A93508F6159B2377D61AF3589340A6B5256_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StopRecording_mF8048A93508F6159B2377D61AF3589340A6B5256_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StopRecording()");
	_il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Animator::get_recorderStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_recorderStartTime_m9CB9520E347B1520B05052E31C4D8A701462E241 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_recorderStartTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_recorderStartTime_m968547A0E4BC7849B3D7EAB1389AA9A05EC80544 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Single UnityEngine.Animator::GetRecorderStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetRecorderStartTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::get_recorderStopTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_recorderStopTime_m675F4F5DC1AEDC41C456AAEE5F96F52AEA1E59A9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_recorderStopTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_recorderStopTime_m24BC4494E05B7682F3A23C5A0B0607F4D3385BE5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Single UnityEngine.Animator::GetRecorderStopTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetRecorderStopTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.AnimatorRecorderMode UnityEngine.Animator::get_recorderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_recorderMode_mB34DB4C5368F0D3BF86210F41900DF17A43B2DA0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_get_recorderMode_mB34DB4C5368F0D3BF86210F41900DF17A43B2DA0_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_recorderMode_mB34DB4C5368F0D3BF86210F41900DF17A43B2DA0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_recorderMode_mB34DB4C5368F0D3BF86210F41900DF17A43B2DA0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_recorderMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* (*Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254*);
	static Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasBoundPlayables()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::ClearInternalControllerPlayable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ClearInternalControllerPlayable_mBAE8D218945AF13E7ED60D7958F3155C341C8686 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_ClearInternalControllerPlayable_mBAE8D218945AF13E7ED60D7958F3155C341C8686_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_ClearInternalControllerPlayable_mBAE8D218945AF13E7ED60D7958F3155C341C8686_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ClearInternalControllerPlayable_mBAE8D218945AF13E7ED60D7958F3155C341C8686_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ClearInternalControllerPlayable()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Animator::HasState(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, int32_t ___1_stateID, const RuntimeMethod* method) 
{
	typedef bool (*Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t);
	static Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::HasState(System.Int32,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_layerIndex, ___1_stateID);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A_ftn) (String_t*);
	static Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_name);
	return icallRetVal;
}
// UnityEngine.Avatar UnityEngine.Animator::get_avatar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* Animator_get_avatar_m01E445FC754BC6F4A39639EAF68D3954580EAA67 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* (*Animator_get_avatar_m01E445FC754BC6F4A39639EAF68D3954580EAA67_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_avatar_m01E445FC754BC6F4A39639EAF68D3954580EAA67_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_avatar_m01E445FC754BC6F4A39639EAF68D3954580EAA67_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_avatar()");
	Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_avatar(UnityEngine.Avatar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*);
	static Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_avatar(UnityEngine.Avatar)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.String UnityEngine.Animator::GetStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_GetStats_m264013CFF4D9B247F2C683188CE3E0C8571197EC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*Animator_GetStats_m264013CFF4D9B247F2C683188CE3E0C8571197EC_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_GetStats_m264013CFF4D9B247F2C683188CE3E0C8571197EC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetStats_m264013CFF4D9B247F2C683188CE3E0C8571197EC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetStats()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Playables.PlayableGraph UnityEngine.Animator::get_playableGraph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E Animator_get_playableGraph_m118650892C13ED75C535C2A32CE09641C7E3BAD7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E));
		Animator_GetCurrentGraph_mDDDDABBEA3E4BBD025401F92FFFE5B71DAC9486F(__this, (&V_0), NULL);
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = V_0;
		V_1 = L_0;
		goto IL_0016;
	}

IL_0016:
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::GetCurrentGraph(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetCurrentGraph_mDDDDABBEA3E4BBD025401F92FFFE5B71DAC9486F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetCurrentGraph_mDDDDABBEA3E4BBD025401F92FFFE5B71DAC9486F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*);
	static Animator_GetCurrentGraph_mDDDDABBEA3E4BBD025401F92FFFE5B71DAC9486F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetCurrentGraph_mDDDDABBEA3E4BBD025401F92FFFE5B71DAC9486F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetCurrentGraph(UnityEngine.Playables.PlayableGraph&)");
	_il2cpp_icall_func(__this, ___0_graph);
}
// System.Void UnityEngine.Animator::CheckIfInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1DCB778EB9DF1B12AD26B829002FF8E78A1AFCE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1;
		L_1 = Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F(__this, NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralD1DCB778EB9DF1B12AD26B829002FF8E78A1AFCE, NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInIKPass()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*, float);
	static Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatString(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___0_name, ___1_value);
}
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___0_id, ___1_value);
}
// System.Single UnityEngine.Animator::GetFloatString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatString(System.String)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_name);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatID(System.Int32)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_id);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*, bool);
	static Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolString(System.String,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_name, ___1_value);
}
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, bool);
	static Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_id, ___1_value);
}
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolString_m8698CB03DDD5DF7B991EC772BC424F2A649EB950 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef bool (*Animator_GetBoolString_m8698CB03DDD5DF7B991EC772BC424F2A649EB950_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_GetBoolString_m8698CB03DDD5DF7B991EC772BC424F2A649EB950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolString_m8698CB03DDD5DF7B991EC772BC424F2A649EB950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolString(System.String)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_name);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef bool (*Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolID(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_id);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*, int32_t);
	static Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerString(System.String,System.Int32)");
	_il2cpp_icall_func(__this, ___0_name, ___1_value);
}
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t);
	static Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___0_id, ___1_value);
}
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerString_m591359704EA3449A83C698CD72EBB7A6FC5F6D9D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_GetIntegerString_m591359704EA3449A83C698CD72EBB7A6FC5F6D9D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_GetIntegerString_m591359704EA3449A83C698CD72EBB7A6FC5F6D9D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetIntegerString_m591359704EA3449A83C698CD72EBB7A6FC5F6D9D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetIntegerString(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___0_name);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetIntegerID(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___0_id);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___0_name);
}
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerID(System.Int32)");
	_il2cpp_icall_func(__this, ___0_id);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (*Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___0_name);
}
// System.Void UnityEngine.Animator::ResetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerID_mD3E0C24AC862F049622D09933E7A3A2CDE256C13 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef void (*Animator_ResetTriggerID_mD3E0C24AC862F049622D09933E7A3A2CDE256C13_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_ResetTriggerID_mD3E0C24AC862F049622D09933E7A3A2CDE256C13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerID_mD3E0C24AC862F049622D09933E7A3A2CDE256C13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerID(System.Int32)");
	_il2cpp_icall_func(__this, ___0_id);
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsParameterControlledByCurveString(System.String)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_name);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_id);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatStringDamp_m81B394E6887978F4A8A92ACF1C7138B23BFC9214 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, float ___2_dampTime, float ___3_deltaTime, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetFloatStringDamp_m81B394E6887978F4A8A92ACF1C7138B23BFC9214_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*, float, float, float);
	static Animator_SetFloatStringDamp_m81B394E6887978F4A8A92ACF1C7138B23BFC9214_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatStringDamp_m81B394E6887978F4A8A92ACF1C7138B23BFC9214_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___0_name, ___1_value, ___2_dampTime, ___3_deltaTime);
}
// System.Void UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, float ___2_dampTime, float ___3_deltaTime, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float, float, float);
	static Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___0_id, ___1_value, ___2_dampTime, ___3_deltaTime);
}
// System.Boolean UnityEngine.Animator::get_layersAffectMassCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_layersAffectMassCenter_mB3DB124E8A0F57BE687F44A95986F5F0E3B999EB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_layersAffectMassCenter_mB3DB124E8A0F57BE687F44A95986F5F0E3B999EB_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_layersAffectMassCenter_mB3DB124E8A0F57BE687F44A95986F5F0E3B999EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layersAffectMassCenter_mB3DB124E8A0F57BE687F44A95986F5F0E3B999EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layersAffectMassCenter()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_layersAffectMassCenter(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_layersAffectMassCenter_mED2748A798EB7DAFC9977710463E06931BA3E3AE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_layersAffectMassCenter_mED2748A798EB7DAFC9977710463E06931BA3E3AE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_layersAffectMassCenter_mED2748A798EB7DAFC9977710463E06931BA3E3AE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_layersAffectMassCenter_mED2748A798EB7DAFC9977710463E06931BA3E3AE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_layersAffectMassCenter(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Single UnityEngine.Animator::get_leftFeetBottomHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_leftFeetBottomHeight_m5ECBAF5B6CCC20691ADA416B95AAE9192DF09C76 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_leftFeetBottomHeight_m5ECBAF5B6CCC20691ADA416B95AAE9192DF09C76_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_leftFeetBottomHeight_m5ECBAF5B6CCC20691ADA416B95AAE9192DF09C76_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_leftFeetBottomHeight_m5ECBAF5B6CCC20691ADA416B95AAE9192DF09C76_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_leftFeetBottomHeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::get_rightFeetBottomHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_rightFeetBottomHeight_m0C68C9515FF2AD560D36357A134246DADB8A3544 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_rightFeetBottomHeight_m0C68C9515FF2AD560D36357A134246DADB8A3544_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_rightFeetBottomHeight_m0C68C9515FF2AD560D36357A134246DADB8A3544_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_rightFeetBottomHeight_m0C68C9515FF2AD560D36357A134246DADB8A3544_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_rightFeetBottomHeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_supportsOnAnimatorMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_supportsOnAnimatorMove_m1E4A235DE9899F2473AAB70B86BC4A4575F90521 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_supportsOnAnimatorMove_m1E4A235DE9899F2473AAB70B86BC4A4575F90521_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_supportsOnAnimatorMove_m1E4A235DE9899F2473AAB70B86BC4A4575F90521_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_supportsOnAnimatorMove_m1E4A235DE9899F2473AAB70B86BC4A4575F90521_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_supportsOnAnimatorMove()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::OnUpdateModeChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_OnUpdateModeChanged_mCE2A9940D4A0772544234F12D1E49E89A2A6B1BF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_OnUpdateModeChanged_mCE2A9940D4A0772544234F12D1E49E89A2A6B1BF_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_OnUpdateModeChanged_mCE2A9940D4A0772544234F12D1E49E89A2A6B1BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_OnUpdateModeChanged_mCE2A9940D4A0772544234F12D1E49E89A2A6B1BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::OnUpdateModeChanged()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::OnCullingModeChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_OnCullingModeChanged_mDF02FBEF0EAB7BD09F5A6446E0CFA9DD4CC1285A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_OnCullingModeChanged_mDF02FBEF0EAB7BD09F5A6446E0CFA9DD4CC1285A_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_OnCullingModeChanged_mDF02FBEF0EAB7BD09F5A6446E0CFA9DD4CC1285A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_OnCullingModeChanged_mDF02FBEF0EAB7BD09F5A6446E0CFA9DD4CC1285A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::OnCullingModeChanged()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::WriteDefaultPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_WriteDefaultPose_mF05891951318F68AED1FCDF5134B3F9B0F62C101 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_WriteDefaultPose_mF05891951318F68AED1FCDF5134B3F9B0F62C101_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_WriteDefaultPose_mF05891951318F68AED1FCDF5134B3F9B0F62C101_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_WriteDefaultPose_mF05891951318F68AED1FCDF5134B3F9B0F62C101_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::WriteDefaultPose()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Update_mBF5E8B2869FD05AF4A5963C39203D85BD62E8E65 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_deltaTime, const RuntimeMethod* method) 
{
	typedef void (*Animator_Update_mBF5E8B2869FD05AF4A5963C39203D85BD62E8E65_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float);
	static Animator_Update_mBF5E8B2869FD05AF4A5963C39203D85BD62E8E65_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Update_mBF5E8B2869FD05AF4A5963C39203D85BD62E8E65_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Update(System.Single)");
	_il2cpp_icall_func(__this, ___0_deltaTime);
}
// System.Void UnityEngine.Animator::Rebind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Rebind_m853F9E50ACB0A29D4F144FFD851E92F346195F9F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	{
		Animator_Rebind_mA8163C9B7150958C0FB3F071B7ED41850BE3A130(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Rebind(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Rebind_mA8163C9B7150958C0FB3F071B7ED41850BE3A130 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_writeDefaultValues, const RuntimeMethod* method) 
{
	typedef void (*Animator_Rebind_mA8163C9B7150958C0FB3F071B7ED41850BE3A130_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_Rebind_mA8163C9B7150958C0FB3F071B7ED41850BE3A130_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Rebind_mA8163C9B7150958C0FB3F071B7ED41850BE3A130_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Rebind(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_writeDefaultValues);
}
// System.Void UnityEngine.Animator::ApplyBuiltinRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ApplyBuiltinRootMotion_m2ED8DAFF78DC1A0CA62CF3785692074DBC51808C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_ApplyBuiltinRootMotion_m2ED8DAFF78DC1A0CA62CF3785692074DBC51808C_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_ApplyBuiltinRootMotion_m2ED8DAFF78DC1A0CA62CF3785692074DBC51808C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ApplyBuiltinRootMotion_m2ED8DAFF78DC1A0CA62CF3785692074DBC51808C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ApplyBuiltinRootMotion()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::EvaluateController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_EvaluateController_mA07519A24495A1D1B33D163005E18FC52B5954B0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	{
		Animator_EvaluateController_m5A83794E6067230ED84A707365FB70CA9EE64128(__this, (0.0f), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::EvaluateController(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_EvaluateController_m5A83794E6067230ED84A707365FB70CA9EE64128 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_deltaTime, const RuntimeMethod* method) 
{
	typedef void (*Animator_EvaluateController_m5A83794E6067230ED84A707365FB70CA9EE64128_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float);
	static Animator_EvaluateController_m5A83794E6067230ED84A707365FB70CA9EE64128_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_EvaluateController_m5A83794E6067230ED84A707365FB70CA9EE64128_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::EvaluateController(System.Single)");
	_il2cpp_icall_func(__this, ___0_deltaTime);
}
// System.String UnityEngine.Animator::GetCurrentStateName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_GetCurrentStateName_m9B1BE9CADE479A6BED0CD48387C73ED963CA9E6F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___0_layerIndex;
		String_t* L_1;
		L_1 = Animator_GetAnimatorStateName_mEA694401BD4FC9185FFCFDFFCB7C1DCD2B1B8D06(__this, L_0, (bool)1, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Animator::GetNextStateName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_GetNextStateName_mCF8EED59CECEE48A04A27EA422EA29E5C4EB8A3E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___0_layerIndex;
		String_t* L_1;
		L_1 = Animator_GetAnimatorStateName_mEA694401BD4FC9185FFCFDFFCB7C1DCD2B1B8D06(__this, L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Animator::GetAnimatorStateName(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_GetAnimatorStateName_mEA694401BD4FC9185FFCFDFFCB7C1DCD2B1B8D06 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, bool ___1_current, const RuntimeMethod* method) 
{
	typedef String_t* (*Animator_GetAnimatorStateName_mEA694401BD4FC9185FFCFDFFCB7C1DCD2B1B8D06_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, bool);
	static Animator_GetAnimatorStateName_mEA694401BD4FC9185FFCFDFFCB7C1DCD2B1B8D06_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorStateName_mEA694401BD4FC9185FFCFDFFCB7C1DCD2B1B8D06_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorStateName(System.Int32,System.Boolean)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___0_layerIndex, ___1_current);
	return icallRetVal;
}
// System.String UnityEngine.Animator::ResolveHash(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_ResolveHash_mB349EC9252F07ECD3657818C08F66FACBAA53D43 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hash, const RuntimeMethod* method) 
{
	typedef String_t* (*Animator_ResolveHash_mB349EC9252F07ECD3657818C08F66FACBAA53D43_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_ResolveHash_mB349EC9252F07ECD3657818C08F66FACBAA53D43_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResolveHash_mB349EC9252F07ECD3657818C08F66FACBAA53D43_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResolveHash(System.Int32)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___0_hash);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_logWarnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_logWarnings()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_logWarnings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_logWarnings_m625FCBAF506C623F5457D22C5A704AC6727B446F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_logWarnings_m625FCBAF506C623F5457D22C5A704AC6727B446F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_logWarnings_m625FCBAF506C623F5457D22C5A704AC6727B446F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_logWarnings_m625FCBAF506C623F5457D22C5A704AC6727B446F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_logWarnings(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Boolean UnityEngine.Animator::get_fireEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_fireEvents_mE0311DD2BAC5EA407BD7FC02B8EC52D4E2F27668 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_fireEvents_mE0311DD2BAC5EA407BD7FC02B8EC52D4E2F27668_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_fireEvents_mE0311DD2BAC5EA407BD7FC02B8EC52D4E2F27668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_fireEvents_mE0311DD2BAC5EA407BD7FC02B8EC52D4E2F27668_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_fireEvents()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_fireEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_fireEvents_mBB2DAC3B84656758453B0BABB12DF7949EDDF43C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_fireEvents_mBB2DAC3B84656758453B0BABB12DF7949EDDF43C_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_fireEvents_mBB2DAC3B84656758453B0BABB12DF7949EDDF43C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_fireEvents_mBB2DAC3B84656758453B0BABB12DF7949EDDF43C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_fireEvents(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Boolean UnityEngine.Animator::get_keepAnimatorControllerStateOnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_keepAnimatorControllerStateOnDisable_mEBEF419822017BE487B8BD5A9118C175F50A97CE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = Animator_get_keepAnimatorStateOnDisable_m7FAE9E72FA31D90E7D55664BD627C2903893A76B(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_keepAnimatorControllerStateOnDisable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_keepAnimatorControllerStateOnDisable_m0F15299D72F566184637745C2DCCCA712968FDC3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		Animator_set_keepAnimatorStateOnDisable_mE439995234FEE85A9DE7DB5238D301128CABB769(__this, L_0, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::get_keepAnimatorStateOnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_keepAnimatorStateOnDisable_m7FAE9E72FA31D90E7D55664BD627C2903893A76B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_keepAnimatorStateOnDisable_m7FAE9E72FA31D90E7D55664BD627C2903893A76B_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_keepAnimatorStateOnDisable_m7FAE9E72FA31D90E7D55664BD627C2903893A76B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_keepAnimatorStateOnDisable_m7FAE9E72FA31D90E7D55664BD627C2903893A76B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_keepAnimatorStateOnDisable()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_keepAnimatorStateOnDisable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_keepAnimatorStateOnDisable_mE439995234FEE85A9DE7DB5238D301128CABB769 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_keepAnimatorStateOnDisable_mE439995234FEE85A9DE7DB5238D301128CABB769_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_keepAnimatorStateOnDisable_mE439995234FEE85A9DE7DB5238D301128CABB769_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_keepAnimatorStateOnDisable_mE439995234FEE85A9DE7DB5238D301128CABB769_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_keepAnimatorStateOnDisable(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.Vector3 UnityEngine.Animator::GetVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetVector_m8BF07F4BB4DBC9031166EE48CB5E61DD7D1F90C6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetVector(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetVector_mBE09ACBB9CD91B2343B91CF4C547028CD1920BC3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetVector(System.String,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetVector_mE7EA3828CF3F35015BDC012736787472773D8D12 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Animator::SetVector(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetVector_m89C00646839A497355E264DB9E930DCC162DC3FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetQuaternion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_GetQuaternion_mEF3B6820436B19567A4635C3C7D0E4DFF4A5EF66 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetQuaternion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_GetQuaternion_m2F43CF4CDC5D648241847A072E5C1079681B1AA3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetQuaternion(System.String,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetQuaternion_mEA2933BB9427F2AF4C0F709CC4AE67C653D6A622 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_value, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Animator::SetQuaternion(System.Int32,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetQuaternion_mBE23DCD9EA5BFFD39A9267FD0559CC7FC54C5A95 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_value, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Animator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator__ctor_m53346EED5CF6845390B4CB8F53C9CBE9C65D5CEA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::get_velocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_velocity_Injected_mB47827ADE9F826A2ECA302EB7751371A9F18A57E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_velocity_Injected_mB47827ADE9F826A2ECA302EB7751371A9F18A57E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_velocity_Injected_mB47827ADE9F826A2ECA302EB7751371A9F18A57E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_velocity_Injected_mB47827ADE9F826A2ECA302EB7751371A9F18A57E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_velocity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::get_angularVelocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_angularVelocity_Injected_m316C33CD3C5CF4F7AA8E53FEB0741B7E1C3D4537 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_angularVelocity_Injected_m316C33CD3C5CF4F7AA8E53FEB0741B7E1C3D4537_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_angularVelocity_Injected_m316C33CD3C5CF4F7AA8E53FEB0741B7E1C3D4537_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_angularVelocity_Injected_m316C33CD3C5CF4F7AA8E53FEB0741B7E1C3D4537_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_angularVelocity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::get_rootPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_rootPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::set_rootPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_rootPosition_Injected_m9F65EF589C17FECC4350D1D193C20B7741BD7312 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_rootPosition_Injected_m9F65EF589C17FECC4350D1D193C20B7741BD7312_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_set_rootPosition_Injected_m9F65EF589C17FECC4350D1D193C20B7741BD7312_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_rootPosition_Injected_m9F65EF589C17FECC4350D1D193C20B7741BD7312_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_rootPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Animator::get_rootRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_rootRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::set_rootRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_rootRotation_Injected_m4DF71DAF4F3EE3B4D460FAB3360E00C74027F11A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_rootRotation_Injected_m4DF71DAF4F3EE3B4D460FAB3360E00C74027F11A_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_set_rootRotation_Injected_m4DF71DAF4F3EE3B4D460FAB3360E00C74027F11A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_rootRotation_Injected_m4DF71DAF4F3EE3B4D460FAB3360E00C74027F11A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_rootRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Animator::get_bodyPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_bodyPositionInternal_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::set_bodyPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_bodyPositionInternal_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Animator::get_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_bodyRotationInternal_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::set_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_bodyRotationInternal_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_goal, ___1_ret);
}
// System.Void UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_goalPosition, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_goal, ___1_goalPosition);
}
// System.Void UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_goal, ___1_ret);
}
// System.Void UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_goalRotation, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_goal, ___1_goalRotation);
}
// System.Void UnityEngine.Animator::GetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetHintPosition_Injected_m6BE0C46FE3B057D08BA4B111DB6340F958B33FD1 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetHintPosition_Injected_m6BE0C46FE3B057D08BA4B111DB6340F958B33FD1_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_GetHintPosition_Injected_m6BE0C46FE3B057D08BA4B111DB6340F958B33FD1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetHintPosition_Injected_m6BE0C46FE3B057D08BA4B111DB6340F958B33FD1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_hint, ___1_ret);
}
// System.Void UnityEngine.Animator::SetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetHintPosition_Injected_mF7843586B3EA22A800A628735583620FFDF2ADC5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_hint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_hintPosition, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetHintPosition_Injected_mF7843586B3EA22A800A628735583620FFDF2ADC5_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_SetHintPosition_Injected_mF7843586B3EA22A800A628735583620FFDF2ADC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetHintPosition_Injected_mF7843586B3EA22A800A628735583620FFDF2ADC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_hint, ___1_hintPosition);
}
// System.Void UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_lookAtPosition, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_lookAtPosition);
}
// System.Void UnityEngine.Animator::SetBoneLocalRotationInternal_Injected(System.Int32,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotationInternal_Injected_m4A2C1DAFEE4883C6A39D33CF56E8DC015D6A0EC5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_humanBoneId, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_rotation, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetBoneLocalRotationInternal_Injected_m4A2C1DAFEE4883C6A39D33CF56E8DC015D6A0EC5_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_SetBoneLocalRotationInternal_Injected_m4A2C1DAFEE4883C6A39D33CF56E8DC015D6A0EC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoneLocalRotationInternal_Injected_m4A2C1DAFEE4883C6A39D33CF56E8DC015D6A0EC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoneLocalRotationInternal_Injected(System.Int32,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_humanBoneId, ___1_rotation);
}
// System.Void UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::MatchTarget_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_matchPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_matchRotation, int32_t ___2_targetBodyPart, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25* ___3_weightMask, float ___4_startNormalizedTime, float ___5_targetNormalizedTime, bool ___6_completeMatch, const RuntimeMethod* method) 
{
	typedef void (*Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, int32_t, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25*, float, float, bool);
	static Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::MatchTarget_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_matchPosition, ___1_matchRotation, ___2_targetBodyPart, ___3_weightMask, ___4_startNormalizedTime, ___5_targetNormalizedTime, ___6_completeMatch);
}
// System.Void UnityEngine.Animator::get_targetPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_targetPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::get_targetRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_targetRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke(const AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02& unmarshaled, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Type_1 = unmarshaled.___m_Type_1;
	marshaled.___m_DefaultFloat_2 = unmarshaled.___m_DefaultFloat_2;
	marshaled.___m_DefaultInt_3 = unmarshaled.___m_DefaultInt_3;
	marshaled.___m_DefaultBool_4 = static_cast<int32_t>(unmarshaled.___m_DefaultBool_4);
}
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke_back(const AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_pinvoke& marshaled, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0));
	int32_t unmarshaledm_Type_temp_1 = 0;
	unmarshaledm_Type_temp_1 = marshaled.___m_Type_1;
	unmarshaled.___m_Type_1 = unmarshaledm_Type_temp_1;
	float unmarshaledm_DefaultFloat_temp_2 = 0.0f;
	unmarshaledm_DefaultFloat_temp_2 = marshaled.___m_DefaultFloat_2;
	unmarshaled.___m_DefaultFloat_2 = unmarshaledm_DefaultFloat_temp_2;
	int32_t unmarshaledm_DefaultInt_temp_3 = 0;
	unmarshaledm_DefaultInt_temp_3 = marshaled.___m_DefaultInt_3;
	unmarshaled.___m_DefaultInt_3 = unmarshaledm_DefaultInt_temp_3;
	bool unmarshaledm_DefaultBool_temp_4 = false;
	unmarshaledm_DefaultBool_temp_4 = static_cast<bool>(marshaled.___m_DefaultBool_4);
	unmarshaled.___m_DefaultBool_4 = unmarshaledm_DefaultBool_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke_cleanup(AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_com(const AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02& unmarshaled, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_com& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Name_0);
	marshaled.___m_Type_1 = unmarshaled.___m_Type_1;
	marshaled.___m_DefaultFloat_2 = unmarshaled.___m_DefaultFloat_2;
	marshaled.___m_DefaultInt_3 = unmarshaled.___m_DefaultInt_3;
	marshaled.___m_DefaultBool_4 = static_cast<int32_t>(unmarshaled.___m_DefaultBool_4);
}
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_com_back(const AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_com& marshaled, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0));
	int32_t unmarshaledm_Type_temp_1 = 0;
	unmarshaledm_Type_temp_1 = marshaled.___m_Type_1;
	unmarshaled.___m_Type_1 = unmarshaledm_Type_temp_1;
	float unmarshaledm_DefaultFloat_temp_2 = 0.0f;
	unmarshaledm_DefaultFloat_temp_2 = marshaled.___m_DefaultFloat_2;
	unmarshaled.___m_DefaultFloat_2 = unmarshaledm_DefaultFloat_temp_2;
	int32_t unmarshaledm_DefaultInt_temp_3 = 0;
	unmarshaledm_DefaultInt_temp_3 = marshaled.___m_DefaultInt_3;
	unmarshaled.___m_DefaultInt_3 = unmarshaledm_DefaultInt_temp_3;
	bool unmarshaledm_DefaultBool_temp_4 = false;
	unmarshaledm_DefaultBool_temp_4 = static_cast<bool>(marshaled.___m_DefaultBool_4);
	unmarshaled.___m_DefaultBool_4 = unmarshaledm_DefaultBool_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_com_cleanup(AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// System.String UnityEngine.AnimatorControllerParameter::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimatorControllerParameter_get_name_mEB3938ADDF296A0FB37283C987AEE6EC0F4F629E (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Name_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.AnimatorControllerParameter::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerParameter_Equals_m9FDC3900B8DB91E9F99295CADB9574F7E1C55C71 (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B7_0 = 0;
	{
		RuntimeObject* L_0 = ___0_o;
		V_0 = ((AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02*)IsInstClass((RuntimeObject*)L_0, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_il2cpp_TypeInfo_var));
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_2 = __this->___m_Name_0;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___m_Name_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_6 = __this->___m_Type_1;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___m_Type_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0058;
		}
	}
	{
		float L_9 = __this->___m_DefaultFloat_2;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_10 = V_0;
		NullCheck(L_10);
		float L_11 = L_10->___m_DefaultFloat_2;
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = __this->___m_DefaultInt_3;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___m_DefaultInt_3;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0058;
		}
	}
	{
		bool L_15 = __this->___m_DefaultBool_4;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_16 = V_0;
		NullCheck(L_16);
		bool L_17 = L_16->___m_DefaultBool_4;
		G_B7_0 = ((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0);
		goto IL_0059;
	}

IL_0058:
	{
		G_B7_0 = 0;
	}

IL_0059:
	{
		V_1 = (bool)G_B7_0;
		goto IL_005c;
	}

IL_005c:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Int32 UnityEngine.AnimatorControllerParameter::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorControllerParameter_GetHashCode_m145EFDAFC4D2C410BB84F8290883977340E25312 (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = AnimatorControllerParameter_get_name_mEB3938ADDF296A0FB37283C987AEE6EC0F4F629E(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.AnimatorControllerParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerParameter__ctor_m91C7057D6AC6D38ACA5EC852D5FDA829F83C8474 (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_Name_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AnimatorOverrideController::OnInvalidateOverrideController(UnityEngine.AnimatorOverrideController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_OnInvalidateOverrideController_mA6B0AA977505FDEFDD6BCA2E941FD3A18AE1AD23 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* ___0_controller, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* L_0 = ___0_controller;
		NullCheck(L_0);
		OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* L_1 = L_0->___OnOverrideControllerDirty_4;
		V_0 = (bool)((!(((RuntimeObject*)(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* L_3 = ___0_controller;
		NullCheck(L_3);
		OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* L_4 = L_3->___OnOverrideControllerDirty_4;
		NullCheck(L_4);
		OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_inline(L_4, NULL);
	}

IL_001a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_Multicast(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* currentDelegate = reinterpret_cast<OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenInst(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStatic(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStaticInvoker(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_ClosedStaticInvoker(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5 (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback__ctor_mA49B11AF24CB49A9B764058DB73CE221AE54E106 (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_Multicast;
}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Avatar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar__ctor_mA58012D9A6FD2A7BB88D05E58703B5619536E118 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Avatar::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Avatar_get_isValid_m89626D009C80028727A9C6F8F8F477C23934B94C (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, const RuntimeMethod* method) 
{
	typedef bool (*Avatar_get_isValid_m89626D009C80028727A9C6F8F8F477C23934B94C_ftn) (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*);
	static Avatar_get_isValid_m89626D009C80028727A9C6F8F8F477C23934B94C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_get_isValid_m89626D009C80028727A9C6F8F8F477C23934B94C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::get_isValid()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Avatar::get_isHuman()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Avatar_get_isHuman_m1CDE3C2BCB2A683AB72088B26C9824E0FCF00FBE (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, const RuntimeMethod* method) 
{
	typedef bool (*Avatar_get_isHuman_m1CDE3C2BCB2A683AB72088B26C9824E0FCF00FBE_ftn) (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*);
	static Avatar_get_isHuman_m1CDE3C2BCB2A683AB72088B26C9824E0FCF00FBE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_get_isHuman_m1CDE3C2BCB2A683AB72088B26C9824E0FCF00FBE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::get_isHuman()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.HumanDescription UnityEngine.Avatar::get_humanDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44 Avatar_get_humanDescription_m8E211B52B89B57AF6793D781C69E46F6E1217E1E (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, const RuntimeMethod* method) 
{
	HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Avatar_get_humanDescription_Injected_mB2DC483AC2212729E7C92641B6FFDDB4056BF3D0(__this, (&V_0), NULL);
		HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Avatar::SetMuscleMinMax(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_SetMuscleMinMax_m608B65231DBDC2DAE4F8F9D3D93FA1A35CA82B68 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_muscleId, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	typedef void (*Avatar_SetMuscleMinMax_m608B65231DBDC2DAE4F8F9D3D93FA1A35CA82B68_ftn) (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*, int32_t, float, float);
	static Avatar_SetMuscleMinMax_m608B65231DBDC2DAE4F8F9D3D93FA1A35CA82B68_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_SetMuscleMinMax_m608B65231DBDC2DAE4F8F9D3D93FA1A35CA82B68_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::SetMuscleMinMax(System.Int32,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___0_muscleId, ___1_min, ___2_max);
}
// System.Void UnityEngine.Avatar::SetParameter(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_SetParameter_m4A1D5A8FB0D5F31636D77C9565E0FD057CFCCF6B (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_parameterId, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Avatar_SetParameter_m4A1D5A8FB0D5F31636D77C9565E0FD057CFCCF6B_ftn) (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*, int32_t, float);
	static Avatar_SetParameter_m4A1D5A8FB0D5F31636D77C9565E0FD057CFCCF6B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_SetParameter_m4A1D5A8FB0D5F31636D77C9565E0FD057CFCCF6B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::SetParameter(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___0_parameterId, ___1_value);
}
// System.Single UnityEngine.Avatar::GetAxisLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Avatar_GetAxisLength_mE8C0741203F52E4712EA9DB333638D6C42C63E9E (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___0_humanId;
		int32_t L_1;
		L_1 = HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925(L_0, NULL);
		float L_2;
		L_2 = Avatar_Internal_GetAxisLength_mE9BD06F25CA27B0D026E640CB94C53D7039575A2(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Quaternion UnityEngine.Avatar::GetPreRotation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Avatar_GetPreRotation_m774928C7DB41CA00F5AF60B33E05736FFA435080 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_humanId;
		int32_t L_1;
		L_1 = HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Avatar_Internal_GetPreRotation_m43FCB48A6F86DA5AC7FADD7B3FFE3ECA49503648(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Quaternion UnityEngine.Avatar::GetPostRotation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Avatar_GetPostRotation_mEEBB44D6301ECD7E1AE67DD0FF9C715C3D9AF8CE (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_humanId;
		int32_t L_1;
		L_1 = HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Avatar_Internal_GetPostRotation_m8BEBD14E505A8FC73DCD3EF1CA99F32666FBE7A2(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Quaternion UnityEngine.Avatar::GetZYPostQ(System.Int32,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Avatar_GetZYPostQ_mAEDA3440F5A9EE2E3016357801005F7AB401CB34 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_parentQ, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_q, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_humanId;
		int32_t L_1;
		L_1 = HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_parentQ;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___2_q;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Avatar_Internal_GetZYPostQ_mE09886C9F4882D6474F76EC32C6711C4EBAF1F19(__this, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Quaternion UnityEngine.Avatar::GetZYRoll(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Avatar_GetZYRoll_m4557457639DE594E2FE879ED1BAAEB97637BA68F (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_uvw, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_humanId;
		int32_t L_1;
		L_1 = HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_uvw;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Avatar_Internal_GetZYRoll_mB5FB51A11D1DAD6EB587731C57D5AC43F9FAEFC6(__this, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 UnityEngine.Avatar::GetLimitSign(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Avatar_GetLimitSign_m08970E1688571ABCAE484771DA697023A8DA6EFE (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_humanId;
		int32_t L_1;
		L_1 = HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Avatar_Internal_GetLimitSign_m19D7625470364E767DB6F9B575ACBA08FE6BB6A5(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		return L_3;
	}
}
// System.Single UnityEngine.Avatar::Internal_GetAxisLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Avatar_Internal_GetAxisLength_mE9BD06F25CA27B0D026E640CB94C53D7039575A2 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, const RuntimeMethod* method) 
{
	typedef float (*Avatar_Internal_GetAxisLength_mE9BD06F25CA27B0D026E640CB94C53D7039575A2_ftn) (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*, int32_t);
	static Avatar_Internal_GetAxisLength_mE9BD06F25CA27B0D026E640CB94C53D7039575A2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_Internal_GetAxisLength_mE9BD06F25CA27B0D026E640CB94C53D7039575A2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::Internal_GetAxisLength(System.Int32)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_humanId);
	return icallRetVal;
}
// UnityEngine.Quaternion UnityEngine.Avatar::Internal_GetPreRotation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Avatar_Internal_GetPreRotation_m43FCB48A6F86DA5AC7FADD7B3FFE3ECA49503648 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_humanId;
		Avatar_Internal_GetPreRotation_Injected_mE47911DC3BC9882688A130363B8DA9130CEF74E9(__this, L_0, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Avatar::Internal_GetPostRotation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Avatar_Internal_GetPostRotation_m8BEBD14E505A8FC73DCD3EF1CA99F32666FBE7A2 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_humanId;
		Avatar_Internal_GetPostRotation_Injected_m82DFC2810E003BD5422776882E0EE67BDAFA047C(__this, L_0, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Avatar::Internal_GetZYPostQ(System.Int32,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Avatar_Internal_GetZYPostQ_mE09886C9F4882D6474F76EC32C6711C4EBAF1F19 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_parentQ, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_q, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_humanId;
		Avatar_Internal_GetZYPostQ_Injected_mC76060C9BE7A4A6B03FE4E272DDEBA1422445467(__this, L_0, (&___1_parentQ), (&___2_q), (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Avatar::Internal_GetZYRoll(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Avatar_Internal_GetZYRoll_mB5FB51A11D1DAD6EB587731C57D5AC43F9FAEFC6 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_uvw, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_humanId;
		Avatar_Internal_GetZYRoll_Injected_m7902022BBB7439F281875F47068C37AD57A0AD59(__this, L_0, (&___1_uvw), (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Avatar::Internal_GetLimitSign(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Avatar_Internal_GetLimitSign_m19D7625470364E767DB6F9B575ACBA08FE6BB6A5 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_humanId;
		Avatar_Internal_GetLimitSign_Injected_m9D9713CD9F6973FAE4DF20AE86386B216EDBADB9(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Avatar::get_humanDescription_Injected(UnityEngine.HumanDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_get_humanDescription_Injected_mB2DC483AC2212729E7C92641B6FFDDB4056BF3D0 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Avatar_get_humanDescription_Injected_mB2DC483AC2212729E7C92641B6FFDDB4056BF3D0_ftn) (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44*);
	static Avatar_get_humanDescription_Injected_mB2DC483AC2212729E7C92641B6FFDDB4056BF3D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_get_humanDescription_Injected_mB2DC483AC2212729E7C92641B6FFDDB4056BF3D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::get_humanDescription_Injected(UnityEngine.HumanDescription&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Avatar::Internal_GetPreRotation_Injected(System.Int32,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_Internal_GetPreRotation_Injected_mE47911DC3BC9882688A130363B8DA9130CEF74E9 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Avatar_Internal_GetPreRotation_Injected_mE47911DC3BC9882688A130363B8DA9130CEF74E9_ftn) (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Avatar_Internal_GetPreRotation_Injected_mE47911DC3BC9882688A130363B8DA9130CEF74E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_Internal_GetPreRotation_Injected_mE47911DC3BC9882688A130363B8DA9130CEF74E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::Internal_GetPreRotation_Injected(System.Int32,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_humanId, ___1_ret);
}
// System.Void UnityEngine.Avatar::Internal_GetPostRotation_Injected(System.Int32,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_Internal_GetPostRotation_Injected_m82DFC2810E003BD5422776882E0EE67BDAFA047C (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Avatar_Internal_GetPostRotation_Injected_m82DFC2810E003BD5422776882E0EE67BDAFA047C_ftn) (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Avatar_Internal_GetPostRotation_Injected_m82DFC2810E003BD5422776882E0EE67BDAFA047C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_Internal_GetPostRotation_Injected_m82DFC2810E003BD5422776882E0EE67BDAFA047C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::Internal_GetPostRotation_Injected(System.Int32,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_humanId, ___1_ret);
}
// System.Void UnityEngine.Avatar::Internal_GetZYPostQ_Injected(System.Int32,UnityEngine.Quaternion&,UnityEngine.Quaternion&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_Internal_GetZYPostQ_Injected_mC76060C9BE7A4A6B03FE4E272DDEBA1422445467 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_parentQ, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_q, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_ret, const RuntimeMethod* method) 
{
	typedef void (*Avatar_Internal_GetZYPostQ_Injected_mC76060C9BE7A4A6B03FE4E272DDEBA1422445467_ftn) (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Avatar_Internal_GetZYPostQ_Injected_mC76060C9BE7A4A6B03FE4E272DDEBA1422445467_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_Internal_GetZYPostQ_Injected_mC76060C9BE7A4A6B03FE4E272DDEBA1422445467_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::Internal_GetZYPostQ_Injected(System.Int32,UnityEngine.Quaternion&,UnityEngine.Quaternion&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_humanId, ___1_parentQ, ___2_q, ___3_ret);
}
// System.Void UnityEngine.Avatar::Internal_GetZYRoll_Injected(System.Int32,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_Internal_GetZYRoll_Injected_m7902022BBB7439F281875F47068C37AD57A0AD59 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_uvw, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*Avatar_Internal_GetZYRoll_Injected_m7902022BBB7439F281875F47068C37AD57A0AD59_ftn) (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Avatar_Internal_GetZYRoll_Injected_m7902022BBB7439F281875F47068C37AD57A0AD59_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_Internal_GetZYRoll_Injected_m7902022BBB7439F281875F47068C37AD57A0AD59_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::Internal_GetZYRoll_Injected(System.Int32,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_humanId, ___1_uvw, ___2_ret);
}
// System.Void UnityEngine.Avatar::Internal_GetLimitSign_Injected(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_Internal_GetLimitSign_Injected_m9D9713CD9F6973FAE4DF20AE86386B216EDBADB9 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, int32_t ___0_humanId, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Avatar_Internal_GetLimitSign_Injected_m9D9713CD9F6973FAE4DF20AE86386B216EDBADB9_ftn) (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Avatar_Internal_GetLimitSign_Injected_m9D9713CD9F6973FAE4DF20AE86386B216EDBADB9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_Internal_GetLimitSign_Injected_m9D9713CD9F6973FAE4DF20AE86386B216EDBADB9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::Internal_GetLimitSign_Injected(System.Int32,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_humanId, ___1_ret);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___parentName_1 = il2cpp_codegen_marshal_string(unmarshaled.___parentName_1);
	marshaled.___position_2 = unmarshaled.___position_2;
	marshaled.___rotation_3 = unmarshaled.___rotation_3;
	marshaled.___scale_4 = unmarshaled.___scale_4;
}
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.___parentName_1 = il2cpp_codegen_marshal_string_result(marshaled.___parentName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___parentName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___parentName_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_2;
	memset((&unmarshaledposition_temp_2), 0, sizeof(unmarshaledposition_temp_2));
	unmarshaledposition_temp_2 = marshaled.___position_2;
	unmarshaled.___position_2 = unmarshaledposition_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledrotation_temp_3;
	memset((&unmarshaledrotation_temp_3), 0, sizeof(unmarshaledrotation_temp_3));
	unmarshaledrotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.___rotation_3 = unmarshaledrotation_temp_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledscale_temp_4;
	memset((&unmarshaledscale_temp_4), 0, sizeof(unmarshaledscale_temp_4));
	unmarshaledscale_temp_4 = marshaled.___scale_4;
	unmarshaled.___scale_4 = unmarshaledscale_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_0);
	marshaled.___parentName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___parentName_1);
	marshaled.___position_2 = unmarshaled.___position_2;
	marshaled.___rotation_3 = unmarshaled.___rotation_3;
	marshaled.___scale_4 = unmarshaled.___scale_4;
}
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.___parentName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___parentName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_2;
	memset((&unmarshaledposition_temp_2), 0, sizeof(unmarshaledposition_temp_2));
	unmarshaledposition_temp_2 = marshaled.___position_2;
	unmarshaled.___position_2 = unmarshaledposition_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledrotation_temp_3;
	memset((&unmarshaledrotation_temp_3), 0, sizeof(unmarshaledrotation_temp_3));
	unmarshaledrotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.___rotation_3 = unmarshaledrotation_temp_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledscale_temp_4;
	memset((&unmarshaledscale_temp_4), 0, sizeof(unmarshaledscale_temp_4));
	unmarshaledscale_temp_4 = marshaled.___scale_4;
	unmarshaled.___scale_4 = unmarshaledscale_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_BoneName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0));
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_HumanName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1));
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E unmarshaledlimit_temp_2;
	memset((&unmarshaledlimit_temp_2), 0, sizeof(unmarshaledlimit_temp_2));
	unmarshaledlimit_temp_2 = marshaled.___limit_2;
	unmarshaled.___limit_2 = unmarshaledlimit_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_BoneName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0));
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_HumanName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1));
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E unmarshaledlimit_temp_2;
	memset((&unmarshaledlimit_temp_2), 0, sizeof(unmarshaledlimit_temp_2));
	unmarshaledlimit_temp_2 = marshaled.___limit_2;
	unmarshaled.___limit_2 = unmarshaledlimit_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif




// Conversion methods for marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_pinvoke(const HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44& unmarshaled, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___human_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledhuman_Length = (unmarshaled.___human_0)->max_length;
		marshaled.___human_0 = il2cpp_codegen_marshal_allocate_array<HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke>(_unmarshaledhuman_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledhuman_Length); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke((unmarshaled.___human_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___human_0)[i]);
		}
	}
	else
	{
		marshaled.___human_0 = NULL;
	}
	if (unmarshaled.___skeleton_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaledskeleton_Length = (unmarshaled.___skeleton_1)->max_length;
		marshaled.___skeleton_1 = il2cpp_codegen_marshal_allocate_array<SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke>(_unmarshaledskeleton_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledskeleton_Length); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke((unmarshaled.___skeleton_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___skeleton_1)[i]);
		}
	}
	else
	{
		marshaled.___skeleton_1 = NULL;
	}
	marshaled.___m_ArmTwist_2 = unmarshaled.___m_ArmTwist_2;
	marshaled.___m_ForeArmTwist_3 = unmarshaled.___m_ForeArmTwist_3;
	marshaled.___m_UpperLegTwist_4 = unmarshaled.___m_UpperLegTwist_4;
	marshaled.___m_LegTwist_5 = unmarshaled.___m_LegTwist_5;
	marshaled.___m_ArmStretch_6 = unmarshaled.___m_ArmStretch_6;
	marshaled.___m_LegStretch_7 = unmarshaled.___m_LegStretch_7;
	marshaled.___m_FeetSpacing_8 = unmarshaled.___m_FeetSpacing_8;
	marshaled.___m_GlobalScale_9 = unmarshaled.___m_GlobalScale_9;
	marshaled.___m_RootMotionBoneName_10 = il2cpp_codegen_marshal_string(unmarshaled.___m_RootMotionBoneName_10);
	marshaled.___m_HasTranslationDoF_11 = static_cast<int32_t>(unmarshaled.___m_HasTranslationDoF_11);
	marshaled.___m_HasExtraRoot_12 = static_cast<int32_t>(unmarshaled.___m_HasExtraRoot_12);
	marshaled.___m_SkeletonHasParents_13 = static_cast<int32_t>(unmarshaled.___m_SkeletonHasParents_13);
}
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_pinvoke_back(const HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_pinvoke& marshaled, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___human_0 != NULL)
	{
		if (unmarshaled.___human_0 == NULL)
		{
			unmarshaled.___human_0 = reinterpret_cast<HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*>((HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*)SZArrayNew(HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___human_0), (void*)reinterpret_cast<HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*>((HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*)SZArrayNew(HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___human_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 _marshaled____human_0_i__unmarshaled;
			memset((&_marshaled____human_0_i__unmarshaled), 0, sizeof(_marshaled____human_0_i__unmarshaled));
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back((marshaled.___human_0)[i], _marshaled____human_0_i__unmarshaled);
			(unmarshaled.___human_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____human_0_i__unmarshaled);
		}
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		if (unmarshaled.___skeleton_1 == NULL)
		{
			unmarshaled.___skeleton_1 = reinterpret_cast<SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*>((SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*)SZArrayNew(SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___skeleton_1), (void*)reinterpret_cast<SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*>((SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*)SZArrayNew(SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___skeleton_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 _marshaled____skeleton_1_i__unmarshaled;
			memset((&_marshaled____skeleton_1_i__unmarshaled), 0, sizeof(_marshaled____skeleton_1_i__unmarshaled));
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back((marshaled.___skeleton_1)[i], _marshaled____skeleton_1_i__unmarshaled);
			(unmarshaled.___skeleton_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____skeleton_1_i__unmarshaled);
		}
	}
	float unmarshaledm_ArmTwist_temp_2 = 0.0f;
	unmarshaledm_ArmTwist_temp_2 = marshaled.___m_ArmTwist_2;
	unmarshaled.___m_ArmTwist_2 = unmarshaledm_ArmTwist_temp_2;
	float unmarshaledm_ForeArmTwist_temp_3 = 0.0f;
	unmarshaledm_ForeArmTwist_temp_3 = marshaled.___m_ForeArmTwist_3;
	unmarshaled.___m_ForeArmTwist_3 = unmarshaledm_ForeArmTwist_temp_3;
	float unmarshaledm_UpperLegTwist_temp_4 = 0.0f;
	unmarshaledm_UpperLegTwist_temp_4 = marshaled.___m_UpperLegTwist_4;
	unmarshaled.___m_UpperLegTwist_4 = unmarshaledm_UpperLegTwist_temp_4;
	float unmarshaledm_LegTwist_temp_5 = 0.0f;
	unmarshaledm_LegTwist_temp_5 = marshaled.___m_LegTwist_5;
	unmarshaled.___m_LegTwist_5 = unmarshaledm_LegTwist_temp_5;
	float unmarshaledm_ArmStretch_temp_6 = 0.0f;
	unmarshaledm_ArmStretch_temp_6 = marshaled.___m_ArmStretch_6;
	unmarshaled.___m_ArmStretch_6 = unmarshaledm_ArmStretch_temp_6;
	float unmarshaledm_LegStretch_temp_7 = 0.0f;
	unmarshaledm_LegStretch_temp_7 = marshaled.___m_LegStretch_7;
	unmarshaled.___m_LegStretch_7 = unmarshaledm_LegStretch_temp_7;
	float unmarshaledm_FeetSpacing_temp_8 = 0.0f;
	unmarshaledm_FeetSpacing_temp_8 = marshaled.___m_FeetSpacing_8;
	unmarshaled.___m_FeetSpacing_8 = unmarshaledm_FeetSpacing_temp_8;
	float unmarshaledm_GlobalScale_temp_9 = 0.0f;
	unmarshaledm_GlobalScale_temp_9 = marshaled.___m_GlobalScale_9;
	unmarshaled.___m_GlobalScale_9 = unmarshaledm_GlobalScale_temp_9;
	unmarshaled.___m_RootMotionBoneName_10 = il2cpp_codegen_marshal_string_result(marshaled.___m_RootMotionBoneName_10);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_RootMotionBoneName_10), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_RootMotionBoneName_10));
	bool unmarshaledm_HasTranslationDoF_temp_11 = false;
	unmarshaledm_HasTranslationDoF_temp_11 = static_cast<bool>(marshaled.___m_HasTranslationDoF_11);
	unmarshaled.___m_HasTranslationDoF_11 = unmarshaledm_HasTranslationDoF_temp_11;
	bool unmarshaledm_HasExtraRoot_temp_12 = false;
	unmarshaledm_HasExtraRoot_temp_12 = static_cast<bool>(marshaled.___m_HasExtraRoot_12);
	unmarshaled.___m_HasExtraRoot_12 = unmarshaledm_HasExtraRoot_temp_12;
	bool unmarshaledm_SkeletonHasParents_temp_13 = false;
	unmarshaledm_SkeletonHasParents_temp_13 = static_cast<bool>(marshaled.___m_SkeletonHasParents_13);
	unmarshaled.___m_SkeletonHasParents_13 = unmarshaledm_SkeletonHasParents_temp_13;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_pinvoke_cleanup(HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_pinvoke& marshaled)
{
	if (marshaled.___human_0 != NULL)
	{
		const il2cpp_array_size_t marshaled____human_0_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____human_0_CleanupLoopCount); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup((marshaled.___human_0)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___human_0);
		marshaled.___human_0 = NULL;
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		const il2cpp_array_size_t marshaled____skeleton_1_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____skeleton_1_CleanupLoopCount); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup((marshaled.___skeleton_1)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___skeleton_1);
		marshaled.___skeleton_1 = NULL;
	}
	il2cpp_codegen_marshal_free(marshaled.___m_RootMotionBoneName_10);
	marshaled.___m_RootMotionBoneName_10 = NULL;
}




// Conversion methods for marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_com(const HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44& unmarshaled, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_com& marshaled)
{
	if (unmarshaled.___human_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledhuman_Length = (unmarshaled.___human_0)->max_length;
		marshaled.___human_0 = il2cpp_codegen_marshal_allocate_array<HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com>(_unmarshaledhuman_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledhuman_Length); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com((unmarshaled.___human_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___human_0)[i]);
		}
	}
	else
	{
		marshaled.___human_0 = NULL;
	}
	if (unmarshaled.___skeleton_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaledskeleton_Length = (unmarshaled.___skeleton_1)->max_length;
		marshaled.___skeleton_1 = il2cpp_codegen_marshal_allocate_array<SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com>(_unmarshaledskeleton_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledskeleton_Length); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com((unmarshaled.___skeleton_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___skeleton_1)[i]);
		}
	}
	else
	{
		marshaled.___skeleton_1 = NULL;
	}
	marshaled.___m_ArmTwist_2 = unmarshaled.___m_ArmTwist_2;
	marshaled.___m_ForeArmTwist_3 = unmarshaled.___m_ForeArmTwist_3;
	marshaled.___m_UpperLegTwist_4 = unmarshaled.___m_UpperLegTwist_4;
	marshaled.___m_LegTwist_5 = unmarshaled.___m_LegTwist_5;
	marshaled.___m_ArmStretch_6 = unmarshaled.___m_ArmStretch_6;
	marshaled.___m_LegStretch_7 = unmarshaled.___m_LegStretch_7;
	marshaled.___m_FeetSpacing_8 = unmarshaled.___m_FeetSpacing_8;
	marshaled.___m_GlobalScale_9 = unmarshaled.___m_GlobalScale_9;
	marshaled.___m_RootMotionBoneName_10 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_RootMotionBoneName_10);
	marshaled.___m_HasTranslationDoF_11 = static_cast<int32_t>(unmarshaled.___m_HasTranslationDoF_11);
	marshaled.___m_HasExtraRoot_12 = static_cast<int32_t>(unmarshaled.___m_HasExtraRoot_12);
	marshaled.___m_SkeletonHasParents_13 = static_cast<int32_t>(unmarshaled.___m_SkeletonHasParents_13);
}
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_com_back(const HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_com& marshaled, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___human_0 != NULL)
	{
		if (unmarshaled.___human_0 == NULL)
		{
			unmarshaled.___human_0 = reinterpret_cast<HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*>((HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*)SZArrayNew(HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___human_0), (void*)reinterpret_cast<HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*>((HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*)SZArrayNew(HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___human_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 _marshaled____human_0_i__unmarshaled;
			memset((&_marshaled____human_0_i__unmarshaled), 0, sizeof(_marshaled____human_0_i__unmarshaled));
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_back((marshaled.___human_0)[i], _marshaled____human_0_i__unmarshaled);
			(unmarshaled.___human_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____human_0_i__unmarshaled);
		}
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		if (unmarshaled.___skeleton_1 == NULL)
		{
			unmarshaled.___skeleton_1 = reinterpret_cast<SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*>((SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*)SZArrayNew(SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___skeleton_1), (void*)reinterpret_cast<SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*>((SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*)SZArrayNew(SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___skeleton_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 _marshaled____skeleton_1_i__unmarshaled;
			memset((&_marshaled____skeleton_1_i__unmarshaled), 0, sizeof(_marshaled____skeleton_1_i__unmarshaled));
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_back((marshaled.___skeleton_1)[i], _marshaled____skeleton_1_i__unmarshaled);
			(unmarshaled.___skeleton_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____skeleton_1_i__unmarshaled);
		}
	}
	float unmarshaledm_ArmTwist_temp_2 = 0.0f;
	unmarshaledm_ArmTwist_temp_2 = marshaled.___m_ArmTwist_2;
	unmarshaled.___m_ArmTwist_2 = unmarshaledm_ArmTwist_temp_2;
	float unmarshaledm_ForeArmTwist_temp_3 = 0.0f;
	unmarshaledm_ForeArmTwist_temp_3 = marshaled.___m_ForeArmTwist_3;
	unmarshaled.___m_ForeArmTwist_3 = unmarshaledm_ForeArmTwist_temp_3;
	float unmarshaledm_UpperLegTwist_temp_4 = 0.0f;
	unmarshaledm_UpperLegTwist_temp_4 = marshaled.___m_UpperLegTwist_4;
	unmarshaled.___m_UpperLegTwist_4 = unmarshaledm_UpperLegTwist_temp_4;
	float unmarshaledm_LegTwist_temp_5 = 0.0f;
	unmarshaledm_LegTwist_temp_5 = marshaled.___m_LegTwist_5;
	unmarshaled.___m_LegTwist_5 = unmarshaledm_LegTwist_temp_5;
	float unmarshaledm_ArmStretch_temp_6 = 0.0f;
	unmarshaledm_ArmStretch_temp_6 = marshaled.___m_ArmStretch_6;
	unmarshaled.___m_ArmStretch_6 = unmarshaledm_ArmStretch_temp_6;
	float unmarshaledm_LegStretch_temp_7 = 0.0f;
	unmarshaledm_LegStretch_temp_7 = marshaled.___m_LegStretch_7;
	unmarshaled.___m_LegStretch_7 = unmarshaledm_LegStretch_temp_7;
	float unmarshaledm_FeetSpacing_temp_8 = 0.0f;
	unmarshaledm_FeetSpacing_temp_8 = marshaled.___m_FeetSpacing_8;
	unmarshaled.___m_FeetSpacing_8 = unmarshaledm_FeetSpacing_temp_8;
	float unmarshaledm_GlobalScale_temp_9 = 0.0f;
	unmarshaledm_GlobalScale_temp_9 = marshaled.___m_GlobalScale_9;
	unmarshaled.___m_GlobalScale_9 = unmarshaledm_GlobalScale_temp_9;
	unmarshaled.___m_RootMotionBoneName_10 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_RootMotionBoneName_10);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_RootMotionBoneName_10), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_RootMotionBoneName_10));
	bool unmarshaledm_HasTranslationDoF_temp_11 = false;
	unmarshaledm_HasTranslationDoF_temp_11 = static_cast<bool>(marshaled.___m_HasTranslationDoF_11);
	unmarshaled.___m_HasTranslationDoF_11 = unmarshaledm_HasTranslationDoF_temp_11;
	bool unmarshaledm_HasExtraRoot_temp_12 = false;
	unmarshaledm_HasExtraRoot_temp_12 = static_cast<bool>(marshaled.___m_HasExtraRoot_12);
	unmarshaled.___m_HasExtraRoot_12 = unmarshaledm_HasExtraRoot_temp_12;
	bool unmarshaledm_SkeletonHasParents_temp_13 = false;
	unmarshaledm_SkeletonHasParents_temp_13 = static_cast<bool>(marshaled.___m_SkeletonHasParents_13);
	unmarshaled.___m_SkeletonHasParents_13 = unmarshaledm_SkeletonHasParents_temp_13;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_com_cleanup(HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_com& marshaled)
{
	if (marshaled.___human_0 != NULL)
	{
		const il2cpp_array_size_t marshaled____human_0_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____human_0_CleanupLoopCount); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_cleanup((marshaled.___human_0)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___human_0);
		marshaled.___human_0 = NULL;
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		const il2cpp_array_size_t marshaled____skeleton_1_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____skeleton_1_CleanupLoopCount); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_cleanup((marshaled.___skeleton_1)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___skeleton_1);
		marshaled.___skeleton_1 = NULL;
	}
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_RootMotionBoneName_10);
	marshaled.___m_RootMotionBoneName_10 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925 (int32_t ___0_humanId, const RuntimeMethod* method) 
{
	typedef int32_t (*HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925_ftn) (int32_t);
	static HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_humanId);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mB6190858E566BFA1B80D2E94B65CD27920A49443 (Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.RuntimeAnimatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeAnimatorController__ctor_m676D4538BB6C62314B256173C5F592EFCA16AAC8 (RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
// UnityEngine.AnimationClip[] UnityEngine.RuntimeAnimatorController::get_animationClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* RuntimeAnimatorController_get_animationClips_mA8F51FF202C2C41A3E9C5366ABDEE35EDFBE8F93 (RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* __this, const RuntimeMethod* method) 
{
	typedef AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* (*RuntimeAnimatorController_get_animationClips_mA8F51FF202C2C41A3E9C5366ABDEE35EDFBE8F93_ftn) (RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254*);
	static RuntimeAnimatorController_get_animationClips_mA8F51FF202C2C41A3E9C5366ABDEE35EDFBE8F93_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RuntimeAnimatorController_get_animationClips_mA8F51FF202C2C41A3E9C5366ABDEE35EDFBE8F93_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RuntimeAnimatorController::get_animationClips()");
	AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::SetAnimationStreamSource(UnityEngine.Animations.AnimationPlayableOutput,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_SetAnimationStreamSource_m1D5F79DBDAFB09E3A236D96FE259D692150263DD (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E ___0_output, int32_t ___1_streamSource, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D((&___0_output), NULL);
		int32_t L_1 = ___1_streamSource;
		AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_m20E22C1F0C5B12FC0FBB421D93B4BD5A3B62C3FA(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::SetSortingOrder(UnityEngine.Animations.AnimationPlayableOutput,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_SetSortingOrder_m74876C6AE563CA280803F7781FBA7304FCE05FAC (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E ___0_output, uint16_t ___1_sortingOrder, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D((&___0_output), NULL);
		uint16_t L_1 = ___1_sortingOrder;
		AnimationPlayableOutputExtensions_InternalSetSortingOrder_m67FB54EB92BA287562D0F0E71B3F63233161901E(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_m20E22C1F0C5B12FC0FBB421D93B4BD5A3B62C3FA (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_output, int32_t ___1_streamSource, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_streamSource;
		AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_m52C444A031E6807C93C20CFC8017AC4FEB08BEA7((&___0_output), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder(UnityEngine.Playables.PlayableOutputHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_m67FB54EB92BA287562D0F0E71B3F63233161901E (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_output, int32_t ___1_sortingOrder, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_sortingOrder;
		AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_mC9BF96471E656AB7CE06B616AAF2495D35B8CAA3((&___0_output), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_m52C444A031E6807C93C20CFC8017AC4FEB08BEA7 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, int32_t ___1_streamSource, const RuntimeMethod* method) 
{
	typedef void (*AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_m52C444A031E6807C93C20CFC8017AC4FEB08BEA7_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, int32_t);
	static AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_m52C444A031E6807C93C20CFC8017AC4FEB08BEA7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_m52C444A031E6807C93C20CFC8017AC4FEB08BEA7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Experimental.Animations.AnimationStreamSource)");
	_il2cpp_icall_func(___0_output, ___1_streamSource);
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_mC9BF96471E656AB7CE06B616AAF2495D35B8CAA3 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, int32_t ___1_sortingOrder, const RuntimeMethod* method) 
{
	typedef void (*AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_mC9BF96471E656AB7CE06B616AAF2495D35B8CAA3_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, int32_t);
	static AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_mC9BF96471E656AB7CE06B616AAF2495D35B8CAA3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_mC9BF96471E656AB7CE06B616AAF2495D35B8CAA3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Int32)");
	_il2cpp_icall_func(___0_output, ___1_sortingOrder);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.NotKeyableAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotKeyableAttribute__ctor_m818249C0E7E98C56F41B672A3140A87EA568EB84 (NotKeyableAttribute_tDDB6B25B26F649E3CED893EE1E63B6DE66844483* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4_AdjustorThunk (RuntimeObject* __this, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___0_other, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, bool ___1_singleLayerOptimization, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD2435BFAEB0372E848D9BE812E3B06AB862CC3D1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6_RuntimeMethod_var)));
	}

IL_0026:
	{
		bool L_5 = ___1_singleLayerOptimization;
		il2cpp_codegen_runtime_class_init_inline(AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB((&___0_handle), L_5, NULL);
	}

IL_0030:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = ___0_handle;
		__this->___m_Handle_0 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, bool ___1_singleLayerOptimization, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6(_thisAdjusted, ___0_handle, ___1_singleLayerOptimization, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970_AdjustorThunk (RuntimeObject* __this, AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___0_other, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_handle, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, bool);
	static AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___0_handle, ___1_value);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__cctor_m27A78F2EB8840FFCC84901AB4E916ACCE8D8E49B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6((&L_1), L_0, (bool)1, /*hidden argument*/NULL);
		((AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_StaticFields*)il2cpp_codegen_static_fields_for(AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7 (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DEE968069F34C26613ADFCD69C41EFC29314286)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0*>(__this + _offset);
	AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E_AdjustorThunk (RuntimeObject* __this, AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___0_other, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__cctor_m7D67E8E778387293AF1ACB1FDBE6ADA3E456A969 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DC2252638D84FAF2C30B95D54EC83F52FA6C630)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC_AdjustorThunk (RuntimeObject* __this, AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___0_other, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__cctor_m4FC582F607F00D5E2A6B97219D2D4150AFA42AF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3C8FF345EC45846B2EE6801F84DD49340F0A9E1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4*>(__this + _offset);
	AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78((&___0_other), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4> L_3(AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_3), L_2, NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270_AdjustorThunk (RuntimeObject* __this, AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___0_other, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__cctor_m6F50D35CE1FAF52BD587DD3B440CBDE34A76B096 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_StaticFields*)il2cpp_codegen_static_fields_for(AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, String_t* ___1_name, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___2_handle, const RuntimeMethod* method) 
{
	typedef bool (*AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, String_t*, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*);
	static AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0_graph, ___1_name, ___2_handle);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E AnimationPlayableOutput_Create_m65847A70F6C74854387814C5B1D4C281B6CCCDC4 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___2_target, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___1_name;
		bool L_1;
		L_1 = AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49((&___0_graph), L_0, (&V_0), NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_3;
		L_3 = AnimationPlayableOutput_get_Null_mDF5638798B49F3E7ACCF766C266D7F776E553900(NULL);
		V_3 = L_3;
		goto IL_002f;
	}

IL_001a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_4 = V_0;
		AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A((&V_1), L_4, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = ___2_target;
		AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE((&V_1), L_5, NULL);
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_6 = V_1;
		V_3 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_7 = V_3;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793((&___0_handle), PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1767A709DBA16BACAD77F5ED6AF9CBBD95D35D4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method)
{
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E*>(__this + _offset);
	AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E AnimationPlayableOutput_get_Null_mDF5638798B49F3E7ACCF766C266D7F776E553900 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8(NULL);
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E*>(__this + _offset);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::SetTarget(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_value, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* L_0 = (&__this->___m_Handle_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = ___0_value;
		AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE_AdjustorThunk (RuntimeObject* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_value, const RuntimeMethod* method)
{
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E*>(__this + _offset);
	AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_handle, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___1_target, const RuntimeMethod* method) 
{
	typedef void (*AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)");
	_il2cpp_icall_func(___0_handle, ___1_target);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE066D08B565F88D413FDACA14C42BFF008FF4EB9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C*>(__this + _offset);
	AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3 (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B((&___0_other), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C> L_3(AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_3), L_2, NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3_AdjustorThunk (RuntimeObject* __this, AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___0_other, const RuntimeMethod* method)
{
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__cctor_mFA5FE84F06C8E9A89C07190055BC898525F897C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_StaticFields*)il2cpp_codegen_static_fields_for(AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98C704D69BD1A288ED31DEE4ED4E50097A2D7018)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD*>(__this + _offset);
	AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6((&___0_other), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD> L_3(AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_3), L_2, NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327_AdjustorThunk (RuntimeObject* __this, AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___0_other, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__cctor_m42E614B0B33898D92DFE06CA6045698BE94DE633 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_StaticFields*)il2cpp_codegen_static_fields_for(AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral860B9EA7CDAB02A8A4B38336805EAE2FBA31F09C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127*>(__this + _offset);
	AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationScriptPlayable::op_Implicit(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F AnimationScriptPlayable_op_Implicit_mBF02678AFA7A679981EED33224D5B2E3AEB215C0 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___0_playable, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646((&___0_playable), NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4_AdjustorThunk (RuntimeObject* __this, AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___0_other, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_CreateHandleInternal_m0E0B65982F224BCD21CAD27DF8758C67A65296EC (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_handle, intptr_t ___2_jobReflectionData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = ___1_handle;
		intptr_t L_1 = ___2_jobReflectionData;
		il2cpp_codegen_runtime_class_init_inline(AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AnimationScriptPlayable_CreateHandleInternal_Injected_m6DD2A68DB5A0F7A25529B1899FB308F248C557E3((&___0_graph), L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__cctor_m5ED4D3FC06BC7A51D3A48B5611F759CB00F7CF54 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_StaticFields*)il2cpp_codegen_static_fields_for(AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_CreateHandleInternal_Injected_m6DD2A68DB5A0F7A25529B1899FB308F248C557E3 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_handle, intptr_t ___2_jobReflectionData, const RuntimeMethod* method) 
{
	typedef bool (*AnimationScriptPlayable_CreateHandleInternal_Injected_m6DD2A68DB5A0F7A25529B1899FB308F248C557E3_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, intptr_t);
	static AnimationScriptPlayable_CreateHandleInternal_Injected_m6DD2A68DB5A0F7A25529B1899FB308F248C557E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationScriptPlayable_CreateHandleInternal_Injected_m6DD2A68DB5A0F7A25529B1899FB308F248C557E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0_graph, ___1_handle, ___2_jobReflectionData);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 UnityEngine.Animations.AnimationStream::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AnimationStream_get_animatorBindingsVersion_mD7D19DCE96F93CE4DC36457F974C5B8562A3B5E4 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_AnimatorBindingsVersion_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t AnimationStream_get_animatorBindingsVersion_mD7D19DCE96F93CE4DC36457F974C5B8562A3B5E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = AnimationStream_get_animatorBindingsVersion_mD7D19DCE96F93CE4DC36457F974C5B8562A3B5E4(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationStream::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	{
		uint32_t L_0 = __this->___m_AnimatorBindingsVersion_0;
		if ((!(((uint32_t)L_0) >= ((uint32_t)2))))
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_1 = __this->___constant_1;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_4 = __this->___input_2;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_7 = __this->___output_3;
		intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_9;
		L_9 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_10 = __this->___workspace_4;
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_12;
		L_12 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_13 = __this->___animationHandleBinder_6;
		intptr_t L_14 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_15;
		L_15 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_13, L_14, NULL);
		G_B7_0 = ((int32_t)(L_15));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 0;
	}

IL_0065:
	{
		V_0 = (bool)G_B7_0;
		goto IL_0068;
	}

IL_0068:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C  bool AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationStream::CheckIsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB31E4AEFDFD2E76052D908F31AC56B3ABCFC7987)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C_RuntimeMethod_var)));
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*>(__this + _offset);
	AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C(_thisAdjusted, method);
}
// System.Single UnityEngine.Animations.AnimationStream::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_get_deltaTime_mECEF75B188313080405BFB556AB4CFD972233861 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C(__this, NULL);
		float L_0;
		L_0 = AnimationStream_GetDeltaTime_m335ACEAEEAEE7E3FAE1CCBD81DA839C6C1CFF0A9(__this, NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AnimationStream_get_deltaTime_mECEF75B188313080405BFB556AB4CFD972233861_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*>(__this + _offset);
	float _returnValue;
	_returnValue = AnimationStream_get_deltaTime_mECEF75B188313080405BFB556AB4CFD972233861(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_m335ACEAEEAEE7E3FAE1CCBD81DA839C6C1CFF0A9 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = AnimationStream_GetDeltaTime_Injected_mF06679592F1FEFA1DD24E4553554913F59DAAE55(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  float AnimationStream_GetDeltaTime_m335ACEAEEAEE7E3FAE1CCBD81DA839C6C1CFF0A9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*>(__this + _offset);
	float _returnValue;
	_returnValue = AnimationStream_GetDeltaTime_m335ACEAEEAEE7E3FAE1CCBD81DA839C6C1CFF0A9(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime_Injected(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_Injected_mF06679592F1FEFA1DD24E4553554913F59DAAE55 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AnimationStream_GetDeltaTime_Injected_mF06679592F1FEFA1DD24E4553554913F59DAAE55_ftn) (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*);
	static AnimationStream_GetDeltaTime_Injected_mF06679592F1FEFA1DD24E4553554913F59DAAE55_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationStream_GetDeltaTime_Injected_mF06679592F1FEFA1DD24E4553554913F59DAAE55_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationStream::GetDeltaTime_Injected(UnityEngine.Animations.AnimationStream&)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValid_m96EE3A490B88868890CF2E754838F97424A65512 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = TransformStreamHandle_IsValidInternal_mBF1602E33ABCA25121C7CF70173D29C5291354CC(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsValid_m96EE3A490B88868890CF2E754838F97424A65512_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_IsValid_m96EE3A490B88868890CF2E754838F97424A65512(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValidInternal_mBF1602E33ABCA25121C7CF70173D29C5291354CC (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1;
		L_1 = AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2;
		L_2 = TransformStreamHandle_get_createdByNative_mCC27504004588C367456D55E8295B745BE2431AC(__this, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		bool L_3;
		L_3 = TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1(__this, NULL);
		G_B4_0 = ((int32_t)(L_3));
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B4_0;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsValidInternal_mBF1602E33ABCA25121C7CF70173D29C5291354CC_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_IsValidInternal_mBF1602E33ABCA25121C7CF70173D29C5291354CC(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_createdByNative_mCC27504004588C367456D55E8295B745BE2431AC (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0;
		L_0 = TransformStreamHandle_get_animatorBindingsVersion_mD044F88843A162A554BA7EF191E52B58F9F0AFF8(__this, NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_get_createdByNative_mCC27504004588C367456D55E8295B745BE2431AC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_get_createdByNative_mCC27504004588C367456D55E8295B745BE2431AC(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsSameVersionAsStream_m31E41B516413440AC8F4D5F9F233623A6DE71365 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0;
		L_0 = TransformStreamHandle_get_animatorBindingsVersion_mD044F88843A162A554BA7EF191E52B58F9F0AFF8(__this, NULL);
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_1 = ___0_stream;
		uint32_t L_2;
		L_2 = AnimationStream_get_animatorBindingsVersion_mD7D19DCE96F93CE4DC36457F974C5B8562A3B5E4(L_1, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsSameVersionAsStream_m31E41B516413440AC8F4D5F9F233623A6DE71365_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_IsSameVersionAsStream_m31E41B516413440AC8F4D5F9F233623A6DE71365(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___handleIndex_1;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasSkeletonIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasSkeletonIndex_m8B9589FACB6810B0EFD84033D30057ADFBC4B75F (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___skeletonIndex_2;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_get_hasSkeletonIndex_m8B9589FACB6810B0EFD84033D30057ADFBC4B75F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_get_hasSkeletonIndex_m8B9589FACB6810B0EFD84033D30057ADFBC4B75F(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UnityEngine.Animations.TransformStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TransformStreamHandle_get_animatorBindingsVersion_mD044F88843A162A554BA7EF191E52B58F9F0AFF8 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_AnimatorBindingsVersion_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t TransformStreamHandle_get_animatorBindingsVersion_mD044F88843A162A554BA7EF191E52B58F9F0AFF8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = TransformStreamHandle_get_animatorBindingsVersion_mD044F88843A162A554BA7EF191E52B58F9F0AFF8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::Resolve(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_Resolve_m5DDC5761EF01E700ABDB214030802982DABC3E6E (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_Resolve_m5DDC5761EF01E700ABDB214030802982DABC3E6E_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_Resolve_m5DDC5761EF01E700ABDB214030802982DABC3E6E(_thisAdjusted, ___0_stream, method);
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolved(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolved_mB2A9548AAB37C1485AFEC2C9CD9A3D4ABC786D52 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = TransformStreamHandle_IsResolvedInternal_m83781A03679DF4C678FE963CF21F5A2203471585(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsResolved_mB2A9548AAB37C1485AFEC2C9CD9A3D4ABC786D52_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_IsResolved_mB2A9548AAB37C1485AFEC2C9CD9A3D4ABC786D52(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolvedInternal_m83781A03679DF4C678FE963CF21F5A2203471585 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1;
		L_1 = TransformStreamHandle_IsValidInternal_mBF1602E33ABCA25121C7CF70173D29C5291354CC(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_2 = ___0_stream;
		bool L_3;
		L_3 = TransformStreamHandle_IsSameVersionAsStream_m31E41B516413440AC8F4D5F9F233623A6DE71365(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		bool L_4;
		L_4 = TransformStreamHandle_get_hasSkeletonIndex_m8B9589FACB6810B0EFD84033D30057ADFBC4B75F(__this, NULL);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_001c;
	}

IL_001b:
	{
		G_B4_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B4_0;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsResolvedInternal_m83781A03679DF4C678FE963CF21F5A2203471585_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_IsResolvedInternal_m83781A03679DF4C678FE963CF21F5A2203471585(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C(L_0, NULL);
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_1 = ___0_stream;
		bool L_2;
		L_2 = TransformStreamHandle_IsResolvedInternal_m83781A03679DF4C678FE963CF21F5A2203471585(__this, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0089;
	}

IL_0015:
	{
		bool L_4;
		L_4 = TransformStreamHandle_get_createdByNative_mCC27504004588C367456D55E8295B745BE2431AC(__this, NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		bool L_5;
		L_5 = TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1(__this, NULL);
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 1;
	}

IL_0029:
	{
		V_1 = (bool)G_B5_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00974C5D0A39E4A027B0EB44FE85C731384945B0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6_RuntimeMethod_var)));
	}

IL_0038:
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_8 = ___0_stream;
		bool L_9;
		L_9 = TransformStreamHandle_IsSameVersionAsStream_m31E41B516413440AC8F4D5F9F233623A6DE71365(__this, L_8, NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		bool L_10;
		L_10 = TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1(__this, NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		bool L_11;
		L_11 = TransformStreamHandle_get_hasSkeletonIndex_m8B9589FACB6810B0EFD84033D30057ADFBC4B75F(__this, NULL);
		G_B11_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_0055;
	}

IL_0054:
	{
		G_B11_0 = 0;
	}

IL_0055:
	{
		G_B13_0 = G_B11_0;
		goto IL_0058;
	}

IL_0057:
	{
		G_B13_0 = 1;
	}

IL_0058:
	{
		V_2 = (bool)G_B13_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_13 = ___0_stream;
		TransformStreamHandle_ResolveInternal_m0008C8228981E9247DA8B0C7739DD1BF1C70EAEA(__this, L_13, NULL);
	}

IL_0066:
	{
		bool L_14;
		L_14 = TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1(__this, NULL);
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		bool L_15;
		L_15 = TransformStreamHandle_get_hasSkeletonIndex_m8B9589FACB6810B0EFD84033D30057ADFBC4B75F(__this, NULL);
		G_B18_0 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_007a;
	}

IL_0079:
	{
		G_B18_0 = 0;
	}

IL_007a:
	{
		V_3 = (bool)G_B18_0;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_17 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82132A808F0B9E6946BE41B8C7B1FDD0D99D773C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6_RuntimeMethod_var)));
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(_thisAdjusted, ___0_stream, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetPosition_m8980B6C6185653E9B962625D030C3BB1994C8B89 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = TransformStreamHandle_GetPositionInternal_m4D0EA1C47F1AAB4723411247DBA15135BA6A9D4C(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetPosition_m8980B6C6185653E9B962625D030C3BB1994C8B89_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformStreamHandle_GetPosition_m8980B6C6185653E9B962625D030C3BB1994C8B89(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPosition_m45609A840DAAF0410F72218E58E2207841290002 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_position;
		TransformStreamHandle_SetPositionInternal_m0855C3D765D6635BFEBA847061CDC90B645246CC(__this, (&___0_stream), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetPosition_m45609A840DAAF0410F72218E58E2207841290002_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetPosition_m45609A840DAAF0410F72218E58E2207841290002(_thisAdjusted, ___0_stream, ___1_position, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetRotation_m02E0CE9B403FB4138605190A48A19767D6B0C42A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = TransformStreamHandle_GetRotationInternal_m53A7E32CE6B63F588F44CAE8FCBF23C32E8393C7(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetRotation_m02E0CE9B403FB4138605190A48A19767D6B0C42A_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformStreamHandle_GetRotation_m02E0CE9B403FB4138605190A48A19767D6B0C42A(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotation_mA159153895AFFB08B30B8287304A720215C364D1 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___1_rotation;
		TransformStreamHandle_SetRotationInternal_mE7AB735A2303DC923A69B19537FDE60B5F39CE5A(__this, (&___0_stream), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetRotation_mA159153895AFFB08B30B8287304A720215C364D1_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetRotation_mA159153895AFFB08B30B8287304A720215C364D1(_thisAdjusted, ___0_stream, ___1_rotation, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalPosition_m30A1BF0A06551177E6D28A73D3DE71522B77C0A4 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = TransformStreamHandle_GetLocalPositionInternal_mDF78249F5365FA56D51A9854D69DBD420CA2408A(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalPosition_m30A1BF0A06551177E6D28A73D3DE71522B77C0A4_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformStreamHandle_GetLocalPosition_m30A1BF0A06551177E6D28A73D3DE71522B77C0A4(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPosition_mEC97D6C69019B8212F444B33DB51BDCD9DCD6282 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_position;
		TransformStreamHandle_SetLocalPositionInternal_m1758971CB7DC05A269612D1B975A22C8CB2CB890(__this, (&___0_stream), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalPosition_mEC97D6C69019B8212F444B33DB51BDCD9DCD6282_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalPosition_mEC97D6C69019B8212F444B33DB51BDCD9DCD6282(_thisAdjusted, ___0_stream, ___1_position, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetLocalRotation_mB613F5958303751C9368AD2CC613723E279985AF (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = TransformStreamHandle_GetLocalRotationInternal_m5AD8291814578D1F199FBBD2E336C43FC387CEAB(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetLocalRotation_mB613F5958303751C9368AD2CC613723E279985AF_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformStreamHandle_GetLocalRotation_mB613F5958303751C9368AD2CC613723E279985AF(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotation_m68B0586FA34978971ECDC909A44E1E0C13443C6A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___1_rotation;
		TransformStreamHandle_SetLocalRotationInternal_mDE8F5BF1C73A90573EF3918F1C88ABB73BC10778(__this, (&___0_stream), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalRotation_m68B0586FA34978971ECDC909A44E1E0C13443C6A_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalRotation_m68B0586FA34978971ECDC909A44E1E0C13443C6A(_thisAdjusted, ___0_stream, ___1_rotation, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalScale_m559039B8F2285CC33E3E952F078EF899C8ACB451 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = TransformStreamHandle_GetLocalScaleInternal_mAE69D739C71A1F9AB26E9E3496294B6662F429A2(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalScale_m559039B8F2285CC33E3E952F078EF899C8ACB451_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformStreamHandle_GetLocalScale_m559039B8F2285CC33E3E952F078EF899C8ACB451(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScale(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScale_mEAC5ED65AA0B8F756E2C129ED14D78C7B3698FE2 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_scale, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_scale;
		TransformStreamHandle_SetLocalScaleInternal_mE108B8F9D39C2C540C8619C7DECFDB685040F85C(__this, (&___0_stream), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalScale_mEAC5ED65AA0B8F756E2C129ED14D78C7B3698FE2_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_scale, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalScale_mEAC5ED65AA0B8F756E2C129ED14D78C7B3698FE2(_thisAdjusted, ___0_stream, ___1_scale, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRS_mF633398360834FAD1B1F8E21EF8C2A01B3E38A8D (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_1 = ___2_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___3_scale;
		TransformStreamHandle_GetLocalTRSInternal_m1B1B9B973843354BCA7D7A5A76CE44EFE7F2A203(__this, (&___0_stream), L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetLocalTRS_mF633398360834FAD1B1F8E21EF8C2A01B3E38A8D_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_GetLocalTRS_mF633398360834FAD1B1F8E21EF8C2A01B3E38A8D(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_scale, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRS_mA4D470AC9B87FF6FAC880A926BD3A5F4EC30BFB2 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_scale, bool ___4_useMask, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___2_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___3_scale;
		bool L_3 = ___4_useMask;
		TransformStreamHandle_SetLocalTRSInternal_m2FC862511AEAC5C2900D016CF31EB2E25D321D8B(__this, (&___0_stream), L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalTRS_mA4D470AC9B87FF6FAC880A926BD3A5F4EC30BFB2_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_scale, bool ___4_useMask, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalTRS_mA4D470AC9B87FF6FAC880A926BD3A5F4EC30BFB2(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_scale, ___4_useMask, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTR_mA0526AC698E96B95E6BE3E17A477DB028EF8A499 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_1 = ___2_rotation;
		TransformStreamHandle_GetGlobalTRInternal_m71E4832B7C5D99A91FDF742CA3E54F1C43CE34AF(__this, (&___0_stream), L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetGlobalTR_mA0526AC698E96B95E6BE3E17A477DB028EF8A499_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_GetGlobalTR_mA0526AC698E96B95E6BE3E17A477DB028EF8A499(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTR_m8C4F35DE8E639AE7D7F94F1D015AD3C16D2FC406 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, bool ___3_useMask, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___2_rotation;
		bool L_2 = ___3_useMask;
		TransformStreamHandle_SetGlobalTRInternal_m9C62E8BD63B362A404C376B09005C024F54DC7B4(__this, (&___0_stream), L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetGlobalTR_m8C4F35DE8E639AE7D7F94F1D015AD3C16D2FC406_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, bool ___3_useMask, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetGlobalTR_m8C4F35DE8E639AE7D7F94F1D015AD3C16D2FC406(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_useMask, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_m0008C8228981E9247DA8B0C7739DD1BF1C70EAEA (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_ResolveInternal_Injected_m3C2F5E0470031F9C0D33DD5C7C392F8B671B9CED(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_ResolveInternal_m0008C8228981E9247DA8B0C7739DD1BF1C70EAEA_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_ResolveInternal_m0008C8228981E9247DA8B0C7739DD1BF1C70EAEA(_thisAdjusted, ___0_stream, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetPositionInternal_m4D0EA1C47F1AAB4723411247DBA15135BA6A9D4C (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_GetPositionInternal_Injected_m3C3917F08A68CD4E24653CB78AEEA3577E043462(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetPositionInternal_m4D0EA1C47F1AAB4723411247DBA15135BA6A9D4C_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformStreamHandle_GetPositionInternal_m4D0EA1C47F1AAB4723411247DBA15135BA6A9D4C(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_m0855C3D765D6635BFEBA847061CDC90B645246CC (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_SetPositionInternal_Injected_mC8D3099FC5DB732B46C4FAD237DA63CA59B2EA5A(__this, L_0, (&___1_position), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetPositionInternal_m0855C3D765D6635BFEBA847061CDC90B645246CC_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetPositionInternal_m0855C3D765D6635BFEBA847061CDC90B645246CC(_thisAdjusted, ___0_stream, ___1_position, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetRotationInternal_m53A7E32CE6B63F588F44CAE8FCBF23C32E8393C7 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_GetRotationInternal_Injected_m4863F14E289B9627C1ACADB750B56CD81ED6F857(__this, L_0, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetRotationInternal_m53A7E32CE6B63F588F44CAE8FCBF23C32E8393C7_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformStreamHandle_GetRotationInternal_m53A7E32CE6B63F588F44CAE8FCBF23C32E8393C7(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_mE7AB735A2303DC923A69B19537FDE60B5F39CE5A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_SetRotationInternal_Injected_m181A24DB2A658E488E3F0BC684A424547A6A7683(__this, L_0, (&___1_rotation), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetRotationInternal_mE7AB735A2303DC923A69B19537FDE60B5F39CE5A_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetRotationInternal_mE7AB735A2303DC923A69B19537FDE60B5F39CE5A(_thisAdjusted, ___0_stream, ___1_rotation, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalPositionInternal_mDF78249F5365FA56D51A9854D69DBD420CA2408A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_GetLocalPositionInternal_Injected_m365FDC3BE3E31E7E83ED3E348C089A788E25C724(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalPositionInternal_mDF78249F5365FA56D51A9854D69DBD420CA2408A_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformStreamHandle_GetLocalPositionInternal_mDF78249F5365FA56D51A9854D69DBD420CA2408A(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_m1758971CB7DC05A269612D1B975A22C8CB2CB890 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_SetLocalPositionInternal_Injected_mD54FB99E9BA8700F04F9A6C12F4FD857B1F68258(__this, L_0, (&___1_position), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalPositionInternal_m1758971CB7DC05A269612D1B975A22C8CB2CB890_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalPositionInternal_m1758971CB7DC05A269612D1B975A22C8CB2CB890(_thisAdjusted, ___0_stream, ___1_position, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetLocalRotationInternal_m5AD8291814578D1F199FBBD2E336C43FC387CEAB (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_GetLocalRotationInternal_Injected_m0C379159283C0F4FEA175431383404203C624630(__this, L_0, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetLocalRotationInternal_m5AD8291814578D1F199FBBD2E336C43FC387CEAB_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformStreamHandle_GetLocalRotationInternal_m5AD8291814578D1F199FBBD2E336C43FC387CEAB(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_mDE8F5BF1C73A90573EF3918F1C88ABB73BC10778 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_SetLocalRotationInternal_Injected_m58D671FC665AF45BE7B6753A65C3F27BDCD89EA3(__this, L_0, (&___1_rotation), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalRotationInternal_mDE8F5BF1C73A90573EF3918F1C88ABB73BC10778_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalRotationInternal_mDE8F5BF1C73A90573EF3918F1C88ABB73BC10778(_thisAdjusted, ___0_stream, ___1_rotation, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalScaleInternal_mAE69D739C71A1F9AB26E9E3496294B6662F429A2 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_GetLocalScaleInternal_Injected_m2D639FCDA072EBFE62AF09EFBAE8DD09C1C82903(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalScaleInternal_mAE69D739C71A1F9AB26E9E3496294B6662F429A2_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformStreamHandle_GetLocalScaleInternal_mAE69D739C71A1F9AB26E9E3496294B6662F429A2(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_mE108B8F9D39C2C540C8619C7DECFDB685040F85C (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_scale, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_SetLocalScaleInternal_Injected_m0AEE77042B2DC3DE6DD4D92C92129B4A52CD4742(__this, L_0, (&___1_scale), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalScaleInternal_mE108B8F9D39C2C540C8619C7DECFDB685040F85C_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_scale, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalScaleInternal_mE108B8F9D39C2C540C8619C7DECFDB685040F85C(_thisAdjusted, ___0_stream, ___1_scale, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_m1B1B9B973843354BCA7D7A5A76CE44EFE7F2A203 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2 = ___2_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___3_scale;
		TransformStreamHandle_GetLocalTRSInternal_Injected_m2684C260C70D030AA66A6D9EE0641C6F8A0F41A1(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetLocalTRSInternal_m1B1B9B973843354BCA7D7A5A76CE44EFE7F2A203_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_GetLocalTRSInternal_m1B1B9B973843354BCA7D7A5A76CE44EFE7F2A203(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_scale, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_m2FC862511AEAC5C2900D016CF31EB2E25D321D8B (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_scale, bool ___4_useMask, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1 = ___4_useMask;
		TransformStreamHandle_SetLocalTRSInternal_Injected_m4185E07C39CD19689720F3F5B6161938C39BAAF6(__this, L_0, (&___1_position), (&___2_rotation), (&___3_scale), L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalTRSInternal_m2FC862511AEAC5C2900D016CF31EB2E25D321D8B_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_scale, bool ___4_useMask, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalTRSInternal_m2FC862511AEAC5C2900D016CF31EB2E25D321D8B(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_scale, ___4_useMask, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_m71E4832B7C5D99A91FDF742CA3E54F1C43CE34AF (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2 = ___2_rotation;
		TransformStreamHandle_GetGlobalTRInternal_Injected_mA425C4A4674833F9EEB44FBC2C5DB357B3EB306E(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetGlobalTRInternal_m71E4832B7C5D99A91FDF742CA3E54F1C43CE34AF_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_GetGlobalTRInternal_m71E4832B7C5D99A91FDF742CA3E54F1C43CE34AF(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_m9C62E8BD63B362A404C376B09005C024F54DC7B4 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, bool ___3_useMask, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1 = ___3_useMask;
		TransformStreamHandle_SetGlobalTRInternal_Injected_mDE035F852727673707A01C6475FC52E38D98DB6F(__this, L_0, (&___1_position), (&___2_rotation), L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetGlobalTRInternal_m9C62E8BD63B362A404C376B09005C024F54DC7B4_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, bool ___3_useMask, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetGlobalTRInternal_m9C62E8BD63B362A404C376B09005C024F54DC7B4(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_useMask, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_Injected_m3C2F5E0470031F9C0D33DD5C7C392F8B671B9CED (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_ResolveInternal_Injected_m3C2F5E0470031F9C0D33DD5C7C392F8B671B9CED_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*);
	static TransformStreamHandle_ResolveInternal_Injected_m3C2F5E0470031F9C0D33DD5C7C392F8B671B9CED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_ResolveInternal_Injected_m3C2F5E0470031F9C0D33DD5C7C392F8B671B9CED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetPositionInternal_Injected_m3C3917F08A68CD4E24653CB78AEEA3577E043462 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_GetPositionInternal_Injected_m3C3917F08A68CD4E24653CB78AEEA3577E043462_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformStreamHandle_GetPositionInternal_Injected_m3C3917F08A68CD4E24653CB78AEEA3577E043462_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetPositionInternal_Injected_m3C3917F08A68CD4E24653CB78AEEA3577E043462_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_Injected_mC8D3099FC5DB732B46C4FAD237DA63CA59B2EA5A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_SetPositionInternal_Injected_mC8D3099FC5DB732B46C4FAD237DA63CA59B2EA5A_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformStreamHandle_SetPositionInternal_Injected_mC8D3099FC5DB732B46C4FAD237DA63CA59B2EA5A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetPositionInternal_Injected_mC8D3099FC5DB732B46C4FAD237DA63CA59B2EA5A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetRotationInternal_Injected_m4863F14E289B9627C1ACADB750B56CD81ED6F857 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_GetRotationInternal_Injected_m4863F14E289B9627C1ACADB750B56CD81ED6F857_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformStreamHandle_GetRotationInternal_Injected_m4863F14E289B9627C1ACADB750B56CD81ED6F857_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetRotationInternal_Injected_m4863F14E289B9627C1ACADB750B56CD81ED6F857_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_Injected_m181A24DB2A658E488E3F0BC684A424547A6A7683 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_SetRotationInternal_Injected_m181A24DB2A658E488E3F0BC684A424547A6A7683_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformStreamHandle_SetRotationInternal_Injected_m181A24DB2A658E488E3F0BC684A424547A6A7683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetRotationInternal_Injected_m181A24DB2A658E488E3F0BC684A424547A6A7683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_rotation);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalPositionInternal_Injected_m365FDC3BE3E31E7E83ED3E348C089A788E25C724 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_GetLocalPositionInternal_Injected_m365FDC3BE3E31E7E83ED3E348C089A788E25C724_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformStreamHandle_GetLocalPositionInternal_Injected_m365FDC3BE3E31E7E83ED3E348C089A788E25C724_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalPositionInternal_Injected_m365FDC3BE3E31E7E83ED3E348C089A788E25C724_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_Injected_mD54FB99E9BA8700F04F9A6C12F4FD857B1F68258 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_SetLocalPositionInternal_Injected_mD54FB99E9BA8700F04F9A6C12F4FD857B1F68258_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformStreamHandle_SetLocalPositionInternal_Injected_mD54FB99E9BA8700F04F9A6C12F4FD857B1F68258_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalPositionInternal_Injected_mD54FB99E9BA8700F04F9A6C12F4FD857B1F68258_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalRotationInternal_Injected_m0C379159283C0F4FEA175431383404203C624630 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_GetLocalRotationInternal_Injected_m0C379159283C0F4FEA175431383404203C624630_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformStreamHandle_GetLocalRotationInternal_Injected_m0C379159283C0F4FEA175431383404203C624630_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalRotationInternal_Injected_m0C379159283C0F4FEA175431383404203C624630_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_Injected_m58D671FC665AF45BE7B6753A65C3F27BDCD89EA3 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_SetLocalRotationInternal_Injected_m58D671FC665AF45BE7B6753A65C3F27BDCD89EA3_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformStreamHandle_SetLocalRotationInternal_Injected_m58D671FC665AF45BE7B6753A65C3F27BDCD89EA3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalRotationInternal_Injected_m58D671FC665AF45BE7B6753A65C3F27BDCD89EA3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_rotation);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalScaleInternal_Injected_m2D639FCDA072EBFE62AF09EFBAE8DD09C1C82903 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_GetLocalScaleInternal_Injected_m2D639FCDA072EBFE62AF09EFBAE8DD09C1C82903_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformStreamHandle_GetLocalScaleInternal_Injected_m2D639FCDA072EBFE62AF09EFBAE8DD09C1C82903_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalScaleInternal_Injected_m2D639FCDA072EBFE62AF09EFBAE8DD09C1C82903_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_Injected_m0AEE77042B2DC3DE6DD4D92C92129B4A52CD4742 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_scale, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_SetLocalScaleInternal_Injected_m0AEE77042B2DC3DE6DD4D92C92129B4A52CD4742_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformStreamHandle_SetLocalScaleInternal_Injected_m0AEE77042B2DC3DE6DD4D92C92129B4A52CD4742_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalScaleInternal_Injected_m0AEE77042B2DC3DE6DD4D92C92129B4A52CD4742_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_scale);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_Injected_m2684C260C70D030AA66A6D9EE0641C6F8A0F41A1 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___4_scale, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_GetLocalTRSInternal_Injected_m2684C260C70D030AA66A6D9EE0641C6F8A0F41A1_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformStreamHandle_GetLocalTRSInternal_Injected_m2684C260C70D030AA66A6D9EE0641C6F8A0F41A1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalTRSInternal_Injected_m2684C260C70D030AA66A6D9EE0641C6F8A0F41A1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position, ___3_rotation, ___4_scale);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_Injected_m4185E07C39CD19689720F3F5B6161938C39BAAF6 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___4_scale, bool ___5_useMask, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_SetLocalTRSInternal_Injected_m4185E07C39CD19689720F3F5B6161938C39BAAF6_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, bool);
	static TransformStreamHandle_SetLocalTRSInternal_Injected_m4185E07C39CD19689720F3F5B6161938C39BAAF6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalTRSInternal_Injected_m4185E07C39CD19689720F3F5B6161938C39BAAF6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position, ___3_rotation, ___4_scale, ___5_useMask);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_Injected_mA425C4A4674833F9EEB44FBC2C5DB357B3EB306E (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_GetGlobalTRInternal_Injected_mA425C4A4674833F9EEB44FBC2C5DB357B3EB306E_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformStreamHandle_GetGlobalTRInternal_Injected_mA425C4A4674833F9EEB44FBC2C5DB357B3EB306E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetGlobalTRInternal_Injected_mA425C4A4674833F9EEB44FBC2C5DB357B3EB306E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position, ___3_rotation);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_Injected_mDE035F852727673707A01C6475FC52E38D98DB6F (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, bool ___4_useMask, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_SetGlobalTRInternal_Injected_mDE035F852727673707A01C6475FC52E38D98DB6F_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, bool);
	static TransformStreamHandle_SetGlobalTRInternal_Injected_mDE035F852727673707A01C6475FC52E38D98DB6F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetGlobalTRInternal_Injected_mDE035F852727673707A01C6475FC52E38D98DB6F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position, ___3_rotation, ___4_useMask);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsValidInternal_mFE619567B465984FC8E00F07CC24D489802BB51B (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1;
		L_1 = AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		bool L_2;
		L_2 = PropertyStreamHandle_get_createdByNative_m2610F75D942E639F8D9919D9A8A8E2210503292A(__this, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		bool L_3;
		L_3 = PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415(__this, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		bool L_4;
		L_4 = PropertyStreamHandle_get_hasBindType_mF482FD67DC2BBB8AF20A959C846430577FCC51B3(__this, NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_IsValidInternal_mFE619567B465984FC8E00F07CC24D489802BB51B_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_IsValidInternal_mFE619567B465984FC8E00F07CC24D489802BB51B(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_createdByNative_m2610F75D942E639F8D9919D9A8A8E2210503292A (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0;
		L_0 = PropertyStreamHandle_get_animatorBindingsVersion_mAF352761E16C2BC5658A2B37C77EFC88173EA4C0(__this, NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_createdByNative_m2610F75D942E639F8D9919D9A8A8E2210503292A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_get_createdByNative_m2610F75D942E639F8D9919D9A8A8E2210503292A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsSameVersionAsStream_m105BA0425054D86214E70C3D0746517A0BBD5305 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0;
		L_0 = PropertyStreamHandle_get_animatorBindingsVersion_mAF352761E16C2BC5658A2B37C77EFC88173EA4C0(__this, NULL);
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_1 = ___0_stream;
		uint32_t L_2;
		L_2 = AnimationStream_get_animatorBindingsVersion_mD7D19DCE96F93CE4DC36457F974C5B8562A3B5E4(L_1, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_IsSameVersionAsStream_m105BA0425054D86214E70C3D0746517A0BBD5305_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_IsSameVersionAsStream_m105BA0425054D86214E70C3D0746517A0BBD5305(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___handleIndex_1;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasValueArrayIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasValueArrayIndex_m6BFF272278DB968E4732EE7BAA990F18258DC610 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___valueArrayIndex_2;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_hasValueArrayIndex_m6BFF272278DB968E4732EE7BAA990F18258DC610_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_get_hasValueArrayIndex_m6BFF272278DB968E4732EE7BAA990F18258DC610(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasBindType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasBindType_mF482FD67DC2BBB8AF20A959C846430577FCC51B3 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___bindType_3;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_hasBindType_mF482FD67DC2BBB8AF20A959C846430577FCC51B3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_get_hasBindType_mF482FD67DC2BBB8AF20A959C846430577FCC51B3(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UnityEngine.Animations.PropertyStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PropertyStreamHandle_get_animatorBindingsVersion_mAF352761E16C2BC5658A2B37C77EFC88173EA4C0 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_AnimatorBindingsVersion_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t PropertyStreamHandle_get_animatorBindingsVersion_mAF352761E16C2BC5658A2B37C77EFC88173EA4C0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = PropertyStreamHandle_get_animatorBindingsVersion_mAF352761E16C2BC5658A2B37C77EFC88173EA4C0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsResolvedInternal_m7B96232330AB117B2050D16FE135103D6ED97DFA (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1;
		L_1 = PropertyStreamHandle_IsValidInternal_mFE619567B465984FC8E00F07CC24D489802BB51B(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_2 = ___0_stream;
		bool L_3;
		L_3 = PropertyStreamHandle_IsSameVersionAsStream_m105BA0425054D86214E70C3D0746517A0BBD5305(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		bool L_4;
		L_4 = PropertyStreamHandle_get_hasValueArrayIndex_m6BFF272278DB968E4732EE7BAA990F18258DC610(__this, NULL);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_001c;
	}

IL_001b:
	{
		G_B4_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B4_0;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_IsResolvedInternal_m7B96232330AB117B2050D16FE135103D6ED97DFA_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_IsResolvedInternal_m7B96232330AB117B2050D16FE135103D6ED97DFA(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B19_0 = 0;
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C(L_0, NULL);
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_1 = ___0_stream;
		bool L_2;
		L_2 = PropertyStreamHandle_IsResolvedInternal_m7B96232330AB117B2050D16FE135103D6ED97DFA(__this, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0091;
	}

IL_0015:
	{
		bool L_4;
		L_4 = PropertyStreamHandle_get_createdByNative_m2610F75D942E639F8D9919D9A8A8E2210503292A(__this, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		bool L_5;
		L_5 = PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415(__this, NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		bool L_6;
		L_6 = PropertyStreamHandle_get_hasBindType_mF482FD67DC2BBB8AF20A959C846430577FCC51B3(__this, NULL);
		G_B6_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B6_0 = 1;
	}

IL_0031:
	{
		V_1 = (bool)G_B6_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A5239659C252C3C95FC09A31CA37CA6F6B07FAE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C_RuntimeMethod_var)));
	}

IL_0040:
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_9 = ___0_stream;
		bool L_10;
		L_10 = PropertyStreamHandle_IsSameVersionAsStream_m105BA0425054D86214E70C3D0746517A0BBD5305(__this, L_9, NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		bool L_11;
		L_11 = PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415(__this, NULL);
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		bool L_12;
		L_12 = PropertyStreamHandle_get_hasValueArrayIndex_m6BFF272278DB968E4732EE7BAA990F18258DC610(__this, NULL);
		G_B12_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B12_0 = 0;
	}

IL_005d:
	{
		G_B14_0 = G_B12_0;
		goto IL_0060;
	}

IL_005f:
	{
		G_B14_0 = 1;
	}

IL_0060:
	{
		V_2 = (bool)G_B14_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_006e;
		}
	}
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_14 = ___0_stream;
		PropertyStreamHandle_ResolveInternal_mFB0A48675D8D847197CB392325CDCA837B82E64C(__this, L_14, NULL);
	}

IL_006e:
	{
		bool L_15;
		L_15 = PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415(__this, NULL);
		if (!L_15)
		{
			goto IL_0081;
		}
	}
	{
		bool L_16;
		L_16 = PropertyStreamHandle_get_hasValueArrayIndex_m6BFF272278DB968E4732EE7BAA990F18258DC610(__this, NULL);
		G_B19_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0082;
	}

IL_0081:
	{
		G_B19_0 = 0;
	}

IL_0082:
	{
		V_3 = (bool)G_B19_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10F6FECF95C1235E3B90F738314A338A55A4DF3B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C_RuntimeMethod_var)));
	}

IL_0091:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C(_thisAdjusted, ___0_stream, method);
}
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloat(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloat_mAEC50079467900B74F7B485BBAF65A4DE1BBB8DF (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C(__this, (&___0_stream), NULL);
		int32_t L_0 = __this->___bindType_3;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9FD6FF0BE087CD9281920D7CEAF428070CEF0D13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_GetFloat_mAEC50079467900B74F7B485BBAF65A4DE1BBB8DF_RuntimeMethod_var)));
	}

IL_0025:
	{
		float L_3;
		L_3 = PropertyStreamHandle_GetFloatInternal_m11E03DE3C420D8F9BFA7926D1F452766BD34B783(__this, (&___0_stream), NULL);
		V_1 = L_3;
		goto IL_0030;
	}

IL_0030:
	{
		float L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  float PropertyStreamHandle_GetFloat_mAEC50079467900B74F7B485BBAF65A4DE1BBB8DF_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	float _returnValue;
	_returnValue = PropertyStreamHandle_GetFloat_mAEC50079467900B74F7B485BBAF65A4DE1BBB8DF(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloat(UnityEngine.Animations.AnimationStream,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloat_m9FA9F67C2AA473A7395EACF2563E7C8A06008C33 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, float ___1_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C(__this, (&___0_stream), NULL);
		int32_t L_0 = __this->___bindType_3;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF248A46D93F240BD665585183A3658090FB86C2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_SetFloat_m9FA9F67C2AA473A7395EACF2563E7C8A06008C33_RuntimeMethod_var)));
	}

IL_0025:
	{
		float L_3 = ___1_value;
		PropertyStreamHandle_SetFloatInternal_m044594EAE3DEEC6030E096DB0A8F0454ADCAD6A8(__this, (&___0_stream), L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetFloat_m9FA9F67C2AA473A7395EACF2563E7C8A06008C33_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, float ___1_value, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_SetFloat_m9FA9F67C2AA473A7395EACF2563E7C8A06008C33(_thisAdjusted, ___0_stream, ___1_value, method);
}
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetInt(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetInt_m58CECCE1A73DB1EA96E287B5B7BF51BF502D8D98 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C(__this, (&___0_stream), NULL);
		int32_t L_0 = __this->___bindType_3;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_1 = __this->___bindType_3;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)11))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = __this->___bindType_3;
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9FD6FF0BE087CD9281920D7CEAF428070CEF0D13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_GetInt_m58CECCE1A73DB1EA96E287B5B7BF51BF502D8D98_RuntimeMethod_var)));
	}

IL_003d:
	{
		int32_t L_5;
		L_5 = PropertyStreamHandle_GetIntInternal_m598EC48F1700FB43EF1A5880178BB841A781D4C9(__this, (&___0_stream), NULL);
		V_1 = L_5;
		goto IL_0048;
	}

IL_0048:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t PropertyStreamHandle_GetInt_m58CECCE1A73DB1EA96E287B5B7BF51BF502D8D98_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PropertyStreamHandle_GetInt_m58CECCE1A73DB1EA96E287B5B7BF51BF502D8D98(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetInt(UnityEngine.Animations.AnimationStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetInt_m1E7A8AF3165E77EB0148AC17FB641711134DBE48 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, int32_t ___1_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C(__this, (&___0_stream), NULL);
		int32_t L_0 = __this->___bindType_3;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_1 = __this->___bindType_3;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)11))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = __this->___bindType_3;
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF248A46D93F240BD665585183A3658090FB86C2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_SetInt_m1E7A8AF3165E77EB0148AC17FB641711134DBE48_RuntimeMethod_var)));
	}

IL_003d:
	{
		int32_t L_5 = ___1_value;
		PropertyStreamHandle_SetIntInternal_m37894828B9FD37A78CCE5A6F9F9EB7E1C0FE72A4(__this, (&___0_stream), L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetInt_m1E7A8AF3165E77EB0148AC17FB641711134DBE48_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, int32_t ___1_value, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_SetInt_m1E7A8AF3165E77EB0148AC17FB641711134DBE48(_thisAdjusted, ___0_stream, ___1_value, method);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBool(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBool_mBB5B008988E6CC47C526CF654E53804909C141E0 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C(__this, (&___0_stream), NULL);
		int32_t L_0 = __this->___bindType_3;
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = __this->___bindType_3;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9FD6FF0BE087CD9281920D7CEAF428070CEF0D13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_GetBool_mBB5B008988E6CC47C526CF654E53804909C141E0_RuntimeMethod_var)));
	}

IL_0031:
	{
		bool L_4;
		L_4 = PropertyStreamHandle_GetBoolInternal_m25D06AA6F53B3265E80243E589F39EF4C30E7DAD(__this, (&___0_stream), NULL);
		V_1 = L_4;
		goto IL_003c;
	}

IL_003c:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_GetBool_mBB5B008988E6CC47C526CF654E53804909C141E0_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_GetBool_mBB5B008988E6CC47C526CF654E53804909C141E0(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBool(UnityEngine.Animations.AnimationStream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBool_m8307F19E9C41A431FC9A71128A305B547BE675C7 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, bool ___1_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C(__this, (&___0_stream), NULL);
		int32_t L_0 = __this->___bindType_3;
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = __this->___bindType_3;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF248A46D93F240BD665585183A3658090FB86C2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_SetBool_m8307F19E9C41A431FC9A71128A305B547BE675C7_RuntimeMethod_var)));
	}

IL_0031:
	{
		bool L_4 = ___1_value;
		PropertyStreamHandle_SetBoolInternal_mD237DF6939F5BE683D485E984C37791624C67A26(__this, (&___0_stream), L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetBool_m8307F19E9C41A431FC9A71128A305B547BE675C7_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, bool ___1_value, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_SetBool_m8307F19E9C41A431FC9A71128A305B547BE675C7(_thisAdjusted, ___0_stream, ___1_value, method);
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_mFB0A48675D8D847197CB392325CDCA837B82E64C (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		PropertyStreamHandle_ResolveInternal_Injected_m2F38D58EFF0643C85F7ABA035DAC718D5A885B0F(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_ResolveInternal_mFB0A48675D8D847197CB392325CDCA837B82E64C_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_ResolveInternal_mFB0A48675D8D847197CB392325CDCA837B82E64C(_thisAdjusted, ___0_stream, method);
}
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_m11E03DE3C420D8F9BFA7926D1F452766BD34B783 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		float L_1;
		L_1 = PropertyStreamHandle_GetFloatInternal_Injected_m6604EAC314F4B69CAC8601BE540A723ADCC8734E(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  float PropertyStreamHandle_GetFloatInternal_m11E03DE3C420D8F9BFA7926D1F452766BD34B783_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	float _returnValue;
	_returnValue = PropertyStreamHandle_GetFloatInternal_m11E03DE3C420D8F9BFA7926D1F452766BD34B783(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal(UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_m044594EAE3DEEC6030E096DB0A8F0454ADCAD6A8 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, float ___1_value, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		float L_1 = ___1_value;
		PropertyStreamHandle_SetFloatInternal_Injected_mBFF2DBFE042CB9C68B804BB413E28171D465A94F(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetFloatInternal_m044594EAE3DEEC6030E096DB0A8F0454ADCAD6A8_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, float ___1_value, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_SetFloatInternal_m044594EAE3DEEC6030E096DB0A8F0454ADCAD6A8(_thisAdjusted, ___0_stream, ___1_value, method);
}
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_m598EC48F1700FB43EF1A5880178BB841A781D4C9 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		int32_t L_1;
		L_1 = PropertyStreamHandle_GetIntInternal_Injected_mDFDACC53C8FAA687E154D78C9A86B58EA836AF14(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t PropertyStreamHandle_GetIntInternal_m598EC48F1700FB43EF1A5880178BB841A781D4C9_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PropertyStreamHandle_GetIntInternal_m598EC48F1700FB43EF1A5880178BB841A781D4C9(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal(UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_m37894828B9FD37A78CCE5A6F9F9EB7E1C0FE72A4 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		int32_t L_1 = ___1_value;
		PropertyStreamHandle_SetIntInternal_Injected_m825B4B4CC03932B30E2A9DA34500012C429765FA(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetIntInternal_m37894828B9FD37A78CCE5A6F9F9EB7E1C0FE72A4_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, int32_t ___1_value, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_SetIntInternal_m37894828B9FD37A78CCE5A6F9F9EB7E1C0FE72A4(_thisAdjusted, ___0_stream, ___1_value, method);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_m25D06AA6F53B3265E80243E589F39EF4C30E7DAD (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1;
		L_1 = PropertyStreamHandle_GetBoolInternal_Injected_mDE6D207C4962AC0FC356962421418A632D7120D6(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_GetBoolInternal_m25D06AA6F53B3265E80243E589F39EF4C30E7DAD_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_GetBoolInternal_m25D06AA6F53B3265E80243E589F39EF4C30E7DAD(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal(UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_mD237DF6939F5BE683D485E984C37791624C67A26 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, bool ___1_value, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1 = ___1_value;
		PropertyStreamHandle_SetBoolInternal_Injected_m4489226DE93D01A970F9BF2A71E11D0F826C804B(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetBoolInternal_mD237DF6939F5BE683D485E984C37791624C67A26_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, bool ___1_value, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_SetBoolInternal_mD237DF6939F5BE683D485E984C37791624C67A26(_thisAdjusted, ___0_stream, ___1_value, method);
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_Injected_m2F38D58EFF0643C85F7ABA035DAC718D5A885B0F (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) 
{
	typedef void (*PropertyStreamHandle_ResolveInternal_Injected_m2F38D58EFF0643C85F7ABA035DAC718D5A885B0F_ftn) (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*);
	static PropertyStreamHandle_ResolveInternal_Injected_m2F38D58EFF0643C85F7ABA035DAC718D5A885B0F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_ResolveInternal_Injected_m2F38D58EFF0643C85F7ABA035DAC718D5A885B0F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream);
}
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_Injected_m6604EAC314F4B69CAC8601BE540A723ADCC8734E (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) 
{
	typedef float (*PropertyStreamHandle_GetFloatInternal_Injected_m6604EAC314F4B69CAC8601BE540A723ADCC8734E_ftn) (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*);
	static PropertyStreamHandle_GetFloatInternal_Injected_m6604EAC314F4B69CAC8601BE540A723ADCC8734E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_GetFloatInternal_Injected_m6604EAC314F4B69CAC8601BE540A723ADCC8734E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_stream);
	return icallRetVal;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_Injected_mBFF2DBFE042CB9C68B804BB413E28171D465A94F (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, float ___2_value, const RuntimeMethod* method) 
{
	typedef void (*PropertyStreamHandle_SetFloatInternal_Injected_mBFF2DBFE042CB9C68B804BB413E28171D465A94F_ftn) (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, float);
	static PropertyStreamHandle_SetFloatInternal_Injected_mBFF2DBFE042CB9C68B804BB413E28171D465A94F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_SetFloatInternal_Injected_mBFF2DBFE042CB9C68B804BB413E28171D465A94F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_value);
}
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_Injected_mDFDACC53C8FAA687E154D78C9A86B58EA836AF14 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) 
{
	typedef int32_t (*PropertyStreamHandle_GetIntInternal_Injected_mDFDACC53C8FAA687E154D78C9A86B58EA836AF14_ftn) (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*);
	static PropertyStreamHandle_GetIntInternal_Injected_mDFDACC53C8FAA687E154D78C9A86B58EA836AF14_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_GetIntInternal_Injected_mDFDACC53C8FAA687E154D78C9A86B58EA836AF14_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::GetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_stream);
	return icallRetVal;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_Injected_m825B4B4CC03932B30E2A9DA34500012C429765FA (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, int32_t ___2_value, const RuntimeMethod* method) 
{
	typedef void (*PropertyStreamHandle_SetIntInternal_Injected_m825B4B4CC03932B30E2A9DA34500012C429765FA_ftn) (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, int32_t);
	static PropertyStreamHandle_SetIntInternal_Injected_m825B4B4CC03932B30E2A9DA34500012C429765FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_SetIntInternal_Injected_m825B4B4CC03932B30E2A9DA34500012C429765FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::SetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_value);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_Injected_mDE6D207C4962AC0FC356962421418A632D7120D6 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) 
{
	typedef bool (*PropertyStreamHandle_GetBoolInternal_Injected_mDE6D207C4962AC0FC356962421418A632D7120D6_ftn) (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*);
	static PropertyStreamHandle_GetBoolInternal_Injected_mDE6D207C4962AC0FC356962421418A632D7120D6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_GetBoolInternal_Injected_mDE6D207C4962AC0FC356962421418A632D7120D6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_stream);
	return icallRetVal;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_Injected_m4489226DE93D01A970F9BF2A71E11D0F826C804B (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, bool ___2_value, const RuntimeMethod* method) 
{
	typedef void (*PropertyStreamHandle_SetBoolInternal_Injected_m4489226DE93D01A970F9BF2A71E11D0F826C804B_ftn) (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, bool);
	static PropertyStreamHandle_SetBoolInternal_Injected_m4489226DE93D01A970F9BF2A71E11D0F826C804B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_SetBoolInternal_Injected_m4489226DE93D01A970F9BF2A71E11D0F826C804B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animations.TransformSceneHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_IsValid_m11DB3FA1E3137CA1C2D4D4BC18AD717FCCAC65E2 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		bool L_0;
		L_0 = AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A((&___0_stream), NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1;
		L_1 = TransformSceneHandle_get_createdByNative_m40C489AAD66DEDFEB69F6BB25B1177FC51922D3D(__this, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_mBD4B49152989D4379E6D726B0F7E834EA484383B(__this, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		bool L_3;
		L_3 = TransformSceneHandle_HasValidTransform_m19ABA61E5902DA7F1207798BBB4DCFBE515B9537(__this, (&___0_stream), NULL);
		G_B5_0 = ((int32_t)(L_3));
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_IsValid_m11DB3FA1E3137CA1C2D4D4BC18AD717FCCAC65E2_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformSceneHandle_IsValid_m11DB3FA1E3137CA1C2D4D4BC18AD717FCCAC65E2(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_createdByNative_m40C489AAD66DEDFEB69F6BB25B1177FC51922D3D (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0 = __this->___valid_0;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_get_createdByNative_m40C489AAD66DEDFEB69F6BB25B1177FC51922D3D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformSceneHandle_get_createdByNative_m40C489AAD66DEDFEB69F6BB25B1177FC51922D3D(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_hasTransformSceneHandleDefinitionIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_mBD4B49152989D4379E6D726B0F7E834EA484383B (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___transformSceneHandleDefinitionIndex_1;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_mBD4B49152989D4379E6D726B0F7E834EA484383B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_mBD4B49152989D4379E6D726B0F7E834EA484383B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformSceneHandle::CheckIsValid(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C(L_0, NULL);
		bool L_1;
		L_1 = TransformSceneHandle_get_createdByNative_m40C489AAD66DEDFEB69F6BB25B1177FC51922D3D(__this, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2;
		L_2 = TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_mBD4B49152989D4379E6D726B0F7E834EA484383B(__this, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral972CE48A8E26750559B1B00039204D0DE5B03904)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A_RuntimeMethod_var)));
	}

IL_002b:
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_5 = ___0_stream;
		bool L_6;
		L_6 = TransformSceneHandle_HasValidTransform_m19ABA61E5902DA7F1207798BBB4DCFBE515B9537(__this, L_5, NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_8 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD05EE9FE9EFEEB35F354D97C2927EEB880DA9264)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A_RuntimeMethod_var)));
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(_thisAdjusted, ___0_stream, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetPosition_mDB8261C4AF79828292D555DBF91A6559DE41B3B8 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = TransformSceneHandle_GetPositionInternal_mAC29651E3EB5FC3BD4CB49B2B09EB9897375FC29(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetPosition_mDB8261C4AF79828292D555DBF91A6559DE41B3B8_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformSceneHandle_GetPosition_mDB8261C4AF79828292D555DBF91A6559DE41B3B8(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalPosition_mF5AFF93B5129702C280CCEB0603100377BFE2D32 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = TransformSceneHandle_GetLocalPositionInternal_mAFD402FC292DD1D9BDBF6BE446E89CDD85A47182(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalPosition_mF5AFF93B5129702C280CCEB0603100377BFE2D32_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformSceneHandle_GetLocalPosition_mF5AFF93B5129702C280CCEB0603100377BFE2D32(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetRotation_m8F6CA3E2302A43103A808120AEE1C527EB2A2F05 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(__this, (&___0_stream), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = TransformSceneHandle_GetRotationInternal_m53DDDEE9D5824A6E5BFEE5C5681A33E468E0FC5E(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetRotation_m8F6CA3E2302A43103A808120AEE1C527EB2A2F05_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformSceneHandle_GetRotation_m8F6CA3E2302A43103A808120AEE1C527EB2A2F05(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetLocalRotation_mEB7C44D455654A40518C8AE8D8CC0D191E194B8D (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(__this, (&___0_stream), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = TransformSceneHandle_GetLocalRotationInternal_mC63DB1B1DA36584AC8C550683E9E2F67F350A688(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetLocalRotation_mEB7C44D455654A40518C8AE8D8CC0D191E194B8D_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformSceneHandle_GetLocalRotation_mEB7C44D455654A40518C8AE8D8CC0D191E194B8D(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalScale_m46D9A20E7DC5967A0EE6F7C217FAA68FBB93611E (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = TransformSceneHandle_GetLocalScaleInternal_m15883C28FC7DE56F00374B6A14F027CFC6C35069(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalScale_m46D9A20E7DC5967A0EE6F7C217FAA68FBB93611E_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformSceneHandle_GetLocalScale_m46D9A20E7DC5967A0EE6F7C217FAA68FBB93611E(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRS_m5FBE0248443B3D34C7787A50DE89BB473638CADB (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) 
{
	{
		TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_1 = ___2_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___3_scale;
		TransformSceneHandle_GetLocalTRSInternal_mBB816EAB9B873A23A8B01C96789480F438968497(__this, (&___0_stream), L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetLocalTRS_m5FBE0248443B3D34C7787A50DE89BB473638CADB_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	TransformSceneHandle_GetLocalTRS_m5FBE0248443B3D34C7787A50DE89BB473638CADB(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_scale, method);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTR_m7CB0885446CA0894BF681F1954C3E0FB8D31C9EB (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) 
{
	{
		TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_1 = ___2_rotation;
		TransformSceneHandle_GetGlobalTRInternal_m821151819DD1E3F5ABA1D2C8DC5372C67A2DF343(__this, (&___0_stream), L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetGlobalTR_m7CB0885446CA0894BF681F1954C3E0FB8D31C9EB_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	TransformSceneHandle_GetGlobalTR_m7CB0885446CA0894BF681F1954C3E0FB8D31C9EB(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, method);
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_m19ABA61E5902DA7F1207798BBB4DCFBE515B9537 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1;
		L_1 = TransformSceneHandle_HasValidTransform_Injected_m1F0CEB3799D44896F7F501AE0E99BF49938ADA4B(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_HasValidTransform_m19ABA61E5902DA7F1207798BBB4DCFBE515B9537_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformSceneHandle_HasValidTransform_m19ABA61E5902DA7F1207798BBB4DCFBE515B9537(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetPositionInternal_mAC29651E3EB5FC3BD4CB49B2B09EB9897375FC29 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformSceneHandle_GetPositionInternal_Injected_m5CB0EBF73345BD9F90E504DCEFE1C2D4B349FAB0(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetPositionInternal_mAC29651E3EB5FC3BD4CB49B2B09EB9897375FC29_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformSceneHandle_GetPositionInternal_mAC29651E3EB5FC3BD4CB49B2B09EB9897375FC29(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalPositionInternal_mAFD402FC292DD1D9BDBF6BE446E89CDD85A47182 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformSceneHandle_GetLocalPositionInternal_Injected_mA2701FE4C3866CF6BB83C18C183D197975A002F8(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalPositionInternal_mAFD402FC292DD1D9BDBF6BE446E89CDD85A47182_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformSceneHandle_GetLocalPositionInternal_mAFD402FC292DD1D9BDBF6BE446E89CDD85A47182(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetRotationInternal_m53DDDEE9D5824A6E5BFEE5C5681A33E468E0FC5E (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformSceneHandle_GetRotationInternal_Injected_m50FA487714327D6B98868DB6322D1F72260B8BBE(__this, L_0, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetRotationInternal_m53DDDEE9D5824A6E5BFEE5C5681A33E468E0FC5E_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformSceneHandle_GetRotationInternal_m53DDDEE9D5824A6E5BFEE5C5681A33E468E0FC5E(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetLocalRotationInternal_mC63DB1B1DA36584AC8C550683E9E2F67F350A688 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformSceneHandle_GetLocalRotationInternal_Injected_m580089F9FDCF7CB1BFBFDBA70EE7C49BA3B90304(__this, L_0, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetLocalRotationInternal_mC63DB1B1DA36584AC8C550683E9E2F67F350A688_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformSceneHandle_GetLocalRotationInternal_mC63DB1B1DA36584AC8C550683E9E2F67F350A688(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalScaleInternal_m15883C28FC7DE56F00374B6A14F027CFC6C35069 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformSceneHandle_GetLocalScaleInternal_Injected_mD0E2E2A2B1728035C791DC88BAC3E16C3B96FBBE(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalScaleInternal_m15883C28FC7DE56F00374B6A14F027CFC6C35069_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformSceneHandle_GetLocalScaleInternal_m15883C28FC7DE56F00374B6A14F027CFC6C35069(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_mBB816EAB9B873A23A8B01C96789480F438968497 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2 = ___2_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___3_scale;
		TransformSceneHandle_GetLocalTRSInternal_Injected_m09BD17EECEC5ED6D21F7224862F01C0BEAD9CE9C(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetLocalTRSInternal_mBB816EAB9B873A23A8B01C96789480F438968497_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	TransformSceneHandle_GetLocalTRSInternal_mBB816EAB9B873A23A8B01C96789480F438968497(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_scale, method);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_m821151819DD1E3F5ABA1D2C8DC5372C67A2DF343 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2 = ___2_rotation;
		TransformSceneHandle_GetGlobalTRInternal_Injected_mBAF0D818077C87003CFACC9BCE40CD62C5208A26(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetGlobalTRInternal_m821151819DD1E3F5ABA1D2C8DC5372C67A2DF343_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	TransformSceneHandle_GetGlobalTRInternal_m821151819DD1E3F5ABA1D2C8DC5372C67A2DF343(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, method);
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_Injected_m1F0CEB3799D44896F7F501AE0E99BF49938ADA4B (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) 
{
	typedef bool (*TransformSceneHandle_HasValidTransform_Injected_m1F0CEB3799D44896F7F501AE0E99BF49938ADA4B_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*);
	static TransformSceneHandle_HasValidTransform_Injected_m1F0CEB3799D44896F7F501AE0E99BF49938ADA4B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_HasValidTransform_Injected_m1F0CEB3799D44896F7F501AE0E99BF49938ADA4B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::HasValidTransform_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_stream);
	return icallRetVal;
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetPositionInternal_Injected_m5CB0EBF73345BD9F90E504DCEFE1C2D4B349FAB0 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformSceneHandle_GetPositionInternal_Injected_m5CB0EBF73345BD9F90E504DCEFE1C2D4B349FAB0_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformSceneHandle_GetPositionInternal_Injected_m5CB0EBF73345BD9F90E504DCEFE1C2D4B349FAB0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetPositionInternal_Injected_m5CB0EBF73345BD9F90E504DCEFE1C2D4B349FAB0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalPositionInternal_Injected_mA2701FE4C3866CF6BB83C18C183D197975A002F8 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformSceneHandle_GetLocalPositionInternal_Injected_mA2701FE4C3866CF6BB83C18C183D197975A002F8_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformSceneHandle_GetLocalPositionInternal_Injected_mA2701FE4C3866CF6BB83C18C183D197975A002F8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalPositionInternal_Injected_mA2701FE4C3866CF6BB83C18C183D197975A002F8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetRotationInternal_Injected_m50FA487714327D6B98868DB6322D1F72260B8BBE (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformSceneHandle_GetRotationInternal_Injected_m50FA487714327D6B98868DB6322D1F72260B8BBE_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformSceneHandle_GetRotationInternal_Injected_m50FA487714327D6B98868DB6322D1F72260B8BBE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetRotationInternal_Injected_m50FA487714327D6B98868DB6322D1F72260B8BBE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalRotationInternal_Injected_m580089F9FDCF7CB1BFBFDBA70EE7C49BA3B90304 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformSceneHandle_GetLocalRotationInternal_Injected_m580089F9FDCF7CB1BFBFDBA70EE7C49BA3B90304_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformSceneHandle_GetLocalRotationInternal_Injected_m580089F9FDCF7CB1BFBFDBA70EE7C49BA3B90304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalRotationInternal_Injected_m580089F9FDCF7CB1BFBFDBA70EE7C49BA3B90304_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalScaleInternal_Injected_mD0E2E2A2B1728035C791DC88BAC3E16C3B96FBBE (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformSceneHandle_GetLocalScaleInternal_Injected_mD0E2E2A2B1728035C791DC88BAC3E16C3B96FBBE_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformSceneHandle_GetLocalScaleInternal_Injected_mD0E2E2A2B1728035C791DC88BAC3E16C3B96FBBE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalScaleInternal_Injected_mD0E2E2A2B1728035C791DC88BAC3E16C3B96FBBE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_Injected_m09BD17EECEC5ED6D21F7224862F01C0BEAD9CE9C (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___4_scale, const RuntimeMethod* method) 
{
	typedef void (*TransformSceneHandle_GetLocalTRSInternal_Injected_m09BD17EECEC5ED6D21F7224862F01C0BEAD9CE9C_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformSceneHandle_GetLocalTRSInternal_Injected_m09BD17EECEC5ED6D21F7224862F01C0BEAD9CE9C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalTRSInternal_Injected_m09BD17EECEC5ED6D21F7224862F01C0BEAD9CE9C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position, ___3_rotation, ___4_scale);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_Injected_mBAF0D818077C87003CFACC9BCE40CD62C5208A26 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, const RuntimeMethod* method) 
{
	typedef void (*TransformSceneHandle_GetGlobalTRInternal_Injected_mBAF0D818077C87003CFACC9BCE40CD62C5208A26_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformSceneHandle_GetGlobalTRInternal_Injected_mBAF0D818077C87003CFACC9BCE40CD62C5208A26_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetGlobalTRInternal_Injected_mBAF0D818077C87003CFACC9BCE40CD62C5208A26_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position, ___3_rotation);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationSceneHandleUtility::ReadFloats(UnityEngine.Animations.AnimationStream,Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertySceneHandle>,Unity.Collections.NativeArray`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSceneHandleUtility_ReadFloats_m55F39914E47481B30592FA1DDB4354AF133F29EC (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C ___1_handles, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___2_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m258DD671FB0A25F3D024F7102432145099174DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_m06B34A9BC9CCEAD8466D3E991827502A478D3673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C L_0 = ___1_handles;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_1 = ___2_buffer;
		int32_t L_2;
		L_2 = AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m258DD671FB0A25F3D024F7102432145099174DBC((&___0_stream), L_0, L_1, AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m258DD671FB0A25F3D024F7102432145099174DBC_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_002a;
	}

IL_0015:
	{
		NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C L_5 = ___1_handles;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_m06B34A9BC9CCEAD8466D3E991827502A478D3673(L_5, NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_m06B34A9BC9CCEAD8466D3E991827502A478D3673_RuntimeMethod_var);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_7 = ___2_buffer;
		void* L_8;
		L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F(L_7, NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		int32_t L_9 = V_0;
		AnimationSceneHandleUtility_ReadSceneFloatsInternal_mDF52B54C3765CC9856DC4F5A5BF9D358D4D4312A((&___0_stream), L_6, L_8, L_9, NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.Animations.AnimationSceneHandleUtility::ReadSceneFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSceneHandleUtility_ReadSceneFloatsInternal_mDF52B54C3765CC9856DC4F5A5BF9D358D4D4312A (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, void* ___1_propertySceneHandles, void* ___2_floatBuffer, int32_t ___3_count, const RuntimeMethod* method) 
{
	typedef void (*AnimationSceneHandleUtility_ReadSceneFloatsInternal_mDF52B54C3765CC9856DC4F5A5BF9D358D4D4312A_ftn) (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, void*, void*, int32_t);
	static AnimationSceneHandleUtility_ReadSceneFloatsInternal_mDF52B54C3765CC9856DC4F5A5BF9D358D4D4312A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationSceneHandleUtility_ReadSceneFloatsInternal_mDF52B54C3765CC9856DC4F5A5BF9D358D4D4312A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationSceneHandleUtility::ReadSceneFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)");
	_il2cpp_icall_func(___0_stream, ___1_propertySceneHandles, ___2_floatBuffer, ___3_count);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::WriteFloats(UnityEngine.Animations.AnimationStream,Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>,Unity.Collections.NativeArray`1<System.Single>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_WriteFloats_m647C25053281C77FAA8F6BC29D54A96E5DDEFE63 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 ___1_handles, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___2_buffer, bool ___3_useMask, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C((&___0_stream), NULL);
		NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 L_0 = ___1_handles;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_1 = ___2_buffer;
		int32_t L_2;
		L_2 = AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B((&___0_stream), L_0, L_1, AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0033;
	}

IL_001d:
	{
		NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 L_5 = ___1_handles;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3(L_5, NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3_RuntimeMethod_var);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_7 = ___2_buffer;
		void* L_8;
		L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F(L_7, NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		int32_t L_9 = V_0;
		bool L_10 = ___3_useMask;
		AnimationStreamHandleUtility_WriteStreamFloatsInternal_m189497A194CA6D6F1EC649B83C6AA42476089649((&___0_stream), L_6, L_8, L_9, L_10, NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::ReadFloats(UnityEngine.Animations.AnimationStream,Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>,Unity.Collections.NativeArray`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_ReadFloats_m4F0751C5758AC2784E0BFB81788BC63411F7E3C4 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 ___1_handles, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___2_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C((&___0_stream), NULL);
		NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 L_0 = ___1_handles;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_1 = ___2_buffer;
		int32_t L_2;
		L_2 = AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B((&___0_stream), L_0, L_1, AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0032;
	}

IL_001d:
	{
		NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 L_5 = ___1_handles;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3(L_5, NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3_RuntimeMethod_var);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_7 = ___2_buffer;
		void* L_8;
		L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F(L_7, NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		int32_t L_9 = V_0;
		AnimationStreamHandleUtility_ReadStreamFloatsInternal_m6BAC0676E422F2C256C06AA0EA32F7B66D04F84C((&___0_stream), L_6, L_8, L_9, NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::ReadStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_ReadStreamFloatsInternal_m6BAC0676E422F2C256C06AA0EA32F7B66D04F84C (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, void* ___1_propertyStreamHandles, void* ___2_floatBuffer, int32_t ___3_count, const RuntimeMethod* method) 
{
	typedef void (*AnimationStreamHandleUtility_ReadStreamFloatsInternal_m6BAC0676E422F2C256C06AA0EA32F7B66D04F84C_ftn) (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, void*, void*, int32_t);
	static AnimationStreamHandleUtility_ReadStreamFloatsInternal_m6BAC0676E422F2C256C06AA0EA32F7B66D04F84C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationStreamHandleUtility_ReadStreamFloatsInternal_m6BAC0676E422F2C256C06AA0EA32F7B66D04F84C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationStreamHandleUtility::ReadStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)");
	_il2cpp_icall_func(___0_stream, ___1_propertyStreamHandles, ___2_floatBuffer, ___3_count);
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::WriteStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_WriteStreamFloatsInternal_m189497A194CA6D6F1EC649B83C6AA42476089649 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, void* ___1_propertyStreamHandles, void* ___2_floatBuffer, int32_t ___3_count, bool ___4_useMask, const RuntimeMethod* method) 
{
	typedef void (*AnimationStreamHandleUtility_WriteStreamFloatsInternal_m189497A194CA6D6F1EC649B83C6AA42476089649_ftn) (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, void*, void*, int32_t, bool);
	static AnimationStreamHandleUtility_WriteStreamFloatsInternal_m189497A194CA6D6F1EC649B83C6AA42476089649_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationStreamHandleUtility_WriteStreamFloatsInternal_m189497A194CA6D6F1EC649B83C6AA42476089649_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationStreamHandleUtility::WriteStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32,System.Boolean)");
	_il2cpp_icall_func(___0_stream, ___1_propertyStreamHandles, ___2_floatBuffer, ___3_count, ___4_useMask);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		__this->___m_Handle_0 = L_0;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = ___0_handle;
		AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (&__this->___m_Handle_0);
		bool L_1;
		L_1 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF563F6FCC25CE41FFE0BF7590AF9F4475916665)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_RuntimeMethod_var)));
	}

IL_001b:
	{
		bool L_4;
		L_4 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		bool L_6;
		L_6 = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_8 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5510C45DDAD777CCB4893578D995C9739F990F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_RuntimeMethod_var)));
	}

IL_0040:
	{
	}

IL_0041:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_9 = ___0_handle;
		__this->___m_Handle_0 = L_9;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4(_thisAdjusted, ___0_handle, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180_AdjustorThunk (RuntimeObject* __this, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___0_other, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__cctor_m88506D1B15D609B818DFDC6B2BCFF42ABB41B090 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE((&L_1), L_0, /*hidden argument*/NULL);
		((AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_StaticFields*)il2cpp_codegen_static_fields_for(AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.TransformStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamTransform(UnityEngine.Animator,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E AnimatorJobExtensions_BindStreamTransform_m9E23872D781BC0754909267ED356266392F4E26D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, const RuntimeMethod* method) 
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E V_0;
	memset((&V_0), 0, sizeof(V_0));
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_transform;
		AnimatorJobExtensions_InternalBindStreamTransform_m83A49A8A13E2FA7AD67FAECA1B24F11D15550C2F(L_0, L_1, (&V_0), NULL);
		TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 AnimatorJobExtensions_BindStreamProperty_m199C36204F072AECF047AEFC92B1A62A61FF2F7F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, const RuntimeMethod* method) 
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_transform;
		Type_t* L_2 = ___2_type;
		String_t* L_3 = ___3_property;
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 L_4;
		L_4 = AnimatorJobExtensions_BindStreamProperty_m02E8A9116C4DB619A2B4E28AEADC593ECDE78994(L_0, L_1, L_2, L_3, (bool)0, NULL);
		V_0 = L_4;
		goto IL_000e;
	}

IL_000e:
	{
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 AnimatorJobExtensions_BindCustomStreamProperty_mB19AC2FE9BCD4C98DA571A375080E17A114D374C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, String_t* ___1_property, int32_t ___2_type, const RuntimeMethod* method) 
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		String_t* L_1 = ___1_property;
		int32_t L_2 = ___2_type;
		AnimatorJobExtensions_InternalBindCustomStreamProperty_mFD263ACFEF7E93728830EFD5133399F922EF6504(L_0, L_1, L_2, (&V_0), NULL);
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 AnimatorJobExtensions_BindStreamProperty_m02E8A9116C4DB619A2B4E28AEADC593ECDE78994 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, const RuntimeMethod* method) 
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_transform;
		Type_t* L_2 = ___2_type;
		String_t* L_3 = ___3_property;
		bool L_4 = ___4_isObjectReference;
		AnimatorJobExtensions_InternalBindStreamProperty_mE09521CB89443739B6428A0FD6B012D8C0601415(L_0, L_1, L_2, L_3, L_4, (&V_0), NULL);
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 L_5 = V_0;
		V_1 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Animations.TransformSceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneTransform(UnityEngine.Animator,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB AnimatorJobExtensions_BindSceneTransform_m78A489DBF2ED9127F74F35C33CD9C712AC73DE76 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, const RuntimeMethod* method) 
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_transform;
		AnimatorJobExtensions_InternalBindSceneTransform_m5C33CC9DC1C95933DA91E42411080A4DA49216C6(L_0, L_1, (&V_0), NULL);
		TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Animations.PropertySceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 AnimatorJobExtensions_BindSceneProperty_mB75521D482FE6417947F331C8831AB67B7B6E8B9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, const RuntimeMethod* method) 
{
	PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_transform;
		Type_t* L_2 = ___2_type;
		String_t* L_3 = ___3_property;
		PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 L_4;
		L_4 = AnimatorJobExtensions_BindSceneProperty_m5D7AEB5EEDBC08245FDBE69BF129BF0CE66B7743(L_0, L_1, L_2, L_3, (bool)0, NULL);
		V_0 = L_4;
		goto IL_000e;
	}

IL_000e:
	{
		PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Animations.PropertySceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 AnimatorJobExtensions_BindSceneProperty_m5D7AEB5EEDBC08245FDBE69BF129BF0CE66B7743 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, const RuntimeMethod* method) 
{
	PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_transform;
		Type_t* L_2 = ___2_type;
		String_t* L_3 = ___3_property;
		bool L_4 = ___4_isObjectReference;
		AnimatorJobExtensions_InternalBindSceneProperty_m7C4D6BE064BBE342314E1BCD6101F451794E0A11(L_0, L_1, L_2, L_3, L_4, (&V_0), NULL);
		PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 L_5 = V_0;
		V_1 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamTransform_m83A49A8A13E2FA7AD67FAECA1B24F11D15550C2F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___2_transformStreamHandle, const RuntimeMethod* method) 
{
	typedef void (*AnimatorJobExtensions_InternalBindStreamTransform_m83A49A8A13E2FA7AD67FAECA1B24F11D15550C2F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*);
	static AnimatorJobExtensions_InternalBindStreamTransform_m83A49A8A13E2FA7AD67FAECA1B24F11D15550C2F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindStreamTransform_m83A49A8A13E2FA7AD67FAECA1B24F11D15550C2F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformStreamHandle&)");
	_il2cpp_icall_func(___0_animator, ___1_transform, ___2_transformStreamHandle);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamProperty_mE09521CB89443739B6428A0FD6B012D8C0601415 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___5_propertyStreamHandle, const RuntimeMethod* method) 
{
	typedef void (*AnimatorJobExtensions_InternalBindStreamProperty_mE09521CB89443739B6428A0FD6B012D8C0601415_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Type_t*, String_t*, bool, PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*);
	static AnimatorJobExtensions_InternalBindStreamProperty_mE09521CB89443739B6428A0FD6B012D8C0601415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindStreamProperty_mE09521CB89443739B6428A0FD6B012D8C0601415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertyStreamHandle&)");
	_il2cpp_icall_func(___0_animator, ___1_transform, ___2_type, ___3_property, ___4_isObjectReference, ___5_propertyStreamHandle);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindCustomStreamProperty_mFD263ACFEF7E93728830EFD5133399F922EF6504 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, String_t* ___1_property, int32_t ___2_propertyType, PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___3_propertyStreamHandle, const RuntimeMethod* method) 
{
	typedef void (*AnimatorJobExtensions_InternalBindCustomStreamProperty_mFD263ACFEF7E93728830EFD5133399F922EF6504_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*, int32_t, PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*);
	static AnimatorJobExtensions_InternalBindCustomStreamProperty_mFD263ACFEF7E93728830EFD5133399F922EF6504_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindCustomStreamProperty_mFD263ACFEF7E93728830EFD5133399F922EF6504_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType,UnityEngine.Animations.PropertyStreamHandle&)");
	_il2cpp_icall_func(___0_animator, ___1_property, ___2_propertyType, ___3_propertyStreamHandle);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformSceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneTransform_m5C33CC9DC1C95933DA91E42411080A4DA49216C6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___2_transformSceneHandle, const RuntimeMethod* method) 
{
	typedef void (*AnimatorJobExtensions_InternalBindSceneTransform_m5C33CC9DC1C95933DA91E42411080A4DA49216C6_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*);
	static AnimatorJobExtensions_InternalBindSceneTransform_m5C33CC9DC1C95933DA91E42411080A4DA49216C6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindSceneTransform_m5C33CC9DC1C95933DA91E42411080A4DA49216C6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformSceneHandle&)");
	_il2cpp_icall_func(___0_animator, ___1_transform, ___2_transformSceneHandle);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertySceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneProperty_m7C4D6BE064BBE342314E1BCD6101F451794E0A11 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1* ___5_propertySceneHandle, const RuntimeMethod* method) 
{
	typedef void (*AnimatorJobExtensions_InternalBindSceneProperty_m7C4D6BE064BBE342314E1BCD6101F451794E0A11_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Type_t*, String_t*, bool, PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1*);
	static AnimatorJobExtensions_InternalBindSceneProperty_m7C4D6BE064BBE342314E1BCD6101F451794E0A11_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindSceneProperty_m7C4D6BE064BBE342314E1BCD6101F451794E0A11_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertySceneHandle&)");
	_il2cpp_icall_func(___0_animator, ___1_transform, ___2_type, ___3_property, ___4_isObjectReference, ___5_propertySceneHandle);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_inline (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
