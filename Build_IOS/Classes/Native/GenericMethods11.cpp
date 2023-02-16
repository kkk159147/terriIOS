#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UniRx.Unit>
struct Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UniRx.ICancelable
struct ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// UniRx.Scheduler/EndOfFrameMainThreadScheduler
struct EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663;
// UniRx.Scheduler/FixedUpdateMainThreadScheduler
struct FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3;
// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler
struct IgnoreTimeScaleMainThreadScheduler_t15A43252BE809D3C28FB0C3D1BE5A3D8B4E9614F;
// UniRx.Scheduler/MainThreadScheduler
struct MainThreadScheduler_t79381B64713DB60DDBD10B86155CEBD9AFF8C586;
// UniRx.Scheduler/ThreadPoolScheduler
struct ThreadPoolScheduler_tD70CA88940F9339327969057F716FA31BE56F840;

IL2CPP_EXTERN_C RuntimeClass* ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1<System.Object>
struct U3CU3Ec__DisplayClass7_0_1_t278307FF040551BA151B7E74692991D34921AA60  : public RuntimeObject
{
	// UniRx.ICancelable UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1::cancel
	RuntimeObject* ___cancel_0;
	// System.Action`1<T> UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1::action
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action_1;
};

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>
struct U3CImmediateActionU3Ed__1_1_tFF93CB0C459F032A5684C57C2EE8C0CB0C863DE1  : public RuntimeObject
{
	// System.Int32 UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UniRx.ICancelable UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_2;
	// System.Action`1<T> UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action_3;
	// T UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::state
	RuntimeObject* ___state_4;
};

// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>
struct U3CImmediateActionU3Ed__1_1_t34E37F43941C42289DB79C3661100E07BECD9168  : public RuntimeObject
{
	// System.Int32 UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UniRx.ICancelable UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_2;
	// System.Action`1<T> UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action_3;
	// T UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::state
	RuntimeObject* ___state_4;
};

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<System.Object>
struct QueuedAction_1_t6C75CFFA426C16AC7A45FE40ED2DD9ABC0A8A790  : public RuntimeObject
{
};

// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<System.Object>
struct QueuedAction_1_t6A5CAEEB4E725A313A2340A9260501A1FBA36B19  : public RuntimeObject
{
};

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<UniRx.Unit>
struct QueuedAction_1_t07F49A76F2AFCA834825566E329075B151B16630  : public RuntimeObject
{
};

// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<UniRx.Unit>
struct QueuedAction_1_tF4DAACFE6CE13BB80D7DF87A5B9C4485D491C289  : public RuntimeObject
{
};

