﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		R ret;
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8)
	{
		R ret;
		void* params[8] = { p1, p2, p3, p4, p5, p6, p7, p8 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.IObservable`1<System.Object>
struct IObservable_1_t3B5CA6CF57A9734CD1D166FB2074FE7FB725EDDC;
// System.IObserver`1<System.Collections.Generic.IList`1<System.Object>>
struct IObserver_1_t766C5BB3954487A4943C5AC8CAC6FE4AB6423E03;
// System.IObserver`1<System.Object>
struct IObserver_1_t86359CF84DEFEE15EB1DB5AFA5F2E8A27FF22D3B;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// UniRx.Operators.ZipObservable`1/Zip<System.Object>
struct Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730;
// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17;
// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D;
// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B;
// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30;
// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D;
// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>
struct ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5;
// UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C;
// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF;
// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t75753AB37E06FE536221761213746766398F841E;
// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5;
// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E;
// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F;
// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19;
// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D;
// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730;
// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17;
// UniRx.Operators.ZipLatestObservable`1<System.Object>
struct ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1;
// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>
struct ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA;
// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436;
// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200;
// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE;
// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE;
// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE;
// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>
struct ZipLatestObserver_t139F226197E3E8ED5756433C1552FA4767EC7532;
// UniRx.Operators.ZipLatestObserver`1<System.Object>
struct ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4;
// UniRx.Operators.ZipObservable`1<System.Object>
struct ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2;
// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>
struct ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2;
// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8;
// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141;
// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C;
// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25;
// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B;
// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>
struct ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A;
// UniRx.Operators.ZipObserver`1<System.Object>
struct ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B;
// System.IObservable`1<System.Object>[]
struct IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF;
// System.Collections.Generic.Queue`1<System.Object>[]
struct Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Collections.ICollection[]
struct ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273;
// System.IDisposable[]
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UniRx.ICancelable
struct ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// UniRx.Operators.IZipLatestObservable
struct IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7;
// UniRx.Operators.IZipObservable
struct IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF;
struct Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.OperatorObservableBase`1<System.Collections.Generic.IList`1<System.Object>>
struct OperatorObservableBase_1_tA0344887F127C0AF02971FF71FFDF8B627F13EEB  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObservableBase`1<System.Object>
struct OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>
struct OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>
struct OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>
struct ZipLatestObserver_t139F226197E3E8ED5756433C1552FA4767EC7532  : public RuntimeObject
{
	// UniRx.Operators.ZipLatestObservable`1/ZipLatest<T> UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver::parent
	ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* ___parent_0;
	// System.Int32 UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver::index
	int32_t ___index_1;
};

// UniRx.Operators.ZipLatestObserver`1<System.Object>
struct ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4  : public RuntimeObject
{
	// System.Object UniRx.Operators.ZipLatestObserver`1::gate
	RuntimeObject* ___gate_0;
	// UniRx.Operators.IZipLatestObservable UniRx.Operators.ZipLatestObserver`1::parent
	RuntimeObject* ___parent_1;
	// System.Int32 UniRx.Operators.ZipLatestObserver`1::index
	int32_t ___index_2;
	// T UniRx.Operators.ZipLatestObserver`1::value
	RuntimeObject* ___value_3;
};

// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>
struct ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A  : public RuntimeObject
{
	// UniRx.Operators.ZipObservable`1/Zip<T> UniRx.Operators.ZipObservable`1/Zip/ZipObserver::parent
	Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* ___parent_0;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip/ZipObserver::index
	int32_t ___index_1;
};

// UniRx.Operators.ZipObserver`1<System.Object>
struct ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B  : public RuntimeObject
{
	// System.Object UniRx.Operators.ZipObserver`1::gate
	RuntimeObject* ___gate_0;
	// UniRx.Operators.IZipObservable UniRx.Operators.ZipObserver`1::parent
	RuntimeObject* ___parent_1;
	// System.Int32 UniRx.Operators.ZipObserver`1::index
	int32_t ___index_2;
	// System.Collections.Generic.Queue`1<T> UniRx.Operators.ZipObserver`1::queue
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___queue_3;
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

// UniRx.Operators.NthZipLatestObserverBase`1<System.Object>
struct NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E  : public OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627
{
	// System.Int32 UniRx.Operators.NthZipLatestObserverBase`1::length
	int32_t ___length_2;
	// System.Boolean[] UniRx.Operators.NthZipLatestObserverBase`1::isStarted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isStarted_3;
	// System.Boolean[] UniRx.Operators.NthZipLatestObserverBase`1::isCompleted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isCompleted_4;
};

// UniRx.Operators.NthZipObserverBase`1<System.Object>
struct NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24  : public OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627
{
	// System.Collections.ICollection[] UniRx.Operators.NthZipObserverBase`1::queues
	ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* ___queues_2;
	// System.Boolean[] UniRx.Operators.NthZipObserverBase`1::isDone
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isDone_3;
	// System.Int32 UniRx.Operators.NthZipObserverBase`1::length
	int32_t ___length_4;
};

// UniRx.Operators.ZipObservable`1/Zip<System.Object>
struct Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730  : public OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272
{
	// UniRx.Operators.ZipObservable`1<T> UniRx.Operators.ZipObservable`1/Zip::parent
	ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2* ___parent_2;
	// System.Object UniRx.Operators.ZipObservable`1/Zip::gate
	RuntimeObject* ___gate_3;
	// System.Collections.Generic.Queue`1<T>[] UniRx.Operators.ZipObservable`1/Zip::queues
	Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* ___queues_4;
	// System.Boolean[] UniRx.Operators.ZipObservable`1/Zip::isDone
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isDone_5;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip::length
	int32_t ___length_6;
};

// UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>
struct Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665  : public OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627
{
	// UniRx.Operators.ZipObservable`3<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3/Zip::parent
	ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* ___parent_2;
	// System.Object UniRx.Operators.ZipObservable`3/Zip::gate
	RuntimeObject* ___gate_3;
	// System.Collections.Generic.Queue`1<TLeft> UniRx.Operators.ZipObservable`3/Zip::leftQ
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___leftQ_4;
	// System.Boolean UniRx.Operators.ZipObservable`3/Zip::leftCompleted
	bool ___leftCompleted_5;
	// System.Collections.Generic.Queue`1<TRight> UniRx.Operators.ZipObservable`3/Zip::rightQ
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___rightQ_6;
	// System.Boolean UniRx.Operators.ZipObservable`3/Zip::rightCompleted
	bool ___rightCompleted_7;
};

// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>
struct ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5  : public OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272
{
	// UniRx.Operators.ZipLatestObservable`1<T> UniRx.Operators.ZipLatestObservable`1/ZipLatest::parent
	ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1* ___parent_2;
	// System.Object UniRx.Operators.ZipLatestObservable`1/ZipLatest::gate
	RuntimeObject* ___gate_3;
	// System.Int32 UniRx.Operators.ZipLatestObservable`1/ZipLatest::length
	int32_t ___length_4;
	// T[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::values
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values_5;
	// System.Boolean[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::isStarted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isStarted_6;
	// System.Boolean[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::isCompleted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isCompleted_7;
};

// UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>
struct ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8  : public OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627
{
	// UniRx.Operators.ZipLatestObservable`3<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3/ZipLatest::parent
	ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* ___parent_2;
	// System.Object UniRx.Operators.ZipLatestObservable`3/ZipLatest::gate
	RuntimeObject* ___gate_3;
	// TLeft UniRx.Operators.ZipLatestObservable`3/ZipLatest::leftValue
	RuntimeObject* ___leftValue_4;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::leftStarted
	bool ___leftStarted_5;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::leftCompleted
	bool ___leftCompleted_6;
	// TRight UniRx.Operators.ZipLatestObservable`3/ZipLatest::rightValue
	RuntimeObject* ___rightValue_7;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::rightStarted
	bool ___rightStarted_8;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::rightCompleted
	bool ___rightCompleted_9;
};

// UniRx.Operators.ZipLatestObservable`1<System.Object>
struct ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1  : public OperatorObservableBase_1_tA0344887F127C0AF02971FF71FFDF8B627F13EEB
{
	// System.IObservable`1<T>[] UniRx.Operators.ZipLatestObservable`1::sources
	IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* ___sources_1;
};

// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>
struct ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<TLeft> UniRx.Operators.ZipLatestObservable`3::left
	RuntimeObject* ___left_1;
	// System.IObservable`1<TRight> UniRx.Operators.ZipLatestObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3::selector
	Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___selector_3;
};

// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`4::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`4::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`4::source3
	RuntimeObject* ___source3_3;
	// UniRx.Operators.ZipLatestFunc`4<T1,T2,T3,TR> UniRx.Operators.ZipLatestObservable`4::resultSelector
	ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* ___resultSelector_4;
};

// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`5::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`5::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`5::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`5::source4
	RuntimeObject* ___source4_4;
	// UniRx.Operators.ZipLatestFunc`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipLatestObservable`5::resultSelector
	ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* ___resultSelector_5;
};

// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`6::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`6::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`6::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`6::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`6::source5
	RuntimeObject* ___source5_5;
	// UniRx.Operators.ZipLatestFunc`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipLatestObservable`6::resultSelector
	ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* ___resultSelector_6;
};

// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`7::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`7::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`7::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`7::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`7::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipLatestObservable`7::source6
	RuntimeObject* ___source6_6;
	// UniRx.Operators.ZipLatestFunc`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipLatestObservable`7::resultSelector
	ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* ___resultSelector_7;
};

// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`8::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`8::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`8::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`8::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`8::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipLatestObservable`8::source6
	RuntimeObject* ___source6_6;
	// System.IObservable`1<T7> UniRx.Operators.ZipLatestObservable`8::source7
	RuntimeObject* ___source7_7;
	// UniRx.Operators.ZipLatestFunc`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipLatestObservable`8::resultSelector
	ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* ___resultSelector_8;
};

// UniRx.Operators.ZipObservable`1<System.Object>
struct ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2  : public OperatorObservableBase_1_tA0344887F127C0AF02971FF71FFDF8B627F13EEB
{
	// System.IObservable`1<T>[] UniRx.Operators.ZipObservable`1::sources
	IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* ___sources_1;
};

// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>
struct ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<TLeft> UniRx.Operators.ZipObservable`3::left
	RuntimeObject* ___left_1;
	// System.IObservable`1<TRight> UniRx.Operators.ZipObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3::selector
	Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___selector_3;
};

// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`4::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`4::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`4::source3
	RuntimeObject* ___source3_3;
	// UniRx.Operators.ZipFunc`4<T1,T2,T3,TR> UniRx.Operators.ZipObservable`4::resultSelector
	ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* ___resultSelector_4;
};

// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`5::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`5::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`5::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`5::source4
	RuntimeObject* ___source4_4;
	// UniRx.Operators.ZipFunc`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipObservable`5::resultSelector
	ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* ___resultSelector_5;
};

// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`6::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`6::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`6::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`6::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipObservable`6::source5
	RuntimeObject* ___source5_5;
	// UniRx.Operators.ZipFunc`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipObservable`6::resultSelector
	ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* ___resultSelector_6;
};

// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`7::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`7::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`7::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`7::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipObservable`7::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipObservable`7::source6
	RuntimeObject* ___source6_6;
	// UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7::resultSelector
	ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* ___resultSelector_7;
};

// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`8::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`8::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`8::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`8::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipObservable`8::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipObservable`8::source6
	RuntimeObject* ___source6_6;
	// System.IObservable`1<T7> UniRx.Operators.ZipObservable`8::source7
	RuntimeObject* ___source7_7;
	// UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8::resultSelector
	ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* ___resultSelector_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>
struct Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB  : public NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24
{
	// UniRx.Operators.ZipObservable`4<T1,T2,T3,TR> UniRx.Operators.ZipObservable`4/Zip::parent
	ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`4/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`4/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`4/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`4/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
};

// UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53  : public NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24
{
	// UniRx.Operators.ZipObservable`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipObservable`5/Zip::parent
	ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`5/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`5/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`5/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`5/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`5/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
};

// UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA  : public NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24
{
	// UniRx.Operators.ZipObservable`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipObservable`6/Zip::parent
	ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`6/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`6/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`6/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`6/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`6/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`6/Zip::q5
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q5_11;
};

// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1  : public NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24
{
	// UniRx.Operators.ZipObservable`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7/Zip::parent
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`7/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`7/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`7/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`7/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`7/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`7/Zip::q5
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`7/Zip::q6
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q6_12;
};

// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t18CEBD71A9520CC4E97175478D72666FE988B182  : public NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24
{
	// UniRx.Operators.ZipObservable`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8/Zip::parent
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`8/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`8/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`8/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`8/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`8/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`8/Zip::q5
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`8/Zip::q6
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q6_12;
	// System.Collections.Generic.Queue`1<T7> UniRx.Operators.ZipObservable`8/Zip::q7
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q7_13;
};

// UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C  : public NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E
{
	// UniRx.Operators.ZipLatestObservable`4<T1,T2,T3,TR> UniRx.Operators.ZipLatestObservable`4/ZipLatest::parent
	ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`4/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c1
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c2
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c3
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c3_9;
};

// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF  : public NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E
{
	// UniRx.Operators.ZipLatestObservable`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipLatestObservable`5/ZipLatest::parent
	ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`5/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c1
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c2
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c3
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c4
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c4_10;
};

// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t75753AB37E06FE536221761213746766398F841E  : public NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E
{
	// UniRx.Operators.ZipLatestObservable`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipLatestObservable`6/ZipLatest::parent
	ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`6/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c1
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c2
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c3
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c4
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c5
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c5_11;
};

// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5  : public NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E
{
	// UniRx.Operators.ZipLatestObservable`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipLatestObservable`7/ZipLatest::parent
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`7/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c1
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c2
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c3
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c4
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c5
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c5_11;
	// UniRx.Operators.ZipLatestObserver`1<T6> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c6
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c6_12;
};

// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E  : public NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E
{
	// UniRx.Operators.ZipLatestObservable`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipLatestObservable`8/ZipLatest::parent
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`8/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c1
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c2
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c3
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c4
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c5
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c5_11;
	// UniRx.Operators.ZipLatestObserver`1<T6> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c6
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c6_12;
	// UniRx.Operators.ZipLatestObserver`1<T7> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c7
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c7_13;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
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

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UniRx.Operators.OperatorObservableBase`1<System.Collections.Generic.IList`1<System.Object>>

// UniRx.Operators.OperatorObservableBase`1<System.Collections.Generic.IList`1<System.Object>>

// UniRx.Operators.OperatorObservableBase`1<System.Object>

// UniRx.Operators.OperatorObservableBase`1<System.Object>

// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>

// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>

// UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>

// UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>

// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>

// UniRx.Operators.ZipLatestObserver`1<System.Object>

// UniRx.Operators.ZipLatestObserver`1<System.Object>

// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>

// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>

// UniRx.Operators.ZipObserver`1<System.Object>

// UniRx.Operators.ZipObserver`1<System.Object>

// UniRx.Operators.NthZipLatestObserverBase`1<System.Object>

// UniRx.Operators.NthZipLatestObserverBase`1<System.Object>

// UniRx.Operators.ZipObservable`1/Zip<System.Object>

// UniRx.Operators.ZipObservable`1/Zip<System.Object>

// UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>

// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>

// UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`1<System.Object>

// UniRx.Operators.ZipLatestObservable`1<System.Object>

// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`1<System.Object>

// UniRx.Operators.ZipObservable`1<System.Object>

// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Func`3<System.Object,System.Object,System.Object>

// System.Func`3<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// System.AsyncCallback

// System.AsyncCallback
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.IDisposable[]
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE  : public RuntimeArray
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
// System.IObservable`1<System.Object>[]
struct IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF  : public RuntimeArray
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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Queue`1<System.Object>[]
struct Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460  : public RuntimeArray
{
	ALIGN_FIELD (8) Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* m_Items[1];

	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable,System.IDisposable,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_m69159E99C420E2BBE360CC54400E67127D36E724 (RuntimeObject* ___0_disposable1, RuntimeObject* ___1_disposable2, RuntimeObject* ___2_disposable3, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable,System.IDisposable,System.IDisposable,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_mEF2811969D2F81FD06130ED8A4A48D26E42F9B94 (RuntimeObject* ___0_disposable1, RuntimeObject* ___1_disposable2, RuntimeObject* ___2_disposable3, RuntimeObject* ___3_disposable4, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242 (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ___0_disposables, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`4<T1,T2,T3,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mF33B3D7327F6E6F31BC7C46FC0AF701C08959630_gshared (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C* __this, int32_t ___0_length, ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* ___1_parent, RuntimeObject* ___2_observer, RuntimeObject* ___3_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___0_length;
		RuntimeObject* L_2 = ___2_observer;
		RuntimeObject* L_3 = ___3_cancel;
		((  void (*) (NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* L_4 = ___1_parent;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_mBDB4CB9C25847542881250BCB658B36FB40F4A49_gshared (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_1 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_3 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_5 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* L_6 = __this->___parent_5;
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___source1_1;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_8 = __this->___c1_7;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_7, (RuntimeObject*)L_8);
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* L_10 = __this->___parent_5;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___source2_2;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_12 = __this->___c2_8;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_11, (RuntimeObject*)L_12);
		V_0 = L_13;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* L_14 = __this->___parent_5;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___source3_3;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_16 = __this->___c3_9;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_15, (RuntimeObject*)L_16);
		V_1 = L_17;
		// return StableCompositeDisposable.Create(s1, s2, s3);
		RuntimeObject* L_18 = V_0;
		RuntimeObject* L_19 = V_1;
		RuntimeObject* L_20;
		L_20 = StableCompositeDisposable_Create_m69159E99C420E2BBE360CC54400E67127D36E724(L_9, L_18, L_19, NULL);
		return (RuntimeObject*)L_20;
	}
}
// TR UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_GetResult_mFE570EE8AB65822978DF62102F94FA3EEAD1F5B0_gshared (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value);
		ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* L_0 = __this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* L_1 = L_0->___resultSelector_4;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_2 = __this->___c1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_4 = __this->___c2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_6 = __this->___c3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		NullCheck(L_1);
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, L_3, L_5, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_8;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m61AAB00F66F38C5080AA8B32E6077A3E0DD3DC95_gshared (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mE2D4CDD3A0A2D5BCEF02E3B6891C69A213545862_gshared (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m7BDED6A41F994540A7A41BF96D045EF8E4305AC4_gshared (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`5<T1,T2,T3,T4,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mA826238FB387731687743E2ED5F2B1477ED2E46A_gshared (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF* __this, int32_t ___0_length, ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* ___1_parent, RuntimeObject* ___2_observer, RuntimeObject* ___3_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___0_length;
		RuntimeObject* L_2 = ___2_observer;
		RuntimeObject* L_3 = ___3_cancel;
		((  void (*) (NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* L_4 = ___1_parent;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_mFB1BC33E4B893A478ED82966049E9CCAD9CFF1E2_gshared (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_1 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_3 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_5 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_7 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_7);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* L_8 = __this->___parent_5;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___source1_1;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_10 = __this->___c1_7;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_9, (RuntimeObject*)L_10);
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* L_12 = __this->___parent_5;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->___source2_2;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_14 = __this->___c2_8;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_13, (RuntimeObject*)L_14);
		V_0 = L_15;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* L_16 = __this->___parent_5;
		NullCheck(L_16);
		RuntimeObject* L_17 = L_16->___source3_3;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_18 = __this->___c3_9;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_17, (RuntimeObject*)L_18);
		V_1 = L_19;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* L_20 = __this->___parent_5;
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->___source4_4;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_22 = __this->___c4_10;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_21, (RuntimeObject*)L_22);
		V_2 = L_23;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4);
		RuntimeObject* L_24 = V_0;
		RuntimeObject* L_25 = V_1;
		RuntimeObject* L_26 = V_2;
		RuntimeObject* L_27;
		L_27 = StableCompositeDisposable_Create_mEF2811969D2F81FD06130ED8A4A48D26E42F9B94(L_11, L_24, L_25, L_26, NULL);
		return (RuntimeObject*)L_27;
	}
}
// TR UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_GetResult_m595BA9CAFE5CF869FF4994F27E8FCEAAB804F4F7_gshared (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value);
		ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* L_0 = __this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* L_1 = L_0->___resultSelector_5;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_2 = __this->___c1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_4 = __this->___c2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_6 = __this->___c3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_8 = __this->___c4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		NullCheck(L_1);
		RuntimeObject* L_10;
		L_10 = ((  RuntimeObject* (*) (ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_1, L_3, L_5, L_7, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		return L_10;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_mDDCD78BDEAD26226ECF411225A1548FF721518B5_gshared (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mC63871D9E0CD59382E53B81C8D9A7357B4DD5DDB_gshared (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m7311E59D2ECE08F718DE7C174A02E91469D94FC1_gshared (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`6<T1,T2,T3,T4,T5,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m02E115F6F3006F559D0CC6B567E67FB371D9A642_gshared (ZipLatest_t75753AB37E06FE536221761213746766398F841E* __this, int32_t ___0_length, ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* ___1_parent, RuntimeObject* ___2_observer, RuntimeObject* ___3_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___0_length;
		RuntimeObject* L_2 = ___2_observer;
		RuntimeObject* L_3 = ___3_cancel;
		((  void (*) (NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* L_4 = ___1_parent;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_mA14C5536A4F53E9DACC82A9449F243FE4031DD0B_gshared (ZipLatest_t75753AB37E06FE536221761213746766398F841E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_1 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_3 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_5 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_7 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_7);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// c5 = new ZipLatestObserver<T5>(gate, this, 4);
		RuntimeObject* L_8 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_9 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_9);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_9, L_8, (RuntimeObject*)__this, 4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->___c5_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c5_11), (void*)L_9);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* L_10 = __this->___parent_5;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___source1_1;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_12 = __this->___c1_7;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_11, (RuntimeObject*)L_12);
		V_0 = L_13;
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* L_14 = __this->___parent_5;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___source2_2;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_16 = __this->___c2_8;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_15, (RuntimeObject*)L_16);
		V_1 = L_17;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* L_18 = __this->___parent_5;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___source3_3;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_20 = __this->___c3_9;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_19, (RuntimeObject*)L_20);
		V_2 = L_21;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* L_22 = __this->___parent_5;
		NullCheck(L_22);
		RuntimeObject* L_23 = L_22->___source4_4;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_24 = __this->___c4_10;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_23, (RuntimeObject*)L_24);
		V_3 = L_25;
		// var s5 = parent.source5.Subscribe(c5);
		ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* L_26 = __this->___parent_5;
		NullCheck(L_26);
		RuntimeObject* L_27 = L_26->___source5_5;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_28 = __this->___c5_11;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 21), L_27, (RuntimeObject*)L_28);
		V_4 = L_29;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_30 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)5);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_31 = L_30;
		RuntimeObject* L_32 = V_0;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_32);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_33 = L_31;
		RuntimeObject* L_34 = V_1;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_34);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_35 = L_33;
		RuntimeObject* L_36 = V_2;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_36);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_37 = L_35;
		RuntimeObject* L_38 = V_3;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_38);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_39 = L_37;
		RuntimeObject* L_40 = V_4;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_40);
		RuntimeObject* L_41;
		L_41 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_39, NULL);
		return (RuntimeObject*)L_41;
	}
}
// TR UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_GetResult_m50D2AFE5BC2BFD13DA9A3D4535C06FE93C69C4B7_gshared (ZipLatest_t75753AB37E06FE536221761213746766398F841E* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value, c5.Value);
		ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* L_0 = __this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* L_1 = L_0->___resultSelector_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_2 = __this->___c1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_4 = __this->___c2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_6 = __this->___c3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_8 = __this->___c4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_10 = __this->___c5_11;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		RuntimeObject* L_12;
		L_12 = ((  RuntimeObject* (*) (ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_1, L_3, L_5, L_7, L_9, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return L_12;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m7598472B7E29105092A7BE4EBCF003B18894ACB3_gshared (ZipLatest_t75753AB37E06FE536221761213746766398F841E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m23DF166B9AB478CAD12EB451FC05DCC663258B50_gshared (ZipLatest_t75753AB37E06FE536221761213746766398F841E* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m760AA71992D4FA0A0B23AE567B37FC8FC2AC456A_gshared (ZipLatest_t75753AB37E06FE536221761213746766398F841E* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`7<T1,T2,T3,T4,T5,T6,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mB98EF2914C2F88A4416ADCE15931A3020B278CB1_gshared (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5* __this, int32_t ___0_length, ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* ___1_parent, RuntimeObject* ___2_observer, RuntimeObject* ___3_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___0_length;
		RuntimeObject* L_2 = ___2_observer;
		RuntimeObject* L_3 = ___3_cancel;
		((  void (*) (NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_4 = ___1_parent;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_mEE82C7E7C91728FE03A933B225710C7632FFBD61_gshared (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_1 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_3 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_5 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_7 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_7);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// c5 = new ZipLatestObserver<T5>(gate, this, 4);
		RuntimeObject* L_8 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_9 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_9);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_9, L_8, (RuntimeObject*)__this, 4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->___c5_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c5_11), (void*)L_9);
		// c6 = new ZipLatestObserver<T6>(gate, this, 5);
		RuntimeObject* L_10 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_11 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		NullCheck(L_11);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_11, L_10, (RuntimeObject*)__this, 5, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		__this->___c6_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c6_12), (void*)L_11);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_12 = __this->___parent_5;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->___source1_1;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_14 = __this->___c1_7;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_13, (RuntimeObject*)L_14);
		V_0 = L_15;
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_16 = __this->___parent_5;
		NullCheck(L_16);
		RuntimeObject* L_17 = L_16->___source2_2;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_18 = __this->___c2_8;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_17, (RuntimeObject*)L_18);
		V_1 = L_19;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_20 = __this->___parent_5;
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->___source3_3;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_22 = __this->___c3_9;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_21, (RuntimeObject*)L_22);
		V_2 = L_23;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_24 = __this->___parent_5;
		NullCheck(L_24);
		RuntimeObject* L_25 = L_24->___source4_4;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_26 = __this->___c4_10;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 21), L_25, (RuntimeObject*)L_26);
		V_3 = L_27;
		// var s5 = parent.source5.Subscribe(c5);
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_28 = __this->___parent_5;
		NullCheck(L_28);
		RuntimeObject* L_29 = L_28->___source5_5;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_30 = __this->___c5_11;
		NullCheck(L_29);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_29, (RuntimeObject*)L_30);
		V_4 = L_31;
		// var s6 = parent.source6.Subscribe(c6);
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_32 = __this->___parent_5;
		NullCheck(L_32);
		RuntimeObject* L_33 = L_32->___source6_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_34 = __this->___c6_12;
		NullCheck(L_33);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_33, (RuntimeObject*)L_34);
		V_5 = L_35;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_36 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)6);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_37 = L_36;
		RuntimeObject* L_38 = V_0;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_38);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_39 = L_37;
		RuntimeObject* L_40 = V_1;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_40);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_41 = L_39;
		RuntimeObject* L_42 = V_2;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_42);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_43 = L_41;
		RuntimeObject* L_44 = V_3;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_44);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_45 = L_43;
		RuntimeObject* L_46 = V_4;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_46);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_47 = L_45;
		RuntimeObject* L_48 = V_5;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_48);
		RuntimeObject* L_49;
		L_49 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_47, NULL);
		return (RuntimeObject*)L_49;
	}
}
// TR UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_GetResult_m09874D6235B6A9FA77C6E11F4BDAF9E58B193543_gshared (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value, c5.Value, c6.Value);
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_0 = __this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* L_1 = L_0->___resultSelector_7;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_2 = __this->___c1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_4 = __this->___c2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_6 = __this->___c3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_8 = __this->___c4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_10 = __this->___c5_11;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_12 = __this->___c6_12;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		NullCheck(L_1);
		RuntimeObject* L_14;
		L_14 = ((  RuntimeObject* (*) (ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(L_1, L_3, L_5, L_7, L_9, L_11, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_14;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m1552481DDA00EC86F0E27A9A07534A7A866ED1B0_gshared (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m4A851907C9F2C17E5D3F6F8E49CFFD159BF387D1_gshared (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m8791F7B3A57784B70D0CFA84A5BD3AFD2BF311CB_gshared (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`8<T1,T2,T3,T4,T5,T6,T7,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mAD88B5650214C75FAD55000C54D4FDC719659711_gshared (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E* __this, int32_t ___0_length, ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* ___1_parent, RuntimeObject* ___2_observer, RuntimeObject* ___3_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___0_length;
		RuntimeObject* L_2 = ___2_observer;
		RuntimeObject* L_3 = ___3_cancel;
		((  void (*) (NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_4 = ___1_parent;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m734B9EB8FB67F7A1F0D67CB23359F6899D95669D_gshared (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_1 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_3 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_5 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_7 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_7);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// c5 = new ZipLatestObserver<T5>(gate, this, 4);
		RuntimeObject* L_8 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_9 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_9);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_9, L_8, (RuntimeObject*)__this, 4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->___c5_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c5_11), (void*)L_9);
		// c6 = new ZipLatestObserver<T6>(gate, this, 5);
		RuntimeObject* L_10 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_11 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		NullCheck(L_11);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_11, L_10, (RuntimeObject*)__this, 5, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		__this->___c6_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c6_12), (void*)L_11);
		// c7 = new ZipLatestObserver<T7>(gate, this, 6);
		RuntimeObject* L_12 = __this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_13 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
		NullCheck(L_13);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_13, L_12, (RuntimeObject*)__this, 6, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		__this->___c7_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c7_13), (void*)L_13);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_14 = __this->___parent_5;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___source1_1;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_16 = __this->___c1_7;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_15, (RuntimeObject*)L_16);
		V_0 = L_17;
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_18 = __this->___parent_5;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___source2_2;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_20 = __this->___c2_8;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_19, (RuntimeObject*)L_20);
		V_1 = L_21;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_22 = __this->___parent_5;
		NullCheck(L_22);
		RuntimeObject* L_23 = L_22->___source3_3;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_24 = __this->___c3_9;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 21), L_23, (RuntimeObject*)L_24);
		V_2 = L_25;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_26 = __this->___parent_5;
		NullCheck(L_26);
		RuntimeObject* L_27 = L_26->___source4_4;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_28 = __this->___c4_10;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_27, (RuntimeObject*)L_28);
		V_3 = L_29;
		// var s5 = parent.source5.Subscribe(c5);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_30 = __this->___parent_5;
		NullCheck(L_30);
		RuntimeObject* L_31 = L_30->___source5_5;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_32 = __this->___c5_11;
		NullCheck(L_31);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_31, (RuntimeObject*)L_32);
		V_4 = L_33;
		// var s6 = parent.source6.Subscribe(c6);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_34 = __this->___parent_5;
		NullCheck(L_34);
		RuntimeObject* L_35 = L_34->___source6_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_36 = __this->___c6_12;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_35, (RuntimeObject*)L_36);
		V_5 = L_37;
		// var s7 = parent.source7.Subscribe(c7);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_38 = __this->___parent_5;
		NullCheck(L_38);
		RuntimeObject* L_39 = L_38->___source7_7;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_40 = __this->___c7_13;
		NullCheck(L_39);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_39, (RuntimeObject*)L_40);
		V_6 = L_41;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6, s7);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_42 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)7);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_43 = L_42;
		RuntimeObject* L_44 = V_0;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_45 = L_43;
		RuntimeObject* L_46 = V_1;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_46);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_47 = L_45;
		RuntimeObject* L_48 = V_2;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_48);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_49 = L_47;
		RuntimeObject* L_50 = V_3;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_50);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_51 = L_49;
		RuntimeObject* L_52 = V_4;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_52);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_53 = L_51;
		RuntimeObject* L_54 = V_5;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_54);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_55 = L_53;
		RuntimeObject* L_56 = V_6;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_56);
		RuntimeObject* L_57;
		L_57 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_55, NULL);
		return (RuntimeObject*)L_57;
	}
}
// TR UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_GetResult_mDFD8B52D2FD4CEABB872AACA3CE6BB3467E21638_gshared (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value, c5.Value, c6.Value, c7.Value);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_0 = __this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* L_1 = L_0->___resultSelector_8;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_2 = __this->___c1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_4 = __this->___c2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_6 = __this->___c3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_8 = __this->___c4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_10 = __this->___c5_11;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_12 = __this->___c6_12;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_14 = __this->___c7_13;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		NullCheck(L_1);
		RuntimeObject* L_16;
		L_16 = ((  RuntimeObject* (*) (ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_16;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_mD122C2F1E0A6286E88BC51A434B1284528E92297_gshared (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 40), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mC578634925CF3F0733568B44D85B53F364A99256_gshared (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 40), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m7B7D7E76DA0E743662465B33B9065F646D5CAE1B_gshared (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 40), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_Multicast(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* currentDelegate = reinterpret_cast<ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenInst(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, method);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenStatic(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, method);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenStaticInvoker(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_ClosedStaticInvoker(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenVirtual(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenInterface(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenGenericVirtual(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenGenericInterface(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3);
}
// System.Void UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_4__ctor_m3475633A4B10A188BD0B00D8D976FBDAE2257BAC_gshared (ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_gshared (ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_4_BeginInvoke_mBC37576C9AA95FB96A66E84B8567D0C83699EFDB_gshared (ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// TR UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_4_EndInvoke_m25B62E6BF7104267C24B43B93FE6A712F14F0192_gshared (ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_Multicast(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* currentDelegate = reinterpret_cast<ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenInst(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, method);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenStatic(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, method);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenStaticInvoker(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_ClosedStaticInvoker(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenVirtual(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenInterface(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenGenericVirtual(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenGenericInterface(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
// System.Void UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_5__ctor_mF09DD180FCC42EEB4B9AAA0D23AB68C755F398A7_gshared (ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_gshared (ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_5_BeginInvoke_m337BD389BECAC9906411EC3581DD66E3E02147F4_gshared (ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	void *__d_args[5] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// TR UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_5_EndInvoke_mE1AE8A58300C5854BE4515DE668207CA4D9DC56E_gshared (ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_Multicast(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* currentDelegate = reinterpret_cast<ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenInst(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, method);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenStatic(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, method);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenStaticInvoker(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_ClosedStaticInvoker(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenVirtual(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenInterface(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenGenericVirtual(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenGenericInterface(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
// System.Void UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_6__ctor_m947E8247962CC1B2484522A45D11E9446B65A0CC_gshared (ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_gshared (ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_6_BeginInvoke_mF74829C7D6CEB961AA2F9171C10549A4EDDBF56B_gshared (ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	__d_args[4] = ___4_arg5;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// TR UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_6_EndInvoke_m5A8428E735D142921B53B5982785E5CE6ACB3A30_gshared (ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_Multicast(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* currentDelegate = reinterpret_cast<ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenInst(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, method);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenStatic(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, method);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenStaticInvoker(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_ClosedStaticInvoker(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenVirtual(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenInterface(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenGenericVirtual(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenGenericInterface(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
// System.Void UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_7__ctor_mDD80003FFF0CE23E122E32271E19C57E60FF43F5_gshared (ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 6;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_gshared (ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_7_BeginInvoke_m60BC2F1C92CD392A359576B393B0210FFC3D6B5F_gshared (ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___6_callback, RuntimeObject* ___7_object, const RuntimeMethod* method) 
{
	void *__d_args[7] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	__d_args[4] = ___4_arg5;
	__d_args[5] = ___5_arg6;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___6_callback, (RuntimeObject*)___7_object);
}
// TR UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_7_EndInvoke_m38008295D055F24D19811E7FE3661426AE6223BD_gshared (ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_Multicast(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* currentDelegate = reinterpret_cast<ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenInst(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, method);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenStatic(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, method);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenStaticInvoker(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_ClosedStaticInvoker(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	return InvokerFuncInvoker8< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenVirtual(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenInterface(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenGenericVirtual(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenGenericInterface(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
// System.Void UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_8__ctor_m34D6F0EBB727FA8E19A4FCE9EDB182F890526739_gshared (ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 7;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_gshared (ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,T7,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_8_BeginInvoke_m76A95256A7D441C415E66E10CF4FC9AFD78FD2FE_gshared (ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___7_callback, RuntimeObject* ___8_object, const RuntimeMethod* method) 
{
	void *__d_args[8] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	__d_args[4] = ___4_arg5;
	__d_args[5] = ___5_arg6;
	__d_args[6] = ___6_arg7;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___7_callback, (RuntimeObject*)___8_object);
}
// TR UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_8_EndInvoke_m0AA23DCE9D8234BCB287D0E677F35B93C7782BC5_gshared (ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`1<System.Object>::.ctor(System.IObservable`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_1__ctor_m7AA73D8D815C39EE693DBFAD9361E7307C0A5001_gshared (ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1* __this, IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* ___0_sources, const RuntimeMethod* method) 
{
	{
		// : base(true)
		((  void (*) (OperatorObservableBase_1_tA0344887F127C0AF02971FF71FFDF8B627F13EEB*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObservableBase_1_tA0344887F127C0AF02971FF71FFDF8B627F13EEB*)__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.sources = sources;
		IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* L_0 = ___0_sources;
		__this->___sources_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sources_1), (void*)L_0);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`1<System.Object>::SubscribeCore(System.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_1_SubscribeCore_m56F919E9EE62F7EA006DED80B7D8FD3FAD93F46A_gshared (ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_2 = (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*, ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<TLeft>,System.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_3__ctor_mB40DE79C4737271394F2BC6D74F4C5693BF51860_gshared (ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* __this, RuntimeObject* ___0_left, RuntimeObject* ___1_right, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___2_selector, const RuntimeMethod* method) 
{
	ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* G_B2_0 = NULL;
	ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___0_left;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___1_right;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B3_1, (bool)G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		// this.left = left;
		RuntimeObject* L_4 = ___0_left;
		__this->___left_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_1), (void*)L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___1_right;
		__this->___right_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_2), (void*)L_5);
		// this.selector = selector;
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_6 = ___2_selector;
		__this->___selector_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_3_SubscribeCore_m3BFA809DD3D811E6C5C51296C700807AC485C28C_gshared (ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8* L_2 = (ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_2);
		((  void (*) (ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8*, ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,UniRx.Operators.ZipLatestFunc`4<T1,T2,T3,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_4__ctor_m635ADFBA5E8D065B2E9DA592970C611470AF07AD_gshared (ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* ___3_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* G_B3_0 = NULL;
	ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* G_B1_0 = NULL;
	ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* G_B4_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = G_B2_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001a:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B4_1, (bool)G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		// this.source1 = source1;
		RuntimeObject* L_6 = ___0_source1;
		__this->___source1_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_6);
		// this.source2 = source2;
		RuntimeObject* L_7 = ___1_source2;
		__this->___source2_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_7);
		// this.source3 = source3;
		RuntimeObject* L_8 = ___2_source3;
		__this->___source3_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_8);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* L_9 = ___3_resultSelector;
		__this->___resultSelector_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_4), (void*)L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_4_SubscribeCore_mF67531ADEE9F79332D6EC2CEE9EBA44CA7C79947_gshared (ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(3, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C* L_2 = (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		((  void (*) (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C*, int32_t, ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, 3, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,UniRx.Operators.ZipLatestFunc`5<T1,T2,T3,T4,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_5__ctor_m74641D75F3CC0105F4966B2B2E7D7B1D40A4E8B6_gshared (ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* ___4_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* G_B4_0 = NULL;
	ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* G_B1_0 = NULL;
	ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* G_B2_0 = NULL;
	ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* G_B5_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B4_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B4_0 = G_B2_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = G_B3_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0023:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B5_1, (bool)G_B5_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		// this.source1 = source1;
		RuntimeObject* L_8 = ___0_source1;
		__this->___source1_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_8);
		// this.source2 = source2;
		RuntimeObject* L_9 = ___1_source2;
		__this->___source2_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_9);
		// this.source3 = source3;
		RuntimeObject* L_10 = ___2_source3;
		__this->___source3_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_10);
		// this.source4 = source4;
		RuntimeObject* L_11 = ___3_source4;
		__this->___source4_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_11);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* L_12 = ___4_resultSelector;
		__this->___resultSelector_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_5), (void*)L_12);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_5_SubscribeCore_m4FD7C42DAE422FD027204812C12AC5653C0DAED6_gshared (ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(4, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF* L_2 = (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		((  void (*) (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF*, int32_t, ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, 4, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,UniRx.Operators.ZipLatestFunc`6<T1,T2,T3,T4,T5,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_6__ctor_m73670D17DEFD00A79890549FCF9C7B373E955FC3_gshared (ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* ___5_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* G_B5_0 = NULL;
	ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* G_B1_0 = NULL;
	ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* G_B2_0 = NULL;
	ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* G_B3_0 = NULL;
	ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* G_B6_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B5_0 = __this;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B5_0 = G_B1_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B5_0 = G_B2_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B6_1, (bool)G_B6_0, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// this.source1 = source1;
		RuntimeObject* L_10 = ___0_source1;
		__this->___source1_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_10);
		// this.source2 = source2;
		RuntimeObject* L_11 = ___1_source2;
		__this->___source2_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_11);
		// this.source3 = source3;
		RuntimeObject* L_12 = ___2_source3;
		__this->___source3_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_12);
		// this.source4 = source4;
		RuntimeObject* L_13 = ___3_source4;
		__this->___source4_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_13);
		// this.source5 = source5;
		RuntimeObject* L_14 = ___4_source5;
		__this->___source5_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_14);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* L_15 = ___5_resultSelector;
		__this->___resultSelector_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_6), (void*)L_15);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_6_SubscribeCore_mC43191AC1E0708A596A286E1B5185D6930CFBEC6_gshared (ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(5, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_t75753AB37E06FE536221761213746766398F841E* L_2 = (ZipLatest_t75753AB37E06FE536221761213746766398F841E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		((  void (*) (ZipLatest_t75753AB37E06FE536221761213746766398F841E*, int32_t, ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, 5, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t75753AB37E06FE536221761213746766398F841E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,UniRx.Operators.ZipLatestFunc`7<T1,T2,T3,T4,T5,T6,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_7__ctor_m04ED95E737CD33DD64A4B8C74BDC9CCDFE95509E_gshared (ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* ___6_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* G_B6_0 = NULL;
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* G_B1_0 = NULL;
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* G_B2_0 = NULL;
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* G_B3_0 = NULL;
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* G_B4_0 = NULL;
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* G_B7_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B6_0 = __this;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B6_0 = G_B1_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B6_0 = G_B2_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B6_0 = G_B3_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = G_B5_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0035:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B7_1, (bool)G_B7_0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// this.source1 = source1;
		RuntimeObject* L_12 = ___0_source1;
		__this->___source1_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_12);
		// this.source2 = source2;
		RuntimeObject* L_13 = ___1_source2;
		__this->___source2_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_13);
		// this.source3 = source3;
		RuntimeObject* L_14 = ___2_source3;
		__this->___source3_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_14);
		// this.source4 = source4;
		RuntimeObject* L_15 = ___3_source4;
		__this->___source4_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_15);
		// this.source5 = source5;
		RuntimeObject* L_16 = ___4_source5;
		__this->___source5_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_16);
		// this.source6 = source6;
		RuntimeObject* L_17 = ___5_source6;
		__this->___source6_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_17);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* L_18 = ___6_resultSelector;
		__this->___resultSelector_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_7), (void*)L_18);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_7_SubscribeCore_m6D9BE9D541D39FD13F37A37AF03859C448906788_gshared (ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(6, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5* L_2 = (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		((  void (*) (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5*, int32_t, ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, 6, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,System.IObservable`1<T7>,UniRx.Operators.ZipLatestFunc`8<T1,T2,T3,T4,T5,T6,T7,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_8__ctor_m8546E32395A229578995106DFF3483C1C596587B_gshared (ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* ___7_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B7_0 = NULL;
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B1_0 = NULL;
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B2_0 = NULL;
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B3_0 = NULL;
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B4_0 = NULL;
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B5_0 = NULL;
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B8_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     source7.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B7_0 = __this;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B7_0 = G_B1_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B7_0 = G_B2_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B7_0 = G_B3_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B7_0 = G_B4_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B6_0 = G_B5_0;
		if (L_11)
		{
			G_B7_0 = G_B5_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_12 = ___6_source7;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = G_B6_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003e:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B8_1, (bool)G_B8_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		// this.source1 = source1;
		RuntimeObject* L_14 = ___0_source1;
		__this->___source1_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_14);
		// this.source2 = source2;
		RuntimeObject* L_15 = ___1_source2;
		__this->___source2_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_15);
		// this.source3 = source3;
		RuntimeObject* L_16 = ___2_source3;
		__this->___source3_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_16);
		// this.source4 = source4;
		RuntimeObject* L_17 = ___3_source4;
		__this->___source4_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_17);
		// this.source5 = source5;
		RuntimeObject* L_18 = ___4_source5;
		__this->___source5_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_18);
		// this.source6 = source6;
		RuntimeObject* L_19 = ___5_source6;
		__this->___source6_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_19);
		// this.source7 = source7;
		RuntimeObject* L_20 = ___6_source7;
		__this->___source7_7 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7_7), (void*)L_20);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* L_21 = ___7_resultSelector;
		__this->___resultSelector_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_8), (void*)L_21);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_8_SubscribeCore_mBF184095B7A3EAC66C343208AA448ABE51A4BB7F_gshared (ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(7, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E* L_2 = (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		((  void (*) (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E*, int32_t, ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, 7, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::.ctor(UniRx.Operators.ZipLatestObservable`1/ZipLatest<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver__ctor_m2BB422D84B99D5A3E2C23BC3A703E304D1A6D67D_gshared (ZipLatestObserver_t139F226197E3E8ED5756433C1552FA4767EC7532* __this, ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* ___0_parent, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		// public ZipLatestObserver(ZipLatest parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.parent = parent;
		ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_0 = ___0_parent;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// this.index = index;
		int32_t L_1 = ___1_index;
		__this->___index_1 = L_1;
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnNext_m297FB6E0221127E6F8A9ACE79A581947575B456E_gshared (ZipLatestObserver_t139F226197E3E8ED5756433C1552FA4767EC7532* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_0 = __this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0049;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0049:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.values[index] = value;
			ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_5 = __this->___parent_0;
			NullCheck(L_5);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5->___values_5;
			int32_t L_7 = __this->___index_1;
			RuntimeObject* L_8 = ___0_value;
			NullCheck(L_6);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
			// parent.Publish(index);
			ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_9 = __this->___parent_0;
			int32_t L_10 = __this->___index_1;
			NullCheck(L_9);
			((  void (*) (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			// }
			goto IL_004a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnError_mD5813A99366CA9F9BA0F496659EAD546DC1866AC_gshared (ZipLatestObserver_t139F226197E3E8ED5756433C1552FA4767EC7532* __this, Exception_t* ___0_ex, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_0 = __this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.OnError(ex);
			ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_5 = __this->___parent_0;
			Exception_t* L_6 = ___0_ex;
			NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_5);
			VirtualActionInvoker1< Exception_t* >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_5, L_6);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnCompleted_m476D31848A164D8D5A8E2F0E8CC1547F47CE5F77_gshared (ZipLatestObserver_t139F226197E3E8ED5756433C1552FA4767EC7532* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// lock (parent.gate)
		ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_0 = __this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_006d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// parent.isCompleted[index] = true;
				ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_5 = __this->___parent_0;
				NullCheck(L_5);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = L_5->___isCompleted_7;
				int32_t L_7 = __this->___index_1;
				NullCheck(L_6);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
				// var allTrue = true;
				V_2 = (bool)1;
				// for (int i = 0; i < parent.length; i++)
				V_3 = 0;
				goto IL_0046_1;
			}

IL_002f_1:
			{
				// if (!parent.isCompleted[i])
				ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_8 = __this->___parent_0;
				NullCheck(L_8);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = L_8->___isCompleted_7;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				uint8_t L_12 = (uint8_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				if (L_12)
				{
					goto IL_0042_1;
				}
			}
			{
				// allTrue = false;
				V_2 = (bool)0;
				// break;
				goto IL_0054_1;
			}

IL_0042_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_13 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0046_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_14 = V_3;
				ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_15 = __this->___parent_0;
				NullCheck(L_15);
				int32_t L_16 = L_15->___length_4;
				if ((((int32_t)L_14) < ((int32_t)L_16)))
				{
					goto IL_002f_1;
				}
			}

IL_0054_1:
			{
				// if (allTrue)
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_0062_1;
				}
			}
			{
				// parent.OnCompleted();
				ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_18 = __this->___parent_0;
				NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_18);
				VirtualActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_18);
			}

IL_0062_1:
			{
				// }
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// }
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
// T UniRx.Operators.ZipLatestObserver`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObserver_1_get_Value_mBB0CB04874E69787DA2C86B7BD277C95B1F88F6B_gshared (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* __this, const RuntimeMethod* method) 
{
	{
		// public T Value { get { return value; } }
		RuntimeObject* L_0 = __this->___value_3;
		return L_0;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::.ctor(System.Object,UniRx.Operators.IZipLatestObservable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1__ctor_mFE69338B7BC68ECAB6534AD07995B612A37CE320_gshared (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* __this, RuntimeObject* ___0_gate, RuntimeObject* ___1_parent, int32_t ___2_index, const RuntimeMethod* method) 
{
	{
		// public ZipLatestObserver(object gate, IZipLatestObservable parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.gate = gate;
		RuntimeObject* L_0 = ___0_gate;
		__this->___gate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_0), (void*)L_0);
		// this.parent = parent;
		RuntimeObject* L_1 = ___1_parent;
		__this->___parent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_1), (void*)L_1);
		// this.index = index;
		int32_t L_2 = ___2_index;
		__this->___index_2 = L_2;
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnNext_mFC5A83BF7FA74611FCFBD5405EB0E43EC730AF84_gshared (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = __this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0034;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// this.value = value;
			RuntimeObject* L_4 = ___0_value;
			__this->___value_3 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___value_3), (void*)L_4);
			// parent.Publish(index);
			RuntimeObject* L_5 = __this->___parent_1;
			int32_t L_6 = __this->___index_2;
			NullCheck(L_5);
			InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UniRx.Operators.IZipLatestObservable::Publish(System.Int32) */, IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var, L_5, L_6);
			// }
			goto IL_0035;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnError_m925631B1592C0D2B56C526C87E27A54185529B58_gshared (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = __this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Fail(error);
			RuntimeObject* L_4 = __this->___parent_1;
			Exception_t* L_5 = ___0_error;
			NullCheck(L_4);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.Operators.IZipLatestObservable::Fail(System.Exception) */, IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_0029;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnCompleted_m8E0366ADE0C21BE143DD07E32C7C84B757E5FD2A_gshared (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = __this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Done(index);
			RuntimeObject* L_4 = __this->___parent_1;
			int32_t L_5 = __this->___index_2;
			NullCheck(L_4);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UniRx.Operators.IZipLatestObservable::Done(System.Int32) */, IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
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
// System.Void UniRx.Operators.ZipObservable`1<System.Object>::.ctor(System.IObservable`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_1__ctor_m1D6CDF9823B7AE2A1B462FF7B50CCEDCF751452B_gshared (ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2* __this, IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* ___0_sources, const RuntimeMethod* method) 
{
	{
		// : base(true)
		((  void (*) (OperatorObservableBase_1_tA0344887F127C0AF02971FF71FFDF8B627F13EEB*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObservableBase_1_tA0344887F127C0AF02971FF71FFDF8B627F13EEB*)__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.sources = sources;
		IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* L_0 = ___0_sources;
		__this->___sources_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sources_1), (void*)L_0);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`1<System.Object>::SubscribeCore(System.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_1_SubscribeCore_m477E55703C3BFC39B5441BF1599FC8F71985E08D_gshared (ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_2 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*, ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<TLeft>,System.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_3__ctor_m1836B77B94AC9EFD4C206FC5D84AF6DA75DFB0D4_gshared (ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* __this, RuntimeObject* ___0_left, RuntimeObject* ___1_right, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___2_selector, const RuntimeMethod* method) 
{
	ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* G_B2_0 = NULL;
	ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___0_left;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___1_right;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B3_1, (bool)G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		// this.left = left;
		RuntimeObject* L_4 = ___0_left;
		__this->___left_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_1), (void*)L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___1_right;
		__this->___right_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_2), (void*)L_5);
		// this.selector = selector;
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_6 = ___2_selector;
		__this->___selector_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_3_SubscribeCore_mAEC7D087D634182482F4210DBAE2A188929FCEF5_gshared (ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665* L_2 = (Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_2);
		((  void (*) (Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665*, ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,UniRx.Operators.ZipFunc`4<T1,T2,T3,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_4__ctor_m59B9AA6B1FC26F2DF7CAD34D3E2BCC35BF326305_gshared (ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* ___3_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* G_B3_0 = NULL;
	ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* G_B1_0 = NULL;
	ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* G_B4_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = G_B2_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001a:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B4_1, (bool)G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		// this.source1 = source1;
		RuntimeObject* L_6 = ___0_source1;
		__this->___source1_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_6);
		// this.source2 = source2;
		RuntimeObject* L_7 = ___1_source2;
		__this->___source2_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_7);
		// this.source3 = source3;
		RuntimeObject* L_8 = ___2_source3;
		__this->___source3_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_8);
		// this.resultSelector = resultSelector;
		ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* L_9 = ___3_resultSelector;
		__this->___resultSelector_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_4), (void*)L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_4_SubscribeCore_mA6508A3734225A29A8BD06563978D1A35D5DE5FB_gshared (ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB* L_2 = (Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		((  void (*) (Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB*, ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,UniRx.Operators.ZipFunc`5<T1,T2,T3,T4,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_5__ctor_mE0EEF334F61425F403823BA59B772FCEC5FD58CB_gshared (ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* ___4_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* G_B4_0 = NULL;
	ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* G_B1_0 = NULL;
	ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* G_B2_0 = NULL;
	ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* G_B5_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B4_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B4_0 = G_B2_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = G_B3_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0023:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B5_1, (bool)G_B5_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		// this.source1 = source1;
		RuntimeObject* L_8 = ___0_source1;
		__this->___source1_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_8);
		// this.source2 = source2;
		RuntimeObject* L_9 = ___1_source2;
		__this->___source2_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_9);
		// this.source3 = source3;
		RuntimeObject* L_10 = ___2_source3;
		__this->___source3_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_10);
		// this.source4 = source4;
		RuntimeObject* L_11 = ___3_source4;
		__this->___source4_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_11);
		// this.resultSelector = resultSelector;
		ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* L_12 = ___4_resultSelector;
		__this->___resultSelector_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_5), (void*)L_12);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_5_SubscribeCore_mB34E906CA3694E10EC54041CF66691C615473D2B_gshared (ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53* L_2 = (Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		((  void (*) (Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53*, ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,UniRx.Operators.ZipFunc`6<T1,T2,T3,T4,T5,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_6__ctor_mF7EBE09C23CCB0A71FF74BDEC898D65E281A948D_gshared (ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* ___5_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* G_B5_0 = NULL;
	ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* G_B1_0 = NULL;
	ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* G_B2_0 = NULL;
	ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* G_B3_0 = NULL;
	ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* G_B6_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B5_0 = __this;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B5_0 = G_B1_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B5_0 = G_B2_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B6_1, (bool)G_B6_0, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// this.source1 = source1;
		RuntimeObject* L_10 = ___0_source1;
		__this->___source1_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_10);
		// this.source2 = source2;
		RuntimeObject* L_11 = ___1_source2;
		__this->___source2_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_11);
		// this.source3 = source3;
		RuntimeObject* L_12 = ___2_source3;
		__this->___source3_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_12);
		// this.source4 = source4;
		RuntimeObject* L_13 = ___3_source4;
		__this->___source4_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_13);
		// this.source5 = source5;
		RuntimeObject* L_14 = ___4_source5;
		__this->___source5_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_14);
		// this.resultSelector = resultSelector;
		ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* L_15 = ___5_resultSelector;
		__this->___resultSelector_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_6), (void*)L_15);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_6_SubscribeCore_m82400F4B92AC5E7E00D39E19657D8D7E8D71823D_gshared (ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA* L_2 = (Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		((  void (*) (Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA*, ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_7__ctor_m3C22FA7CEFD785246B8CFF3A57C014A6930C1696_gshared (ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* ___6_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B6_0 = NULL;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B1_0 = NULL;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B2_0 = NULL;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B3_0 = NULL;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B4_0 = NULL;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B7_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B6_0 = __this;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B6_0 = G_B1_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B6_0 = G_B2_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B6_0 = G_B3_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = G_B5_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0035:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B7_1, (bool)G_B7_0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// this.source1 = source1;
		RuntimeObject* L_12 = ___0_source1;
		__this->___source1_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_12);
		// this.source2 = source2;
		RuntimeObject* L_13 = ___1_source2;
		__this->___source2_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_13);
		// this.source3 = source3;
		RuntimeObject* L_14 = ___2_source3;
		__this->___source3_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_14);
		// this.source4 = source4;
		RuntimeObject* L_15 = ___3_source4;
		__this->___source4_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_15);
		// this.source5 = source5;
		RuntimeObject* L_16 = ___4_source5;
		__this->___source5_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_16);
		// this.source6 = source6;
		RuntimeObject* L_17 = ___5_source6;
		__this->___source6_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_17);
		// this.resultSelector = resultSelector;
		ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* L_18 = ___6_resultSelector;
		__this->___resultSelector_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_7), (void*)L_18);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_7_SubscribeCore_mA6A71EA561A648CABC815028263E92CCD33518CA_gshared (ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1* L_2 = (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		((  void (*) (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1*, ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,System.IObservable`1<T7>,UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_8__ctor_m107A8110E5B0DB2CF2060E356C0076E388FA5F9A_gshared (ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* ___7_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B7_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B1_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B2_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B3_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B4_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B5_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B8_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     source7.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B7_0 = __this;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B7_0 = G_B1_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B7_0 = G_B2_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B7_0 = G_B3_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B7_0 = G_B4_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B6_0 = G_B5_0;
		if (L_11)
		{
			G_B7_0 = G_B5_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_12 = ___6_source7;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = G_B6_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003e:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B8_1, (bool)G_B8_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		// this.source1 = source1;
		RuntimeObject* L_14 = ___0_source1;
		__this->___source1_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_14);
		// this.source2 = source2;
		RuntimeObject* L_15 = ___1_source2;
		__this->___source2_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_15);
		// this.source3 = source3;
		RuntimeObject* L_16 = ___2_source3;
		__this->___source3_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_16);
		// this.source4 = source4;
		RuntimeObject* L_17 = ___3_source4;
		__this->___source4_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_17);
		// this.source5 = source5;
		RuntimeObject* L_18 = ___4_source5;
		__this->___source5_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_18);
		// this.source6 = source6;
		RuntimeObject* L_19 = ___5_source6;
		__this->___source6_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_19);
		// this.source7 = source7;
		RuntimeObject* L_20 = ___6_source7;
		__this->___source7_7 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7_7), (void*)L_20);
		// this.resultSelector = resultSelector;
		ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* L_21 = ___7_resultSelector;
		__this->___resultSelector_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_8), (void*)L_21);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_8_SubscribeCore_m58E177B4406807F458726219AC59A47B245D78B1_gshared (ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t18CEBD71A9520CC4E97175478D72666FE988B182* L_2 = (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		((  void (*) (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182*, ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::.ctor(UniRx.Operators.ZipObservable`1/Zip<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver__ctor_m6F8187EFDEF9046B285A43BAAF557D66C0D7FF48_gshared (ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A* __this, Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* ___0_parent, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		// public ZipObserver(Zip parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.parent = parent;
		Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_0 = ___0_parent;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// this.index = index;
		int32_t L_1 = ___1_index;
		__this->___index_1 = L_1;
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnNext_m80D5844DD6FF3B28A0238C2F0926A15A2593F30F_gshared (ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_0 = __this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004a;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.queues[index].Enqueue(value);
			Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_5 = __this->___parent_0;
			NullCheck(L_5);
			Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* L_6 = L_5->___queues_4;
			int32_t L_7 = __this->___index_1;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			RuntimeObject* L_10 = ___0_value;
			NullCheck(L_9);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			// parent.Dequeue(index);
			Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_11 = __this->___parent_0;
			int32_t L_12 = __this->___index_1;
			NullCheck(L_11);
			((  void (*) (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			// }
			goto IL_004b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnError_mEFF1C9E4D750565BF8FAFE1DBA7EE0FE7CBC109C_gshared (ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A* __this, Exception_t* ___0_ex, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_0 = __this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.OnError(ex);
			Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_5 = __this->___parent_0;
			Exception_t* L_6 = ___0_ex;
			NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_5);
			VirtualActionInvoker1< Exception_t* >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_5, L_6);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnCompleted_m819A749EB60F84FF2C3AD802C46613AF2071D55D_gshared (ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// lock (parent.gate)
		Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_0 = __this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_006d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// parent.isDone[index] = true;
				Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_5 = __this->___parent_0;
				NullCheck(L_5);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = L_5->___isDone_5;
				int32_t L_7 = __this->___index_1;
				NullCheck(L_6);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
				// var allTrue = true;
				V_2 = (bool)1;
				// for (int i = 0; i < parent.length; i++)
				V_3 = 0;
				goto IL_0046_1;
			}

IL_002f_1:
			{
				// if (!parent.isDone[i])
				Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_8 = __this->___parent_0;
				NullCheck(L_8);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = L_8->___isDone_5;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				uint8_t L_12 = (uint8_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				if (L_12)
				{
					goto IL_0042_1;
				}
			}
			{
				// allTrue = false;
				V_2 = (bool)0;
				// break;
				goto IL_0054_1;
			}

IL_0042_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_13 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0046_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_14 = V_3;
				Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_15 = __this->___parent_0;
				NullCheck(L_15);
				int32_t L_16 = L_15->___length_6;
				if ((((int32_t)L_14) < ((int32_t)L_16)))
				{
					goto IL_002f_1;
				}
			}

IL_0054_1:
			{
				// if (allTrue)
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_0062_1;
				}
			}
			{
				// parent.OnCompleted();
				Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_18 = __this->___parent_0;
				NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_18);
				VirtualActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_18);
			}

IL_0062_1:
			{
				// }
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// }
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
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::.ctor(System.Object,UniRx.Operators.IZipObservable,System.Int32,System.Collections.Generic.Queue`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1__ctor_m4D843FE326A7A713DBCDF79E448F52691F2C6420_gshared (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* __this, RuntimeObject* ___0_gate, RuntimeObject* ___1_parent, int32_t ___2_index, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___3_queue, const RuntimeMethod* method) 
{
	{
		// public ZipObserver(object gate, IZipObservable parent, int index, Queue<T> queue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.gate = gate;
		RuntimeObject* L_0 = ___0_gate;
		__this->___gate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_0), (void*)L_0);
		// this.parent = parent;
		RuntimeObject* L_1 = ___1_parent;
		__this->___parent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_1), (void*)L_1);
		// this.index = index;
		int32_t L_2 = ___2_index;
		__this->___index_2 = L_2;
		// this.queue = queue;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = ___3_queue;
		__this->___queue_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnNext_mD2F91872761B21627C585A6A45A9AAC931A41301_gshared (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = __this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// queue.Enqueue(value);
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = __this->___queue_3;
			RuntimeObject* L_5 = ___0_value;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			// parent.Dequeue(index);
			RuntimeObject* L_6 = __this->___parent_1;
			int32_t L_7 = __this->___index_2;
			NullCheck(L_6);
			InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UniRx.Operators.IZipObservable::Dequeue(System.Int32) */, IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var, L_6, L_7);
			// }
			goto IL_003a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnError_mC5BE9D205FE077023C208D78DE7D551AE2BDE072_gshared (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = __this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Fail(error);
			RuntimeObject* L_4 = __this->___parent_1;
			Exception_t* L_5 = ___0_error;
			NullCheck(L_4);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.Operators.IZipObservable::Fail(System.Exception) */, IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_0029;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnCompleted_m84919945B4901F74AC57266885E64E266F8AB50C_gshared (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = __this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Done(index);
			RuntimeObject* L_4 = __this->___parent_1;
			int32_t L_5 = __this->___index_2;
			NullCheck(L_4);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UniRx.Operators.IZipObservable::Done(System.Int32) */, IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