// System.Tuple`3<UniRx.ICancelable,System.Object,System.Action`1<System.Object>>
struct Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43  : public RuntimeObject
{
	// T1 System.Tuple`3::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	RuntimeObject* ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_Item3_2;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// UniRx.Scheduler/EndOfFrameMainThreadScheduler
struct EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663  : public RuntimeObject
{
};

// UniRx.Scheduler/FixedUpdateMainThreadScheduler
struct FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3  : public RuntimeObject
{
};

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler
struct IgnoreTimeScaleMainThreadScheduler_t15A43252BE809D3C28FB0C3D1BE5A3D8B4E9614F  : public RuntimeObject
{
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::scheduleAction
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___scheduleAction_0;
};

// UniRx.Scheduler/MainThreadScheduler
struct MainThreadScheduler_t79381B64713DB60DDBD10B86155CEBD9AFF8C586  : public RuntimeObject
{
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler::scheduleAction
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___scheduleAction_0;
};

// UniRx.Scheduler/ThreadPoolScheduler
struct ThreadPoolScheduler_tD70CA88940F9339327969057F716FA31BE56F840  : public RuntimeObject
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// UniRx.Unit
struct Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 
{
	union
	{
		struct
		{
		};
		uint8_t Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662__padding[1];
	};
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

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>
struct U3CImmediateActionU3Ed__1_1_t43A5F4D318EFF1FC95B25C97F1FA5805B1F41342  : public RuntimeObject
{
	// System.Int32 UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UniRx.ICancelable UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_2;
	// System.Action`1<T> UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___action_3;
	// T UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::state
	Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___state_4;
};

// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>
struct U3CImmediateActionU3Ed__1_1_t8487A9985C20BA03526EA40D18F122714F0C3D8D  : public RuntimeObject
{
	// System.Int32 UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UniRx.ICancelable UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_2;
	// System.Action`1<T> UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___action_3;
	// T UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::state
	Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___state_4;
};

// System.Tuple`3<UniRx.ICancelable,UniRx.Unit,System.Action`1<UniRx.Unit>>
struct Tuple_3_tA9647D22FE7E2E8FBD298636E7A5EC84C9E158A0  : public RuntimeObject
{
	// T1 System.Tuple`3::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___m_Item3_2;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<UniRx.Unit>
struct Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A  : public MulticastDelegate_t
{
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1<System.Object>

// UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1<System.Object>

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>

// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>

// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<System.Object>
struct QueuedAction_1_t6C75CFFA426C16AC7A45FE40ED2DD9ABC0A8A790_StaticFields
{
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1::Instance
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Instance_0;
};

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<System.Object>

// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<System.Object>
struct QueuedAction_1_t6A5CAEEB4E725A313A2340A9260501A1FBA36B19_StaticFields
{
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler/QueuedAction`1::Instance
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Instance_0;
};

// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<System.Object>

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<UniRx.Unit>
struct QueuedAction_1_t07F49A76F2AFCA834825566E329075B151B16630_StaticFields
{
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1::Instance
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Instance_0;
};

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<UniRx.Unit>

// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<UniRx.Unit>
struct QueuedAction_1_tF4DAACFE6CE13BB80D7DF87A5B9C4485D491C289_StaticFields
{
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler/QueuedAction`1::Instance
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Instance_0;
};

// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<UniRx.Unit>

// System.Tuple`3<UniRx.ICancelable,System.Object,System.Action`1<System.Object>>

// System.Tuple`3<UniRx.ICancelable,System.Object,System.Action`1<System.Object>>

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.ValueType

// System.ValueType

// UnityEngine._AndroidJNIHelper

// UnityEngine._AndroidJNIHelper

// UniRx.Scheduler/EndOfFrameMainThreadScheduler

// UniRx.Scheduler/EndOfFrameMainThreadScheduler

// UniRx.Scheduler/FixedUpdateMainThreadScheduler

// UniRx.Scheduler/FixedUpdateMainThreadScheduler

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler

// UniRx.Scheduler/MainThreadScheduler

// UniRx.Scheduler/MainThreadScheduler

// UniRx.Scheduler/ThreadPoolScheduler

// UniRx.Scheduler/ThreadPoolScheduler

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UniRx.Unit
struct Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_StaticFields
{
	// UniRx.Unit UniRx.Unit::default
	Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___default_0;
};

// UniRx.Unit

// System.Void

// System.Void

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>

// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>

// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>

// System.Tuple`3<UniRx.ICancelable,UniRx.Unit,System.Action`1<UniRx.Unit>>

// System.Tuple`3<UniRx.ICancelable,UniRx.Unit,System.Action`1<UniRx.Unit>>

// System.Delegate

// System.Delegate

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.MulticastDelegate

// System.MulticastDelegate

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

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<UniRx.Unit>

// System.Action`1<UniRx.Unit>

// System.Threading.WaitCallback

// System.Threading.WaitCallback
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01 (intptr_t ___0_javaClass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UniRx.MainThreadDispatcher::StartEndOfFrameMicroCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_StartEndOfFrameMicroCoroutine_mF882DADDE3048CBA9A2B2CFB706C7DA7732B4880 (RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void UniRx.MainThreadDispatcher::StartFixedUpdateMicroCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_StartFixedUpdateMicroCoroutine_m7B5A7DD59FB62E461CDDEFFE178DBDE0A6570DF9 (RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void UniRx.MainThreadDispatcher::Post(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Post_m34EA78B903F2F3282D9B5080E7C7FDEBB36EB25F (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_action, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_mE534D14C47699D1D37288AE0710B19FC7EC02BAB (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___0_callBack, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Int32>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___2_isStatic;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Object>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___2_isStatic;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Boolean>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Char>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Double>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int16>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int32>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int64>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.SByte>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Single>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/EndOfFrameMainThreadScheduler::ImmediateAction<System.Object>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndOfFrameMainThreadScheduler_ImmediateAction_TisRuntimeObject_m6AD60B2643B378CA2AFDB97302CA9B95207B6780_gshared (EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663* __this, RuntimeObject* ___0_state, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_action, RuntimeObject* ___2_cancellation, const RuntimeMethod* method) 
{
	{
		U3CImmediateActionU3Ed__1_1_tFF93CB0C459F032A5684C57C2EE8C0CB0C863DE1* L_0 = (U3CImmediateActionU3Ed__1_1_tFF93CB0C459F032A5684C57C2EE8C0CB0C863DE1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CImmediateActionU3Ed__1_1_tFF93CB0C459F032A5684C57C2EE8C0CB0C863DE1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_tFF93CB0C459F032A5684C57C2EE8C0CB0C863DE1* L_1 = L_0;
		RuntimeObject* L_2 = ___0_state;
		NullCheck(L_1);
		L_1->___state_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___state_4), (void*)L_2);
		U3CImmediateActionU3Ed__1_1_tFF93CB0C459F032A5684C57C2EE8C0CB0C863DE1* L_3 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ___1_action;
		NullCheck(L_3);
		L_3->___action_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_3), (void*)L_4);
		U3CImmediateActionU3Ed__1_1_tFF93CB0C459F032A5684C57C2EE8C0CB0C863DE1* L_5 = L_3;
		RuntimeObject* L_6 = ___2_cancellation;
		NullCheck(L_5);
		L_5->___cancellation_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___cancellation_2), (void*)L_6);
		return (RuntimeObject*)L_5;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/EndOfFrameMainThreadScheduler::ImmediateAction<UniRx.Unit>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndOfFrameMainThreadScheduler_ImmediateAction_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m0B380FABB88EF2EF64AD33A51527D5743334FCE0_gshared (EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663* __this, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___0_state, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___1_action, RuntimeObject* ___2_cancellation, const RuntimeMethod* method) 
{
	{
		U3CImmediateActionU3Ed__1_1_t43A5F4D318EFF1FC95B25C97F1FA5805B1F41342* L_0 = (U3CImmediateActionU3Ed__1_1_t43A5F4D318EFF1FC95B25C97F1FA5805B1F41342*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CImmediateActionU3Ed__1_1_t43A5F4D318EFF1FC95B25C97F1FA5805B1F41342*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_t43A5F4D318EFF1FC95B25C97F1FA5805B1F41342* L_1 = L_0;
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_2 = ___0_state;
		NullCheck(L_1);
		L_1->___state_4 = L_2;
		U3CImmediateActionU3Ed__1_1_t43A5F4D318EFF1FC95B25C97F1FA5805B1F41342* L_3 = L_1;
		Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* L_4 = ___1_action;
		NullCheck(L_3);
		L_3->___action_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_3), (void*)L_4);
		U3CImmediateActionU3Ed__1_1_t43A5F4D318EFF1FC95B25C97F1FA5805B1F41342* L_5 = L_3;
		RuntimeObject* L_6 = ___2_cancellation;
		NullCheck(L_5);
		L_5->___cancellation_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___cancellation_2), (void*)L_6);
		return (RuntimeObject*)L_5;
	}
}
// System.Void UniRx.Scheduler/EndOfFrameMainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfFrameMainThreadScheduler_ScheduleQueueing_TisRuntimeObject_mABE86F6F1E2451171952278B9558F890176A6F19_gshared (EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663* __this, RuntimeObject* ___0_cancel, RuntimeObject* ___1_state, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartEndOfFrameMicroCoroutine(ImmediateAction(state, action, cancel));
		RuntimeObject* L_0 = ___1_state;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ___2_action;
		RuntimeObject* L_2 = ___0_cancel;
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663*, RuntimeObject*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartEndOfFrameMicroCoroutine_mF882DADDE3048CBA9A2B2CFB706C7DA7732B4880(L_3, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/EndOfFrameMainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfFrameMainThreadScheduler_ScheduleQueueing_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m03D32E350491CA1BFE30B81B1CEE468E2C132CBC_gshared (EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663* __this, RuntimeObject* ___0_cancel, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___1_state, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartEndOfFrameMicroCoroutine(ImmediateAction(state, action, cancel));
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_0 = ___1_state;
		Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* L_1 = ___2_action;
		RuntimeObject* L_2 = ___0_cancel;
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663*, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartEndOfFrameMicroCoroutine_mF882DADDE3048CBA9A2B2CFB706C7DA7732B4880(L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/FixedUpdateMainThreadScheduler::ImmediateAction<System.Object>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedUpdateMainThreadScheduler_ImmediateAction_TisRuntimeObject_mFC2F93923867F348B79BDA2F23316C114373C07A_gshared (FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3* __this, RuntimeObject* ___0_state, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_action, RuntimeObject* ___2_cancellation, const RuntimeMethod* method) 
{
	{
		U3CImmediateActionU3Ed__1_1_t34E37F43941C42289DB79C3661100E07BECD9168* L_0 = (U3CImmediateActionU3Ed__1_1_t34E37F43941C42289DB79C3661100E07BECD9168*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CImmediateActionU3Ed__1_1_t34E37F43941C42289DB79C3661100E07BECD9168*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_t34E37F43941C42289DB79C3661100E07BECD9168* L_1 = L_0;
		RuntimeObject* L_2 = ___0_state;
		NullCheck(L_1);
		L_1->___state_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___state_4), (void*)L_2);
		U3CImmediateActionU3Ed__1_1_t34E37F43941C42289DB79C3661100E07BECD9168* L_3 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ___1_action;
		NullCheck(L_3);
		L_3->___action_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_3), (void*)L_4);
		U3CImmediateActionU3Ed__1_1_t34E37F43941C42289DB79C3661100E07BECD9168* L_5 = L_3;
		RuntimeObject* L_6 = ___2_cancellation;
		NullCheck(L_5);
		L_5->___cancellation_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___cancellation_2), (void*)L_6);
		return (RuntimeObject*)L_5;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/FixedUpdateMainThreadScheduler::ImmediateAction<UniRx.Unit>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedUpdateMainThreadScheduler_ImmediateAction_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m5CC7C3733BB2859DB13579C9F42974F78F501CA5_gshared (FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3* __this, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___0_state, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___1_action, RuntimeObject* ___2_cancellation, const RuntimeMethod* method) 
{
	{
		U3CImmediateActionU3Ed__1_1_t8487A9985C20BA03526EA40D18F122714F0C3D8D* L_0 = (U3CImmediateActionU3Ed__1_1_t8487A9985C20BA03526EA40D18F122714F0C3D8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CImmediateActionU3Ed__1_1_t8487A9985C20BA03526EA40D18F122714F0C3D8D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_t8487A9985C20BA03526EA40D18F122714F0C3D8D* L_1 = L_0;
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_2 = ___0_state;
		NullCheck(L_1);
		L_1->___state_4 = L_2;
		U3CImmediateActionU3Ed__1_1_t8487A9985C20BA03526EA40D18F122714F0C3D8D* L_3 = L_1;
		Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* L_4 = ___1_action;
		NullCheck(L_3);
		L_3->___action_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_3), (void*)L_4);
		U3CImmediateActionU3Ed__1_1_t8487A9985C20BA03526EA40D18F122714F0C3D8D* L_5 = L_3;
		RuntimeObject* L_6 = ___2_cancellation;
		NullCheck(L_5);
		L_5->___cancellation_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___cancellation_2), (void*)L_6);
		return (RuntimeObject*)L_5;
	}
}
// System.Void UniRx.Scheduler/FixedUpdateMainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedUpdateMainThreadScheduler_ScheduleQueueing_TisRuntimeObject_m06A0148A7301F3A4145707F7D1F03BBE423467AF_gshared (FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3* __this, RuntimeObject* ___0_cancel, RuntimeObject* ___1_state, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartFixedUpdateMicroCoroutine(ImmediateAction(state, action, cancel));
		RuntimeObject* L_0 = ___1_state;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ___2_action;
		RuntimeObject* L_2 = ___0_cancel;
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3*, RuntimeObject*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartFixedUpdateMicroCoroutine_m7B5A7DD59FB62E461CDDEFFE178DBDE0A6570DF9(L_3, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/FixedUpdateMainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedUpdateMainThreadScheduler_ScheduleQueueing_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m24895A01DAC21467BACDE786BD8A19AB024F8E2B_gshared (FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3* __this, RuntimeObject* ___0_cancel, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___1_state, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartFixedUpdateMicroCoroutine(ImmediateAction(state, action, cancel));
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_0 = ___1_state;
		Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* L_1 = ___2_action;
		RuntimeObject* L_2 = ___0_cancel;
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3*, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartFixedUpdateMicroCoroutine_m7B5A7DD59FB62E461CDDEFFE178DBDE0A6570DF9(L_3, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreTimeScaleMainThreadScheduler_ScheduleQueueing_TisRuntimeObject_m6EB3BE16A4553640D35EC641B2E9D1CD9440D364_gshared (IgnoreTimeScaleMainThreadScheduler_t15A43252BE809D3C28FB0C3D1BE5A3D8B4E9614F* __this, RuntimeObject* ___0_cancel, RuntimeObject* ___1_state, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((QueuedAction_1_t6C75CFFA426C16AC7A45FE40ED2DD9ABC0A8A790_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Instance_0;
		RuntimeObject* L_1 = ___0_cancel;
		RuntimeObject* L_2 = ___1_state;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___2_action;
		Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* L_4;
		L_4 = ((  Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* (*) (RuntimeObject*, RuntimeObject*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_m34EA78B903F2F3282D9B5080E7C7FDEBB36EB25F(L_0, (RuntimeObject*)L_4, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreTimeScaleMainThreadScheduler_ScheduleQueueing_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m69D466740B2014227A8F077F90F60A2B3F98D247_gshared (IgnoreTimeScaleMainThreadScheduler_t15A43252BE809D3C28FB0C3D1BE5A3D8B4E9614F* __this, RuntimeObject* ___0_cancel, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___1_state, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((QueuedAction_1_t07F49A76F2AFCA834825566E329075B151B16630_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Instance_0;
		RuntimeObject* L_1 = ___0_cancel;
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_2 = ___1_state;
		Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* L_3 = ___2_action;
		Tuple_3_tA9647D22FE7E2E8FBD298636E7A5EC84C9E158A0* L_4;
		L_4 = ((  Tuple_3_tA9647D22FE7E2E8FBD298636E7A5EC84C9E158A0* (*) (RuntimeObject*, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_m34EA78B903F2F3282D9B5080E7C7FDEBB36EB25F(L_0, (RuntimeObject*)L_4, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler::ScheduleQueueing<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadScheduler_ScheduleQueueing_TisRuntimeObject_mAB2D2521130A66655FE35B511B8611AC5FFA9DDF_gshared (MainThreadScheduler_t79381B64713DB60DDBD10B86155CEBD9AFF8C586* __this, RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* V_0 = NULL;
	{
		// var t = (Tuple<ICancelable, T, Action<T>>)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0)));
		// if (!t.Item1.IsDisposed)
		Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* L_1 = V_0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4_il2cpp_TypeInfo_var, L_2);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// t.Item3(t.Item2);
		Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* L_4 = V_0;
		NullCheck(L_4);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5;
		L_5 = ((  Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* (*) (Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_5);
		((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_5, L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadScheduler_ScheduleQueueing_TisRuntimeObject_mDADABD1E56A9A8F5ECAC4E71A3FD28F17EBC221B_gshared (MainThreadScheduler_t79381B64713DB60DDBD10B86155CEBD9AFF8C586* __this, RuntimeObject* ___0_cancel, RuntimeObject* ___1_state, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((QueuedAction_1_t6A5CAEEB4E725A313A2340A9260501A1FBA36B19_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Instance_0;
		RuntimeObject* L_1 = ___0_cancel;
		RuntimeObject* L_2 = ___1_state;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___2_action;
		Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* L_4;
		L_4 = ((  Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* (*) (RuntimeObject*, RuntimeObject*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_m34EA78B903F2F3282D9B5080E7C7FDEBB36EB25F(L_0, (RuntimeObject*)L_4, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadScheduler_ScheduleQueueing_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m3418EE79070399475C6E3AD2B8EF354541993F8B_gshared (MainThreadScheduler_t79381B64713DB60DDBD10B86155CEBD9AFF8C586* __this, RuntimeObject* ___0_cancel, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___1_state, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((QueuedAction_1_tF4DAACFE6CE13BB80D7DF87A5B9C4485D491C289_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Instance_0;
		RuntimeObject* L_1 = ___0_cancel;
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_2 = ___1_state;
		Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* L_3 = ___2_action;
		Tuple_3_tA9647D22FE7E2E8FBD298636E7A5EC84C9E158A0* L_4;
		L_4 = ((  Tuple_3_tA9647D22FE7E2E8FBD298636E7A5EC84C9E158A0* (*) (RuntimeObject*, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_m34EA78B903F2F3282D9B5080E7C7FDEBB36EB25F(L_0, (RuntimeObject*)L_4, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/ThreadPoolScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadPoolScheduler_ScheduleQueueing_TisRuntimeObject_m572942CEF9BD26A0B3510AA7903134E9DE89ACFD_gshared (ThreadPoolScheduler_tD70CA88940F9339327969057F716FA31BE56F840* __this, RuntimeObject* ___0_cancel, RuntimeObject* ___1_state, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass7_0_1_t278307FF040551BA151B7E74692991D34921AA60* L_0 = (U3CU3Ec__DisplayClass7_0_1_t278307FF040551BA151B7E74692991D34921AA60*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass7_0_1_t278307FF040551BA151B7E74692991D34921AA60*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CU3Ec__DisplayClass7_0_1_t278307FF040551BA151B7E74692991D34921AA60* L_1 = L_0;
		RuntimeObject* L_2 = ___0_cancel;
		NullCheck(L_1);
		L_1->___cancel_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___cancel_0), (void*)L_2);
		U3CU3Ec__DisplayClass7_0_1_t278307FF040551BA151B7E74692991D34921AA60* L_3 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ___2_action;
		NullCheck(L_3);
		L_3->___action_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_1), (void*)L_4);
		// System.Threading.ThreadPool.QueueUserWorkItem(callBackState =>
		// {
		//     if (!cancel.IsDisposed)
		//     {
		//         action((T)callBackState);
		//     }
		// }, state);
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_5 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_5, (RuntimeObject*)L_3, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		RuntimeObject* L_6 = ___1_state;
		bool L_7;
		L_7 = ThreadPool_QueueUserWorkItem_mE534D14C47699D1D37288AE0710B19FC7EC02BAB(L_5, L_6, NULL);
		// }
		return;
	}
}
